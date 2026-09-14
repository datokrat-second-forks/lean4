// Lean compiler output
// Module: Lean.Meta.Instances
// Imports: public import Init.Data.Range.Polymorphic.Stream public import Lean.Meta.DiscrTree.Main public import Lean.Meta.CollectMVars import Lean.Meta.PPBinder import Lean.Util.UnusedBinders import Lean.Meta.CollectFVars import Init.While import Lean.OriginalConstKind import Lean.ProjFns
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_getAttrParamOptPrio(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_getOutParamPositions_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_setPPExplicit(lean_object*, uint8_t);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
uint8_t l_Lean_instBEqReducibilityStatus_beq(uint8_t, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ConstantInfo_isDefinition(lean_object*);
uint8_t l_Lean_wasOriginallyDefn(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_CollectFVars_State_addDependencies(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_ppAsBinder(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Expr_collectFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getBinderInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_State_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "synthInstance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "checkSynthOrder"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(239, 153, 166, 25, 45, 140, 142, 203)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(127, 121, 149, 143, 151, 161, 209, 111)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "check that instances do not introduce metavariable in non-out-params"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(210, 135, 61, 136, 69, 26, 61, 117)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(214, 212, 166, 255, 222, 243, 240, 184)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthInstance_checkSynthOrder;
static const lean_array_object l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0_value;
static const lean_string_object l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2 = (const lean_object*)&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstanceEntry_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstanceEntry;
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqInstanceEntry___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqInstanceEntry___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instBEqInstanceEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqInstanceEntry___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instBEqInstanceEntry___closed__0 = (const lean_object*)&l_Lean_Meta_instBEqInstanceEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instBEqInstanceEntry = (const lean_object*)&l_Lean_Meta_instBEqInstanceEntry___closed__0_value;
static const lean_string_object l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<local>"};
static const lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_instToFormatInstanceEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instToFormatInstanceEntry___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instToFormatInstanceEntry___closed__0 = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instToFormatInstanceEntry = (const lean_object*)&l_Lean_Meta_instToFormatInstanceEntry___closed__0_value;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedInstances_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstances_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstances_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstances_default___closed__1;
static lean_once_cell_t l_Lean_Meta_instInhabitedInstances_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInstances_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstances_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInstances;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addInstanceEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_eraseCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Instances_erase___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Instances_erase___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Instances_erase___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Instances_erase___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Instances_erase___redArg___closed__3;
static const lean_string_object l_Lean_Meta_Instances_erase___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "` does not have [instance] attribute"};
static const lean_object* l_Lean_Meta_Instances_erase___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Instances_erase___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Instances_erase___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Instances_erase___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "instanceExtension"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 253, 187, 89, 234, 162, 232, 19)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_addInstanceEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instanceExtension;
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "semiOutParam"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 187, 140, 108, 143, 232, 13, 120)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "cannot find synthesization order for instance "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " with type"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "\nall remaining arguments have metavariables:"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "synthOrder"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 119, 89, 231, 199, 121, 219, 201)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "synthesizing the arguments of "};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " in the order "};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "instance does not provide concrete values for (semi-)out-params"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "argument "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ": `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = " that cannot be inferred using typeclass synthesis. Specifically\n"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 176, .m_capacity = 176, .m_length = 175, .m_data = "\n\nThese arguments are not instance-implicit and appear neither in another instance-implicit argument nor the return type, so they cannot be inferred using typeclass synthesis."};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5;
static const lean_array_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7;
static const lean_ctor_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6_value),((lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8_value)}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9_value;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "This instance has "};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " argument"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__13;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__14 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_checkNonClassInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "The declaration `"};
static const lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_checkNonClassInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_checkNonClassInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_checkNonClassInstance___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "` should not be an instance as its return type `"};
static const lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_checkNonClassInstance___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_checkNonClassInstance___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_checkNonClassInstance___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a type class."};
static const lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_checkNonClassInstance___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_checkNonClassInstance___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "classDefReducibility"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 250, 156, 61, 219, 107, 141, 135)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 199, 74, 147, 156, 95, 99, 180)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3 = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_addInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instance `"};
static const lean_object* l_Lean_Meta_addInstance___closed__0 = (const lean_object*)&l_Lean_Meta_addInstance___closed__0_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__1;
static const lean_string_object l_Lean_Meta_addInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "` must be marked with `@[expose]`"};
static const lean_object* l_Lean_Meta_addInstance___closed__2 = (const lean_object*)&l_Lean_Meta_addInstance___closed__2_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__3;
static const lean_string_object l_Lean_Meta_addInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Definition `"};
static const lean_object* l_Lean_Meta_addInstance___closed__4 = (const lean_object*)&l_Lean_Meta_addInstance___closed__4_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__5;
static const lean_string_object l_Lean_Meta_addInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 274, .m_capacity = 274, .m_length = 273, .m_data = "` of class type is semireducible. Most type class instances should be instance-reducible, so consider marking this\ndefinition with `@[instance_reducible]`. If it is intentionally semireducible, this warning can be disabled with `set_option warn.classDefReducibility false`."};
static const lean_object* l_Lean_Meta_addInstance___closed__6 = (const lean_object*)&l_Lean_Meta_addInstance___closed__6_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Instances"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 69, 223, 114, 12, 235, 248, 125)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(245, 103, 148, 95, 163, 61, 86, 28)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(96, 213, 176, 90, 5, 29, 4, 245)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(76, 119, 91, 79, 218, 216, 4, 30)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(57, 34, 109, 117, 86, 219, 202, 202)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(244, 31, 67, 74, 73, 155, 87, 189)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(245, 214, 117, 3, 115, 221, 181, 118)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(189, 44, 126, 187, 224, 191, 65, 145)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(19, 189, 251, 134, 243, 7, 213, 15)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1841422150) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(243, 241, 116, 150, 66, 138, 129, 211)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 60, 149, 187, 173, 41, 226, 214)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(108, 138, 222, 169, 203, 203, 201, 186)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(213, 64, 26, 184, 137, 94, 159, 191)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(236, 216, 85, 168, 141, 176, 253, 81)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "type class instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 428, .m_capacity = 428, .m_length = 427, .m_data = "Registers type class instances.\n\nThe `instance` command, which expands to `@[instance] def`, is usually preferred over using this\nattribute directly. However it might sometimes still be necessary to use this attribute directly,\nin particular for `opaque` instances.\n\nTo assign priorities to instances, `@[instance prio]` can be used (where `prio` is a priority).\nThis corresponds to the `instance (priority := prio)` notation.\n"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_isInstanceCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstanceCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedDefaultInstances_default = (const lean_object*)&l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedDefaultInstances = (const lean_object*)&l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstanceEntry(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "defaultInstanceExtension"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 56, 120, 160, 178, 206, 131, 123)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_addDefaultInstanceEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_defaultInstanceExtension;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid default instance `"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "`, it has type `("};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " ...)`, but `"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__5;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a type class"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "`, type must be of the form `(C ...)` where `C` is a type class"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__0___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),((lean_object*)(((size_t)(397728026) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(222, 44, 186, 211, 61, 97, 170, 158)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(201, 145, 23, 81, 211, 60, 112, 222)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(97, 144, 67, 128, 102, 189, 169, 9)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(60, 200, 215, 58, 149, 211, 154, 152)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "default_instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 85, 15, 3, 86, 102, 227, 255)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "type class default instance"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_getDefaultInstances___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4____boxed(lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_();
return v_res_58_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_box(0);
v___x_65_ = ((lean_object*)(l_Lean_Meta_instInhabitedInstanceEntry_default___closed__2));
v___x_66_ = l_Lean_Expr_const___override(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4(void){
_start:
{
uint8_t v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_67_ = 0;
v___x_68_ = lean_box(0);
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3, &l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3_once, _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__3);
v___x_71_ = ((lean_object*)(l_Lean_Meta_instInhabitedInstanceEntry_default___closed__0));
v___x_72_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___x_70_);
lean_ctor_set(v___x_72_, 2, v___x_69_);
lean_ctor_set(v___x_72_, 3, v___x_68_);
lean_ctor_set(v___x_72_, 4, v___x_71_);
lean_ctor_set_uint8(v___x_72_, sizeof(void*)*5, v___x_67_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry_default(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4, &l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4_once, _init_l_Lean_Meta_instInhabitedInstanceEntry_default___closed__4);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstanceEntry(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_Meta_instInhabitedInstanceEntry_default;
return v___x_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqInstanceEntry___lam__0(lean_object* v_e_u2081_75_, lean_object* v_e_u2082_76_){
_start:
{
lean_object* v_val_77_; lean_object* v_val_78_; uint8_t v___x_79_; 
v_val_77_ = lean_ctor_get(v_e_u2081_75_, 1);
v_val_78_ = lean_ctor_get(v_e_u2082_76_, 1);
v___x_79_ = lean_expr_eqv(v_val_77_, v_val_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqInstanceEntry___lam__0___boxed(lean_object* v_e_u2081_80_, lean_object* v_e_u2082_81_){
_start:
{
uint8_t v_res_82_; lean_object* v_r_83_; 
v_res_82_ = l_Lean_Meta_instBEqInstanceEntry___lam__0(v_e_u2081_80_, v_e_u2082_81_);
lean_dec_ref(v_e_u2082_81_);
lean_dec_ref(v_e_u2081_80_);
v_r_83_ = lean_box(v_res_82_);
return v_r_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instToFormatInstanceEntry___lam__0(lean_object* v_e_89_){
_start:
{
lean_object* v_globalName_x3f_90_; 
v_globalName_x3f_90_ = lean_ctor_get(v_e_89_, 3);
lean_inc(v_globalName_x3f_90_);
lean_dec_ref(v_e_89_);
if (lean_obj_tag(v_globalName_x3f_90_) == 1)
{
lean_object* v_val_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_100_; 
v_val_91_ = lean_ctor_get(v_globalName_x3f_90_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v_globalName_x3f_90_);
if (v_isSharedCheck_100_ == 0)
{
v___x_93_ = v_globalName_x3f_90_;
v_isShared_94_ = v_isSharedCheck_100_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_val_91_);
lean_dec(v_globalName_x3f_90_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_100_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
uint8_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_95_ = 1;
v___x_96_ = l_Lean_Name_toString(v_val_91_, v___x_95_);
if (v_isShared_94_ == 0)
{
lean_ctor_set_tag(v___x_93_, 3);
lean_ctor_set(v___x_93_, 0, v___x_96_);
v___x_98_ = v___x_93_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_96_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
else
{
lean_object* v___x_101_; 
lean_dec(v_globalName_x3f_90_);
v___x_101_ = ((lean_object*)(l_Lean_Meta_instToFormatInstanceEntry___lam__0___closed__1));
return v___x_101_;
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_104_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg(){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__1);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___boxed(lean_object* v___dummy_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg();
return v_res_110_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg();
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0(lean_object* v_00_u03b2_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default___closed__0(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_Meta_DiscrTree_empty___redArg();
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default___closed__1(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default___closed__2(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_117_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___closed__0);
v___x_118_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__1, &l_Lean_Meta_instInhabitedInstances_default___closed__1_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__1);
v___x_119_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__0, &l_Lean_Meta_instInhabitedInstances_default___closed__0_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__0);
v___x_120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
lean_ctor_set(v___x_120_, 2, v___x_117_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances_default(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__2, &l_Lean_Meta_instInhabitedInstances_default___closed__2_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__2);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInstances(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lean_Meta_instInhabitedInstances_default;
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16___redArg(lean_object* v_x_123_, lean_object* v_x_124_, lean_object* v_x_125_, lean_object* v_x_126_){
_start:
{
lean_object* v_ks_127_; lean_object* v_vs_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_152_; 
v_ks_127_ = lean_ctor_get(v_x_123_, 0);
v_vs_128_ = lean_ctor_get(v_x_123_, 1);
v_isSharedCheck_152_ = !lean_is_exclusive(v_x_123_);
if (v_isSharedCheck_152_ == 0)
{
v___x_130_ = v_x_123_;
v_isShared_131_ = v_isSharedCheck_152_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_vs_128_);
lean_inc(v_ks_127_);
lean_dec(v_x_123_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_152_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_array_get_size(v_ks_127_);
v___x_133_ = lean_nat_dec_lt(v_x_124_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
lean_dec(v_x_124_);
v___x_134_ = lean_array_push(v_ks_127_, v_x_125_);
v___x_135_ = lean_array_push(v_vs_128_, v_x_126_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 1, v___x_135_);
lean_ctor_set(v___x_130_, 0, v___x_134_);
v___x_137_ = v___x_130_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_134_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v___x_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
else
{
lean_object* v_k_x27_139_; uint8_t v___x_140_; 
v_k_x27_139_ = lean_array_fget_borrowed(v_ks_127_, v_x_124_);
v___x_140_ = lean_name_eq(v_x_125_, v_k_x27_139_);
if (v___x_140_ == 0)
{
lean_object* v___x_142_; 
if (v_isShared_131_ == 0)
{
v___x_142_ = v___x_130_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_ks_127_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v_vs_128_);
v___x_142_ = v_reuseFailAlloc_146_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_unsigned_to_nat(1u);
v___x_144_ = lean_nat_add(v_x_124_, v___x_143_);
lean_dec(v_x_124_);
v_x_123_ = v___x_142_;
v_x_124_ = v___x_144_;
goto _start;
}
}
else
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_150_; 
v___x_147_ = lean_array_fset(v_ks_127_, v_x_124_, v_x_125_);
v___x_148_ = lean_array_fset(v_vs_128_, v_x_124_, v_x_126_);
lean_dec(v_x_124_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 1, v___x_148_);
lean_ctor_set(v___x_130_, 0, v___x_147_);
v___x_150_ = v___x_130_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9___redArg(lean_object* v_n_153_, lean_object* v_k_154_, lean_object* v_v_155_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16___redArg(v_n_153_, v___x_156_, v_k_154_, v_v_155_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(lean_object* v_x_159_, size_t v_x_160_, size_t v_x_161_, lean_object* v_x_162_, lean_object* v_x_163_){
_start:
{
if (lean_obj_tag(v_x_159_) == 0)
{
lean_object* v_es_164_; size_t v___x_165_; size_t v___x_166_; lean_object* v_j_167_; lean_object* v___x_168_; uint8_t v___x_169_; 
v_es_164_ = lean_ctor_get(v_x_159_, 0);
v___x_165_ = ((size_t)31ULL);
v___x_166_ = lean_usize_land(v_x_160_, v___x_165_);
v_j_167_ = lean_usize_to_nat(v___x_166_);
v___x_168_ = lean_array_get_size(v_es_164_);
v___x_169_ = lean_nat_dec_lt(v_j_167_, v___x_168_);
if (v___x_169_ == 0)
{
lean_dec(v_j_167_);
lean_dec(v_x_163_);
lean_dec(v_x_162_);
return v_x_159_;
}
else
{
lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_208_; 
lean_inc_ref(v_es_164_);
v_isSharedCheck_208_ = !lean_is_exclusive(v_x_159_);
if (v_isSharedCheck_208_ == 0)
{
lean_object* v_unused_209_; 
v_unused_209_ = lean_ctor_get(v_x_159_, 0);
lean_dec(v_unused_209_);
v___x_171_ = v_x_159_;
v_isShared_172_ = v_isSharedCheck_208_;
goto v_resetjp_170_;
}
else
{
lean_dec(v_x_159_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_208_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v_v_173_; lean_object* v___x_174_; lean_object* v_xs_x27_175_; lean_object* v___y_177_; 
v_v_173_ = lean_array_fget(v_es_164_, v_j_167_);
v___x_174_ = lean_box(0);
v_xs_x27_175_ = lean_array_fset(v_es_164_, v_j_167_, v___x_174_);
switch(lean_obj_tag(v_v_173_))
{
case 0:
{
lean_object* v_key_182_; lean_object* v_val_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_193_; 
v_key_182_ = lean_ctor_get(v_v_173_, 0);
v_val_183_ = lean_ctor_get(v_v_173_, 1);
v_isSharedCheck_193_ = !lean_is_exclusive(v_v_173_);
if (v_isSharedCheck_193_ == 0)
{
v___x_185_ = v_v_173_;
v_isShared_186_ = v_isSharedCheck_193_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_val_183_);
lean_inc(v_key_182_);
lean_dec(v_v_173_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_193_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
uint8_t v___x_187_; 
v___x_187_ = lean_name_eq(v_x_162_, v_key_182_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; lean_object* v___x_189_; 
lean_del_object(v___x_185_);
v___x_188_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_182_, v_val_183_, v_x_162_, v_x_163_);
v___x_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
v___y_177_ = v___x_189_;
goto v___jp_176_;
}
else
{
lean_object* v___x_191_; 
lean_dec(v_val_183_);
lean_dec(v_key_182_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 1, v_x_163_);
lean_ctor_set(v___x_185_, 0, v_x_162_);
v___x_191_ = v___x_185_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_x_162_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v_x_163_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
v___y_177_ = v___x_191_;
goto v___jp_176_;
}
}
}
}
case 1:
{
lean_object* v_node_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_206_; 
v_node_194_ = lean_ctor_get(v_v_173_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v_v_173_);
if (v_isSharedCheck_206_ == 0)
{
v___x_196_ = v_v_173_;
v_isShared_197_ = v_isSharedCheck_206_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_node_194_);
lean_dec(v_v_173_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_206_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
size_t v___x_198_; size_t v___x_199_; size_t v___x_200_; size_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_204_; 
v___x_198_ = ((size_t)5ULL);
v___x_199_ = lean_usize_shift_right(v_x_160_, v___x_198_);
v___x_200_ = ((size_t)1ULL);
v___x_201_ = lean_usize_add(v_x_161_, v___x_200_);
v___x_202_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(v_node_194_, v___x_199_, v___x_201_, v_x_162_, v_x_163_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_202_);
v___x_204_ = v___x_196_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
v___y_177_ = v___x_204_;
goto v___jp_176_;
}
}
}
default: 
{
lean_object* v___x_207_; 
v___x_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_207_, 0, v_x_162_);
lean_ctor_set(v___x_207_, 1, v_x_163_);
v___y_177_ = v___x_207_;
goto v___jp_176_;
}
}
v___jp_176_:
{
lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_178_ = lean_array_fset(v_xs_x27_175_, v_j_167_, v___y_177_);
lean_dec(v_j_167_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_178_);
v___x_180_ = v___x_171_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
}
}
else
{
lean_object* v_ks_210_; lean_object* v_vs_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_229_; 
v_ks_210_ = lean_ctor_get(v_x_159_, 0);
v_vs_211_ = lean_ctor_get(v_x_159_, 1);
v_isSharedCheck_229_ = !lean_is_exclusive(v_x_159_);
if (v_isSharedCheck_229_ == 0)
{
v___x_213_ = v_x_159_;
v_isShared_214_ = v_isSharedCheck_229_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_vs_211_);
lean_inc(v_ks_210_);
lean_dec(v_x_159_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_229_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_ks_210_);
lean_ctor_set(v_reuseFailAlloc_228_, 1, v_vs_211_);
v___x_216_ = v_reuseFailAlloc_228_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
lean_object* v_newNode_217_; size_t v___x_218_; uint8_t v___x_219_; 
v_newNode_217_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9___redArg(v___x_216_, v_x_162_, v_x_163_);
v___x_218_ = ((size_t)7ULL);
v___x_219_ = lean_usize_dec_le(v___x_218_, v_x_161_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_220_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_217_);
v___x_221_ = lean_unsigned_to_nat(4u);
v___x_222_ = lean_nat_dec_lt(v___x_220_, v___x_221_);
lean_dec(v___x_220_);
if (v___x_222_ == 0)
{
lean_object* v_ks_223_; lean_object* v_vs_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v_ks_223_ = lean_ctor_get(v_newNode_217_, 0);
lean_inc_ref(v_ks_223_);
v_vs_224_ = lean_ctor_get(v_newNode_217_, 1);
lean_inc_ref(v_vs_224_);
lean_dec_ref(v_newNode_217_);
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0);
v___x_227_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg(v_x_161_, v_ks_223_, v_vs_224_, v___x_225_, v___x_226_);
lean_dec_ref(v_vs_224_);
lean_dec_ref(v_ks_223_);
return v___x_227_;
}
else
{
return v_newNode_217_;
}
}
else
{
return v_newNode_217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg(size_t v_depth_230_, lean_object* v_keys_231_, lean_object* v_vals_232_, lean_object* v_i_233_, lean_object* v_entries_234_){
_start:
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = lean_array_get_size(v_keys_231_);
v___x_236_ = lean_nat_dec_lt(v_i_233_, v___x_235_);
if (v___x_236_ == 0)
{
lean_dec(v_i_233_);
return v_entries_234_;
}
else
{
lean_object* v_k_237_; lean_object* v_v_238_; uint64_t v___y_240_; 
v_k_237_ = lean_array_fget_borrowed(v_keys_231_, v_i_233_);
v_v_238_ = lean_array_fget_borrowed(v_vals_232_, v_i_233_);
if (lean_obj_tag(v_k_237_) == 0)
{
uint64_t v___x_251_; 
v___x_251_ = 1723ULL;
v___y_240_ = v___x_251_;
goto v___jp_239_;
}
else
{
uint64_t v_hash_252_; 
v_hash_252_ = lean_ctor_get_uint64(v_k_237_, sizeof(void*)*2);
v___y_240_ = v_hash_252_;
goto v___jp_239_;
}
v___jp_239_:
{
size_t v_h_241_; size_t v___x_242_; lean_object* v___x_243_; size_t v___x_244_; size_t v___x_245_; size_t v___x_246_; size_t v_h_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v_h_241_ = lean_uint64_to_usize(v___y_240_);
v___x_242_ = ((size_t)5ULL);
v___x_243_ = lean_unsigned_to_nat(1u);
v___x_244_ = ((size_t)1ULL);
v___x_245_ = lean_usize_sub(v_depth_230_, v___x_244_);
v___x_246_ = lean_usize_mul(v___x_242_, v___x_245_);
v_h_247_ = lean_usize_shift_right(v_h_241_, v___x_246_);
v___x_248_ = lean_nat_add(v_i_233_, v___x_243_);
lean_dec(v_i_233_);
lean_inc(v_v_238_);
lean_inc(v_k_237_);
v___x_249_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(v_entries_234_, v_h_247_, v_depth_230_, v_k_237_, v_v_238_);
v_i_233_ = v___x_248_;
v_entries_234_ = v___x_249_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg___boxed(lean_object* v_depth_253_, lean_object* v_keys_254_, lean_object* v_vals_255_, lean_object* v_i_256_, lean_object* v_entries_257_){
_start:
{
size_t v_depth_boxed_258_; lean_object* v_res_259_; 
v_depth_boxed_258_ = lean_unbox_usize(v_depth_253_);
lean_dec(v_depth_253_);
v_res_259_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg(v_depth_boxed_258_, v_keys_254_, v_vals_255_, v_i_256_, v_entries_257_);
lean_dec_ref(v_vals_255_);
lean_dec_ref(v_keys_254_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___boxed(lean_object* v_x_260_, lean_object* v_x_261_, lean_object* v_x_262_, lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
size_t v_x_2105__boxed_265_; size_t v_x_2106__boxed_266_; lean_object* v_res_267_; 
v_x_2105__boxed_265_ = lean_unbox_usize(v_x_261_);
lean_dec(v_x_261_);
v_x_2106__boxed_266_ = lean_unbox_usize(v_x_262_);
lean_dec(v_x_262_);
v_res_267_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(v_x_260_, v_x_2105__boxed_265_, v_x_2106__boxed_266_, v_x_263_, v_x_264_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1___redArg(lean_object* v_x_268_, lean_object* v_x_269_, lean_object* v_x_270_){
_start:
{
uint64_t v___y_272_; 
if (lean_obj_tag(v_x_269_) == 0)
{
uint64_t v___x_276_; 
v___x_276_ = 1723ULL;
v___y_272_ = v___x_276_;
goto v___jp_271_;
}
else
{
uint64_t v_hash_277_; 
v_hash_277_ = lean_ctor_get_uint64(v_x_269_, sizeof(void*)*2);
v___y_272_ = v_hash_277_;
goto v___jp_271_;
}
v___jp_271_:
{
size_t v___x_273_; size_t v___x_274_; lean_object* v___x_275_; 
v___x_273_ = lean_uint64_to_usize(v___y_272_);
v___x_274_ = ((size_t)1ULL);
v___x_275_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(v_x_268_, v___x_273_, v___x_274_, v_x_269_, v_x_270_);
return v___x_275_;
}
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_Meta_DiscrTree_instInhabited___redArg();
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2(lean_object* v_msg_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2___closed__0);
v___x_281_ = lean_panic_fn_borrowed(v___x_280_, v_msg_279_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10(lean_object* v_xs_282_, lean_object* v_v_283_, lean_object* v_i_284_){
_start:
{
lean_object* v___x_285_; uint8_t v___x_286_; 
v___x_285_ = lean_array_get_size(v_xs_282_);
v___x_286_ = lean_nat_dec_lt(v_i_284_, v___x_285_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; 
lean_dec(v_i_284_);
v___x_287_ = lean_box(0);
return v___x_287_;
}
else
{
lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_288_ = lean_array_fget_borrowed(v_xs_282_, v_i_284_);
v___x_289_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_288_, v_v_283_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_unsigned_to_nat(1u);
v___x_291_ = lean_nat_add(v_i_284_, v___x_290_);
lean_dec(v_i_284_);
v_i_284_ = v___x_291_;
goto _start;
}
else
{
lean_object* v___x_293_; 
v___x_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_293_, 0, v_i_284_);
return v___x_293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10___boxed(lean_object* v_xs_294_, lean_object* v_v_295_, lean_object* v_i_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10(v_xs_294_, v_v_295_, v_i_296_);
lean_dec(v_v_295_);
lean_dec_ref(v_xs_294_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4(lean_object* v_xs_298_, lean_object* v_v_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = lean_unsigned_to_nat(0u);
v___x_301_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4_spec__10(v_xs_298_, v_v_299_, v___x_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4___boxed(lean_object* v_xs_302_, lean_object* v_v_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4(v_xs_302_, v_v_303_);
lean_dec(v_v_303_);
lean_dec_ref(v_xs_302_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15___redArg(lean_object* v_x_305_, lean_object* v_x_306_, lean_object* v_x_307_, lean_object* v_x_308_){
_start:
{
lean_object* v_ks_309_; lean_object* v_vs_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_334_; 
v_ks_309_ = lean_ctor_get(v_x_305_, 0);
v_vs_310_ = lean_ctor_get(v_x_305_, 1);
v_isSharedCheck_334_ = !lean_is_exclusive(v_x_305_);
if (v_isSharedCheck_334_ == 0)
{
v___x_312_ = v_x_305_;
v_isShared_313_ = v_isSharedCheck_334_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_vs_310_);
lean_inc(v_ks_309_);
lean_dec(v_x_305_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_334_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_314_ = lean_array_get_size(v_ks_309_);
v___x_315_ = lean_nat_dec_lt(v_x_306_, v___x_314_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_319_; 
lean_dec(v_x_306_);
v___x_316_ = lean_array_push(v_ks_309_, v_x_307_);
v___x_317_ = lean_array_push(v_vs_310_, v_x_308_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 1, v___x_317_);
lean_ctor_set(v___x_312_, 0, v___x_316_);
v___x_319_ = v___x_312_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_316_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
else
{
lean_object* v_k_x27_321_; uint8_t v___x_322_; 
v_k_x27_321_ = lean_array_fget_borrowed(v_ks_309_, v_x_306_);
v___x_322_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_307_, v_k_x27_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_324_; 
if (v_isShared_313_ == 0)
{
v___x_324_ = v___x_312_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_ks_309_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v_vs_310_);
v___x_324_ = v_reuseFailAlloc_328_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_unsigned_to_nat(1u);
v___x_326_ = lean_nat_add(v_x_306_, v___x_325_);
lean_dec(v_x_306_);
v_x_305_ = v___x_324_;
v_x_306_ = v___x_326_;
goto _start;
}
}
else
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_329_ = lean_array_fset(v_ks_309_, v_x_306_, v_x_307_);
v___x_330_ = lean_array_fset(v_vs_310_, v_x_306_, v_x_308_);
lean_dec(v_x_306_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 1, v___x_330_);
lean_ctor_set(v___x_312_, 0, v___x_329_);
v___x_332_ = v___x_312_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_329_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v___x_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12___redArg(lean_object* v_n_335_, lean_object* v_k_336_, lean_object* v_v_337_){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_338_ = lean_unsigned_to_nat(0u);
v___x_339_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15___redArg(v_n_335_, v___x_338_, v_k_336_, v_v_337_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(lean_object* v_x_340_, size_t v_x_341_, size_t v_x_342_, lean_object* v_x_343_, lean_object* v_x_344_){
_start:
{
if (lean_obj_tag(v_x_340_) == 0)
{
lean_object* v_es_345_; size_t v___x_346_; size_t v___x_347_; lean_object* v_j_348_; lean_object* v___x_349_; uint8_t v___x_350_; 
v_es_345_ = lean_ctor_get(v_x_340_, 0);
v___x_346_ = ((size_t)31ULL);
v___x_347_ = lean_usize_land(v_x_341_, v___x_346_);
v_j_348_ = lean_usize_to_nat(v___x_347_);
v___x_349_ = lean_array_get_size(v_es_345_);
v___x_350_ = lean_nat_dec_lt(v_j_348_, v___x_349_);
if (v___x_350_ == 0)
{
lean_dec(v_j_348_);
lean_dec(v_x_344_);
lean_dec(v_x_343_);
return v_x_340_;
}
else
{
lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_389_; 
lean_inc_ref(v_es_345_);
v_isSharedCheck_389_ = !lean_is_exclusive(v_x_340_);
if (v_isSharedCheck_389_ == 0)
{
lean_object* v_unused_390_; 
v_unused_390_ = lean_ctor_get(v_x_340_, 0);
lean_dec(v_unused_390_);
v___x_352_ = v_x_340_;
v_isShared_353_ = v_isSharedCheck_389_;
goto v_resetjp_351_;
}
else
{
lean_dec(v_x_340_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_389_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v_v_354_; lean_object* v___x_355_; lean_object* v_xs_x27_356_; lean_object* v___y_358_; 
v_v_354_ = lean_array_fget(v_es_345_, v_j_348_);
v___x_355_ = lean_box(0);
v_xs_x27_356_ = lean_array_fset(v_es_345_, v_j_348_, v___x_355_);
switch(lean_obj_tag(v_v_354_))
{
case 0:
{
lean_object* v_key_363_; lean_object* v_val_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_374_; 
v_key_363_ = lean_ctor_get(v_v_354_, 0);
v_val_364_ = lean_ctor_get(v_v_354_, 1);
v_isSharedCheck_374_ = !lean_is_exclusive(v_v_354_);
if (v_isSharedCheck_374_ == 0)
{
v___x_366_ = v_v_354_;
v_isShared_367_ = v_isSharedCheck_374_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_val_364_);
lean_inc(v_key_363_);
lean_dec(v_v_354_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_374_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
uint8_t v___x_368_; 
v___x_368_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_343_, v_key_363_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; lean_object* v___x_370_; 
lean_del_object(v___x_366_);
v___x_369_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_363_, v_val_364_, v_x_343_, v_x_344_);
v___x_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
v___y_358_ = v___x_370_;
goto v___jp_357_;
}
else
{
lean_object* v___x_372_; 
lean_dec(v_val_364_);
lean_dec(v_key_363_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 1, v_x_344_);
lean_ctor_set(v___x_366_, 0, v_x_343_);
v___x_372_ = v___x_366_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_x_343_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_x_344_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
v___y_358_ = v___x_372_;
goto v___jp_357_;
}
}
}
}
case 1:
{
lean_object* v_node_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_387_; 
v_node_375_ = lean_ctor_get(v_v_354_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v_v_354_);
if (v_isSharedCheck_387_ == 0)
{
v___x_377_ = v_v_354_;
v_isShared_378_ = v_isSharedCheck_387_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_node_375_);
lean_dec(v_v_354_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_387_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
size_t v___x_379_; size_t v___x_380_; size_t v___x_381_; size_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_385_; 
v___x_379_ = ((size_t)5ULL);
v___x_380_ = lean_usize_shift_right(v_x_341_, v___x_379_);
v___x_381_ = ((size_t)1ULL);
v___x_382_ = lean_usize_add(v_x_342_, v___x_381_);
v___x_383_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(v_node_375_, v___x_380_, v___x_382_, v_x_343_, v_x_344_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_383_);
v___x_385_ = v___x_377_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v___x_383_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
v___y_358_ = v___x_385_;
goto v___jp_357_;
}
}
}
default: 
{
lean_object* v___x_388_; 
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v_x_343_);
lean_ctor_set(v___x_388_, 1, v_x_344_);
v___y_358_ = v___x_388_;
goto v___jp_357_;
}
}
v___jp_357_:
{
lean_object* v___x_359_; lean_object* v___x_361_; 
v___x_359_ = lean_array_fset(v_xs_x27_356_, v_j_348_, v___y_358_);
lean_dec(v_j_348_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_359_);
v___x_361_ = v___x_352_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_359_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
}
else
{
lean_object* v_ks_391_; lean_object* v_vs_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_410_; 
v_ks_391_ = lean_ctor_get(v_x_340_, 0);
v_vs_392_ = lean_ctor_get(v_x_340_, 1);
v_isSharedCheck_410_ = !lean_is_exclusive(v_x_340_);
if (v_isSharedCheck_410_ == 0)
{
v___x_394_ = v_x_340_;
v_isShared_395_ = v_isSharedCheck_410_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_vs_392_);
lean_inc(v_ks_391_);
lean_dec(v_x_340_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_410_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_ks_391_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v_vs_392_);
v___x_397_ = v_reuseFailAlloc_409_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
lean_object* v_newNode_398_; size_t v___x_399_; uint8_t v___x_400_; 
v_newNode_398_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12___redArg(v___x_397_, v_x_343_, v_x_344_);
v___x_399_ = ((size_t)7ULL);
v___x_400_ = lean_usize_dec_le(v___x_399_, v_x_342_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_401_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_398_);
v___x_402_ = lean_unsigned_to_nat(4u);
v___x_403_ = lean_nat_dec_lt(v___x_401_, v___x_402_);
lean_dec(v___x_401_);
if (v___x_403_ == 0)
{
lean_object* v_ks_404_; lean_object* v_vs_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_ks_404_ = lean_ctor_get(v_newNode_398_, 0);
lean_inc_ref(v_ks_404_);
v_vs_405_ = lean_ctor_get(v_newNode_398_, 1);
lean_inc_ref(v_vs_405_);
lean_dec_ref(v_newNode_398_);
v___x_406_ = lean_unsigned_to_nat(0u);
v___x_407_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0);
v___x_408_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg(v_x_342_, v_ks_404_, v_vs_405_, v___x_406_, v___x_407_);
lean_dec_ref(v_vs_405_);
lean_dec_ref(v_ks_404_);
return v___x_408_;
}
else
{
return v_newNode_398_;
}
}
else
{
return v_newNode_398_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg(size_t v_depth_411_, lean_object* v_keys_412_, lean_object* v_vals_413_, lean_object* v_i_414_, lean_object* v_entries_415_){
_start:
{
lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_416_ = lean_array_get_size(v_keys_412_);
v___x_417_ = lean_nat_dec_lt(v_i_414_, v___x_416_);
if (v___x_417_ == 0)
{
lean_dec(v_i_414_);
return v_entries_415_;
}
else
{
lean_object* v_k_418_; lean_object* v_v_419_; uint64_t v___x_420_; size_t v_h_421_; size_t v___x_422_; lean_object* v___x_423_; size_t v___x_424_; size_t v___x_425_; size_t v___x_426_; size_t v_h_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v_k_418_ = lean_array_fget_borrowed(v_keys_412_, v_i_414_);
v_v_419_ = lean_array_fget_borrowed(v_vals_413_, v_i_414_);
v___x_420_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_418_);
v_h_421_ = lean_uint64_to_usize(v___x_420_);
v___x_422_ = ((size_t)5ULL);
v___x_423_ = lean_unsigned_to_nat(1u);
v___x_424_ = ((size_t)1ULL);
v___x_425_ = lean_usize_sub(v_depth_411_, v___x_424_);
v___x_426_ = lean_usize_mul(v___x_422_, v___x_425_);
v_h_427_ = lean_usize_shift_right(v_h_421_, v___x_426_);
v___x_428_ = lean_nat_add(v_i_414_, v___x_423_);
lean_dec(v_i_414_);
lean_inc(v_v_419_);
lean_inc(v_k_418_);
v___x_429_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(v_entries_415_, v_h_427_, v_depth_411_, v_k_418_, v_v_419_);
v_i_414_ = v___x_428_;
v_entries_415_ = v___x_429_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg___boxed(lean_object* v_depth_431_, lean_object* v_keys_432_, lean_object* v_vals_433_, lean_object* v_i_434_, lean_object* v_entries_435_){
_start:
{
size_t v_depth_boxed_436_; lean_object* v_res_437_; 
v_depth_boxed_436_ = lean_unbox_usize(v_depth_431_);
lean_dec(v_depth_431_);
v_res_437_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg(v_depth_boxed_436_, v_keys_432_, v_vals_433_, v_i_434_, v_entries_435_);
lean_dec_ref(v_vals_433_);
lean_dec_ref(v_keys_432_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_x_438_, lean_object* v_x_439_, lean_object* v_x_440_, lean_object* v_x_441_, lean_object* v_x_442_){
_start:
{
size_t v_x_2381__boxed_443_; size_t v_x_2382__boxed_444_; lean_object* v_res_445_; 
v_x_2381__boxed_443_ = lean_unbox_usize(v_x_439_);
lean_dec(v_x_439_);
v_x_2382__boxed_444_ = lean_unbox_usize(v_x_440_);
lean_dec(v_x_440_);
v_res_445_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(v_x_438_, v_x_2381__boxed_443_, v_x_2382__boxed_444_, v_x_441_, v_x_442_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(lean_object* v_x_446_, lean_object* v_keys_447_, lean_object* v_v_448_, lean_object* v_k_449_, lean_object* v_x_450_){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v_c_453_; lean_object* v___x_454_; 
v___x_451_ = lean_unsigned_to_nat(1u);
v___x_452_ = lean_nat_add(v_x_446_, v___x_451_);
v_c_453_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_447_, v_v_448_, v___x_452_);
lean_dec(v___x_452_);
v___x_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_454_, 0, v_k_449_);
lean_ctor_set(v___x_454_, 1, v_c_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0___boxed(lean_object* v_x_455_, lean_object* v_keys_456_, lean_object* v_v_457_, lean_object* v_k_458_, lean_object* v_x_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(v_x_455_, v_keys_456_, v_v_457_, v_k_458_, v_x_459_);
lean_dec_ref(v_keys_456_);
lean_dec(v_x_455_);
return v_res_460_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(lean_object* v_a_461_, lean_object* v_b_462_){
_start:
{
lean_object* v_fst_463_; lean_object* v_fst_464_; uint8_t v___x_465_; 
v_fst_463_ = lean_ctor_get(v_a_461_, 0);
v_fst_464_ = lean_ctor_get(v_b_462_, 0);
v___x_465_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_463_, v_fst_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1___boxed(lean_object* v_a_466_, lean_object* v_b_467_){
_start:
{
uint8_t v_res_468_; lean_object* v_r_469_; 
v_res_468_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v_a_466_, v_b_467_);
lean_dec_ref(v_b_467_);
lean_dec_ref(v_a_466_);
v_r_469_ = lean_box(v_res_468_);
return v_r_469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1_spec__5(lean_object* v_vs_470_, lean_object* v_v_471_, lean_object* v_i_472_){
_start:
{
lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_473_ = lean_array_get_size(v_vs_470_);
v___x_474_ = lean_nat_dec_lt(v_i_472_, v___x_473_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; 
lean_dec(v_i_472_);
v___x_475_ = lean_array_push(v_vs_470_, v_v_471_);
return v___x_475_;
}
else
{
lean_object* v_val_476_; lean_object* v___x_477_; lean_object* v_val_478_; uint8_t v___x_479_; 
v_val_476_ = lean_ctor_get(v_v_471_, 1);
v___x_477_ = lean_array_fget_borrowed(v_vs_470_, v_i_472_);
v_val_478_ = lean_ctor_get(v___x_477_, 1);
v___x_479_ = lean_expr_eqv(v_val_476_, v_val_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_unsigned_to_nat(1u);
v___x_481_ = lean_nat_add(v_i_472_, v___x_480_);
lean_dec(v_i_472_);
v_i_472_ = v___x_481_;
goto _start;
}
else
{
lean_object* v___x_483_; 
v___x_483_ = lean_array_fset(v_vs_470_, v_i_472_, v_v_471_);
lean_dec(v_i_472_);
return v___x_483_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1(lean_object* v_vs_484_, lean_object* v_v_485_){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1_spec__5(v_vs_484_, v_v_485_, v___x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg(lean_object* v_x_492_, lean_object* v_keys_493_, lean_object* v_v_494_, lean_object* v_k_495_, lean_object* v_as_496_, lean_object* v_k_497_, lean_object* v_x_498_, lean_object* v_x_499_){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v_mid_502_; lean_object* v_midVal_503_; uint8_t v___x_504_; 
v___x_500_ = lean_nat_add(v_x_498_, v_x_499_);
v___x_501_ = lean_unsigned_to_nat(1u);
v_mid_502_ = lean_nat_shiftr(v___x_500_, v___x_501_);
lean_dec(v___x_500_);
v_midVal_503_ = lean_array_fget(v_as_496_, v_mid_502_);
v___x_504_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v_midVal_503_, v_k_497_);
if (v___x_504_ == 0)
{
uint8_t v___x_505_; 
lean_dec(v_x_499_);
v___x_505_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v_k_497_, v_midVal_503_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; uint8_t v___x_507_; 
lean_dec(v_x_498_);
v___x_506_ = lean_array_get_size(v_as_496_);
v___x_507_ = lean_nat_dec_lt(v_mid_502_, v___x_506_);
if (v___x_507_ == 0)
{
lean_dec(v_midVal_503_);
lean_dec(v_mid_502_);
lean_dec(v_k_495_);
lean_dec_ref(v_v_494_);
return v_as_496_;
}
else
{
lean_object* v_snd_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_520_; 
v_snd_508_ = lean_ctor_get(v_midVal_503_, 1);
v_isSharedCheck_520_ = !lean_is_exclusive(v_midVal_503_);
if (v_isSharedCheck_520_ == 0)
{
lean_object* v_unused_521_; 
v_unused_521_ = lean_ctor_get(v_midVal_503_, 0);
lean_dec(v_unused_521_);
v___x_510_ = v_midVal_503_;
v_isShared_511_ = v_isSharedCheck_520_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_snd_508_);
lean_dec(v_midVal_503_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_520_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; lean_object* v_xs_x27_513_; lean_object* v___x_514_; lean_object* v_c_515_; lean_object* v___x_517_; 
v___x_512_ = lean_box(0);
v_xs_x27_513_ = lean_array_fset(v_as_496_, v_mid_502_, v___x_512_);
v___x_514_ = lean_nat_add(v_x_492_, v___x_501_);
v_c_515_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(v_keys_493_, v_v_494_, v___x_514_, v_snd_508_);
lean_dec(v___x_514_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 1, v_c_515_);
lean_ctor_set(v___x_510_, 0, v_k_495_);
v___x_517_ = v___x_510_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_k_495_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_c_515_);
v___x_517_ = v_reuseFailAlloc_519_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
lean_object* v___x_518_; 
v___x_518_ = lean_array_fset(v_xs_x27_513_, v_mid_502_, v___x_517_);
lean_dec(v_mid_502_);
return v___x_518_;
}
}
}
}
else
{
lean_dec(v_midVal_503_);
v_x_499_ = v_mid_502_;
goto _start;
}
}
else
{
uint8_t v___x_523_; 
lean_dec(v_midVal_503_);
v___x_523_ = lean_nat_dec_eq(v_mid_502_, v_x_498_);
if (v___x_523_ == 0)
{
lean_dec(v_x_498_);
v_x_498_ = v_mid_502_;
goto _start;
}
else
{
lean_object* v___x_525_; lean_object* v_c_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v_j_529_; lean_object* v_as_530_; lean_object* v___x_531_; 
lean_dec(v_mid_502_);
lean_dec(v_x_499_);
v___x_525_ = lean_nat_add(v_x_492_, v___x_501_);
v_c_526_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_493_, v_v_494_, v___x_525_);
lean_dec(v___x_525_);
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v_k_495_);
lean_ctor_set(v___x_527_, 1, v_c_526_);
v___x_528_ = lean_nat_add(v_x_498_, v___x_501_);
lean_dec(v_x_498_);
v_j_529_ = lean_array_get_size(v_as_496_);
v_as_530_ = lean_array_push(v_as_496_, v___x_527_);
v___x_531_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_528_, v_as_530_, v_j_529_);
lean_dec(v___x_528_);
return v___x_531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2(lean_object* v_x_532_, lean_object* v_keys_533_, lean_object* v_v_534_, lean_object* v_k_535_, lean_object* v_as_536_, lean_object* v_k_537_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_538_ = lean_array_get_size(v_as_536_);
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = lean_nat_dec_eq(v___x_538_, v___x_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = lean_array_fget_borrowed(v_as_536_, v___x_539_);
v___x_542_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v_k_537_, v___x_541_);
if (v___x_542_ == 0)
{
uint8_t v___x_543_; 
v___x_543_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v___x_541_, v_k_537_);
if (v___x_543_ == 0)
{
uint8_t v___x_544_; 
v___x_544_ = lean_nat_dec_lt(v___x_539_, v___x_538_);
if (v___x_544_ == 0)
{
lean_dec(v_k_535_);
lean_dec_ref(v_v_534_);
return v_as_536_;
}
else
{
lean_object* v___x_545_; lean_object* v_xs_x27_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
lean_inc(v___x_541_);
v___x_545_ = lean_box(0);
v_xs_x27_546_ = lean_array_fset(v_as_536_, v___x_539_, v___x_545_);
v___x_547_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2(v_x_532_, v_keys_533_, v_v_534_, v_k_535_, v___x_541_);
v___x_548_ = lean_array_fset(v_xs_x27_546_, v___x_539_, v___x_547_);
return v___x_548_;
}
}
else
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v___x_549_ = lean_unsigned_to_nat(1u);
v___x_550_ = lean_nat_sub(v___x_538_, v___x_549_);
v___x_551_ = lean_array_fget_borrowed(v_as_536_, v___x_550_);
v___x_552_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v___x_551_, v_k_537_);
if (v___x_552_ == 0)
{
uint8_t v___x_553_; 
v___x_553_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__1(v_k_537_, v___x_551_);
if (v___x_553_ == 0)
{
uint8_t v___x_554_; 
v___x_554_ = lean_nat_dec_lt(v___x_550_, v___x_538_);
if (v___x_554_ == 0)
{
lean_dec(v___x_550_);
lean_dec(v_k_535_);
lean_dec_ref(v_v_534_);
return v_as_536_;
}
else
{
lean_object* v___x_555_; lean_object* v_xs_x27_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
lean_inc(v___x_551_);
v___x_555_ = lean_box(0);
v_xs_x27_556_ = lean_array_fset(v_as_536_, v___x_550_, v___x_555_);
v___x_557_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2(v_x_532_, v_keys_533_, v_v_534_, v_k_535_, v___x_551_);
v___x_558_ = lean_array_fset(v_xs_x27_556_, v___x_550_, v___x_557_);
lean_dec(v___x_550_);
return v___x_558_;
}
}
else
{
lean_object* v___x_559_; 
v___x_559_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg(v_x_532_, v_keys_533_, v_v_534_, v_k_535_, v_as_536_, v_k_537_, v___x_539_, v___x_550_);
return v___x_559_;
}
}
else
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec(v___x_550_);
v___x_560_ = lean_box(0);
v___x_561_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(v_x_532_, v_keys_533_, v_v_534_, v_k_535_, v___x_560_);
v___x_562_ = lean_array_push(v_as_536_, v___x_561_);
return v___x_562_;
}
}
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v_as_565_; lean_object* v___x_566_; 
v___x_563_ = lean_box(0);
v___x_564_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(v_x_532_, v_keys_533_, v_v_534_, v_k_535_, v___x_563_);
v_as_565_ = lean_array_push(v_as_536_, v___x_564_);
v___x_566_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_539_, v_as_565_, v___x_538_);
return v___x_566_;
}
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_567_ = lean_box(0);
v___x_568_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__0(v_x_532_, v_keys_533_, v_v_534_, v_k_535_, v___x_567_);
v___x_569_ = lean_array_push(v_as_536_, v___x_568_);
return v___x_569_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(lean_object* v_keys_570_, lean_object* v_v_571_, lean_object* v_x_572_, lean_object* v_x_573_){
_start:
{
lean_object* v_vs_574_; lean_object* v_children_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_592_; 
v_vs_574_ = lean_ctor_get(v_x_573_, 0);
v_children_575_ = lean_ctor_get(v_x_573_, 1);
v_isSharedCheck_592_ = !lean_is_exclusive(v_x_573_);
if (v_isSharedCheck_592_ == 0)
{
v___x_577_ = v_x_573_;
v_isShared_578_ = v_isSharedCheck_592_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_children_575_);
lean_inc(v_vs_574_);
lean_dec(v_x_573_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_592_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_579_ = lean_array_get_size(v_keys_570_);
v___x_580_ = lean_nat_dec_lt(v_x_572_, v___x_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; lean_object* v___x_583_; 
v___x_581_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__1(v_vs_574_, v_v_571_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_581_);
v___x_583_ = v___x_577_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___x_581_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v_children_575_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
else
{
lean_object* v_k_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v_c_588_; lean_object* v___x_590_; 
v_k_585_ = lean_array_fget_borrowed(v_keys_570_, v_x_572_);
v___x_586_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___closed__1));
lean_inc_n(v_k_585_, 2);
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v_k_585_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v_c_588_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2(v_x_572_, v_keys_570_, v_v_571_, v_k_585_, v_children_575_, v___x_587_);
lean_dec_ref_known(v___x_587_, 2);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 1, v_c_588_);
v___x_590_ = v___x_577_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_vs_574_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v_c_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2(lean_object* v_x_593_, lean_object* v_keys_594_, lean_object* v_v_595_, lean_object* v_k_596_, lean_object* v_x_597_){
_start:
{
lean_object* v_snd_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_608_; 
v_snd_598_ = lean_ctor_get(v_x_597_, 1);
v_isSharedCheck_608_ = !lean_is_exclusive(v_x_597_);
if (v_isSharedCheck_608_ == 0)
{
lean_object* v_unused_609_; 
v_unused_609_ = lean_ctor_get(v_x_597_, 0);
lean_dec(v_unused_609_);
v___x_600_ = v_x_597_;
v_isShared_601_ = v_isSharedCheck_608_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_snd_598_);
lean_dec(v_x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_608_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v_c_604_; lean_object* v___x_606_; 
v___x_602_ = lean_unsigned_to_nat(1u);
v___x_603_ = lean_nat_add(v_x_593_, v___x_602_);
v_c_604_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(v_keys_594_, v_v_595_, v___x_603_, v_snd_598_);
lean_dec(v___x_603_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 1, v_c_604_);
lean_ctor_set(v___x_600_, 0, v_k_596_);
v___x_606_ = v___x_600_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_k_596_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_c_604_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2___boxed(lean_object* v_x_610_, lean_object* v_keys_611_, lean_object* v_v_612_, lean_object* v_k_613_, lean_object* v_x_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___lam__2(v_x_610_, v_keys_611_, v_v_612_, v_k_613_, v_x_614_);
lean_dec_ref(v_keys_611_);
lean_dec(v_x_610_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0___boxed(lean_object* v_keys_616_, lean_object* v_v_617_, lean_object* v_x_618_, lean_object* v_x_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(v_keys_616_, v_v_617_, v_x_618_, v_x_619_);
lean_dec(v_x_618_);
lean_dec_ref(v_keys_616_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object* v_x_621_, lean_object* v_keys_622_, lean_object* v_v_623_, lean_object* v_k_624_, lean_object* v_as_625_, lean_object* v_k_626_, lean_object* v_x_627_, lean_object* v_x_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg(v_x_621_, v_keys_622_, v_v_623_, v_k_624_, v_as_625_, v_k_626_, v_x_627_, v_x_628_);
lean_dec_ref(v_k_626_);
lean_dec_ref(v_keys_622_);
lean_dec(v_x_621_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2___boxed(lean_object* v_x_630_, lean_object* v_keys_631_, lean_object* v_v_632_, lean_object* v_k_633_, lean_object* v_as_634_, lean_object* v_k_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2(v_x_630_, v_keys_631_, v_v_632_, v_k_633_, v_as_634_, v_k_635_);
lean_dec_ref(v_k_635_);
lean_dec_ref(v_keys_631_);
lean_dec(v_x_630_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(lean_object* v_keys_637_, lean_object* v_v_638_, lean_object* v_x_639_){
_start:
{
if (lean_obj_tag(v_x_639_) == 0)
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_640_ = lean_unsigned_to_nat(1u);
v___x_641_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_637_, v_v_638_, v___x_640_);
v___x_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
else
{
lean_object* v_val_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_652_; 
v_val_643_ = lean_ctor_get(v_x_639_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v_x_639_);
if (v_isSharedCheck_652_ == 0)
{
v___x_645_ = v_x_639_;
v_isShared_646_ = v_isSharedCheck_652_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_val_643_);
lean_dec(v_x_639_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_652_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_647_ = lean_unsigned_to_nat(1u);
v___x_648_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0(v_keys_637_, v_v_638_, v___x_647_, v_val_643_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_648_);
v___x_650_ = v___x_645_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0___boxed(lean_object* v_keys_653_, lean_object* v_v_654_, lean_object* v_x_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_653_, v_v_654_, v_x_655_);
lean_dec_ref(v_keys_653_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1(lean_object* v_keys_657_, lean_object* v_v_658_, lean_object* v_x_659_, size_t v_x_660_, size_t v_x_661_, lean_object* v_x_662_){
_start:
{
if (lean_obj_tag(v_x_659_) == 0)
{
lean_object* v_es_663_; size_t v___x_664_; size_t v___x_665_; lean_object* v_j_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v_es_663_ = lean_ctor_get(v_x_659_, 0);
v___x_664_ = ((size_t)31ULL);
v___x_665_ = lean_usize_land(v_x_660_, v___x_664_);
v_j_666_ = lean_usize_to_nat(v___x_665_);
v___x_667_ = lean_array_get_size(v_es_663_);
v___x_668_ = lean_nat_dec_lt(v_j_666_, v___x_667_);
if (v___x_668_ == 0)
{
lean_dec(v_j_666_);
lean_dec(v_x_662_);
lean_dec_ref(v_v_658_);
return v_x_659_;
}
else
{
lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_736_; 
lean_inc_ref(v_es_663_);
v_isSharedCheck_736_ = !lean_is_exclusive(v_x_659_);
if (v_isSharedCheck_736_ == 0)
{
lean_object* v_unused_737_; 
v_unused_737_ = lean_ctor_get(v_x_659_, 0);
lean_dec(v_unused_737_);
v___x_670_ = v_x_659_;
v_isShared_671_ = v_isSharedCheck_736_;
goto v_resetjp_669_;
}
else
{
lean_dec(v_x_659_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_736_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v_v_672_; lean_object* v___x_673_; lean_object* v_xs_x27_674_; lean_object* v___y_676_; 
v_v_672_ = lean_array_fget(v_es_663_, v_j_666_);
v___x_673_ = lean_box(0);
v_xs_x27_674_ = lean_array_fset(v_es_663_, v_j_666_, v___x_673_);
switch(lean_obj_tag(v_v_672_))
{
case 0:
{
lean_object* v_key_681_; lean_object* v_val_682_; uint8_t v___x_683_; 
v_key_681_ = lean_ctor_get(v_v_672_, 0);
v_val_682_ = lean_ctor_get(v_v_672_, 1);
v___x_683_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_662_, v_key_681_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = lean_box(0);
v___x_685_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_657_, v_v_658_, v___x_684_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_dec(v_x_662_);
v___y_676_ = v_v_672_;
goto v___jp_675_;
}
else
{
lean_object* v_val_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_694_; 
lean_inc(v_val_682_);
lean_inc(v_key_681_);
lean_dec_ref_known(v_v_672_, 2);
v_val_686_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_694_ == 0)
{
v___x_688_ = v___x_685_;
v_isShared_689_ = v_isSharedCheck_694_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_val_686_);
lean_dec(v___x_685_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_694_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_690_; lean_object* v___x_692_; 
v___x_690_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_681_, v_val_682_, v_x_662_, v_val_686_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_690_);
v___x_692_ = v___x_688_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_690_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
v___y_676_ = v___x_692_;
goto v___jp_675_;
}
}
}
}
else
{
lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_705_; 
lean_inc(v_val_682_);
v_isSharedCheck_705_ = !lean_is_exclusive(v_v_672_);
if (v_isSharedCheck_705_ == 0)
{
lean_object* v_unused_706_; lean_object* v_unused_707_; 
v_unused_706_ = lean_ctor_get(v_v_672_, 1);
lean_dec(v_unused_706_);
v_unused_707_ = lean_ctor_get(v_v_672_, 0);
lean_dec(v_unused_707_);
v___x_696_ = v_v_672_;
v_isShared_697_ = v_isSharedCheck_705_;
goto v_resetjp_695_;
}
else
{
lean_dec(v_v_672_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_705_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_698_, 0, v_val_682_);
v___x_699_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_657_, v_v_658_, v___x_698_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v___x_700_; 
lean_del_object(v___x_696_);
lean_dec(v_x_662_);
v___x_700_ = lean_box(2);
v___y_676_ = v___x_700_;
goto v___jp_675_;
}
else
{
lean_object* v_val_701_; lean_object* v___x_703_; 
v_val_701_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_val_701_);
lean_dec_ref_known(v___x_699_, 1);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 1, v_val_701_);
lean_ctor_set(v___x_696_, 0, v_x_662_);
v___x_703_ = v___x_696_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_x_662_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_val_701_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
v___y_676_ = v___x_703_;
goto v___jp_675_;
}
}
}
}
}
case 1:
{
lean_object* v_node_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_731_; 
v_node_708_ = lean_ctor_get(v_v_672_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v_v_672_);
if (v_isSharedCheck_731_ == 0)
{
v___x_710_ = v_v_672_;
v_isShared_711_ = v_isSharedCheck_731_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_node_708_);
lean_dec(v_v_672_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_731_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
size_t v___x_712_; size_t v___x_713_; size_t v___x_714_; size_t v___x_715_; lean_object* v_newNode_716_; lean_object* v___x_717_; 
v___x_712_ = ((size_t)5ULL);
v___x_713_ = lean_usize_shift_right(v_x_660_, v___x_712_);
v___x_714_ = ((size_t)1ULL);
v___x_715_ = lean_usize_add(v_x_661_, v___x_714_);
v_newNode_716_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1(v_keys_657_, v_v_658_, v_node_708_, v___x_713_, v___x_715_, v_x_662_);
lean_inc_ref(v_newNode_716_);
v___x_717_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_716_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v___x_719_; 
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 0, v_newNode_716_);
v___x_719_ = v___x_710_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_newNode_716_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
v___y_676_ = v___x_719_;
goto v___jp_675_;
}
}
else
{
lean_object* v_val_721_; lean_object* v_fst_722_; lean_object* v_snd_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_dec_ref(v_newNode_716_);
lean_del_object(v___x_710_);
v_val_721_ = lean_ctor_get(v___x_717_, 0);
lean_inc(v_val_721_);
lean_dec_ref_known(v___x_717_, 1);
v_fst_722_ = lean_ctor_get(v_val_721_, 0);
v_snd_723_ = lean_ctor_get(v_val_721_, 1);
v_isSharedCheck_730_ = !lean_is_exclusive(v_val_721_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v_val_721_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_snd_723_);
lean_inc(v_fst_722_);
lean_dec(v_val_721_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_fst_722_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v_snd_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
v___y_676_ = v___x_728_;
goto v___jp_675_;
}
}
}
}
}
default: 
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = lean_box(0);
v___x_733_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_657_, v_v_658_, v___x_732_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_dec(v_x_662_);
v___y_676_ = v_v_672_;
goto v___jp_675_;
}
else
{
lean_object* v_val_734_; lean_object* v___x_735_; 
v_val_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_val_734_);
lean_dec_ref_known(v___x_733_, 1);
v___x_735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_735_, 0, v_x_662_);
lean_ctor_set(v___x_735_, 1, v_val_734_);
v___y_676_ = v___x_735_;
goto v___jp_675_;
}
}
}
v___jp_675_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = lean_array_fset(v_xs_x27_674_, v_j_666_, v___y_676_);
lean_dec(v_j_666_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 0, v___x_677_);
v___x_679_ = v___x_670_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
else
{
lean_object* v_ks_738_; lean_object* v_vs_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_772_; 
v_ks_738_ = lean_ctor_get(v_x_659_, 0);
v_vs_739_ = lean_ctor_get(v_x_659_, 1);
v_isSharedCheck_772_ = !lean_is_exclusive(v_x_659_);
if (v_isSharedCheck_772_ == 0)
{
v___x_741_ = v_x_659_;
v_isShared_742_ = v_isSharedCheck_772_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_vs_739_);
lean_inc(v_ks_738_);
lean_dec(v_x_659_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_772_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_743_; 
v___x_743_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__4(v_ks_738_, v_x_662_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v___x_745_; 
if (v_isShared_742_ == 0)
{
v___x_745_ = v___x_741_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_ks_738_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v_vs_739_);
v___x_745_ = v_reuseFailAlloc_750_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_box(0);
v___x_747_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_657_, v_v_658_, v___x_746_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_dec(v_x_662_);
return v___x_745_;
}
else
{
lean_object* v_val_748_; lean_object* v___x_749_; 
v_val_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_val_748_);
lean_dec_ref_known(v___x_747_, 1);
v___x_749_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(v___x_745_, v_x_660_, v_x_661_, v_x_662_, v_val_748_);
return v___x_749_;
}
}
}
else
{
lean_object* v_val_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_771_; 
v_val_751_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_771_ == 0)
{
v___x_753_ = v___x_743_;
v_isShared_754_ = v_isSharedCheck_771_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_val_751_);
lean_dec(v___x_743_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_771_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v_v_x27_755_; lean_object* v_keys_756_; lean_object* v_vals_757_; lean_object* v___x_759_; 
v_v_x27_755_ = lean_array_fget(v_vs_739_, v_val_751_);
lean_inc(v_val_751_);
v_keys_756_ = l_Array_eraseIdx___redArg(v_ks_738_, v_val_751_);
v_vals_757_ = l_Array_eraseIdx___redArg(v_vs_739_, v_val_751_);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 0, v_v_x27_755_);
v___x_759_ = v___x_753_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_v_x27_755_);
v___x_759_ = v_reuseFailAlloc_770_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_760_; 
v___x_760_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___lam__0(v_keys_657_, v_v_658_, v___x_759_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v___x_762_; 
lean_dec(v_x_662_);
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 1, v_vals_757_);
lean_ctor_set(v___x_741_, 0, v_keys_756_);
v___x_762_ = v___x_741_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_keys_756_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v_vals_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
else
{
lean_object* v_val_764_; lean_object* v_keys_765_; lean_object* v_vals_766_; lean_object* v___x_768_; 
v_val_764_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_val_764_);
lean_dec_ref_known(v___x_760_, 1);
v_keys_765_ = lean_array_push(v_keys_756_, v_x_662_);
v_vals_766_ = lean_array_push(v_vals_757_, v_val_764_);
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 1, v_vals_766_);
lean_ctor_set(v___x_741_, 0, v_keys_765_);
v___x_768_ = v___x_741_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_keys_765_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v_vals_766_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1___boxed(lean_object* v_keys_773_, lean_object* v_v_774_, lean_object* v_x_775_, lean_object* v_x_776_, lean_object* v_x_777_, lean_object* v_x_778_){
_start:
{
size_t v_x_2801__boxed_779_; size_t v_x_2802__boxed_780_; lean_object* v_res_781_; 
v_x_2801__boxed_779_ = lean_unbox_usize(v_x_776_);
lean_dec(v_x_776_);
v_x_2802__boxed_780_ = lean_unbox_usize(v_x_777_);
lean_dec(v_x_777_);
v_res_781_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1(v_keys_773_, v_v_774_, v_x_775_, v_x_2801__boxed_779_, v_x_2802__boxed_780_, v_x_778_);
lean_dec_ref(v_keys_773_);
return v_res_781_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3(void){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_785_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__2));
v___x_786_ = lean_unsigned_to_nat(23u);
v___x_787_ = lean_unsigned_to_nat(166u);
v___x_788_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__1));
v___x_789_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__0));
v___x_790_ = l_mkPanicMessageWithDecl(v___x_789_, v___x_788_, v___x_787_, v___x_786_, v___x_785_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0(lean_object* v_d_791_, lean_object* v_keys_792_, lean_object* v_v_793_){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; uint8_t v___x_796_; 
v___x_794_ = lean_array_get_size(v_keys_792_);
v___x_795_ = lean_unsigned_to_nat(0u);
v___x_796_ = lean_nat_dec_eq(v___x_794_, v___x_795_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; lean_object* v_k_798_; uint64_t v___x_799_; size_t v_h_800_; size_t v___x_801_; lean_object* v___x_802_; 
v___x_797_ = lean_box(0);
v_k_798_ = lean_array_get_borrowed(v___x_797_, v_keys_792_, v___x_795_);
v___x_799_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_798_);
v_h_800_ = lean_uint64_to_usize(v___x_799_);
v___x_801_ = ((size_t)1ULL);
lean_inc(v_k_798_);
v___x_802_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1(v_keys_792_, v_v_793_, v_d_791_, v_h_800_, v___x_801_, v_k_798_);
return v___x_802_;
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; 
lean_dec_ref(v_v_793_);
lean_dec_ref(v_d_791_);
v___x_803_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___closed__3);
v___x_804_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__2(v___x_803_);
return v___x_804_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0___boxed(lean_object* v_d_805_, lean_object* v_keys_806_, lean_object* v_v_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0(v_d_805_, v_keys_806_, v_v_807_);
lean_dec_ref(v_keys_806_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20(lean_object* v_xs_809_, lean_object* v_v_810_, lean_object* v_i_811_){
_start:
{
lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = lean_array_get_size(v_xs_809_);
v___x_813_ = lean_nat_dec_lt(v_i_811_, v___x_812_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; 
lean_dec(v_i_811_);
v___x_814_ = lean_box(0);
return v___x_814_;
}
else
{
lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = lean_array_fget_borrowed(v_xs_809_, v_i_811_);
v___x_816_ = lean_name_eq(v___x_815_, v_v_810_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = lean_unsigned_to_nat(1u);
v___x_818_ = lean_nat_add(v_i_811_, v___x_817_);
lean_dec(v_i_811_);
v_i_811_ = v___x_818_;
goto _start;
}
else
{
lean_object* v___x_820_; 
v___x_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_820_, 0, v_i_811_);
return v___x_820_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20___boxed(lean_object* v_xs_821_, lean_object* v_v_822_, lean_object* v_i_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20(v_xs_821_, v_v_822_, v_i_823_);
lean_dec(v_v_822_);
lean_dec_ref(v_xs_821_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13(lean_object* v_xs_825_, lean_object* v_v_826_){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = lean_unsigned_to_nat(0u);
v___x_828_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13_spec__20(v_xs_825_, v_v_826_, v___x_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13___boxed(lean_object* v_xs_829_, lean_object* v_v_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13(v_xs_829_, v_v_830_);
lean_dec(v_v_830_);
lean_dec_ref(v_xs_829_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(lean_object* v_x_832_, size_t v_x_833_, lean_object* v_x_834_){
_start:
{
if (lean_obj_tag(v_x_832_) == 0)
{
lean_object* v_es_835_; lean_object* v___x_836_; size_t v___x_837_; size_t v___x_838_; lean_object* v_j_839_; lean_object* v_entry_840_; 
v_es_835_ = lean_ctor_get(v_x_832_, 0);
v___x_836_ = lean_box(2);
v___x_837_ = ((size_t)31ULL);
v___x_838_ = lean_usize_land(v_x_833_, v___x_837_);
v_j_839_ = lean_usize_to_nat(v___x_838_);
v_entry_840_ = lean_array_get(v___x_836_, v_es_835_, v_j_839_);
switch(lean_obj_tag(v_entry_840_))
{
case 0:
{
lean_object* v_key_841_; uint8_t v___x_842_; 
v_key_841_ = lean_ctor_get(v_entry_840_, 0);
lean_inc(v_key_841_);
lean_dec_ref_known(v_entry_840_, 2);
v___x_842_ = lean_name_eq(v_x_834_, v_key_841_);
lean_dec(v_key_841_);
if (v___x_842_ == 0)
{
lean_dec(v_j_839_);
return v_x_832_;
}
else
{
lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_850_; 
lean_inc_ref(v_es_835_);
v_isSharedCheck_850_ = !lean_is_exclusive(v_x_832_);
if (v_isSharedCheck_850_ == 0)
{
lean_object* v_unused_851_; 
v_unused_851_ = lean_ctor_get(v_x_832_, 0);
lean_dec(v_unused_851_);
v___x_844_ = v_x_832_;
v_isShared_845_ = v_isSharedCheck_850_;
goto v_resetjp_843_;
}
else
{
lean_dec(v_x_832_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_850_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_846_; lean_object* v___x_848_; 
v___x_846_ = lean_array_set(v_es_835_, v_j_839_, v___x_836_);
lean_dec(v_j_839_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v___x_846_);
v___x_848_ = v___x_844_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_846_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
}
case 1:
{
lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_886_; 
lean_inc_ref(v_es_835_);
v_isSharedCheck_886_ = !lean_is_exclusive(v_x_832_);
if (v_isSharedCheck_886_ == 0)
{
lean_object* v_unused_887_; 
v_unused_887_ = lean_ctor_get(v_x_832_, 0);
lean_dec(v_unused_887_);
v___x_853_ = v_x_832_;
v_isShared_854_ = v_isSharedCheck_886_;
goto v_resetjp_852_;
}
else
{
lean_dec(v_x_832_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_886_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v_node_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_885_; 
v_node_855_ = lean_ctor_get(v_entry_840_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v_entry_840_);
if (v_isSharedCheck_885_ == 0)
{
v___x_857_ = v_entry_840_;
v_isShared_858_ = v_isSharedCheck_885_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_node_855_);
lean_dec(v_entry_840_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_885_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
size_t v___x_859_; lean_object* v_entries_860_; size_t v___x_861_; lean_object* v_newNode_862_; lean_object* v___x_863_; 
v___x_859_ = ((size_t)5ULL);
v_entries_860_ = lean_array_set(v_es_835_, v_j_839_, v___x_836_);
v___x_861_ = lean_usize_shift_right(v_x_833_, v___x_859_);
v_newNode_862_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(v_node_855_, v___x_861_, v_x_834_);
lean_inc_ref(v_newNode_862_);
v___x_863_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_862_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v___x_865_; 
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v_newNode_862_);
v___x_865_ = v___x_857_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_newNode_862_);
v___x_865_ = v_reuseFailAlloc_870_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_866_ = lean_array_set(v_entries_860_, v_j_839_, v___x_865_);
lean_dec(v_j_839_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_866_);
v___x_868_ = v___x_853_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_val_871_; lean_object* v_fst_872_; lean_object* v_snd_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_884_; 
lean_dec_ref(v_newNode_862_);
lean_del_object(v___x_857_);
v_val_871_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_val_871_);
lean_dec_ref_known(v___x_863_, 1);
v_fst_872_ = lean_ctor_get(v_val_871_, 0);
v_snd_873_ = lean_ctor_get(v_val_871_, 1);
v_isSharedCheck_884_ = !lean_is_exclusive(v_val_871_);
if (v_isSharedCheck_884_ == 0)
{
v___x_875_ = v_val_871_;
v_isShared_876_ = v_isSharedCheck_884_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_snd_873_);
lean_inc(v_fst_872_);
lean_dec(v_val_871_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_884_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_fst_872_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v_snd_873_);
v___x_878_ = v_reuseFailAlloc_883_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_879_; lean_object* v___x_881_; 
v___x_879_ = lean_array_set(v_entries_860_, v_j_839_, v___x_878_);
lean_dec(v_j_839_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_879_);
v___x_881_ = v___x_853_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_879_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_839_);
return v_x_832_;
}
}
}
else
{
lean_object* v_ks_888_; lean_object* v_vs_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_903_; 
v_ks_888_ = lean_ctor_get(v_x_832_, 0);
v_vs_889_ = lean_ctor_get(v_x_832_, 1);
v_isSharedCheck_903_ = !lean_is_exclusive(v_x_832_);
if (v_isSharedCheck_903_ == 0)
{
v___x_891_ = v_x_832_;
v_isShared_892_ = v_isSharedCheck_903_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_vs_889_);
lean_inc(v_ks_888_);
lean_dec(v_x_832_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_903_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; 
v___x_893_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6_spec__13(v_ks_888_, v_x_834_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v___x_895_; 
if (v_isShared_892_ == 0)
{
v___x_895_ = v___x_891_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_ks_888_);
lean_ctor_set(v_reuseFailAlloc_896_, 1, v_vs_889_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
else
{
lean_object* v_val_897_; lean_object* v_keys_x27_898_; lean_object* v_vals_x27_899_; lean_object* v___x_901_; 
v_val_897_ = lean_ctor_get(v___x_893_, 0);
lean_inc_n(v_val_897_, 2);
lean_dec_ref_known(v___x_893_, 1);
v_keys_x27_898_ = l_Array_eraseIdx___redArg(v_ks_888_, v_val_897_);
v_vals_x27_899_ = l_Array_eraseIdx___redArg(v_vs_889_, v_val_897_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 1, v_vals_x27_899_);
lean_ctor_set(v___x_891_, 0, v_keys_x27_898_);
v___x_901_ = v___x_891_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_keys_x27_898_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v_vals_x27_899_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg___boxed(lean_object* v_x_904_, lean_object* v_x_905_, lean_object* v_x_906_){
_start:
{
size_t v_x_3082__boxed_907_; lean_object* v_res_908_; 
v_x_3082__boxed_907_ = lean_unbox_usize(v_x_905_);
lean_dec(v_x_905_);
v_res_908_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(v_x_904_, v_x_3082__boxed_907_, v_x_906_);
lean_dec(v_x_906_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(lean_object* v_x_909_, lean_object* v_x_910_){
_start:
{
uint64_t v___y_912_; 
if (lean_obj_tag(v_x_910_) == 0)
{
uint64_t v___x_915_; 
v___x_915_ = 1723ULL;
v___y_912_ = v___x_915_;
goto v___jp_911_;
}
else
{
uint64_t v_hash_916_; 
v_hash_916_ = lean_ctor_get_uint64(v_x_910_, sizeof(void*)*2);
v___y_912_ = v_hash_916_;
goto v___jp_911_;
}
v___jp_911_:
{
size_t v_h_913_; lean_object* v___x_914_; 
v_h_913_ = lean_uint64_to_usize(v___y_912_);
v___x_914_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(v_x_909_, v_h_913_, v_x_910_);
return v___x_914_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg___boxed(lean_object* v_x_917_, lean_object* v_x_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(v_x_917_, v_x_918_);
lean_dec(v_x_918_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstanceEntry(lean_object* v_d_920_, lean_object* v_e_921_){
_start:
{
lean_object* v_globalName_x3f_922_; 
v_globalName_x3f_922_ = lean_ctor_get(v_e_921_, 3);
if (lean_obj_tag(v_globalName_x3f_922_) == 0)
{
lean_object* v_keys_923_; lean_object* v_discrTree_924_; lean_object* v_instanceNames_925_; lean_object* v_erased_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_934_; 
v_keys_923_ = lean_ctor_get(v_e_921_, 0);
lean_inc_ref(v_keys_923_);
v_discrTree_924_ = lean_ctor_get(v_d_920_, 0);
v_instanceNames_925_ = lean_ctor_get(v_d_920_, 1);
v_erased_926_ = lean_ctor_get(v_d_920_, 2);
v_isSharedCheck_934_ = !lean_is_exclusive(v_d_920_);
if (v_isSharedCheck_934_ == 0)
{
v___x_928_ = v_d_920_;
v_isShared_929_ = v_isSharedCheck_934_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_erased_926_);
lean_inc(v_instanceNames_925_);
lean_inc(v_discrTree_924_);
lean_dec(v_d_920_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_934_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_930_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0(v_discrTree_924_, v_keys_923_, v_e_921_);
lean_dec_ref(v_keys_923_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___x_930_);
v___x_932_ = v___x_928_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v_instanceNames_925_);
lean_ctor_set(v_reuseFailAlloc_933_, 2, v_erased_926_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
else
{
lean_object* v_keys_935_; lean_object* v_val_936_; lean_object* v_discrTree_937_; lean_object* v_instanceNames_938_; lean_object* v_erased_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_949_; 
v_keys_935_ = lean_ctor_get(v_e_921_, 0);
v_val_936_ = lean_ctor_get(v_globalName_x3f_922_, 0);
lean_inc(v_val_936_);
v_discrTree_937_ = lean_ctor_get(v_d_920_, 0);
v_instanceNames_938_ = lean_ctor_get(v_d_920_, 1);
v_erased_939_ = lean_ctor_get(v_d_920_, 2);
v_isSharedCheck_949_ = !lean_is_exclusive(v_d_920_);
if (v_isSharedCheck_949_ == 0)
{
v___x_941_ = v_d_920_;
v_isShared_942_ = v_isSharedCheck_949_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_erased_939_);
lean_inc(v_instanceNames_938_);
lean_inc(v_discrTree_937_);
lean_dec(v_d_920_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_949_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_947_; 
lean_inc_ref(v_e_921_);
v___x_943_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0(v_discrTree_937_, v_keys_935_, v_e_921_);
lean_inc(v_val_936_);
v___x_944_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1___redArg(v_instanceNames_938_, v_val_936_, v_e_921_);
v___x_945_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(v_erased_939_, v_val_936_);
lean_dec(v_val_936_);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 2, v___x_945_);
lean_ctor_set(v___x_941_, 1, v___x_944_);
lean_ctor_set(v___x_941_, 0, v___x_943_);
v___x_947_ = v___x_941_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_948_, 2, v___x_945_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1(lean_object* v_00_u03b2_950_, lean_object* v_x_951_, lean_object* v_x_952_, lean_object* v_x_953_){
_start:
{
lean_object* v___x_954_; 
v___x_954_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1___redArg(v_x_951_, v_x_952_, v_x_953_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2(lean_object* v_00_u03b2_955_, lean_object* v_x_956_, lean_object* v_x_957_){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(v_x_956_, v_x_957_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___boxed(lean_object* v_00_u03b2_959_, lean_object* v_x_960_, lean_object* v_x_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2(v_00_u03b2_959_, v_x_960_, v_x_961_);
lean_dec(v_x_961_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4(lean_object* v_00_u03b2_963_, lean_object* v_x_964_, size_t v_x_965_, size_t v_x_966_, lean_object* v_x_967_, lean_object* v_x_968_){
_start:
{
lean_object* v___x_969_; 
v___x_969_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg(v_x_964_, v_x_965_, v_x_966_, v_x_967_, v_x_968_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___boxed(lean_object* v_00_u03b2_970_, lean_object* v_x_971_, lean_object* v_x_972_, lean_object* v_x_973_, lean_object* v_x_974_, lean_object* v_x_975_){
_start:
{
size_t v_x_3286__boxed_976_; size_t v_x_3287__boxed_977_; lean_object* v_res_978_; 
v_x_3286__boxed_976_ = lean_unbox_usize(v_x_972_);
lean_dec(v_x_972_);
v_x_3287__boxed_977_ = lean_unbox_usize(v_x_973_);
lean_dec(v_x_973_);
v_res_978_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4(v_00_u03b2_970_, v_x_971_, v_x_3286__boxed_976_, v_x_3287__boxed_977_, v_x_974_, v_x_975_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6(lean_object* v_00_u03b2_979_, lean_object* v_x_980_, size_t v_x_981_, lean_object* v_x_982_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___redArg(v_x_980_, v_x_981_, v_x_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6___boxed(lean_object* v_00_u03b2_984_, lean_object* v_x_985_, lean_object* v_x_986_, lean_object* v_x_987_){
_start:
{
size_t v_x_3303__boxed_988_; lean_object* v_res_989_; 
v_x_3303__boxed_988_ = lean_unbox_usize(v_x_986_);
lean_dec(v_x_986_);
v_res_989_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2_spec__6(v_00_u03b2_984_, v_x_985_, v_x_3303__boxed_988_, v_x_987_);
lean_dec(v_x_987_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_990_, lean_object* v_x_991_, size_t v_x_992_, size_t v_x_993_, lean_object* v_x_994_, lean_object* v_x_995_){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___redArg(v_x_991_, v_x_992_, v_x_993_, v_x_994_, v_x_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_997_, lean_object* v_x_998_, lean_object* v_x_999_, lean_object* v_x_1000_, lean_object* v_x_1001_, lean_object* v_x_1002_){
_start:
{
size_t v_x_3314__boxed_1003_; size_t v_x_3315__boxed_1004_; lean_object* v_res_1005_; 
v_x_3314__boxed_1003_ = lean_unbox_usize(v_x_999_);
lean_dec(v_x_999_);
v_x_3315__boxed_1004_ = lean_unbox_usize(v_x_1000_);
lean_dec(v_x_1000_);
v_res_1005_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5(v_00_u03b2_997_, v_x_998_, v_x_3314__boxed_1003_, v_x_3315__boxed_1004_, v_x_1001_, v_x_1002_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_1006_, lean_object* v_n_1007_, lean_object* v_k_1008_, lean_object* v_v_1009_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9___redArg(v_n_1007_, v_k_1008_, v_v_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10(lean_object* v_00_u03b2_1011_, size_t v_depth_1012_, lean_object* v_keys_1013_, lean_object* v_vals_1014_, lean_object* v_heq_1015_, lean_object* v_i_1016_, lean_object* v_entries_1017_){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___redArg(v_depth_1012_, v_keys_1013_, v_vals_1014_, v_i_1016_, v_entries_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10___boxed(lean_object* v_00_u03b2_1019_, lean_object* v_depth_1020_, lean_object* v_keys_1021_, lean_object* v_vals_1022_, lean_object* v_heq_1023_, lean_object* v_i_1024_, lean_object* v_entries_1025_){
_start:
{
size_t v_depth_boxed_1026_; lean_object* v_res_1027_; 
v_depth_boxed_1026_ = lean_unbox_usize(v_depth_1020_);
lean_dec(v_depth_1020_);
v_res_1027_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__10(v_00_u03b2_1019_, v_depth_boxed_1026_, v_keys_1021_, v_vals_1022_, v_heq_1023_, v_i_1024_, v_entries_1025_);
lean_dec_ref(v_vals_1022_);
lean_dec_ref(v_keys_1021_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7(lean_object* v_x_1028_, lean_object* v_keys_1029_, lean_object* v_v_1030_, lean_object* v_k_1031_, lean_object* v_as_1032_, lean_object* v_k_1033_, lean_object* v_x_1034_, lean_object* v_x_1035_, lean_object* v_x_1036_, lean_object* v_x_1037_){
_start:
{
lean_object* v___x_1038_; 
v___x_1038_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___redArg(v_x_1028_, v_keys_1029_, v_v_1030_, v_k_1031_, v_as_1032_, v_k_1033_, v_x_1034_, v_x_1035_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_x_1039_, lean_object* v_keys_1040_, lean_object* v_v_1041_, lean_object* v_k_1042_, lean_object* v_as_1043_, lean_object* v_k_1044_, lean_object* v_x_1045_, lean_object* v_x_1046_, lean_object* v_x_1047_, lean_object* v_x_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__0_spec__2_spec__7(v_x_1039_, v_keys_1040_, v_v_1041_, v_k_1042_, v_as_1043_, v_k_1044_, v_x_1045_, v_x_1046_, v_x_1047_, v_x_1048_);
lean_dec_ref(v_k_1044_);
lean_dec_ref(v_keys_1040_);
lean_dec(v_x_1039_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12(lean_object* v_00_u03b2_1050_, lean_object* v_n_1051_, lean_object* v_k_1052_, lean_object* v_v_1053_){
_start:
{
lean_object* v___x_1054_; 
v___x_1054_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12___redArg(v_n_1051_, v_k_1052_, v_v_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13(lean_object* v_00_u03b2_1055_, size_t v_depth_1056_, lean_object* v_keys_1057_, lean_object* v_vals_1058_, lean_object* v_heq_1059_, lean_object* v_i_1060_, lean_object* v_entries_1061_){
_start:
{
lean_object* v___x_1062_; 
v___x_1062_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___redArg(v_depth_1056_, v_keys_1057_, v_vals_1058_, v_i_1060_, v_entries_1061_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13___boxed(lean_object* v_00_u03b2_1063_, lean_object* v_depth_1064_, lean_object* v_keys_1065_, lean_object* v_vals_1066_, lean_object* v_heq_1067_, lean_object* v_i_1068_, lean_object* v_entries_1069_){
_start:
{
size_t v_depth_boxed_1070_; lean_object* v_res_1071_; 
v_depth_boxed_1070_ = lean_unbox_usize(v_depth_1064_);
lean_dec(v_depth_1064_);
v_res_1071_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__13(v_00_u03b2_1063_, v_depth_boxed_1070_, v_keys_1065_, v_vals_1066_, v_heq_1067_, v_i_1068_, v_entries_1069_);
lean_dec_ref(v_vals_1066_);
lean_dec_ref(v_keys_1065_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16(lean_object* v_00_u03b2_1072_, lean_object* v_x_1073_, lean_object* v_x_1074_, lean_object* v_x_1075_, lean_object* v_x_1076_){
_start:
{
lean_object* v___x_1077_; 
v___x_1077_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4_spec__9_spec__16___redArg(v_x_1073_, v_x_1074_, v_x_1075_, v_x_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15(lean_object* v_00_u03b2_1078_, lean_object* v_x_1079_, lean_object* v_x_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addInstanceEntry_spec__0_spec__1_spec__5_spec__12_spec__15___redArg(v_x_1079_, v_x_1080_, v_x_1081_, v_x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_eraseCore(lean_object* v_d_1084_, lean_object* v_declName_1085_){
_start:
{
lean_object* v_discrTree_1086_; lean_object* v_instanceNames_1087_; lean_object* v_erased_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1098_; 
v_discrTree_1086_ = lean_ctor_get(v_d_1084_, 0);
v_instanceNames_1087_ = lean_ctor_get(v_d_1084_, 1);
v_erased_1088_ = lean_ctor_get(v_d_1084_, 2);
v_isSharedCheck_1098_ = !lean_is_exclusive(v_d_1084_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1090_ = v_d_1084_;
v_isShared_1091_ = v_isSharedCheck_1098_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_erased_1088_);
lean_inc(v_instanceNames_1087_);
lean_inc(v_discrTree_1086_);
lean_dec(v_d_1084_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1098_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1096_; 
v___x_1092_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addInstanceEntry_spec__2___redArg(v_instanceNames_1087_, v_declName_1085_);
v___x_1093_ = lean_box(0);
v___x_1094_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1___redArg(v_erased_1088_, v_declName_1085_, v___x_1093_);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 2, v___x_1094_);
lean_ctor_set(v___x_1090_, 1, v___x_1092_);
v___x_1096_ = v___x_1090_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_discrTree_1086_);
lean_ctor_set(v_reuseFailAlloc_1097_, 1, v___x_1092_);
lean_ctor_set(v_reuseFailAlloc_1097_, 2, v___x_1094_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__0(lean_object* v_d_1099_, lean_object* v_declName_1100_, lean_object* v_toPure_1101_, lean_object* v_____r_1102_){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = l_Lean_Meta_Instances_eraseCore(v_d_1099_, v_declName_1100_);
v___x_1104_ = lean_apply_2(v_toPure_1101_, lean_box(0), v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__1(lean_object* v___f_1105_, lean_object* v_____r_1106_){
_start:
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_apply_1(v___f_1105_, v_____r_1106_);
return v___x_1107_;
}
}
static lean_object* _init_l_Lean_Meta_Instances_erase___redArg___closed__3(void){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__2));
v___x_1112_ = l_Lean_stringToMessageData(v___x_1111_);
return v___x_1112_;
}
}
static lean_object* _init_l_Lean_Meta_Instances_erase___redArg___closed__5(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__4));
v___x_1115_ = l_Lean_stringToMessageData(v___x_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg(lean_object* v_inst_1116_, lean_object* v_inst_1117_, lean_object* v_d_1118_, lean_object* v_declName_1119_){
_start:
{
lean_object* v_toApplicative_1120_; lean_object* v_toBind_1121_; lean_object* v_toPure_1122_; lean_object* v_instanceNames_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___f_1126_; uint8_t v___x_1127_; 
v_toApplicative_1120_ = lean_ctor_get(v_inst_1116_, 0);
v_toBind_1121_ = lean_ctor_get(v_inst_1116_, 1);
lean_inc(v_toBind_1121_);
v_toPure_1122_ = lean_ctor_get(v_toApplicative_1120_, 1);
v_instanceNames_1123_ = lean_ctor_get(v_d_1118_, 1);
v___x_1124_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__0));
v___x_1125_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__1));
lean_inc(v_toPure_1122_);
lean_inc_n(v_declName_1119_, 2);
lean_inc_ref(v_d_1118_);
v___f_1126_ = lean_alloc_closure((void*)(l_Lean_Meta_Instances_erase___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1126_, 0, v_d_1118_);
lean_closure_set(v___f_1126_, 1, v_declName_1119_);
lean_closure_set(v___f_1126_, 2, v_toPure_1122_);
lean_inc_ref(v_instanceNames_1123_);
v___x_1127_ = l_Lean_PersistentHashMap_contains___redArg(v___x_1124_, v___x_1125_, v_instanceNames_1123_, v_declName_1119_);
if (v___x_1127_ == 0)
{
lean_object* v___f_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
lean_dec_ref(v_d_1118_);
v___f_1128_ = lean_alloc_closure((void*)(l_Lean_Meta_Instances_erase___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1128_, 0, v___f_1126_);
v___x_1129_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_1130_ = l_Lean_MessageData_ofConstName(v_declName_1119_, v___x_1127_);
v___x_1131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1129_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
v___x_1132_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__5, &l_Lean_Meta_Instances_erase___redArg___closed__5_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__5);
v___x_1133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1131_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
v___x_1134_ = l_Lean_throwError___redArg(v_inst_1116_, v_inst_1117_, v___x_1133_);
v___x_1135_ = lean_apply_4(v_toBind_1121_, lean_box(0), lean_box(0), v___x_1134_, v___f_1128_);
return v___x_1135_;
}
else
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
lean_inc(v_toPure_1122_);
lean_dec_ref(v___f_1126_);
lean_dec(v_toBind_1121_);
lean_dec_ref(v_inst_1117_);
lean_dec_ref(v_inst_1116_);
v___x_1136_ = lean_box(0);
v___x_1137_ = l_Lean_Meta_Instances_erase___redArg___lam__0(v_d_1118_, v_declName_1119_, v_toPure_1122_, v___x_1136_);
return v___x_1137_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase(lean_object* v_m_1138_, lean_object* v_inst_1139_, lean_object* v_inst_1140_, lean_object* v_d_1141_, lean_object* v_declName_1142_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_Meta_Instances_erase___redArg(v_inst_1139_, v_inst_1140_, v_d_1141_, v_declName_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(lean_object* v_x_1144_, lean_object* v_e_1145_){
_start:
{
lean_object* v_globalName_x3f_1150_; 
v_globalName_x3f_1150_ = lean_ctor_get(v_e_1145_, 3);
lean_inc(v_globalName_x3f_1150_);
if (lean_obj_tag(v_globalName_x3f_1150_) == 0)
{
goto v___jp_1146_;
}
else
{
lean_object* v_val_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1160_; 
v_val_1151_ = lean_ctor_get(v_globalName_x3f_1150_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v_globalName_x3f_1150_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1153_ = v_globalName_x3f_1150_;
v_isShared_1154_ = v_isSharedCheck_1160_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_val_1151_);
lean_dec(v_globalName_x3f_1150_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1160_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
uint8_t v___x_1155_; 
v___x_1155_ = l_Lean_isPrivateName(v_val_1151_);
lean_dec(v_val_1151_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1157_; 
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 0, v_e_1145_);
v___x_1157_ = v___x_1153_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_e_1145_);
v___x_1157_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1158_; 
lean_inc_ref_n(v___x_1157_, 2);
v___x_1158_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
lean_ctor_set(v___x_1158_, 2, v___x_1157_);
return v___x_1158_;
}
}
else
{
lean_del_object(v___x_1153_);
goto v___jp_1146_;
}
}
}
v___jp_1146_:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1147_ = lean_box(0);
v___x_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1148_, 0, v_e_1145_);
v___x_1149_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1147_);
lean_ctor_set(v___x_1149_, 1, v___x_1147_);
lean_ctor_set(v___x_1149_, 2, v___x_1148_);
return v___x_1149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object* v_x_1161_, lean_object* v_e_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(v_x_1161_, v_e_1162_);
lean_dec_ref(v_x_1161_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(lean_object* v___y_1164_){
_start:
{
lean_inc_ref(v___y_1164_);
return v___y_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(v___y_1165_);
lean_dec_ref(v___y_1165_);
return v_res_1166_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1175_; lean_object* v___f_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___f_1175_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_));
v___f_1176_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_));
v___x_1177_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__2, &l_Lean_Meta_instInhabitedInstances_default___closed__2_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__2);
v___x_1178_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_));
v___x_1179_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_));
v___x_1180_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
lean_ctor_set(v___x_1180_, 1, v___x_1178_);
lean_ctor_set(v___x_1180_, 2, v___x_1177_);
lean_ctor_set(v___x_1180_, 3, v___f_1176_);
lean_ctor_set(v___x_1180_, 4, v___f_1175_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_);
v___x_1183_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2____boxed(lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_();
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(lean_object* v_k_1186_, uint8_t v_allowLevelAssignments_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1187_, v_k_1186_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1193_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1193_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
else
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
v_a_1202_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1193_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1193_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg___boxed(lean_object* v_k_1210_, lean_object* v_allowLevelAssignments_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1217_; lean_object* v_res_1218_; 
v_allowLevelAssignments_boxed_1217_ = lean_unbox(v_allowLevelAssignments_1211_);
v_res_1218_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v_k_1210_, v_allowLevelAssignments_boxed_1217_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
lean_dec_ref(v___y_1212_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(lean_object* v_00_u03b1_1219_, lean_object* v_k_1220_, uint8_t v_allowLevelAssignments_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v_k_1220_, v_allowLevelAssignments_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___boxed(lean_object* v_00_u03b1_1228_, lean_object* v_k_1229_, lean_object* v_allowLevelAssignments_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1236_; lean_object* v_res_1237_; 
v_allowLevelAssignments_boxed_1236_ = lean_unbox(v_allowLevelAssignments_1230_);
v_res_1237_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(v_00_u03b1_1228_, v_k_1229_, v_allowLevelAssignments_boxed_1236_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(lean_object* v_a_1238_, lean_object* v___x_1239_, uint8_t v___x_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
lean_object* v___x_1246_; 
v___x_1246_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_1238_, v___x_1239_, v___x_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v_snd_1248_; lean_object* v_snd_1249_; uint8_t v___x_1250_; lean_object* v___x_1251_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_a_1247_);
lean_dec_ref_known(v___x_1246_, 1);
v_snd_1248_ = lean_ctor_get(v_a_1247_, 1);
lean_inc(v_snd_1248_);
lean_dec(v_a_1247_);
v_snd_1249_ = lean_ctor_get(v_snd_1248_, 1);
lean_inc(v_snd_1249_);
lean_dec(v_snd_1248_);
v___x_1250_ = 0;
v___x_1251_ = l_Lean_Meta_DiscrTree_mkPath(v_snd_1249_, v___x_1250_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
return v___x_1251_;
}
else
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
v_a_1252_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___x_1246_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1246_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed(lean_object* v_a_1260_, lean_object* v___x_1261_, lean_object* v___x_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
uint8_t v___x_586__boxed_1268_; lean_object* v_res_1269_; 
v___x_586__boxed_1268_ = lean_unbox(v___x_1262_);
v_res_1269_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(v_a_1260_, v___x_1261_, v___x_586__boxed_1268_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(lean_object* v_e_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
lean_object* v___x_1276_; 
lean_inc(v___y_1274_);
lean_inc_ref(v___y_1273_);
lean_inc(v___y_1272_);
lean_inc_ref(v___y_1271_);
v___x_1276_ = lean_infer_type(v_e_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v_a_1277_; lean_object* v___x_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___f_1281_; uint8_t v___x_1282_; lean_object* v___x_1283_; 
v_a_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v___x_1278_ = lean_box(0);
v___x_1279_ = 0;
v___x_1280_ = lean_box(v___x_1279_);
v___f_1281_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1281_, 0, v_a_1277_);
lean_closure_set(v___f_1281_, 1, v___x_1278_);
lean_closure_set(v___f_1281_, 2, v___x_1280_);
v___x_1282_ = 0;
v___x_1283_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v___f_1281_, v___x_1282_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
return v___x_1283_;
}
else
{
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1291_; 
v_a_1284_ = lean_ctor_get(v___x_1276_, 0);
v_isSharedCheck_1291_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1286_ = v___x_1276_;
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v___x_1276_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v___x_1289_; 
if (v_isShared_1287_ == 0)
{
v___x_1289_ = v___x_1286_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_a_1284_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___boxed(lean_object* v_e_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(v_e_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(lean_object* v_k_1299_, lean_object* v_b_1300_, lean_object* v_c_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v___x_1307_; 
lean_inc(v___y_1305_);
lean_inc_ref(v___y_1304_);
lean_inc(v___y_1303_);
lean_inc_ref(v___y_1302_);
v___x_1307_ = lean_apply_7(v_k_1299_, v_b_1300_, v_c_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, lean_box(0));
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed(lean_object* v_k_1308_, lean_object* v_b_1309_, lean_object* v_c_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(v_k_1308_, v_b_1309_, v_c_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(lean_object* v_type_1317_, lean_object* v_k_1318_, uint8_t v_cleanupAnnotations_1319_, uint8_t v_whnfType_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v___f_1326_; lean_object* v___x_1327_; 
v___f_1326_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1326_, 0, v_k_1318_);
v___x_1327_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1317_, v___f_1326_, v_cleanupAnnotations_1319_, v_whnfType_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
v_a_1328_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1330_ = v___x_1327_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1327_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1328_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
else
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1343_; 
v_a_1336_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1338_ = v___x_1327_;
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1327_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1341_; 
if (v_isShared_1339_ == 0)
{
v___x_1341_ = v___x_1338_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1336_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___boxed(lean_object* v_type_1344_, lean_object* v_k_1345_, lean_object* v_cleanupAnnotations_1346_, lean_object* v_whnfType_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1353_; uint8_t v_whnfType_boxed_1354_; lean_object* v_res_1355_; 
v_cleanupAnnotations_boxed_1353_ = lean_unbox(v_cleanupAnnotations_1346_);
v_whnfType_boxed_1354_ = lean_unbox(v_whnfType_1347_);
v_res_1355_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_type_1344_, v_k_1345_, v_cleanupAnnotations_boxed_1353_, v_whnfType_boxed_1354_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(lean_object* v_00_u03b1_1356_, lean_object* v_type_1357_, lean_object* v_k_1358_, uint8_t v_cleanupAnnotations_1359_, uint8_t v_whnfType_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_type_1357_, v_k_1358_, v_cleanupAnnotations_1359_, v_whnfType_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___boxed(lean_object* v_00_u03b1_1367_, lean_object* v_type_1368_, lean_object* v_k_1369_, lean_object* v_cleanupAnnotations_1370_, lean_object* v_whnfType_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1377_; uint8_t v_whnfType_boxed_1378_; lean_object* v_res_1379_; 
v_cleanupAnnotations_boxed_1377_ = lean_unbox(v_cleanupAnnotations_1370_);
v_whnfType_boxed_1378_ = lean_unbox(v_whnfType_1371_);
v_res_1379_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(v_00_u03b1_1367_, v_type_1368_, v_k_1369_, v_cleanupAnnotations_boxed_1377_, v_whnfType_boxed_1378_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(lean_object* v_as_1383_, size_t v_sz_1384_, size_t v_i_1385_, lean_object* v_b_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v_a_1393_; uint8_t v___x_1397_; 
v___x_1397_ = lean_usize_dec_lt(v_i_1385_, v_sz_1384_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; 
v___x_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1398_, 0, v_b_1386_);
return v___x_1398_;
}
else
{
lean_object* v_fst_1399_; lean_object* v_snd_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1447_; 
v_fst_1399_ = lean_ctor_get(v_b_1386_, 0);
v_snd_1400_ = lean_ctor_get(v_b_1386_, 1);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_b_1386_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1402_ = v_b_1386_;
v_isShared_1403_ = v_isSharedCheck_1447_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_snd_1400_);
lean_inc(v_fst_1399_);
lean_dec(v_b_1386_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1447_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v_next_1409_; 
v_next_1409_ = lean_ctor_get(v_snd_1400_, 0);
lean_inc(v_next_1409_);
if (lean_obj_tag(v_next_1409_) == 0)
{
goto v___jp_1404_;
}
else
{
lean_object* v_upperBound_1410_; lean_object* v_val_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1446_; 
v_upperBound_1410_ = lean_ctor_get(v_snd_1400_, 1);
v_val_1411_ = lean_ctor_get(v_next_1409_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v_next_1409_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1413_ = v_next_1409_;
v_isShared_1414_ = v_isSharedCheck_1446_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_val_1411_);
lean_dec(v_next_1409_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1446_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
uint8_t v___x_1415_; 
v___x_1415_ = lean_nat_dec_lt(v_val_1411_, v_upperBound_1410_);
if (v___x_1415_ == 0)
{
lean_del_object(v___x_1413_);
lean_dec(v_val_1411_);
goto v___jp_1404_;
}
else
{
lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1443_; 
lean_inc(v_upperBound_1410_);
lean_del_object(v___x_1402_);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_snd_1400_);
if (v_isSharedCheck_1443_ == 0)
{
lean_object* v_unused_1444_; lean_object* v_unused_1445_; 
v_unused_1444_ = lean_ctor_get(v_snd_1400_, 1);
lean_dec(v_unused_1444_);
v_unused_1445_ = lean_ctor_get(v_snd_1400_, 0);
lean_dec(v_unused_1445_);
v___x_1417_ = v_snd_1400_;
v_isShared_1418_ = v_isSharedCheck_1443_;
goto v_resetjp_1416_;
}
else
{
lean_dec(v_snd_1400_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1443_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v_a_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1423_; 
v_a_1419_ = lean_array_uget_borrowed(v_as_1383_, v_i_1385_);
v___x_1420_ = lean_unsigned_to_nat(1u);
v___x_1421_ = lean_nat_add(v_val_1411_, v___x_1420_);
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 0, v___x_1421_);
v___x_1423_ = v___x_1413_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1421_);
v___x_1423_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
lean_object* v___x_1425_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1423_);
v___x_1425_ = v___x_1417_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1423_);
lean_ctor_set(v_reuseFailAlloc_1441_, 1, v_upperBound_1410_);
v___x_1425_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
lean_object* v___x_1426_; 
lean_inc(v___y_1390_);
lean_inc_ref(v___y_1389_);
lean_inc(v___y_1388_);
lean_inc_ref(v___y_1387_);
lean_inc(v_a_1419_);
v___x_1426_ = lean_infer_type(v_a_1419_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_a_1427_);
lean_dec_ref_known(v___x_1426_, 1);
v___x_1428_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1));
v___x_1429_ = l_Lean_Expr_isAppOf(v_a_1427_, v___x_1428_);
lean_dec(v_a_1427_);
if (v___x_1429_ == 0)
{
lean_object* v___x_1430_; 
lean_dec(v_val_1411_);
v___x_1430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1430_, 0, v_fst_1399_);
lean_ctor_set(v___x_1430_, 1, v___x_1425_);
v_a_1393_ = v___x_1430_;
goto v___jp_1392_;
}
else
{
lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1431_ = lean_array_push(v_fst_1399_, v_val_1411_);
v___x_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1431_);
lean_ctor_set(v___x_1432_, 1, v___x_1425_);
v_a_1393_ = v___x_1432_;
goto v___jp_1392_;
}
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1440_; 
lean_dec_ref(v___x_1425_);
lean_dec(v_val_1411_);
lean_dec(v_fst_1399_);
v_a_1433_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1435_ = v___x_1426_;
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1426_);
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
}
}
}
}
}
v___jp_1404_:
{
lean_object* v___x_1406_; 
if (v_isShared_1403_ == 0)
{
v___x_1406_ = v___x_1402_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_fst_1399_);
lean_ctor_set(v_reuseFailAlloc_1408_, 1, v_snd_1400_);
v___x_1406_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
lean_object* v___x_1407_; 
v___x_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
return v___x_1407_;
}
}
}
}
v___jp_1392_:
{
size_t v___x_1394_; size_t v___x_1395_; 
v___x_1394_ = ((size_t)1ULL);
v___x_1395_ = lean_usize_add(v_i_1385_, v___x_1394_);
v_i_1385_ = v___x_1395_;
v_b_1386_ = v_a_1393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___boxed(lean_object* v_as_1448_, lean_object* v_sz_1449_, lean_object* v_i_1450_, lean_object* v_b_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
size_t v_sz_boxed_1457_; size_t v_i_boxed_1458_; lean_object* v_res_1459_; 
v_sz_boxed_1457_ = lean_unbox_usize(v_sz_1449_);
lean_dec(v_sz_1449_);
v_i_boxed_1458_ = lean_unbox_usize(v_i_1450_);
lean_dec(v_i_1450_);
v_res_1459_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(v_as_1448_, v_sz_boxed_1457_, v_i_boxed_1458_, v_b_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec_ref(v_as_1448_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(lean_object* v_declName_1464_, lean_object* v_args_1465_, lean_object* v_x_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v___x_1472_; lean_object* v___y_1474_; lean_object* v_env_1499_; lean_object* v___x_1500_; 
v___x_1472_ = lean_st_ref_get(v___y_1470_);
v_env_1499_ = lean_ctor_get(v___x_1472_, 0);
lean_inc_ref(v_env_1499_);
lean_dec(v___x_1472_);
v___x_1500_ = l_Lean_getOutParamPositions_x3f(v_env_1499_, v_declName_1464_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_object* v___x_1501_; 
v___x_1501_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___y_1474_ = v___x_1501_;
goto v___jp_1473_;
}
else
{
lean_object* v_val_1502_; 
v_val_1502_ = lean_ctor_get(v___x_1500_, 0);
lean_inc(v_val_1502_);
lean_dec_ref_known(v___x_1500_, 1);
v___y_1474_ = v_val_1502_;
goto v___jp_1473_;
}
v___jp_1473_:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; size_t v_sz_1479_; size_t v___x_1480_; lean_object* v___x_1481_; 
v___x_1475_ = lean_array_get_size(v_args_1465_);
v___x_1476_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0));
v___x_1477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1476_);
lean_ctor_set(v___x_1477_, 1, v___x_1475_);
v___x_1478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___y_1474_);
lean_ctor_set(v___x_1478_, 1, v___x_1477_);
v_sz_1479_ = lean_array_size(v_args_1465_);
v___x_1480_ = ((size_t)0ULL);
v___x_1481_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(v_args_1465_, v_sz_1479_, v___x_1480_, v___x_1478_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1490_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1484_ = v___x_1481_;
v_isShared_1485_ = v_isSharedCheck_1490_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1481_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1490_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v_fst_1486_; lean_object* v___x_1488_; 
v_fst_1486_ = lean_ctor_get(v_a_1482_, 0);
lean_inc(v_fst_1486_);
lean_dec(v_a_1482_);
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 0, v_fst_1486_);
v___x_1488_ = v___x_1484_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_fst_1486_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
v_a_1491_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1481_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1481_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed(lean_object* v_declName_1503_, lean_object* v_args_1504_, lean_object* v_x_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(v_declName_1503_, v_args_1504_, v_x_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec_ref(v_x_1505_);
lean_dec_ref(v_args_1504_);
lean_dec(v_declName_1503_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(lean_object* v_classTy_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v___x_1518_; 
v___x_1518_ = l_Lean_Expr_getAppFn(v_classTy_1512_);
if (lean_obj_tag(v___x_1518_) == 4)
{
lean_object* v_declName_1519_; lean_object* v___f_1520_; lean_object* v___x_1521_; 
v_declName_1519_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_declName_1519_);
v___f_1520_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1520_, 0, v_declName_1519_);
lean_inc(v___y_1516_);
lean_inc_ref(v___y_1515_);
lean_inc(v___y_1514_);
lean_inc_ref(v___y_1513_);
v___x_1521_ = lean_infer_type(v___x_1518_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; uint8_t v___x_1523_; lean_object* v___x_1524_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1521_, 1);
v___x_1523_ = 0;
v___x_1524_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_1522_, v___f_1520_, v___x_1523_, v___x_1523_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_);
return v___x_1524_;
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
lean_dec_ref(v___f_1520_);
v_a_1525_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1521_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1521_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
else
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
lean_dec_ref(v___x_1518_);
v___x_1533_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
return v___x_1534_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___boxed(lean_object* v_classTy_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v_res_1541_; 
v_res_1541_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_classTy_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec_ref(v_classTy_1535_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(lean_object* v_a_1542_, lean_object* v_as_1543_, lean_object* v_j_1544_){
_start:
{
lean_object* v___x_1545_; uint8_t v___x_1546_; 
v___x_1545_ = lean_array_get_size(v_as_1543_);
v___x_1546_ = lean_nat_dec_lt(v_j_1544_, v___x_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; 
lean_dec(v_j_1544_);
v___x_1547_ = lean_box(0);
return v___x_1547_;
}
else
{
lean_object* v___x_1548_; lean_object* v___x_1549_; uint8_t v___x_1550_; 
v___x_1548_ = lean_array_fget_borrowed(v_as_1543_, v_j_1544_);
v___x_1549_ = l_Lean_Expr_mvarId_x21(v___x_1548_);
v___x_1550_ = l_Lean_instBEqMVarId_beq(v___x_1549_, v_a_1542_);
lean_dec(v___x_1549_);
if (v___x_1550_ == 0)
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = lean_unsigned_to_nat(1u);
v___x_1552_ = lean_nat_add(v_j_1544_, v___x_1551_);
lean_dec(v_j_1544_);
v_j_1544_ = v___x_1552_;
goto _start;
}
else
{
lean_object* v___x_1554_; 
v___x_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1554_, 0, v_j_1544_);
return v___x_1554_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0___boxed(lean_object* v_a_1555_, lean_object* v_as_1556_, lean_object* v_j_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(v_a_1555_, v_as_1556_, v_j_1557_);
lean_dec_ref(v_as_1556_);
lean_dec(v_a_1555_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_1559_, lean_object* v_x_1560_, lean_object* v_x_1561_, lean_object* v_x_1562_){
_start:
{
lean_object* v_ks_1563_; lean_object* v_vs_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1588_; 
v_ks_1563_ = lean_ctor_get(v_x_1559_, 0);
v_vs_1564_ = lean_ctor_get(v_x_1559_, 1);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_x_1559_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1566_ = v_x_1559_;
v_isShared_1567_ = v_isSharedCheck_1588_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_vs_1564_);
lean_inc(v_ks_1563_);
lean_dec(v_x_1559_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1588_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1568_; uint8_t v___x_1569_; 
v___x_1568_ = lean_array_get_size(v_ks_1563_);
v___x_1569_ = lean_nat_dec_lt(v_x_1560_, v___x_1568_);
if (v___x_1569_ == 0)
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1573_; 
lean_dec(v_x_1560_);
v___x_1570_ = lean_array_push(v_ks_1563_, v_x_1561_);
v___x_1571_ = lean_array_push(v_vs_1564_, v_x_1562_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 1, v___x_1571_);
lean_ctor_set(v___x_1566_, 0, v___x_1570_);
v___x_1573_ = v___x_1566_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v___x_1570_);
lean_ctor_set(v_reuseFailAlloc_1574_, 1, v___x_1571_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
else
{
lean_object* v_k_x27_1575_; uint8_t v___x_1576_; 
v_k_x27_1575_ = lean_array_fget_borrowed(v_ks_1563_, v_x_1560_);
v___x_1576_ = l_Lean_instBEqMVarId_beq(v_x_1561_, v_k_x27_1575_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1578_; 
if (v_isShared_1567_ == 0)
{
v___x_1578_ = v___x_1566_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_ks_1563_);
lean_ctor_set(v_reuseFailAlloc_1582_, 1, v_vs_1564_);
v___x_1578_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = lean_unsigned_to_nat(1u);
v___x_1580_ = lean_nat_add(v_x_1560_, v___x_1579_);
lean_dec(v_x_1560_);
v_x_1559_ = v___x_1578_;
v_x_1560_ = v___x_1580_;
goto _start;
}
}
else
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1586_; 
v___x_1583_ = lean_array_fset(v_ks_1563_, v_x_1560_, v_x_1561_);
v___x_1584_ = lean_array_fset(v_vs_1564_, v_x_1560_, v_x_1562_);
lean_dec(v_x_1560_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 1, v___x_1584_);
lean_ctor_set(v___x_1566_, 0, v___x_1583_);
v___x_1586_ = v___x_1566_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1583_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_n_1589_, lean_object* v_k_1590_, lean_object* v_v_1591_){
_start:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1592_ = lean_unsigned_to_nat(0u);
v___x_1593_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(v_n_1589_, v___x_1592_, v_k_1590_, v_v_1591_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(lean_object* v_x_1594_, size_t v_x_1595_, size_t v_x_1596_, lean_object* v_x_1597_, lean_object* v_x_1598_){
_start:
{
if (lean_obj_tag(v_x_1594_) == 0)
{
lean_object* v_es_1599_; size_t v___x_1600_; size_t v___x_1601_; lean_object* v_j_1602_; lean_object* v___x_1603_; uint8_t v___x_1604_; 
v_es_1599_ = lean_ctor_get(v_x_1594_, 0);
v___x_1600_ = ((size_t)31ULL);
v___x_1601_ = lean_usize_land(v_x_1595_, v___x_1600_);
v_j_1602_ = lean_usize_to_nat(v___x_1601_);
v___x_1603_ = lean_array_get_size(v_es_1599_);
v___x_1604_ = lean_nat_dec_lt(v_j_1602_, v___x_1603_);
if (v___x_1604_ == 0)
{
lean_dec(v_j_1602_);
lean_dec(v_x_1598_);
lean_dec(v_x_1597_);
return v_x_1594_;
}
else
{
lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1643_; 
lean_inc_ref(v_es_1599_);
v_isSharedCheck_1643_ = !lean_is_exclusive(v_x_1594_);
if (v_isSharedCheck_1643_ == 0)
{
lean_object* v_unused_1644_; 
v_unused_1644_ = lean_ctor_get(v_x_1594_, 0);
lean_dec(v_unused_1644_);
v___x_1606_ = v_x_1594_;
v_isShared_1607_ = v_isSharedCheck_1643_;
goto v_resetjp_1605_;
}
else
{
lean_dec(v_x_1594_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1643_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v_v_1608_; lean_object* v___x_1609_; lean_object* v_xs_x27_1610_; lean_object* v___y_1612_; 
v_v_1608_ = lean_array_fget(v_es_1599_, v_j_1602_);
v___x_1609_ = lean_box(0);
v_xs_x27_1610_ = lean_array_fset(v_es_1599_, v_j_1602_, v___x_1609_);
switch(lean_obj_tag(v_v_1608_))
{
case 0:
{
lean_object* v_key_1617_; lean_object* v_val_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1628_; 
v_key_1617_ = lean_ctor_get(v_v_1608_, 0);
v_val_1618_ = lean_ctor_get(v_v_1608_, 1);
v_isSharedCheck_1628_ = !lean_is_exclusive(v_v_1608_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1620_ = v_v_1608_;
v_isShared_1621_ = v_isSharedCheck_1628_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_val_1618_);
lean_inc(v_key_1617_);
lean_dec(v_v_1608_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1628_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
uint8_t v___x_1622_; 
v___x_1622_ = l_Lean_instBEqMVarId_beq(v_x_1597_, v_key_1617_);
if (v___x_1622_ == 0)
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
lean_del_object(v___x_1620_);
v___x_1623_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1617_, v_val_1618_, v_x_1597_, v_x_1598_);
v___x_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
v___y_1612_ = v___x_1624_;
goto v___jp_1611_;
}
else
{
lean_object* v___x_1626_; 
lean_dec(v_val_1618_);
lean_dec(v_key_1617_);
if (v_isShared_1621_ == 0)
{
lean_ctor_set(v___x_1620_, 1, v_x_1598_);
lean_ctor_set(v___x_1620_, 0, v_x_1597_);
v___x_1626_ = v___x_1620_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_x_1597_);
lean_ctor_set(v_reuseFailAlloc_1627_, 1, v_x_1598_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
v___y_1612_ = v___x_1626_;
goto v___jp_1611_;
}
}
}
}
case 1:
{
lean_object* v_node_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1641_; 
v_node_1629_ = lean_ctor_get(v_v_1608_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_v_1608_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1631_ = v_v_1608_;
v_isShared_1632_ = v_isSharedCheck_1641_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_node_1629_);
lean_dec(v_v_1608_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1641_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
size_t v___x_1633_; size_t v___x_1634_; size_t v___x_1635_; size_t v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1639_; 
v___x_1633_ = ((size_t)5ULL);
v___x_1634_ = lean_usize_shift_right(v_x_1595_, v___x_1633_);
v___x_1635_ = ((size_t)1ULL);
v___x_1636_ = lean_usize_add(v_x_1596_, v___x_1635_);
v___x_1637_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_node_1629_, v___x_1634_, v___x_1636_, v_x_1597_, v_x_1598_);
if (v_isShared_1632_ == 0)
{
lean_ctor_set(v___x_1631_, 0, v___x_1637_);
v___x_1639_ = v___x_1631_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1637_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
v___y_1612_ = v___x_1639_;
goto v___jp_1611_;
}
}
}
default: 
{
lean_object* v___x_1642_; 
v___x_1642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1642_, 0, v_x_1597_);
lean_ctor_set(v___x_1642_, 1, v_x_1598_);
v___y_1612_ = v___x_1642_;
goto v___jp_1611_;
}
}
v___jp_1611_:
{
lean_object* v___x_1613_; lean_object* v___x_1615_; 
v___x_1613_ = lean_array_fset(v_xs_x27_1610_, v_j_1602_, v___y_1612_);
lean_dec(v_j_1602_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 0, v___x_1613_);
v___x_1615_ = v___x_1606_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v___x_1613_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
}
else
{
lean_object* v_ks_1645_; lean_object* v_vs_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1664_; 
v_ks_1645_ = lean_ctor_get(v_x_1594_, 0);
v_vs_1646_ = lean_ctor_get(v_x_1594_, 1);
v_isSharedCheck_1664_ = !lean_is_exclusive(v_x_1594_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1648_ = v_x_1594_;
v_isShared_1649_ = v_isSharedCheck_1664_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_vs_1646_);
lean_inc(v_ks_1645_);
lean_dec(v_x_1594_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1664_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_ks_1645_);
lean_ctor_set(v_reuseFailAlloc_1663_, 1, v_vs_1646_);
v___x_1651_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
lean_object* v_newNode_1652_; size_t v___x_1653_; uint8_t v___x_1654_; 
v_newNode_1652_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(v___x_1651_, v_x_1597_, v_x_1598_);
v___x_1653_ = ((size_t)7ULL);
v___x_1654_ = lean_usize_dec_le(v___x_1653_, v_x_1596_);
if (v___x_1654_ == 0)
{
lean_object* v___x_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; 
v___x_1655_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1652_);
v___x_1656_ = lean_unsigned_to_nat(4u);
v___x_1657_ = lean_nat_dec_lt(v___x_1655_, v___x_1656_);
lean_dec(v___x_1655_);
if (v___x_1657_ == 0)
{
lean_object* v_ks_1658_; lean_object* v_vs_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
v_ks_1658_ = lean_ctor_get(v_newNode_1652_, 0);
lean_inc_ref(v_ks_1658_);
v_vs_1659_ = lean_ctor_get(v_newNode_1652_, 1);
lean_inc_ref(v_vs_1659_);
lean_dec_ref(v_newNode_1652_);
v___x_1660_ = lean_unsigned_to_nat(0u);
v___x_1661_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_addInstanceEntry_spec__1_spec__4___redArg___closed__0);
v___x_1662_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_x_1596_, v_ks_1658_, v_vs_1659_, v___x_1660_, v___x_1661_);
lean_dec_ref(v_vs_1659_);
lean_dec_ref(v_ks_1658_);
return v___x_1662_;
}
else
{
return v_newNode_1652_;
}
}
else
{
return v_newNode_1652_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(size_t v_depth_1665_, lean_object* v_keys_1666_, lean_object* v_vals_1667_, lean_object* v_i_1668_, lean_object* v_entries_1669_){
_start:
{
lean_object* v___x_1670_; uint8_t v___x_1671_; 
v___x_1670_ = lean_array_get_size(v_keys_1666_);
v___x_1671_ = lean_nat_dec_lt(v_i_1668_, v___x_1670_);
if (v___x_1671_ == 0)
{
lean_dec(v_i_1668_);
return v_entries_1669_;
}
else
{
lean_object* v_k_1672_; lean_object* v_v_1673_; uint64_t v___x_1674_; size_t v_h_1675_; size_t v___x_1676_; lean_object* v___x_1677_; size_t v___x_1678_; size_t v___x_1679_; size_t v___x_1680_; size_t v_h_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v_k_1672_ = lean_array_fget_borrowed(v_keys_1666_, v_i_1668_);
v_v_1673_ = lean_array_fget_borrowed(v_vals_1667_, v_i_1668_);
v___x_1674_ = l_Lean_instHashableMVarId_hash(v_k_1672_);
v_h_1675_ = lean_uint64_to_usize(v___x_1674_);
v___x_1676_ = ((size_t)5ULL);
v___x_1677_ = lean_unsigned_to_nat(1u);
v___x_1678_ = ((size_t)1ULL);
v___x_1679_ = lean_usize_sub(v_depth_1665_, v___x_1678_);
v___x_1680_ = lean_usize_mul(v___x_1676_, v___x_1679_);
v_h_1681_ = lean_usize_shift_right(v_h_1675_, v___x_1680_);
v___x_1682_ = lean_nat_add(v_i_1668_, v___x_1677_);
lean_dec(v_i_1668_);
lean_inc(v_v_1673_);
lean_inc(v_k_1672_);
v___x_1683_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_entries_1669_, v_h_1681_, v_depth_1665_, v_k_1672_, v_v_1673_);
v_i_1668_ = v___x_1682_;
v_entries_1669_ = v___x_1683_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_1685_, lean_object* v_keys_1686_, lean_object* v_vals_1687_, lean_object* v_i_1688_, lean_object* v_entries_1689_){
_start:
{
size_t v_depth_boxed_1690_; lean_object* v_res_1691_; 
v_depth_boxed_1690_ = lean_unbox_usize(v_depth_1685_);
lean_dec(v_depth_1685_);
v_res_1691_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_depth_boxed_1690_, v_keys_1686_, v_vals_1687_, v_i_1688_, v_entries_1689_);
lean_dec_ref(v_vals_1687_);
lean_dec_ref(v_keys_1686_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_1692_, lean_object* v_x_1693_, lean_object* v_x_1694_, lean_object* v_x_1695_, lean_object* v_x_1696_){
_start:
{
size_t v_x_1780__boxed_1697_; size_t v_x_1781__boxed_1698_; lean_object* v_res_1699_; 
v_x_1780__boxed_1697_ = lean_unbox_usize(v_x_1693_);
lean_dec(v_x_1693_);
v_x_1781__boxed_1698_ = lean_unbox_usize(v_x_1694_);
lean_dec(v_x_1694_);
v_res_1699_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_1692_, v_x_1780__boxed_1697_, v_x_1781__boxed_1698_, v_x_1695_, v_x_1696_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(lean_object* v_x_1700_, lean_object* v_x_1701_, lean_object* v_x_1702_){
_start:
{
uint64_t v___x_1703_; size_t v___x_1704_; size_t v___x_1705_; lean_object* v___x_1706_; 
v___x_1703_ = l_Lean_instHashableMVarId_hash(v_x_1701_);
v___x_1704_ = lean_uint64_to_usize(v___x_1703_);
v___x_1705_ = ((size_t)1ULL);
v___x_1706_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_1700_, v___x_1704_, v___x_1705_, v_x_1701_, v_x_1702_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(lean_object* v_mvarId_1707_, lean_object* v_val_1708_, lean_object* v___y_1709_){
_start:
{
lean_object* v___x_1711_; lean_object* v_mctx_1712_; lean_object* v_cache_1713_; lean_object* v_zetaDeltaFVarIds_1714_; lean_object* v_postponed_1715_; lean_object* v_diag_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1745_; 
v___x_1711_ = lean_st_ref_take(v___y_1709_);
v_mctx_1712_ = lean_ctor_get(v___x_1711_, 0);
v_cache_1713_ = lean_ctor_get(v___x_1711_, 1);
v_zetaDeltaFVarIds_1714_ = lean_ctor_get(v___x_1711_, 2);
v_postponed_1715_ = lean_ctor_get(v___x_1711_, 3);
v_diag_1716_ = lean_ctor_get(v___x_1711_, 4);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1718_ = v___x_1711_;
v_isShared_1719_ = v_isSharedCheck_1745_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_diag_1716_);
lean_inc(v_postponed_1715_);
lean_inc(v_zetaDeltaFVarIds_1714_);
lean_inc(v_cache_1713_);
lean_inc(v_mctx_1712_);
lean_dec(v___x_1711_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1745_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v_depth_1720_; lean_object* v_levelAssignDepth_1721_; lean_object* v_lmvarCounter_1722_; lean_object* v_mvarCounter_1723_; lean_object* v_lDecls_1724_; lean_object* v_decls_1725_; lean_object* v_userNames_1726_; lean_object* v_lAssignment_1727_; lean_object* v_eAssignment_1728_; lean_object* v_dAssignment_1729_; lean_object* v_instanceTypedMVars_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1744_; 
v_depth_1720_ = lean_ctor_get(v_mctx_1712_, 0);
v_levelAssignDepth_1721_ = lean_ctor_get(v_mctx_1712_, 1);
v_lmvarCounter_1722_ = lean_ctor_get(v_mctx_1712_, 2);
v_mvarCounter_1723_ = lean_ctor_get(v_mctx_1712_, 3);
v_lDecls_1724_ = lean_ctor_get(v_mctx_1712_, 4);
v_decls_1725_ = lean_ctor_get(v_mctx_1712_, 5);
v_userNames_1726_ = lean_ctor_get(v_mctx_1712_, 6);
v_lAssignment_1727_ = lean_ctor_get(v_mctx_1712_, 7);
v_eAssignment_1728_ = lean_ctor_get(v_mctx_1712_, 8);
v_dAssignment_1729_ = lean_ctor_get(v_mctx_1712_, 9);
v_instanceTypedMVars_1730_ = lean_ctor_get(v_mctx_1712_, 10);
v_isSharedCheck_1744_ = !lean_is_exclusive(v_mctx_1712_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1732_ = v_mctx_1712_;
v_isShared_1733_ = v_isSharedCheck_1744_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_instanceTypedMVars_1730_);
lean_inc(v_dAssignment_1729_);
lean_inc(v_eAssignment_1728_);
lean_inc(v_lAssignment_1727_);
lean_inc(v_userNames_1726_);
lean_inc(v_decls_1725_);
lean_inc(v_lDecls_1724_);
lean_inc(v_mvarCounter_1723_);
lean_inc(v_lmvarCounter_1722_);
lean_inc(v_levelAssignDepth_1721_);
lean_inc(v_depth_1720_);
lean_dec(v_mctx_1712_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1744_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1737_; 
v___x_1734_ = lean_box(0);
v___x_1735_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(v_eAssignment_1728_, v_mvarId_1707_, v_val_1708_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 8, v___x_1735_);
v___x_1737_ = v___x_1732_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_depth_1720_);
lean_ctor_set(v_reuseFailAlloc_1743_, 1, v_levelAssignDepth_1721_);
lean_ctor_set(v_reuseFailAlloc_1743_, 2, v_lmvarCounter_1722_);
lean_ctor_set(v_reuseFailAlloc_1743_, 3, v_mvarCounter_1723_);
lean_ctor_set(v_reuseFailAlloc_1743_, 4, v_lDecls_1724_);
lean_ctor_set(v_reuseFailAlloc_1743_, 5, v_decls_1725_);
lean_ctor_set(v_reuseFailAlloc_1743_, 6, v_userNames_1726_);
lean_ctor_set(v_reuseFailAlloc_1743_, 7, v_lAssignment_1727_);
lean_ctor_set(v_reuseFailAlloc_1743_, 8, v___x_1735_);
lean_ctor_set(v_reuseFailAlloc_1743_, 9, v_dAssignment_1729_);
lean_ctor_set(v_reuseFailAlloc_1743_, 10, v_instanceTypedMVars_1730_);
v___x_1737_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
lean_object* v___x_1739_; 
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v___x_1737_);
v___x_1739_ = v___x_1718_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1737_);
lean_ctor_set(v_reuseFailAlloc_1742_, 1, v_cache_1713_);
lean_ctor_set(v_reuseFailAlloc_1742_, 2, v_zetaDeltaFVarIds_1714_);
lean_ctor_set(v_reuseFailAlloc_1742_, 3, v_postponed_1715_);
lean_ctor_set(v_reuseFailAlloc_1742_, 4, v_diag_1716_);
v___x_1739_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = lean_st_ref_put(v___y_1709_, v___x_1739_);
v___x_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1734_);
return v___x_1741_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg___boxed(lean_object* v_mvarId_1746_, lean_object* v_val_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_mvarId_1746_, v_val_1747_, v___y_1748_);
lean_dec(v___y_1748_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(lean_object* v_argMVars_1751_, lean_object* v_argVars_1752_, lean_object* v_as_1753_, size_t v_sz_1754_, size_t v_i_1755_, lean_object* v_b_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
uint8_t v___x_1762_; 
v___x_1762_ = lean_usize_dec_lt(v_i_1755_, v_sz_1754_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v_b_1756_);
return v___x_1763_;
}
else
{
lean_object* v___x_1764_; lean_object* v_a_1765_; lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1764_ = lean_box(0);
v_a_1765_ = lean_array_uget_borrowed(v_as_1753_, v_i_1755_);
v___x_1786_ = lean_unsigned_to_nat(0u);
v___x_1787_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(v_a_1765_, v_argMVars_1751_, v___x_1786_);
if (lean_obj_tag(v___x_1787_) == 1)
{
lean_object* v_val_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v_val_1788_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_val_1788_);
lean_dec_ref_known(v___x_1787_, 1);
v___x_1789_ = l_Lean_instInhabitedExpr;
v___x_1790_ = lean_array_get_borrowed(v___x_1789_, v_argVars_1752_, v_val_1788_);
lean_dec(v_val_1788_);
lean_inc(v___x_1790_);
lean_inc(v_a_1765_);
v___x_1791_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_a_1765_, v___x_1790_, v___y_1758_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_dec_ref_known(v___x_1791_, 1);
v___y_1767_ = v___y_1757_;
v___y_1768_ = v___y_1758_;
v___y_1769_ = v___y_1759_;
v___y_1770_ = v___y_1760_;
goto v___jp_1766_;
}
else
{
return v___x_1791_;
}
}
else
{
lean_dec(v___x_1787_);
v___y_1767_ = v___y_1757_;
v___y_1768_ = v___y_1758_;
v___y_1769_ = v___y_1759_;
v___y_1770_ = v___y_1760_;
goto v___jp_1766_;
}
v___jp_1766_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; 
lean_inc(v_a_1765_);
v___x_1771_ = l_Lean_Expr_mvar___override(v_a_1765_);
lean_inc(v___y_1770_);
lean_inc_ref(v___y_1769_);
lean_inc(v___y_1768_);
lean_inc_ref(v___y_1767_);
v___x_1772_ = lean_infer_type(v___x_1771_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; lean_object* v___x_1774_; 
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1773_);
lean_dec_ref_known(v___x_1772_, 1);
v___x_1774_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_argMVars_1751_, v_argVars_1752_, v_a_1773_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_);
if (lean_obj_tag(v___x_1774_) == 0)
{
size_t v___x_1775_; size_t v___x_1776_; 
lean_dec_ref_known(v___x_1774_, 1);
v___x_1775_ = ((size_t)1ULL);
v___x_1776_ = lean_usize_add(v_i_1755_, v___x_1775_);
v_i_1755_ = v___x_1776_;
v_b_1756_ = v___x_1764_;
goto _start;
}
else
{
return v___x_1774_;
}
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
v_a_1778_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1772_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1772_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(lean_object* v_argMVars_1792_, lean_object* v_argVars_1793_, lean_object* v_e_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Lean_Meta_getMVars(v_e_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v_a_1801_; lean_object* v___x_1802_; size_t v_sz_1803_; size_t v___x_1804_; lean_object* v___x_1805_; 
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1801_);
lean_dec_ref_known(v___x_1800_, 1);
v___x_1802_ = lean_box(0);
v_sz_1803_ = lean_array_size(v_a_1801_);
v___x_1804_ = ((size_t)0ULL);
v___x_1805_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(v_argMVars_1792_, v_argVars_1793_, v_a_1801_, v_sz_1803_, v___x_1804_, v___x_1802_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_);
lean_dec(v_a_1801_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1812_; 
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1812_ == 0)
{
lean_object* v_unused_1813_; 
v_unused_1813_ = lean_ctor_get(v___x_1805_, 0);
lean_dec(v_unused_1813_);
v___x_1807_ = v___x_1805_;
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
else
{
lean_dec(v___x_1805_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 0, v___x_1802_);
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1802_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
else
{
return v___x_1805_;
}
}
else
{
lean_object* v_a_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1821_; 
v_a_1814_ = lean_ctor_get(v___x_1800_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1800_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1816_ = v___x_1800_;
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_a_1814_);
lean_dec(v___x_1800_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1819_; 
if (v_isShared_1817_ == 0)
{
v___x_1819_ = v___x_1816_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_a_1814_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn___boxed(lean_object* v_argMVars_1822_, lean_object* v_argVars_1823_, lean_object* v_e_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_argMVars_1822_, v_argVars_1823_, v_e_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec_ref(v_argVars_1823_);
lean_dec_ref(v_argMVars_1822_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2___boxed(lean_object* v_argMVars_1831_, lean_object* v_argVars_1832_, lean_object* v_as_1833_, lean_object* v_sz_1834_, lean_object* v_i_1835_, lean_object* v_b_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
size_t v_sz_boxed_1842_; size_t v_i_boxed_1843_; lean_object* v_res_1844_; 
v_sz_boxed_1842_ = lean_unbox_usize(v_sz_1834_);
lean_dec(v_sz_1834_);
v_i_boxed_1843_ = lean_unbox_usize(v_i_1835_);
lean_dec(v_i_1835_);
v_res_1844_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(v_argMVars_1831_, v_argVars_1832_, v_as_1833_, v_sz_boxed_1842_, v_i_boxed_1843_, v_b_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
lean_dec_ref(v_as_1833_);
lean_dec_ref(v_argVars_1832_);
lean_dec_ref(v_argMVars_1831_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(lean_object* v_mvarId_1845_, lean_object* v_val_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
lean_object* v___x_1852_; 
v___x_1852_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_mvarId_1845_, v_val_1846_, v___y_1848_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___boxed(lean_object* v_mvarId_1853_, lean_object* v_val_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
lean_object* v_res_1860_; 
v_res_1860_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(v_mvarId_1853_, v_val_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1(lean_object* v_00_u03b2_1861_, lean_object* v_x_1862_, lean_object* v_x_1863_, lean_object* v_x_1864_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(v_x_1862_, v_x_1863_, v_x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_1866_, lean_object* v_x_1867_, size_t v_x_1868_, size_t v_x_1869_, lean_object* v_x_1870_, lean_object* v_x_1871_){
_start:
{
lean_object* v___x_1872_; 
v___x_1872_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_1867_, v_x_1868_, v_x_1869_, v_x_1870_, v_x_1871_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1873_, lean_object* v_x_1874_, lean_object* v_x_1875_, lean_object* v_x_1876_, lean_object* v_x_1877_, lean_object* v_x_1878_){
_start:
{
size_t v_x_2150__boxed_1879_; size_t v_x_2151__boxed_1880_; lean_object* v_res_1881_; 
v_x_2150__boxed_1879_ = lean_unbox_usize(v_x_1875_);
lean_dec(v_x_1875_);
v_x_2151__boxed_1880_ = lean_unbox_usize(v_x_1876_);
lean_dec(v_x_1876_);
v_res_1881_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(v_00_u03b2_1873_, v_x_1874_, v_x_2150__boxed_1879_, v_x_2151__boxed_1880_, v_x_1877_, v_x_1878_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1882_, lean_object* v_n_1883_, lean_object* v_k_1884_, lean_object* v_v_1885_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(v_n_1883_, v_k_1884_, v_v_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_1887_, size_t v_depth_1888_, lean_object* v_keys_1889_, lean_object* v_vals_1890_, lean_object* v_heq_1891_, lean_object* v_i_1892_, lean_object* v_entries_1893_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_depth_1888_, v_keys_1889_, v_vals_1890_, v_i_1892_, v_entries_1893_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1895_, lean_object* v_depth_1896_, lean_object* v_keys_1897_, lean_object* v_vals_1898_, lean_object* v_heq_1899_, lean_object* v_i_1900_, lean_object* v_entries_1901_){
_start:
{
size_t v_depth_boxed_1902_; lean_object* v_res_1903_; 
v_depth_boxed_1902_ = lean_unbox_usize(v_depth_1896_);
lean_dec(v_depth_1896_);
v_res_1903_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(v_00_u03b2_1895_, v_depth_boxed_1902_, v_keys_1897_, v_vals_1898_, v_heq_1899_, v_i_1900_, v_entries_1901_);
lean_dec_ref(v_vals_1898_);
lean_dec_ref(v_keys_1897_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_1904_, lean_object* v_x_1905_, lean_object* v_x_1906_, lean_object* v_x_1907_, lean_object* v_x_1908_){
_start:
{
lean_object* v___x_1909_; 
v___x_1909_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(v_x_1905_, v_x_1906_, v_x_1907_, v_x_1908_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(lean_object* v_e_1910_, lean_object* v___y_1911_){
_start:
{
uint8_t v___x_1913_; 
v___x_1913_ = l_Lean_Expr_hasMVar(v_e_1910_);
if (v___x_1913_ == 0)
{
lean_object* v___x_1914_; 
v___x_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1914_, 0, v_e_1910_);
return v___x_1914_;
}
else
{
lean_object* v___x_1915_; lean_object* v_mctx_1916_; lean_object* v___x_1917_; lean_object* v_fst_1918_; lean_object* v_snd_1919_; lean_object* v___x_1920_; lean_object* v_cache_1921_; lean_object* v_zetaDeltaFVarIds_1922_; lean_object* v_postponed_1923_; lean_object* v_diag_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1933_; 
v___x_1915_ = lean_st_ref_get(v___y_1911_);
v_mctx_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc_ref(v_mctx_1916_);
lean_dec(v___x_1915_);
v___x_1917_ = l_Lean_instantiateMVarsCore(v_mctx_1916_, v_e_1910_);
v_fst_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_fst_1918_);
v_snd_1919_ = lean_ctor_get(v___x_1917_, 1);
lean_inc(v_snd_1919_);
lean_dec_ref(v___x_1917_);
v___x_1920_ = lean_st_ref_take(v___y_1911_);
v_cache_1921_ = lean_ctor_get(v___x_1920_, 1);
v_zetaDeltaFVarIds_1922_ = lean_ctor_get(v___x_1920_, 2);
v_postponed_1923_ = lean_ctor_get(v___x_1920_, 3);
v_diag_1924_ = lean_ctor_get(v___x_1920_, 4);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1933_ == 0)
{
lean_object* v_unused_1934_; 
v_unused_1934_ = lean_ctor_get(v___x_1920_, 0);
lean_dec(v_unused_1934_);
v___x_1926_ = v___x_1920_;
v_isShared_1927_ = v_isSharedCheck_1933_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_diag_1924_);
lean_inc(v_postponed_1923_);
lean_inc(v_zetaDeltaFVarIds_1922_);
lean_inc(v_cache_1921_);
lean_dec(v___x_1920_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1933_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 0, v_snd_1919_);
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_snd_1919_);
lean_ctor_set(v_reuseFailAlloc_1932_, 1, v_cache_1921_);
lean_ctor_set(v_reuseFailAlloc_1932_, 2, v_zetaDeltaFVarIds_1922_);
lean_ctor_set(v_reuseFailAlloc_1932_, 3, v_postponed_1923_);
lean_ctor_set(v_reuseFailAlloc_1932_, 4, v_diag_1924_);
v___x_1929_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1930_ = lean_st_ref_put(v___y_1911_, v___x_1929_);
v___x_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1931_, 0, v_fst_1918_);
return v___x_1931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg___boxed(lean_object* v_e_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_e_1935_, v___y_1936_);
lean_dec(v___y_1936_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(lean_object* v_e_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v___x_1945_; 
v___x_1945_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_e_1939_, v___y_1941_);
return v___x_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___boxed(lean_object* v_e_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_){
_start:
{
lean_object* v_res_1952_; 
v_res_1952_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(v_e_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
return v_res_1952_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(lean_object* v_opts_1953_, lean_object* v_opt_1954_){
_start:
{
lean_object* v_name_1955_; lean_object* v_defValue_1956_; lean_object* v_map_1957_; lean_object* v___x_1958_; 
v_name_1955_ = lean_ctor_get(v_opt_1954_, 0);
v_defValue_1956_ = lean_ctor_get(v_opt_1954_, 1);
v_map_1957_ = lean_ctor_get(v_opts_1953_, 0);
v___x_1958_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1957_, v_name_1955_);
if (lean_obj_tag(v___x_1958_) == 0)
{
uint8_t v___x_1959_; 
v___x_1959_ = lean_unbox(v_defValue_1956_);
return v___x_1959_;
}
else
{
lean_object* v_val_1960_; 
v_val_1960_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_val_1960_);
lean_dec_ref_known(v___x_1958_, 1);
if (lean_obj_tag(v_val_1960_) == 1)
{
uint8_t v_v_1961_; 
v_v_1961_ = lean_ctor_get_uint8(v_val_1960_, 0);
lean_dec_ref_known(v_val_1960_, 0);
return v_v_1961_;
}
else
{
uint8_t v___x_1962_; 
lean_dec(v_val_1960_);
v___x_1962_ = lean_unbox(v_defValue_1956_);
return v___x_1962_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___boxed(lean_object* v_opts_1963_, lean_object* v_opt_1964_){
_start:
{
uint8_t v_res_1965_; lean_object* v_r_1966_; 
v_res_1965_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_opts_1963_, v_opt_1964_);
lean_dec_ref(v_opt_1964_);
lean_dec_ref(v_opts_1963_);
v_r_1966_ = lean_box(v_res_1965_);
return v_r_1966_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(lean_object* v_a_1967_, lean_object* v_as_1968_, size_t v_i_1969_, size_t v_stop_1970_){
_start:
{
uint8_t v___x_1971_; 
v___x_1971_ = lean_usize_dec_eq(v_i_1969_, v_stop_1970_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; uint8_t v___x_1973_; 
v___x_1972_ = lean_array_uget_borrowed(v_as_1968_, v_i_1969_);
v___x_1973_ = lean_nat_dec_eq(v_a_1967_, v___x_1972_);
if (v___x_1973_ == 0)
{
size_t v___x_1974_; size_t v___x_1975_; 
v___x_1974_ = ((size_t)1ULL);
v___x_1975_ = lean_usize_add(v_i_1969_, v___x_1974_);
v_i_1969_ = v___x_1975_;
goto _start;
}
else
{
return v___x_1973_;
}
}
else
{
uint8_t v___x_1977_; 
v___x_1977_ = 0;
return v___x_1977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1___boxed(lean_object* v_a_1978_, lean_object* v_as_1979_, lean_object* v_i_1980_, lean_object* v_stop_1981_){
_start:
{
size_t v_i_boxed_1982_; size_t v_stop_boxed_1983_; uint8_t v_res_1984_; lean_object* v_r_1985_; 
v_i_boxed_1982_ = lean_unbox_usize(v_i_1980_);
lean_dec(v_i_1980_);
v_stop_boxed_1983_ = lean_unbox_usize(v_stop_1981_);
lean_dec(v_stop_1981_);
v_res_1984_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(v_a_1978_, v_as_1979_, v_i_boxed_1982_, v_stop_boxed_1983_);
lean_dec_ref(v_as_1979_);
lean_dec(v_a_1978_);
v_r_1985_ = lean_box(v_res_1984_);
return v_r_1985_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(lean_object* v_as_1986_, lean_object* v_a_1987_){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; 
v___x_1988_ = lean_unsigned_to_nat(0u);
v___x_1989_ = lean_array_get_size(v_as_1986_);
v___x_1990_ = lean_nat_dec_lt(v___x_1988_, v___x_1989_);
if (v___x_1990_ == 0)
{
return v___x_1990_;
}
else
{
if (v___x_1990_ == 0)
{
return v___x_1990_;
}
else
{
size_t v___x_1991_; size_t v___x_1992_; uint8_t v___x_1993_; 
v___x_1991_ = ((size_t)0ULL);
v___x_1992_ = lean_usize_of_nat(v___x_1989_);
v___x_1993_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(v_a_1987_, v_as_1986_, v___x_1991_, v___x_1992_);
return v___x_1993_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1___boxed(lean_object* v_as_1994_, lean_object* v_a_1995_){
_start:
{
uint8_t v_res_1996_; lean_object* v_r_1997_; 
v_res_1996_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v_as_1994_, v_a_1995_);
lean_dec(v_a_1995_);
lean_dec_ref(v_as_1994_);
v_r_1997_ = lean_box(v_res_1996_);
return v_r_1997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(lean_object* v_a_1998_, lean_object* v_fst_1999_, lean_object* v_argVars_2000_, lean_object* v_as_2001_, size_t v_sz_2002_, size_t v_i_2003_, lean_object* v_b_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
lean_object* v_a_2011_; uint8_t v___x_2015_; 
v___x_2015_ = lean_usize_dec_lt(v_i_2003_, v_sz_2002_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; 
v___x_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2016_, 0, v_b_2004_);
return v___x_2016_;
}
else
{
lean_object* v_next_2017_; 
v_next_2017_ = lean_ctor_get(v_b_2004_, 0);
lean_inc(v_next_2017_);
if (lean_obj_tag(v_next_2017_) == 0)
{
lean_object* v___x_2018_; 
v___x_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2018_, 0, v_b_2004_);
return v___x_2018_;
}
else
{
lean_object* v_upperBound_2019_; lean_object* v_val_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2051_; 
v_upperBound_2019_ = lean_ctor_get(v_b_2004_, 1);
v_val_2020_ = lean_ctor_get(v_next_2017_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v_next_2017_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2022_ = v_next_2017_;
v_isShared_2023_ = v_isSharedCheck_2051_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_val_2020_);
lean_dec(v_next_2017_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2051_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
uint8_t v___x_2024_; 
v___x_2024_ = lean_nat_dec_lt(v_val_2020_, v_upperBound_2019_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; 
lean_del_object(v___x_2022_);
lean_dec(v_val_2020_);
v___x_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2025_, 0, v_b_2004_);
return v___x_2025_;
}
else
{
lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2048_; 
lean_inc(v_upperBound_2019_);
v_isSharedCheck_2048_ = !lean_is_exclusive(v_b_2004_);
if (v_isSharedCheck_2048_ == 0)
{
lean_object* v_unused_2049_; lean_object* v_unused_2050_; 
v_unused_2049_ = lean_ctor_get(v_b_2004_, 1);
lean_dec(v_unused_2049_);
v_unused_2050_ = lean_ctor_get(v_b_2004_, 0);
lean_dec(v_unused_2050_);
v___x_2027_ = v_b_2004_;
v_isShared_2028_ = v_isSharedCheck_2048_;
goto v_resetjp_2026_;
}
else
{
lean_dec(v_b_2004_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2048_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2032_; 
v___x_2029_ = lean_unsigned_to_nat(1u);
v___x_2030_ = lean_nat_add(v_val_2020_, v___x_2029_);
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v___x_2030_);
v___x_2032_ = v___x_2022_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2030_);
v___x_2032_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
lean_object* v___x_2034_; 
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 0, v___x_2032_);
v___x_2034_ = v___x_2027_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2032_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v_upperBound_2019_);
v___x_2034_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
uint8_t v___x_2035_; 
v___x_2035_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v_a_1998_, v_val_2020_);
lean_dec(v_val_2020_);
if (v___x_2035_ == 0)
{
lean_object* v_a_2036_; lean_object* v___x_2037_; 
v_a_2036_ = lean_array_uget_borrowed(v_as_2001_, v_i_2003_);
lean_inc(v_a_2036_);
v___x_2037_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_1999_, v_argVars_2000_, v_a_2036_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_dec_ref_known(v___x_2037_, 1);
v_a_2011_ = v___x_2034_;
goto v___jp_2010_;
}
else
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2045_; 
lean_dec_ref(v___x_2034_);
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_a_2038_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
return v___x_2043_;
}
}
}
}
else
{
v_a_2011_ = v___x_2034_;
goto v___jp_2010_;
}
}
}
}
}
}
}
}
v___jp_2010_:
{
size_t v___x_2012_; size_t v___x_2013_; 
v___x_2012_ = ((size_t)1ULL);
v___x_2013_ = lean_usize_add(v_i_2003_, v___x_2012_);
v_i_2003_ = v___x_2013_;
v_b_2004_ = v_a_2011_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8___boxed(lean_object* v_a_2052_, lean_object* v_fst_2053_, lean_object* v_argVars_2054_, lean_object* v_as_2055_, lean_object* v_sz_2056_, lean_object* v_i_2057_, lean_object* v_b_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_){
_start:
{
size_t v_sz_boxed_2064_; size_t v_i_boxed_2065_; lean_object* v_res_2066_; 
v_sz_boxed_2064_ = lean_unbox_usize(v_sz_2056_);
lean_dec(v_sz_2056_);
v_i_boxed_2065_ = lean_unbox_usize(v_i_2057_);
lean_dec(v_i_2057_);
v_res_2066_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(v_a_2052_, v_fst_2053_, v_argVars_2054_, v_as_2055_, v_sz_boxed_2064_, v_i_boxed_2065_, v_b_2058_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
lean_dec_ref(v_as_2055_);
lean_dec_ref(v_argVars_2054_);
lean_dec_ref(v_fst_2053_);
lean_dec_ref(v_a_2052_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(lean_object* v_upperBound_2067_, lean_object* v_a_2068_, lean_object* v___x_2069_, lean_object* v_a_2070_, lean_object* v_b_2071_){
_start:
{
uint8_t v___x_2073_; 
v___x_2073_ = lean_nat_dec_lt(v_a_2070_, v_upperBound_2067_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; 
lean_dec(v_a_2070_);
v___x_2074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2074_, 0, v_b_2071_);
return v___x_2074_;
}
else
{
lean_object* v_snd_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2115_; 
v_snd_2075_ = lean_ctor_get(v_b_2071_, 1);
v_isSharedCheck_2115_ = !lean_is_exclusive(v_b_2071_);
if (v_isSharedCheck_2115_ == 0)
{
lean_object* v_unused_2116_; 
v_unused_2116_ = lean_ctor_get(v_b_2071_, 0);
lean_dec(v_unused_2116_);
v___x_2077_ = v_b_2071_;
v_isShared_2078_ = v_isSharedCheck_2115_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_snd_2075_);
lean_dec(v_b_2071_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2115_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v_array_2079_; lean_object* v_start_2080_; lean_object* v_stop_2081_; lean_object* v___x_2082_; uint8_t v___x_2083_; 
v_array_2079_ = lean_ctor_get(v_snd_2075_, 0);
v_start_2080_ = lean_ctor_get(v_snd_2075_, 1);
v_stop_2081_ = lean_ctor_get(v_snd_2075_, 2);
v___x_2082_ = lean_box(0);
v___x_2083_ = lean_nat_dec_lt(v_start_2080_, v_stop_2081_);
if (v___x_2083_ == 0)
{
lean_object* v___x_2085_; 
lean_dec(v_a_2070_);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v___x_2082_);
v___x_2085_ = v___x_2077_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v___x_2082_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v_snd_2075_);
v___x_2085_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
lean_object* v___x_2086_; 
v___x_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2085_);
return v___x_2086_;
}
}
else
{
lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2111_; 
lean_inc(v_stop_2081_);
lean_inc(v_start_2080_);
lean_inc_ref(v_array_2079_);
v_isSharedCheck_2111_ = !lean_is_exclusive(v_snd_2075_);
if (v_isSharedCheck_2111_ == 0)
{
lean_object* v_unused_2112_; lean_object* v_unused_2113_; lean_object* v_unused_2114_; 
v_unused_2112_ = lean_ctor_get(v_snd_2075_, 2);
lean_dec(v_unused_2112_);
v_unused_2113_ = lean_ctor_get(v_snd_2075_, 1);
lean_dec(v_unused_2113_);
v_unused_2114_ = lean_ctor_get(v_snd_2075_, 0);
lean_dec(v_unused_2114_);
v___x_2089_ = v_snd_2075_;
v_isShared_2090_ = v_isSharedCheck_2111_;
goto v_resetjp_2088_;
}
else
{
lean_dec(v_snd_2075_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2111_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2095_; 
v___x_2091_ = lean_array_fget(v_array_2079_, v_start_2080_);
v___x_2092_ = lean_unsigned_to_nat(1u);
v___x_2093_ = lean_nat_add(v_start_2080_, v___x_2092_);
lean_dec(v_start_2080_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 1, v___x_2093_);
v___x_2095_ = v___x_2089_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_array_2079_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v___x_2093_);
lean_ctor_set(v_reuseFailAlloc_2110_, 2, v_stop_2081_);
v___x_2095_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
uint8_t v___x_2102_; 
v___x_2102_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v_a_2068_, v_a_2070_);
if (v___x_2102_ == 0)
{
uint8_t v___x_2103_; 
v___x_2103_ = l_Lean_Expr_hasExprMVar(v___x_2091_);
lean_dec(v___x_2091_);
if (v___x_2103_ == 0)
{
goto v___jp_2096_;
}
else
{
lean_object* v___x_2104_; uint8_t v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
lean_del_object(v___x_2077_);
lean_dec(v_a_2070_);
v___x_2104_ = lean_unsigned_to_nat(0u);
v___x_2105_ = lean_nat_dec_eq(v___x_2069_, v___x_2104_);
v___x_2106_ = lean_box(v___x_2105_);
v___x_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2106_);
v___x_2108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
lean_ctor_set(v___x_2108_, 1, v___x_2095_);
v___x_2109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
return v___x_2109_;
}
}
else
{
lean_dec(v___x_2091_);
goto v___jp_2096_;
}
v___jp_2096_:
{
lean_object* v___x_2098_; 
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 1, v___x_2095_);
lean_ctor_set(v___x_2077_, 0, v___x_2082_);
v___x_2098_ = v___x_2077_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2082_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v___x_2095_);
v___x_2098_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
lean_object* v___x_2099_; 
v___x_2099_ = lean_nat_add(v_a_2070_, v___x_2092_);
lean_dec(v_a_2070_);
v_a_2070_ = v___x_2099_;
v_b_2071_ = v___x_2098_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg___boxed(lean_object* v_upperBound_2117_, lean_object* v_a_2118_, lean_object* v___x_2119_, lean_object* v_a_2120_, lean_object* v_b_2121_, lean_object* v___y_2122_){
_start:
{
lean_object* v_res_2123_; 
v_res_2123_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_upperBound_2117_, v_a_2118_, v___x_2119_, v_a_2120_, v_b_2121_);
lean_dec(v___x_2119_);
lean_dec_ref(v_a_2118_);
lean_dec(v_upperBound_2117_);
return v_res_2123_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2124_; lean_object* v_dummy_2125_; 
v___x_2124_ = lean_box(0);
v_dummy_2125_ = l_Lean_Expr_sort___override(v___x_2124_);
return v_dummy_2125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(lean_object* v___x_2126_, lean_object* v___x_2127_, uint8_t v___x_2128_, lean_object* v_x_2129_, lean_object* v_argTy_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v___x_2136_; 
lean_inc(v___y_2134_);
lean_inc_ref(v___y_2133_);
lean_inc(v___y_2132_);
lean_inc_ref(v___y_2131_);
v___x_2136_ = lean_whnf(v_argTy_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; lean_object* v___x_2138_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_a_2137_);
lean_dec_ref_known(v___x_2136_, 1);
v___x_2138_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_a_2137_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v_dummy_2140_; lean_object* v_nargs_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
lean_inc(v_a_2139_);
lean_dec_ref_known(v___x_2138_, 1);
v_dummy_2140_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0);
v_nargs_2141_ = l_Lean_Expr_getAppNumArgs(v_a_2137_);
lean_inc(v_nargs_2141_);
v___x_2142_ = lean_mk_array(v_nargs_2141_, v_dummy_2140_);
v___x_2143_ = lean_unsigned_to_nat(1u);
v___x_2144_ = lean_nat_sub(v_nargs_2141_, v___x_2143_);
lean_dec(v_nargs_2141_);
v___x_2145_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2137_, v___x_2142_, v___x_2144_);
v___x_2146_ = lean_array_get_size(v___x_2145_);
lean_inc(v___x_2126_);
v___x_2147_ = l_Array_toSubarray___redArg(v___x_2145_, v___x_2126_, v___x_2146_);
v___x_2148_ = lean_box(0);
v___x_2149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2148_);
lean_ctor_set(v___x_2149_, 1, v___x_2147_);
v___x_2150_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v___x_2146_, v_a_2139_, v___x_2127_, v___x_2126_, v___x_2149_);
lean_dec(v_a_2139_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2164_; 
v_a_2151_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2153_ = v___x_2150_;
v_isShared_2154_ = v_isSharedCheck_2164_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2150_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2164_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v_fst_2155_; 
v_fst_2155_ = lean_ctor_get(v_a_2151_, 0);
lean_inc(v_fst_2155_);
lean_dec(v_a_2151_);
if (lean_obj_tag(v_fst_2155_) == 0)
{
lean_object* v___x_2156_; lean_object* v___x_2158_; 
v___x_2156_ = lean_box(v___x_2128_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 0, v___x_2156_);
v___x_2158_ = v___x_2153_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v___x_2156_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
else
{
lean_object* v_val_2160_; lean_object* v___x_2162_; 
v_val_2160_ = lean_ctor_get(v_fst_2155_, 0);
lean_inc(v_val_2160_);
lean_dec_ref_known(v_fst_2155_, 1);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 0, v_val_2160_);
v___x_2162_ = v___x_2153_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_val_2160_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
v_a_2165_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2150_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2150_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_dec(v_a_2137_);
lean_dec(v___x_2126_);
v_a_2173_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2138_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2138_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
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
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2188_; 
lean_dec(v___x_2126_);
v_a_2181_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2183_ = v___x_2136_;
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2136_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed(lean_object* v___x_2189_, lean_object* v___x_2190_, lean_object* v___x_2191_, lean_object* v_x_2192_, lean_object* v_argTy_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_){
_start:
{
uint8_t v___x_23571__boxed_2199_; lean_object* v_res_2200_; 
v___x_23571__boxed_2199_ = lean_unbox(v___x_2191_);
v_res_2200_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(v___x_2189_, v___x_2190_, v___x_23571__boxed_2199_, v_x_2192_, v_argTy_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec_ref(v_x_2192_);
lean_dec(v___x_2190_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(lean_object* v_fst_2204_, lean_object* v_projInfo_x3f_2205_, lean_object* v___x_2206_, lean_object* v_argVars_2207_, lean_object* v_as_2208_, size_t v_sz_2209_, size_t v_i_2210_, lean_object* v_b_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
uint8_t v___x_2217_; 
v___x_2217_ = lean_usize_dec_lt(v_i_2210_, v_sz_2209_);
if (v___x_2217_ == 0)
{
lean_object* v___x_2218_; 
lean_dec(v___x_2206_);
v___x_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2218_, 0, v_b_2211_);
return v___x_2218_;
}
else
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___f_2224_; uint8_t v___x_2225_; lean_object* v_a_2226_; lean_object* v___y_2233_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
lean_dec_ref(v_b_2211_);
v___x_2219_ = lean_box(0);
v___x_2220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0));
v___x_2221_ = l_Lean_instInhabitedExpr;
v___x_2222_ = lean_unsigned_to_nat(0u);
v___x_2223_ = lean_box(v___x_2217_);
lean_inc(v___x_2206_);
v___f_2224_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed), 10, 3);
lean_closure_set(v___f_2224_, 0, v___x_2222_);
lean_closure_set(v___f_2224_, 1, v___x_2206_);
lean_closure_set(v___f_2224_, 2, v___x_2223_);
v___x_2225_ = lean_nat_dec_eq(v___x_2206_, v___x_2222_);
v_a_2226_ = lean_array_uget_borrowed(v_as_2208_, v_i_2210_);
v___x_2247_ = lean_array_get_borrowed(v___x_2221_, v_fst_2204_, v_a_2226_);
lean_inc(v___y_2215_);
lean_inc_ref(v___y_2214_);
lean_inc(v___y_2213_);
lean_inc_ref(v___y_2212_);
lean_inc(v___x_2247_);
v___x_2248_ = lean_infer_type(v___x_2247_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; lean_object* v___x_2250_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_a_2249_);
lean_dec_ref_known(v___x_2248_, 1);
v___x_2250_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_a_2249_, v___y_2213_);
if (lean_obj_tag(v___x_2250_) == 0)
{
if (lean_obj_tag(v_projInfo_x3f_2205_) == 1)
{
lean_object* v_val_2251_; lean_object* v_a_2252_; lean_object* v_numParams_2253_; uint8_t v___x_2254_; 
v_val_2251_ = lean_ctor_get(v_projInfo_x3f_2205_, 0);
v_a_2252_ = lean_ctor_get(v___x_2250_, 0);
lean_inc(v_a_2252_);
lean_dec_ref_known(v___x_2250_, 1);
v_numParams_2253_ = lean_ctor_get(v_val_2251_, 1);
v___x_2254_ = lean_nat_dec_eq(v_numParams_2253_, v_a_2226_);
if (v___x_2254_ == 0)
{
lean_object* v___x_2255_; 
v___x_2255_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_2252_, v___f_2224_, v___x_2225_, v___x_2225_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_);
v___y_2233_ = v___x_2255_;
goto v___jp_2232_;
}
else
{
lean_object* v___x_2256_; 
lean_dec_ref(v___f_2224_);
lean_dec(v___x_2206_);
v___x_2256_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2204_, v_argVars_2207_, v_a_2252_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_);
if (lean_obj_tag(v___x_2256_) == 0)
{
lean_dec_ref_known(v___x_2256_, 1);
goto v___jp_2227_;
}
else
{
lean_object* v_a_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2264_; 
v_a_2257_ = lean_ctor_get(v___x_2256_, 0);
v_isSharedCheck_2264_ = !lean_is_exclusive(v___x_2256_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2259_ = v___x_2256_;
v_isShared_2260_ = v_isSharedCheck_2264_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_a_2257_);
lean_dec(v___x_2256_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2264_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2262_; 
if (v_isShared_2260_ == 0)
{
v___x_2262_ = v___x_2259_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v_a_2257_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
}
}
}
else
{
lean_object* v_a_2265_; lean_object* v___x_2266_; 
v_a_2265_ = lean_ctor_get(v___x_2250_, 0);
lean_inc(v_a_2265_);
lean_dec_ref_known(v___x_2250_, 1);
v___x_2266_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_2265_, v___f_2224_, v___x_2225_, v___x_2225_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_);
v___y_2233_ = v___x_2266_;
goto v___jp_2232_;
}
}
else
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
lean_dec_ref(v___f_2224_);
lean_dec(v___x_2206_);
v_a_2267_ = lean_ctor_get(v___x_2250_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2250_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___x_2250_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2250_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2267_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
lean_dec_ref(v___f_2224_);
lean_dec(v___x_2206_);
v_a_2275_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___x_2248_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2248_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_a_2275_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
v___jp_2227_:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
lean_inc(v_a_2226_);
v___x_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2228_, 0, v_a_2226_);
v___x_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2228_);
v___x_2230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
lean_ctor_set(v___x_2230_, 1, v___x_2219_);
v___x_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2230_);
return v___x_2231_;
}
v___jp_2232_:
{
if (lean_obj_tag(v___y_2233_) == 0)
{
lean_object* v_a_2234_; uint8_t v___x_2235_; 
v_a_2234_ = lean_ctor_get(v___y_2233_, 0);
lean_inc(v_a_2234_);
lean_dec_ref_known(v___y_2233_, 1);
v___x_2235_ = lean_unbox(v_a_2234_);
lean_dec(v_a_2234_);
if (v___x_2235_ == 0)
{
size_t v___x_2236_; size_t v___x_2237_; 
v___x_2236_ = ((size_t)1ULL);
v___x_2237_ = lean_usize_add(v_i_2210_, v___x_2236_);
v_i_2210_ = v___x_2237_;
v_b_2211_ = v___x_2220_;
goto _start;
}
else
{
lean_dec(v___x_2206_);
goto v___jp_2227_;
}
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
lean_dec(v___x_2206_);
v_a_2239_ = lean_ctor_get(v___y_2233_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___y_2233_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v___y_2233_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___y_2233_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___boxed(lean_object* v_fst_2283_, lean_object* v_projInfo_x3f_2284_, lean_object* v___x_2285_, lean_object* v_argVars_2286_, lean_object* v_as_2287_, lean_object* v_sz_2288_, lean_object* v_i_2289_, lean_object* v_b_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
size_t v_sz_boxed_2296_; size_t v_i_boxed_2297_; lean_object* v_res_2298_; 
v_sz_boxed_2296_ = lean_unbox_usize(v_sz_2288_);
lean_dec(v_sz_2288_);
v_i_boxed_2297_ = lean_unbox_usize(v_i_2289_);
lean_dec(v_i_2289_);
v_res_2298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(v_fst_2283_, v_projInfo_x3f_2284_, v___x_2285_, v_argVars_2286_, v_as_2287_, v_sz_boxed_2296_, v_i_boxed_2297_, v_b_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
lean_dec(v___y_2292_);
lean_dec_ref(v___y_2291_);
lean_dec_ref(v_as_2287_);
lean_dec_ref(v_argVars_2286_);
lean_dec(v_projInfo_x3f_2284_);
lean_dec_ref(v_fst_2283_);
return v_res_2298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(lean_object* v_next_2299_, lean_object* v_as_2300_, size_t v_i_2301_, size_t v_stop_2302_, lean_object* v_b_2303_){
_start:
{
lean_object* v___y_2305_; uint8_t v___x_2309_; 
v___x_2309_ = lean_usize_dec_eq(v_i_2301_, v_stop_2302_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; uint8_t v___x_2311_; 
v___x_2310_ = lean_array_uget_borrowed(v_as_2300_, v_i_2301_);
v___x_2311_ = lean_nat_dec_eq(v___x_2310_, v_next_2299_);
if (v___x_2311_ == 0)
{
lean_object* v___x_2312_; 
lean_inc(v___x_2310_);
v___x_2312_ = lean_array_push(v_b_2303_, v___x_2310_);
v___y_2305_ = v___x_2312_;
goto v___jp_2304_;
}
else
{
v___y_2305_ = v_b_2303_;
goto v___jp_2304_;
}
}
else
{
return v_b_2303_;
}
v___jp_2304_:
{
size_t v___x_2306_; size_t v___x_2307_; 
v___x_2306_ = ((size_t)1ULL);
v___x_2307_ = lean_usize_add(v_i_2301_, v___x_2306_);
v_i_2301_ = v___x_2307_;
v_b_2303_ = v___y_2305_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0___boxed(lean_object* v_next_2313_, lean_object* v_as_2314_, lean_object* v_i_2315_, lean_object* v_stop_2316_, lean_object* v_b_2317_){
_start:
{
size_t v_i_boxed_2318_; size_t v_stop_boxed_2319_; lean_object* v_res_2320_; 
v_i_boxed_2318_ = lean_unbox_usize(v_i_2315_);
lean_dec(v_i_2315_);
v_stop_boxed_2319_ = lean_unbox_usize(v_stop_2316_);
lean_dec(v_stop_2316_);
v_res_2320_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(v_next_2313_, v_as_2314_, v_i_boxed_2318_, v_stop_boxed_2319_, v_b_2317_);
lean_dec_ref(v_as_2314_);
lean_dec(v_next_2313_);
return v_res_2320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(lean_object* v_fst_2321_, lean_object* v___x_2322_, lean_object* v_fst_2323_, lean_object* v_argVars_2324_, lean_object* v_snd_2325_, lean_object* v_next_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_){
_start:
{
lean_object* v___x_2332_; lean_object* v___y_2334_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; uint8_t v___x_2377_; 
lean_inc(v_next_2326_);
v___x_2332_ = lean_array_push(v_fst_2321_, v_next_2326_);
v___x_2374_ = lean_unsigned_to_nat(0u);
v___x_2375_ = lean_array_get_size(v_snd_2325_);
v___x_2376_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_2377_ = lean_nat_dec_lt(v___x_2374_, v___x_2375_);
if (v___x_2377_ == 0)
{
v___y_2334_ = v___x_2376_;
goto v___jp_2333_;
}
else
{
uint8_t v___x_2378_; 
v___x_2378_ = lean_nat_dec_le(v___x_2375_, v___x_2375_);
if (v___x_2378_ == 0)
{
if (v___x_2377_ == 0)
{
v___y_2334_ = v___x_2376_;
goto v___jp_2333_;
}
else
{
size_t v___x_2379_; size_t v___x_2380_; lean_object* v___x_2381_; 
v___x_2379_ = ((size_t)0ULL);
v___x_2380_ = lean_usize_of_nat(v___x_2375_);
v___x_2381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(v_next_2326_, v_snd_2325_, v___x_2379_, v___x_2380_, v___x_2376_);
v___y_2334_ = v___x_2381_;
goto v___jp_2333_;
}
}
else
{
size_t v___x_2382_; size_t v___x_2383_; lean_object* v___x_2384_; 
v___x_2382_ = ((size_t)0ULL);
v___x_2383_ = lean_usize_of_nat(v___x_2375_);
v___x_2384_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(v_next_2326_, v_snd_2325_, v___x_2382_, v___x_2383_, v___x_2376_);
v___y_2334_ = v___x_2384_;
goto v___jp_2333_;
}
}
v___jp_2333_:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2335_ = lean_array_get_borrowed(v___x_2322_, v_fst_2323_, v_next_2326_);
lean_dec(v_next_2326_);
lean_inc(v___y_2330_);
lean_inc_ref(v___y_2329_);
lean_inc(v___y_2328_);
lean_inc_ref(v___y_2327_);
lean_inc(v___x_2335_);
v___x_2336_ = lean_infer_type(v___x_2335_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; lean_object* v___x_2338_; 
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v___x_2338_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2323_, v_argVars_2324_, v_a_2337_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_);
if (lean_obj_tag(v___x_2338_) == 0)
{
lean_object* v___x_2339_; 
lean_dec_ref_known(v___x_2338_, 1);
lean_inc(v___x_2335_);
v___x_2339_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2323_, v_argVars_2324_, v___x_2335_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2348_; 
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2348_ == 0)
{
lean_object* v_unused_2349_; 
v_unused_2349_ = lean_ctor_get(v___x_2339_, 0);
lean_dec(v_unused_2349_);
v___x_2341_ = v___x_2339_;
v_isShared_2342_ = v_isSharedCheck_2348_;
goto v_resetjp_2340_;
}
else
{
lean_dec(v___x_2339_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2348_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2346_; 
v___x_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2343_, 0, v___x_2332_);
lean_ctor_set(v___x_2343_, 1, v___y_2334_);
v___x_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2343_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v___x_2344_);
v___x_2346_ = v___x_2341_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v___x_2344_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec_ref(v___y_2334_);
lean_dec_ref(v___x_2332_);
v_a_2350_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2339_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2339_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
else
{
lean_object* v_a_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
lean_dec_ref(v___y_2334_);
lean_dec_ref(v___x_2332_);
v_a_2358_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2360_ = v___x_2338_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_a_2358_);
lean_dec(v___x_2338_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2358_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
else
{
lean_object* v_a_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2373_; 
lean_dec_ref(v___y_2334_);
lean_dec_ref(v___x_2332_);
v_a_2366_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2368_ = v___x_2336_;
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_a_2366_);
lean_dec(v___x_2336_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2371_; 
if (v_isShared_2369_ == 0)
{
v___x_2371_ = v___x_2368_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_a_2366_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed(lean_object* v_fst_2385_, lean_object* v___x_2386_, lean_object* v_fst_2387_, lean_object* v_argVars_2388_, lean_object* v_snd_2389_, lean_object* v_next_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(v_fst_2385_, v___x_2386_, v_fst_2387_, v_argVars_2388_, v_snd_2389_, v_next_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_);
lean_dec(v___y_2394_);
lean_dec_ref(v___y_2393_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v_snd_2389_);
lean_dec_ref(v_argVars_2388_);
lean_dec_ref(v_fst_2387_);
lean_dec_ref(v___x_2386_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(lean_object* v_msgData_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_){
_start:
{
lean_object* v___x_2403_; lean_object* v_env_2404_; lean_object* v___x_2405_; lean_object* v_toCold_2406_; lean_object* v_mctx_2407_; lean_object* v_lctx_2408_; lean_object* v_options_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2403_ = lean_st_ref_get(v___y_2401_);
v_env_2404_ = lean_ctor_get(v___x_2403_, 0);
lean_inc_ref(v_env_2404_);
lean_dec(v___x_2403_);
v___x_2405_ = lean_st_ref_get(v___y_2399_);
v_toCold_2406_ = lean_ctor_get(v___y_2400_, 0);
v_mctx_2407_ = lean_ctor_get(v___x_2405_, 0);
lean_inc_ref(v_mctx_2407_);
lean_dec(v___x_2405_);
v_lctx_2408_ = lean_ctor_get(v___y_2398_, 2);
v_options_2409_ = lean_ctor_get(v_toCold_2406_, 2);
lean_inc_ref(v_options_2409_);
lean_inc_ref(v_lctx_2408_);
v___x_2410_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2410_, 0, v_env_2404_);
lean_ctor_set(v___x_2410_, 1, v_mctx_2407_);
lean_ctor_set(v___x_2410_, 2, v_lctx_2408_);
lean_ctor_set(v___x_2410_, 3, v_options_2409_);
v___x_2411_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2410_);
lean_ctor_set(v___x_2411_, 1, v_msgData_2397_);
v___x_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2411_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7___boxed(lean_object* v_msgData_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v_msgData_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v___y_2415_);
lean_dec_ref(v___y_2414_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(lean_object* v_msg_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_){
_start:
{
lean_object* v_ref_2426_; lean_object* v___x_2427_; lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2436_; 
v_ref_2426_ = lean_ctor_get(v___y_2423_, 2);
v___x_2427_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v_msg_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_);
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
lean_inc(v_ref_2426_);
v___x_2432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2432_, 0, v_ref_2426_);
lean_ctor_set(v___x_2432_, 1, v_a_2428_);
if (v_isShared_2431_ == 0)
{
lean_ctor_set_tag(v___x_2430_, 1);
lean_ctor_set(v___x_2430_, 0, v___x_2432_);
v___x_2434_ = v___x_2430_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg___boxed(lean_object* v_msg_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_msg_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(lean_object* v_fst_2444_, size_t v_sz_2445_, size_t v_i_2446_, lean_object* v_bs_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_){
_start:
{
uint8_t v___x_2453_; 
v___x_2453_ = lean_usize_dec_lt(v_i_2446_, v_sz_2445_);
if (v___x_2453_ == 0)
{
lean_object* v___x_2454_; 
v___x_2454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2454_, 0, v_bs_2447_);
return v___x_2454_;
}
else
{
lean_object* v___x_2455_; lean_object* v_v_2456_; lean_object* v___x_2457_; lean_object* v_bs_x27_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2455_ = l_Lean_instInhabitedExpr;
v_v_2456_ = lean_array_uget(v_bs_2447_, v_i_2446_);
v___x_2457_ = lean_unsigned_to_nat(0u);
v_bs_x27_2458_ = lean_array_uset(v_bs_2447_, v_i_2446_, v___x_2457_);
v___x_2459_ = lean_array_get_borrowed(v___x_2455_, v_fst_2444_, v_v_2456_);
lean_dec(v_v_2456_);
lean_inc(v___y_2451_);
lean_inc_ref(v___y_2450_);
lean_inc(v___y_2449_);
lean_inc_ref(v___y_2448_);
lean_inc(v___x_2459_);
v___x_2460_ = lean_infer_type(v___x_2459_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v___x_2462_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2460_, 1);
v___x_2462_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_a_2461_, v___y_2449_);
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_object* v_a_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; size_t v___x_2466_; size_t v___x_2467_; lean_object* v___x_2468_; 
v_a_2463_ = lean_ctor_get(v___x_2462_, 0);
lean_inc(v_a_2463_);
lean_dec_ref_known(v___x_2462_, 1);
v___x_2464_ = l_Lean_Expr_setPPExplicit(v_a_2463_, v___x_2453_);
v___x_2465_ = l_Lean_indentExpr(v___x_2464_);
v___x_2466_ = ((size_t)1ULL);
v___x_2467_ = lean_usize_add(v_i_2446_, v___x_2466_);
v___x_2468_ = lean_array_uset(v_bs_x27_2458_, v_i_2446_, v___x_2465_);
v_i_2446_ = v___x_2467_;
v_bs_2447_ = v___x_2468_;
goto _start;
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
lean_dec_ref(v_bs_x27_2458_);
v_a_2470_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2462_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2462_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2485_; 
lean_dec_ref(v_bs_x27_2458_);
v_a_2478_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2480_ = v___x_2460_;
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2460_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2483_; 
if (v_isShared_2481_ == 0)
{
v___x_2483_ = v___x_2480_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_a_2478_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5___boxed(lean_object* v_fst_2486_, lean_object* v_sz_2487_, lean_object* v_i_2488_, lean_object* v_bs_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
size_t v_sz_boxed_2495_; size_t v_i_boxed_2496_; lean_object* v_res_2497_; 
v_sz_boxed_2495_ = lean_unbox_usize(v_sz_2487_);
lean_dec(v_sz_2487_);
v_i_boxed_2496_ = lean_unbox_usize(v_i_2488_);
lean_dec(v_i_2488_);
v_res_2497_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(v_fst_2486_, v_sz_boxed_2495_, v_i_boxed_2496_, v_bs_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_);
lean_dec(v___y_2493_);
lean_dec_ref(v___y_2492_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
lean_dec_ref(v_fst_2486_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(lean_object* v___x_2498_, lean_object* v_snd_2499_, lean_object* v___f_2500_, lean_object* v_____r_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2507_ = lean_unsigned_to_nat(0u);
v___x_2508_ = lean_array_get_borrowed(v___x_2498_, v_snd_2499_, v___x_2507_);
lean_inc(v___y_2505_);
lean_inc_ref(v___y_2504_);
lean_inc(v___y_2503_);
lean_inc_ref(v___y_2502_);
lean_inc(v___x_2508_);
v___x_2509_ = lean_apply_6(v___f_2500_, v___x_2508_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, lean_box(0));
return v___x_2509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1___boxed(lean_object* v___x_2510_, lean_object* v_snd_2511_, lean_object* v___f_2512_, lean_object* v_____r_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2510_, v_snd_2511_, v___f_2512_, v_____r_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
lean_dec(v___y_2517_);
lean_dec_ref(v___y_2516_);
lean_dec(v___y_2515_);
lean_dec_ref(v___y_2514_);
lean_dec(v_snd_2511_);
lean_dec(v___x_2510_);
return v_res_2519_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2523_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1));
v___x_2524_ = l_Lean_MessageData_ofFormat(v___x_2523_);
return v___x_2524_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3));
v___x_2527_ = l_Lean_stringToMessageData(v___x_2526_);
return v___x_2527_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6(void){
_start:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2529_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5));
v___x_2530_ = l_Lean_stringToMessageData(v___x_2529_);
return v___x_2530_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7));
v___x_2533_ = l_Lean_stringToMessageData(v___x_2532_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(lean_object* v_fst_2534_, lean_object* v_argVars_2535_, lean_object* v_inst_2536_, lean_object* v_a_2537_, lean_object* v_projInfo_x3f_2538_, lean_object* v_a_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_){
_start:
{
lean_object* v___y_2546_; lean_object* v_fst_2566_; lean_object* v_snd_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2640_; 
v_fst_2566_ = lean_ctor_get(v_a_2539_, 0);
v_snd_2567_ = lean_ctor_get(v_a_2539_, 1);
v_isSharedCheck_2640_ = !lean_is_exclusive(v_a_2539_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2569_ = v_a_2539_;
v_isShared_2570_ = v_isSharedCheck_2640_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_snd_2567_);
lean_inc(v_fst_2566_);
lean_dec(v_a_2539_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2640_;
goto v_resetjp_2568_;
}
v___jp_2545_:
{
if (lean_obj_tag(v___y_2546_) == 0)
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2557_; 
v_a_2547_ = lean_ctor_get(v___y_2546_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___y_2546_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2549_ = v___y_2546_;
v_isShared_2550_ = v_isSharedCheck_2557_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___y_2546_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2557_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
if (lean_obj_tag(v_a_2547_) == 0)
{
lean_object* v_a_2551_; lean_object* v___x_2553_; 
lean_dec_ref(v_a_2537_);
lean_dec_ref(v_inst_2536_);
lean_dec_ref(v_argVars_2535_);
lean_dec_ref(v_fst_2534_);
v_a_2551_ = lean_ctor_get(v_a_2547_, 0);
lean_inc(v_a_2551_);
lean_dec_ref_known(v_a_2547_, 1);
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 0, v_a_2551_);
v___x_2553_ = v___x_2549_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_a_2551_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
return v___x_2553_;
}
}
else
{
lean_object* v_a_2555_; 
lean_del_object(v___x_2549_);
v_a_2555_ = lean_ctor_get(v_a_2547_, 0);
lean_inc(v_a_2555_);
lean_dec_ref_known(v_a_2547_, 1);
v_a_2539_ = v_a_2555_;
goto _start;
}
}
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
lean_dec_ref(v_a_2537_);
lean_dec_ref(v_inst_2536_);
lean_dec_ref(v_argVars_2535_);
lean_dec_ref(v_fst_2534_);
v_a_2558_ = lean_ctor_get(v___y_2546_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___y_2546_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___y_2546_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___y_2546_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
}
v_resetjp_2568_:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; uint8_t v___x_2573_; 
v___x_2571_ = lean_array_get_size(v_snd_2567_);
v___x_2572_ = lean_unsigned_to_nat(0u);
v___x_2573_ = lean_nat_dec_eq(v___x_2571_, v___x_2572_);
if (v___x_2573_ == 0)
{
lean_object* v___x_2574_; lean_object* v___f_2575_; lean_object* v___x_2619_; size_t v_sz_2620_; size_t v___x_2621_; lean_object* v___x_2622_; 
lean_del_object(v___x_2569_);
v___x_2574_ = l_Lean_instInhabitedExpr;
lean_inc(v_snd_2567_);
lean_inc_ref(v_argVars_2535_);
lean_inc_ref(v_fst_2534_);
lean_inc(v_fst_2566_);
v___f_2575_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_2575_, 0, v_fst_2566_);
lean_closure_set(v___f_2575_, 1, v___x_2574_);
lean_closure_set(v___f_2575_, 2, v_fst_2534_);
lean_closure_set(v___f_2575_, 3, v_argVars_2535_);
lean_closure_set(v___f_2575_, 4, v_snd_2567_);
v___x_2619_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0));
v_sz_2620_ = lean_array_size(v_snd_2567_);
v___x_2621_ = ((size_t)0ULL);
v___x_2622_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(v_fst_2534_, v_projInfo_x3f_2538_, v___x_2571_, v_argVars_2535_, v_snd_2567_, v_sz_2620_, v___x_2621_, v___x_2619_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; lean_object* v_fst_2624_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
lean_inc(v_a_2623_);
lean_dec_ref_known(v___x_2622_, 1);
v_fst_2624_ = lean_ctor_get(v_a_2623_, 0);
lean_inc(v_fst_2624_);
lean_dec(v_a_2623_);
if (lean_obj_tag(v_fst_2624_) == 0)
{
lean_dec(v_fst_2566_);
goto v___jp_2576_;
}
else
{
lean_object* v_val_2625_; 
v_val_2625_ = lean_ctor_get(v_fst_2624_, 0);
lean_inc(v_val_2625_);
lean_dec_ref_known(v_fst_2624_, 1);
if (lean_obj_tag(v_val_2625_) == 0)
{
lean_dec(v_fst_2566_);
goto v___jp_2576_;
}
else
{
lean_object* v_val_2626_; lean_object* v___x_2627_; 
lean_dec_ref(v___f_2575_);
v_val_2626_ = lean_ctor_get(v_val_2625_, 0);
lean_inc(v_val_2626_);
lean_dec_ref_known(v_val_2625_, 1);
v___x_2627_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(v_fst_2566_, v___x_2574_, v_fst_2534_, v_argVars_2535_, v_snd_2567_, v_val_2626_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
lean_dec(v_snd_2567_);
v___y_2546_ = v___x_2627_;
goto v___jp_2545_;
}
}
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec_ref(v___f_2575_);
lean_dec(v_snd_2567_);
lean_dec(v_fst_2566_);
lean_dec_ref(v_a_2537_);
lean_dec_ref(v_inst_2536_);
lean_dec_ref(v_argVars_2535_);
lean_dec_ref(v_fst_2534_);
v_a_2628_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2622_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2622_);
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
v___jp_2576_:
{
lean_object* v_toCold_2577_; lean_object* v_options_2578_; lean_object* v___x_2579_; uint8_t v___x_2580_; 
v_toCold_2577_ = lean_ctor_get(v___y_2542_, 0);
v_options_2578_ = lean_ctor_get(v_toCold_2577_, 2);
v___x_2579_ = l_Lean_Meta_synthInstance_checkSynthOrder;
v___x_2580_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_options_2578_, v___x_2579_);
if (v___x_2580_ == 0)
{
lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2581_ = lean_box(0);
v___x_2582_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2572_, v_snd_2567_, v___f_2575_, v___x_2581_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
lean_dec(v_snd_2567_);
v___y_2546_ = v___x_2582_;
goto v___jp_2545_;
}
else
{
size_t v_sz_2583_; size_t v___x_2584_; lean_object* v___x_2585_; 
v_sz_2583_ = lean_array_size(v_snd_2567_);
v___x_2584_ = ((size_t)0ULL);
lean_inc(v_snd_2567_);
v___x_2585_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(v_fst_2534_, v_sz_2583_, v___x_2584_, v_snd_2567_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
lean_inc(v_a_2586_);
lean_dec_ref_known(v___x_2585_, 1);
v___x_2587_ = lean_array_to_list(v_a_2586_);
v___x_2588_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2);
v___x_2589_ = l_Lean_MessageData_joinSep(v___x_2587_, v___x_2588_);
v___x_2590_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4);
lean_inc_ref(v_inst_2536_);
v___x_2591_ = l_Lean_MessageData_ofExpr(v_inst_2536_);
v___x_2592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2590_);
lean_ctor_set(v___x_2592_, 1, v___x_2591_);
v___x_2593_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6);
v___x_2594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2592_);
lean_ctor_set(v___x_2594_, 1, v___x_2593_);
lean_inc_ref(v_a_2537_);
v___x_2595_ = l_Lean_indentExpr(v_a_2537_);
v___x_2596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2594_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8);
v___x_2598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2596_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
v___x_2599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2598_);
lean_ctor_set(v___x_2599_, 1, v___x_2589_);
v___x_2600_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_2599_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v_a_2601_; lean_object* v___x_2602_; 
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v___x_2600_, 1);
v___x_2602_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2572_, v_snd_2567_, v___f_2575_, v_a_2601_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
lean_dec(v_snd_2567_);
v___y_2546_ = v___x_2602_;
goto v___jp_2545_;
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
lean_dec_ref(v___f_2575_);
lean_dec(v_snd_2567_);
lean_dec_ref(v_a_2537_);
lean_dec_ref(v_inst_2536_);
lean_dec_ref(v_argVars_2535_);
lean_dec_ref(v_fst_2534_);
v_a_2603_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2600_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2600_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec_ref(v___f_2575_);
lean_dec(v_snd_2567_);
lean_dec_ref(v_a_2537_);
lean_dec_ref(v_inst_2536_);
lean_dec_ref(v_argVars_2535_);
lean_dec_ref(v_fst_2534_);
v_a_2611_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2585_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2585_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
}
}
else
{
lean_object* v___x_2637_; 
lean_dec_ref(v_a_2537_);
lean_dec_ref(v_inst_2536_);
lean_dec_ref(v_argVars_2535_);
lean_dec_ref(v_fst_2534_);
if (v_isShared_2570_ == 0)
{
v___x_2637_ = v___x_2569_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_fst_2566_);
lean_ctor_set(v_reuseFailAlloc_2639_, 1, v_snd_2567_);
v___x_2637_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
lean_object* v___x_2638_; 
v___x_2638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2637_);
return v___x_2638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed(lean_object* v_fst_2641_, lean_object* v_argVars_2642_, lean_object* v_inst_2643_, lean_object* v_a_2644_, lean_object* v_projInfo_x3f_2645_, lean_object* v_a_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_){
_start:
{
lean_object* v_res_2652_; 
v_res_2652_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_2641_, v_argVars_2642_, v_inst_2643_, v_a_2644_, v_projInfo_x3f_2645_, v_a_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v_projInfo_x3f_2645_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(lean_object* v_fst_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_){
_start:
{
if (lean_obj_tag(v_a_2654_) == 0)
{
lean_object* v___x_2656_; 
v___x_2656_ = l_List_reverse___redArg(v_a_2655_);
return v___x_2656_;
}
else
{
lean_object* v_head_2657_; lean_object* v_tail_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2673_; 
v_head_2657_ = lean_ctor_get(v_a_2654_, 0);
v_tail_2658_ = lean_ctor_get(v_a_2654_, 1);
v_isSharedCheck_2673_ = !lean_is_exclusive(v_a_2654_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2660_ = v_a_2654_;
v_isShared_2661_ = v_isSharedCheck_2673_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_tail_2658_);
lean_inc(v_head_2657_);
lean_dec(v_a_2654_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2673_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
uint8_t v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; uint8_t v___x_2665_; uint8_t v___x_2666_; uint8_t v___x_2667_; 
v___x_2662_ = 0;
v___x_2663_ = lean_box(v___x_2662_);
v___x_2664_ = lean_array_get(v___x_2663_, v_fst_2653_, v_head_2657_);
lean_dec(v___x_2663_);
v___x_2665_ = 3;
v___x_2666_ = lean_unbox(v___x_2664_);
lean_dec(v___x_2664_);
v___x_2667_ = l_Lean_instBEqBinderInfo_beq(v___x_2666_, v___x_2665_);
if (v___x_2667_ == 0)
{
lean_del_object(v___x_2660_);
lean_dec(v_head_2657_);
v_a_2654_ = v_tail_2658_;
goto _start;
}
else
{
lean_object* v___x_2670_; 
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v_a_2655_);
v___x_2670_ = v___x_2660_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_head_2657_);
lean_ctor_set(v_reuseFailAlloc_2672_, 1, v_a_2655_);
v___x_2670_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
v_a_2654_ = v_tail_2658_;
v_a_2655_ = v___x_2670_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9___boxed(lean_object* v_fst_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(v_fst_2674_, v_a_2675_, v_a_2676_);
lean_dec_ref(v_fst_2674_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(lean_object* v_argVars_2678_, size_t v_sz_2679_, size_t v_i_2680_, lean_object* v_bs_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
uint8_t v___x_2687_; 
v___x_2687_ = lean_usize_dec_lt(v_i_2680_, v_sz_2679_);
if (v___x_2687_ == 0)
{
lean_object* v___x_2688_; 
v___x_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2688_, 0, v_bs_2681_);
return v___x_2688_;
}
else
{
lean_object* v___x_2689_; lean_object* v_v_2690_; lean_object* v___x_2691_; lean_object* v_bs_x27_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2689_ = l_Lean_instInhabitedExpr;
v_v_2690_ = lean_array_uget(v_bs_2681_, v_i_2680_);
v___x_2691_ = lean_unsigned_to_nat(0u);
v_bs_x27_2692_ = lean_array_uset(v_bs_2681_, v_i_2680_, v___x_2691_);
v___x_2693_ = lean_array_get_borrowed(v___x_2689_, v_argVars_2678_, v_v_2690_);
lean_dec(v_v_2690_);
lean_inc(v___y_2685_);
lean_inc_ref(v___y_2684_);
lean_inc(v___y_2683_);
lean_inc_ref(v___y_2682_);
lean_inc(v___x_2693_);
v___x_2694_ = lean_infer_type(v___x_2693_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2696_; size_t v___x_2697_; size_t v___x_2698_; lean_object* v___x_2699_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref_known(v___x_2694_, 1);
v___x_2696_ = l_Lean_indentExpr(v_a_2695_);
v___x_2697_ = ((size_t)1ULL);
v___x_2698_ = lean_usize_add(v_i_2680_, v___x_2697_);
v___x_2699_ = lean_array_uset(v_bs_x27_2692_, v_i_2680_, v___x_2696_);
v_i_2680_ = v___x_2698_;
v_bs_2681_ = v___x_2699_;
goto _start;
}
else
{
lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2708_; 
lean_dec_ref(v_bs_x27_2692_);
v_a_2701_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2703_ = v___x_2694_;
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v___x_2694_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
if (v_isShared_2704_ == 0)
{
v___x_2706_ = v___x_2703_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11___boxed(lean_object* v_argVars_2709_, lean_object* v_sz_2710_, lean_object* v_i_2711_, lean_object* v_bs_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_){
_start:
{
size_t v_sz_boxed_2718_; size_t v_i_boxed_2719_; lean_object* v_res_2720_; 
v_sz_boxed_2718_ = lean_unbox_usize(v_sz_2710_);
lean_dec(v_sz_2710_);
v_i_boxed_2719_ = lean_unbox_usize(v_i_2711_);
lean_dec(v_i_2711_);
v_res_2720_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(v_argVars_2709_, v_sz_boxed_2718_, v_i_boxed_2719_, v_bs_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_);
lean_dec(v___y_2716_);
lean_dec_ref(v___y_2715_);
lean_dec(v___y_2714_);
lean_dec_ref(v___y_2713_);
lean_dec_ref(v_argVars_2709_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(lean_object* v_a_2721_, lean_object* v_a_2722_){
_start:
{
if (lean_obj_tag(v_a_2721_) == 0)
{
lean_object* v___x_2723_; 
v___x_2723_ = l_List_reverse___redArg(v_a_2722_);
return v___x_2723_;
}
else
{
lean_object* v_head_2724_; lean_object* v_tail_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2736_; 
v_head_2724_ = lean_ctor_get(v_a_2721_, 0);
v_tail_2725_ = lean_ctor_get(v_a_2721_, 1);
v_isSharedCheck_2736_ = !lean_is_exclusive(v_a_2721_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2727_ = v_a_2721_;
v_isShared_2728_ = v_isSharedCheck_2736_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_tail_2725_);
lean_inc(v_head_2724_);
lean_dec(v_a_2721_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2736_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2733_; 
v___x_2729_ = l_Nat_reprFast(v_head_2724_);
v___x_2730_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2729_);
v___x_2731_ = l_Lean_MessageData_ofFormat(v___x_2730_);
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 1, v_a_2722_);
lean_ctor_set(v___x_2727_, 0, v___x_2731_);
v___x_2733_ = v___x_2727_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2731_);
lean_ctor_set(v_reuseFailAlloc_2735_, 1, v_a_2722_);
v___x_2733_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
v_a_2721_ = v_tail_2725_;
v_a_2722_ = v___x_2733_;
goto _start;
}
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0(void){
_start:
{
lean_object* v___x_2737_; double v___x_2738_; 
v___x_2737_ = lean_unsigned_to_nat(0u);
v___x_2738_ = lean_float_of_nat(v___x_2737_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(lean_object* v_cls_2741_, lean_object* v_msg_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v_ref_2748_; lean_object* v___x_2749_; lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2794_; 
v_ref_2748_ = lean_ctor_get(v___y_2745_, 2);
v___x_2749_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v_msg_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2752_ = v___x_2749_;
v_isShared_2753_ = v_isSharedCheck_2794_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2749_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2794_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2754_; lean_object* v_traceState_2755_; lean_object* v_env_2756_; lean_object* v_nextMacroScope_2757_; lean_object* v_ngen_2758_; lean_object* v_auxDeclNGen_2759_; lean_object* v_cache_2760_; lean_object* v_messages_2761_; lean_object* v_infoState_2762_; lean_object* v_snapshotTasks_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2793_; 
v___x_2754_ = lean_st_ref_take(v___y_2746_);
v_traceState_2755_ = lean_ctor_get(v___x_2754_, 4);
v_env_2756_ = lean_ctor_get(v___x_2754_, 0);
v_nextMacroScope_2757_ = lean_ctor_get(v___x_2754_, 1);
v_ngen_2758_ = lean_ctor_get(v___x_2754_, 2);
v_auxDeclNGen_2759_ = lean_ctor_get(v___x_2754_, 3);
v_cache_2760_ = lean_ctor_get(v___x_2754_, 5);
v_messages_2761_ = lean_ctor_get(v___x_2754_, 6);
v_infoState_2762_ = lean_ctor_get(v___x_2754_, 7);
v_snapshotTasks_2763_ = lean_ctor_get(v___x_2754_, 8);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2765_ = v___x_2754_;
v_isShared_2766_ = v_isSharedCheck_2793_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_snapshotTasks_2763_);
lean_inc(v_infoState_2762_);
lean_inc(v_messages_2761_);
lean_inc(v_cache_2760_);
lean_inc(v_traceState_2755_);
lean_inc(v_auxDeclNGen_2759_);
lean_inc(v_ngen_2758_);
lean_inc(v_nextMacroScope_2757_);
lean_inc(v_env_2756_);
lean_dec(v___x_2754_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2793_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
uint64_t v_tid_2767_; lean_object* v_traces_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2792_; 
v_tid_2767_ = lean_ctor_get_uint64(v_traceState_2755_, sizeof(void*)*1);
v_traces_2768_ = lean_ctor_get(v_traceState_2755_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v_traceState_2755_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2770_ = v_traceState_2755_;
v_isShared_2771_ = v_isSharedCheck_2792_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_traces_2768_);
lean_dec(v_traceState_2755_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2792_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; double v___x_2774_; uint8_t v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2783_; 
v___x_2772_ = lean_box(0);
v___x_2773_ = lean_box(0);
v___x_2774_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0);
v___x_2775_ = 0;
v___x_2776_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
v___x_2777_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2777_, 0, v_cls_2741_);
lean_ctor_set(v___x_2777_, 1, v___x_2773_);
lean_ctor_set(v___x_2777_, 2, v___x_2776_);
lean_ctor_set_float(v___x_2777_, sizeof(void*)*3, v___x_2774_);
lean_ctor_set_float(v___x_2777_, sizeof(void*)*3 + 8, v___x_2774_);
lean_ctor_set_uint8(v___x_2777_, sizeof(void*)*3 + 16, v___x_2775_);
v___x_2778_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1));
v___x_2779_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2777_);
lean_ctor_set(v___x_2779_, 1, v_a_2750_);
lean_ctor_set(v___x_2779_, 2, v___x_2778_);
lean_inc(v_ref_2748_);
v___x_2780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2780_, 0, v_ref_2748_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
v___x_2781_ = l_Lean_PersistentArray_push___redArg(v_traces_2768_, v___x_2780_);
if (v_isShared_2771_ == 0)
{
lean_ctor_set(v___x_2770_, 0, v___x_2781_);
v___x_2783_ = v___x_2770_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v___x_2781_);
lean_ctor_set_uint64(v_reuseFailAlloc_2791_, sizeof(void*)*1, v_tid_2767_);
v___x_2783_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
lean_object* v___x_2785_; 
if (v_isShared_2766_ == 0)
{
lean_ctor_set(v___x_2765_, 4, v___x_2783_);
v___x_2785_ = v___x_2765_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v_env_2756_);
lean_ctor_set(v_reuseFailAlloc_2790_, 1, v_nextMacroScope_2757_);
lean_ctor_set(v_reuseFailAlloc_2790_, 2, v_ngen_2758_);
lean_ctor_set(v_reuseFailAlloc_2790_, 3, v_auxDeclNGen_2759_);
lean_ctor_set(v_reuseFailAlloc_2790_, 4, v___x_2783_);
lean_ctor_set(v_reuseFailAlloc_2790_, 5, v_cache_2760_);
lean_ctor_set(v_reuseFailAlloc_2790_, 6, v_messages_2761_);
lean_ctor_set(v_reuseFailAlloc_2790_, 7, v_infoState_2762_);
lean_ctor_set(v_reuseFailAlloc_2790_, 8, v_snapshotTasks_2763_);
v___x_2785_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
lean_object* v___x_2786_; lean_object* v___x_2788_; 
v___x_2786_ = lean_st_ref_put(v___y_2746_, v___x_2785_);
if (v_isShared_2753_ == 0)
{
lean_ctor_set(v___x_2752_, 0, v___x_2772_);
v___x_2788_ = v___x_2752_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v___x_2772_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___boxed(lean_object* v_cls_2795_, lean_object* v_msg_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_){
_start:
{
lean_object* v_res_2802_; 
v_res_2802_ = l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(v_cls_2795_, v_msg_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_);
lean_dec(v___y_2800_);
lean_dec_ref(v___y_2799_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2797_);
return v_res_2802_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2810_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_2811_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3));
v___x_2812_ = l_Lean_Name_append(v___x_2811_, v___x_2810_);
return v___x_2812_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6(void){
_start:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5));
v___x_2815_ = l_Lean_stringToMessageData(v___x_2814_);
return v___x_2815_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8(void){
_start:
{
lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2817_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7));
v___x_2818_ = l_Lean_stringToMessageData(v___x_2817_);
return v___x_2818_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10(void){
_start:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; 
v___x_2820_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9));
v___x_2821_ = l_Lean_stringToMessageData(v___x_2820_);
return v___x_2821_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12(void){
_start:
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2823_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11));
v___x_2824_ = l_Lean_stringToMessageData(v___x_2823_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(lean_object* v_a_2825_, lean_object* v_fst_2826_, lean_object* v_fst_2827_, lean_object* v_inst_2828_, lean_object* v_a_2829_, lean_object* v_projInfo_x3f_2830_, lean_object* v_argVars_2831_, lean_object* v_x_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_){
_start:
{
lean_object* v___x_2838_; 
v___x_2838_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_a_2825_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_);
if (lean_obj_tag(v___x_2838_) == 0)
{
lean_object* v_a_2839_; lean_object* v_dummy_2840_; lean_object* v_nargs_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; size_t v_sz_2849_; size_t v___x_2850_; lean_object* v___x_2851_; 
v_a_2839_ = lean_ctor_get(v___x_2838_, 0);
lean_inc(v_a_2839_);
lean_dec_ref_known(v___x_2838_, 1);
v_dummy_2840_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0);
v_nargs_2841_ = l_Lean_Expr_getAppNumArgs(v_a_2825_);
lean_inc(v_nargs_2841_);
v___x_2842_ = lean_mk_array(v_nargs_2841_, v_dummy_2840_);
v___x_2843_ = lean_unsigned_to_nat(1u);
v___x_2844_ = lean_nat_sub(v_nargs_2841_, v___x_2843_);
lean_dec(v_nargs_2841_);
lean_inc_ref(v_a_2825_);
v___x_2845_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2825_, v___x_2842_, v___x_2844_);
v___x_2846_ = lean_array_get_size(v___x_2845_);
v___x_2847_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0));
v___x_2848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2847_);
lean_ctor_set(v___x_2848_, 1, v___x_2846_);
v_sz_2849_ = lean_array_size(v___x_2845_);
v___x_2850_ = ((size_t)0ULL);
v___x_2851_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(v_a_2839_, v_fst_2826_, v_argVars_2831_, v___x_2845_, v_sz_2849_, v___x_2850_, v___x_2848_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_);
lean_dec_ref(v___x_2845_);
lean_dec(v_a_2839_);
if (lean_obj_tag(v___x_2851_) == 0)
{
lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
lean_dec_ref_known(v___x_2851_, 1);
v___x_2852_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_2853_ = lean_array_get_size(v_fst_2826_);
v___x_2854_ = l_List_range(v___x_2853_);
v___x_2855_ = lean_box(0);
v___x_2856_ = l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(v_fst_2827_, v___x_2854_, v___x_2855_);
v___x_2857_ = lean_array_mk(v___x_2856_);
v___x_2858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2852_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
lean_inc_ref(v_inst_2828_);
lean_inc_ref(v_argVars_2831_);
v___x_2859_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_2826_, v_argVars_2831_, v_inst_2828_, v_a_2829_, v_projInfo_x3f_2830_, v___x_2858_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2953_; 
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2862_ = v___x_2859_;
v_isShared_2863_ = v_isSharedCheck_2953_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2859_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2953_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v_fst_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2951_; 
v_fst_2864_ = lean_ctor_get(v_a_2860_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v_a_2860_);
if (v_isSharedCheck_2951_ == 0)
{
lean_object* v_unused_2952_; 
v_unused_2952_ = lean_ctor_get(v_a_2860_, 1);
lean_dec(v_unused_2952_);
v___x_2866_ = v_a_2860_;
v_isShared_2867_ = v_isSharedCheck_2951_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_fst_2864_);
lean_dec(v_a_2860_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2951_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___y_2869_; lean_object* v___y_2870_; lean_object* v___y_2871_; lean_object* v_options_2872_; lean_object* v_inheritedTraceOptions_2873_; lean_object* v___y_2874_; lean_object* v_toCold_2930_; lean_object* v_options_2931_; lean_object* v_inheritedTraceOptions_2932_; lean_object* v___x_2933_; uint8_t v___x_2934_; 
v_toCold_2930_ = lean_ctor_get(v___y_2835_, 0);
v_options_2931_ = lean_ctor_get(v_toCold_2930_, 2);
v_inheritedTraceOptions_2932_ = lean_ctor_get(v_toCold_2930_, 11);
v___x_2933_ = l_Lean_Meta_synthInstance_checkSynthOrder;
v___x_2934_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_options_2931_, v___x_2933_);
if (v___x_2934_ == 0)
{
lean_dec_ref(v_a_2825_);
v___y_2869_ = v___y_2833_;
v___y_2870_ = v___y_2834_;
v___y_2871_ = v___y_2835_;
v_options_2872_ = v_options_2931_;
v_inheritedTraceOptions_2873_ = v_inheritedTraceOptions_2932_;
v___y_2874_ = v___y_2836_;
goto v___jp_2868_;
}
else
{
lean_object* v___x_2935_; lean_object* v_a_2936_; uint8_t v___x_2937_; 
v___x_2935_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_a_2825_, v___y_2834_);
v_a_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_a_2936_);
lean_dec_ref(v___x_2935_);
v___x_2937_ = l_Lean_Expr_hasExprMVar(v_a_2936_);
if (v___x_2937_ == 0)
{
lean_dec(v_a_2936_);
v___y_2869_ = v___y_2833_;
v___y_2870_ = v___y_2834_;
v___y_2871_ = v___y_2835_;
v_options_2872_ = v_options_2931_;
v_inheritedTraceOptions_2873_ = v_inheritedTraceOptions_2932_;
v___y_2874_ = v___y_2836_;
goto v___jp_2868_;
}
else
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
lean_del_object(v___x_2866_);
lean_dec(v_fst_2864_);
lean_del_object(v___x_2862_);
lean_dec_ref(v_argVars_2831_);
lean_dec_ref(v_inst_2828_);
v___x_2938_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12);
v___x_2939_ = l_Lean_Expr_setPPExplicit(v_a_2936_, v___x_2934_);
v___x_2940_ = l_Lean_indentExpr(v___x_2939_);
v___x_2941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2941_, 0, v___x_2938_);
lean_ctor_set(v___x_2941_, 1, v___x_2940_);
v___x_2942_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_2941_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_);
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2945_ = v___x_2942_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2942_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_a_2943_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
}
v___jp_2868_:
{
uint8_t v_hasTrace_2875_; 
v_hasTrace_2875_ = lean_ctor_get_uint8(v_options_2872_, sizeof(void*)*1);
if (v_hasTrace_2875_ == 0)
{
lean_object* v___x_2877_; 
lean_del_object(v___x_2866_);
lean_dec_ref(v_argVars_2831_);
lean_dec_ref(v_inst_2828_);
if (v_isShared_2863_ == 0)
{
lean_ctor_set(v___x_2862_, 0, v_fst_2864_);
v___x_2877_ = v___x_2862_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_fst_2864_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
else
{
lean_object* v___x_2879_; lean_object* v___x_2880_; uint8_t v___x_2881_; 
v___x_2879_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_2880_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4);
v___x_2881_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2873_, v_options_2872_, v___x_2880_);
if (v___x_2881_ == 0)
{
lean_object* v___x_2883_; 
lean_del_object(v___x_2866_);
lean_dec_ref(v_argVars_2831_);
lean_dec_ref(v_inst_2828_);
if (v_isShared_2863_ == 0)
{
lean_ctor_set(v___x_2862_, 0, v_fst_2864_);
v___x_2883_ = v___x_2862_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_fst_2864_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
return v___x_2883_;
}
}
else
{
size_t v_sz_2885_; lean_object* v___x_2886_; 
lean_del_object(v___x_2862_);
v_sz_2885_ = lean_array_size(v_fst_2864_);
lean_inc(v_fst_2864_);
v___x_2886_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(v_argVars_2831_, v_sz_2885_, v___x_2850_, v_fst_2864_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2874_);
lean_dec_ref(v_argVars_2831_);
if (lean_obj_tag(v___x_2886_) == 0)
{
lean_object* v_a_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2891_; 
v_a_2887_ = lean_ctor_get(v___x_2886_, 0);
lean_inc(v_a_2887_);
lean_dec_ref_known(v___x_2886_, 1);
v___x_2888_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6);
v___x_2889_ = l_Lean_MessageData_ofExpr(v_inst_2828_);
if (v_isShared_2867_ == 0)
{
lean_ctor_set_tag(v___x_2866_, 7);
lean_ctor_set(v___x_2866_, 1, v___x_2889_);
lean_ctor_set(v___x_2866_, 0, v___x_2888_);
v___x_2891_ = v___x_2866_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v___x_2888_);
lean_ctor_set(v_reuseFailAlloc_2921_, 1, v___x_2889_);
v___x_2891_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2892_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8);
v___x_2893_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2891_);
lean_ctor_set(v___x_2893_, 1, v___x_2892_);
lean_inc(v_fst_2864_);
v___x_2894_ = lean_array_to_list(v_fst_2864_);
v___x_2895_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(v___x_2894_, v___x_2855_);
v___x_2896_ = l_Lean_MessageData_ofList(v___x_2895_);
v___x_2897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2893_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
v___x_2898_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10);
v___x_2899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2897_);
lean_ctor_set(v___x_2899_, 1, v___x_2898_);
v___x_2900_ = lean_array_to_list(v_a_2887_);
v___x_2901_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2);
v___x_2902_ = l_Lean_MessageData_joinSep(v___x_2900_, v___x_2901_);
v___x_2903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2899_);
lean_ctor_set(v___x_2903_, 1, v___x_2902_);
v___x_2904_ = l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(v___x_2879_, v___x_2903_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2874_);
if (lean_obj_tag(v___x_2904_) == 0)
{
lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2911_; 
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2911_ == 0)
{
lean_object* v_unused_2912_; 
v_unused_2912_ = lean_ctor_get(v___x_2904_, 0);
lean_dec(v_unused_2912_);
v___x_2906_ = v___x_2904_;
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
else
{
lean_dec(v___x_2904_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
lean_ctor_set(v___x_2906_, 0, v_fst_2864_);
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_fst_2864_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
else
{
lean_object* v_a_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2920_; 
lean_dec(v_fst_2864_);
v_a_2913_ = lean_ctor_get(v___x_2904_, 0);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2915_ = v___x_2904_;
v_isShared_2916_ = v_isSharedCheck_2920_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_a_2913_);
lean_dec(v___x_2904_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2920_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2918_; 
if (v_isShared_2916_ == 0)
{
v___x_2918_ = v___x_2915_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_a_2913_);
v___x_2918_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
return v___x_2918_;
}
}
}
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2929_; 
lean_del_object(v___x_2866_);
lean_dec(v_fst_2864_);
lean_dec_ref(v_inst_2828_);
v_a_2922_ = lean_ctor_get(v___x_2886_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2886_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2924_ = v___x_2886_;
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v___x_2886_);
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
}
}
}
}
}
else
{
lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2961_; 
lean_dec_ref(v_argVars_2831_);
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_a_2825_);
v_a_2954_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2956_ = v___x_2859_;
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2859_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
}
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
lean_dec_ref(v_argVars_2831_);
lean_dec_ref(v_a_2829_);
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_fst_2826_);
lean_dec_ref(v_a_2825_);
v_a_2962_ = lean_ctor_get(v___x_2851_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2851_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2851_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
else
{
lean_dec_ref(v_argVars_2831_);
lean_dec_ref(v_a_2829_);
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_fst_2826_);
lean_dec_ref(v_a_2825_);
return v___x_2838_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed(lean_object* v_a_2970_, lean_object* v_fst_2971_, lean_object* v_fst_2972_, lean_object* v_inst_2973_, lean_object* v_a_2974_, lean_object* v_projInfo_x3f_2975_, lean_object* v_argVars_2976_, lean_object* v_x_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(v_a_2970_, v_fst_2971_, v_fst_2972_, v_inst_2973_, v_a_2974_, v_projInfo_x3f_2975_, v_argVars_2976_, v_x_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_);
lean_dec(v___y_2981_);
lean_dec_ref(v___y_2980_);
lean_dec(v___y_2979_);
lean_dec_ref(v___y_2978_);
lean_dec_ref(v_x_2977_);
lean_dec(v_projInfo_x3f_2975_);
lean_dec_ref(v_fst_2972_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(lean_object* v_inst_2984_, lean_object* v_projInfo_x3f_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_){
_start:
{
lean_object* v___x_2991_; 
lean_inc(v___y_2989_);
lean_inc_ref(v___y_2988_);
lean_inc(v___y_2987_);
lean_inc_ref(v___y_2986_);
lean_inc_ref(v_inst_2984_);
v___x_2991_ = lean_infer_type(v_inst_2984_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2993_; uint8_t v___x_2994_; lean_object* v___x_2995_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc_n(v_a_2992_, 2);
lean_dec_ref_known(v___x_2991_, 1);
v___x_2993_ = lean_box(0);
v___x_2994_ = 0;
v___x_2995_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_2992_, v___x_2993_, v___x_2994_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_a_2996_; lean_object* v_snd_2997_; lean_object* v_fst_2998_; lean_object* v_fst_2999_; lean_object* v_snd_3000_; lean_object* v___x_3001_; 
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
lean_inc(v_a_2996_);
lean_dec_ref_known(v___x_2995_, 1);
v_snd_2997_ = lean_ctor_get(v_a_2996_, 1);
lean_inc(v_snd_2997_);
v_fst_2998_ = lean_ctor_get(v_a_2996_, 0);
lean_inc(v_fst_2998_);
lean_dec(v_a_2996_);
v_fst_2999_ = lean_ctor_get(v_snd_2997_, 0);
lean_inc(v_fst_2999_);
v_snd_3000_ = lean_ctor_get(v_snd_2997_, 1);
lean_inc(v_snd_3000_);
lean_dec(v_snd_2997_);
lean_inc(v___y_2989_);
lean_inc_ref(v___y_2988_);
lean_inc(v___y_2987_);
lean_inc_ref(v___y_2986_);
v___x_3001_ = lean_whnf(v_snd_3000_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_object* v_a_3002_; lean_object* v___f_3003_; uint8_t v___x_3004_; lean_object* v___x_3005_; 
v_a_3002_ = lean_ctor_get(v___x_3001_, 0);
lean_inc(v_a_3002_);
lean_dec_ref_known(v___x_3001_, 1);
lean_inc(v_a_2992_);
v___f_3003_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed), 13, 6);
lean_closure_set(v___f_3003_, 0, v_a_3002_);
lean_closure_set(v___f_3003_, 1, v_fst_2998_);
lean_closure_set(v___f_3003_, 2, v_fst_2999_);
lean_closure_set(v___f_3003_, 3, v_inst_2984_);
lean_closure_set(v___f_3003_, 4, v_a_2992_);
lean_closure_set(v___f_3003_, 5, v_projInfo_x3f_2985_);
v___x_3004_ = 0;
v___x_3005_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_2992_, v___f_3003_, v___x_3004_, v___x_3004_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
return v___x_3005_;
}
else
{
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3013_; 
lean_dec(v_fst_2999_);
lean_dec(v_fst_2998_);
lean_dec(v_a_2992_);
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec(v_projInfo_x3f_2985_);
lean_dec_ref(v_inst_2984_);
v_a_3006_ = lean_ctor_get(v___x_3001_, 0);
v_isSharedCheck_3013_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_3008_ = v___x_3001_;
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v___x_3001_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3011_; 
if (v_isShared_3009_ == 0)
{
v___x_3011_ = v___x_3008_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v_a_3006_);
v___x_3011_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
return v___x_3011_;
}
}
}
}
else
{
lean_object* v_a_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3021_; 
lean_dec(v_a_2992_);
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec(v_projInfo_x3f_2985_);
lean_dec_ref(v_inst_2984_);
v_a_3014_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_3016_ = v___x_2995_;
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_a_3014_);
lean_dec(v___x_2995_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3019_; 
if (v_isShared_3017_ == 0)
{
v___x_3019_ = v___x_3016_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_a_3014_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
}
else
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3029_; 
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec(v_projInfo_x3f_2985_);
lean_dec_ref(v_inst_2984_);
v_a_3022_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3024_ = v___x_2991_;
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_2991_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3027_; 
if (v_isShared_3025_ == 0)
{
v___x_3027_ = v___x_3024_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_a_3022_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1___boxed(lean_object* v_inst_3030_, lean_object* v_projInfo_x3f_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3030_, v_projInfo_x3f_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(lean_object* v_inst_3038_, lean_object* v_projInfo_x3f_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_){
_start:
{
lean_object* v___y_3046_; lean_object* v___x_3063_; uint8_t v_transparency_3064_; uint8_t v___x_3065_; uint8_t v___x_3066_; 
v___x_3063_ = l_Lean_Meta_Context_config(v___y_3040_);
v_transparency_3064_ = lean_ctor_get_uint8(v___x_3063_, 9);
lean_dec_ref(v___x_3063_);
v___x_3065_ = 2;
v___x_3066_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3064_, v___x_3065_);
if (v___x_3066_ == 0)
{
lean_object* v_keyedConfig_3067_; uint8_t v_trackZetaDelta_3068_; lean_object* v_zetaDeltaSet_3069_; lean_object* v_lctx_3070_; lean_object* v_localInstances_3071_; lean_object* v_defEqCtx_x3f_3072_; lean_object* v_synthPendingDepth_3073_; lean_object* v_customCanUnfoldPredicate_x3f_3074_; uint8_t v_univApprox_3075_; uint8_t v_inTypeClassResolution_3076_; uint8_t v_cacheInferType_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; 
v_keyedConfig_3067_ = lean_ctor_get(v___y_3040_, 0);
v_trackZetaDelta_3068_ = lean_ctor_get_uint8(v___y_3040_, sizeof(void*)*7);
v_zetaDeltaSet_3069_ = lean_ctor_get(v___y_3040_, 1);
v_lctx_3070_ = lean_ctor_get(v___y_3040_, 2);
v_localInstances_3071_ = lean_ctor_get(v___y_3040_, 3);
v_defEqCtx_x3f_3072_ = lean_ctor_get(v___y_3040_, 4);
v_synthPendingDepth_3073_ = lean_ctor_get(v___y_3040_, 5);
v_customCanUnfoldPredicate_x3f_3074_ = lean_ctor_get(v___y_3040_, 6);
v_univApprox_3075_ = lean_ctor_get_uint8(v___y_3040_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3076_ = lean_ctor_get_uint8(v___y_3040_, sizeof(void*)*7 + 2);
v_cacheInferType_3077_ = lean_ctor_get_uint8(v___y_3040_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3067_);
v___x_3078_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3065_, v_keyedConfig_3067_);
lean_inc(v_customCanUnfoldPredicate_x3f_3074_);
lean_inc(v_synthPendingDepth_3073_);
lean_inc(v_defEqCtx_x3f_3072_);
lean_inc_ref(v_localInstances_3071_);
lean_inc_ref(v_lctx_3070_);
lean_inc(v_zetaDeltaSet_3069_);
v___x_3079_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3079_, 0, v___x_3078_);
lean_ctor_set(v___x_3079_, 1, v_zetaDeltaSet_3069_);
lean_ctor_set(v___x_3079_, 2, v_lctx_3070_);
lean_ctor_set(v___x_3079_, 3, v_localInstances_3071_);
lean_ctor_set(v___x_3079_, 4, v_defEqCtx_x3f_3072_);
lean_ctor_set(v___x_3079_, 5, v_synthPendingDepth_3073_);
lean_ctor_set(v___x_3079_, 6, v_customCanUnfoldPredicate_x3f_3074_);
lean_ctor_set_uint8(v___x_3079_, sizeof(void*)*7, v_trackZetaDelta_3068_);
lean_ctor_set_uint8(v___x_3079_, sizeof(void*)*7 + 1, v_univApprox_3075_);
lean_ctor_set_uint8(v___x_3079_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3076_);
lean_ctor_set_uint8(v___x_3079_, sizeof(void*)*7 + 3, v_cacheInferType_3077_);
lean_inc(v___y_3043_);
lean_inc_ref(v___y_3042_);
lean_inc(v___y_3041_);
v___x_3080_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3038_, v_projInfo_x3f_3039_, v___x_3079_, v___y_3041_, v___y_3042_, v___y_3043_);
v___y_3046_ = v___x_3080_;
goto v___jp_3045_;
}
else
{
lean_object* v___x_3081_; 
lean_inc(v___y_3043_);
lean_inc_ref(v___y_3042_);
lean_inc(v___y_3041_);
lean_inc_ref(v___y_3040_);
v___x_3081_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3038_, v_projInfo_x3f_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_);
v___y_3046_ = v___x_3081_;
goto v___jp_3045_;
}
v___jp_3045_:
{
if (lean_obj_tag(v___y_3046_) == 0)
{
lean_object* v_a_3047_; lean_object* v___x_3049_; uint8_t v_isShared_3050_; uint8_t v_isSharedCheck_3054_; 
v_a_3047_ = lean_ctor_get(v___y_3046_, 0);
v_isSharedCheck_3054_ = !lean_is_exclusive(v___y_3046_);
if (v_isSharedCheck_3054_ == 0)
{
v___x_3049_ = v___y_3046_;
v_isShared_3050_ = v_isSharedCheck_3054_;
goto v_resetjp_3048_;
}
else
{
lean_inc(v_a_3047_);
lean_dec(v___y_3046_);
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
v_reuseFailAlloc_3053_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3062_; 
v_a_3055_ = lean_ctor_get(v___y_3046_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___y_3046_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3057_ = v___y_3046_;
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_a_3055_);
lean_dec(v___y_3046_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3060_; 
if (v_isShared_3058_ == 0)
{
v___x_3060_ = v___x_3057_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_a_3055_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___boxed(lean_object* v_inst_3082_, lean_object* v_projInfo_x3f_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_){
_start:
{
lean_object* v_res_3089_; 
v_res_3089_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(v_inst_3082_, v_projInfo_x3f_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
lean_dec(v___y_3085_);
lean_dec_ref(v___y_3084_);
return v_res_3089_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(lean_object* v_upperBound_3090_, lean_object* v_a_3091_, lean_object* v___x_3092_, lean_object* v_inst_3093_, lean_object* v_R_3094_, lean_object* v_a_3095_, lean_object* v_b_3096_, lean_object* v_c_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v___x_3103_; 
v___x_3103_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_upperBound_3090_, v_a_3091_, v___x_3092_, v_a_3095_, v_b_3096_);
return v___x_3103_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___boxed(lean_object* v_upperBound_3104_, lean_object* v_a_3105_, lean_object* v___x_3106_, lean_object* v_inst_3107_, lean_object* v_R_3108_, lean_object* v_a_3109_, lean_object* v_b_3110_, lean_object* v_c_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
lean_object* v_res_3117_; 
v_res_3117_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(v_upperBound_3104_, v_a_3105_, v___x_3106_, v_inst_3107_, v_R_3108_, v_a_3109_, v_b_3110_, v_c_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
lean_dec(v___x_3106_);
lean_dec_ref(v_a_3105_);
lean_dec(v_upperBound_3104_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(lean_object* v_00_u03b1_3118_, lean_object* v_msg_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v___x_3125_; 
v___x_3125_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_msg_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___boxed(lean_object* v_00_u03b1_3126_, lean_object* v_msg_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_){
_start:
{
lean_object* v_res_3133_; 
v_res_3133_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(v_00_u03b1_3126_, v_msg_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_);
lean_dec(v___y_3131_);
lean_dec_ref(v___y_3130_);
lean_dec(v___y_3129_);
lean_dec_ref(v___y_3128_);
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(lean_object* v_fst_3134_, lean_object* v_argVars_3135_, lean_object* v_inst_3136_, lean_object* v_a_3137_, lean_object* v_projInfo_x3f_3138_, lean_object* v_inst_3139_, lean_object* v_a_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
lean_object* v___x_3146_; 
v___x_3146_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_3134_, v_argVars_3135_, v_inst_3136_, v_a_3137_, v_projInfo_x3f_3138_, v_a_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_);
return v___x_3146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___boxed(lean_object* v_fst_3147_, lean_object* v_argVars_3148_, lean_object* v_inst_3149_, lean_object* v_a_3150_, lean_object* v_projInfo_x3f_3151_, lean_object* v_inst_3152_, lean_object* v_a_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_){
_start:
{
lean_object* v_res_3159_; 
v_res_3159_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(v_fst_3147_, v_argVars_3148_, v_inst_3149_, v_a_3150_, v_projInfo_x3f_3151_, v_inst_3152_, v_a_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec(v_projInfo_x3f_3151_);
return v_res_3159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4___redArg(lean_object* v_type_3160_, lean_object* v_k_3161_, uint8_t v_cleanupAnnotations_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_){
_start:
{
lean_object* v___f_3168_; uint8_t v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___f_3168_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3168_, 0, v_k_3161_);
v___x_3169_ = 0;
v___x_3170_ = lean_box(0);
v___x_3171_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_3169_, v___x_3170_, v_type_3160_, v___f_3168_, v_cleanupAnnotations_3162_, v___x_3169_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3179_; 
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3179_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3174_ = v___x_3171_;
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3171_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___x_3177_; 
if (v_isShared_3175_ == 0)
{
v___x_3177_ = v___x_3174_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_a_3172_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
return v___x_3177_;
}
}
}
else
{
lean_object* v_a_3180_; lean_object* v___x_3182_; uint8_t v_isShared_3183_; uint8_t v_isSharedCheck_3187_; 
v_a_3180_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3187_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3187_ == 0)
{
v___x_3182_ = v___x_3171_;
v_isShared_3183_ = v_isSharedCheck_3187_;
goto v_resetjp_3181_;
}
else
{
lean_inc(v_a_3180_);
lean_dec(v___x_3171_);
v___x_3182_ = lean_box(0);
v_isShared_3183_ = v_isSharedCheck_3187_;
goto v_resetjp_3181_;
}
v_resetjp_3181_:
{
lean_object* v___x_3185_; 
if (v_isShared_3183_ == 0)
{
v___x_3185_ = v___x_3182_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3186_; 
v_reuseFailAlloc_3186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3186_, 0, v_a_3180_);
v___x_3185_ = v_reuseFailAlloc_3186_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
return v___x_3185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4___redArg___boxed(lean_object* v_type_3188_, lean_object* v_k_3189_, lean_object* v_cleanupAnnotations_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3196_; lean_object* v_res_3197_; 
v_cleanupAnnotations_boxed_3196_ = lean_unbox(v_cleanupAnnotations_3190_);
v_res_3197_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4___redArg(v_type_3188_, v_k_3189_, v_cleanupAnnotations_boxed_3196_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_);
lean_dec(v___y_3194_);
lean_dec_ref(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3191_);
return v_res_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4(lean_object* v_00_u03b1_3198_, lean_object* v_type_3199_, lean_object* v_k_3200_, uint8_t v_cleanupAnnotations_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_){
_start:
{
lean_object* v___x_3207_; 
v___x_3207_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4___redArg(v_type_3199_, v_k_3200_, v_cleanupAnnotations_3201_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_);
return v___x_3207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4___boxed(lean_object* v_00_u03b1_3208_, lean_object* v_type_3209_, lean_object* v_k_3210_, lean_object* v_cleanupAnnotations_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3217_; lean_object* v_res_3218_; 
v_cleanupAnnotations_boxed_3217_ = lean_unbox(v_cleanupAnnotations_3211_);
v_res_3218_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4(v_00_u03b1_3208_, v_type_3209_, v_k_3210_, v_cleanupAnnotations_boxed_3217_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
lean_dec(v___y_3213_);
lean_dec_ref(v___y_3212_);
return v_res_3218_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__0));
v___x_3221_ = l_Lean_stringToMessageData(v___x_3220_);
return v___x_3221_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__2));
v___x_3224_ = l_Lean_stringToMessageData(v___x_3223_);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(lean_object* v_a_3225_, lean_object* v_as_3226_, size_t v_sz_3227_, size_t v_i_3228_, lean_object* v_b_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v_a_3235_; uint8_t v___x_3239_; 
v___x_3239_ = lean_usize_dec_lt(v_i_3228_, v_sz_3227_);
if (v___x_3239_ == 0)
{
lean_object* v___x_3240_; 
v___x_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3240_, 0, v_b_3229_);
return v___x_3240_;
}
else
{
lean_object* v_snd_3241_; 
v_snd_3241_ = lean_ctor_get(v_b_3229_, 1);
lean_inc(v_snd_3241_);
if (lean_obj_tag(v_snd_3241_) == 0)
{
lean_object* v_fst_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3250_; 
v_fst_3242_ = lean_ctor_get(v_b_3229_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v_b_3229_);
if (v_isSharedCheck_3250_ == 0)
{
lean_object* v_unused_3251_; 
v_unused_3251_ = lean_ctor_get(v_b_3229_, 1);
lean_dec(v_unused_3251_);
v___x_3244_ = v_b_3229_;
v_isShared_3245_ = v_isSharedCheck_3250_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_fst_3242_);
lean_dec(v_b_3229_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3250_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v___x_3247_; 
if (v_isShared_3245_ == 0)
{
v___x_3247_ = v___x_3244_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_fst_3242_);
lean_ctor_set(v_reuseFailAlloc_3249_, 1, v_snd_3241_);
v___x_3247_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
lean_object* v___x_3248_; 
v___x_3248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3247_);
return v___x_3248_;
}
}
}
else
{
lean_object* v_fst_3252_; lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3309_; 
v_fst_3252_ = lean_ctor_get(v_b_3229_, 0);
v_isSharedCheck_3309_ = !lean_is_exclusive(v_b_3229_);
if (v_isSharedCheck_3309_ == 0)
{
lean_object* v_unused_3310_; 
v_unused_3310_ = lean_ctor_get(v_b_3229_, 1);
lean_dec(v_unused_3310_);
v___x_3254_ = v_b_3229_;
v_isShared_3255_ = v_isSharedCheck_3309_;
goto v_resetjp_3253_;
}
else
{
lean_inc(v_fst_3252_);
lean_dec(v_b_3229_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3309_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
lean_object* v_val_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3308_; 
v_val_3256_ = lean_ctor_get(v_snd_3241_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v_snd_3241_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3258_ = v_snd_3241_;
v_isShared_3259_ = v_isSharedCheck_3308_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_val_3256_);
lean_dec(v_snd_3241_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3308_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v_fvarSet_3260_; lean_object* v_a_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3265_; 
v_fvarSet_3260_ = lean_ctor_get(v_a_3225_, 1);
v_a_3261_ = lean_array_uget_borrowed(v_as_3226_, v_i_3228_);
v___x_3262_ = lean_unsigned_to_nat(1u);
v___x_3263_ = lean_nat_add(v_val_3256_, v___x_3262_);
if (v_isShared_3259_ == 0)
{
lean_ctor_set(v___x_3258_, 0, v___x_3263_);
v___x_3265_ = v___x_3258_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v___x_3263_);
v___x_3265_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
lean_object* v___x_3266_; uint8_t v___x_3267_; 
v___x_3266_ = l_Lean_Expr_fvarId_x21(v_a_3261_);
v___x_3267_ = l_Lean_FVarIdSet_contains(v_fvarSet_3260_, v___x_3266_);
if (v___x_3267_ == 0)
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lean_FVarId_getDecl___redArg(v___x_3266_, v___y_3230_, v___y_3231_, v___y_3232_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3270_; 
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
lean_inc(v_a_3269_);
lean_dec_ref_known(v___x_3268_, 1);
v___x_3270_ = l_Lean_LocalDecl_ppAsBinder(v_a_3269_);
if (lean_obj_tag(v___x_3270_) == 1)
{
lean_object* v_val_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3292_; 
v_val_3271_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3273_ = v___x_3270_;
v_isShared_3274_ = v_isSharedCheck_3292_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_val_3271_);
lean_dec(v___x_3270_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3292_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3278_; 
v___x_3275_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__1);
v___x_3276_ = l_Nat_reprFast(v_val_3256_);
if (v_isShared_3274_ == 0)
{
lean_ctor_set_tag(v___x_3273_, 3);
lean_ctor_set(v___x_3273_, 0, v___x_3276_);
v___x_3278_ = v___x_3273_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v___x_3276_);
v___x_3278_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3289_; 
v___x_3279_ = l_Lean_MessageData_ofFormat(v___x_3278_);
v___x_3280_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3275_);
lean_ctor_set(v___x_3280_, 1, v___x_3279_);
v___x_3281_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___closed__3);
v___x_3282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3280_);
lean_ctor_set(v___x_3282_, 1, v___x_3281_);
v___x_3283_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
lean_ctor_set(v___x_3283_, 1, v_val_3271_);
v___x_3284_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_3285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3283_);
lean_ctor_set(v___x_3285_, 1, v___x_3284_);
v___x_3286_ = l_Lean_indentD(v___x_3285_);
v___x_3287_ = lean_array_push(v_fst_3252_, v___x_3286_);
if (v_isShared_3255_ == 0)
{
lean_ctor_set(v___x_3254_, 1, v___x_3265_);
lean_ctor_set(v___x_3254_, 0, v___x_3287_);
v___x_3289_ = v___x_3254_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v___x_3287_);
lean_ctor_set(v_reuseFailAlloc_3290_, 1, v___x_3265_);
v___x_3289_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
v_a_3235_ = v___x_3289_;
goto v___jp_3234_;
}
}
}
}
else
{
lean_object* v___x_3294_; 
lean_dec(v___x_3270_);
lean_dec(v_val_3256_);
if (v_isShared_3255_ == 0)
{
lean_ctor_set(v___x_3254_, 1, v___x_3265_);
v___x_3294_ = v___x_3254_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_fst_3252_);
lean_ctor_set(v_reuseFailAlloc_3295_, 1, v___x_3265_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
v_a_3235_ = v___x_3294_;
goto v___jp_3234_;
}
}
}
else
{
lean_object* v_a_3296_; lean_object* v___x_3298_; uint8_t v_isShared_3299_; uint8_t v_isSharedCheck_3303_; 
lean_dec_ref(v___x_3265_);
lean_dec(v_val_3256_);
lean_del_object(v___x_3254_);
lean_dec(v_fst_3252_);
v_a_3296_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3303_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3303_ == 0)
{
v___x_3298_ = v___x_3268_;
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
else
{
lean_inc(v_a_3296_);
lean_dec(v___x_3268_);
v___x_3298_ = lean_box(0);
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
v_resetjp_3297_:
{
lean_object* v___x_3301_; 
if (v_isShared_3299_ == 0)
{
v___x_3301_ = v___x_3298_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v_a_3296_);
v___x_3301_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
return v___x_3301_;
}
}
}
}
else
{
lean_object* v___x_3305_; 
lean_dec(v___x_3266_);
lean_dec(v_val_3256_);
if (v_isShared_3255_ == 0)
{
lean_ctor_set(v___x_3254_, 1, v___x_3265_);
v___x_3305_ = v___x_3254_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_fst_3252_);
lean_ctor_set(v_reuseFailAlloc_3306_, 1, v___x_3265_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
v_a_3235_ = v___x_3305_;
goto v___jp_3234_;
}
}
}
}
}
}
}
v___jp_3234_:
{
size_t v___x_3236_; size_t v___x_3237_; 
v___x_3236_ = ((size_t)1ULL);
v___x_3237_ = lean_usize_add(v_i_3228_, v___x_3236_);
v_i_3228_ = v___x_3237_;
v_b_3229_ = v_a_3235_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___boxed(lean_object* v_a_3311_, lean_object* v_as_3312_, lean_object* v_sz_3313_, lean_object* v_i_3314_, lean_object* v_b_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_){
_start:
{
size_t v_sz_boxed_3320_; size_t v_i_boxed_3321_; lean_object* v_res_3322_; 
v_sz_boxed_3320_ = lean_unbox_usize(v_sz_3313_);
lean_dec(v_sz_3313_);
v_i_boxed_3321_ = lean_unbox_usize(v_i_3314_);
lean_dec(v_i_3314_);
v_res_3322_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(v_a_3311_, v_as_3312_, v_sz_boxed_3320_, v_i_boxed_3321_, v_b_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
lean_dec(v___y_3318_);
lean_dec_ref(v___y_3317_);
lean_dec_ref(v___y_3316_);
lean_dec_ref(v_as_3312_);
lean_dec_ref(v_a_3311_);
return v_res_3322_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0(uint8_t v_suppressElabErrors_3330_, uint8_t v___y_3331_, lean_object* v_x_3332_){
_start:
{
if (lean_obj_tag(v_x_3332_) == 1)
{
lean_object* v_pre_3333_; 
v_pre_3333_ = lean_ctor_get(v_x_3332_, 0);
switch(lean_obj_tag(v_pre_3333_))
{
case 1:
{
lean_object* v_pre_3334_; 
v_pre_3334_ = lean_ctor_get(v_pre_3333_, 0);
switch(lean_obj_tag(v_pre_3334_))
{
case 0:
{
lean_object* v_str_3335_; lean_object* v_str_3336_; lean_object* v___x_3337_; uint8_t v___x_3338_; 
v_str_3335_ = lean_ctor_get(v_x_3332_, 1);
v_str_3336_ = lean_ctor_get(v_pre_3333_, 1);
v___x_3337_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__0));
v___x_3338_ = lean_string_dec_eq(v_str_3336_, v___x_3337_);
if (v___x_3338_ == 0)
{
lean_object* v___x_3339_; uint8_t v___x_3340_; 
v___x_3339_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__1));
v___x_3340_ = lean_string_dec_eq(v_str_3336_, v___x_3339_);
if (v___x_3340_ == 0)
{
return v___x_3340_;
}
else
{
lean_object* v___x_3341_; uint8_t v___x_3342_; 
v___x_3341_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__2));
v___x_3342_ = lean_string_dec_eq(v_str_3335_, v___x_3341_);
if (v___x_3342_ == 0)
{
return v___x_3342_;
}
else
{
return v_suppressElabErrors_3330_;
}
}
}
else
{
lean_object* v___x_3343_; uint8_t v___x_3344_; 
v___x_3343_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__3));
v___x_3344_ = lean_string_dec_eq(v_str_3335_, v___x_3343_);
if (v___x_3344_ == 0)
{
return v___x_3344_;
}
else
{
return v_suppressElabErrors_3330_;
}
}
}
case 1:
{
lean_object* v_pre_3345_; 
v_pre_3345_ = lean_ctor_get(v_pre_3334_, 0);
if (lean_obj_tag(v_pre_3345_) == 0)
{
lean_object* v_str_3346_; lean_object* v_str_3347_; lean_object* v_str_3348_; lean_object* v___x_3349_; uint8_t v___x_3350_; 
v_str_3346_ = lean_ctor_get(v_x_3332_, 1);
v_str_3347_ = lean_ctor_get(v_pre_3333_, 1);
v_str_3348_ = lean_ctor_get(v_pre_3334_, 1);
v___x_3349_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__4));
v___x_3350_ = lean_string_dec_eq(v_str_3348_, v___x_3349_);
if (v___x_3350_ == 0)
{
return v___x_3350_;
}
else
{
lean_object* v___x_3351_; uint8_t v___x_3352_; 
v___x_3351_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__5));
v___x_3352_ = lean_string_dec_eq(v_str_3347_, v___x_3351_);
if (v___x_3352_ == 0)
{
return v___x_3352_;
}
else
{
lean_object* v___x_3353_; uint8_t v___x_3354_; 
v___x_3353_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___closed__6));
v___x_3354_ = lean_string_dec_eq(v_str_3346_, v___x_3353_);
if (v___x_3354_ == 0)
{
return v___x_3354_;
}
else
{
return v_suppressElabErrors_3330_;
}
}
}
}
else
{
return v___y_3331_;
}
}
default: 
{
return v___y_3331_;
}
}
}
case 0:
{
lean_object* v_str_3355_; lean_object* v___x_3356_; uint8_t v___x_3357_; 
v_str_3355_ = lean_ctor_get(v_x_3332_, 1);
v___x_3356_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2));
v___x_3357_ = lean_string_dec_eq(v_str_3355_, v___x_3356_);
if (v___x_3357_ == 0)
{
return v___x_3357_;
}
else
{
return v_suppressElabErrors_3330_;
}
}
default: 
{
return v___y_3331_;
}
}
}
else
{
return v___y_3331_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___boxed(lean_object* v_suppressElabErrors_3358_, lean_object* v___y_3359_, lean_object* v_x_3360_){
_start:
{
uint8_t v_suppressElabErrors_boxed_3361_; uint8_t v___y_10972__boxed_3362_; uint8_t v_res_3363_; lean_object* v_r_3364_; 
v_suppressElabErrors_boxed_3361_ = lean_unbox(v_suppressElabErrors_3358_);
v___y_10972__boxed_3362_ = lean_unbox(v___y_3359_);
v_res_3363_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0(v_suppressElabErrors_boxed_3361_, v___y_10972__boxed_3362_, v_x_3360_);
lean_dec(v_x_3360_);
v_r_3364_ = lean_box(v_res_3363_);
return v_r_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3(lean_object* v_ref_3365_, lean_object* v_msgData_3366_, uint8_t v_severity_3367_, uint8_t v_isSilent_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_){
_start:
{
lean_object* v___y_3375_; lean_object* v___y_3376_; uint8_t v___y_3377_; lean_object* v___y_3378_; lean_object* v___y_3379_; uint8_t v___y_3380_; lean_object* v___y_3381_; lean_object* v_currNamespace_3382_; lean_object* v_openDecls_3383_; lean_object* v___y_3384_; lean_object* v___y_3410_; lean_object* v___y_3411_; lean_object* v___y_3412_; lean_object* v___y_3413_; lean_object* v___y_3414_; uint8_t v___y_3415_; lean_object* v___y_3416_; uint8_t v___y_3417_; uint8_t v___y_3418_; lean_object* v___y_3419_; lean_object* v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3439_; lean_object* v___y_3440_; lean_object* v___y_3441_; uint8_t v___y_3442_; lean_object* v___y_3443_; uint8_t v___y_3444_; uint8_t v___y_3445_; lean_object* v___y_3446_; lean_object* v___y_3450_; lean_object* v___y_3451_; lean_object* v___y_3452_; lean_object* v___y_3453_; lean_object* v___y_3454_; uint8_t v___y_3455_; uint8_t v___y_3456_; lean_object* v___y_3457_; uint8_t v___y_3458_; uint8_t v___x_3463_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v___y_3467_; lean_object* v___y_3468_; lean_object* v___y_3469_; uint8_t v___y_3470_; lean_object* v___y_3471_; uint8_t v___y_3472_; uint8_t v___y_3473_; uint8_t v___y_3475_; uint8_t v___x_3493_; 
v___x_3463_ = 2;
v___x_3493_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3367_, v___x_3463_);
if (v___x_3493_ == 0)
{
v___y_3475_ = v___x_3493_;
goto v___jp_3474_;
}
else
{
uint8_t v___x_3494_; 
lean_inc_ref(v_msgData_3366_);
v___x_3494_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3366_);
v___y_3475_ = v___x_3494_;
goto v___jp_3474_;
}
v___jp_3374_:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v_env_3389_; lean_object* v_nextMacroScope_3390_; lean_object* v_ngen_3391_; lean_object* v_auxDeclNGen_3392_; lean_object* v_traceState_3393_; lean_object* v_cache_3394_; lean_object* v_messages_3395_; lean_object* v_infoState_3396_; lean_object* v_snapshotTasks_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3408_; 
lean_inc(v_openDecls_3383_);
lean_inc(v_currNamespace_3382_);
v___x_3385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3385_, 0, v_currNamespace_3382_);
lean_ctor_set(v___x_3385_, 1, v_openDecls_3383_);
v___x_3386_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3386_, 0, v___x_3385_);
lean_ctor_set(v___x_3386_, 1, v___y_3381_);
lean_inc_ref(v___y_3378_);
lean_inc_ref(v___y_3376_);
v___x_3387_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3387_, 0, v___y_3376_);
lean_ctor_set(v___x_3387_, 1, v___y_3375_);
lean_ctor_set(v___x_3387_, 2, v___y_3379_);
lean_ctor_set(v___x_3387_, 3, v___y_3378_);
lean_ctor_set(v___x_3387_, 4, v___x_3386_);
lean_ctor_set_uint8(v___x_3387_, sizeof(void*)*5, v___y_3380_);
lean_ctor_set_uint8(v___x_3387_, sizeof(void*)*5 + 1, v___y_3377_);
lean_ctor_set_uint8(v___x_3387_, sizeof(void*)*5 + 2, v_isSilent_3368_);
v___x_3388_ = lean_st_ref_take(v___y_3384_);
v_env_3389_ = lean_ctor_get(v___x_3388_, 0);
v_nextMacroScope_3390_ = lean_ctor_get(v___x_3388_, 1);
v_ngen_3391_ = lean_ctor_get(v___x_3388_, 2);
v_auxDeclNGen_3392_ = lean_ctor_get(v___x_3388_, 3);
v_traceState_3393_ = lean_ctor_get(v___x_3388_, 4);
v_cache_3394_ = lean_ctor_get(v___x_3388_, 5);
v_messages_3395_ = lean_ctor_get(v___x_3388_, 6);
v_infoState_3396_ = lean_ctor_get(v___x_3388_, 7);
v_snapshotTasks_3397_ = lean_ctor_get(v___x_3388_, 8);
v_isSharedCheck_3408_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3408_ == 0)
{
v___x_3399_ = v___x_3388_;
v_isShared_3400_ = v_isSharedCheck_3408_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_snapshotTasks_3397_);
lean_inc(v_infoState_3396_);
lean_inc(v_messages_3395_);
lean_inc(v_cache_3394_);
lean_inc(v_traceState_3393_);
lean_inc(v_auxDeclNGen_3392_);
lean_inc(v_ngen_3391_);
lean_inc(v_nextMacroScope_3390_);
lean_inc(v_env_3389_);
lean_dec(v___x_3388_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3408_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3404_; 
v___x_3401_ = lean_box(0);
v___x_3402_ = l_Lean_MessageLog_add(v___x_3387_, v_messages_3395_);
if (v_isShared_3400_ == 0)
{
lean_ctor_set(v___x_3399_, 6, v___x_3402_);
v___x_3404_ = v___x_3399_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3407_; 
v_reuseFailAlloc_3407_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3407_, 0, v_env_3389_);
lean_ctor_set(v_reuseFailAlloc_3407_, 1, v_nextMacroScope_3390_);
lean_ctor_set(v_reuseFailAlloc_3407_, 2, v_ngen_3391_);
lean_ctor_set(v_reuseFailAlloc_3407_, 3, v_auxDeclNGen_3392_);
lean_ctor_set(v_reuseFailAlloc_3407_, 4, v_traceState_3393_);
lean_ctor_set(v_reuseFailAlloc_3407_, 5, v_cache_3394_);
lean_ctor_set(v_reuseFailAlloc_3407_, 6, v___x_3402_);
lean_ctor_set(v_reuseFailAlloc_3407_, 7, v_infoState_3396_);
lean_ctor_set(v_reuseFailAlloc_3407_, 8, v_snapshotTasks_3397_);
v___x_3404_ = v_reuseFailAlloc_3407_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3405_ = lean_st_ref_put(v___y_3384_, v___x_3404_);
v___x_3406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3401_);
return v___x_3406_;
}
}
}
v___jp_3409_:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3435_; 
v___x_3420_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3366_);
v___x_3421_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v___x_3420_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_);
v_a_3422_ = lean_ctor_get(v___x_3421_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3421_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3424_ = v___x_3421_;
v_isShared_3425_ = v_isSharedCheck_3435_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3421_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3435_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
lean_inc_ref_n(v___y_3413_, 2);
v___x_3426_ = l_Lean_FileMap_toPosition(v___y_3413_, v___y_3416_);
lean_dec(v___y_3416_);
v___x_3427_ = l_Lean_FileMap_toPosition(v___y_3413_, v___y_3419_);
lean_dec(v___y_3419_);
v___x_3428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3427_);
v___x_3429_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
if (v___y_3415_ == 0)
{
lean_del_object(v___x_3424_);
lean_dec_ref(v___y_3412_);
v___y_3375_ = v___x_3426_;
v___y_3376_ = v___y_3414_;
v___y_3377_ = v___y_3417_;
v___y_3378_ = v___x_3429_;
v___y_3379_ = v___x_3428_;
v___y_3380_ = v___y_3418_;
v___y_3381_ = v_a_3422_;
v_currNamespace_3382_ = v___y_3411_;
v_openDecls_3383_ = v___y_3410_;
v___y_3384_ = v___y_3372_;
goto v___jp_3374_;
}
else
{
uint8_t v___x_3430_; 
lean_inc(v_a_3422_);
v___x_3430_ = l_Lean_MessageData_hasTag(v___y_3412_, v_a_3422_);
if (v___x_3430_ == 0)
{
lean_object* v___x_3431_; lean_object* v___x_3433_; 
lean_dec_ref_known(v___x_3428_, 1);
lean_dec_ref(v___x_3426_);
lean_dec(v_a_3422_);
v___x_3431_ = lean_box(0);
if (v_isShared_3425_ == 0)
{
lean_ctor_set(v___x_3424_, 0, v___x_3431_);
v___x_3433_ = v___x_3424_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v___x_3431_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
else
{
lean_del_object(v___x_3424_);
v___y_3375_ = v___x_3426_;
v___y_3376_ = v___y_3414_;
v___y_3377_ = v___y_3417_;
v___y_3378_ = v___x_3429_;
v___y_3379_ = v___x_3428_;
v___y_3380_ = v___y_3418_;
v___y_3381_ = v_a_3422_;
v_currNamespace_3382_ = v___y_3411_;
v_openDecls_3383_ = v___y_3410_;
v___y_3384_ = v___y_3372_;
goto v___jp_3374_;
}
}
}
}
v___jp_3436_:
{
lean_object* v___x_3447_; 
v___x_3447_ = l_Lean_Syntax_getTailPos_x3f(v___y_3443_, v___y_3445_);
lean_dec(v___y_3443_);
if (lean_obj_tag(v___x_3447_) == 0)
{
lean_inc(v___y_3446_);
v___y_3410_ = v___y_3437_;
v___y_3411_ = v___y_3438_;
v___y_3412_ = v___y_3439_;
v___y_3413_ = v___y_3440_;
v___y_3414_ = v___y_3441_;
v___y_3415_ = v___y_3442_;
v___y_3416_ = v___y_3446_;
v___y_3417_ = v___y_3444_;
v___y_3418_ = v___y_3445_;
v___y_3419_ = v___y_3446_;
goto v___jp_3409_;
}
else
{
lean_object* v_val_3448_; 
v_val_3448_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_val_3448_);
lean_dec_ref_known(v___x_3447_, 1);
v___y_3410_ = v___y_3437_;
v___y_3411_ = v___y_3438_;
v___y_3412_ = v___y_3439_;
v___y_3413_ = v___y_3440_;
v___y_3414_ = v___y_3441_;
v___y_3415_ = v___y_3442_;
v___y_3416_ = v___y_3446_;
v___y_3417_ = v___y_3444_;
v___y_3418_ = v___y_3445_;
v___y_3419_ = v_val_3448_;
goto v___jp_3409_;
}
}
v___jp_3449_:
{
lean_object* v_ref_3459_; lean_object* v___x_3460_; 
v_ref_3459_ = l_Lean_replaceRef(v_ref_3365_, v___y_3457_);
v___x_3460_ = l_Lean_Syntax_getPos_x3f(v_ref_3459_, v___y_3456_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v___x_3461_; 
v___x_3461_ = lean_unsigned_to_nat(0u);
v___y_3437_ = v___y_3450_;
v___y_3438_ = v___y_3451_;
v___y_3439_ = v___y_3452_;
v___y_3440_ = v___y_3453_;
v___y_3441_ = v___y_3454_;
v___y_3442_ = v___y_3455_;
v___y_3443_ = v_ref_3459_;
v___y_3444_ = v___y_3458_;
v___y_3445_ = v___y_3456_;
v___y_3446_ = v___x_3461_;
goto v___jp_3436_;
}
else
{
lean_object* v_val_3462_; 
v_val_3462_ = lean_ctor_get(v___x_3460_, 0);
lean_inc(v_val_3462_);
lean_dec_ref_known(v___x_3460_, 1);
v___y_3437_ = v___y_3450_;
v___y_3438_ = v___y_3451_;
v___y_3439_ = v___y_3452_;
v___y_3440_ = v___y_3453_;
v___y_3441_ = v___y_3454_;
v___y_3442_ = v___y_3455_;
v___y_3443_ = v_ref_3459_;
v___y_3444_ = v___y_3458_;
v___y_3445_ = v___y_3456_;
v___y_3446_ = v_val_3462_;
goto v___jp_3436_;
}
}
v___jp_3464_:
{
if (v___y_3473_ == 0)
{
v___y_3450_ = v___y_3465_;
v___y_3451_ = v___y_3467_;
v___y_3452_ = v___y_3469_;
v___y_3453_ = v___y_3466_;
v___y_3454_ = v___y_3468_;
v___y_3455_ = v___y_3470_;
v___y_3456_ = v___y_3472_;
v___y_3457_ = v___y_3471_;
v___y_3458_ = v_severity_3367_;
goto v___jp_3449_;
}
else
{
v___y_3450_ = v___y_3465_;
v___y_3451_ = v___y_3467_;
v___y_3452_ = v___y_3469_;
v___y_3453_ = v___y_3466_;
v___y_3454_ = v___y_3468_;
v___y_3455_ = v___y_3470_;
v___y_3456_ = v___y_3472_;
v___y_3457_ = v___y_3471_;
v___y_3458_ = v___x_3463_;
goto v___jp_3449_;
}
}
v___jp_3474_:
{
if (v___y_3475_ == 0)
{
lean_object* v_toCold_3476_; lean_object* v_ref_3477_; uint8_t v_suppressElabErrors_3478_; lean_object* v_fileName_3479_; lean_object* v_fileMap_3480_; lean_object* v_options_3481_; lean_object* v_currNamespace_3482_; lean_object* v_openDecls_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___f_3486_; uint8_t v___x_3487_; uint8_t v___x_3488_; 
v_toCold_3476_ = lean_ctor_get(v___y_3371_, 0);
v_ref_3477_ = lean_ctor_get(v___y_3371_, 2);
v_suppressElabErrors_3478_ = lean_ctor_get_uint8(v___y_3371_, sizeof(void*)*3 + 1);
v_fileName_3479_ = lean_ctor_get(v_toCold_3476_, 0);
v_fileMap_3480_ = lean_ctor_get(v_toCold_3476_, 1);
v_options_3481_ = lean_ctor_get(v_toCold_3476_, 2);
v_currNamespace_3482_ = lean_ctor_get(v_toCold_3476_, 4);
v_openDecls_3483_ = lean_ctor_get(v_toCold_3476_, 5);
v___x_3484_ = lean_box(v_suppressElabErrors_3478_);
v___x_3485_ = lean_box(v___y_3475_);
v___f_3486_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3486_, 0, v___x_3484_);
lean_closure_set(v___f_3486_, 1, v___x_3485_);
v___x_3487_ = 1;
v___x_3488_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3367_, v___x_3487_);
if (v___x_3488_ == 0)
{
v___y_3465_ = v_openDecls_3483_;
v___y_3466_ = v_fileMap_3480_;
v___y_3467_ = v_currNamespace_3482_;
v___y_3468_ = v_fileName_3479_;
v___y_3469_ = v___f_3486_;
v___y_3470_ = v_suppressElabErrors_3478_;
v___y_3471_ = v_ref_3477_;
v___y_3472_ = v___y_3475_;
v___y_3473_ = v___x_3488_;
goto v___jp_3464_;
}
else
{
lean_object* v___x_3489_; uint8_t v___x_3490_; 
v___x_3489_ = l_Lean_warningAsError;
v___x_3490_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_options_3481_, v___x_3489_);
v___y_3465_ = v_openDecls_3483_;
v___y_3466_ = v_fileMap_3480_;
v___y_3467_ = v_currNamespace_3482_;
v___y_3468_ = v_fileName_3479_;
v___y_3469_ = v___f_3486_;
v___y_3470_ = v_suppressElabErrors_3478_;
v___y_3471_ = v_ref_3477_;
v___y_3472_ = v___y_3475_;
v___y_3473_ = v___x_3490_;
goto v___jp_3464_;
}
}
else
{
lean_object* v___x_3491_; lean_object* v___x_3492_; 
lean_dec_ref(v_msgData_3366_);
v___x_3491_ = lean_box(0);
v___x_3492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3491_);
return v___x_3492_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3___boxed(lean_object* v_ref_3495_, lean_object* v_msgData_3496_, lean_object* v_severity_3497_, lean_object* v_isSilent_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_){
_start:
{
uint8_t v_severity_boxed_3504_; uint8_t v_isSilent_boxed_3505_; lean_object* v_res_3506_; 
v_severity_boxed_3504_ = lean_unbox(v_severity_3497_);
v_isSilent_boxed_3505_ = lean_unbox(v_isSilent_3498_);
v_res_3506_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3(v_ref_3495_, v_msgData_3496_, v_severity_boxed_3504_, v_isSilent_boxed_3505_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_);
lean_dec(v___y_3502_);
lean_dec_ref(v___y_3501_);
lean_dec(v___y_3500_);
lean_dec_ref(v___y_3499_);
lean_dec(v_ref_3495_);
return v_res_3506_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1(lean_object* v_msgData_3507_, uint8_t v_severity_3508_, uint8_t v_isSilent_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_){
_start:
{
lean_object* v_ref_3515_; lean_object* v___x_3516_; 
v_ref_3515_ = lean_ctor_get(v___y_3512_, 2);
v___x_3516_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1_spec__3(v_ref_3515_, v_msgData_3507_, v_severity_3508_, v_isSilent_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_);
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1___boxed(lean_object* v_msgData_3517_, lean_object* v_severity_3518_, lean_object* v_isSilent_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_){
_start:
{
uint8_t v_severity_boxed_3525_; uint8_t v_isSilent_boxed_3526_; lean_object* v_res_3527_; 
v_severity_boxed_3525_ = lean_unbox(v_severity_3518_);
v_isSilent_boxed_3526_ = lean_unbox(v_isSilent_3519_);
v_res_3527_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1(v_msgData_3517_, v_severity_boxed_3525_, v_isSilent_boxed_3526_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
lean_dec(v___y_3523_);
lean_dec_ref(v___y_3522_);
lean_dec(v___y_3521_);
lean_dec_ref(v___y_3520_);
return v_res_3527_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1(lean_object* v_msgData_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_){
_start:
{
uint8_t v___x_3534_; uint8_t v___x_3535_; lean_object* v___x_3536_; 
v___x_3534_ = 1;
v___x_3535_ = 0;
v___x_3536_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1_spec__1(v_msgData_3528_, v___x_3534_, v___x_3535_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_);
return v___x_3536_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1___boxed(lean_object* v_msgData_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_){
_start:
{
lean_object* v_res_3543_; 
v_res_3543_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1(v_msgData_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_);
lean_dec(v___y_3541_);
lean_dec_ref(v___y_3540_);
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3538_);
return v_res_3543_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(lean_object* v_as_3544_, size_t v_sz_3545_, size_t v_i_3546_, lean_object* v_b_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_){
_start:
{
lean_object* v_a_3554_; uint8_t v___x_3558_; 
v___x_3558_ = lean_usize_dec_lt(v_i_3546_, v_sz_3545_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; 
v___x_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3559_, 0, v_b_3547_);
return v___x_3559_;
}
else
{
lean_object* v___x_3560_; lean_object* v_a_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3560_ = lean_box(0);
v_a_3561_ = lean_array_uget_borrowed(v_as_3544_, v_i_3546_);
v___x_3562_ = l_Lean_Expr_fvarId_x21(v_a_3561_);
lean_inc(v___x_3562_);
v___x_3563_ = l_Lean_FVarId_getBinderInfo___redArg(v___x_3562_, v___y_3549_, v___y_3550_, v___y_3551_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_a_3564_; uint8_t v___x_3565_; uint8_t v___x_3566_; 
v_a_3564_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_a_3564_);
lean_dec_ref_known(v___x_3563_, 1);
v___x_3565_ = lean_unbox(v_a_3564_);
lean_dec(v_a_3564_);
v___x_3566_ = l_Lean_BinderInfo_isInstImplicit(v___x_3565_);
if (v___x_3566_ == 0)
{
lean_dec(v___x_3562_);
v_a_3554_ = v___x_3560_;
goto v___jp_3553_;
}
else
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
v___x_3567_ = lean_st_ref_take(v___y_3548_);
v___x_3568_ = l_Lean_CollectFVars_State_add(v___x_3567_, v___x_3562_);
v___x_3569_ = lean_st_ref_put(v___y_3548_, v___x_3568_);
v_a_3554_ = v___x_3560_;
goto v___jp_3553_;
}
}
else
{
lean_object* v_a_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3577_; 
lean_dec(v___x_3562_);
v_a_3570_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3577_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3572_ = v___x_3563_;
v_isShared_3573_ = v_isSharedCheck_3577_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_a_3570_);
lean_dec(v___x_3563_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3577_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3575_; 
if (v_isShared_3573_ == 0)
{
v___x_3575_ = v___x_3572_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v_a_3570_);
v___x_3575_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
return v___x_3575_;
}
}
}
}
v___jp_3553_:
{
size_t v___x_3555_; size_t v___x_3556_; 
v___x_3555_ = ((size_t)1ULL);
v___x_3556_ = lean_usize_add(v_i_3546_, v___x_3555_);
v_i_3546_ = v___x_3556_;
v_b_3547_ = v_a_3554_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___boxed(lean_object* v_as_3578_, lean_object* v_sz_3579_, lean_object* v_i_3580_, lean_object* v_b_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_){
_start:
{
size_t v_sz_boxed_3587_; size_t v_i_boxed_3588_; lean_object* v_res_3589_; 
v_sz_boxed_3587_ = lean_unbox_usize(v_sz_3579_);
lean_dec(v_sz_3579_);
v_i_boxed_3588_ = lean_unbox_usize(v_i_3580_);
lean_dec(v_i_3580_);
v_res_3589_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(v_as_3578_, v_sz_boxed_3587_, v_i_boxed_3588_, v_b_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_);
lean_dec(v___y_3585_);
lean_dec_ref(v___y_3584_);
lean_dec_ref(v___y_3583_);
lean_dec(v___y_3582_);
lean_dec_ref(v_as_3578_);
return v_res_3589_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0));
v___x_3592_ = l_Lean_stringToMessageData(v___x_3591_);
return v___x_3592_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; 
v___x_3594_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2));
v___x_3595_ = l_Lean_stringToMessageData(v___x_3594_);
return v___x_3595_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v___x_3596_ = lean_box(0);
v___x_3597_ = lean_unsigned_to_nat(16u);
v___x_3598_ = lean_mk_array(v___x_3597_, v___x_3596_);
return v___x_3598_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3599_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4);
v___x_3600_ = lean_unsigned_to_nat(0u);
v___x_3601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3600_);
lean_ctor_set(v___x_3601_, 1, v___x_3599_);
return v___x_3601_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; 
v___x_3604_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6));
v___x_3605_ = lean_box(1);
v___x_3606_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5);
v___x_3607_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3606_);
lean_ctor_set(v___x_3607_, 1, v___x_3605_);
lean_ctor_set(v___x_3607_, 2, v___x_3604_);
return v___x_3607_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11(void){
_start:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3614_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10));
v___x_3615_ = l_Lean_stringToMessageData(v___x_3614_);
return v___x_3615_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__13(void){
_start:
{
lean_object* v___x_3617_; lean_object* v___x_3618_; 
v___x_3617_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12));
v___x_3618_ = l_Lean_stringToMessageData(v___x_3617_);
return v___x_3618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0(lean_object* v___x_3620_, lean_object* v_args_3621_, lean_object* v_ty_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_){
_start:
{
lean_object* v___y_3629_; lean_object* v___y_3630_; lean_object* v___y_3631_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___y_3703_; lean_object* v___x_3704_; 
v___x_3645_ = lean_unsigned_to_nat(0u);
v___x_3646_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7);
v___x_3647_ = lean_st_mk_ref(v___x_3646_);
v___x_3704_ = l_Lean_Expr_collectFVars(v_ty_3622_, v___x_3647_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_);
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v___x_3705_; size_t v_sz_3706_; size_t v___x_3707_; lean_object* v___x_3708_; 
lean_dec_ref_known(v___x_3704_, 1);
v___x_3705_ = lean_box(0);
v_sz_3706_ = lean_array_size(v_args_3621_);
v___x_3707_ = ((size_t)0ULL);
v___x_3708_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(v_args_3621_, v_sz_3706_, v___x_3707_, v___x_3705_, v___x_3647_, v___y_3623_, v___y_3625_, v___y_3626_);
if (lean_obj_tag(v___x_3708_) == 0)
{
lean_dec_ref_known(v___x_3708_, 1);
goto v___jp_3648_;
}
else
{
v___y_3703_ = v___x_3708_;
goto v___jp_3702_;
}
}
else
{
v___y_3703_ = v___x_3704_;
goto v___jp_3702_;
}
v___jp_3628_:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; uint8_t v___x_3642_; 
lean_inc_ref(v___y_3631_);
v___x_3632_ = l_Lean_stringToMessageData(v___y_3631_);
v___x_3633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3633_, 0, v___y_3630_);
lean_ctor_set(v___x_3633_, 1, v___x_3632_);
v___x_3634_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1);
v___x_3635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3635_, 0, v___x_3633_);
lean_ctor_set(v___x_3635_, 1, v___x_3634_);
v___x_3636_ = lean_array_to_list(v___y_3629_);
v___x_3637_ = l_Lean_MessageData_nil;
v___x_3638_ = l_Lean_MessageData_joinSep(v___x_3636_, v___x_3637_);
v___x_3639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3635_);
lean_ctor_set(v___x_3639_, 1, v___x_3638_);
v___x_3640_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3);
v___x_3641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3641_, 0, v___x_3639_);
lean_ctor_set(v___x_3641_, 1, v___x_3640_);
v___x_3642_ = l_Lean_Expr_hasSorry(v___x_3620_);
if (v___x_3642_ == 0)
{
lean_object* v___x_3643_; 
v___x_3643_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_3641_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_);
return v___x_3643_;
}
else
{
lean_object* v___x_3644_; 
v___x_3644_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1(v___x_3641_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_);
return v___x_3644_;
}
}
v___jp_3648_:
{
lean_object* v___x_3649_; lean_object* v___x_3650_; 
v___x_3649_ = lean_st_ref_get(v___x_3647_);
lean_dec(v___x_3647_);
v___x_3650_ = l_Lean_CollectFVars_State_addDependencies(v___x_3649_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_);
if (lean_obj_tag(v___x_3650_) == 0)
{
lean_object* v_a_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; size_t v_sz_3654_; size_t v___x_3655_; lean_object* v___x_3656_; 
v_a_3651_ = lean_ctor_get(v___x_3650_, 0);
lean_inc(v_a_3651_);
lean_dec_ref_known(v___x_3650_, 1);
v___x_3652_ = lean_unsigned_to_nat(1u);
v___x_3653_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9));
v_sz_3654_ = lean_array_size(v_args_3621_);
v___x_3655_ = ((size_t)0ULL);
v___x_3656_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(v_a_3651_, v_args_3621_, v_sz_3654_, v___x_3655_, v___x_3653_, v___y_3623_, v___y_3625_, v___y_3626_);
lean_dec(v_a_3651_);
if (lean_obj_tag(v___x_3656_) == 0)
{
lean_object* v_a_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3685_; 
v_a_3657_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3659_ = v___x_3656_;
v_isShared_3660_ = v_isSharedCheck_3685_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_a_3657_);
lean_dec(v___x_3656_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3685_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v_fst_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3683_; 
v_fst_3661_ = lean_ctor_get(v_a_3657_, 0);
v_isSharedCheck_3683_ = !lean_is_exclusive(v_a_3657_);
if (v_isSharedCheck_3683_ == 0)
{
lean_object* v_unused_3684_; 
v_unused_3684_ = lean_ctor_get(v_a_3657_, 1);
lean_dec(v_unused_3684_);
v___x_3663_ = v_a_3657_;
v_isShared_3664_ = v_isSharedCheck_3683_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_fst_3661_);
lean_dec(v_a_3657_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3683_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3665_; uint8_t v___x_3666_; 
v___x_3665_ = lean_array_get_size(v_fst_3661_);
v___x_3666_ = lean_nat_dec_eq(v___x_3665_, v___x_3645_);
if (v___x_3666_ == 0)
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3672_; 
lean_del_object(v___x_3659_);
v___x_3667_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11);
v___x_3668_ = l_Nat_reprFast(v___x_3665_);
v___x_3669_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3668_);
v___x_3670_ = l_Lean_MessageData_ofFormat(v___x_3669_);
if (v_isShared_3664_ == 0)
{
lean_ctor_set_tag(v___x_3663_, 7);
lean_ctor_set(v___x_3663_, 1, v___x_3670_);
lean_ctor_set(v___x_3663_, 0, v___x_3667_);
v___x_3672_ = v___x_3663_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v___x_3667_);
lean_ctor_set(v_reuseFailAlloc_3678_, 1, v___x_3670_);
v___x_3672_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; uint8_t v___x_3675_; 
v___x_3673_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__13, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__13_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__13);
v___x_3674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3672_);
lean_ctor_set(v___x_3674_, 1, v___x_3673_);
v___x_3675_ = lean_nat_dec_eq(v___x_3665_, v___x_3652_);
if (v___x_3675_ == 0)
{
lean_object* v___x_3676_; 
v___x_3676_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__14));
v___y_3629_ = v_fst_3661_;
v___y_3630_ = v___x_3674_;
v___y_3631_ = v___x_3676_;
goto v___jp_3628_;
}
else
{
lean_object* v___x_3677_; 
v___x_3677_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
v___y_3629_ = v_fst_3661_;
v___y_3630_ = v___x_3674_;
v___y_3631_ = v___x_3677_;
goto v___jp_3628_;
}
}
}
else
{
lean_object* v___x_3679_; lean_object* v___x_3681_; 
lean_del_object(v___x_3663_);
lean_dec(v_fst_3661_);
v___x_3679_ = lean_box(0);
if (v_isShared_3660_ == 0)
{
lean_ctor_set(v___x_3659_, 0, v___x_3679_);
v___x_3681_ = v___x_3659_;
goto v_reusejp_3680_;
}
else
{
lean_object* v_reuseFailAlloc_3682_; 
v_reuseFailAlloc_3682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3682_, 0, v___x_3679_);
v___x_3681_ = v_reuseFailAlloc_3682_;
goto v_reusejp_3680_;
}
v_reusejp_3680_:
{
return v___x_3681_;
}
}
}
}
}
else
{
lean_object* v_a_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3693_; 
v_a_3686_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3688_ = v___x_3656_;
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_a_3686_);
lean_dec(v___x_3656_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3691_; 
if (v_isShared_3689_ == 0)
{
v___x_3691_ = v___x_3688_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v_a_3686_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
}
else
{
lean_object* v_a_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3701_; 
v_a_3694_ = lean_ctor_get(v___x_3650_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3650_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3696_ = v___x_3650_;
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_a_3694_);
lean_dec(v___x_3650_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v___x_3699_; 
if (v_isShared_3697_ == 0)
{
v___x_3699_ = v___x_3696_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_a_3694_);
v___x_3699_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
return v___x_3699_;
}
}
}
}
v___jp_3702_:
{
if (lean_obj_tag(v___y_3703_) == 0)
{
lean_dec_ref_known(v___y_3703_, 1);
goto v___jp_3648_;
}
else
{
lean_dec(v___x_3647_);
return v___y_3703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___boxed(lean_object* v___x_3709_, lean_object* v_args_3710_, lean_object* v_ty_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_){
_start:
{
lean_object* v_res_3717_; 
v_res_3717_ = l_Lean_Meta_checkImpossibleInstance___lam__0(v___x_3709_, v_args_3710_, v_ty_3711_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
lean_dec(v___y_3715_);
lean_dec_ref(v___y_3714_);
lean_dec(v___y_3713_);
lean_dec_ref(v___y_3712_);
lean_dec_ref(v_args_3710_);
lean_dec_ref(v___x_3709_);
return v_res_3717_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__3(lean_object* v_e_3718_){
_start:
{
lean_object* v___x_3719_; 
v___x_3719_ = l_Lean_Expr_cleanupAnnotations(v_e_3718_);
switch(lean_obj_tag(v___x_3719_))
{
case 7:
{
lean_object* v_body_3720_; uint8_t v_binderInfo_3721_; uint8_t v___x_3722_; 
v_body_3720_ = lean_ctor_get(v___x_3719_, 2);
lean_inc_ref(v_body_3720_);
v_binderInfo_3721_ = lean_ctor_get_uint8(v___x_3719_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_3719_, 3);
v___x_3722_ = l_Lean_BinderInfo_isInstImplicit(v_binderInfo_3721_);
if (v___x_3722_ == 0)
{
lean_object* v___x_3723_; uint8_t v___x_3724_; 
v___x_3723_ = lean_unsigned_to_nat(0u);
v___x_3724_ = lean_expr_has_loose_bvar(v_body_3720_, v___x_3723_);
if (v___x_3724_ == 0)
{
uint8_t v___x_3725_; 
lean_dec_ref(v_body_3720_);
v___x_3725_ = 1;
return v___x_3725_;
}
else
{
v_e_3718_ = v_body_3720_;
goto _start;
}
}
else
{
v_e_3718_ = v_body_3720_;
goto _start;
}
}
case 8:
{
lean_object* v_body_3728_; 
v_body_3728_ = lean_ctor_get(v___x_3719_, 3);
lean_inc_ref(v_body_3728_);
lean_dec_ref_known(v___x_3719_, 4);
v_e_3718_ = v_body_3728_;
goto _start;
}
default: 
{
uint8_t v___x_3730_; 
lean_dec_ref(v___x_3719_);
v___x_3730_ = 0;
return v___x_3730_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__3___boxed(lean_object* v_e_3731_){
_start:
{
uint8_t v_res_3732_; lean_object* v_r_3733_; 
v_res_3732_ = l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__3(v_e_3731_);
v_r_3733_ = lean_box(v_res_3732_);
return v_r_3733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance(lean_object* v_cinfo_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_){
_start:
{
lean_object* v___x_3740_; uint8_t v___x_3741_; 
v___x_3740_ = l_Lean_ConstantInfo_type(v_cinfo_3734_);
lean_inc_ref(v___x_3740_);
v___x_3741_ = l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__3(v___x_3740_);
if (v___x_3741_ == 0)
{
lean_object* v___x_3742_; lean_object* v___x_3743_; 
lean_dec_ref(v___x_3740_);
v___x_3742_ = lean_box(0);
v___x_3743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3743_, 0, v___x_3742_);
return v___x_3743_;
}
else
{
lean_object* v___f_3744_; uint8_t v___x_3745_; lean_object* v___x_3746_; 
lean_inc_ref(v___x_3740_);
v___f_3744_ = lean_alloc_closure((void*)(l_Lean_Meta_checkImpossibleInstance___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3744_, 0, v___x_3740_);
v___x_3745_ = 0;
v___x_3746_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__4___redArg(v___x_3740_, v___f_3744_, v___x_3745_, v___y_3735_, v___y_3736_, v___y_3737_, v___y_3738_);
return v___x_3746_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___boxed(lean_object* v_cinfo_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_){
_start:
{
lean_object* v_res_3753_; 
v_res_3753_ = l_Lean_Meta_checkImpossibleInstance(v_cinfo_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
lean_dec(v___y_3749_);
lean_dec_ref(v___y_3748_);
lean_dec_ref(v_cinfo_3747_);
return v_res_3753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0(lean_object* v_a_3754_, lean_object* v_as_3755_, size_t v_sz_3756_, size_t v_i_3757_, lean_object* v_b_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_){
_start:
{
lean_object* v___x_3764_; 
v___x_3764_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(v_a_3754_, v_as_3755_, v_sz_3756_, v_i_3757_, v_b_3758_, v___y_3759_, v___y_3761_, v___y_3762_);
return v___x_3764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___boxed(lean_object* v_a_3765_, lean_object* v_as_3766_, lean_object* v_sz_3767_, lean_object* v_i_3768_, lean_object* v_b_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_){
_start:
{
size_t v_sz_boxed_3775_; size_t v_i_boxed_3776_; lean_object* v_res_3777_; 
v_sz_boxed_3775_ = lean_unbox_usize(v_sz_3767_);
lean_dec(v_sz_3767_);
v_i_boxed_3776_ = lean_unbox_usize(v_i_3768_);
lean_dec(v_i_3768_);
v_res_3777_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0(v_a_3765_, v_as_3766_, v_sz_boxed_3775_, v_i_boxed_3776_, v_b_3769_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_);
lean_dec(v___y_3773_);
lean_dec_ref(v___y_3772_);
lean_dec(v___y_3771_);
lean_dec_ref(v___y_3770_);
lean_dec_ref(v_as_3766_);
lean_dec_ref(v_a_3765_);
return v_res_3777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2(lean_object* v_as_3778_, size_t v_sz_3779_, size_t v_i_3780_, lean_object* v_b_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_){
_start:
{
lean_object* v___x_3788_; 
v___x_3788_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(v_as_3778_, v_sz_3779_, v_i_3780_, v_b_3781_, v___y_3782_, v___y_3783_, v___y_3785_, v___y_3786_);
return v___x_3788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___boxed(lean_object* v_as_3789_, lean_object* v_sz_3790_, lean_object* v_i_3791_, lean_object* v_b_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_){
_start:
{
size_t v_sz_boxed_3799_; size_t v_i_boxed_3800_; lean_object* v_res_3801_; 
v_sz_boxed_3799_ = lean_unbox_usize(v_sz_3790_);
lean_dec(v_sz_3790_);
v_i_boxed_3800_ = lean_unbox_usize(v_i_3791_);
lean_dec(v_i_3791_);
v_res_3801_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2(v_as_3789_, v_sz_boxed_3799_, v_i_boxed_3800_, v_b_3792_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_, v___y_3797_);
lean_dec(v___y_3797_);
lean_dec_ref(v___y_3796_);
lean_dec(v___y_3795_);
lean_dec_ref(v___y_3794_);
lean_dec(v___y_3793_);
lean_dec_ref(v_as_3789_);
return v_res_3801_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3803_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__0));
v___x_3804_ = l_Lean_stringToMessageData(v___x_3803_);
return v___x_3804_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3806_; lean_object* v___x_3807_; 
v___x_3806_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__2));
v___x_3807_ = l_Lean_stringToMessageData(v___x_3806_);
return v___x_3807_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; 
v___x_3809_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__4));
v___x_3810_ = l_Lean_stringToMessageData(v___x_3809_);
return v___x_3810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0(lean_object* v_c_3811_, lean_object* v_x_3812_, lean_object* v_target_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_){
_start:
{
lean_object* v___x_3819_; 
lean_inc_ref(v_target_3813_);
v___x_3819_ = l_Lean_Meta_isClass_x3f(v_target_3813_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_);
if (lean_obj_tag(v___x_3819_) == 0)
{
lean_object* v_a_3820_; lean_object* v___x_3822_; uint8_t v_isShared_3823_; uint8_t v_isSharedCheck_3838_; 
v_a_3820_ = lean_ctor_get(v___x_3819_, 0);
v_isSharedCheck_3838_ = !lean_is_exclusive(v___x_3819_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3822_ = v___x_3819_;
v_isShared_3823_ = v_isSharedCheck_3838_;
goto v_resetjp_3821_;
}
else
{
lean_inc(v_a_3820_);
lean_dec(v___x_3819_);
v___x_3822_ = lean_box(0);
v_isShared_3823_ = v_isSharedCheck_3838_;
goto v_resetjp_3821_;
}
v_resetjp_3821_:
{
if (lean_obj_tag(v_a_3820_) == 0)
{
lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; 
lean_del_object(v___x_3822_);
v___x_3824_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__1, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__1_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__1);
v___x_3825_ = l_Lean_MessageData_ofExpr(v_c_3811_);
v___x_3826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3826_, 0, v___x_3824_);
lean_ctor_set(v___x_3826_, 1, v___x_3825_);
v___x_3827_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__3, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__3_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__3);
v___x_3828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3828_, 0, v___x_3826_);
lean_ctor_set(v___x_3828_, 1, v___x_3827_);
v___x_3829_ = l_Lean_MessageData_ofExpr(v_target_3813_);
v___x_3830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3828_);
lean_ctor_set(v___x_3830_, 1, v___x_3829_);
v___x_3831_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__5, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__5_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__5);
v___x_3832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3830_);
lean_ctor_set(v___x_3832_, 1, v___x_3831_);
v___x_3833_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_3832_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_);
return v___x_3833_;
}
else
{
lean_object* v___x_3834_; lean_object* v___x_3836_; 
lean_dec_ref_known(v_a_3820_, 1);
lean_dec_ref(v_target_3813_);
lean_dec_ref(v_c_3811_);
v___x_3834_ = lean_box(0);
if (v_isShared_3823_ == 0)
{
lean_ctor_set(v___x_3822_, 0, v___x_3834_);
v___x_3836_ = v___x_3822_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v___x_3834_);
v___x_3836_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
return v___x_3836_;
}
}
}
}
else
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3846_; 
lean_dec_ref(v_target_3813_);
lean_dec_ref(v_c_3811_);
v_a_3839_ = lean_ctor_get(v___x_3819_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3819_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3841_ = v___x_3819_;
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3819_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v___x_3844_; 
if (v_isShared_3842_ == 0)
{
v___x_3844_ = v___x_3841_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v_a_3839_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
return v___x_3844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___boxed(lean_object* v_c_3847_, lean_object* v_x_3848_, lean_object* v_target_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_){
_start:
{
lean_object* v_res_3855_; 
v_res_3855_ = l_Lean_Meta_checkNonClassInstance___lam__0(v_c_3847_, v_x_3848_, v_target_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
lean_dec(v___y_3853_);
lean_dec_ref(v___y_3852_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
lean_dec_ref(v_x_3848_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance(lean_object* v_c_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_){
_start:
{
lean_object* v___f_3862_; lean_object* v___x_3863_; 
lean_inc_ref(v_c_3856_);
v___f_3862_ = lean_alloc_closure((void*)(l_Lean_Meta_checkNonClassInstance___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3862_, 0, v_c_3856_);
lean_inc(v___y_3860_);
lean_inc_ref(v___y_3859_);
lean_inc(v___y_3858_);
lean_inc_ref(v___y_3857_);
v___x_3863_ = lean_infer_type(v_c_3856_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_);
if (lean_obj_tag(v___x_3863_) == 0)
{
lean_object* v_a_3864_; uint8_t v___x_3865_; lean_object* v___x_3866_; 
v_a_3864_ = lean_ctor_get(v___x_3863_, 0);
lean_inc(v_a_3864_);
lean_dec_ref_known(v___x_3863_, 1);
v___x_3865_ = 0;
v___x_3866_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_3864_, v___f_3862_, v___x_3865_, v___x_3865_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_);
return v___x_3866_;
}
else
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3874_; 
lean_dec_ref(v___f_3862_);
v_a_3867_ = lean_ctor_get(v___x_3863_, 0);
v_isSharedCheck_3874_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3874_ == 0)
{
v___x_3869_ = v___x_3863_;
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v___x_3863_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3872_; 
if (v_isShared_3870_ == 0)
{
v___x_3872_ = v___x_3869_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v_a_3867_);
v___x_3872_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
return v___x_3872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___boxed(lean_object* v_c_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_Lean_Meta_checkNonClassInstance(v_c_3875_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_);
lean_dec(v___y_3879_);
lean_dec_ref(v___y_3878_);
lean_dec(v___y_3877_);
lean_dec_ref(v___y_3876_);
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg(lean_object* v_declName_3892_, lean_object* v___y_3893_){
_start:
{
lean_object* v___x_3895_; lean_object* v_env_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3895_ = lean_st_ref_get(v___y_3893_);
v_env_3896_ = lean_ctor_get(v___x_3895_, 0);
lean_inc_ref(v_env_3896_);
lean_dec(v___x_3895_);
v___x_3897_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_3896_, v_declName_3892_);
v___x_3898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3897_);
return v___x_3898_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg___boxed(lean_object* v_declName_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_){
_start:
{
lean_object* v_res_3902_; 
v_res_3902_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg(v_declName_3899_, v___y_3900_);
lean_dec(v___y_3900_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1(lean_object* v_declName_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_){
_start:
{
lean_object* v___x_3909_; 
v___x_3909_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg(v_declName_3903_, v___y_3907_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___boxed(lean_object* v_declName_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1(v_declName_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
lean_dec(v___y_3914_);
lean_dec_ref(v___y_3913_);
lean_dec(v___y_3912_);
lean_dec_ref(v___y_3911_);
return v_res_3916_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_3917_; lean_object* v___x_3918_; 
v___x_3917_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_3918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3918_, 0, v___x_3917_);
return v___x_3918_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3919_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0);
v___x_3920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3919_);
lean_ctor_set(v___x_3920_, 1, v___x_3919_);
return v___x_3920_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_3921_; lean_object* v___x_3922_; 
v___x_3921_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__0);
v___x_3922_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3921_);
lean_ctor_set(v___x_3922_, 1, v___x_3921_);
lean_ctor_set(v___x_3922_, 2, v___x_3921_);
lean_ctor_set(v___x_3922_, 3, v___x_3921_);
lean_ctor_set(v___x_3922_, 4, v___x_3921_);
lean_ctor_set(v___x_3922_, 5, v___x_3921_);
return v___x_3922_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg(lean_object* v_ext_3923_, lean_object* v_b_3924_, uint8_t v_kind_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_){
_start:
{
lean_object* v_toCold_3930_; lean_object* v_currNamespace_3931_; lean_object* v___x_3932_; lean_object* v_env_3933_; lean_object* v_nextMacroScope_3934_; lean_object* v_ngen_3935_; lean_object* v_auxDeclNGen_3936_; lean_object* v_traceState_3937_; lean_object* v_messages_3938_; lean_object* v_infoState_3939_; lean_object* v_snapshotTasks_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3967_; 
v_toCold_3930_ = lean_ctor_get(v___y_3927_, 0);
v_currNamespace_3931_ = lean_ctor_get(v_toCold_3930_, 4);
v___x_3932_ = lean_st_ref_take(v___y_3928_);
v_env_3933_ = lean_ctor_get(v___x_3932_, 0);
v_nextMacroScope_3934_ = lean_ctor_get(v___x_3932_, 1);
v_ngen_3935_ = lean_ctor_get(v___x_3932_, 2);
v_auxDeclNGen_3936_ = lean_ctor_get(v___x_3932_, 3);
v_traceState_3937_ = lean_ctor_get(v___x_3932_, 4);
v_messages_3938_ = lean_ctor_get(v___x_3932_, 6);
v_infoState_3939_ = lean_ctor_get(v___x_3932_, 7);
v_snapshotTasks_3940_ = lean_ctor_get(v___x_3932_, 8);
v_isSharedCheck_3967_ = !lean_is_exclusive(v___x_3932_);
if (v_isSharedCheck_3967_ == 0)
{
lean_object* v_unused_3968_; 
v_unused_3968_ = lean_ctor_get(v___x_3932_, 5);
lean_dec(v_unused_3968_);
v___x_3942_ = v___x_3932_;
v_isShared_3943_ = v_isSharedCheck_3967_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_snapshotTasks_3940_);
lean_inc(v_infoState_3939_);
lean_inc(v_messages_3938_);
lean_inc(v_traceState_3937_);
lean_inc(v_auxDeclNGen_3936_);
lean_inc(v_ngen_3935_);
lean_inc(v_nextMacroScope_3934_);
lean_inc(v_env_3933_);
lean_dec(v___x_3932_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3967_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3947_; 
lean_inc(v_currNamespace_3931_);
v___x_3944_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_3933_, v_ext_3923_, v_b_3924_, v_kind_3925_, v_currNamespace_3931_);
v___x_3945_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1);
if (v_isShared_3943_ == 0)
{
lean_ctor_set(v___x_3942_, 5, v___x_3945_);
lean_ctor_set(v___x_3942_, 0, v___x_3944_);
v___x_3947_ = v___x_3942_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v___x_3944_);
lean_ctor_set(v_reuseFailAlloc_3966_, 1, v_nextMacroScope_3934_);
lean_ctor_set(v_reuseFailAlloc_3966_, 2, v_ngen_3935_);
lean_ctor_set(v_reuseFailAlloc_3966_, 3, v_auxDeclNGen_3936_);
lean_ctor_set(v_reuseFailAlloc_3966_, 4, v_traceState_3937_);
lean_ctor_set(v_reuseFailAlloc_3966_, 5, v___x_3945_);
lean_ctor_set(v_reuseFailAlloc_3966_, 6, v_messages_3938_);
lean_ctor_set(v_reuseFailAlloc_3966_, 7, v_infoState_3939_);
lean_ctor_set(v_reuseFailAlloc_3966_, 8, v_snapshotTasks_3940_);
v___x_3947_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v_mctx_3950_; lean_object* v_zetaDeltaFVarIds_3951_; lean_object* v_postponed_3952_; lean_object* v_diag_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3964_; 
v___x_3948_ = lean_st_ref_put(v___y_3928_, v___x_3947_);
v___x_3949_ = lean_st_ref_take(v___y_3926_);
v_mctx_3950_ = lean_ctor_get(v___x_3949_, 0);
v_zetaDeltaFVarIds_3951_ = lean_ctor_get(v___x_3949_, 2);
v_postponed_3952_ = lean_ctor_get(v___x_3949_, 3);
v_diag_3953_ = lean_ctor_get(v___x_3949_, 4);
v_isSharedCheck_3964_ = !lean_is_exclusive(v___x_3949_);
if (v_isSharedCheck_3964_ == 0)
{
lean_object* v_unused_3965_; 
v_unused_3965_ = lean_ctor_get(v___x_3949_, 1);
lean_dec(v_unused_3965_);
v___x_3955_ = v___x_3949_;
v_isShared_3956_ = v_isSharedCheck_3964_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_diag_3953_);
lean_inc(v_postponed_3952_);
lean_inc(v_zetaDeltaFVarIds_3951_);
lean_inc(v_mctx_3950_);
lean_dec(v___x_3949_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3964_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3960_; 
v___x_3957_ = lean_box(0);
v___x_3958_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2);
if (v_isShared_3956_ == 0)
{
lean_ctor_set(v___x_3955_, 1, v___x_3958_);
v___x_3960_ = v___x_3955_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v_mctx_3950_);
lean_ctor_set(v_reuseFailAlloc_3963_, 1, v___x_3958_);
lean_ctor_set(v_reuseFailAlloc_3963_, 2, v_zetaDeltaFVarIds_3951_);
lean_ctor_set(v_reuseFailAlloc_3963_, 3, v_postponed_3952_);
lean_ctor_set(v_reuseFailAlloc_3963_, 4, v_diag_3953_);
v___x_3960_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3961_ = lean_st_ref_put(v___y_3926_, v___x_3960_);
v___x_3962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3957_);
return v___x_3962_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___boxed(lean_object* v_ext_3969_, lean_object* v_b_3970_, lean_object* v_kind_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_){
_start:
{
uint8_t v_kind_boxed_3976_; lean_object* v_res_3977_; 
v_kind_boxed_3976_ = lean_unbox(v_kind_3971_);
v_res_3977_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg(v_ext_3969_, v_b_3970_, v_kind_boxed_3976_, v___y_3972_, v___y_3973_, v___y_3974_);
lean_dec(v___y_3974_);
lean_dec_ref(v___y_3973_);
lean_dec(v___y_3972_);
return v_res_3977_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2(lean_object* v_00_u03b1_3978_, lean_object* v_00_u03b2_3979_, lean_object* v_00_u03c3_3980_, lean_object* v_ext_3981_, lean_object* v_b_3982_, uint8_t v_kind_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v___x_3989_; 
v___x_3989_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg(v_ext_3981_, v_b_3982_, v_kind_3983_, v___y_3985_, v___y_3986_, v___y_3987_);
return v___x_3989_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___boxed(lean_object* v_00_u03b1_3990_, lean_object* v_00_u03b2_3991_, lean_object* v_00_u03c3_3992_, lean_object* v_ext_3993_, lean_object* v_b_3994_, lean_object* v_kind_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_){
_start:
{
uint8_t v_kind_boxed_4001_; lean_object* v_res_4002_; 
v_kind_boxed_4001_ = lean_unbox(v_kind_3995_);
v_res_4002_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2(v_00_u03b1_3990_, v_00_u03b2_3991_, v_00_u03c3_3992_, v_ext_3993_, v_b_3994_, v_kind_boxed_4001_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_);
lean_dec(v___y_3999_);
lean_dec_ref(v___y_3998_);
lean_dec(v___y_3997_);
lean_dec_ref(v___y_3996_);
return v_res_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg(lean_object* v_declName_4003_, lean_object* v___y_4004_){
_start:
{
lean_object* v___x_4006_; lean_object* v_env_4007_; uint8_t v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; 
v___x_4006_ = lean_st_ref_get(v___y_4004_);
v_env_4007_ = lean_ctor_get(v___x_4006_, 0);
lean_inc_ref(v_env_4007_);
lean_dec(v___x_4006_);
v___x_4008_ = l_Lean_getReducibilityStatusCore(v_env_4007_, v_declName_4003_);
v___x_4009_ = lean_box(v___x_4008_);
v___x_4010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4010_, 0, v___x_4009_);
return v___x_4010_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg___boxed(lean_object* v_declName_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_){
_start:
{
lean_object* v_res_4014_; 
v_res_4014_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg(v_declName_4011_, v___y_4012_);
lean_dec(v___y_4012_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3(lean_object* v_declName_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_){
_start:
{
lean_object* v___x_4021_; 
v___x_4021_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg(v_declName_4015_, v___y_4019_);
return v___x_4021_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___boxed(lean_object* v_declName_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_){
_start:
{
lean_object* v_res_4028_; 
v_res_4028_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3(v_declName_4022_, v___y_4023_, v___y_4024_, v___y_4025_, v___y_4026_);
lean_dec(v___y_4026_);
lean_dec_ref(v___y_4025_);
lean_dec(v___y_4024_);
lean_dec_ref(v___y_4023_);
return v_res_4028_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg(lean_object* v_ref_4029_, lean_object* v_msg_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_){
_start:
{
lean_object* v_toCold_4036_; lean_object* v_currRecDepth_4037_; lean_object* v_ref_4038_; uint8_t v_diag_4039_; uint8_t v_suppressElabErrors_4040_; lean_object* v_ref_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; 
v_toCold_4036_ = lean_ctor_get(v___y_4033_, 0);
v_currRecDepth_4037_ = lean_ctor_get(v___y_4033_, 1);
v_ref_4038_ = lean_ctor_get(v___y_4033_, 2);
v_diag_4039_ = lean_ctor_get_uint8(v___y_4033_, sizeof(void*)*3);
v_suppressElabErrors_4040_ = lean_ctor_get_uint8(v___y_4033_, sizeof(void*)*3 + 1);
v_ref_4041_ = l_Lean_replaceRef(v_ref_4029_, v_ref_4038_);
lean_inc(v_currRecDepth_4037_);
lean_inc_ref(v_toCold_4036_);
v___x_4042_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4042_, 0, v_toCold_4036_);
lean_ctor_set(v___x_4042_, 1, v_currRecDepth_4037_);
lean_ctor_set(v___x_4042_, 2, v_ref_4041_);
lean_ctor_set_uint8(v___x_4042_, sizeof(void*)*3, v_diag_4039_);
lean_ctor_set_uint8(v___x_4042_, sizeof(void*)*3 + 1, v_suppressElabErrors_4040_);
v___x_4043_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_msg_4030_, v___y_4031_, v___y_4032_, v___x_4042_, v___y_4034_);
lean_dec_ref_known(v___x_4042_, 3);
return v___x_4043_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg___boxed(lean_object* v_ref_4044_, lean_object* v_msg_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg(v_ref_4044_, v_msg_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec(v___y_4047_);
lean_dec_ref(v___y_4046_);
lean_dec(v_ref_4044_);
return v_res_4051_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4052_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_4053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4053_, 0, v___x_4052_);
return v___x_4053_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; 
v___x_4054_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0);
v___x_4055_ = lean_unsigned_to_nat(0u);
v___x_4056_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4056_, 0, v___x_4055_);
lean_ctor_set(v___x_4056_, 1, v___x_4055_);
lean_ctor_set(v___x_4056_, 2, v___x_4055_);
lean_ctor_set(v___x_4056_, 3, v___x_4055_);
lean_ctor_set(v___x_4056_, 4, v___x_4054_);
lean_ctor_set(v___x_4056_, 5, v___x_4054_);
lean_ctor_set(v___x_4056_, 6, v___x_4054_);
lean_ctor_set(v___x_4056_, 7, v___x_4054_);
lean_ctor_set(v___x_4056_, 8, v___x_4054_);
lean_ctor_set(v___x_4056_, 9, v___x_4054_);
lean_ctor_set(v___x_4056_, 10, v___x_4054_);
return v___x_4056_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; 
v___x_4057_ = lean_unsigned_to_nat(32u);
v___x_4058_ = lean_mk_empty_array_with_capacity(v___x_4057_);
v___x_4059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4058_);
return v___x_4059_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3(void){
_start:
{
size_t v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; 
v___x_4060_ = ((size_t)5ULL);
v___x_4061_ = lean_unsigned_to_nat(0u);
v___x_4062_ = lean_unsigned_to_nat(32u);
v___x_4063_ = lean_mk_empty_array_with_capacity(v___x_4062_);
v___x_4064_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_4065_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
lean_ctor_set(v___x_4065_, 1, v___x_4063_);
lean_ctor_set(v___x_4065_, 2, v___x_4061_);
lean_ctor_set(v___x_4065_, 3, v___x_4061_);
lean_ctor_set_usize(v___x_4065_, 4, v___x_4060_);
return v___x_4065_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; 
v___x_4066_ = lean_box(1);
v___x_4067_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3);
v___x_4068_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0);
v___x_4069_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
lean_ctor_set(v___x_4069_, 1, v___x_4067_);
lean_ctor_set(v___x_4069_, 2, v___x_4066_);
return v___x_4069_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6(void){
_start:
{
lean_object* v___x_4071_; lean_object* v___x_4072_; 
v___x_4071_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5));
v___x_4072_ = l_Lean_stringToMessageData(v___x_4071_);
return v___x_4072_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8(void){
_start:
{
lean_object* v___x_4074_; lean_object* v___x_4075_; 
v___x_4074_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7));
v___x_4075_ = l_Lean_stringToMessageData(v___x_4074_);
return v___x_4075_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10(void){
_start:
{
lean_object* v___x_4077_; lean_object* v___x_4078_; 
v___x_4077_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9));
v___x_4078_ = l_Lean_stringToMessageData(v___x_4077_);
return v___x_4078_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12(void){
_start:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4080_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11));
v___x_4081_ = l_Lean_stringToMessageData(v___x_4080_);
return v___x_4081_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14(void){
_start:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4083_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13));
v___x_4084_ = l_Lean_stringToMessageData(v___x_4083_);
return v___x_4084_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16(void){
_start:
{
lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4086_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15));
v___x_4087_ = l_Lean_stringToMessageData(v___x_4086_);
return v___x_4087_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18(void){
_start:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4089_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17));
v___x_4090_ = l_Lean_stringToMessageData(v___x_4089_);
return v___x_4090_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(lean_object* v_msg_4091_, lean_object* v_declHint_4092_, lean_object* v___y_4093_){
_start:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v_env_4097_; uint8_t v___x_4098_; 
v___x_4095_ = lean_box(0);
v___x_4096_ = lean_st_ref_get(v___y_4093_);
v_env_4097_ = lean_ctor_get(v___x_4096_, 0);
lean_inc_ref(v_env_4097_);
lean_dec(v___x_4096_);
v___x_4098_ = l_Lean_Name_isAnonymous(v_declHint_4092_);
if (v___x_4098_ == 0)
{
uint8_t v_isExporting_4099_; 
v_isExporting_4099_ = lean_ctor_get_uint8(v_env_4097_, sizeof(void*)*8);
if (v_isExporting_4099_ == 0)
{
lean_object* v___x_4100_; 
lean_dec_ref(v_env_4097_);
lean_dec(v_declHint_4092_);
v___x_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4100_, 0, v_msg_4091_);
return v___x_4100_;
}
else
{
lean_object* v___x_4101_; uint8_t v___x_4102_; 
lean_inc_ref(v_env_4097_);
v___x_4101_ = l_Lean_Environment_setExporting(v_env_4097_, v___x_4098_);
lean_inc(v_declHint_4092_);
lean_inc_ref(v___x_4101_);
v___x_4102_ = l_Lean_Environment_contains(v___x_4101_, v_declHint_4092_, v_isExporting_4099_);
if (v___x_4102_ == 0)
{
lean_object* v___x_4103_; 
lean_dec_ref(v___x_4101_);
lean_dec_ref(v_env_4097_);
lean_dec(v_declHint_4092_);
v___x_4103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4103_, 0, v_msg_4091_);
return v___x_4103_;
}
else
{
lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v_c_4109_; lean_object* v___x_4110_; 
v___x_4104_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_4105_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4);
v___x_4106_ = l_Lean_Options_empty;
v___x_4107_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4101_);
lean_ctor_set(v___x_4107_, 1, v___x_4104_);
lean_ctor_set(v___x_4107_, 2, v___x_4105_);
lean_ctor_set(v___x_4107_, 3, v___x_4106_);
lean_inc(v_declHint_4092_);
v___x_4108_ = l_Lean_MessageData_ofConstName(v_declHint_4092_, v___x_4098_);
v_c_4109_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_4109_, 0, v___x_4107_);
lean_ctor_set(v_c_4109_, 1, v___x_4108_);
v___x_4110_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4097_, v_declHint_4092_);
if (lean_obj_tag(v___x_4110_) == 0)
{
lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; 
lean_dec_ref(v_env_4097_);
lean_dec(v_declHint_4092_);
v___x_4111_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6);
v___x_4112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4112_, 0, v___x_4111_);
lean_ctor_set(v___x_4112_, 1, v_c_4109_);
v___x_4113_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8);
v___x_4114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4112_);
lean_ctor_set(v___x_4114_, 1, v___x_4113_);
v___x_4115_ = l_Lean_MessageData_note(v___x_4114_);
v___x_4116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4116_, 0, v_msg_4091_);
lean_ctor_set(v___x_4116_, 1, v___x_4115_);
v___x_4117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4116_);
return v___x_4117_;
}
else
{
lean_object* v_val_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4152_; 
v_val_4118_ = lean_ctor_get(v___x_4110_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v___x_4110_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4120_ = v___x_4110_;
v_isShared_4121_ = v_isSharedCheck_4152_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_val_4118_);
lean_dec(v___x_4110_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4152_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v_mod_4124_; uint8_t v___x_4125_; 
v___x_4122_ = l_Lean_Environment_header(v_env_4097_);
lean_dec_ref(v_env_4097_);
v___x_4123_ = l_Lean_EnvironmentHeader_moduleNames(v___x_4122_);
v_mod_4124_ = lean_array_get(v___x_4095_, v___x_4123_, v_val_4118_);
lean_dec(v_val_4118_);
lean_dec_ref(v___x_4123_);
v___x_4125_ = l_Lean_isPrivateName(v_declHint_4092_);
lean_dec(v_declHint_4092_);
if (v___x_4125_ == 0)
{
lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4137_; 
v___x_4126_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10);
v___x_4127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4127_, 0, v___x_4126_);
lean_ctor_set(v___x_4127_, 1, v_c_4109_);
v___x_4128_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12);
v___x_4129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4129_, 0, v___x_4127_);
lean_ctor_set(v___x_4129_, 1, v___x_4128_);
v___x_4130_ = l_Lean_MessageData_ofName(v_mod_4124_);
v___x_4131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4131_, 0, v___x_4129_);
lean_ctor_set(v___x_4131_, 1, v___x_4130_);
v___x_4132_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14);
v___x_4133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4133_, 0, v___x_4131_);
lean_ctor_set(v___x_4133_, 1, v___x_4132_);
v___x_4134_ = l_Lean_MessageData_note(v___x_4133_);
v___x_4135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4135_, 0, v_msg_4091_);
lean_ctor_set(v___x_4135_, 1, v___x_4134_);
if (v_isShared_4121_ == 0)
{
lean_ctor_set_tag(v___x_4120_, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4135_);
v___x_4137_ = v___x_4120_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v___x_4135_);
v___x_4137_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
return v___x_4137_;
}
}
else
{
lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4150_; 
v___x_4139_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6);
v___x_4140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4140_, 0, v___x_4139_);
lean_ctor_set(v___x_4140_, 1, v_c_4109_);
v___x_4141_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16);
v___x_4142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4142_, 0, v___x_4140_);
lean_ctor_set(v___x_4142_, 1, v___x_4141_);
v___x_4143_ = l_Lean_MessageData_ofName(v_mod_4124_);
v___x_4144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4144_, 0, v___x_4142_);
lean_ctor_set(v___x_4144_, 1, v___x_4143_);
v___x_4145_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18);
v___x_4146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4146_, 0, v___x_4144_);
lean_ctor_set(v___x_4146_, 1, v___x_4145_);
v___x_4147_ = l_Lean_MessageData_note(v___x_4146_);
v___x_4148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4148_, 0, v_msg_4091_);
lean_ctor_set(v___x_4148_, 1, v___x_4147_);
if (v_isShared_4121_ == 0)
{
lean_ctor_set_tag(v___x_4120_, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4148_);
v___x_4150_ = v___x_4120_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v___x_4148_);
v___x_4150_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
return v___x_4150_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4153_; 
lean_dec_ref(v_env_4097_);
lean_dec(v_declHint_4092_);
v___x_4153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4153_, 0, v_msg_4091_);
return v___x_4153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___boxed(lean_object* v_msg_4154_, lean_object* v_declHint_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_){
_start:
{
lean_object* v_res_4158_; 
v_res_4158_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(v_msg_4154_, v_declHint_4155_, v___y_4156_);
lean_dec(v___y_4156_);
return v_res_4158_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9(lean_object* v_msg_4159_, lean_object* v_declHint_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_){
_start:
{
lean_object* v___x_4166_; lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4176_; 
v___x_4166_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(v_msg_4159_, v_declHint_4160_, v___y_4164_);
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
v_isSharedCheck_4176_ = !lean_is_exclusive(v___x_4166_);
if (v_isSharedCheck_4176_ == 0)
{
v___x_4169_ = v___x_4166_;
v_isShared_4170_ = v_isSharedCheck_4176_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v___x_4166_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4176_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4174_; 
v___x_4171_ = l_Lean_unknownIdentifierMessageTag;
v___x_4172_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4172_, 0, v___x_4171_);
lean_ctor_set(v___x_4172_, 1, v_a_4167_);
if (v_isShared_4170_ == 0)
{
lean_ctor_set(v___x_4169_, 0, v___x_4172_);
v___x_4174_ = v___x_4169_;
goto v_reusejp_4173_;
}
else
{
lean_object* v_reuseFailAlloc_4175_; 
v_reuseFailAlloc_4175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4175_, 0, v___x_4172_);
v___x_4174_ = v_reuseFailAlloc_4175_;
goto v_reusejp_4173_;
}
v_reusejp_4173_:
{
return v___x_4174_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_4177_, lean_object* v_declHint_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_){
_start:
{
lean_object* v_res_4184_; 
v_res_4184_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9(v_msg_4177_, v_declHint_4178_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_);
lean_dec(v___y_4182_);
lean_dec_ref(v___y_4181_);
lean_dec(v___y_4180_);
lean_dec_ref(v___y_4179_);
return v_res_4184_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg(lean_object* v_ref_4185_, lean_object* v_msg_4186_, lean_object* v_declHint_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_){
_start:
{
lean_object* v___x_4193_; lean_object* v_a_4194_; lean_object* v___x_4195_; 
v___x_4193_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9(v_msg_4186_, v_declHint_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_);
v_a_4194_ = lean_ctor_get(v___x_4193_, 0);
lean_inc(v_a_4194_);
lean_dec_ref(v___x_4193_);
v___x_4195_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg(v_ref_4185_, v_a_4194_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_ref_4196_, lean_object* v_msg_4197_, lean_object* v_declHint_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_){
_start:
{
lean_object* v_res_4204_; 
v_res_4204_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg(v_ref_4196_, v_msg_4197_, v_declHint_4198_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_);
lean_dec(v___y_4202_);
lean_dec_ref(v___y_4201_);
lean_dec(v___y_4200_);
lean_dec_ref(v___y_4199_);
lean_dec(v_ref_4196_);
return v_res_4204_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_4206_; lean_object* v___x_4207_; 
v___x_4206_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__0));
v___x_4207_ = l_Lean_stringToMessageData(v___x_4206_);
return v___x_4207_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg(lean_object* v_ref_4208_, lean_object* v_constName_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_){
_start:
{
lean_object* v___x_4215_; uint8_t v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; 
v___x_4215_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1);
v___x_4216_ = 0;
lean_inc(v_constName_4209_);
v___x_4217_ = l_Lean_MessageData_ofConstName(v_constName_4209_, v___x_4216_);
v___x_4218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4218_, 0, v___x_4215_);
lean_ctor_set(v___x_4218_, 1, v___x_4217_);
v___x_4219_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_4220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4218_);
lean_ctor_set(v___x_4220_, 1, v___x_4219_);
v___x_4221_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg(v_ref_4208_, v___x_4220_, v_constName_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_);
return v___x_4221_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___boxed(lean_object* v_ref_4222_, lean_object* v_constName_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_){
_start:
{
lean_object* v_res_4229_; 
v_res_4229_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg(v_ref_4222_, v_constName_4223_, v___y_4224_, v___y_4225_, v___y_4226_, v___y_4227_);
lean_dec(v___y_4227_);
lean_dec_ref(v___y_4226_);
lean_dec(v___y_4225_);
lean_dec_ref(v___y_4224_);
lean_dec(v_ref_4222_);
return v_res_4229_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(lean_object* v_constName_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v_ref_4236_; lean_object* v___x_4237_; 
v_ref_4236_ = lean_ctor_get(v___y_4233_, 2);
v___x_4237_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg(v_ref_4236_, v_constName_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg___boxed(lean_object* v_constName_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_){
_start:
{
lean_object* v_res_4244_; 
v_res_4244_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(v_constName_4238_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_);
lean_dec(v___y_4242_);
lean_dec_ref(v___y_4241_);
lean_dec(v___y_4240_);
lean_dec_ref(v___y_4239_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4(lean_object* v_constName_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_){
_start:
{
lean_object* v___x_4251_; lean_object* v_env_4252_; uint8_t v___x_4253_; lean_object* v___x_4254_; 
v___x_4251_ = lean_st_ref_get(v___y_4249_);
v_env_4252_ = lean_ctor_get(v___x_4251_, 0);
lean_inc_ref(v_env_4252_);
lean_dec(v___x_4251_);
v___x_4253_ = 0;
lean_inc(v_constName_4245_);
v___x_4254_ = l_Lean_Environment_find_x3f(v_env_4252_, v_constName_4245_, v___x_4253_);
if (lean_obj_tag(v___x_4254_) == 0)
{
lean_object* v___x_4255_; 
v___x_4255_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(v_constName_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_);
return v___x_4255_;
}
else
{
lean_object* v_val_4256_; lean_object* v___x_4258_; uint8_t v_isShared_4259_; uint8_t v_isSharedCheck_4263_; 
lean_dec(v_constName_4245_);
v_val_4256_ = lean_ctor_get(v___x_4254_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4258_ = v___x_4254_;
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
else
{
lean_inc(v_val_4256_);
lean_dec(v___x_4254_);
v___x_4258_ = lean_box(0);
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
v_resetjp_4257_:
{
lean_object* v___x_4261_; 
if (v_isShared_4259_ == 0)
{
lean_ctor_set_tag(v___x_4258_, 0);
v___x_4261_ = v___x_4258_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v_val_4256_);
v___x_4261_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
return v___x_4261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4___boxed(lean_object* v_constName_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_){
_start:
{
lean_object* v_res_4270_; 
v_res_4270_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4(v_constName_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
lean_dec(v___y_4266_);
lean_dec_ref(v___y_4265_);
return v_res_4270_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(lean_object* v_constName_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_){
_start:
{
lean_object* v___x_4277_; lean_object* v_env_4278_; uint8_t v___x_4279_; lean_object* v___x_4280_; 
v___x_4277_ = lean_st_ref_get(v___y_4275_);
v_env_4278_ = lean_ctor_get(v___x_4277_, 0);
lean_inc_ref(v_env_4278_);
lean_dec(v___x_4277_);
v___x_4279_ = 0;
lean_inc(v_constName_4271_);
v___x_4280_ = l_Lean_Environment_findConstVal_x3f(v_env_4278_, v_constName_4271_, v___x_4279_);
if (lean_obj_tag(v___x_4280_) == 0)
{
lean_object* v___x_4281_; 
v___x_4281_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(v_constName_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
return v___x_4281_;
}
else
{
lean_object* v_val_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4289_; 
lean_dec(v_constName_4271_);
v_val_4282_ = lean_ctor_get(v___x_4280_, 0);
v_isSharedCheck_4289_ = !lean_is_exclusive(v___x_4280_);
if (v_isSharedCheck_4289_ == 0)
{
v___x_4284_ = v___x_4280_;
v_isShared_4285_ = v_isSharedCheck_4289_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_val_4282_);
lean_dec(v___x_4280_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4289_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
lean_object* v___x_4287_; 
if (v_isShared_4285_ == 0)
{
lean_ctor_set_tag(v___x_4284_, 0);
v___x_4287_ = v___x_4284_;
goto v_reusejp_4286_;
}
else
{
lean_object* v_reuseFailAlloc_4288_; 
v_reuseFailAlloc_4288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4288_, 0, v_val_4282_);
v___x_4287_ = v_reuseFailAlloc_4288_;
goto v_reusejp_4286_;
}
v_reusejp_4286_:
{
return v___x_4287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0___boxed(lean_object* v_constName_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_){
_start:
{
lean_object* v_res_4296_; 
v_res_4296_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(v_constName_4290_, v___y_4291_, v___y_4292_, v___y_4293_, v___y_4294_);
lean_dec(v___y_4294_);
lean_dec_ref(v___y_4293_);
lean_dec(v___y_4292_);
lean_dec_ref(v___y_4291_);
return v_res_4296_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(lean_object* v_a_4297_, lean_object* v_a_4298_){
_start:
{
if (lean_obj_tag(v_a_4297_) == 0)
{
lean_object* v___x_4299_; 
v___x_4299_ = l_List_reverse___redArg(v_a_4298_);
return v___x_4299_;
}
else
{
lean_object* v_head_4300_; lean_object* v_tail_4301_; lean_object* v___x_4303_; uint8_t v_isShared_4304_; uint8_t v_isSharedCheck_4310_; 
v_head_4300_ = lean_ctor_get(v_a_4297_, 0);
v_tail_4301_ = lean_ctor_get(v_a_4297_, 1);
v_isSharedCheck_4310_ = !lean_is_exclusive(v_a_4297_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4303_ = v_a_4297_;
v_isShared_4304_ = v_isSharedCheck_4310_;
goto v_resetjp_4302_;
}
else
{
lean_inc(v_tail_4301_);
lean_inc(v_head_4300_);
lean_dec(v_a_4297_);
v___x_4303_ = lean_box(0);
v_isShared_4304_ = v_isSharedCheck_4310_;
goto v_resetjp_4302_;
}
v_resetjp_4302_:
{
lean_object* v___x_4305_; lean_object* v___x_4307_; 
v___x_4305_ = l_Lean_mkLevelParam(v_head_4300_);
if (v_isShared_4304_ == 0)
{
lean_ctor_set(v___x_4303_, 1, v_a_4298_);
lean_ctor_set(v___x_4303_, 0, v___x_4305_);
v___x_4307_ = v___x_4303_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v___x_4305_);
lean_ctor_set(v_reuseFailAlloc_4309_, 1, v_a_4298_);
v___x_4307_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
v_a_4297_ = v_tail_4301_;
v_a_4298_ = v___x_4307_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(lean_object* v_constName_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_){
_start:
{
lean_object* v___x_4317_; 
lean_inc(v_constName_4311_);
v___x_4317_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(v_constName_4311_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
if (lean_obj_tag(v___x_4317_) == 0)
{
lean_object* v_a_4318_; lean_object* v___x_4320_; uint8_t v_isShared_4321_; uint8_t v_isSharedCheck_4329_; 
v_a_4318_ = lean_ctor_get(v___x_4317_, 0);
v_isSharedCheck_4329_ = !lean_is_exclusive(v___x_4317_);
if (v_isSharedCheck_4329_ == 0)
{
v___x_4320_ = v___x_4317_;
v_isShared_4321_ = v_isSharedCheck_4329_;
goto v_resetjp_4319_;
}
else
{
lean_inc(v_a_4318_);
lean_dec(v___x_4317_);
v___x_4320_ = lean_box(0);
v_isShared_4321_ = v_isSharedCheck_4329_;
goto v_resetjp_4319_;
}
v_resetjp_4319_:
{
lean_object* v_levelParams_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4327_; 
v_levelParams_4322_ = lean_ctor_get(v_a_4318_, 1);
lean_inc(v_levelParams_4322_);
lean_dec(v_a_4318_);
v___x_4323_ = lean_box(0);
v___x_4324_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(v_levelParams_4322_, v___x_4323_);
v___x_4325_ = l_Lean_mkConst(v_constName_4311_, v___x_4324_);
if (v_isShared_4321_ == 0)
{
lean_ctor_set(v___x_4320_, 0, v___x_4325_);
v___x_4327_ = v___x_4320_;
goto v_reusejp_4326_;
}
else
{
lean_object* v_reuseFailAlloc_4328_; 
v_reuseFailAlloc_4328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4328_, 0, v___x_4325_);
v___x_4327_ = v_reuseFailAlloc_4328_;
goto v_reusejp_4326_;
}
v_reusejp_4326_:
{
return v___x_4327_;
}
}
}
else
{
lean_object* v_a_4330_; lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4337_; 
lean_dec(v_constName_4311_);
v_a_4330_ = lean_ctor_get(v___x_4317_, 0);
v_isSharedCheck_4337_ = !lean_is_exclusive(v___x_4317_);
if (v_isSharedCheck_4337_ == 0)
{
v___x_4332_ = v___x_4317_;
v_isShared_4333_ = v_isSharedCheck_4337_;
goto v_resetjp_4331_;
}
else
{
lean_inc(v_a_4330_);
lean_dec(v___x_4317_);
v___x_4332_ = lean_box(0);
v_isShared_4333_ = v_isSharedCheck_4337_;
goto v_resetjp_4331_;
}
v_resetjp_4331_:
{
lean_object* v___x_4335_; 
if (v_isShared_4333_ == 0)
{
v___x_4335_ = v___x_4332_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4336_; 
v_reuseFailAlloc_4336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4336_, 0, v_a_4330_);
v___x_4335_ = v_reuseFailAlloc_4336_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
return v___x_4335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0___boxed(lean_object* v_constName_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_){
_start:
{
lean_object* v_res_4344_; 
v_res_4344_ = l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(v_constName_4338_, v___y_4339_, v___y_4340_, v___y_4341_, v___y_4342_);
lean_dec(v___y_4342_);
lean_dec_ref(v___y_4341_);
lean_dec(v___y_4340_);
lean_dec_ref(v___y_4339_);
return v_res_4344_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__1(void){
_start:
{
lean_object* v___x_4346_; lean_object* v___x_4347_; 
v___x_4346_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__0));
v___x_4347_ = l_Lean_stringToMessageData(v___x_4346_);
return v___x_4347_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__3(void){
_start:
{
lean_object* v___x_4349_; lean_object* v___x_4350_; 
v___x_4349_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__2));
v___x_4350_ = l_Lean_stringToMessageData(v___x_4349_);
return v___x_4350_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__5(void){
_start:
{
lean_object* v___x_4352_; lean_object* v___x_4353_; 
v___x_4352_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__4));
v___x_4353_ = l_Lean_stringToMessageData(v___x_4352_);
return v___x_4353_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__7(void){
_start:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; 
v___x_4355_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__6));
v___x_4356_ = l_Lean_stringToMessageData(v___x_4355_);
return v___x_4356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance(lean_object* v_declName_4357_, uint8_t v_attrKind_4358_, lean_object* v_prio_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_){
_start:
{
lean_object* v___x_4365_; 
lean_inc(v_declName_4357_);
v___x_4365_ = l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(v_declName_4357_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_);
if (lean_obj_tag(v___x_4365_) == 0)
{
lean_object* v_a_4366_; lean_object* v___y_4368_; lean_object* v___y_4369_; lean_object* v___y_4370_; lean_object* v___y_4371_; lean_object* v___y_4372_; lean_object* v___y_4396_; lean_object* v___y_4397_; lean_object* v___y_4398_; lean_object* v___y_4399_; lean_object* v___x_4445_; 
v_a_4366_ = lean_ctor_get(v___x_4365_, 0);
lean_inc(v_a_4366_);
lean_dec_ref_known(v___x_4365_, 1);
lean_inc(v_declName_4357_);
v___x_4445_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4(v_declName_4357_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_);
if (lean_obj_tag(v___x_4445_) == 0)
{
lean_object* v_a_4446_; lean_object* v___x_4447_; uint8_t v___x_4448_; 
v_a_4446_ = lean_ctor_get(v___x_4445_, 0);
lean_inc(v_a_4446_);
lean_dec_ref_known(v___x_4445_, 1);
v___x_4447_ = l_Lean_ConstantInfo_type(v_a_4446_);
v___x_4448_ = l_Lean_Expr_hasSorry(v___x_4447_);
lean_dec_ref(v___x_4447_);
if (v___x_4448_ == 0)
{
lean_object* v___x_4449_; 
lean_inc(v_a_4366_);
v___x_4449_ = l_Lean_Meta_checkNonClassInstance(v_a_4366_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_);
if (lean_obj_tag(v___x_4449_) == 0)
{
lean_object* v___x_4450_; 
lean_dec_ref_known(v___x_4449_, 1);
v___x_4450_ = l_Lean_Meta_checkImpossibleInstance(v_a_4446_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_);
lean_dec(v_a_4446_);
if (lean_obj_tag(v___x_4450_) == 0)
{
lean_dec_ref_known(v___x_4450_, 1);
v___y_4396_ = v___y_4360_;
v___y_4397_ = v___y_4361_;
v___y_4398_ = v___y_4362_;
v___y_4399_ = v___y_4363_;
goto v___jp_4395_;
}
else
{
lean_dec(v_a_4366_);
lean_dec(v_prio_4359_);
lean_dec(v_declName_4357_);
return v___x_4450_;
}
}
else
{
lean_dec(v_a_4446_);
lean_dec(v_a_4366_);
lean_dec(v_prio_4359_);
lean_dec(v_declName_4357_);
return v___x_4449_;
}
}
else
{
lean_dec(v_a_4446_);
v___y_4396_ = v___y_4360_;
v___y_4397_ = v___y_4361_;
v___y_4398_ = v___y_4362_;
v___y_4399_ = v___y_4363_;
goto v___jp_4395_;
}
}
else
{
lean_object* v_a_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4458_; 
lean_dec(v_a_4366_);
lean_dec(v_prio_4359_);
lean_dec(v_declName_4357_);
v_a_4451_ = lean_ctor_get(v___x_4445_, 0);
v_isSharedCheck_4458_ = !lean_is_exclusive(v___x_4445_);
if (v_isSharedCheck_4458_ == 0)
{
v___x_4453_ = v___x_4445_;
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_a_4451_);
lean_dec(v___x_4445_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
lean_object* v___x_4456_; 
if (v_isShared_4454_ == 0)
{
v___x_4456_ = v___x_4453_;
goto v_reusejp_4455_;
}
else
{
lean_object* v_reuseFailAlloc_4457_; 
v_reuseFailAlloc_4457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4457_, 0, v_a_4451_);
v___x_4456_ = v_reuseFailAlloc_4457_;
goto v_reusejp_4455_;
}
v_reusejp_4455_:
{
return v___x_4456_;
}
}
}
v___jp_4367_:
{
lean_object* v___x_4373_; lean_object* v_a_4374_; lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4394_; 
lean_inc(v_declName_4357_);
v___x_4373_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__1___redArg(v_declName_4357_, v___y_4372_);
v_a_4374_ = lean_ctor_get(v___x_4373_, 0);
v_isSharedCheck_4394_ = !lean_is_exclusive(v___x_4373_);
if (v_isSharedCheck_4394_ == 0)
{
v___x_4376_ = v___x_4373_;
v_isShared_4377_ = v_isSharedCheck_4394_;
goto v_resetjp_4375_;
}
else
{
lean_inc(v_a_4374_);
lean_dec(v___x_4373_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4394_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v___x_4378_; 
lean_inc(v_a_4366_);
v___x_4378_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(v_a_4366_, v_a_4374_, v___y_4369_, v___y_4370_, v___y_4371_, v___y_4372_);
if (lean_obj_tag(v___x_4378_) == 0)
{
lean_object* v_a_4379_; lean_object* v___x_4380_; lean_object* v___x_4382_; 
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
lean_inc(v_a_4379_);
lean_dec_ref_known(v___x_4378_, 1);
v___x_4380_ = l_Lean_Meta_instanceExtension;
if (v_isShared_4377_ == 0)
{
lean_ctor_set_tag(v___x_4376_, 1);
lean_ctor_set(v___x_4376_, 0, v_declName_4357_);
v___x_4382_ = v___x_4376_;
goto v_reusejp_4381_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v_declName_4357_);
v___x_4382_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4381_;
}
v_reusejp_4381_:
{
lean_object* v___x_4383_; lean_object* v___x_4384_; 
v___x_4383_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_4383_, 0, v___y_4368_);
lean_ctor_set(v___x_4383_, 1, v_a_4366_);
lean_ctor_set(v___x_4383_, 2, v_prio_4359_);
lean_ctor_set(v___x_4383_, 3, v___x_4382_);
lean_ctor_set(v___x_4383_, 4, v_a_4379_);
lean_ctor_set_uint8(v___x_4383_, sizeof(void*)*5, v_attrKind_4358_);
v___x_4384_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg(v___x_4380_, v___x_4383_, v_attrKind_4358_, v___y_4370_, v___y_4371_, v___y_4372_);
return v___x_4384_;
}
}
else
{
lean_object* v_a_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4393_; 
lean_del_object(v___x_4376_);
lean_dec_ref(v___y_4368_);
lean_dec(v_a_4366_);
lean_dec(v_prio_4359_);
lean_dec(v_declName_4357_);
v_a_4386_ = lean_ctor_get(v___x_4378_, 0);
v_isSharedCheck_4393_ = !lean_is_exclusive(v___x_4378_);
if (v_isSharedCheck_4393_ == 0)
{
v___x_4388_ = v___x_4378_;
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
else
{
lean_inc(v_a_4386_);
lean_dec(v___x_4378_);
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
v___jp_4395_:
{
lean_object* v___x_4400_; 
lean_inc(v_a_4366_);
v___x_4400_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(v_a_4366_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_);
if (lean_obj_tag(v___x_4400_) == 0)
{
lean_object* v_a_4401_; lean_object* v___x_4402_; lean_object* v_a_4403_; uint8_t v___x_4404_; uint8_t v___x_4405_; uint8_t v___x_4406_; 
v_a_4401_ = lean_ctor_get(v___x_4400_, 0);
lean_inc(v_a_4401_);
lean_dec_ref_known(v___x_4400_, 1);
lean_inc(v_declName_4357_);
v___x_4402_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__3___redArg(v_declName_4357_, v___y_4399_);
v_a_4403_ = lean_ctor_get(v___x_4402_, 0);
lean_inc(v_a_4403_);
lean_dec_ref(v___x_4402_);
v___x_4404_ = 1;
v___x_4405_ = lean_unbox(v_a_4403_);
lean_dec(v_a_4403_);
v___x_4406_ = l_Lean_instBEqReducibilityStatus_beq(v___x_4405_, v___x_4404_);
if (v___x_4406_ == 0)
{
v___y_4368_ = v_a_4401_;
v___y_4369_ = v___y_4396_;
v___y_4370_ = v___y_4397_;
v___y_4371_ = v___y_4398_;
v___y_4372_ = v___y_4399_;
goto v___jp_4367_;
}
else
{
lean_object* v___x_4407_; 
lean_inc(v_declName_4357_);
v___x_4407_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4(v_declName_4357_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_object* v_a_4408_; uint8_t v___x_4409_; 
v_a_4408_ = lean_ctor_get(v___x_4407_, 0);
lean_inc(v_a_4408_);
lean_dec_ref_known(v___x_4407_, 1);
v___x_4409_ = l_Lean_ConstantInfo_isDefinition(v_a_4408_);
lean_dec(v_a_4408_);
if (v___x_4409_ == 0)
{
lean_object* v___x_4410_; lean_object* v_env_4411_; uint8_t v___x_4412_; 
v___x_4410_ = lean_st_ref_get(v___y_4399_);
v_env_4411_ = lean_ctor_get(v___x_4410_, 0);
lean_inc_ref(v_env_4411_);
lean_dec(v___x_4410_);
lean_inc(v_declName_4357_);
v___x_4412_ = l_Lean_wasOriginallyDefn(v_env_4411_, v_declName_4357_);
if (v___x_4412_ == 0)
{
v___y_4368_ = v_a_4401_;
v___y_4369_ = v___y_4396_;
v___y_4370_ = v___y_4397_;
v___y_4371_ = v___y_4398_;
v___y_4372_ = v___y_4399_;
goto v___jp_4367_;
}
else
{
lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; 
v___x_4413_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__1, &l_Lean_Meta_addInstance___closed__1_once, _init_l_Lean_Meta_addInstance___closed__1);
lean_inc(v_declName_4357_);
v___x_4414_ = l_Lean_MessageData_ofName(v_declName_4357_);
v___x_4415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4415_, 0, v___x_4413_);
lean_ctor_set(v___x_4415_, 1, v___x_4414_);
v___x_4416_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__3, &l_Lean_Meta_addInstance___closed__3_once, _init_l_Lean_Meta_addInstance___closed__3);
v___x_4417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4415_);
lean_ctor_set(v___x_4417_, 1, v___x_4416_);
v___x_4418_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1(v___x_4417_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_);
if (lean_obj_tag(v___x_4418_) == 0)
{
lean_dec_ref_known(v___x_4418_, 1);
v___y_4368_ = v_a_4401_;
v___y_4369_ = v___y_4396_;
v___y_4370_ = v___y_4397_;
v___y_4371_ = v___y_4398_;
v___y_4372_ = v___y_4399_;
goto v___jp_4367_;
}
else
{
lean_dec(v_a_4401_);
lean_dec(v_a_4366_);
lean_dec(v_prio_4359_);
lean_dec(v_declName_4357_);
return v___x_4418_;
}
}
}
else
{
lean_object* v_toCold_4419_; lean_object* v_options_4420_; lean_object* v___x_4421_; uint8_t v___x_4422_; 
v_toCold_4419_ = lean_ctor_get(v___y_4398_, 0);
v_options_4420_ = lean_ctor_get(v_toCold_4419_, 2);
v___x_4421_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility));
v___x_4422_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_options_4420_, v___x_4421_);
if (v___x_4422_ == 0)
{
v___y_4368_ = v_a_4401_;
v___y_4369_ = v___y_4396_;
v___y_4370_ = v___y_4397_;
v___y_4371_ = v___y_4398_;
v___y_4372_ = v___y_4399_;
goto v___jp_4367_;
}
else
{
lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; 
v___x_4423_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__5, &l_Lean_Meta_addInstance___closed__5_once, _init_l_Lean_Meta_addInstance___closed__5);
lean_inc(v_declName_4357_);
v___x_4424_ = l_Lean_MessageData_ofName(v_declName_4357_);
v___x_4425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4425_, 0, v___x_4423_);
lean_ctor_set(v___x_4425_, 1, v___x_4424_);
v___x_4426_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__7, &l_Lean_Meta_addInstance___closed__7_once, _init_l_Lean_Meta_addInstance___closed__7);
v___x_4427_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4427_, 0, v___x_4425_);
lean_ctor_set(v___x_4427_, 1, v___x_4426_);
v___x_4428_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__1(v___x_4427_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_);
if (lean_obj_tag(v___x_4428_) == 0)
{
lean_dec_ref_known(v___x_4428_, 1);
v___y_4368_ = v_a_4401_;
v___y_4369_ = v___y_4396_;
v___y_4370_ = v___y_4397_;
v___y_4371_ = v___y_4398_;
v___y_4372_ = v___y_4399_;
goto v___jp_4367_;
}
else
{
lean_dec(v_a_4401_);
lean_dec(v_a_4366_);
lean_dec(v_prio_4359_);
lean_dec(v_declName_4357_);
return v___x_4428_;
}
}
}
}
else
{
lean_object* v_a_4429_; lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4436_; 
lean_dec(v_a_4401_);
lean_dec(v_a_4366_);
lean_dec(v_prio_4359_);
lean_dec(v_declName_4357_);
v_a_4429_ = lean_ctor_get(v___x_4407_, 0);
v_isSharedCheck_4436_ = !lean_is_exclusive(v___x_4407_);
if (v_isSharedCheck_4436_ == 0)
{
v___x_4431_ = v___x_4407_;
v_isShared_4432_ = v_isSharedCheck_4436_;
goto v_resetjp_4430_;
}
else
{
lean_inc(v_a_4429_);
lean_dec(v___x_4407_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4436_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
lean_object* v___x_4434_; 
if (v_isShared_4432_ == 0)
{
v___x_4434_ = v___x_4431_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4435_; 
v_reuseFailAlloc_4435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4435_, 0, v_a_4429_);
v___x_4434_ = v_reuseFailAlloc_4435_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
return v___x_4434_;
}
}
}
}
}
else
{
lean_object* v_a_4437_; lean_object* v___x_4439_; uint8_t v_isShared_4440_; uint8_t v_isSharedCheck_4444_; 
lean_dec(v_a_4366_);
lean_dec(v_prio_4359_);
lean_dec(v_declName_4357_);
v_a_4437_ = lean_ctor_get(v___x_4400_, 0);
v_isSharedCheck_4444_ = !lean_is_exclusive(v___x_4400_);
if (v_isSharedCheck_4444_ == 0)
{
v___x_4439_ = v___x_4400_;
v_isShared_4440_ = v_isSharedCheck_4444_;
goto v_resetjp_4438_;
}
else
{
lean_inc(v_a_4437_);
lean_dec(v___x_4400_);
v___x_4439_ = lean_box(0);
v_isShared_4440_ = v_isSharedCheck_4444_;
goto v_resetjp_4438_;
}
v_resetjp_4438_:
{
lean_object* v___x_4442_; 
if (v_isShared_4440_ == 0)
{
v___x_4442_ = v___x_4439_;
goto v_reusejp_4441_;
}
else
{
lean_object* v_reuseFailAlloc_4443_; 
v_reuseFailAlloc_4443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4443_, 0, v_a_4437_);
v___x_4442_ = v_reuseFailAlloc_4443_;
goto v_reusejp_4441_;
}
v_reusejp_4441_:
{
return v___x_4442_;
}
}
}
}
}
else
{
lean_object* v_a_4459_; lean_object* v___x_4461_; uint8_t v_isShared_4462_; uint8_t v_isSharedCheck_4466_; 
lean_dec(v_prio_4359_);
lean_dec(v_declName_4357_);
v_a_4459_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4466_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4466_ == 0)
{
v___x_4461_ = v___x_4365_;
v_isShared_4462_ = v_isSharedCheck_4466_;
goto v_resetjp_4460_;
}
else
{
lean_inc(v_a_4459_);
lean_dec(v___x_4365_);
v___x_4461_ = lean_box(0);
v_isShared_4462_ = v_isSharedCheck_4466_;
goto v_resetjp_4460_;
}
v_resetjp_4460_:
{
lean_object* v___x_4464_; 
if (v_isShared_4462_ == 0)
{
v___x_4464_ = v___x_4461_;
goto v_reusejp_4463_;
}
else
{
lean_object* v_reuseFailAlloc_4465_; 
v_reuseFailAlloc_4465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4465_, 0, v_a_4459_);
v___x_4464_ = v_reuseFailAlloc_4465_;
goto v_reusejp_4463_;
}
v_reusejp_4463_:
{
return v___x_4464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance___boxed(lean_object* v_declName_4467_, lean_object* v_attrKind_4468_, lean_object* v_prio_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_){
_start:
{
uint8_t v_attrKind_boxed_4475_; lean_object* v_res_4476_; 
v_attrKind_boxed_4475_ = lean_unbox(v_attrKind_4468_);
v_res_4476_ = l_Lean_Meta_addInstance(v_declName_4467_, v_attrKind_boxed_4475_, v_prio_4469_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec(v___y_4471_);
lean_dec_ref(v___y_4470_);
return v_res_4476_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6(lean_object* v_00_u03b1_4477_, lean_object* v_constName_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_){
_start:
{
lean_object* v___x_4484_; 
v___x_4484_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___redArg(v_constName_4478_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_);
return v___x_4484_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6___boxed(lean_object* v_00_u03b1_4485_, lean_object* v_constName_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_){
_start:
{
lean_object* v_res_4492_; 
v_res_4492_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6(v_00_u03b1_4485_, v_constName_4486_, v___y_4487_, v___y_4488_, v___y_4489_, v___y_4490_);
lean_dec(v___y_4490_);
lean_dec_ref(v___y_4489_);
lean_dec(v___y_4488_);
lean_dec_ref(v___y_4487_);
return v_res_4492_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7(lean_object* v_00_u03b1_4493_, lean_object* v_ref_4494_, lean_object* v_constName_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_){
_start:
{
lean_object* v___x_4501_; 
v___x_4501_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg(v_ref_4494_, v_constName_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_);
return v___x_4501_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___boxed(lean_object* v_00_u03b1_4502_, lean_object* v_ref_4503_, lean_object* v_constName_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_){
_start:
{
lean_object* v_res_4510_; 
v_res_4510_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7(v_00_u03b1_4502_, v_ref_4503_, v_constName_4504_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_);
lean_dec(v___y_4508_);
lean_dec_ref(v___y_4507_);
lean_dec(v___y_4506_);
lean_dec_ref(v___y_4505_);
lean_dec(v_ref_4503_);
return v_res_4510_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8(lean_object* v_00_u03b1_4511_, lean_object* v_ref_4512_, lean_object* v_msg_4513_, lean_object* v_declHint_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_){
_start:
{
lean_object* v___x_4520_; 
v___x_4520_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___redArg(v_ref_4512_, v_msg_4513_, v_declHint_4514_, v___y_4515_, v___y_4516_, v___y_4517_, v___y_4518_);
return v___x_4520_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8___boxed(lean_object* v_00_u03b1_4521_, lean_object* v_ref_4522_, lean_object* v_msg_4523_, lean_object* v_declHint_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_){
_start:
{
lean_object* v_res_4530_; 
v_res_4530_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8(v_00_u03b1_4521_, v_ref_4522_, v_msg_4523_, v_declHint_4524_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_);
lean_dec(v___y_4528_);
lean_dec_ref(v___y_4527_);
lean_dec(v___y_4526_);
lean_dec_ref(v___y_4525_);
lean_dec(v_ref_4522_);
return v_res_4530_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10(lean_object* v_msg_4531_, lean_object* v_declHint_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_){
_start:
{
lean_object* v___x_4538_; 
v___x_4538_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(v_msg_4531_, v_declHint_4532_, v___y_4536_);
return v___x_4538_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___boxed(lean_object* v_msg_4539_, lean_object* v_declHint_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_){
_start:
{
lean_object* v_res_4546_; 
v_res_4546_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10(v_msg_4539_, v_declHint_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_);
lean_dec(v___y_4544_);
lean_dec_ref(v___y_4543_);
lean_dec(v___y_4542_);
lean_dec_ref(v___y_4541_);
return v_res_4546_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10(lean_object* v_00_u03b1_4547_, lean_object* v_ref_4548_, lean_object* v_msg_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_){
_start:
{
lean_object* v___x_4555_; 
v___x_4555_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___redArg(v_ref_4548_, v_msg_4549_, v___y_4550_, v___y_4551_, v___y_4552_, v___y_4553_);
return v___x_4555_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10___boxed(lean_object* v_00_u03b1_4556_, lean_object* v_ref_4557_, lean_object* v_msg_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_){
_start:
{
lean_object* v_res_4564_; 
v_res_4564_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__10(v_00_u03b1_4556_, v_ref_4557_, v_msg_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_);
lean_dec(v___y_4562_);
lean_dec_ref(v___y_4561_);
lean_dec(v___y_4560_);
lean_dec_ref(v___y_4559_);
lean_dec(v_ref_4557_);
return v_res_4564_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(lean_object* v_declName_4565_, uint8_t v_s_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_){
_start:
{
lean_object* v___x_4570_; lean_object* v_env_4571_; lean_object* v_nextMacroScope_4572_; lean_object* v_ngen_4573_; lean_object* v_auxDeclNGen_4574_; lean_object* v_traceState_4575_; lean_object* v_messages_4576_; lean_object* v_infoState_4577_; lean_object* v_snapshotTasks_4578_; lean_object* v___x_4580_; uint8_t v_isShared_4581_; uint8_t v_isSharedCheck_4607_; 
v___x_4570_ = lean_st_ref_take(v___y_4568_);
v_env_4571_ = lean_ctor_get(v___x_4570_, 0);
v_nextMacroScope_4572_ = lean_ctor_get(v___x_4570_, 1);
v_ngen_4573_ = lean_ctor_get(v___x_4570_, 2);
v_auxDeclNGen_4574_ = lean_ctor_get(v___x_4570_, 3);
v_traceState_4575_ = lean_ctor_get(v___x_4570_, 4);
v_messages_4576_ = lean_ctor_get(v___x_4570_, 6);
v_infoState_4577_ = lean_ctor_get(v___x_4570_, 7);
v_snapshotTasks_4578_ = lean_ctor_get(v___x_4570_, 8);
v_isSharedCheck_4607_ = !lean_is_exclusive(v___x_4570_);
if (v_isSharedCheck_4607_ == 0)
{
lean_object* v_unused_4608_; 
v_unused_4608_ = lean_ctor_get(v___x_4570_, 5);
lean_dec(v_unused_4608_);
v___x_4580_ = v___x_4570_;
v_isShared_4581_ = v_isSharedCheck_4607_;
goto v_resetjp_4579_;
}
else
{
lean_inc(v_snapshotTasks_4578_);
lean_inc(v_infoState_4577_);
lean_inc(v_messages_4576_);
lean_inc(v_traceState_4575_);
lean_inc(v_auxDeclNGen_4574_);
lean_inc(v_ngen_4573_);
lean_inc(v_nextMacroScope_4572_);
lean_inc(v_env_4571_);
lean_dec(v___x_4570_);
v___x_4580_ = lean_box(0);
v_isShared_4581_ = v_isSharedCheck_4607_;
goto v_resetjp_4579_;
}
v_resetjp_4579_:
{
uint8_t v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4587_; 
v___x_4582_ = 0;
v___x_4583_ = lean_box(0);
v___x_4584_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_4571_, v_declName_4565_, v_s_4566_, v___x_4582_, v___x_4583_);
v___x_4585_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1);
if (v_isShared_4581_ == 0)
{
lean_ctor_set(v___x_4580_, 5, v___x_4585_);
lean_ctor_set(v___x_4580_, 0, v___x_4584_);
v___x_4587_ = v___x_4580_;
goto v_reusejp_4586_;
}
else
{
lean_object* v_reuseFailAlloc_4606_; 
v_reuseFailAlloc_4606_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4606_, 0, v___x_4584_);
lean_ctor_set(v_reuseFailAlloc_4606_, 1, v_nextMacroScope_4572_);
lean_ctor_set(v_reuseFailAlloc_4606_, 2, v_ngen_4573_);
lean_ctor_set(v_reuseFailAlloc_4606_, 3, v_auxDeclNGen_4574_);
lean_ctor_set(v_reuseFailAlloc_4606_, 4, v_traceState_4575_);
lean_ctor_set(v_reuseFailAlloc_4606_, 5, v___x_4585_);
lean_ctor_set(v_reuseFailAlloc_4606_, 6, v_messages_4576_);
lean_ctor_set(v_reuseFailAlloc_4606_, 7, v_infoState_4577_);
lean_ctor_set(v_reuseFailAlloc_4606_, 8, v_snapshotTasks_4578_);
v___x_4587_ = v_reuseFailAlloc_4606_;
goto v_reusejp_4586_;
}
v_reusejp_4586_:
{
lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v_mctx_4590_; lean_object* v_zetaDeltaFVarIds_4591_; lean_object* v_postponed_4592_; lean_object* v_diag_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4604_; 
v___x_4588_ = lean_st_ref_put(v___y_4568_, v___x_4587_);
v___x_4589_ = lean_st_ref_take(v___y_4567_);
v_mctx_4590_ = lean_ctor_get(v___x_4589_, 0);
v_zetaDeltaFVarIds_4591_ = lean_ctor_get(v___x_4589_, 2);
v_postponed_4592_ = lean_ctor_get(v___x_4589_, 3);
v_diag_4593_ = lean_ctor_get(v___x_4589_, 4);
v_isSharedCheck_4604_ = !lean_is_exclusive(v___x_4589_);
if (v_isSharedCheck_4604_ == 0)
{
lean_object* v_unused_4605_; 
v_unused_4605_ = lean_ctor_get(v___x_4589_, 1);
lean_dec(v_unused_4605_);
v___x_4595_ = v___x_4589_;
v_isShared_4596_ = v_isSharedCheck_4604_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_diag_4593_);
lean_inc(v_postponed_4592_);
lean_inc(v_zetaDeltaFVarIds_4591_);
lean_inc(v_mctx_4590_);
lean_dec(v___x_4589_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4604_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4600_; 
v___x_4597_ = lean_box(0);
v___x_4598_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2);
if (v_isShared_4596_ == 0)
{
lean_ctor_set(v___x_4595_, 1, v___x_4598_);
v___x_4600_ = v___x_4595_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v_mctx_4590_);
lean_ctor_set(v_reuseFailAlloc_4603_, 1, v___x_4598_);
lean_ctor_set(v_reuseFailAlloc_4603_, 2, v_zetaDeltaFVarIds_4591_);
lean_ctor_set(v_reuseFailAlloc_4603_, 3, v_postponed_4592_);
lean_ctor_set(v_reuseFailAlloc_4603_, 4, v_diag_4593_);
v___x_4600_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4601_ = lean_st_ref_put(v___y_4567_, v___x_4600_);
v___x_4602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4602_, 0, v___x_4597_);
return v___x_4602_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___boxed(lean_object* v_declName_4609_, lean_object* v_s_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_){
_start:
{
uint8_t v_s_boxed_4614_; lean_object* v_res_4615_; 
v_s_boxed_4614_ = lean_unbox(v_s_4610_);
v_res_4615_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4609_, v_s_boxed_4614_, v___y_4611_, v___y_4612_);
lean_dec(v___y_4612_);
lean_dec(v___y_4611_);
return v_res_4615_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(lean_object* v_declName_4616_, uint8_t v_s_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_){
_start:
{
lean_object* v___x_4623_; 
v___x_4623_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4616_, v_s_4617_, v___y_4619_, v___y_4621_);
return v___x_4623_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___boxed(lean_object* v_declName_4624_, lean_object* v_s_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_){
_start:
{
uint8_t v_s_boxed_4631_; lean_object* v_res_4632_; 
v_s_boxed_4631_ = lean_unbox(v_s_4625_);
v_res_4632_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(v_declName_4624_, v_s_boxed_4631_, v___y_4626_, v___y_4627_, v___y_4628_, v___y_4629_);
lean_dec(v___y_4629_);
lean_dec_ref(v___y_4628_);
lean_dec(v___y_4627_);
lean_dec_ref(v___y_4626_);
return v_res_4632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance(lean_object* v_declName_4633_, uint8_t v_attrKind_4634_, lean_object* v_prio_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_){
_start:
{
uint8_t v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; 
v___x_4641_ = 4;
lean_inc(v_declName_4633_);
v___x_4642_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4633_, v___x_4641_, v___y_4637_, v___y_4639_);
lean_dec_ref(v___x_4642_);
v___x_4643_ = l_Lean_Meta_addInstance(v_declName_4633_, v_attrKind_4634_, v_prio_4635_, v___y_4636_, v___y_4637_, v___y_4638_, v___y_4639_);
return v___x_4643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance___boxed(lean_object* v_declName_4644_, lean_object* v_attrKind_4645_, lean_object* v_prio_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_){
_start:
{
uint8_t v_attrKind_boxed_4652_; lean_object* v_res_4653_; 
v_attrKind_boxed_4652_ = lean_unbox(v_attrKind_4645_);
v_res_4653_ = l_Lean_Meta_registerInstance(v_declName_4644_, v_attrKind_boxed_4652_, v_prio_4646_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___y_4648_);
lean_dec_ref(v___y_4647_);
return v_res_4653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v_a_4654_, lean_object* v_x_4655_){
_start:
{
lean_inc_ref(v_a_4654_);
return v_a_4654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v_a_4656_, lean_object* v_x_4657_){
_start:
{
lean_object* v_res_4658_; 
v_res_4658_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v_a_4656_, v_x_4657_);
lean_dec_ref(v_x_4657_);
lean_dec_ref(v_a_4656_);
return v_res_4658_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object* v_msgData_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v___x_4663_; lean_object* v_toCold_4664_; lean_object* v_env_4665_; lean_object* v_options_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; 
v___x_4663_ = lean_st_ref_get(v___y_4661_);
v_toCold_4664_ = lean_ctor_get(v___y_4660_, 0);
v_env_4665_ = lean_ctor_get(v___x_4663_, 0);
lean_inc_ref(v_env_4665_);
lean_dec(v___x_4663_);
v_options_4666_ = lean_ctor_get(v_toCold_4664_, 2);
v___x_4667_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_4668_ = lean_unsigned_to_nat(32u);
v___x_4669_ = lean_mk_empty_array_with_capacity(v___x_4668_);
lean_dec_ref(v___x_4669_);
v___x_4670_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4);
lean_inc_ref(v_options_4666_);
v___x_4671_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4671_, 0, v_env_4665_);
lean_ctor_set(v___x_4671_, 1, v___x_4667_);
lean_ctor_set(v___x_4671_, 2, v___x_4670_);
lean_ctor_set(v___x_4671_, 3, v_options_4666_);
v___x_4672_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4672_, 0, v___x_4671_);
lean_ctor_set(v___x_4672_, 1, v_msgData_4659_);
v___x_4673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4673_, 0, v___x_4672_);
return v___x_4673_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object* v_msgData_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_){
_start:
{
lean_object* v_res_4678_; 
v_res_4678_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(v_msgData_4674_, v___y_4675_, v___y_4676_);
lean_dec(v___y_4676_);
lean_dec_ref(v___y_4675_);
return v_res_4678_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_msg_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_){
_start:
{
lean_object* v_ref_4683_; lean_object* v___x_4684_; lean_object* v_a_4685_; lean_object* v___x_4687_; uint8_t v_isShared_4688_; uint8_t v_isSharedCheck_4693_; 
v_ref_4683_ = lean_ctor_get(v___y_4680_, 2);
v___x_4684_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(v_msg_4679_, v___y_4680_, v___y_4681_);
v_a_4685_ = lean_ctor_get(v___x_4684_, 0);
v_isSharedCheck_4693_ = !lean_is_exclusive(v___x_4684_);
if (v_isSharedCheck_4693_ == 0)
{
v___x_4687_ = v___x_4684_;
v_isShared_4688_ = v_isSharedCheck_4693_;
goto v_resetjp_4686_;
}
else
{
lean_inc(v_a_4685_);
lean_dec(v___x_4684_);
v___x_4687_ = lean_box(0);
v_isShared_4688_ = v_isSharedCheck_4693_;
goto v_resetjp_4686_;
}
v_resetjp_4686_:
{
lean_object* v___x_4689_; lean_object* v___x_4691_; 
lean_inc(v_ref_4683_);
v___x_4689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4689_, 0, v_ref_4683_);
lean_ctor_set(v___x_4689_, 1, v_a_4685_);
if (v_isShared_4688_ == 0)
{
lean_ctor_set_tag(v___x_4687_, 1);
lean_ctor_set(v___x_4687_, 0, v___x_4689_);
v___x_4691_ = v___x_4687_;
goto v_reusejp_4690_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v___x_4689_);
v___x_4691_ = v_reuseFailAlloc_4692_;
goto v_reusejp_4690_;
}
v_reusejp_4690_:
{
return v___x_4691_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object* v_msg_4694_, lean_object* v___y_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_){
_start:
{
lean_object* v_res_4698_; 
v_res_4698_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v_msg_4694_, v___y_4695_, v___y_4696_);
lean_dec(v___y_4696_);
lean_dec_ref(v___y_4695_);
return v_res_4698_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_4699_, lean_object* v_i_4700_, lean_object* v_k_4701_){
_start:
{
lean_object* v___x_4702_; uint8_t v___x_4703_; 
v___x_4702_ = lean_array_get_size(v_keys_4699_);
v___x_4703_ = lean_nat_dec_lt(v_i_4700_, v___x_4702_);
if (v___x_4703_ == 0)
{
lean_dec(v_i_4700_);
return v___x_4703_;
}
else
{
lean_object* v_k_x27_4704_; uint8_t v___x_4705_; 
v_k_x27_4704_ = lean_array_fget_borrowed(v_keys_4699_, v_i_4700_);
v___x_4705_ = lean_name_eq(v_k_4701_, v_k_x27_4704_);
if (v___x_4705_ == 0)
{
lean_object* v___x_4706_; lean_object* v___x_4707_; 
v___x_4706_ = lean_unsigned_to_nat(1u);
v___x_4707_ = lean_nat_add(v_i_4700_, v___x_4706_);
lean_dec(v_i_4700_);
v_i_4700_ = v___x_4707_;
goto _start;
}
else
{
lean_dec(v_i_4700_);
return v___x_4703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_4709_, lean_object* v_i_4710_, lean_object* v_k_4711_){
_start:
{
uint8_t v_res_4712_; lean_object* v_r_4713_; 
v_res_4712_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_keys_4709_, v_i_4710_, v_k_4711_);
lean_dec(v_k_4711_);
lean_dec_ref(v_keys_4709_);
v_r_4713_ = lean_box(v_res_4712_);
return v_r_4713_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_x_4714_, size_t v_x_4715_, lean_object* v_x_4716_){
_start:
{
if (lean_obj_tag(v_x_4714_) == 0)
{
lean_object* v_es_4717_; lean_object* v___x_4718_; size_t v___x_4719_; size_t v___x_4720_; lean_object* v_j_4721_; lean_object* v___x_4722_; 
v_es_4717_ = lean_ctor_get(v_x_4714_, 0);
v___x_4718_ = lean_box(2);
v___x_4719_ = ((size_t)31ULL);
v___x_4720_ = lean_usize_land(v_x_4715_, v___x_4719_);
v_j_4721_ = lean_usize_to_nat(v___x_4720_);
v___x_4722_ = lean_array_get_borrowed(v___x_4718_, v_es_4717_, v_j_4721_);
lean_dec(v_j_4721_);
switch(lean_obj_tag(v___x_4722_))
{
case 0:
{
lean_object* v_key_4723_; uint8_t v___x_4724_; 
v_key_4723_ = lean_ctor_get(v___x_4722_, 0);
v___x_4724_ = lean_name_eq(v_x_4716_, v_key_4723_);
return v___x_4724_;
}
case 1:
{
lean_object* v_node_4725_; size_t v___x_4726_; size_t v___x_4727_; 
v_node_4725_ = lean_ctor_get(v___x_4722_, 0);
v___x_4726_ = ((size_t)5ULL);
v___x_4727_ = lean_usize_shift_right(v_x_4715_, v___x_4726_);
v_x_4714_ = v_node_4725_;
v_x_4715_ = v___x_4727_;
goto _start;
}
default: 
{
uint8_t v___x_4729_; 
v___x_4729_ = 0;
return v___x_4729_;
}
}
}
else
{
lean_object* v_ks_4730_; lean_object* v___x_4731_; uint8_t v___x_4732_; 
v_ks_4730_ = lean_ctor_get(v_x_4714_, 0);
v___x_4731_ = lean_unsigned_to_nat(0u);
v___x_4732_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_ks_4730_, v___x_4731_, v_x_4716_);
return v___x_4732_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_4733_, lean_object* v_x_4734_, lean_object* v_x_4735_){
_start:
{
size_t v_x_2503__boxed_4736_; uint8_t v_res_4737_; lean_object* v_r_4738_; 
v_x_2503__boxed_4736_ = lean_unbox_usize(v_x_4734_);
lean_dec(v_x_4734_);
v_res_4737_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_4733_, v_x_2503__boxed_4736_, v_x_4735_);
lean_dec(v_x_4735_);
lean_dec_ref(v_x_4733_);
v_r_4738_ = lean_box(v_res_4737_);
return v_r_4738_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_4739_, lean_object* v_x_4740_){
_start:
{
uint64_t v___y_4742_; 
if (lean_obj_tag(v_x_4740_) == 0)
{
uint64_t v___x_4745_; 
v___x_4745_ = 1723ULL;
v___y_4742_ = v___x_4745_;
goto v___jp_4741_;
}
else
{
uint64_t v_hash_4746_; 
v_hash_4746_ = lean_ctor_get_uint64(v_x_4740_, sizeof(void*)*2);
v___y_4742_ = v_hash_4746_;
goto v___jp_4741_;
}
v___jp_4741_:
{
size_t v___x_4743_; uint8_t v___x_4744_; 
v___x_4743_ = lean_uint64_to_usize(v___y_4742_);
v___x_4744_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_4739_, v___x_4743_, v_x_4740_);
return v___x_4744_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_4747_, lean_object* v_x_4748_){
_start:
{
uint8_t v_res_4749_; lean_object* v_r_4750_; 
v_res_4749_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_4747_, v_x_4748_);
lean_dec(v_x_4748_);
lean_dec_ref(v_x_4747_);
v_r_4750_ = lean_box(v_res_4749_);
return v_r_4750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(lean_object* v_d_4751_, lean_object* v_declName_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_){
_start:
{
lean_object* v_instanceNames_4759_; uint8_t v___x_4760_; 
v_instanceNames_4759_ = lean_ctor_get(v_d_4751_, 1);
v___x_4760_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_instanceNames_4759_, v_declName_4752_);
if (v___x_4760_ == 0)
{
lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v_a_4767_; lean_object* v___x_4769_; uint8_t v_isShared_4770_; uint8_t v_isSharedCheck_4774_; 
lean_dec_ref(v_d_4751_);
v___x_4761_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_4762_ = l_Lean_MessageData_ofConstName(v_declName_4752_, v___x_4760_);
v___x_4763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4763_, 0, v___x_4761_);
lean_ctor_set(v___x_4763_, 1, v___x_4762_);
v___x_4764_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__5, &l_Lean_Meta_Instances_erase___redArg___closed__5_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__5);
v___x_4765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4765_, 0, v___x_4763_);
lean_ctor_set(v___x_4765_, 1, v___x_4764_);
v___x_4766_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_4765_, v___y_4753_, v___y_4754_);
v_a_4767_ = lean_ctor_get(v___x_4766_, 0);
v_isSharedCheck_4774_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4774_ == 0)
{
v___x_4769_ = v___x_4766_;
v_isShared_4770_ = v_isSharedCheck_4774_;
goto v_resetjp_4768_;
}
else
{
lean_inc(v_a_4767_);
lean_dec(v___x_4766_);
v___x_4769_ = lean_box(0);
v_isShared_4770_ = v_isSharedCheck_4774_;
goto v_resetjp_4768_;
}
v_resetjp_4768_:
{
lean_object* v___x_4772_; 
if (v_isShared_4770_ == 0)
{
v___x_4772_ = v___x_4769_;
goto v_reusejp_4771_;
}
else
{
lean_object* v_reuseFailAlloc_4773_; 
v_reuseFailAlloc_4773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4773_, 0, v_a_4767_);
v___x_4772_ = v_reuseFailAlloc_4773_;
goto v_reusejp_4771_;
}
v_reusejp_4771_:
{
return v___x_4772_;
}
}
}
else
{
goto v___jp_4756_;
}
v___jp_4756_:
{
lean_object* v___x_4757_; lean_object* v___x_4758_; 
v___x_4757_ = l_Lean_Meta_Instances_eraseCore(v_d_4751_, v_declName_4752_);
v___x_4758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4758_, 0, v___x_4757_);
return v___x_4758_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0___boxed(lean_object* v_d_4775_, lean_object* v_declName_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_){
_start:
{
lean_object* v_res_4780_; 
v_res_4780_ = l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(v_d_4775_, v_declName_4776_, v___y_4777_, v___y_4778_);
lean_dec(v___y_4778_);
lean_dec_ref(v___y_4777_);
return v_res_4780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v___x_4781_, lean_object* v_declName_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_){
_start:
{
lean_object* v___x_4786_; lean_object* v_env_4787_; lean_object* v___x_4788_; lean_object* v_ext_4789_; lean_object* v_toEnvExtension_4790_; lean_object* v_asyncMode_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
v___x_4786_ = lean_st_ref_get(v___y_4784_);
v_env_4787_ = lean_ctor_get(v___x_4786_, 0);
lean_inc_ref(v_env_4787_);
lean_dec(v___x_4786_);
v___x_4788_ = l_Lean_Meta_instanceExtension;
v_ext_4789_ = lean_ctor_get(v___x_4788_, 1);
v_toEnvExtension_4790_ = lean_ctor_get(v_ext_4789_, 0);
v_asyncMode_4791_ = lean_ctor_get(v_toEnvExtension_4790_, 2);
v___x_4792_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_4781_, v___x_4788_, v_env_4787_, v_asyncMode_4791_);
v___x_4793_ = l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(v___x_4792_, v_declName_4782_, v___y_4783_, v___y_4784_);
if (lean_obj_tag(v___x_4793_) == 0)
{
lean_object* v_a_4794_; lean_object* v___x_4796_; uint8_t v_isShared_4797_; uint8_t v_isSharedCheck_4823_; 
v_a_4794_ = lean_ctor_get(v___x_4793_, 0);
v_isSharedCheck_4823_ = !lean_is_exclusive(v___x_4793_);
if (v_isSharedCheck_4823_ == 0)
{
v___x_4796_ = v___x_4793_;
v_isShared_4797_ = v_isSharedCheck_4823_;
goto v_resetjp_4795_;
}
else
{
lean_inc(v_a_4794_);
lean_dec(v___x_4793_);
v___x_4796_ = lean_box(0);
v_isShared_4797_ = v_isSharedCheck_4823_;
goto v_resetjp_4795_;
}
v_resetjp_4795_:
{
lean_object* v___f_4798_; lean_object* v___x_4799_; lean_object* v_env_4800_; lean_object* v_nextMacroScope_4801_; lean_object* v_ngen_4802_; lean_object* v_auxDeclNGen_4803_; lean_object* v_traceState_4804_; lean_object* v_messages_4805_; lean_object* v_infoState_4806_; lean_object* v_snapshotTasks_4807_; lean_object* v___x_4809_; uint8_t v_isShared_4810_; uint8_t v_isSharedCheck_4821_; 
v___f_4798_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_4798_, 0, v_a_4794_);
v___x_4799_ = lean_st_ref_take(v___y_4784_);
v_env_4800_ = lean_ctor_get(v___x_4799_, 0);
v_nextMacroScope_4801_ = lean_ctor_get(v___x_4799_, 1);
v_ngen_4802_ = lean_ctor_get(v___x_4799_, 2);
v_auxDeclNGen_4803_ = lean_ctor_get(v___x_4799_, 3);
v_traceState_4804_ = lean_ctor_get(v___x_4799_, 4);
v_messages_4805_ = lean_ctor_get(v___x_4799_, 6);
v_infoState_4806_ = lean_ctor_get(v___x_4799_, 7);
v_snapshotTasks_4807_ = lean_ctor_get(v___x_4799_, 8);
v_isSharedCheck_4821_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4821_ == 0)
{
lean_object* v_unused_4822_; 
v_unused_4822_ = lean_ctor_get(v___x_4799_, 5);
lean_dec(v_unused_4822_);
v___x_4809_ = v___x_4799_;
v_isShared_4810_ = v_isSharedCheck_4821_;
goto v_resetjp_4808_;
}
else
{
lean_inc(v_snapshotTasks_4807_);
lean_inc(v_infoState_4806_);
lean_inc(v_messages_4805_);
lean_inc(v_traceState_4804_);
lean_inc(v_auxDeclNGen_4803_);
lean_inc(v_ngen_4802_);
lean_inc(v_nextMacroScope_4801_);
lean_inc(v_env_4800_);
lean_dec(v___x_4799_);
v___x_4809_ = lean_box(0);
v_isShared_4810_ = v_isSharedCheck_4821_;
goto v_resetjp_4808_;
}
v_resetjp_4808_:
{
lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4815_; 
v___x_4811_ = lean_box(0);
v___x_4812_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v___x_4788_, v_env_4800_, v___f_4798_);
v___x_4813_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1);
if (v_isShared_4810_ == 0)
{
lean_ctor_set(v___x_4809_, 5, v___x_4813_);
lean_ctor_set(v___x_4809_, 0, v___x_4812_);
v___x_4815_ = v___x_4809_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4820_; 
v_reuseFailAlloc_4820_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4820_, 0, v___x_4812_);
lean_ctor_set(v_reuseFailAlloc_4820_, 1, v_nextMacroScope_4801_);
lean_ctor_set(v_reuseFailAlloc_4820_, 2, v_ngen_4802_);
lean_ctor_set(v_reuseFailAlloc_4820_, 3, v_auxDeclNGen_4803_);
lean_ctor_set(v_reuseFailAlloc_4820_, 4, v_traceState_4804_);
lean_ctor_set(v_reuseFailAlloc_4820_, 5, v___x_4813_);
lean_ctor_set(v_reuseFailAlloc_4820_, 6, v_messages_4805_);
lean_ctor_set(v_reuseFailAlloc_4820_, 7, v_infoState_4806_);
lean_ctor_set(v_reuseFailAlloc_4820_, 8, v_snapshotTasks_4807_);
v___x_4815_ = v_reuseFailAlloc_4820_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
lean_object* v___x_4816_; lean_object* v___x_4818_; 
v___x_4816_ = lean_st_ref_put(v___y_4784_, v___x_4815_);
if (v_isShared_4797_ == 0)
{
lean_ctor_set(v___x_4796_, 0, v___x_4811_);
v___x_4818_ = v___x_4796_;
goto v_reusejp_4817_;
}
else
{
lean_object* v_reuseFailAlloc_4819_; 
v_reuseFailAlloc_4819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4819_, 0, v___x_4811_);
v___x_4818_ = v_reuseFailAlloc_4819_;
goto v_reusejp_4817_;
}
v_reusejp_4817_:
{
return v___x_4818_;
}
}
}
}
}
else
{
lean_object* v_a_4824_; lean_object* v___x_4826_; uint8_t v_isShared_4827_; uint8_t v_isSharedCheck_4831_; 
v_a_4824_ = lean_ctor_get(v___x_4793_, 0);
v_isSharedCheck_4831_ = !lean_is_exclusive(v___x_4793_);
if (v_isSharedCheck_4831_ == 0)
{
v___x_4826_ = v___x_4793_;
v_isShared_4827_ = v_isSharedCheck_4831_;
goto v_resetjp_4825_;
}
else
{
lean_inc(v_a_4824_);
lean_dec(v___x_4793_);
v___x_4826_ = lean_box(0);
v_isShared_4827_ = v_isSharedCheck_4831_;
goto v_resetjp_4825_;
}
v_resetjp_4825_:
{
lean_object* v___x_4829_; 
if (v_isShared_4827_ == 0)
{
v___x_4829_ = v___x_4826_;
goto v_reusejp_4828_;
}
else
{
lean_object* v_reuseFailAlloc_4830_; 
v_reuseFailAlloc_4830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4830_, 0, v_a_4824_);
v___x_4829_ = v_reuseFailAlloc_4830_;
goto v_reusejp_4828_;
}
v_reusejp_4828_:
{
return v___x_4829_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v___x_4832_, lean_object* v_declName_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_, lean_object* v___y_4836_){
_start:
{
lean_object* v_res_4837_; 
v_res_4837_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v___x_4832_, v_declName_4833_, v___y_4834_, v___y_4835_);
lean_dec(v___y_4835_);
lean_dec_ref(v___y_4834_);
lean_dec_ref(v___x_4832_);
return v_res_4837_;
}
}
static uint64_t _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4844_; uint64_t v___x_4845_; 
v___x_4844_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_4845_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_4844_);
return v___x_4845_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; 
v___x_4846_ = lean_uint64_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4847_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_4848_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4848_, 0, v___x_4847_);
lean_ctor_set_uint64(v___x_4848_, sizeof(void*)*1, v___x_4846_);
return v___x_4848_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; 
v___x_4849_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_4850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4850_, 0, v___x_4849_);
return v___x_4850_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4851_; lean_object* v___x_4852_; 
v___x_4851_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4852_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4852_, 0, v___x_4851_);
lean_ctor_set(v___x_4852_, 1, v___x_4851_);
lean_ctor_set(v___x_4852_, 2, v___x_4851_);
lean_ctor_set(v___x_4852_, 3, v___x_4851_);
lean_ctor_set(v___x_4852_, 4, v___x_4851_);
lean_ctor_set(v___x_4852_, 5, v___x_4851_);
return v___x_4852_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4853_; lean_object* v___x_4854_; 
v___x_4853_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4854_, 0, v___x_4853_);
lean_ctor_set(v___x_4854_, 1, v___x_4853_);
lean_ctor_set(v___x_4854_, 2, v___x_4853_);
lean_ctor_set(v___x_4854_, 3, v___x_4853_);
lean_ctor_set(v___x_4854_, 4, v___x_4853_);
return v___x_4854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v___x_4855_, lean_object* v_declName_4856_, lean_object* v_stx_4857_, uint8_t v_attrKind_4858_, lean_object* v___y_4859_, lean_object* v___y_4860_){
_start:
{
lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; 
v___x_4862_ = lean_unsigned_to_nat(1u);
v___x_4863_ = l_Lean_Syntax_getArg(v_stx_4857_, v___x_4862_);
v___x_4864_ = l_Lean_getAttrParamOptPrio(v___x_4863_, v___y_4859_, v___y_4860_);
if (lean_obj_tag(v___x_4864_) == 0)
{
lean_object* v_a_4865_; uint8_t v___x_4866_; uint8_t v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; size_t v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; 
v_a_4865_ = lean_ctor_get(v___x_4864_, 0);
lean_inc(v_a_4865_);
lean_dec_ref_known(v___x_4864_, 1);
v___x_4866_ = 0;
v___x_4867_ = 1;
v___x_4868_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4869_ = lean_box(1);
v___x_4870_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4871_ = lean_unsigned_to_nat(32u);
v___x_4872_ = lean_mk_empty_array_with_capacity(v___x_4871_);
v___x_4873_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_4874_ = ((size_t)5ULL);
lean_inc_n(v___x_4855_, 6);
v___x_4875_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4875_, 0, v___x_4873_);
lean_ctor_set(v___x_4875_, 1, v___x_4872_);
lean_ctor_set(v___x_4875_, 2, v___x_4855_);
lean_ctor_set(v___x_4875_, 3, v___x_4855_);
lean_ctor_set_usize(v___x_4875_, 4, v___x_4874_);
lean_inc_ref(v___x_4875_);
v___x_4876_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4876_, 0, v___x_4870_);
lean_ctor_set(v___x_4876_, 1, v___x_4875_);
lean_ctor_set(v___x_4876_, 2, v___x_4869_);
v___x_4877_ = lean_mk_empty_array_with_capacity(v___x_4855_);
v___x_4878_ = lean_box(0);
v___x_4879_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4879_, 0, v___x_4868_);
lean_ctor_set(v___x_4879_, 1, v___x_4869_);
lean_ctor_set(v___x_4879_, 2, v___x_4876_);
lean_ctor_set(v___x_4879_, 3, v___x_4877_);
lean_ctor_set(v___x_4879_, 4, v___x_4878_);
lean_ctor_set(v___x_4879_, 5, v___x_4855_);
lean_ctor_set(v___x_4879_, 6, v___x_4878_);
lean_ctor_set_uint8(v___x_4879_, sizeof(void*)*7, v___x_4866_);
lean_ctor_set_uint8(v___x_4879_, sizeof(void*)*7 + 1, v___x_4866_);
lean_ctor_set_uint8(v___x_4879_, sizeof(void*)*7 + 2, v___x_4866_);
lean_ctor_set_uint8(v___x_4879_, sizeof(void*)*7 + 3, v___x_4867_);
v___x_4880_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4880_, 0, v___x_4855_);
lean_ctor_set(v___x_4880_, 1, v___x_4855_);
lean_ctor_set(v___x_4880_, 2, v___x_4855_);
lean_ctor_set(v___x_4880_, 3, v___x_4855_);
lean_ctor_set(v___x_4880_, 4, v___x_4870_);
lean_ctor_set(v___x_4880_, 5, v___x_4870_);
lean_ctor_set(v___x_4880_, 6, v___x_4870_);
lean_ctor_set(v___x_4880_, 7, v___x_4870_);
lean_ctor_set(v___x_4880_, 8, v___x_4870_);
lean_ctor_set(v___x_4880_, 9, v___x_4870_);
lean_ctor_set(v___x_4880_, 10, v___x_4870_);
v___x_4881_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4882_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4883_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4883_, 0, v___x_4880_);
lean_ctor_set(v___x_4883_, 1, v___x_4881_);
lean_ctor_set(v___x_4883_, 2, v___x_4869_);
lean_ctor_set(v___x_4883_, 3, v___x_4875_);
lean_ctor_set(v___x_4883_, 4, v___x_4882_);
v___x_4884_ = lean_box(0);
v___x_4885_ = lean_st_mk_ref(v___x_4883_);
v___x_4886_ = l_Lean_Meta_addInstance(v_declName_4856_, v_attrKind_4858_, v_a_4865_, v___x_4879_, v___x_4885_, v___y_4859_, v___y_4860_);
lean_dec_ref_known(v___x_4879_, 7);
if (lean_obj_tag(v___x_4886_) == 0)
{
lean_object* v___x_4888_; uint8_t v_isShared_4889_; uint8_t v_isSharedCheck_4894_; 
v_isSharedCheck_4894_ = !lean_is_exclusive(v___x_4886_);
if (v_isSharedCheck_4894_ == 0)
{
lean_object* v_unused_4895_; 
v_unused_4895_ = lean_ctor_get(v___x_4886_, 0);
lean_dec(v_unused_4895_);
v___x_4888_ = v___x_4886_;
v_isShared_4889_ = v_isSharedCheck_4894_;
goto v_resetjp_4887_;
}
else
{
lean_dec(v___x_4886_);
v___x_4888_ = lean_box(0);
v_isShared_4889_ = v_isSharedCheck_4894_;
goto v_resetjp_4887_;
}
v_resetjp_4887_:
{
lean_object* v___x_4890_; lean_object* v___x_4892_; 
v___x_4890_ = lean_st_ref_get(v___x_4885_);
lean_dec(v___x_4885_);
lean_dec(v___x_4890_);
if (v_isShared_4889_ == 0)
{
lean_ctor_set(v___x_4888_, 0, v___x_4884_);
v___x_4892_ = v___x_4888_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4893_; 
v_reuseFailAlloc_4893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4893_, 0, v___x_4884_);
v___x_4892_ = v_reuseFailAlloc_4893_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
return v___x_4892_;
}
}
}
else
{
lean_dec(v___x_4885_);
return v___x_4886_;
}
}
else
{
lean_object* v_a_4896_; lean_object* v___x_4898_; uint8_t v_isShared_4899_; uint8_t v_isSharedCheck_4903_; 
lean_dec(v_declName_4856_);
lean_dec(v___x_4855_);
v_a_4896_ = lean_ctor_get(v___x_4864_, 0);
v_isSharedCheck_4903_ = !lean_is_exclusive(v___x_4864_);
if (v_isSharedCheck_4903_ == 0)
{
v___x_4898_ = v___x_4864_;
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
else
{
lean_inc(v_a_4896_);
lean_dec(v___x_4864_);
v___x_4898_ = lean_box(0);
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
v_resetjp_4897_:
{
lean_object* v___x_4901_; 
if (v_isShared_4899_ == 0)
{
v___x_4901_ = v___x_4898_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4902_; 
v_reuseFailAlloc_4902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4902_, 0, v_a_4896_);
v___x_4901_ = v_reuseFailAlloc_4902_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
return v___x_4901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v___x_4904_, lean_object* v_declName_4905_, lean_object* v_stx_4906_, lean_object* v_attrKind_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_, lean_object* v___y_4910_){
_start:
{
uint8_t v_attrKind_boxed_4911_; lean_object* v_res_4912_; 
v_attrKind_boxed_4911_ = lean_unbox(v_attrKind_4907_);
v_res_4912_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v___x_4904_, v_declName_4905_, v_stx_4906_, v_attrKind_boxed_4911_, v___y_4908_, v___y_4909_);
lean_dec(v___y_4909_);
lean_dec_ref(v___y_4908_);
lean_dec(v_stx_4906_);
return v_res_4912_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4913_; lean_object* v___f_4914_; 
v___x_4913_ = l_Lean_Meta_instInhabitedInstances_default;
v___f_4914_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_4914_, 0, v___x_4913_);
return v___f_4914_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4980_; lean_object* v___f_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; 
v___f_4980_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___f_4981_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_4982_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_4983_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4983_, 0, v___x_4982_);
lean_ctor_set(v___x_4983_, 1, v___f_4981_);
lean_ctor_set(v___x_4983_, 2, v___f_4980_);
return v___x_4983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4985_; lean_object* v___x_4986_; 
v___x_4985_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_4986_ = l_Lean_registerBuiltinAttribute(v___x_4985_);
return v___x_4986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v___y_4987_){
_start:
{
lean_object* v_res_4988_; 
v_res_4988_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
return v_res_4988_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_4989_, lean_object* v_x_4990_, lean_object* v_x_4991_){
_start:
{
uint8_t v___x_4992_; 
v___x_4992_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_4990_, v_x_4991_);
return v___x_4992_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_4993_, lean_object* v_x_4994_, lean_object* v_x_4995_){
_start:
{
uint8_t v_res_4996_; lean_object* v_r_4997_; 
v_res_4996_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_4993_, v_x_4994_, v_x_4995_);
lean_dec(v_x_4995_);
lean_dec_ref(v_x_4994_);
v_r_4997_ = lean_box(v_res_4996_);
return v_r_4997_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b1_4998_, lean_object* v_msg_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_){
_start:
{
lean_object* v___x_5003_; 
v___x_5003_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v_msg_4999_, v___y_5000_, v___y_5001_);
return v___x_5003_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_00_u03b1_5004_, lean_object* v_msg_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_){
_start:
{
lean_object* v_res_5009_; 
v_res_5009_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(v_00_u03b1_5004_, v_msg_5005_, v___y_5006_, v___y_5007_);
lean_dec(v___y_5007_);
lean_dec_ref(v___y_5006_);
return v_res_5009_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5010_, lean_object* v_x_5011_, size_t v_x_5012_, lean_object* v_x_5013_){
_start:
{
uint8_t v___x_5014_; 
v___x_5014_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_5011_, v_x_5012_, v_x_5013_);
return v___x_5014_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5015_, lean_object* v_x_5016_, lean_object* v_x_5017_, lean_object* v_x_5018_){
_start:
{
size_t v_x_3144__boxed_5019_; uint8_t v_res_5020_; lean_object* v_r_5021_; 
v_x_3144__boxed_5019_ = lean_unbox_usize(v_x_5017_);
lean_dec(v_x_5017_);
v_res_5020_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_5015_, v_x_5016_, v_x_3144__boxed_5019_, v_x_5018_);
lean_dec(v_x_5018_);
lean_dec_ref(v_x_5016_);
v_r_5021_ = lean_box(v_res_5020_);
return v_r_5021_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_5022_, lean_object* v_keys_5023_, lean_object* v_vals_5024_, lean_object* v_heq_5025_, lean_object* v_i_5026_, lean_object* v_k_5027_){
_start:
{
uint8_t v___x_5028_; 
v___x_5028_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_keys_5023_, v_i_5026_, v_k_5027_);
return v___x_5028_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_5029_, lean_object* v_keys_5030_, lean_object* v_vals_5031_, lean_object* v_heq_5032_, lean_object* v_i_5033_, lean_object* v_k_5034_){
_start:
{
uint8_t v_res_5035_; lean_object* v_r_5036_; 
v_res_5035_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(v_00_u03b2_5029_, v_keys_5030_, v_vals_5031_, v_heq_5032_, v_i_5033_, v_k_5034_);
lean_dec(v_k_5034_);
lean_dec_ref(v_vals_5031_);
lean_dec_ref(v_keys_5030_);
v_r_5036_ = lean_box(v_res_5035_);
return v_r_5036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; 
v___x_5039_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5040_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5041_ = l_Lean_addBuiltinDocString(v___x_5039_, v___x_5040_);
return v___x_5041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v___y_5042_){
_start:
{
lean_object* v_res_5043_; 
v_res_5043_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
return v_res_5043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg(lean_object* v___y_5044_){
_start:
{
lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v_env_5048_; lean_object* v___x_5049_; lean_object* v_ext_5050_; lean_object* v_toEnvExtension_5051_; lean_object* v_asyncMode_5052_; lean_object* v___x_5053_; lean_object* v_discrTree_5054_; lean_object* v___x_5055_; 
v___x_5046_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5047_ = lean_st_ref_get(v___y_5044_);
v_env_5048_ = lean_ctor_get(v___x_5047_, 0);
lean_inc_ref(v_env_5048_);
lean_dec(v___x_5047_);
v___x_5049_ = l_Lean_Meta_instanceExtension;
v_ext_5050_ = lean_ctor_get(v___x_5049_, 1);
v_toEnvExtension_5051_ = lean_ctor_get(v_ext_5050_, 0);
v_asyncMode_5052_ = lean_ctor_get(v_toEnvExtension_5051_, 2);
v___x_5053_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5046_, v___x_5049_, v_env_5048_, v_asyncMode_5052_);
v_discrTree_5054_ = lean_ctor_get(v___x_5053_, 0);
lean_inc_ref(v_discrTree_5054_);
lean_dec(v___x_5053_);
v___x_5055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5055_, 0, v_discrTree_5054_);
return v___x_5055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg___boxed(lean_object* v___y_5056_, lean_object* v___y_5057_){
_start:
{
lean_object* v_res_5058_; 
v_res_5058_ = l_Lean_Meta_getGlobalInstancesIndex___redArg(v___y_5056_);
lean_dec(v___y_5056_);
return v_res_5058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex(lean_object* v___y_5059_, lean_object* v___y_5060_){
_start:
{
lean_object* v___x_5062_; 
v___x_5062_ = l_Lean_Meta_getGlobalInstancesIndex___redArg(v___y_5060_);
return v___x_5062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___boxed(lean_object* v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_){
_start:
{
lean_object* v_res_5066_; 
v_res_5066_ = l_Lean_Meta_getGlobalInstancesIndex(v___y_5063_, v___y_5064_);
lean_dec(v___y_5064_);
lean_dec_ref(v___y_5063_);
return v_res_5066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg(lean_object* v___y_5067_){
_start:
{
lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v_env_5071_; lean_object* v___x_5072_; lean_object* v_ext_5073_; lean_object* v_toEnvExtension_5074_; lean_object* v_asyncMode_5075_; lean_object* v___x_5076_; lean_object* v_erased_5077_; lean_object* v___x_5078_; 
v___x_5069_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5070_ = lean_st_ref_get(v___y_5067_);
v_env_5071_ = lean_ctor_get(v___x_5070_, 0);
lean_inc_ref(v_env_5071_);
lean_dec(v___x_5070_);
v___x_5072_ = l_Lean_Meta_instanceExtension;
v_ext_5073_ = lean_ctor_get(v___x_5072_, 1);
v_toEnvExtension_5074_ = lean_ctor_get(v_ext_5073_, 0);
v_asyncMode_5075_ = lean_ctor_get(v_toEnvExtension_5074_, 2);
v___x_5076_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5069_, v___x_5072_, v_env_5071_, v_asyncMode_5075_);
v_erased_5077_ = lean_ctor_get(v___x_5076_, 2);
lean_inc_ref(v_erased_5077_);
lean_dec(v___x_5076_);
v___x_5078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5078_, 0, v_erased_5077_);
return v___x_5078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg___boxed(lean_object* v___y_5079_, lean_object* v___y_5080_){
_start:
{
lean_object* v_res_5081_; 
v_res_5081_ = l_Lean_Meta_getErasedInstances___redArg(v___y_5079_);
lean_dec(v___y_5079_);
return v_res_5081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances(lean_object* v___y_5082_, lean_object* v___y_5083_){
_start:
{
lean_object* v___x_5085_; 
v___x_5085_ = l_Lean_Meta_getErasedInstances___redArg(v___y_5083_);
return v___x_5085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___boxed(lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_){
_start:
{
lean_object* v_res_5089_; 
v_res_5089_ = l_Lean_Meta_getErasedInstances(v___y_5086_, v___y_5087_);
lean_dec(v___y_5087_);
lean_dec_ref(v___y_5086_);
return v_res_5089_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isInstanceCore(lean_object* v_env_5090_, lean_object* v_declName_5091_){
_start:
{
lean_object* v___x_5092_; lean_object* v_ext_5093_; lean_object* v_toEnvExtension_5094_; lean_object* v_asyncMode_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v_instanceNames_5098_; uint8_t v___x_5099_; 
v___x_5092_ = l_Lean_Meta_instanceExtension;
v_ext_5093_ = lean_ctor_get(v___x_5092_, 1);
v_toEnvExtension_5094_ = lean_ctor_get(v_ext_5093_, 0);
v_asyncMode_5095_ = lean_ctor_get(v_toEnvExtension_5094_, 2);
v___x_5096_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5097_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5096_, v___x_5092_, v_env_5090_, v_asyncMode_5095_);
v_instanceNames_5098_ = lean_ctor_get(v___x_5097_, 1);
lean_inc_ref(v_instanceNames_5098_);
lean_dec(v___x_5097_);
v___x_5099_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_instanceNames_5098_, v_declName_5091_);
lean_dec_ref(v_instanceNames_5098_);
return v___x_5099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstanceCore___boxed(lean_object* v_env_5100_, lean_object* v_declName_5101_){
_start:
{
uint8_t v_res_5102_; lean_object* v_r_5103_; 
v_res_5102_ = l_Lean_Meta_isInstanceCore(v_env_5100_, v_declName_5101_);
lean_dec(v_declName_5101_);
v_r_5103_ = lean_box(v_res_5102_);
return v_r_5103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg(lean_object* v_declName_5104_, lean_object* v___y_5105_){
_start:
{
lean_object* v___x_5107_; lean_object* v_env_5108_; uint8_t v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; 
v___x_5107_ = lean_st_ref_get(v___y_5105_);
v_env_5108_ = lean_ctor_get(v___x_5107_, 0);
lean_inc_ref(v_env_5108_);
lean_dec(v___x_5107_);
v___x_5109_ = l_Lean_Meta_isInstanceCore(v_env_5108_, v_declName_5104_);
v___x_5110_ = lean_box(v___x_5109_);
v___x_5111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5111_, 0, v___x_5110_);
return v___x_5111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg___boxed(lean_object* v_declName_5112_, lean_object* v___y_5113_, lean_object* v___y_5114_){
_start:
{
lean_object* v_res_5115_; 
v_res_5115_ = l_Lean_Meta_isInstance___redArg(v_declName_5112_, v___y_5113_);
lean_dec(v___y_5113_);
lean_dec(v_declName_5112_);
return v_res_5115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance(lean_object* v_declName_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_){
_start:
{
lean_object* v___x_5120_; 
v___x_5120_ = l_Lean_Meta_isInstance___redArg(v_declName_5116_, v___y_5118_);
return v___x_5120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___boxed(lean_object* v_declName_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_){
_start:
{
lean_object* v_res_5125_; 
v_res_5125_ = l_Lean_Meta_isInstance(v_declName_5121_, v___y_5122_, v___y_5123_);
lean_dec(v___y_5123_);
lean_dec_ref(v___y_5122_);
lean_dec(v_declName_5121_);
return v_res_5125_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5126_, lean_object* v_vals_5127_, lean_object* v_i_5128_, lean_object* v_k_5129_){
_start:
{
lean_object* v___x_5130_; uint8_t v___x_5131_; 
v___x_5130_ = lean_array_get_size(v_keys_5126_);
v___x_5131_ = lean_nat_dec_lt(v_i_5128_, v___x_5130_);
if (v___x_5131_ == 0)
{
lean_object* v___x_5132_; 
lean_dec(v_i_5128_);
v___x_5132_ = lean_box(0);
return v___x_5132_;
}
else
{
lean_object* v_k_x27_5133_; uint8_t v___x_5134_; 
v_k_x27_5133_ = lean_array_fget_borrowed(v_keys_5126_, v_i_5128_);
v___x_5134_ = lean_name_eq(v_k_5129_, v_k_x27_5133_);
if (v___x_5134_ == 0)
{
lean_object* v___x_5135_; lean_object* v___x_5136_; 
v___x_5135_ = lean_unsigned_to_nat(1u);
v___x_5136_ = lean_nat_add(v_i_5128_, v___x_5135_);
lean_dec(v_i_5128_);
v_i_5128_ = v___x_5136_;
goto _start;
}
else
{
lean_object* v___x_5138_; lean_object* v___x_5139_; 
v___x_5138_ = lean_array_fget_borrowed(v_vals_5127_, v_i_5128_);
lean_dec(v_i_5128_);
lean_inc(v___x_5138_);
v___x_5139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5139_, 0, v___x_5138_);
return v___x_5139_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5140_, lean_object* v_vals_5141_, lean_object* v_i_5142_, lean_object* v_k_5143_){
_start:
{
lean_object* v_res_5144_; 
v_res_5144_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5140_, v_vals_5141_, v_i_5142_, v_k_5143_);
lean_dec(v_k_5143_);
lean_dec_ref(v_vals_5141_);
lean_dec_ref(v_keys_5140_);
return v_res_5144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg(lean_object* v_x_5145_, size_t v_x_5146_, lean_object* v_x_5147_){
_start:
{
if (lean_obj_tag(v_x_5145_) == 0)
{
lean_object* v_es_5148_; lean_object* v___x_5149_; size_t v___x_5150_; size_t v___x_5151_; lean_object* v_j_5152_; lean_object* v___x_5153_; 
v_es_5148_ = lean_ctor_get(v_x_5145_, 0);
v___x_5149_ = lean_box(2);
v___x_5150_ = ((size_t)31ULL);
v___x_5151_ = lean_usize_land(v_x_5146_, v___x_5150_);
v_j_5152_ = lean_usize_to_nat(v___x_5151_);
v___x_5153_ = lean_array_get_borrowed(v___x_5149_, v_es_5148_, v_j_5152_);
lean_dec(v_j_5152_);
switch(lean_obj_tag(v___x_5153_))
{
case 0:
{
lean_object* v_key_5154_; lean_object* v_val_5155_; uint8_t v___x_5156_; 
v_key_5154_ = lean_ctor_get(v___x_5153_, 0);
v_val_5155_ = lean_ctor_get(v___x_5153_, 1);
v___x_5156_ = lean_name_eq(v_x_5147_, v_key_5154_);
if (v___x_5156_ == 0)
{
lean_object* v___x_5157_; 
v___x_5157_ = lean_box(0);
return v___x_5157_;
}
else
{
lean_object* v___x_5158_; 
lean_inc(v_val_5155_);
v___x_5158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5158_, 0, v_val_5155_);
return v___x_5158_;
}
}
case 1:
{
lean_object* v_node_5159_; size_t v___x_5160_; size_t v___x_5161_; 
v_node_5159_ = lean_ctor_get(v___x_5153_, 0);
v___x_5160_ = ((size_t)5ULL);
v___x_5161_ = lean_usize_shift_right(v_x_5146_, v___x_5160_);
v_x_5145_ = v_node_5159_;
v_x_5146_ = v___x_5161_;
goto _start;
}
default: 
{
lean_object* v___x_5163_; 
v___x_5163_ = lean_box(0);
return v___x_5163_;
}
}
}
else
{
lean_object* v_ks_5164_; lean_object* v_vs_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; 
v_ks_5164_ = lean_ctor_get(v_x_5145_, 0);
v_vs_5165_ = lean_ctor_get(v_x_5145_, 1);
v___x_5166_ = lean_unsigned_to_nat(0u);
v___x_5167_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg(v_ks_5164_, v_vs_5165_, v___x_5166_, v_x_5147_);
return v___x_5167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_5168_, lean_object* v_x_5169_, lean_object* v_x_5170_){
_start:
{
size_t v_x_605__boxed_5171_; lean_object* v_res_5172_; 
v_x_605__boxed_5171_ = lean_unbox_usize(v_x_5169_);
lean_dec(v_x_5169_);
v_res_5172_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg(v_x_5168_, v_x_605__boxed_5171_, v_x_5170_);
lean_dec(v_x_5170_);
lean_dec_ref(v_x_5168_);
return v_res_5172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(lean_object* v_x_5173_, lean_object* v_x_5174_){
_start:
{
uint64_t v___y_5176_; 
if (lean_obj_tag(v_x_5174_) == 0)
{
uint64_t v___x_5179_; 
v___x_5179_ = 1723ULL;
v___y_5176_ = v___x_5179_;
goto v___jp_5175_;
}
else
{
uint64_t v_hash_5180_; 
v_hash_5180_ = lean_ctor_get_uint64(v_x_5174_, sizeof(void*)*2);
v___y_5176_ = v_hash_5180_;
goto v___jp_5175_;
}
v___jp_5175_:
{
size_t v___x_5177_; lean_object* v___x_5178_; 
v___x_5177_ = lean_uint64_to_usize(v___y_5176_);
v___x_5178_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg(v_x_5173_, v___x_5177_, v_x_5174_);
return v___x_5178_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg___boxed(lean_object* v_x_5181_, lean_object* v_x_5182_){
_start:
{
lean_object* v_res_5183_; 
v_res_5183_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(v_x_5181_, v_x_5182_);
lean_dec(v_x_5182_);
lean_dec_ref(v_x_5181_);
return v_res_5183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg(lean_object* v_declName_5184_, lean_object* v___y_5185_){
_start:
{
lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v_env_5189_; lean_object* v___x_5190_; lean_object* v_ext_5191_; lean_object* v_toEnvExtension_5192_; lean_object* v_asyncMode_5193_; lean_object* v___x_5194_; lean_object* v_instanceNames_5195_; lean_object* v___x_5196_; 
v___x_5187_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5188_ = lean_st_ref_get(v___y_5185_);
v_env_5189_ = lean_ctor_get(v___x_5188_, 0);
lean_inc_ref(v_env_5189_);
lean_dec(v___x_5188_);
v___x_5190_ = l_Lean_Meta_instanceExtension;
v_ext_5191_ = lean_ctor_get(v___x_5190_, 1);
v_toEnvExtension_5192_ = lean_ctor_get(v_ext_5191_, 0);
v_asyncMode_5193_ = lean_ctor_get(v_toEnvExtension_5192_, 2);
v___x_5194_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5187_, v___x_5190_, v_env_5189_, v_asyncMode_5193_);
v_instanceNames_5195_ = lean_ctor_get(v___x_5194_, 1);
lean_inc_ref(v_instanceNames_5195_);
lean_dec(v___x_5194_);
v___x_5196_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(v_instanceNames_5195_, v_declName_5184_);
lean_dec_ref(v_instanceNames_5195_);
if (lean_obj_tag(v___x_5196_) == 1)
{
lean_object* v_val_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5206_; 
v_val_5197_ = lean_ctor_get(v___x_5196_, 0);
v_isSharedCheck_5206_ = !lean_is_exclusive(v___x_5196_);
if (v_isSharedCheck_5206_ == 0)
{
v___x_5199_ = v___x_5196_;
v_isShared_5200_ = v_isSharedCheck_5206_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_val_5197_);
lean_dec(v___x_5196_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5206_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v_priority_5201_; lean_object* v___x_5203_; 
v_priority_5201_ = lean_ctor_get(v_val_5197_, 2);
lean_inc(v_priority_5201_);
lean_dec(v_val_5197_);
if (v_isShared_5200_ == 0)
{
lean_ctor_set(v___x_5199_, 0, v_priority_5201_);
v___x_5203_ = v___x_5199_;
goto v_reusejp_5202_;
}
else
{
lean_object* v_reuseFailAlloc_5205_; 
v_reuseFailAlloc_5205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5205_, 0, v_priority_5201_);
v___x_5203_ = v_reuseFailAlloc_5205_;
goto v_reusejp_5202_;
}
v_reusejp_5202_:
{
lean_object* v___x_5204_; 
v___x_5204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5204_, 0, v___x_5203_);
return v___x_5204_;
}
}
}
else
{
lean_object* v___x_5207_; lean_object* v___x_5208_; 
lean_dec(v___x_5196_);
v___x_5207_ = lean_box(0);
v___x_5208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5208_, 0, v___x_5207_);
return v___x_5208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg___boxed(lean_object* v_declName_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_){
_start:
{
lean_object* v_res_5212_; 
v_res_5212_ = l_Lean_Meta_getInstancePriority_x3f___redArg(v_declName_5209_, v___y_5210_);
lean_dec(v___y_5210_);
lean_dec(v_declName_5209_);
return v_res_5212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f(lean_object* v_declName_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_){
_start:
{
lean_object* v___x_5217_; 
v___x_5217_ = l_Lean_Meta_getInstancePriority_x3f___redArg(v_declName_5213_, v___y_5215_);
return v___x_5217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___boxed(lean_object* v_declName_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_){
_start:
{
lean_object* v_res_5222_; 
v_res_5222_ = l_Lean_Meta_getInstancePriority_x3f(v_declName_5218_, v___y_5219_, v___y_5220_);
lean_dec(v___y_5220_);
lean_dec_ref(v___y_5219_);
lean_dec(v_declName_5218_);
return v_res_5222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0(lean_object* v_00_u03b2_5223_, lean_object* v_x_5224_, lean_object* v_x_5225_){
_start:
{
lean_object* v___x_5226_; 
v___x_5226_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(v_x_5224_, v_x_5225_);
return v___x_5226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___boxed(lean_object* v_00_u03b2_5227_, lean_object* v_x_5228_, lean_object* v_x_5229_){
_start:
{
lean_object* v_res_5230_; 
v_res_5230_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0(v_00_u03b2_5227_, v_x_5228_, v_x_5229_);
lean_dec(v_x_5229_);
lean_dec_ref(v_x_5228_);
return v_res_5230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0(lean_object* v_00_u03b2_5231_, lean_object* v_x_5232_, size_t v_x_5233_, lean_object* v_x_5234_){
_start:
{
lean_object* v___x_5235_; 
v___x_5235_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___redArg(v_x_5232_, v_x_5233_, v_x_5234_);
return v___x_5235_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5236_, lean_object* v_x_5237_, lean_object* v_x_5238_, lean_object* v_x_5239_){
_start:
{
size_t v_x_725__boxed_5240_; lean_object* v_res_5241_; 
v_x_725__boxed_5240_ = lean_unbox_usize(v_x_5238_);
lean_dec(v_x_5238_);
v_res_5241_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0(v_00_u03b2_5236_, v_x_5237_, v_x_725__boxed_5240_, v_x_5239_);
lean_dec(v_x_5239_);
lean_dec_ref(v_x_5237_);
return v_res_5241_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5242_, lean_object* v_keys_5243_, lean_object* v_vals_5244_, lean_object* v_heq_5245_, lean_object* v_i_5246_, lean_object* v_k_5247_){
_start:
{
lean_object* v___x_5248_; 
v___x_5248_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5243_, v_vals_5244_, v_i_5246_, v_k_5247_);
return v___x_5248_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5249_, lean_object* v_keys_5250_, lean_object* v_vals_5251_, lean_object* v_heq_5252_, lean_object* v_i_5253_, lean_object* v_k_5254_){
_start:
{
lean_object* v_res_5255_; 
v_res_5255_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0_spec__0_spec__1(v_00_u03b2_5249_, v_keys_5250_, v_vals_5251_, v_heq_5252_, v_i_5253_, v_k_5254_);
lean_dec(v_k_5254_);
lean_dec_ref(v_vals_5251_);
lean_dec_ref(v_keys_5250_);
return v_res_5255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg(lean_object* v_declName_5256_, lean_object* v___y_5257_){
_start:
{
lean_object* v___x_5259_; lean_object* v___x_5260_; lean_object* v_env_5261_; lean_object* v___x_5262_; lean_object* v_ext_5263_; lean_object* v_toEnvExtension_5264_; lean_object* v_asyncMode_5265_; lean_object* v___x_5266_; lean_object* v_instanceNames_5267_; lean_object* v___x_5268_; 
v___x_5259_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5260_ = lean_st_ref_get(v___y_5257_);
v_env_5261_ = lean_ctor_get(v___x_5260_, 0);
lean_inc_ref(v_env_5261_);
lean_dec(v___x_5260_);
v___x_5262_ = l_Lean_Meta_instanceExtension;
v_ext_5263_ = lean_ctor_get(v___x_5262_, 1);
v_toEnvExtension_5264_ = lean_ctor_get(v_ext_5263_, 0);
v_asyncMode_5265_ = lean_ctor_get(v_toEnvExtension_5264_, 2);
v___x_5266_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5259_, v___x_5262_, v_env_5261_, v_asyncMode_5265_);
v_instanceNames_5267_ = lean_ctor_get(v___x_5266_, 1);
lean_inc_ref(v_instanceNames_5267_);
lean_dec(v___x_5266_);
v___x_5268_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_getInstancePriority_x3f_spec__0___redArg(v_instanceNames_5267_, v_declName_5256_);
lean_dec_ref(v_instanceNames_5267_);
if (lean_obj_tag(v___x_5268_) == 1)
{
lean_object* v_val_5269_; lean_object* v___x_5271_; uint8_t v_isShared_5272_; uint8_t v_isSharedCheck_5279_; 
v_val_5269_ = lean_ctor_get(v___x_5268_, 0);
v_isSharedCheck_5279_ = !lean_is_exclusive(v___x_5268_);
if (v_isSharedCheck_5279_ == 0)
{
v___x_5271_ = v___x_5268_;
v_isShared_5272_ = v_isSharedCheck_5279_;
goto v_resetjp_5270_;
}
else
{
lean_inc(v_val_5269_);
lean_dec(v___x_5268_);
v___x_5271_ = lean_box(0);
v_isShared_5272_ = v_isSharedCheck_5279_;
goto v_resetjp_5270_;
}
v_resetjp_5270_:
{
uint8_t v_attrKind_5273_; lean_object* v___x_5274_; lean_object* v___x_5276_; 
v_attrKind_5273_ = lean_ctor_get_uint8(v_val_5269_, sizeof(void*)*5);
lean_dec(v_val_5269_);
v___x_5274_ = lean_box(v_attrKind_5273_);
if (v_isShared_5272_ == 0)
{
lean_ctor_set(v___x_5271_, 0, v___x_5274_);
v___x_5276_ = v___x_5271_;
goto v_reusejp_5275_;
}
else
{
lean_object* v_reuseFailAlloc_5278_; 
v_reuseFailAlloc_5278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5278_, 0, v___x_5274_);
v___x_5276_ = v_reuseFailAlloc_5278_;
goto v_reusejp_5275_;
}
v_reusejp_5275_:
{
lean_object* v___x_5277_; 
v___x_5277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5277_, 0, v___x_5276_);
return v___x_5277_;
}
}
}
else
{
lean_object* v___x_5280_; lean_object* v___x_5281_; 
lean_dec(v___x_5268_);
v___x_5280_ = lean_box(0);
v___x_5281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5281_, 0, v___x_5280_);
return v___x_5281_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg___boxed(lean_object* v_declName_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_){
_start:
{
lean_object* v_res_5285_; 
v_res_5285_ = l_Lean_Meta_getInstanceAttrKind_x3f___redArg(v_declName_5282_, v___y_5283_);
lean_dec(v___y_5283_);
lean_dec(v_declName_5282_);
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f(lean_object* v_declName_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_){
_start:
{
lean_object* v___x_5290_; 
v___x_5290_ = l_Lean_Meta_getInstanceAttrKind_x3f___redArg(v_declName_5286_, v___y_5288_);
return v___x_5290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___boxed(lean_object* v_declName_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_){
_start:
{
lean_object* v_res_5295_; 
v_res_5295_ = l_Lean_Meta_getInstanceAttrKind_x3f(v_declName_5291_, v___y_5292_, v___y_5293_);
lean_dec(v___y_5293_);
lean_dec_ref(v___y_5292_);
lean_dec(v_declName_5291_);
return v_res_5295_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(lean_object* v_k_5300_, lean_object* v_v_5301_, lean_object* v_t_5302_){
_start:
{
if (lean_obj_tag(v_t_5302_) == 0)
{
lean_object* v_size_5303_; lean_object* v_k_5304_; lean_object* v_v_5305_; lean_object* v_l_5306_; lean_object* v_r_5307_; lean_object* v___x_5309_; uint8_t v_isShared_5310_; uint8_t v_isSharedCheck_5588_; 
v_size_5303_ = lean_ctor_get(v_t_5302_, 0);
v_k_5304_ = lean_ctor_get(v_t_5302_, 1);
v_v_5305_ = lean_ctor_get(v_t_5302_, 2);
v_l_5306_ = lean_ctor_get(v_t_5302_, 3);
v_r_5307_ = lean_ctor_get(v_t_5302_, 4);
v_isSharedCheck_5588_ = !lean_is_exclusive(v_t_5302_);
if (v_isSharedCheck_5588_ == 0)
{
v___x_5309_ = v_t_5302_;
v_isShared_5310_ = v_isSharedCheck_5588_;
goto v_resetjp_5308_;
}
else
{
lean_inc(v_r_5307_);
lean_inc(v_l_5306_);
lean_inc(v_v_5305_);
lean_inc(v_k_5304_);
lean_inc(v_size_5303_);
lean_dec(v_t_5302_);
v___x_5309_ = lean_box(0);
v_isShared_5310_ = v_isSharedCheck_5588_;
goto v_resetjp_5308_;
}
v_resetjp_5308_:
{
uint8_t v___x_5311_; 
v___x_5311_ = lean_nat_dec_lt(v_k_5304_, v_k_5300_);
if (v___x_5311_ == 0)
{
uint8_t v___x_5312_; 
v___x_5312_ = lean_nat_dec_eq(v_k_5304_, v_k_5300_);
if (v___x_5312_ == 0)
{
lean_object* v_impl_5313_; lean_object* v___x_5314_; 
lean_dec(v_size_5303_);
v_impl_5313_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5300_, v_v_5301_, v_r_5307_);
v___x_5314_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_5306_) == 0)
{
lean_object* v_size_5315_; lean_object* v_size_5316_; lean_object* v_k_5317_; lean_object* v_v_5318_; lean_object* v_l_5319_; lean_object* v_r_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; uint8_t v___x_5323_; 
v_size_5315_ = lean_ctor_get(v_l_5306_, 0);
v_size_5316_ = lean_ctor_get(v_impl_5313_, 0);
lean_inc(v_size_5316_);
v_k_5317_ = lean_ctor_get(v_impl_5313_, 1);
lean_inc(v_k_5317_);
v_v_5318_ = lean_ctor_get(v_impl_5313_, 2);
lean_inc(v_v_5318_);
v_l_5319_ = lean_ctor_get(v_impl_5313_, 3);
lean_inc(v_l_5319_);
v_r_5320_ = lean_ctor_get(v_impl_5313_, 4);
lean_inc(v_r_5320_);
v___x_5321_ = lean_unsigned_to_nat(3u);
v___x_5322_ = lean_nat_mul(v___x_5321_, v_size_5315_);
v___x_5323_ = lean_nat_dec_lt(v___x_5322_, v_size_5316_);
lean_dec(v___x_5322_);
if (v___x_5323_ == 0)
{
lean_object* v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5327_; 
lean_dec(v_r_5320_);
lean_dec(v_l_5319_);
lean_dec(v_v_5318_);
lean_dec(v_k_5317_);
v___x_5324_ = lean_nat_add(v___x_5314_, v_size_5315_);
v___x_5325_ = lean_nat_add(v___x_5324_, v_size_5316_);
lean_dec(v_size_5316_);
lean_dec(v___x_5324_);
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 4, v_impl_5313_);
lean_ctor_set(v___x_5309_, 0, v___x_5325_);
v___x_5327_ = v___x_5309_;
goto v_reusejp_5326_;
}
else
{
lean_object* v_reuseFailAlloc_5328_; 
v_reuseFailAlloc_5328_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5328_, 0, v___x_5325_);
lean_ctor_set(v_reuseFailAlloc_5328_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5328_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5328_, 3, v_l_5306_);
lean_ctor_set(v_reuseFailAlloc_5328_, 4, v_impl_5313_);
v___x_5327_ = v_reuseFailAlloc_5328_;
goto v_reusejp_5326_;
}
v_reusejp_5326_:
{
return v___x_5327_;
}
}
else
{
lean_object* v___x_5330_; uint8_t v_isShared_5331_; uint8_t v_isSharedCheck_5392_; 
v_isSharedCheck_5392_ = !lean_is_exclusive(v_impl_5313_);
if (v_isSharedCheck_5392_ == 0)
{
lean_object* v_unused_5393_; lean_object* v_unused_5394_; lean_object* v_unused_5395_; lean_object* v_unused_5396_; lean_object* v_unused_5397_; 
v_unused_5393_ = lean_ctor_get(v_impl_5313_, 4);
lean_dec(v_unused_5393_);
v_unused_5394_ = lean_ctor_get(v_impl_5313_, 3);
lean_dec(v_unused_5394_);
v_unused_5395_ = lean_ctor_get(v_impl_5313_, 2);
lean_dec(v_unused_5395_);
v_unused_5396_ = lean_ctor_get(v_impl_5313_, 1);
lean_dec(v_unused_5396_);
v_unused_5397_ = lean_ctor_get(v_impl_5313_, 0);
lean_dec(v_unused_5397_);
v___x_5330_ = v_impl_5313_;
v_isShared_5331_ = v_isSharedCheck_5392_;
goto v_resetjp_5329_;
}
else
{
lean_dec(v_impl_5313_);
v___x_5330_ = lean_box(0);
v_isShared_5331_ = v_isSharedCheck_5392_;
goto v_resetjp_5329_;
}
v_resetjp_5329_:
{
lean_object* v_size_5332_; lean_object* v_k_5333_; lean_object* v_v_5334_; lean_object* v_l_5335_; lean_object* v_r_5336_; lean_object* v_size_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; uint8_t v___x_5340_; 
v_size_5332_ = lean_ctor_get(v_l_5319_, 0);
v_k_5333_ = lean_ctor_get(v_l_5319_, 1);
v_v_5334_ = lean_ctor_get(v_l_5319_, 2);
v_l_5335_ = lean_ctor_get(v_l_5319_, 3);
v_r_5336_ = lean_ctor_get(v_l_5319_, 4);
v_size_5337_ = lean_ctor_get(v_r_5320_, 0);
v___x_5338_ = lean_unsigned_to_nat(2u);
v___x_5339_ = lean_nat_mul(v___x_5338_, v_size_5337_);
v___x_5340_ = lean_nat_dec_lt(v_size_5332_, v___x_5339_);
lean_dec(v___x_5339_);
if (v___x_5340_ == 0)
{
lean_object* v___x_5342_; uint8_t v_isShared_5343_; uint8_t v_isSharedCheck_5368_; 
lean_inc(v_r_5336_);
lean_inc(v_l_5335_);
lean_inc(v_v_5334_);
lean_inc(v_k_5333_);
v_isSharedCheck_5368_ = !lean_is_exclusive(v_l_5319_);
if (v_isSharedCheck_5368_ == 0)
{
lean_object* v_unused_5369_; lean_object* v_unused_5370_; lean_object* v_unused_5371_; lean_object* v_unused_5372_; lean_object* v_unused_5373_; 
v_unused_5369_ = lean_ctor_get(v_l_5319_, 4);
lean_dec(v_unused_5369_);
v_unused_5370_ = lean_ctor_get(v_l_5319_, 3);
lean_dec(v_unused_5370_);
v_unused_5371_ = lean_ctor_get(v_l_5319_, 2);
lean_dec(v_unused_5371_);
v_unused_5372_ = lean_ctor_get(v_l_5319_, 1);
lean_dec(v_unused_5372_);
v_unused_5373_ = lean_ctor_get(v_l_5319_, 0);
lean_dec(v_unused_5373_);
v___x_5342_ = v_l_5319_;
v_isShared_5343_ = v_isSharedCheck_5368_;
goto v_resetjp_5341_;
}
else
{
lean_dec(v_l_5319_);
v___x_5342_ = lean_box(0);
v_isShared_5343_ = v_isSharedCheck_5368_;
goto v_resetjp_5341_;
}
v_resetjp_5341_:
{
lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___y_5347_; lean_object* v___y_5348_; lean_object* v___y_5349_; lean_object* v___y_5358_; 
v___x_5344_ = lean_nat_add(v___x_5314_, v_size_5315_);
v___x_5345_ = lean_nat_add(v___x_5344_, v_size_5316_);
lean_dec(v_size_5316_);
if (lean_obj_tag(v_l_5335_) == 0)
{
lean_object* v_size_5366_; 
v_size_5366_ = lean_ctor_get(v_l_5335_, 0);
lean_inc(v_size_5366_);
v___y_5358_ = v_size_5366_;
goto v___jp_5357_;
}
else
{
lean_object* v___x_5367_; 
v___x_5367_ = lean_unsigned_to_nat(0u);
v___y_5358_ = v___x_5367_;
goto v___jp_5357_;
}
v___jp_5346_:
{
lean_object* v___x_5350_; lean_object* v___x_5352_; 
v___x_5350_ = lean_nat_add(v___y_5347_, v___y_5349_);
lean_dec(v___y_5349_);
lean_dec(v___y_5347_);
if (v_isShared_5343_ == 0)
{
lean_ctor_set(v___x_5342_, 4, v_r_5320_);
lean_ctor_set(v___x_5342_, 3, v_r_5336_);
lean_ctor_set(v___x_5342_, 2, v_v_5318_);
lean_ctor_set(v___x_5342_, 1, v_k_5317_);
lean_ctor_set(v___x_5342_, 0, v___x_5350_);
v___x_5352_ = v___x_5342_;
goto v_reusejp_5351_;
}
else
{
lean_object* v_reuseFailAlloc_5356_; 
v_reuseFailAlloc_5356_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5356_, 0, v___x_5350_);
lean_ctor_set(v_reuseFailAlloc_5356_, 1, v_k_5317_);
lean_ctor_set(v_reuseFailAlloc_5356_, 2, v_v_5318_);
lean_ctor_set(v_reuseFailAlloc_5356_, 3, v_r_5336_);
lean_ctor_set(v_reuseFailAlloc_5356_, 4, v_r_5320_);
v___x_5352_ = v_reuseFailAlloc_5356_;
goto v_reusejp_5351_;
}
v_reusejp_5351_:
{
lean_object* v___x_5354_; 
if (v_isShared_5331_ == 0)
{
lean_ctor_set(v___x_5330_, 4, v___x_5352_);
lean_ctor_set(v___x_5330_, 3, v___y_5348_);
lean_ctor_set(v___x_5330_, 2, v_v_5334_);
lean_ctor_set(v___x_5330_, 1, v_k_5333_);
lean_ctor_set(v___x_5330_, 0, v___x_5345_);
v___x_5354_ = v___x_5330_;
goto v_reusejp_5353_;
}
else
{
lean_object* v_reuseFailAlloc_5355_; 
v_reuseFailAlloc_5355_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5355_, 0, v___x_5345_);
lean_ctor_set(v_reuseFailAlloc_5355_, 1, v_k_5333_);
lean_ctor_set(v_reuseFailAlloc_5355_, 2, v_v_5334_);
lean_ctor_set(v_reuseFailAlloc_5355_, 3, v___y_5348_);
lean_ctor_set(v_reuseFailAlloc_5355_, 4, v___x_5352_);
v___x_5354_ = v_reuseFailAlloc_5355_;
goto v_reusejp_5353_;
}
v_reusejp_5353_:
{
return v___x_5354_;
}
}
}
v___jp_5357_:
{
lean_object* v___x_5359_; lean_object* v___x_5361_; 
v___x_5359_ = lean_nat_add(v___x_5344_, v___y_5358_);
lean_dec(v___y_5358_);
lean_dec(v___x_5344_);
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 4, v_l_5335_);
lean_ctor_set(v___x_5309_, 0, v___x_5359_);
v___x_5361_ = v___x_5309_;
goto v_reusejp_5360_;
}
else
{
lean_object* v_reuseFailAlloc_5365_; 
v_reuseFailAlloc_5365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5365_, 0, v___x_5359_);
lean_ctor_set(v_reuseFailAlloc_5365_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5365_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5365_, 3, v_l_5306_);
lean_ctor_set(v_reuseFailAlloc_5365_, 4, v_l_5335_);
v___x_5361_ = v_reuseFailAlloc_5365_;
goto v_reusejp_5360_;
}
v_reusejp_5360_:
{
lean_object* v___x_5362_; 
v___x_5362_ = lean_nat_add(v___x_5314_, v_size_5337_);
if (lean_obj_tag(v_r_5336_) == 0)
{
lean_object* v_size_5363_; 
v_size_5363_ = lean_ctor_get(v_r_5336_, 0);
lean_inc(v_size_5363_);
v___y_5347_ = v___x_5362_;
v___y_5348_ = v___x_5361_;
v___y_5349_ = v_size_5363_;
goto v___jp_5346_;
}
else
{
lean_object* v___x_5364_; 
v___x_5364_ = lean_unsigned_to_nat(0u);
v___y_5347_ = v___x_5362_;
v___y_5348_ = v___x_5361_;
v___y_5349_ = v___x_5364_;
goto v___jp_5346_;
}
}
}
}
}
else
{
lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5378_; 
lean_del_object(v___x_5309_);
v___x_5374_ = lean_nat_add(v___x_5314_, v_size_5315_);
v___x_5375_ = lean_nat_add(v___x_5374_, v_size_5316_);
lean_dec(v_size_5316_);
v___x_5376_ = lean_nat_add(v___x_5374_, v_size_5332_);
lean_dec(v___x_5374_);
lean_inc_ref(v_l_5306_);
if (v_isShared_5331_ == 0)
{
lean_ctor_set(v___x_5330_, 4, v_l_5319_);
lean_ctor_set(v___x_5330_, 3, v_l_5306_);
lean_ctor_set(v___x_5330_, 2, v_v_5305_);
lean_ctor_set(v___x_5330_, 1, v_k_5304_);
lean_ctor_set(v___x_5330_, 0, v___x_5376_);
v___x_5378_ = v___x_5330_;
goto v_reusejp_5377_;
}
else
{
lean_object* v_reuseFailAlloc_5391_; 
v_reuseFailAlloc_5391_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5391_, 0, v___x_5376_);
lean_ctor_set(v_reuseFailAlloc_5391_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5391_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5391_, 3, v_l_5306_);
lean_ctor_set(v_reuseFailAlloc_5391_, 4, v_l_5319_);
v___x_5378_ = v_reuseFailAlloc_5391_;
goto v_reusejp_5377_;
}
v_reusejp_5377_:
{
lean_object* v___x_5380_; uint8_t v_isShared_5381_; uint8_t v_isSharedCheck_5385_; 
v_isSharedCheck_5385_ = !lean_is_exclusive(v_l_5306_);
if (v_isSharedCheck_5385_ == 0)
{
lean_object* v_unused_5386_; lean_object* v_unused_5387_; lean_object* v_unused_5388_; lean_object* v_unused_5389_; lean_object* v_unused_5390_; 
v_unused_5386_ = lean_ctor_get(v_l_5306_, 4);
lean_dec(v_unused_5386_);
v_unused_5387_ = lean_ctor_get(v_l_5306_, 3);
lean_dec(v_unused_5387_);
v_unused_5388_ = lean_ctor_get(v_l_5306_, 2);
lean_dec(v_unused_5388_);
v_unused_5389_ = lean_ctor_get(v_l_5306_, 1);
lean_dec(v_unused_5389_);
v_unused_5390_ = lean_ctor_get(v_l_5306_, 0);
lean_dec(v_unused_5390_);
v___x_5380_ = v_l_5306_;
v_isShared_5381_ = v_isSharedCheck_5385_;
goto v_resetjp_5379_;
}
else
{
lean_dec(v_l_5306_);
v___x_5380_ = lean_box(0);
v_isShared_5381_ = v_isSharedCheck_5385_;
goto v_resetjp_5379_;
}
v_resetjp_5379_:
{
lean_object* v___x_5383_; 
if (v_isShared_5381_ == 0)
{
lean_ctor_set(v___x_5380_, 4, v_r_5320_);
lean_ctor_set(v___x_5380_, 3, v___x_5378_);
lean_ctor_set(v___x_5380_, 2, v_v_5318_);
lean_ctor_set(v___x_5380_, 1, v_k_5317_);
lean_ctor_set(v___x_5380_, 0, v___x_5375_);
v___x_5383_ = v___x_5380_;
goto v_reusejp_5382_;
}
else
{
lean_object* v_reuseFailAlloc_5384_; 
v_reuseFailAlloc_5384_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5384_, 0, v___x_5375_);
lean_ctor_set(v_reuseFailAlloc_5384_, 1, v_k_5317_);
lean_ctor_set(v_reuseFailAlloc_5384_, 2, v_v_5318_);
lean_ctor_set(v_reuseFailAlloc_5384_, 3, v___x_5378_);
lean_ctor_set(v_reuseFailAlloc_5384_, 4, v_r_5320_);
v___x_5383_ = v_reuseFailAlloc_5384_;
goto v_reusejp_5382_;
}
v_reusejp_5382_:
{
return v___x_5383_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_5398_; 
v_l_5398_ = lean_ctor_get(v_impl_5313_, 3);
lean_inc(v_l_5398_);
if (lean_obj_tag(v_l_5398_) == 0)
{
lean_object* v_r_5399_; lean_object* v_k_5400_; lean_object* v_v_5401_; lean_object* v___x_5403_; uint8_t v_isShared_5404_; uint8_t v_isSharedCheck_5424_; 
v_r_5399_ = lean_ctor_get(v_impl_5313_, 4);
v_k_5400_ = lean_ctor_get(v_impl_5313_, 1);
v_v_5401_ = lean_ctor_get(v_impl_5313_, 2);
v_isSharedCheck_5424_ = !lean_is_exclusive(v_impl_5313_);
if (v_isSharedCheck_5424_ == 0)
{
lean_object* v_unused_5425_; lean_object* v_unused_5426_; 
v_unused_5425_ = lean_ctor_get(v_impl_5313_, 3);
lean_dec(v_unused_5425_);
v_unused_5426_ = lean_ctor_get(v_impl_5313_, 0);
lean_dec(v_unused_5426_);
v___x_5403_ = v_impl_5313_;
v_isShared_5404_ = v_isSharedCheck_5424_;
goto v_resetjp_5402_;
}
else
{
lean_inc(v_r_5399_);
lean_inc(v_v_5401_);
lean_inc(v_k_5400_);
lean_dec(v_impl_5313_);
v___x_5403_ = lean_box(0);
v_isShared_5404_ = v_isSharedCheck_5424_;
goto v_resetjp_5402_;
}
v_resetjp_5402_:
{
lean_object* v_k_5405_; lean_object* v_v_5406_; lean_object* v___x_5408_; uint8_t v_isShared_5409_; uint8_t v_isSharedCheck_5420_; 
v_k_5405_ = lean_ctor_get(v_l_5398_, 1);
v_v_5406_ = lean_ctor_get(v_l_5398_, 2);
v_isSharedCheck_5420_ = !lean_is_exclusive(v_l_5398_);
if (v_isSharedCheck_5420_ == 0)
{
lean_object* v_unused_5421_; lean_object* v_unused_5422_; lean_object* v_unused_5423_; 
v_unused_5421_ = lean_ctor_get(v_l_5398_, 4);
lean_dec(v_unused_5421_);
v_unused_5422_ = lean_ctor_get(v_l_5398_, 3);
lean_dec(v_unused_5422_);
v_unused_5423_ = lean_ctor_get(v_l_5398_, 0);
lean_dec(v_unused_5423_);
v___x_5408_ = v_l_5398_;
v_isShared_5409_ = v_isSharedCheck_5420_;
goto v_resetjp_5407_;
}
else
{
lean_inc(v_v_5406_);
lean_inc(v_k_5405_);
lean_dec(v_l_5398_);
v___x_5408_ = lean_box(0);
v_isShared_5409_ = v_isSharedCheck_5420_;
goto v_resetjp_5407_;
}
v_resetjp_5407_:
{
lean_object* v___x_5410_; lean_object* v___x_5412_; 
v___x_5410_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_5399_, 2);
if (v_isShared_5409_ == 0)
{
lean_ctor_set(v___x_5408_, 4, v_r_5399_);
lean_ctor_set(v___x_5408_, 3, v_r_5399_);
lean_ctor_set(v___x_5408_, 2, v_v_5305_);
lean_ctor_set(v___x_5408_, 1, v_k_5304_);
lean_ctor_set(v___x_5408_, 0, v___x_5314_);
v___x_5412_ = v___x_5408_;
goto v_reusejp_5411_;
}
else
{
lean_object* v_reuseFailAlloc_5419_; 
v_reuseFailAlloc_5419_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5419_, 0, v___x_5314_);
lean_ctor_set(v_reuseFailAlloc_5419_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5419_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5419_, 3, v_r_5399_);
lean_ctor_set(v_reuseFailAlloc_5419_, 4, v_r_5399_);
v___x_5412_ = v_reuseFailAlloc_5419_;
goto v_reusejp_5411_;
}
v_reusejp_5411_:
{
lean_object* v___x_5414_; 
lean_inc(v_r_5399_);
if (v_isShared_5404_ == 0)
{
lean_ctor_set(v___x_5403_, 3, v_r_5399_);
lean_ctor_set(v___x_5403_, 0, v___x_5314_);
v___x_5414_ = v___x_5403_;
goto v_reusejp_5413_;
}
else
{
lean_object* v_reuseFailAlloc_5418_; 
v_reuseFailAlloc_5418_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5418_, 0, v___x_5314_);
lean_ctor_set(v_reuseFailAlloc_5418_, 1, v_k_5400_);
lean_ctor_set(v_reuseFailAlloc_5418_, 2, v_v_5401_);
lean_ctor_set(v_reuseFailAlloc_5418_, 3, v_r_5399_);
lean_ctor_set(v_reuseFailAlloc_5418_, 4, v_r_5399_);
v___x_5414_ = v_reuseFailAlloc_5418_;
goto v_reusejp_5413_;
}
v_reusejp_5413_:
{
lean_object* v___x_5416_; 
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 4, v___x_5414_);
lean_ctor_set(v___x_5309_, 3, v___x_5412_);
lean_ctor_set(v___x_5309_, 2, v_v_5406_);
lean_ctor_set(v___x_5309_, 1, v_k_5405_);
lean_ctor_set(v___x_5309_, 0, v___x_5410_);
v___x_5416_ = v___x_5309_;
goto v_reusejp_5415_;
}
else
{
lean_object* v_reuseFailAlloc_5417_; 
v_reuseFailAlloc_5417_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5417_, 0, v___x_5410_);
lean_ctor_set(v_reuseFailAlloc_5417_, 1, v_k_5405_);
lean_ctor_set(v_reuseFailAlloc_5417_, 2, v_v_5406_);
lean_ctor_set(v_reuseFailAlloc_5417_, 3, v___x_5412_);
lean_ctor_set(v_reuseFailAlloc_5417_, 4, v___x_5414_);
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
}
else
{
lean_object* v_r_5427_; 
v_r_5427_ = lean_ctor_get(v_impl_5313_, 4);
lean_inc(v_r_5427_);
if (lean_obj_tag(v_r_5427_) == 0)
{
lean_object* v_k_5428_; lean_object* v_v_5429_; lean_object* v___x_5431_; uint8_t v_isShared_5432_; uint8_t v_isSharedCheck_5440_; 
v_k_5428_ = lean_ctor_get(v_impl_5313_, 1);
v_v_5429_ = lean_ctor_get(v_impl_5313_, 2);
v_isSharedCheck_5440_ = !lean_is_exclusive(v_impl_5313_);
if (v_isSharedCheck_5440_ == 0)
{
lean_object* v_unused_5441_; lean_object* v_unused_5442_; lean_object* v_unused_5443_; 
v_unused_5441_ = lean_ctor_get(v_impl_5313_, 4);
lean_dec(v_unused_5441_);
v_unused_5442_ = lean_ctor_get(v_impl_5313_, 3);
lean_dec(v_unused_5442_);
v_unused_5443_ = lean_ctor_get(v_impl_5313_, 0);
lean_dec(v_unused_5443_);
v___x_5431_ = v_impl_5313_;
v_isShared_5432_ = v_isSharedCheck_5440_;
goto v_resetjp_5430_;
}
else
{
lean_inc(v_v_5429_);
lean_inc(v_k_5428_);
lean_dec(v_impl_5313_);
v___x_5431_ = lean_box(0);
v_isShared_5432_ = v_isSharedCheck_5440_;
goto v_resetjp_5430_;
}
v_resetjp_5430_:
{
lean_object* v___x_5433_; lean_object* v___x_5435_; 
v___x_5433_ = lean_unsigned_to_nat(3u);
if (v_isShared_5432_ == 0)
{
lean_ctor_set(v___x_5431_, 4, v_l_5398_);
lean_ctor_set(v___x_5431_, 2, v_v_5305_);
lean_ctor_set(v___x_5431_, 1, v_k_5304_);
lean_ctor_set(v___x_5431_, 0, v___x_5314_);
v___x_5435_ = v___x_5431_;
goto v_reusejp_5434_;
}
else
{
lean_object* v_reuseFailAlloc_5439_; 
v_reuseFailAlloc_5439_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5439_, 0, v___x_5314_);
lean_ctor_set(v_reuseFailAlloc_5439_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5439_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5439_, 3, v_l_5398_);
lean_ctor_set(v_reuseFailAlloc_5439_, 4, v_l_5398_);
v___x_5435_ = v_reuseFailAlloc_5439_;
goto v_reusejp_5434_;
}
v_reusejp_5434_:
{
lean_object* v___x_5437_; 
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 4, v_r_5427_);
lean_ctor_set(v___x_5309_, 3, v___x_5435_);
lean_ctor_set(v___x_5309_, 2, v_v_5429_);
lean_ctor_set(v___x_5309_, 1, v_k_5428_);
lean_ctor_set(v___x_5309_, 0, v___x_5433_);
v___x_5437_ = v___x_5309_;
goto v_reusejp_5436_;
}
else
{
lean_object* v_reuseFailAlloc_5438_; 
v_reuseFailAlloc_5438_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5438_, 0, v___x_5433_);
lean_ctor_set(v_reuseFailAlloc_5438_, 1, v_k_5428_);
lean_ctor_set(v_reuseFailAlloc_5438_, 2, v_v_5429_);
lean_ctor_set(v_reuseFailAlloc_5438_, 3, v___x_5435_);
lean_ctor_set(v_reuseFailAlloc_5438_, 4, v_r_5427_);
v___x_5437_ = v_reuseFailAlloc_5438_;
goto v_reusejp_5436_;
}
v_reusejp_5436_:
{
return v___x_5437_;
}
}
}
}
else
{
lean_object* v___x_5444_; lean_object* v___x_5446_; 
v___x_5444_ = lean_unsigned_to_nat(2u);
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 4, v_impl_5313_);
lean_ctor_set(v___x_5309_, 3, v_r_5427_);
lean_ctor_set(v___x_5309_, 0, v___x_5444_);
v___x_5446_ = v___x_5309_;
goto v_reusejp_5445_;
}
else
{
lean_object* v_reuseFailAlloc_5447_; 
v_reuseFailAlloc_5447_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5447_, 0, v___x_5444_);
lean_ctor_set(v_reuseFailAlloc_5447_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5447_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5447_, 3, v_r_5427_);
lean_ctor_set(v_reuseFailAlloc_5447_, 4, v_impl_5313_);
v___x_5446_ = v_reuseFailAlloc_5447_;
goto v_reusejp_5445_;
}
v_reusejp_5445_:
{
return v___x_5446_;
}
}
}
}
}
else
{
lean_object* v___x_5449_; 
lean_dec(v_v_5305_);
lean_dec(v_k_5304_);
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 2, v_v_5301_);
lean_ctor_set(v___x_5309_, 1, v_k_5300_);
v___x_5449_ = v___x_5309_;
goto v_reusejp_5448_;
}
else
{
lean_object* v_reuseFailAlloc_5450_; 
v_reuseFailAlloc_5450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5450_, 0, v_size_5303_);
lean_ctor_set(v_reuseFailAlloc_5450_, 1, v_k_5300_);
lean_ctor_set(v_reuseFailAlloc_5450_, 2, v_v_5301_);
lean_ctor_set(v_reuseFailAlloc_5450_, 3, v_l_5306_);
lean_ctor_set(v_reuseFailAlloc_5450_, 4, v_r_5307_);
v___x_5449_ = v_reuseFailAlloc_5450_;
goto v_reusejp_5448_;
}
v_reusejp_5448_:
{
return v___x_5449_;
}
}
}
else
{
lean_object* v_impl_5451_; lean_object* v___x_5452_; 
lean_dec(v_size_5303_);
v_impl_5451_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5300_, v_v_5301_, v_l_5306_);
v___x_5452_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_5307_) == 0)
{
lean_object* v_size_5453_; lean_object* v_size_5454_; lean_object* v_k_5455_; lean_object* v_v_5456_; lean_object* v_l_5457_; lean_object* v_r_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; uint8_t v___x_5461_; 
v_size_5453_ = lean_ctor_get(v_r_5307_, 0);
v_size_5454_ = lean_ctor_get(v_impl_5451_, 0);
lean_inc(v_size_5454_);
v_k_5455_ = lean_ctor_get(v_impl_5451_, 1);
lean_inc(v_k_5455_);
v_v_5456_ = lean_ctor_get(v_impl_5451_, 2);
lean_inc(v_v_5456_);
v_l_5457_ = lean_ctor_get(v_impl_5451_, 3);
lean_inc(v_l_5457_);
v_r_5458_ = lean_ctor_get(v_impl_5451_, 4);
lean_inc(v_r_5458_);
v___x_5459_ = lean_unsigned_to_nat(3u);
v___x_5460_ = lean_nat_mul(v___x_5459_, v_size_5453_);
v___x_5461_ = lean_nat_dec_lt(v___x_5460_, v_size_5454_);
lean_dec(v___x_5460_);
if (v___x_5461_ == 0)
{
lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5465_; 
lean_dec(v_r_5458_);
lean_dec(v_l_5457_);
lean_dec(v_v_5456_);
lean_dec(v_k_5455_);
v___x_5462_ = lean_nat_add(v___x_5452_, v_size_5454_);
lean_dec(v_size_5454_);
v___x_5463_ = lean_nat_add(v___x_5462_, v_size_5453_);
lean_dec(v___x_5462_);
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 3, v_impl_5451_);
lean_ctor_set(v___x_5309_, 0, v___x_5463_);
v___x_5465_ = v___x_5309_;
goto v_reusejp_5464_;
}
else
{
lean_object* v_reuseFailAlloc_5466_; 
v_reuseFailAlloc_5466_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5466_, 0, v___x_5463_);
lean_ctor_set(v_reuseFailAlloc_5466_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5466_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5466_, 3, v_impl_5451_);
lean_ctor_set(v_reuseFailAlloc_5466_, 4, v_r_5307_);
v___x_5465_ = v_reuseFailAlloc_5466_;
goto v_reusejp_5464_;
}
v_reusejp_5464_:
{
return v___x_5465_;
}
}
else
{
lean_object* v___x_5468_; uint8_t v_isShared_5469_; uint8_t v_isSharedCheck_5532_; 
v_isSharedCheck_5532_ = !lean_is_exclusive(v_impl_5451_);
if (v_isSharedCheck_5532_ == 0)
{
lean_object* v_unused_5533_; lean_object* v_unused_5534_; lean_object* v_unused_5535_; lean_object* v_unused_5536_; lean_object* v_unused_5537_; 
v_unused_5533_ = lean_ctor_get(v_impl_5451_, 4);
lean_dec(v_unused_5533_);
v_unused_5534_ = lean_ctor_get(v_impl_5451_, 3);
lean_dec(v_unused_5534_);
v_unused_5535_ = lean_ctor_get(v_impl_5451_, 2);
lean_dec(v_unused_5535_);
v_unused_5536_ = lean_ctor_get(v_impl_5451_, 1);
lean_dec(v_unused_5536_);
v_unused_5537_ = lean_ctor_get(v_impl_5451_, 0);
lean_dec(v_unused_5537_);
v___x_5468_ = v_impl_5451_;
v_isShared_5469_ = v_isSharedCheck_5532_;
goto v_resetjp_5467_;
}
else
{
lean_dec(v_impl_5451_);
v___x_5468_ = lean_box(0);
v_isShared_5469_ = v_isSharedCheck_5532_;
goto v_resetjp_5467_;
}
v_resetjp_5467_:
{
lean_object* v_size_5470_; lean_object* v_size_5471_; lean_object* v_k_5472_; lean_object* v_v_5473_; lean_object* v_l_5474_; lean_object* v_r_5475_; lean_object* v___x_5476_; lean_object* v___x_5477_; uint8_t v___x_5478_; 
v_size_5470_ = lean_ctor_get(v_l_5457_, 0);
v_size_5471_ = lean_ctor_get(v_r_5458_, 0);
v_k_5472_ = lean_ctor_get(v_r_5458_, 1);
v_v_5473_ = lean_ctor_get(v_r_5458_, 2);
v_l_5474_ = lean_ctor_get(v_r_5458_, 3);
v_r_5475_ = lean_ctor_get(v_r_5458_, 4);
v___x_5476_ = lean_unsigned_to_nat(2u);
v___x_5477_ = lean_nat_mul(v___x_5476_, v_size_5470_);
v___x_5478_ = lean_nat_dec_lt(v_size_5471_, v___x_5477_);
lean_dec(v___x_5477_);
if (v___x_5478_ == 0)
{
lean_object* v___x_5480_; uint8_t v_isShared_5481_; uint8_t v_isSharedCheck_5507_; 
lean_inc(v_r_5475_);
lean_inc(v_l_5474_);
lean_inc(v_v_5473_);
lean_inc(v_k_5472_);
v_isSharedCheck_5507_ = !lean_is_exclusive(v_r_5458_);
if (v_isSharedCheck_5507_ == 0)
{
lean_object* v_unused_5508_; lean_object* v_unused_5509_; lean_object* v_unused_5510_; lean_object* v_unused_5511_; lean_object* v_unused_5512_; 
v_unused_5508_ = lean_ctor_get(v_r_5458_, 4);
lean_dec(v_unused_5508_);
v_unused_5509_ = lean_ctor_get(v_r_5458_, 3);
lean_dec(v_unused_5509_);
v_unused_5510_ = lean_ctor_get(v_r_5458_, 2);
lean_dec(v_unused_5510_);
v_unused_5511_ = lean_ctor_get(v_r_5458_, 1);
lean_dec(v_unused_5511_);
v_unused_5512_ = lean_ctor_get(v_r_5458_, 0);
lean_dec(v_unused_5512_);
v___x_5480_ = v_r_5458_;
v_isShared_5481_ = v_isSharedCheck_5507_;
goto v_resetjp_5479_;
}
else
{
lean_dec(v_r_5458_);
v___x_5480_ = lean_box(0);
v_isShared_5481_ = v_isSharedCheck_5507_;
goto v_resetjp_5479_;
}
v_resetjp_5479_:
{
lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___y_5485_; lean_object* v___y_5486_; lean_object* v___y_5487_; lean_object* v___x_5495_; lean_object* v___y_5497_; 
v___x_5482_ = lean_nat_add(v___x_5452_, v_size_5454_);
lean_dec(v_size_5454_);
v___x_5483_ = lean_nat_add(v___x_5482_, v_size_5453_);
lean_dec(v___x_5482_);
v___x_5495_ = lean_nat_add(v___x_5452_, v_size_5470_);
if (lean_obj_tag(v_l_5474_) == 0)
{
lean_object* v_size_5505_; 
v_size_5505_ = lean_ctor_get(v_l_5474_, 0);
lean_inc(v_size_5505_);
v___y_5497_ = v_size_5505_;
goto v___jp_5496_;
}
else
{
lean_object* v___x_5506_; 
v___x_5506_ = lean_unsigned_to_nat(0u);
v___y_5497_ = v___x_5506_;
goto v___jp_5496_;
}
v___jp_5484_:
{
lean_object* v___x_5488_; lean_object* v___x_5490_; 
v___x_5488_ = lean_nat_add(v___y_5486_, v___y_5487_);
lean_dec(v___y_5487_);
lean_dec(v___y_5486_);
if (v_isShared_5481_ == 0)
{
lean_ctor_set(v___x_5480_, 4, v_r_5307_);
lean_ctor_set(v___x_5480_, 3, v_r_5475_);
lean_ctor_set(v___x_5480_, 2, v_v_5305_);
lean_ctor_set(v___x_5480_, 1, v_k_5304_);
lean_ctor_set(v___x_5480_, 0, v___x_5488_);
v___x_5490_ = v___x_5480_;
goto v_reusejp_5489_;
}
else
{
lean_object* v_reuseFailAlloc_5494_; 
v_reuseFailAlloc_5494_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5494_, 0, v___x_5488_);
lean_ctor_set(v_reuseFailAlloc_5494_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5494_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5494_, 3, v_r_5475_);
lean_ctor_set(v_reuseFailAlloc_5494_, 4, v_r_5307_);
v___x_5490_ = v_reuseFailAlloc_5494_;
goto v_reusejp_5489_;
}
v_reusejp_5489_:
{
lean_object* v___x_5492_; 
if (v_isShared_5469_ == 0)
{
lean_ctor_set(v___x_5468_, 4, v___x_5490_);
lean_ctor_set(v___x_5468_, 3, v___y_5485_);
lean_ctor_set(v___x_5468_, 2, v_v_5473_);
lean_ctor_set(v___x_5468_, 1, v_k_5472_);
lean_ctor_set(v___x_5468_, 0, v___x_5483_);
v___x_5492_ = v___x_5468_;
goto v_reusejp_5491_;
}
else
{
lean_object* v_reuseFailAlloc_5493_; 
v_reuseFailAlloc_5493_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5493_, 0, v___x_5483_);
lean_ctor_set(v_reuseFailAlloc_5493_, 1, v_k_5472_);
lean_ctor_set(v_reuseFailAlloc_5493_, 2, v_v_5473_);
lean_ctor_set(v_reuseFailAlloc_5493_, 3, v___y_5485_);
lean_ctor_set(v_reuseFailAlloc_5493_, 4, v___x_5490_);
v___x_5492_ = v_reuseFailAlloc_5493_;
goto v_reusejp_5491_;
}
v_reusejp_5491_:
{
return v___x_5492_;
}
}
}
v___jp_5496_:
{
lean_object* v___x_5498_; lean_object* v___x_5500_; 
v___x_5498_ = lean_nat_add(v___x_5495_, v___y_5497_);
lean_dec(v___y_5497_);
lean_dec(v___x_5495_);
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 4, v_l_5474_);
lean_ctor_set(v___x_5309_, 3, v_l_5457_);
lean_ctor_set(v___x_5309_, 2, v_v_5456_);
lean_ctor_set(v___x_5309_, 1, v_k_5455_);
lean_ctor_set(v___x_5309_, 0, v___x_5498_);
v___x_5500_ = v___x_5309_;
goto v_reusejp_5499_;
}
else
{
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v___x_5498_);
lean_ctor_set(v_reuseFailAlloc_5504_, 1, v_k_5455_);
lean_ctor_set(v_reuseFailAlloc_5504_, 2, v_v_5456_);
lean_ctor_set(v_reuseFailAlloc_5504_, 3, v_l_5457_);
lean_ctor_set(v_reuseFailAlloc_5504_, 4, v_l_5474_);
v___x_5500_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5499_;
}
v_reusejp_5499_:
{
lean_object* v___x_5501_; 
v___x_5501_ = lean_nat_add(v___x_5452_, v_size_5453_);
if (lean_obj_tag(v_r_5475_) == 0)
{
lean_object* v_size_5502_; 
v_size_5502_ = lean_ctor_get(v_r_5475_, 0);
lean_inc(v_size_5502_);
v___y_5485_ = v___x_5500_;
v___y_5486_ = v___x_5501_;
v___y_5487_ = v_size_5502_;
goto v___jp_5484_;
}
else
{
lean_object* v___x_5503_; 
v___x_5503_ = lean_unsigned_to_nat(0u);
v___y_5485_ = v___x_5500_;
v___y_5486_ = v___x_5501_;
v___y_5487_ = v___x_5503_;
goto v___jp_5484_;
}
}
}
}
}
else
{
lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5518_; 
lean_del_object(v___x_5309_);
v___x_5513_ = lean_nat_add(v___x_5452_, v_size_5454_);
lean_dec(v_size_5454_);
v___x_5514_ = lean_nat_add(v___x_5513_, v_size_5453_);
lean_dec(v___x_5513_);
v___x_5515_ = lean_nat_add(v___x_5452_, v_size_5453_);
v___x_5516_ = lean_nat_add(v___x_5515_, v_size_5471_);
lean_dec(v___x_5515_);
lean_inc_ref(v_r_5307_);
if (v_isShared_5469_ == 0)
{
lean_ctor_set(v___x_5468_, 4, v_r_5307_);
lean_ctor_set(v___x_5468_, 3, v_r_5458_);
lean_ctor_set(v___x_5468_, 2, v_v_5305_);
lean_ctor_set(v___x_5468_, 1, v_k_5304_);
lean_ctor_set(v___x_5468_, 0, v___x_5516_);
v___x_5518_ = v___x_5468_;
goto v_reusejp_5517_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v___x_5516_);
lean_ctor_set(v_reuseFailAlloc_5531_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5531_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5531_, 3, v_r_5458_);
lean_ctor_set(v_reuseFailAlloc_5531_, 4, v_r_5307_);
v___x_5518_ = v_reuseFailAlloc_5531_;
goto v_reusejp_5517_;
}
v_reusejp_5517_:
{
lean_object* v___x_5520_; uint8_t v_isShared_5521_; uint8_t v_isSharedCheck_5525_; 
v_isSharedCheck_5525_ = !lean_is_exclusive(v_r_5307_);
if (v_isSharedCheck_5525_ == 0)
{
lean_object* v_unused_5526_; lean_object* v_unused_5527_; lean_object* v_unused_5528_; lean_object* v_unused_5529_; lean_object* v_unused_5530_; 
v_unused_5526_ = lean_ctor_get(v_r_5307_, 4);
lean_dec(v_unused_5526_);
v_unused_5527_ = lean_ctor_get(v_r_5307_, 3);
lean_dec(v_unused_5527_);
v_unused_5528_ = lean_ctor_get(v_r_5307_, 2);
lean_dec(v_unused_5528_);
v_unused_5529_ = lean_ctor_get(v_r_5307_, 1);
lean_dec(v_unused_5529_);
v_unused_5530_ = lean_ctor_get(v_r_5307_, 0);
lean_dec(v_unused_5530_);
v___x_5520_ = v_r_5307_;
v_isShared_5521_ = v_isSharedCheck_5525_;
goto v_resetjp_5519_;
}
else
{
lean_dec(v_r_5307_);
v___x_5520_ = lean_box(0);
v_isShared_5521_ = v_isSharedCheck_5525_;
goto v_resetjp_5519_;
}
v_resetjp_5519_:
{
lean_object* v___x_5523_; 
if (v_isShared_5521_ == 0)
{
lean_ctor_set(v___x_5520_, 4, v___x_5518_);
lean_ctor_set(v___x_5520_, 3, v_l_5457_);
lean_ctor_set(v___x_5520_, 2, v_v_5456_);
lean_ctor_set(v___x_5520_, 1, v_k_5455_);
lean_ctor_set(v___x_5520_, 0, v___x_5514_);
v___x_5523_ = v___x_5520_;
goto v_reusejp_5522_;
}
else
{
lean_object* v_reuseFailAlloc_5524_; 
v_reuseFailAlloc_5524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5524_, 0, v___x_5514_);
lean_ctor_set(v_reuseFailAlloc_5524_, 1, v_k_5455_);
lean_ctor_set(v_reuseFailAlloc_5524_, 2, v_v_5456_);
lean_ctor_set(v_reuseFailAlloc_5524_, 3, v_l_5457_);
lean_ctor_set(v_reuseFailAlloc_5524_, 4, v___x_5518_);
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
}
}
}
else
{
lean_object* v_l_5538_; 
v_l_5538_ = lean_ctor_get(v_impl_5451_, 3);
lean_inc(v_l_5538_);
if (lean_obj_tag(v_l_5538_) == 0)
{
lean_object* v_r_5539_; lean_object* v_k_5540_; lean_object* v_v_5541_; lean_object* v___x_5543_; uint8_t v_isShared_5544_; uint8_t v_isSharedCheck_5552_; 
v_r_5539_ = lean_ctor_get(v_impl_5451_, 4);
v_k_5540_ = lean_ctor_get(v_impl_5451_, 1);
v_v_5541_ = lean_ctor_get(v_impl_5451_, 2);
v_isSharedCheck_5552_ = !lean_is_exclusive(v_impl_5451_);
if (v_isSharedCheck_5552_ == 0)
{
lean_object* v_unused_5553_; lean_object* v_unused_5554_; 
v_unused_5553_ = lean_ctor_get(v_impl_5451_, 3);
lean_dec(v_unused_5553_);
v_unused_5554_ = lean_ctor_get(v_impl_5451_, 0);
lean_dec(v_unused_5554_);
v___x_5543_ = v_impl_5451_;
v_isShared_5544_ = v_isSharedCheck_5552_;
goto v_resetjp_5542_;
}
else
{
lean_inc(v_r_5539_);
lean_inc(v_v_5541_);
lean_inc(v_k_5540_);
lean_dec(v_impl_5451_);
v___x_5543_ = lean_box(0);
v_isShared_5544_ = v_isSharedCheck_5552_;
goto v_resetjp_5542_;
}
v_resetjp_5542_:
{
lean_object* v___x_5545_; lean_object* v___x_5547_; 
v___x_5545_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_5539_);
if (v_isShared_5544_ == 0)
{
lean_ctor_set(v___x_5543_, 3, v_r_5539_);
lean_ctor_set(v___x_5543_, 2, v_v_5305_);
lean_ctor_set(v___x_5543_, 1, v_k_5304_);
lean_ctor_set(v___x_5543_, 0, v___x_5452_);
v___x_5547_ = v___x_5543_;
goto v_reusejp_5546_;
}
else
{
lean_object* v_reuseFailAlloc_5551_; 
v_reuseFailAlloc_5551_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5551_, 0, v___x_5452_);
lean_ctor_set(v_reuseFailAlloc_5551_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5551_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5551_, 3, v_r_5539_);
lean_ctor_set(v_reuseFailAlloc_5551_, 4, v_r_5539_);
v___x_5547_ = v_reuseFailAlloc_5551_;
goto v_reusejp_5546_;
}
v_reusejp_5546_:
{
lean_object* v___x_5549_; 
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 4, v___x_5547_);
lean_ctor_set(v___x_5309_, 3, v_l_5538_);
lean_ctor_set(v___x_5309_, 2, v_v_5541_);
lean_ctor_set(v___x_5309_, 1, v_k_5540_);
lean_ctor_set(v___x_5309_, 0, v___x_5545_);
v___x_5549_ = v___x_5309_;
goto v_reusejp_5548_;
}
else
{
lean_object* v_reuseFailAlloc_5550_; 
v_reuseFailAlloc_5550_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5550_, 0, v___x_5545_);
lean_ctor_set(v_reuseFailAlloc_5550_, 1, v_k_5540_);
lean_ctor_set(v_reuseFailAlloc_5550_, 2, v_v_5541_);
lean_ctor_set(v_reuseFailAlloc_5550_, 3, v_l_5538_);
lean_ctor_set(v_reuseFailAlloc_5550_, 4, v___x_5547_);
v___x_5549_ = v_reuseFailAlloc_5550_;
goto v_reusejp_5548_;
}
v_reusejp_5548_:
{
return v___x_5549_;
}
}
}
}
else
{
lean_object* v_r_5555_; 
v_r_5555_ = lean_ctor_get(v_impl_5451_, 4);
lean_inc(v_r_5555_);
if (lean_obj_tag(v_r_5555_) == 0)
{
lean_object* v_k_5556_; lean_object* v_v_5557_; lean_object* v___x_5559_; uint8_t v_isShared_5560_; uint8_t v_isSharedCheck_5580_; 
v_k_5556_ = lean_ctor_get(v_impl_5451_, 1);
v_v_5557_ = lean_ctor_get(v_impl_5451_, 2);
v_isSharedCheck_5580_ = !lean_is_exclusive(v_impl_5451_);
if (v_isSharedCheck_5580_ == 0)
{
lean_object* v_unused_5581_; lean_object* v_unused_5582_; lean_object* v_unused_5583_; 
v_unused_5581_ = lean_ctor_get(v_impl_5451_, 4);
lean_dec(v_unused_5581_);
v_unused_5582_ = lean_ctor_get(v_impl_5451_, 3);
lean_dec(v_unused_5582_);
v_unused_5583_ = lean_ctor_get(v_impl_5451_, 0);
lean_dec(v_unused_5583_);
v___x_5559_ = v_impl_5451_;
v_isShared_5560_ = v_isSharedCheck_5580_;
goto v_resetjp_5558_;
}
else
{
lean_inc(v_v_5557_);
lean_inc(v_k_5556_);
lean_dec(v_impl_5451_);
v___x_5559_ = lean_box(0);
v_isShared_5560_ = v_isSharedCheck_5580_;
goto v_resetjp_5558_;
}
v_resetjp_5558_:
{
lean_object* v_k_5561_; lean_object* v_v_5562_; lean_object* v___x_5564_; uint8_t v_isShared_5565_; uint8_t v_isSharedCheck_5576_; 
v_k_5561_ = lean_ctor_get(v_r_5555_, 1);
v_v_5562_ = lean_ctor_get(v_r_5555_, 2);
v_isSharedCheck_5576_ = !lean_is_exclusive(v_r_5555_);
if (v_isSharedCheck_5576_ == 0)
{
lean_object* v_unused_5577_; lean_object* v_unused_5578_; lean_object* v_unused_5579_; 
v_unused_5577_ = lean_ctor_get(v_r_5555_, 4);
lean_dec(v_unused_5577_);
v_unused_5578_ = lean_ctor_get(v_r_5555_, 3);
lean_dec(v_unused_5578_);
v_unused_5579_ = lean_ctor_get(v_r_5555_, 0);
lean_dec(v_unused_5579_);
v___x_5564_ = v_r_5555_;
v_isShared_5565_ = v_isSharedCheck_5576_;
goto v_resetjp_5563_;
}
else
{
lean_inc(v_v_5562_);
lean_inc(v_k_5561_);
lean_dec(v_r_5555_);
v___x_5564_ = lean_box(0);
v_isShared_5565_ = v_isSharedCheck_5576_;
goto v_resetjp_5563_;
}
v_resetjp_5563_:
{
lean_object* v___x_5566_; lean_object* v___x_5568_; 
v___x_5566_ = lean_unsigned_to_nat(3u);
if (v_isShared_5565_ == 0)
{
lean_ctor_set(v___x_5564_, 4, v_l_5538_);
lean_ctor_set(v___x_5564_, 3, v_l_5538_);
lean_ctor_set(v___x_5564_, 2, v_v_5557_);
lean_ctor_set(v___x_5564_, 1, v_k_5556_);
lean_ctor_set(v___x_5564_, 0, v___x_5452_);
v___x_5568_ = v___x_5564_;
goto v_reusejp_5567_;
}
else
{
lean_object* v_reuseFailAlloc_5575_; 
v_reuseFailAlloc_5575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5575_, 0, v___x_5452_);
lean_ctor_set(v_reuseFailAlloc_5575_, 1, v_k_5556_);
lean_ctor_set(v_reuseFailAlloc_5575_, 2, v_v_5557_);
lean_ctor_set(v_reuseFailAlloc_5575_, 3, v_l_5538_);
lean_ctor_set(v_reuseFailAlloc_5575_, 4, v_l_5538_);
v___x_5568_ = v_reuseFailAlloc_5575_;
goto v_reusejp_5567_;
}
v_reusejp_5567_:
{
lean_object* v___x_5570_; 
if (v_isShared_5560_ == 0)
{
lean_ctor_set(v___x_5559_, 4, v_l_5538_);
lean_ctor_set(v___x_5559_, 2, v_v_5305_);
lean_ctor_set(v___x_5559_, 1, v_k_5304_);
lean_ctor_set(v___x_5559_, 0, v___x_5452_);
v___x_5570_ = v___x_5559_;
goto v_reusejp_5569_;
}
else
{
lean_object* v_reuseFailAlloc_5574_; 
v_reuseFailAlloc_5574_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5574_, 0, v___x_5452_);
lean_ctor_set(v_reuseFailAlloc_5574_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5574_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5574_, 3, v_l_5538_);
lean_ctor_set(v_reuseFailAlloc_5574_, 4, v_l_5538_);
v___x_5570_ = v_reuseFailAlloc_5574_;
goto v_reusejp_5569_;
}
v_reusejp_5569_:
{
lean_object* v___x_5572_; 
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 4, v___x_5570_);
lean_ctor_set(v___x_5309_, 3, v___x_5568_);
lean_ctor_set(v___x_5309_, 2, v_v_5562_);
lean_ctor_set(v___x_5309_, 1, v_k_5561_);
lean_ctor_set(v___x_5309_, 0, v___x_5566_);
v___x_5572_ = v___x_5309_;
goto v_reusejp_5571_;
}
else
{
lean_object* v_reuseFailAlloc_5573_; 
v_reuseFailAlloc_5573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5573_, 0, v___x_5566_);
lean_ctor_set(v_reuseFailAlloc_5573_, 1, v_k_5561_);
lean_ctor_set(v_reuseFailAlloc_5573_, 2, v_v_5562_);
lean_ctor_set(v_reuseFailAlloc_5573_, 3, v___x_5568_);
lean_ctor_set(v_reuseFailAlloc_5573_, 4, v___x_5570_);
v___x_5572_ = v_reuseFailAlloc_5573_;
goto v_reusejp_5571_;
}
v_reusejp_5571_:
{
return v___x_5572_;
}
}
}
}
}
}
else
{
lean_object* v___x_5584_; lean_object* v___x_5586_; 
v___x_5584_ = lean_unsigned_to_nat(2u);
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 4, v_r_5555_);
lean_ctor_set(v___x_5309_, 3, v_impl_5451_);
lean_ctor_set(v___x_5309_, 0, v___x_5584_);
v___x_5586_ = v___x_5309_;
goto v_reusejp_5585_;
}
else
{
lean_object* v_reuseFailAlloc_5587_; 
v_reuseFailAlloc_5587_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5587_, 0, v___x_5584_);
lean_ctor_set(v_reuseFailAlloc_5587_, 1, v_k_5304_);
lean_ctor_set(v_reuseFailAlloc_5587_, 2, v_v_5305_);
lean_ctor_set(v_reuseFailAlloc_5587_, 3, v_impl_5451_);
lean_ctor_set(v_reuseFailAlloc_5587_, 4, v_r_5555_);
v___x_5586_ = v_reuseFailAlloc_5587_;
goto v_reusejp_5585_;
}
v_reusejp_5585_:
{
return v___x_5586_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5589_; lean_object* v___x_5590_; 
v___x_5589_ = lean_unsigned_to_nat(1u);
v___x_5590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5590_, 0, v___x_5589_);
lean_ctor_set(v___x_5590_, 1, v_k_5300_);
lean_ctor_set(v___x_5590_, 2, v_v_5301_);
lean_ctor_set(v___x_5590_, 3, v_t_5302_);
lean_ctor_set(v___x_5590_, 4, v_t_5302_);
return v___x_5590_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(lean_object* v_k_5591_, lean_object* v_t_5592_){
_start:
{
if (lean_obj_tag(v_t_5592_) == 0)
{
lean_object* v_k_5593_; lean_object* v_l_5594_; lean_object* v_r_5595_; uint8_t v___x_5596_; 
v_k_5593_ = lean_ctor_get(v_t_5592_, 1);
v_l_5594_ = lean_ctor_get(v_t_5592_, 3);
v_r_5595_ = lean_ctor_get(v_t_5592_, 4);
v___x_5596_ = lean_nat_dec_lt(v_k_5593_, v_k_5591_);
if (v___x_5596_ == 0)
{
uint8_t v___x_5597_; 
v___x_5597_ = lean_nat_dec_eq(v_k_5593_, v_k_5591_);
if (v___x_5597_ == 0)
{
v_t_5592_ = v_r_5595_;
goto _start;
}
else
{
return v___x_5597_;
}
}
else
{
v_t_5592_ = v_l_5594_;
goto _start;
}
}
else
{
uint8_t v___x_5600_; 
v___x_5600_ = 0;
return v___x_5600_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg___boxed(lean_object* v_k_5601_, lean_object* v_t_5602_){
_start:
{
uint8_t v_res_5603_; lean_object* v_r_5604_; 
v_res_5603_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_k_5601_, v_t_5602_);
lean_dec(v_t_5602_);
lean_dec(v_k_5601_);
v_r_5604_ = lean_box(v_res_5603_);
return v_r_5604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstanceEntry(lean_object* v_d_5605_, lean_object* v_e_5606_){
_start:
{
lean_object* v_defaultInstances_5607_; lean_object* v_priorities_5608_; lean_object* v___x_5610_; uint8_t v_isShared_5611_; uint8_t v_isSharedCheck_5635_; 
v_defaultInstances_5607_ = lean_ctor_get(v_d_5605_, 0);
v_priorities_5608_ = lean_ctor_get(v_d_5605_, 1);
v_isSharedCheck_5635_ = !lean_is_exclusive(v_d_5605_);
if (v_isSharedCheck_5635_ == 0)
{
v___x_5610_ = v_d_5605_;
v_isShared_5611_ = v_isSharedCheck_5635_;
goto v_resetjp_5609_;
}
else
{
lean_inc(v_priorities_5608_);
lean_inc(v_defaultInstances_5607_);
lean_dec(v_d_5605_);
v___x_5610_ = lean_box(0);
v_isShared_5611_ = v_isSharedCheck_5635_;
goto v_resetjp_5609_;
}
v_resetjp_5609_:
{
lean_object* v_className_5612_; lean_object* v_instanceName_5613_; lean_object* v_priority_5614_; lean_object* v___y_5616_; uint8_t v___x_5632_; 
v_className_5612_ = lean_ctor_get(v_e_5606_, 0);
lean_inc(v_className_5612_);
v_instanceName_5613_ = lean_ctor_get(v_e_5606_, 1);
lean_inc(v_instanceName_5613_);
v_priority_5614_ = lean_ctor_get(v_e_5606_, 2);
lean_inc(v_priority_5614_);
lean_dec_ref(v_e_5606_);
v___x_5632_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_priority_5614_, v_priorities_5608_);
if (v___x_5632_ == 0)
{
lean_object* v___x_5633_; lean_object* v___x_5634_; 
v___x_5633_ = lean_box(0);
lean_inc(v_priority_5614_);
v___x_5634_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_priority_5614_, v___x_5633_, v_priorities_5608_);
v___y_5616_ = v___x_5634_;
goto v___jp_5615_;
}
else
{
v___y_5616_ = v_priorities_5608_;
goto v___jp_5615_;
}
v___jp_5615_:
{
lean_object* v___x_5617_; 
v___x_5617_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_defaultInstances_5607_, v_className_5612_);
if (lean_obj_tag(v___x_5617_) == 0)
{
lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5623_; 
v___x_5618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5618_, 0, v_instanceName_5613_);
lean_ctor_set(v___x_5618_, 1, v_priority_5614_);
v___x_5619_ = lean_box(0);
v___x_5620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5620_, 0, v___x_5618_);
lean_ctor_set(v___x_5620_, 1, v___x_5619_);
v___x_5621_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_className_5612_, v___x_5620_, v_defaultInstances_5607_);
if (v_isShared_5611_ == 0)
{
lean_ctor_set(v___x_5610_, 1, v___y_5616_);
lean_ctor_set(v___x_5610_, 0, v___x_5621_);
v___x_5623_ = v___x_5610_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v___x_5621_);
lean_ctor_set(v_reuseFailAlloc_5624_, 1, v___y_5616_);
v___x_5623_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
return v___x_5623_;
}
}
else
{
lean_object* v_val_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5630_; 
v_val_5625_ = lean_ctor_get(v___x_5617_, 0);
lean_inc(v_val_5625_);
lean_dec_ref_known(v___x_5617_, 1);
v___x_5626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5626_, 0, v_instanceName_5613_);
lean_ctor_set(v___x_5626_, 1, v_priority_5614_);
v___x_5627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5627_, 0, v___x_5626_);
lean_ctor_set(v___x_5627_, 1, v_val_5625_);
v___x_5628_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_className_5612_, v___x_5627_, v_defaultInstances_5607_);
if (v_isShared_5611_ == 0)
{
lean_ctor_set(v___x_5610_, 1, v___y_5616_);
lean_ctor_set(v___x_5610_, 0, v___x_5628_);
v___x_5630_ = v___x_5610_;
goto v_reusejp_5629_;
}
else
{
lean_object* v_reuseFailAlloc_5631_; 
v_reuseFailAlloc_5631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5631_, 0, v___x_5628_);
lean_ctor_set(v_reuseFailAlloc_5631_, 1, v___y_5616_);
v___x_5630_ = v_reuseFailAlloc_5631_;
goto v_reusejp_5629_;
}
v_reusejp_5629_:
{
return v___x_5630_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(lean_object* v_00_u03b2_5636_, lean_object* v_k_5637_, lean_object* v_t_5638_){
_start:
{
uint8_t v___x_5639_; 
v___x_5639_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_k_5637_, v_t_5638_);
return v___x_5639_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___boxed(lean_object* v_00_u03b2_5640_, lean_object* v_k_5641_, lean_object* v_t_5642_){
_start:
{
uint8_t v_res_5643_; lean_object* v_r_5644_; 
v_res_5643_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(v_00_u03b2_5640_, v_k_5641_, v_t_5642_);
lean_dec(v_t_5642_);
lean_dec(v_k_5641_);
v_r_5644_ = lean_box(v_res_5643_);
return v_r_5644_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1(lean_object* v_00_u03b2_5645_, lean_object* v_k_5646_, lean_object* v_v_5647_, lean_object* v_t_5648_, lean_object* v_hl_5649_){
_start:
{
lean_object* v___x_5650_; 
v___x_5650_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5646_, v_v_5647_, v_t_5648_);
return v___x_5650_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(lean_object* v_env_5651_, lean_object* v_as_5652_, size_t v_i_5653_, size_t v_stop_5654_, lean_object* v_b_5655_){
_start:
{
lean_object* v___y_5657_; uint8_t v___x_5661_; 
v___x_5661_ = lean_usize_dec_eq(v_i_5653_, v_stop_5654_);
if (v___x_5661_ == 0)
{
lean_object* v___x_5662_; lean_object* v_instanceName_5663_; uint8_t v___x_5664_; lean_object* v___x_5665_; uint8_t v___x_5666_; 
v___x_5662_ = lean_array_uget_borrowed(v_as_5652_, v_i_5653_);
v_instanceName_5663_ = lean_ctor_get(v___x_5662_, 1);
v___x_5664_ = 1;
lean_inc_ref(v_env_5651_);
v___x_5665_ = l_Lean_Environment_setExporting(v_env_5651_, v___x_5664_);
lean_inc(v_instanceName_5663_);
v___x_5666_ = l_Lean_Environment_contains(v___x_5665_, v_instanceName_5663_, v___x_5661_);
if (v___x_5666_ == 0)
{
v___y_5657_ = v_b_5655_;
goto v___jp_5656_;
}
else
{
lean_object* v___x_5667_; 
lean_inc(v___x_5662_);
v___x_5667_ = lean_array_push(v_b_5655_, v___x_5662_);
v___y_5657_ = v___x_5667_;
goto v___jp_5656_;
}
}
else
{
lean_dec_ref(v_env_5651_);
return v_b_5655_;
}
v___jp_5656_:
{
size_t v___x_5658_; size_t v___x_5659_; 
v___x_5658_ = ((size_t)1ULL);
v___x_5659_ = lean_usize_add(v_i_5653_, v___x_5658_);
v_i_5653_ = v___x_5659_;
v_b_5655_ = v___y_5657_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_5668_, lean_object* v_as_5669_, lean_object* v_i_5670_, lean_object* v_stop_5671_, lean_object* v_b_5672_){
_start:
{
size_t v_i_boxed_5673_; size_t v_stop_boxed_5674_; lean_object* v_res_5675_; 
v_i_boxed_5673_ = lean_unbox_usize(v_i_5670_);
lean_dec(v_i_5670_);
v_stop_boxed_5674_ = lean_unbox_usize(v_stop_5671_);
lean_dec(v_stop_5671_);
v_res_5675_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(v_env_5668_, v_as_5669_, v_i_boxed_5673_, v_stop_boxed_5674_, v_b_5672_);
lean_dec_ref(v_as_5669_);
return v_res_5675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_env_5678_, lean_object* v_x_5679_, lean_object* v_entries_5680_){
_start:
{
lean_object* v_all_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; uint8_t v___x_5685_; 
v_all_5681_ = lean_array_mk(v_entries_5680_);
v___x_5682_ = lean_unsigned_to_nat(0u);
v___x_5683_ = lean_array_get_size(v_all_5681_);
v___x_5684_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_));
v___x_5685_ = lean_nat_dec_lt(v___x_5682_, v___x_5683_);
if (v___x_5685_ == 0)
{
lean_object* v___x_5686_; 
lean_dec_ref(v_env_5678_);
v___x_5686_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5686_, 0, v___x_5684_);
lean_ctor_set(v___x_5686_, 1, v___x_5684_);
lean_ctor_set(v___x_5686_, 2, v_all_5681_);
return v___x_5686_;
}
else
{
uint8_t v___x_5687_; 
v___x_5687_ = lean_nat_dec_le(v___x_5683_, v___x_5683_);
if (v___x_5687_ == 0)
{
if (v___x_5685_ == 0)
{
lean_object* v___x_5688_; 
lean_dec_ref(v_env_5678_);
v___x_5688_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5688_, 0, v___x_5684_);
lean_ctor_set(v___x_5688_, 1, v___x_5684_);
lean_ctor_set(v___x_5688_, 2, v_all_5681_);
return v___x_5688_;
}
else
{
size_t v___x_5689_; size_t v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; 
v___x_5689_ = ((size_t)0ULL);
v___x_5690_ = lean_usize_of_nat(v___x_5683_);
v___x_5691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(v_env_5678_, v_all_5681_, v___x_5689_, v___x_5690_, v___x_5684_);
lean_inc_ref(v___x_5691_);
v___x_5692_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5692_, 0, v___x_5691_);
lean_ctor_set(v___x_5692_, 1, v___x_5691_);
lean_ctor_set(v___x_5692_, 2, v_all_5681_);
return v___x_5692_;
}
}
else
{
size_t v___x_5693_; size_t v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; 
v___x_5693_ = ((size_t)0ULL);
v___x_5694_ = lean_usize_of_nat(v___x_5683_);
v___x_5695_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(v_env_5678_, v_all_5681_, v___x_5693_, v___x_5694_, v___x_5684_);
lean_inc_ref(v___x_5695_);
v___x_5696_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5696_, 0, v___x_5695_);
lean_ctor_set(v___x_5696_, 1, v___x_5695_);
lean_ctor_set(v___x_5696_, 2, v_all_5681_);
return v___x_5696_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_env_5697_, lean_object* v_x_5698_, lean_object* v_entries_5699_){
_start:
{
lean_object* v_res_5700_; 
v_res_5700_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(v_env_5697_, v_x_5698_, v_entries_5699_);
lean_dec_ref(v_x_5698_);
return v_res_5700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_es_5701_){
_start:
{
lean_object* v___x_5702_; 
v___x_5702_ = lean_array_mk(v_es_5701_);
return v___x_5702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_as_5703_, size_t v_i_5704_, size_t v_stop_5705_, lean_object* v_b_5706_){
_start:
{
uint8_t v___x_5707_; 
v___x_5707_ = lean_usize_dec_eq(v_i_5704_, v_stop_5705_);
if (v___x_5707_ == 0)
{
lean_object* v___x_5708_; lean_object* v___x_5709_; size_t v___x_5710_; size_t v___x_5711_; 
v___x_5708_ = lean_array_uget_borrowed(v_as_5703_, v_i_5704_);
lean_inc(v___x_5708_);
v___x_5709_ = l_Lean_Meta_addDefaultInstanceEntry(v_b_5706_, v___x_5708_);
v___x_5710_ = ((size_t)1ULL);
v___x_5711_ = lean_usize_add(v_i_5704_, v___x_5710_);
v_i_5704_ = v___x_5711_;
v_b_5706_ = v___x_5709_;
goto _start;
}
else
{
return v_b_5706_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_as_5713_, lean_object* v_i_5714_, lean_object* v_stop_5715_, lean_object* v_b_5716_){
_start:
{
size_t v_i_boxed_5717_; size_t v_stop_boxed_5718_; lean_object* v_res_5719_; 
v_i_boxed_5717_ = lean_unbox_usize(v_i_5714_);
lean_dec(v_i_5714_);
v_stop_boxed_5718_ = lean_unbox_usize(v_stop_5715_);
lean_dec(v_stop_5715_);
v_res_5719_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(v_as_5713_, v_i_boxed_5717_, v_stop_boxed_5718_, v_b_5716_);
lean_dec_ref(v_as_5713_);
return v_res_5719_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_as_5720_, size_t v_i_5721_, size_t v_stop_5722_, lean_object* v_b_5723_){
_start:
{
lean_object* v___y_5725_; uint8_t v___x_5729_; 
v___x_5729_ = lean_usize_dec_eq(v_i_5721_, v_stop_5722_);
if (v___x_5729_ == 0)
{
lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; uint8_t v___x_5733_; 
v___x_5730_ = lean_array_uget_borrowed(v_as_5720_, v_i_5721_);
v___x_5731_ = lean_unsigned_to_nat(0u);
v___x_5732_ = lean_array_get_size(v___x_5730_);
v___x_5733_ = lean_nat_dec_lt(v___x_5731_, v___x_5732_);
if (v___x_5733_ == 0)
{
v___y_5725_ = v_b_5723_;
goto v___jp_5724_;
}
else
{
size_t v___x_5734_; size_t v___x_5735_; lean_object* v___x_5736_; 
v___x_5734_ = ((size_t)0ULL);
v___x_5735_ = lean_usize_of_nat(v___x_5732_);
v___x_5736_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(v___x_5730_, v___x_5734_, v___x_5735_, v_b_5723_);
v___y_5725_ = v___x_5736_;
goto v___jp_5724_;
}
}
else
{
return v_b_5723_;
}
v___jp_5724_:
{
size_t v___x_5726_; size_t v___x_5727_; 
v___x_5726_ = ((size_t)1ULL);
v___x_5727_ = lean_usize_add(v_i_5721_, v___x_5726_);
v_i_5721_ = v___x_5727_;
v_b_5723_ = v___y_5725_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_as_5737_, lean_object* v_i_5738_, lean_object* v_stop_5739_, lean_object* v_b_5740_){
_start:
{
size_t v_i_boxed_5741_; size_t v_stop_boxed_5742_; lean_object* v_res_5743_; 
v_i_boxed_5741_ = lean_unbox_usize(v_i_5738_);
lean_dec(v_i_5738_);
v_stop_boxed_5742_ = lean_unbox_usize(v_stop_5739_);
lean_dec(v_stop_5739_);
v_res_5743_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(v_as_5737_, v_i_boxed_5741_, v_stop_boxed_5742_, v_b_5740_);
lean_dec_ref(v_as_5737_);
return v_res_5743_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(lean_object* v_initState_5744_, lean_object* v_as_5745_){
_start:
{
lean_object* v___x_5746_; lean_object* v___x_5747_; uint8_t v___x_5748_; 
v___x_5746_ = lean_unsigned_to_nat(0u);
v___x_5747_ = lean_array_get_size(v_as_5745_);
v___x_5748_ = lean_nat_dec_lt(v___x_5746_, v___x_5747_);
if (v___x_5748_ == 0)
{
return v_initState_5744_;
}
else
{
size_t v___x_5749_; size_t v___x_5750_; lean_object* v___x_5751_; 
v___x_5749_ = ((size_t)0ULL);
v___x_5750_ = lean_usize_of_nat(v___x_5747_);
v___x_5751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(v_as_5745_, v___x_5749_, v___x_5750_, v_initState_5744_);
return v___x_5751_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1___boxed(lean_object* v_initState_5752_, lean_object* v_as_5753_){
_start:
{
lean_object* v_res_5754_; 
v_res_5754_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(v_initState_5752_, v_as_5753_);
lean_dec_ref(v_as_5753_);
return v_res_5754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_es_5755_){
_start:
{
lean_object* v___x_5756_; lean_object* v___x_5757_; 
v___x_5756_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0));
v___x_5757_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(v___x_5756_, v_es_5755_);
return v___x_5757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_es_5758_){
_start:
{
lean_object* v_res_5759_; 
v_res_5759_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(v_es_5758_);
lean_dec_ref(v_es_5758_);
return v_res_5759_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5780_; lean_object* v___x_5781_; 
v___x_5780_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_));
v___x_5781_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_5780_);
return v___x_5781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v___y_5782_){
_start:
{
lean_object* v_res_5783_; 
v_res_5783_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
return v_res_5783_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(lean_object* v_env_5784_, lean_object* v___y_5785_, lean_object* v___y_5786_){
_start:
{
lean_object* v___x_5788_; lean_object* v_nextMacroScope_5789_; lean_object* v_ngen_5790_; lean_object* v_auxDeclNGen_5791_; lean_object* v_traceState_5792_; lean_object* v_messages_5793_; lean_object* v_infoState_5794_; lean_object* v_snapshotTasks_5795_; lean_object* v___x_5797_; uint8_t v_isShared_5798_; uint8_t v_isSharedCheck_5821_; 
v___x_5788_ = lean_st_ref_take(v___y_5786_);
v_nextMacroScope_5789_ = lean_ctor_get(v___x_5788_, 1);
v_ngen_5790_ = lean_ctor_get(v___x_5788_, 2);
v_auxDeclNGen_5791_ = lean_ctor_get(v___x_5788_, 3);
v_traceState_5792_ = lean_ctor_get(v___x_5788_, 4);
v_messages_5793_ = lean_ctor_get(v___x_5788_, 6);
v_infoState_5794_ = lean_ctor_get(v___x_5788_, 7);
v_snapshotTasks_5795_ = lean_ctor_get(v___x_5788_, 8);
v_isSharedCheck_5821_ = !lean_is_exclusive(v___x_5788_);
if (v_isSharedCheck_5821_ == 0)
{
lean_object* v_unused_5822_; lean_object* v_unused_5823_; 
v_unused_5822_ = lean_ctor_get(v___x_5788_, 5);
lean_dec(v_unused_5822_);
v_unused_5823_ = lean_ctor_get(v___x_5788_, 0);
lean_dec(v_unused_5823_);
v___x_5797_ = v___x_5788_;
v_isShared_5798_ = v_isSharedCheck_5821_;
goto v_resetjp_5796_;
}
else
{
lean_inc(v_snapshotTasks_5795_);
lean_inc(v_infoState_5794_);
lean_inc(v_messages_5793_);
lean_inc(v_traceState_5792_);
lean_inc(v_auxDeclNGen_5791_);
lean_inc(v_ngen_5790_);
lean_inc(v_nextMacroScope_5789_);
lean_dec(v___x_5788_);
v___x_5797_ = lean_box(0);
v_isShared_5798_ = v_isSharedCheck_5821_;
goto v_resetjp_5796_;
}
v_resetjp_5796_:
{
lean_object* v___x_5799_; lean_object* v___x_5801_; 
v___x_5799_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__1);
if (v_isShared_5798_ == 0)
{
lean_ctor_set(v___x_5797_, 5, v___x_5799_);
lean_ctor_set(v___x_5797_, 0, v_env_5784_);
v___x_5801_ = v___x_5797_;
goto v_reusejp_5800_;
}
else
{
lean_object* v_reuseFailAlloc_5820_; 
v_reuseFailAlloc_5820_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5820_, 0, v_env_5784_);
lean_ctor_set(v_reuseFailAlloc_5820_, 1, v_nextMacroScope_5789_);
lean_ctor_set(v_reuseFailAlloc_5820_, 2, v_ngen_5790_);
lean_ctor_set(v_reuseFailAlloc_5820_, 3, v_auxDeclNGen_5791_);
lean_ctor_set(v_reuseFailAlloc_5820_, 4, v_traceState_5792_);
lean_ctor_set(v_reuseFailAlloc_5820_, 5, v___x_5799_);
lean_ctor_set(v_reuseFailAlloc_5820_, 6, v_messages_5793_);
lean_ctor_set(v_reuseFailAlloc_5820_, 7, v_infoState_5794_);
lean_ctor_set(v_reuseFailAlloc_5820_, 8, v_snapshotTasks_5795_);
v___x_5801_ = v_reuseFailAlloc_5820_;
goto v_reusejp_5800_;
}
v_reusejp_5800_:
{
lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v_mctx_5804_; lean_object* v_zetaDeltaFVarIds_5805_; lean_object* v_postponed_5806_; lean_object* v_diag_5807_; lean_object* v___x_5809_; uint8_t v_isShared_5810_; uint8_t v_isSharedCheck_5818_; 
v___x_5802_ = lean_st_ref_put(v___y_5786_, v___x_5801_);
v___x_5803_ = lean_st_ref_take(v___y_5785_);
v_mctx_5804_ = lean_ctor_get(v___x_5803_, 0);
v_zetaDeltaFVarIds_5805_ = lean_ctor_get(v___x_5803_, 2);
v_postponed_5806_ = lean_ctor_get(v___x_5803_, 3);
v_diag_5807_ = lean_ctor_get(v___x_5803_, 4);
v_isSharedCheck_5818_ = !lean_is_exclusive(v___x_5803_);
if (v_isSharedCheck_5818_ == 0)
{
lean_object* v_unused_5819_; 
v_unused_5819_ = lean_ctor_get(v___x_5803_, 1);
lean_dec(v_unused_5819_);
v___x_5809_ = v___x_5803_;
v_isShared_5810_ = v_isSharedCheck_5818_;
goto v_resetjp_5808_;
}
else
{
lean_inc(v_diag_5807_);
lean_inc(v_postponed_5806_);
lean_inc(v_zetaDeltaFVarIds_5805_);
lean_inc(v_mctx_5804_);
lean_dec(v___x_5803_);
v___x_5809_ = lean_box(0);
v_isShared_5810_ = v_isSharedCheck_5818_;
goto v_resetjp_5808_;
}
v_resetjp_5808_:
{
lean_object* v___x_5811_; lean_object* v___x_5812_; lean_object* v___x_5814_; 
v___x_5811_ = lean_box(0);
v___x_5812_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__2___redArg___closed__2);
if (v_isShared_5810_ == 0)
{
lean_ctor_set(v___x_5809_, 1, v___x_5812_);
v___x_5814_ = v___x_5809_;
goto v_reusejp_5813_;
}
else
{
lean_object* v_reuseFailAlloc_5817_; 
v_reuseFailAlloc_5817_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5817_, 0, v_mctx_5804_);
lean_ctor_set(v_reuseFailAlloc_5817_, 1, v___x_5812_);
lean_ctor_set(v_reuseFailAlloc_5817_, 2, v_zetaDeltaFVarIds_5805_);
lean_ctor_set(v_reuseFailAlloc_5817_, 3, v_postponed_5806_);
lean_ctor_set(v_reuseFailAlloc_5817_, 4, v_diag_5807_);
v___x_5814_ = v_reuseFailAlloc_5817_;
goto v_reusejp_5813_;
}
v_reusejp_5813_:
{
lean_object* v___x_5815_; lean_object* v___x_5816_; 
v___x_5815_ = lean_st_ref_put(v___y_5785_, v___x_5814_);
v___x_5816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5816_, 0, v___x_5811_);
return v___x_5816_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg___boxed(lean_object* v_env_5824_, lean_object* v___y_5825_, lean_object* v___y_5826_, lean_object* v___y_5827_){
_start:
{
lean_object* v_res_5828_; 
v_res_5828_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v_env_5824_, v___y_5825_, v___y_5826_);
lean_dec(v___y_5826_);
lean_dec(v___y_5825_);
return v_res_5828_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(lean_object* v_env_5829_, lean_object* v___y_5830_, lean_object* v___y_5831_, lean_object* v___y_5832_, lean_object* v___y_5833_){
_start:
{
lean_object* v___x_5835_; 
v___x_5835_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v_env_5829_, v___y_5831_, v___y_5833_);
return v___x_5835_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___boxed(lean_object* v_env_5836_, lean_object* v___y_5837_, lean_object* v___y_5838_, lean_object* v___y_5839_, lean_object* v___y_5840_, lean_object* v___y_5841_){
_start:
{
lean_object* v_res_5842_; 
v_res_5842_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(v_env_5836_, v___y_5837_, v___y_5838_, v___y_5839_, v___y_5840_);
lean_dec(v___y_5840_);
lean_dec_ref(v___y_5839_);
lean_dec(v___y_5838_);
lean_dec_ref(v___y_5837_);
return v_res_5842_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5844_; lean_object* v___x_5845_; 
v___x_5844_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__0___closed__0));
v___x_5845_ = l_Lean_stringToMessageData(v___x_5844_);
return v___x_5845_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5847_; lean_object* v___x_5848_; 
v___x_5847_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__0___closed__2));
v___x_5848_ = l_Lean_stringToMessageData(v___x_5847_);
return v___x_5848_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__5(void){
_start:
{
lean_object* v___x_5850_; lean_object* v___x_5851_; 
v___x_5850_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__0___closed__4));
v___x_5851_ = l_Lean_stringToMessageData(v___x_5850_);
return v___x_5851_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__7(void){
_start:
{
lean_object* v___x_5853_; lean_object* v___x_5854_; 
v___x_5853_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__0___closed__6));
v___x_5854_ = l_Lean_stringToMessageData(v___x_5853_);
return v___x_5854_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__9(void){
_start:
{
lean_object* v___x_5856_; lean_object* v___x_5857_; 
v___x_5856_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__0___closed__8));
v___x_5857_ = l_Lean_stringToMessageData(v___x_5856_);
return v___x_5857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0(lean_object* v_declName_5858_, lean_object* v_prio_5859_, lean_object* v_x_5860_, lean_object* v_type_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_, lean_object* v___y_5864_, lean_object* v___y_5865_){
_start:
{
lean_object* v___x_5867_; 
v___x_5867_ = l_Lean_Expr_getAppFn(v_type_5861_);
if (lean_obj_tag(v___x_5867_) == 4)
{
lean_object* v_declName_5868_; lean_object* v___y_5870_; lean_object* v___y_5871_; lean_object* v___y_5872_; lean_object* v___y_5873_; lean_object* v___x_5883_; lean_object* v_env_5884_; uint8_t v___x_5885_; 
v_declName_5868_ = lean_ctor_get(v___x_5867_, 0);
lean_inc(v_declName_5868_);
lean_dec_ref_known(v___x_5867_, 2);
v___x_5883_ = lean_st_ref_get(v___y_5865_);
v_env_5884_ = lean_ctor_get(v___x_5883_, 0);
lean_inc_ref(v_env_5884_);
lean_dec(v___x_5883_);
v___x_5885_ = l_Lean_isClass(v_env_5884_, v_declName_5868_);
if (v___x_5885_ == 0)
{
lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; 
lean_dec(v_prio_5859_);
v___x_5886_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__1, &l_Lean_Meta_addDefaultInstance___lam__0___closed__1_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__1);
v___x_5887_ = l_Lean_MessageData_ofConstName(v_declName_5858_, v___x_5885_);
v___x_5888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5888_, 0, v___x_5886_);
lean_ctor_set(v___x_5888_, 1, v___x_5887_);
v___x_5889_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__3, &l_Lean_Meta_addDefaultInstance___lam__0___closed__3_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__3);
v___x_5890_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5890_, 0, v___x_5888_);
lean_ctor_set(v___x_5890_, 1, v___x_5889_);
lean_inc(v_declName_5868_);
v___x_5891_ = l_Lean_MessageData_ofName(v_declName_5868_);
v___x_5892_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5892_, 0, v___x_5890_);
lean_ctor_set(v___x_5892_, 1, v___x_5891_);
v___x_5893_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__5, &l_Lean_Meta_addDefaultInstance___lam__0___closed__5_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__5);
v___x_5894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5894_, 0, v___x_5892_);
lean_ctor_set(v___x_5894_, 1, v___x_5893_);
v___x_5895_ = l_Lean_MessageData_ofConstName(v_declName_5868_, v___x_5885_);
v___x_5896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5896_, 0, v___x_5894_);
lean_ctor_set(v___x_5896_, 1, v___x_5895_);
v___x_5897_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__7, &l_Lean_Meta_addDefaultInstance___lam__0___closed__7_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__7);
v___x_5898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5898_, 0, v___x_5896_);
lean_ctor_set(v___x_5898_, 1, v___x_5897_);
v___x_5899_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_5898_, v___y_5862_, v___y_5863_, v___y_5864_, v___y_5865_);
return v___x_5899_;
}
else
{
v___y_5870_ = v___y_5862_;
v___y_5871_ = v___y_5863_;
v___y_5872_ = v___y_5864_;
v___y_5873_ = v___y_5865_;
goto v___jp_5869_;
}
v___jp_5869_:
{
lean_object* v___x_5874_; lean_object* v_env_5875_; lean_object* v___x_5876_; lean_object* v_toEnvExtension_5877_; lean_object* v_asyncMode_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; 
v___x_5874_ = lean_st_ref_get(v___y_5873_);
v_env_5875_ = lean_ctor_get(v___x_5874_, 0);
lean_inc_ref(v_env_5875_);
lean_dec(v___x_5874_);
v___x_5876_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_5877_ = lean_ctor_get(v___x_5876_, 0);
v_asyncMode_5878_ = lean_ctor_get(v_toEnvExtension_5877_, 2);
v___x_5879_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5879_, 0, v_declName_5868_);
lean_ctor_set(v___x_5879_, 1, v_declName_5858_);
lean_ctor_set(v___x_5879_, 2, v_prio_5859_);
v___x_5880_ = lean_box(0);
v___x_5881_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_5876_, v_env_5875_, v___x_5879_, v_asyncMode_5878_, v___x_5880_);
v___x_5882_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v___x_5881_, v___y_5871_, v___y_5873_);
return v___x_5882_;
}
}
else
{
lean_object* v___x_5900_; uint8_t v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; 
lean_dec_ref(v___x_5867_);
lean_dec(v_prio_5859_);
v___x_5900_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__1, &l_Lean_Meta_addDefaultInstance___lam__0___closed__1_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__1);
v___x_5901_ = 0;
v___x_5902_ = l_Lean_MessageData_ofConstName(v_declName_5858_, v___x_5901_);
v___x_5903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5903_, 0, v___x_5900_);
lean_ctor_set(v___x_5903_, 1, v___x_5902_);
v___x_5904_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__0___closed__9, &l_Lean_Meta_addDefaultInstance___lam__0___closed__9_once, _init_l_Lean_Meta_addDefaultInstance___lam__0___closed__9);
v___x_5905_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5905_, 0, v___x_5903_);
lean_ctor_set(v___x_5905_, 1, v___x_5904_);
v___x_5906_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_5905_, v___y_5862_, v___y_5863_, v___y_5864_, v___y_5865_);
return v___x_5906_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0___boxed(lean_object* v_declName_5907_, lean_object* v_prio_5908_, lean_object* v_x_5909_, lean_object* v_type_5910_, lean_object* v___y_5911_, lean_object* v___y_5912_, lean_object* v___y_5913_, lean_object* v___y_5914_, lean_object* v___y_5915_){
_start:
{
lean_object* v_res_5916_; 
v_res_5916_ = l_Lean_Meta_addDefaultInstance___lam__0(v_declName_5907_, v_prio_5908_, v_x_5909_, v_type_5910_, v___y_5911_, v___y_5912_, v___y_5913_, v___y_5914_);
lean_dec(v___y_5914_);
lean_dec_ref(v___y_5913_);
lean_dec(v___y_5912_);
lean_dec_ref(v___y_5911_);
lean_dec_ref(v_type_5910_);
lean_dec_ref(v_x_5909_);
return v_res_5916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance(lean_object* v_declName_5917_, lean_object* v_prio_5918_, lean_object* v___y_5919_, lean_object* v___y_5920_, lean_object* v___y_5921_, lean_object* v___y_5922_){
_start:
{
lean_object* v___f_5924_; lean_object* v___x_5925_; lean_object* v_env_5926_; uint8_t v___x_5927_; lean_object* v___x_5928_; 
lean_inc_n(v_declName_5917_, 2);
v___f_5924_ = lean_alloc_closure((void*)(l_Lean_Meta_addDefaultInstance___lam__0___boxed), 9, 2);
lean_closure_set(v___f_5924_, 0, v_declName_5917_);
lean_closure_set(v___f_5924_, 1, v_prio_5918_);
v___x_5925_ = lean_st_ref_get(v___y_5922_);
v_env_5926_ = lean_ctor_get(v___x_5925_, 0);
lean_inc_ref(v_env_5926_);
lean_dec(v___x_5925_);
v___x_5927_ = 0;
v___x_5928_ = l_Lean_Environment_find_x3f(v_env_5926_, v_declName_5917_, v___x_5927_);
if (lean_obj_tag(v___x_5928_) == 0)
{
lean_object* v___x_5929_; lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; 
lean_dec_ref(v___f_5924_);
v___x_5929_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7___redArg___closed__1);
v___x_5930_ = l_Lean_MessageData_ofConstName(v_declName_5917_, v___x_5927_);
v___x_5931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5931_, 0, v___x_5929_);
lean_ctor_set(v___x_5931_, 1, v___x_5930_);
v___x_5932_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_5933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5933_, 0, v___x_5931_);
lean_ctor_set(v___x_5933_, 1, v___x_5932_);
v___x_5934_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_5933_, v___y_5919_, v___y_5920_, v___y_5921_, v___y_5922_);
return v___x_5934_;
}
else
{
lean_object* v_val_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; 
lean_dec(v_declName_5917_);
v_val_5935_ = lean_ctor_get(v___x_5928_, 0);
lean_inc(v_val_5935_);
lean_dec_ref_known(v___x_5928_, 1);
v___x_5936_ = l_Lean_ConstantInfo_type(v_val_5935_);
lean_dec(v_val_5935_);
v___x_5937_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v___x_5936_, v___f_5924_, v___x_5927_, v___x_5927_, v___y_5919_, v___y_5920_, v___y_5921_, v___y_5922_);
return v___x_5937_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___boxed(lean_object* v_declName_5938_, lean_object* v_prio_5939_, lean_object* v___y_5940_, lean_object* v___y_5941_, lean_object* v___y_5942_, lean_object* v___y_5943_, lean_object* v___y_5944_){
_start:
{
lean_object* v_res_5945_; 
v_res_5945_ = l_Lean_Meta_addDefaultInstance(v_declName_5938_, v_prio_5939_, v___y_5940_, v___y_5941_, v___y_5942_, v___y_5943_);
lean_dec(v___y_5943_);
lean_dec_ref(v___y_5942_);
lean_dec(v___y_5941_);
lean_dec_ref(v___y_5940_);
return v_res_5945_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_5947_; lean_object* v___x_5948_; 
v___x_5947_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0));
v___x_5948_ = l_Lean_stringToMessageData(v___x_5947_);
return v___x_5948_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_5950_; lean_object* v___x_5951_; 
v___x_5950_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2));
v___x_5951_ = l_Lean_stringToMessageData(v___x_5950_);
return v___x_5951_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(lean_object* v_name_5955_, uint8_t v_kind_5956_, lean_object* v___y_5957_, lean_object* v___y_5958_){
_start:
{
lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___y_5966_; 
v___x_5960_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1);
v___x_5961_ = l_Lean_MessageData_ofName(v_name_5955_);
v___x_5962_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5962_, 0, v___x_5960_);
lean_ctor_set(v___x_5962_, 1, v___x_5961_);
v___x_5963_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3);
v___x_5964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5964_, 0, v___x_5962_);
lean_ctor_set(v___x_5964_, 1, v___x_5963_);
switch(v_kind_5956_)
{
case 0:
{
lean_object* v___x_5973_; 
v___x_5973_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4));
v___y_5966_ = v___x_5973_;
goto v___jp_5965_;
}
case 1:
{
lean_object* v___x_5974_; 
v___x_5974_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5));
v___y_5966_ = v___x_5974_;
goto v___jp_5965_;
}
default: 
{
lean_object* v___x_5975_; 
v___x_5975_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6));
v___y_5966_ = v___x_5975_;
goto v___jp_5965_;
}
}
v___jp_5965_:
{
lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; 
lean_inc_ref(v___y_5966_);
v___x_5967_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5967_, 0, v___y_5966_);
v___x_5968_ = l_Lean_MessageData_ofFormat(v___x_5967_);
v___x_5969_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5969_, 0, v___x_5964_);
lean_ctor_set(v___x_5969_, 1, v___x_5968_);
v___x_5970_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_5971_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5971_, 0, v___x_5969_);
lean_ctor_set(v___x_5971_, 1, v___x_5970_);
v___x_5972_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_5971_, v___y_5957_, v___y_5958_);
return v___x_5972_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_name_5976_, lean_object* v_kind_5977_, lean_object* v___y_5978_, lean_object* v___y_5979_, lean_object* v___y_5980_){
_start:
{
uint8_t v_kind_boxed_5981_; lean_object* v_res_5982_; 
v_kind_boxed_5981_ = lean_unbox(v_kind_5977_);
v_res_5982_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v_name_5976_, v_kind_boxed_5981_, v___y_5978_, v___y_5979_);
lean_dec(v___y_5979_);
lean_dec_ref(v___y_5978_);
return v_res_5982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object* v___x_5983_, lean_object* v___x_5984_, lean_object* v_declName_5985_, lean_object* v_stx_5986_, uint8_t v_kind_5987_, lean_object* v___y_5988_, lean_object* v___y_5989_){
_start:
{
lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; 
v___x_5991_ = lean_unsigned_to_nat(1u);
v___x_5992_ = l_Lean_Syntax_getArg(v_stx_5986_, v___x_5991_);
v___x_5993_ = l_Lean_getAttrParamOptPrio(v___x_5992_, v___y_5988_, v___y_5989_);
if (lean_obj_tag(v___x_5993_) == 0)
{
lean_object* v_a_5994_; lean_object* v___y_5996_; lean_object* v___y_5997_; uint8_t v___x_6028_; uint8_t v___x_6029_; 
v_a_5994_ = lean_ctor_get(v___x_5993_, 0);
lean_inc(v_a_5994_);
lean_dec_ref_known(v___x_5993_, 1);
v___x_6028_ = 0;
v___x_6029_ = l_Lean_instBEqAttributeKind_beq(v_kind_5987_, v___x_6028_);
if (v___x_6029_ == 0)
{
lean_object* v___x_6030_; 
lean_dec(v_a_5994_);
lean_dec(v_declName_5985_);
lean_dec(v___x_5983_);
v___x_6030_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v___x_5984_, v_kind_5987_, v___y_5988_, v___y_5989_);
return v___x_6030_;
}
else
{
lean_dec(v___x_5984_);
v___y_5996_ = v___y_5988_;
v___y_5997_ = v___y_5989_;
goto v___jp_5995_;
}
v___jp_5995_:
{
uint8_t v___x_5998_; uint8_t v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; lean_object* v___x_6002_; lean_object* v___x_6003_; lean_object* v___x_6004_; lean_object* v___x_6005_; size_t v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; 
v___x_5998_ = 0;
v___x_5999_ = 1;
v___x_6000_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6001_ = lean_box(1);
v___x_6002_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6003_ = lean_unsigned_to_nat(32u);
v___x_6004_ = lean_mk_empty_array_with_capacity(v___x_6003_);
v___x_6005_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__4_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_6006_ = ((size_t)5ULL);
lean_inc_n(v___x_5983_, 6);
v___x_6007_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6007_, 0, v___x_6005_);
lean_ctor_set(v___x_6007_, 1, v___x_6004_);
lean_ctor_set(v___x_6007_, 2, v___x_5983_);
lean_ctor_set(v___x_6007_, 3, v___x_5983_);
lean_ctor_set_usize(v___x_6007_, 4, v___x_6006_);
lean_inc_ref(v___x_6007_);
v___x_6008_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6008_, 0, v___x_6002_);
lean_ctor_set(v___x_6008_, 1, v___x_6007_);
lean_ctor_set(v___x_6008_, 2, v___x_6001_);
v___x_6009_ = lean_mk_empty_array_with_capacity(v___x_5983_);
v___x_6010_ = lean_box(0);
v___x_6011_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6011_, 0, v___x_6000_);
lean_ctor_set(v___x_6011_, 1, v___x_6001_);
lean_ctor_set(v___x_6011_, 2, v___x_6008_);
lean_ctor_set(v___x_6011_, 3, v___x_6009_);
lean_ctor_set(v___x_6011_, 4, v___x_6010_);
lean_ctor_set(v___x_6011_, 5, v___x_5983_);
lean_ctor_set(v___x_6011_, 6, v___x_6010_);
lean_ctor_set_uint8(v___x_6011_, sizeof(void*)*7, v___x_5998_);
lean_ctor_set_uint8(v___x_6011_, sizeof(void*)*7 + 1, v___x_5998_);
lean_ctor_set_uint8(v___x_6011_, sizeof(void*)*7 + 2, v___x_5998_);
lean_ctor_set_uint8(v___x_6011_, sizeof(void*)*7 + 3, v___x_5999_);
v___x_6012_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_6012_, 0, v___x_5983_);
lean_ctor_set(v___x_6012_, 1, v___x_5983_);
lean_ctor_set(v___x_6012_, 2, v___x_5983_);
lean_ctor_set(v___x_6012_, 3, v___x_5983_);
lean_ctor_set(v___x_6012_, 4, v___x_6002_);
lean_ctor_set(v___x_6012_, 5, v___x_6002_);
lean_ctor_set(v___x_6012_, 6, v___x_6002_);
lean_ctor_set(v___x_6012_, 7, v___x_6002_);
lean_ctor_set(v___x_6012_, 8, v___x_6002_);
lean_ctor_set(v___x_6012_, 9, v___x_6002_);
lean_ctor_set(v___x_6012_, 10, v___x_6002_);
v___x_6013_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6014_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6015_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6015_, 0, v___x_6012_);
lean_ctor_set(v___x_6015_, 1, v___x_6013_);
lean_ctor_set(v___x_6015_, 2, v___x_6001_);
lean_ctor_set(v___x_6015_, 3, v___x_6007_);
lean_ctor_set(v___x_6015_, 4, v___x_6014_);
v___x_6016_ = lean_box(0);
v___x_6017_ = lean_st_mk_ref(v___x_6015_);
v___x_6018_ = l_Lean_Meta_addDefaultInstance(v_declName_5985_, v_a_5994_, v___x_6011_, v___x_6017_, v___y_5996_, v___y_5997_);
lean_dec_ref_known(v___x_6011_, 7);
if (lean_obj_tag(v___x_6018_) == 0)
{
lean_object* v___x_6020_; uint8_t v_isShared_6021_; uint8_t v_isSharedCheck_6026_; 
v_isSharedCheck_6026_ = !lean_is_exclusive(v___x_6018_);
if (v_isSharedCheck_6026_ == 0)
{
lean_object* v_unused_6027_; 
v_unused_6027_ = lean_ctor_get(v___x_6018_, 0);
lean_dec(v_unused_6027_);
v___x_6020_ = v___x_6018_;
v_isShared_6021_ = v_isSharedCheck_6026_;
goto v_resetjp_6019_;
}
else
{
lean_dec(v___x_6018_);
v___x_6020_ = lean_box(0);
v_isShared_6021_ = v_isSharedCheck_6026_;
goto v_resetjp_6019_;
}
v_resetjp_6019_:
{
lean_object* v___x_6022_; lean_object* v___x_6024_; 
v___x_6022_ = lean_st_ref_get(v___x_6017_);
lean_dec(v___x_6017_);
lean_dec(v___x_6022_);
if (v_isShared_6021_ == 0)
{
lean_ctor_set(v___x_6020_, 0, v___x_6016_);
v___x_6024_ = v___x_6020_;
goto v_reusejp_6023_;
}
else
{
lean_object* v_reuseFailAlloc_6025_; 
v_reuseFailAlloc_6025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6025_, 0, v___x_6016_);
v___x_6024_ = v_reuseFailAlloc_6025_;
goto v_reusejp_6023_;
}
v_reusejp_6023_:
{
return v___x_6024_;
}
}
}
else
{
lean_dec(v___x_6017_);
return v___x_6018_;
}
}
}
else
{
lean_object* v_a_6031_; lean_object* v___x_6033_; uint8_t v_isShared_6034_; uint8_t v_isSharedCheck_6038_; 
lean_dec(v_declName_5985_);
lean_dec(v___x_5984_);
lean_dec(v___x_5983_);
v_a_6031_ = lean_ctor_get(v___x_5993_, 0);
v_isSharedCheck_6038_ = !lean_is_exclusive(v___x_5993_);
if (v_isSharedCheck_6038_ == 0)
{
v___x_6033_ = v___x_5993_;
v_isShared_6034_ = v_isSharedCheck_6038_;
goto v_resetjp_6032_;
}
else
{
lean_inc(v_a_6031_);
lean_dec(v___x_5993_);
v___x_6033_ = lean_box(0);
v_isShared_6034_ = v_isSharedCheck_6038_;
goto v_resetjp_6032_;
}
v_resetjp_6032_:
{
lean_object* v___x_6036_; 
if (v_isShared_6034_ == 0)
{
v___x_6036_ = v___x_6033_;
goto v_reusejp_6035_;
}
else
{
lean_object* v_reuseFailAlloc_6037_; 
v_reuseFailAlloc_6037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6037_, 0, v_a_6031_);
v___x_6036_ = v_reuseFailAlloc_6037_;
goto v_reusejp_6035_;
}
v_reusejp_6035_:
{
return v___x_6036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v___x_6039_, lean_object* v___x_6040_, lean_object* v_declName_6041_, lean_object* v_stx_6042_, lean_object* v_kind_6043_, lean_object* v___y_6044_, lean_object* v___y_6045_, lean_object* v___y_6046_){
_start:
{
uint8_t v_kind_boxed_6047_; lean_object* v_res_6048_; 
v_kind_boxed_6047_ = lean_unbox(v_kind_6043_);
v_res_6048_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(v___x_6039_, v___x_6040_, v_declName_6041_, v_stx_6042_, v_kind_boxed_6047_, v___y_6044_, v___y_6045_);
lean_dec(v___y_6045_);
lean_dec_ref(v___y_6044_);
lean_dec(v_stx_6042_);
return v_res_6048_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6050_; lean_object* v___x_6051_; 
v___x_6050_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6051_ = l_Lean_stringToMessageData(v___x_6050_);
return v___x_6051_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6053_; lean_object* v___x_6054_; 
v___x_6053_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6054_ = l_Lean_stringToMessageData(v___x_6053_);
return v___x_6054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object* v___x_6055_, lean_object* v_decl_6056_, lean_object* v___y_6057_, lean_object* v___y_6058_){
_start:
{
lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; 
v___x_6060_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6061_ = l_Lean_MessageData_ofName(v___x_6055_);
v___x_6062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6062_, 0, v___x_6060_);
lean_ctor_set(v___x_6062_, 1, v___x_6061_);
v___x_6063_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6064_, 0, v___x_6062_);
lean_ctor_set(v___x_6064_, 1, v___x_6063_);
v___x_6065_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_6064_, v___y_6057_, v___y_6058_);
return v___x_6065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v___x_6066_, lean_object* v_decl_6067_, lean_object* v___y_6068_, lean_object* v___y_6069_, lean_object* v___y_6070_){
_start:
{
lean_object* v_res_6071_; 
v_res_6071_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(v___x_6066_, v_decl_6067_, v___y_6068_, v___y_6069_);
lean_dec(v___y_6069_);
lean_dec_ref(v___y_6068_);
lean_dec(v_decl_6067_);
return v_res_6071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; 
v___x_6103_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6104_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6105_ = l_Lean_registerBuiltinAttribute(v___x_6104_);
if (lean_obj_tag(v___x_6105_) == 0)
{
lean_object* v___x_6106_; uint8_t v___x_6107_; lean_object* v___x_6108_; 
lean_dec_ref_known(v___x_6105_, 1);
v___x_6106_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_6107_ = 0;
v___x_6108_ = l_Lean_registerTraceClass(v___x_6106_, v___x_6107_, v___x_6103_);
return v___x_6108_;
}
else
{
return v___x_6105_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v___y_6109_){
_start:
{
lean_object* v_res_6110_; 
v_res_6110_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_();
return v_res_6110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_6111_, lean_object* v_name_6112_, uint8_t v_kind_6113_, lean_object* v___y_6114_, lean_object* v___y_6115_){
_start:
{
lean_object* v___x_6117_; 
v___x_6117_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v_name_6112_, v_kind_6113_, v___y_6114_, v___y_6115_);
return v___x_6117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_6118_, lean_object* v_name_6119_, lean_object* v_kind_6120_, lean_object* v___y_6121_, lean_object* v___y_6122_, lean_object* v___y_6123_){
_start:
{
uint8_t v_kind_boxed_6124_; lean_object* v_res_6125_; 
v_kind_boxed_6124_ = lean_unbox(v_kind_6120_);
v_res_6125_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(v_00_u03b1_6118_, v_name_6119_, v_kind_boxed_6124_, v___y_6121_, v___y_6122_);
lean_dec(v___y_6122_);
lean_dec_ref(v___y_6121_);
return v_res_6125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0(lean_object* v___x_6126_, lean_object* v_toPure_6127_, lean_object* v_____do__lift_6128_){
_start:
{
lean_object* v___x_6129_; lean_object* v_toEnvExtension_6130_; lean_object* v_asyncMode_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v_priorities_6134_; lean_object* v___x_6135_; 
v___x_6129_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_6130_ = lean_ctor_get(v___x_6129_, 0);
v_asyncMode_6131_ = lean_ctor_get(v_toEnvExtension_6130_, 2);
v___x_6132_ = lean_box(0);
v___x_6133_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_6126_, v___x_6129_, v_____do__lift_6128_, v_asyncMode_6131_, v___x_6132_);
v_priorities_6134_ = lean_ctor_get(v___x_6133_, 1);
lean_inc(v_priorities_6134_);
lean_dec(v___x_6133_);
v___x_6135_ = lean_apply_2(v_toPure_6127_, lean_box(0), v_priorities_6134_);
return v___x_6135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg(lean_object* v_inst_6136_, lean_object* v_inst_6137_){
_start:
{
lean_object* v_toApplicative_6138_; lean_object* v_toBind_6139_; lean_object* v_getEnv_6140_; lean_object* v_toPure_6141_; lean_object* v___x_6142_; lean_object* v___f_6143_; lean_object* v___x_6144_; 
v_toApplicative_6138_ = lean_ctor_get(v_inst_6136_, 0);
lean_inc_ref(v_toApplicative_6138_);
v_toBind_6139_ = lean_ctor_get(v_inst_6136_, 1);
lean_inc(v_toBind_6139_);
lean_dec_ref(v_inst_6136_);
v_getEnv_6140_ = lean_ctor_get(v_inst_6137_, 0);
lean_inc(v_getEnv_6140_);
lean_dec_ref(v_inst_6137_);
v_toPure_6141_ = lean_ctor_get(v_toApplicative_6138_, 1);
lean_inc(v_toPure_6141_);
lean_dec_ref(v_toApplicative_6138_);
v___x_6142_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default));
v___f_6143_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0), 3, 2);
lean_closure_set(v___f_6143_, 0, v___x_6142_);
lean_closure_set(v___f_6143_, 1, v_toPure_6141_);
v___x_6144_ = lean_apply_4(v_toBind_6139_, lean_box(0), lean_box(0), v_getEnv_6140_, v___f_6143_);
return v___x_6144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities(lean_object* v_m_6145_, lean_object* v_inst_6146_, lean_object* v_inst_6147_){
_start:
{
lean_object* v___x_6148_; 
v___x_6148_ = l_Lean_Meta_getDefaultInstancesPriorities___redArg(v_inst_6146_, v_inst_6147_);
return v___x_6148_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_getDefaultInstances___redArg___lam__0(lean_object* v_env_6149_, uint8_t v_isExporting_6150_, lean_object* v_x_6151_){
_start:
{
lean_object* v_fst_6152_; uint8_t v___x_6153_; 
v_fst_6152_ = lean_ctor_get(v_x_6151_, 0);
lean_inc(v_fst_6152_);
lean_dec_ref(v_x_6151_);
v___x_6153_ = l_Lean_Environment_contains(v_env_6149_, v_fst_6152_, v_isExporting_6150_);
return v___x_6153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed(lean_object* v_env_6154_, lean_object* v_isExporting_6155_, lean_object* v_x_6156_){
_start:
{
uint8_t v_isExporting_boxed_6157_; uint8_t v_res_6158_; lean_object* v_r_6159_; 
v_isExporting_boxed_6157_ = lean_unbox(v_isExporting_6155_);
v_res_6158_ = l_Lean_Meta_getDefaultInstances___redArg___lam__0(v_env_6154_, v_isExporting_boxed_6157_, v_x_6156_);
v_r_6159_ = lean_box(v_res_6158_);
return v_r_6159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1(lean_object* v___x_6160_, lean_object* v_toPure_6161_, lean_object* v_className_6162_, lean_object* v_env_6163_){
_start:
{
lean_object* v___y_6165_; lean_object* v___x_6173_; lean_object* v_toEnvExtension_6174_; lean_object* v_asyncMode_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v_defaultInstances_6178_; lean_object* v___x_6179_; 
v___x_6173_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_6174_ = lean_ctor_get(v___x_6173_, 0);
v_asyncMode_6175_ = lean_ctor_get(v_toEnvExtension_6174_, 2);
v___x_6176_ = lean_box(0);
lean_inc_ref(v_env_6163_);
v___x_6177_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_6160_, v___x_6173_, v_env_6163_, v_asyncMode_6175_, v___x_6176_);
v_defaultInstances_6178_ = lean_ctor_get(v___x_6177_, 0);
lean_inc(v_defaultInstances_6178_);
lean_dec(v___x_6177_);
v___x_6179_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_defaultInstances_6178_, v_className_6162_);
lean_dec(v_defaultInstances_6178_);
if (lean_obj_tag(v___x_6179_) == 0)
{
lean_object* v___x_6180_; 
v___x_6180_ = lean_box(0);
v___y_6165_ = v___x_6180_;
goto v___jp_6164_;
}
else
{
lean_object* v_val_6181_; 
v_val_6181_ = lean_ctor_get(v___x_6179_, 0);
lean_inc(v_val_6181_);
lean_dec_ref_known(v___x_6179_, 1);
v___y_6165_ = v_val_6181_;
goto v___jp_6164_;
}
v___jp_6164_:
{
uint8_t v_isExporting_6166_; 
v_isExporting_6166_ = lean_ctor_get_uint8(v_env_6163_, sizeof(void*)*8);
if (v_isExporting_6166_ == 0)
{
lean_object* v___x_6167_; 
lean_dec_ref(v_env_6163_);
v___x_6167_ = lean_apply_2(v_toPure_6161_, lean_box(0), v___y_6165_);
return v___x_6167_;
}
else
{
lean_object* v___x_6168_; lean_object* v___f_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; 
v___x_6168_ = lean_box(v_isExporting_6166_);
v___f_6169_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_6169_, 0, v_env_6163_);
lean_closure_set(v___f_6169_, 1, v___x_6168_);
v___x_6170_ = lean_box(0);
v___x_6171_ = l_List_filterTR_loop___redArg(v___f_6169_, v___y_6165_, v___x_6170_);
v___x_6172_ = lean_apply_2(v_toPure_6161_, lean_box(0), v___x_6171_);
return v___x_6172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed(lean_object* v___x_6182_, lean_object* v_toPure_6183_, lean_object* v_className_6184_, lean_object* v_env_6185_){
_start:
{
lean_object* v_res_6186_; 
v_res_6186_ = l_Lean_Meta_getDefaultInstances___redArg___lam__1(v___x_6182_, v_toPure_6183_, v_className_6184_, v_env_6185_);
lean_dec(v_className_6184_);
return v_res_6186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg(lean_object* v_inst_6187_, lean_object* v_inst_6188_, lean_object* v_className_6189_){
_start:
{
lean_object* v_toApplicative_6190_; lean_object* v_toBind_6191_; lean_object* v_getEnv_6192_; lean_object* v_toPure_6193_; lean_object* v___x_6194_; lean_object* v___f_6195_; lean_object* v___x_6196_; 
v_toApplicative_6190_ = lean_ctor_get(v_inst_6187_, 0);
lean_inc_ref(v_toApplicative_6190_);
v_toBind_6191_ = lean_ctor_get(v_inst_6187_, 1);
lean_inc(v_toBind_6191_);
lean_dec_ref(v_inst_6187_);
v_getEnv_6192_ = lean_ctor_get(v_inst_6188_, 0);
lean_inc(v_getEnv_6192_);
lean_dec_ref(v_inst_6188_);
v_toPure_6193_ = lean_ctor_get(v_toApplicative_6190_, 1);
lean_inc(v_toPure_6193_);
lean_dec_ref(v_toApplicative_6190_);
v___x_6194_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default));
v___f_6195_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_6195_, 0, v___x_6194_);
lean_closure_set(v___f_6195_, 1, v_toPure_6193_);
lean_closure_set(v___f_6195_, 2, v_className_6189_);
v___x_6196_ = lean_apply_4(v_toBind_6191_, lean_box(0), lean_box(0), v_getEnv_6192_, v___f_6195_);
return v___x_6196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances(lean_object* v_m_6197_, lean_object* v_inst_6198_, lean_object* v_inst_6199_, lean_object* v_className_6200_){
_start:
{
lean_object* v___x_6201_; 
v___x_6201_ = l_Lean_Meta_getDefaultInstances___redArg(v_inst_6198_, v_inst_6199_, v_className_6200_);
return v___x_6201_;
}
}
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Stream(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CollectMVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PPBinder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_UnusedBinders(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Instances(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Range_Polymorphic_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PPBinder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_UnusedBinders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_synthInstance_checkSynthOrder = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_synthInstance_checkSynthOrder);
lean_dec_ref(res);
l_Lean_Meta_instInhabitedInstanceEntry_default = _init_l_Lean_Meta_instInhabitedInstanceEntry_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstanceEntry_default);
l_Lean_Meta_instInhabitedInstanceEntry = _init_l_Lean_Meta_instInhabitedInstanceEntry();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstanceEntry);
l_Lean_Meta_instInhabitedInstances_default = _init_l_Lean_Meta_instInhabitedInstances_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstances_default);
l_Lean_Meta_instInhabitedInstances = _init_l_Lean_Meta_instInhabitedInstances();
lean_mark_persistent(l_Lean_Meta_instInhabitedInstances);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_2240659058____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_instanceExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_instanceExtension);
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_defaultInstanceExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_defaultInstanceExtension);
lean_dec_ref(res);
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Instances(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Range_Polymorphic_Stream(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_CollectMVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_PPBinder(uint8_t builtin);
lean_object* initialize_Lean_Util_UnusedBinders(uint8_t builtin);
lean_object* initialize_Lean_Meta_CollectFVars(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Instances(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Range_Polymorphic_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PPBinder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_UnusedBinders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Instances(builtin);
}
#ifdef __cplusplus
}
#endif
