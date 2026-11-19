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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_getAttrParamOptPrio(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
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
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_setPPExplicit(lean_object*, uint8_t);
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
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
uint8_t l_Lean_instBEqReducibilityStatus_beq(uint8_t, uint8_t);
uint8_t l_Lean_ConstantInfo_isDefinition(lean_object*);
uint8_t l_Lean_wasOriginallyDefn(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_State_ofFVarSet(lean_object*, lean_object*);
lean_object* l_Lean_Expr_collectFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getBinderInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_State_add(lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_State_addDependencies(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_ppAsBinder(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_InstanceEntry_keyClass_spec__0(lean_object*);
static const lean_string_object l_Lean_Meta_InstanceEntry_keyClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.Instances"};
static const lean_object* l_Lean_Meta_InstanceEntry_keyClass___closed__0 = (const lean_object*)&l_Lean_Meta_InstanceEntry_keyClass___closed__0_value;
static const lean_string_object l_Lean_Meta_InstanceEntry_keyClass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.InstanceEntry.keyClass"};
static const lean_object* l_Lean_Meta_InstanceEntry_keyClass___closed__1 = (const lean_object*)&l_Lean_Meta_InstanceEntry_keyClass___closed__1_value;
static const lean_string_object l_Lean_Meta_InstanceEntry_keyClass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "instance key not rooted at a constant, which `addInstance` rejects"};
static const lean_object* l_Lean_Meta_InstanceEntry_keyClass___closed__2 = (const lean_object*)&l_Lean_Meta_InstanceEntry_keyClass___closed__2_value;
static lean_once_cell_t l_Lean_Meta_InstanceEntry_keyClass___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_InstanceEntry_keyClass___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_InstanceEntry_keyClass(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InstanceEntry_keyClass___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_getClassChanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_getClassChanges___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2(lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addImportedInstanceEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addInstanceEntry(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "instanceExtension"};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 253, 187, 89, 234, 162, 232, 19)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_addInstanceEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_addImportedInstanceEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "argument "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ": `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1;
static const lean_ctor_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0_value),((lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3_value;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "This instance has "};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " argument"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = " that cannot be inferred using typeclass synthesis. Specifically\n"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 176, .m_capacity = 176, .m_length = 175, .m_data = "\n\nThese arguments are not instance-implicit and appear neither in another instance-implicit argument nor the return type, so they cannot be inferred using typeclass synthesis."};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11;
static const lean_string_object l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12 = (const lean_object*)&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_addInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid instance `"};
static const lean_object* l_Lean_Meta_addInstance___closed__0 = (const lean_object*)&l_Lean_Meta_addInstance___closed__0_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__1;
static const lean_string_object l_Lean_Meta_addInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "`, its type does not reduce to an application of a constant at reducible transparency"};
static const lean_object* l_Lean_Meta_addInstance___closed__2 = (const lean_object*)&l_Lean_Meta_addInstance___closed__2_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__3;
static const lean_string_object l_Lean_Meta_addInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instance `"};
static const lean_object* l_Lean_Meta_addInstance___closed__4 = (const lean_object*)&l_Lean_Meta_addInstance___closed__4_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__5;
static const lean_string_object l_Lean_Meta_addInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "` must be marked with `@[expose]`"};
static const lean_object* l_Lean_Meta_addInstance___closed__6 = (const lean_object*)&l_Lean_Meta_addInstance___closed__6_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__7;
static const lean_string_object l_Lean_Meta_addInstance___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Definition `"};
static const lean_object* l_Lean_Meta_addInstance___closed__8 = (const lean_object*)&l_Lean_Meta_addInstance___closed__8_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__9;
static const lean_string_object l_Lean_Meta_addInstance___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 274, .m_capacity = 274, .m_length = 273, .m_data = "` of class type is semireducible. Most type class instances should be instance-reducible, so consider marking this\ndefinition with `@[instance_reducible]`. If it is intentionally semireducible, this warning can be disabled with `set_option warn.classDefReducibility false`."};
static const lean_object* l_Lean_Meta_addInstance___closed__10 = (const lean_object*)&l_Lean_Meta_addInstance___closed__10_value;
static lean_once_cell_t l_Lean_Meta_addInstance___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addInstance___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
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
static const lean_string_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 427, .m_capacity = 427, .m_length = 426, .m_data = "Registers type class instances.\n\nThe `instance` command, which expands to `@[instance] def`, is usually preferred over using this\nattribute directly. However it might sometimes still be necessary to use this attribute directly,\nin particular for `opaque` instances.\n\nTo assign priorities to instances, `@[instance prio]` can be used (where `prio` is a priority).\nThis corresponds to the `instance (priority := prio)` notation."};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceClassChanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceClassChanges___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_defaultInstanceExtension;
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid default instance `"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "`, it has type `("};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " ...)`, but `"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__5;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a type class"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__6 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__1___closed__6_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__7;
static const lean_string_object l_Lean_Meta_addDefaultInstance___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "`, type must be of the form `(C ...)` where `C` is a type class"};
static const lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__8 = (const lean_object*)&l_Lean_Meta_addDefaultInstance___lam__1___closed__8_value;
static lean_once_cell_t l_Lean_Meta_addDefaultInstance___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_addDefaultInstance___lam__1___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed, .m_arity = 9, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__value)} };
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_3022255136____hygCtx___hyg_4____boxed(lean_object* v_a_57_){
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
v___x_120_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
lean_ctor_set(v___x_120_, 2, v___x_117_);
lean_ctor_set(v___x_120_, 3, v___x_118_);
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_InstanceEntry_keyClass_spec__0(lean_object* v_msg_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_box(0);
v___x_125_ = lean_panic_fn_borrowed(v___x_124_, v_msg_123_);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_Meta_InstanceEntry_keyClass___closed__3(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_129_ = ((lean_object*)(l_Lean_Meta_InstanceEntry_keyClass___closed__2));
v___x_130_ = lean_unsigned_to_nat(9u);
v___x_131_ = lean_unsigned_to_nat(95u);
v___x_132_ = ((lean_object*)(l_Lean_Meta_InstanceEntry_keyClass___closed__1));
v___x_133_ = ((lean_object*)(l_Lean_Meta_InstanceEntry_keyClass___closed__0));
v___x_134_ = l_mkPanicMessageWithDecl(v___x_133_, v___x_132_, v___x_131_, v___x_130_, v___x_129_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InstanceEntry_keyClass(lean_object* v_e_135_){
_start:
{
lean_object* v_keys_139_; lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v_keys_139_ = lean_ctor_get(v_e_135_, 0);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = lean_array_get_size(v_keys_139_);
v___x_142_ = lean_nat_dec_lt(v___x_140_, v___x_141_);
if (v___x_142_ == 0)
{
goto v___jp_136_;
}
else
{
lean_object* v___x_143_; 
v___x_143_ = lean_array_fget_borrowed(v_keys_139_, v___x_140_);
if (lean_obj_tag(v___x_143_) == 4)
{
lean_object* v_a_144_; 
v_a_144_ = lean_ctor_get(v___x_143_, 0);
lean_inc(v_a_144_);
return v_a_144_;
}
else
{
goto v___jp_136_;
}
}
v___jp_136_:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_obj_once(&l_Lean_Meta_InstanceEntry_keyClass___closed__3, &l_Lean_Meta_InstanceEntry_keyClass___closed__3_once, _init_l_Lean_Meta_InstanceEntry_keyClass___closed__3);
v___x_138_ = l_panic___at___00Lean_Meta_InstanceEntry_keyClass_spec__0(v___x_137_);
return v___x_138_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InstanceEntry_keyClass___boxed(lean_object* v_e_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_Meta_InstanceEntry_keyClass(v_e_145_);
lean_dec_ref(v_e_145_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_147_, lean_object* v_vals_148_, lean_object* v_i_149_, lean_object* v_k_150_){
_start:
{
lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_151_ = lean_array_get_size(v_keys_147_);
v___x_152_ = lean_nat_dec_lt(v_i_149_, v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
lean_dec(v_i_149_);
v___x_153_ = lean_box(0);
return v___x_153_;
}
else
{
lean_object* v_k_x27_154_; uint8_t v___x_155_; 
v_k_x27_154_ = lean_array_fget_borrowed(v_keys_147_, v_i_149_);
v___x_155_ = lean_name_eq(v_k_150_, v_k_x27_154_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_add(v_i_149_, v___x_156_);
lean_dec(v_i_149_);
v_i_149_ = v___x_157_;
goto _start;
}
else
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_array_fget_borrowed(v_vals_148_, v_i_149_);
lean_dec(v_i_149_);
lean_inc(v___x_159_);
v___x_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_161_, lean_object* v_vals_162_, lean_object* v_i_163_, lean_object* v_k_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg(v_keys_161_, v_vals_162_, v_i_163_, v_k_164_);
lean_dec(v_k_164_);
lean_dec_ref(v_vals_162_);
lean_dec_ref(v_keys_161_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg(lean_object* v_x_166_, size_t v_x_167_, lean_object* v_x_168_){
_start:
{
if (lean_obj_tag(v_x_166_) == 0)
{
lean_object* v_es_169_; lean_object* v___x_170_; size_t v___x_171_; size_t v___x_172_; lean_object* v_j_173_; lean_object* v___x_174_; 
v_es_169_ = lean_ctor_get(v_x_166_, 0);
v___x_170_ = lean_box(2);
v___x_171_ = ((size_t)31ULL);
v___x_172_ = lean_usize_land(v_x_167_, v___x_171_);
v_j_173_ = lean_usize_to_nat(v___x_172_);
v___x_174_ = lean_array_get_borrowed(v___x_170_, v_es_169_, v_j_173_);
lean_dec(v_j_173_);
switch(lean_obj_tag(v___x_174_))
{
case 0:
{
lean_object* v_key_175_; lean_object* v_val_176_; uint8_t v___x_177_; 
v_key_175_ = lean_ctor_get(v___x_174_, 0);
v_val_176_ = lean_ctor_get(v___x_174_, 1);
v___x_177_ = lean_name_eq(v_x_168_, v_key_175_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; 
v___x_178_ = lean_box(0);
return v___x_178_;
}
else
{
lean_object* v___x_179_; 
lean_inc(v_val_176_);
v___x_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_179_, 0, v_val_176_);
return v___x_179_;
}
}
case 1:
{
lean_object* v_node_180_; size_t v___x_181_; size_t v___x_182_; 
v_node_180_ = lean_ctor_get(v___x_174_, 0);
v___x_181_ = ((size_t)5ULL);
v___x_182_ = lean_usize_shift_right(v_x_167_, v___x_181_);
v_x_166_ = v_node_180_;
v_x_167_ = v___x_182_;
goto _start;
}
default: 
{
lean_object* v___x_184_; 
v___x_184_ = lean_box(0);
return v___x_184_;
}
}
}
else
{
lean_object* v_ks_185_; lean_object* v_vs_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v_ks_185_ = lean_ctor_get(v_x_166_, 0);
v_vs_186_ = lean_ctor_get(v_x_166_, 1);
v___x_187_ = lean_unsigned_to_nat(0u);
v___x_188_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg(v_ks_185_, v_vs_186_, v___x_187_, v_x_168_);
return v___x_188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg___boxed(lean_object* v_x_189_, lean_object* v_x_190_, lean_object* v_x_191_){
_start:
{
size_t v_x_141__boxed_192_; lean_object* v_res_193_; 
v_x_141__boxed_192_ = lean_unbox_usize(v_x_190_);
lean_dec(v_x_190_);
v_res_193_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg(v_x_189_, v_x_141__boxed_192_, v_x_191_);
lean_dec(v_x_191_);
lean_dec_ref(v_x_189_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(lean_object* v_x_194_, lean_object* v_x_195_){
_start:
{
uint64_t v___y_197_; 
if (lean_obj_tag(v_x_195_) == 0)
{
uint64_t v___x_200_; 
v___x_200_ = 1723ULL;
v___y_197_ = v___x_200_;
goto v___jp_196_;
}
else
{
uint64_t v_hash_201_; 
v_hash_201_ = lean_ctor_get_uint64(v_x_195_, sizeof(void*)*2);
v___y_197_ = v_hash_201_;
goto v___jp_196_;
}
v___jp_196_:
{
size_t v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_uint64_to_usize(v___y_197_);
v___x_199_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg(v_x_194_, v___x_198_, v_x_195_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg___boxed(lean_object* v_x_202_, lean_object* v_x_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_x_202_, v_x_203_);
lean_dec(v_x_203_);
lean_dec_ref(v_x_202_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_getClassChanges(lean_object* v_d_205_, lean_object* v_className_206_){
_start:
{
lean_object* v_classChanges_207_; lean_object* v___x_208_; 
v_classChanges_207_ = lean_ctor_get(v_d_205_, 3);
v___x_208_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_classChanges_207_, v_className_206_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v___x_209_; 
v___x_209_ = lean_box(0);
return v___x_209_;
}
else
{
lean_object* v_val_210_; 
v_val_210_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_val_210_);
lean_dec_ref_known(v___x_208_, 1);
return v_val_210_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_getClassChanges___boxed(lean_object* v_d_211_, lean_object* v_className_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lean_Meta_Instances_getClassChanges(v_d_211_, v_className_212_);
lean_dec(v_className_212_);
lean_dec_ref(v_d_211_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0(lean_object* v_00_u03b2_214_, lean_object* v_x_215_, lean_object* v_x_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_x_215_, v_x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___boxed(lean_object* v_00_u03b2_218_, lean_object* v_x_219_, lean_object* v_x_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0(v_00_u03b2_218_, v_x_219_, v_x_220_);
lean_dec(v_x_220_);
lean_dec_ref(v_x_219_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0(lean_object* v_00_u03b2_222_, lean_object* v_x_223_, size_t v_x_224_, lean_object* v_x_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___redArg(v_x_223_, v_x_224_, v_x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0___boxed(lean_object* v_00_u03b2_227_, lean_object* v_x_228_, lean_object* v_x_229_, lean_object* v_x_230_){
_start:
{
size_t v_x_218__boxed_231_; lean_object* v_res_232_; 
v_x_218__boxed_231_ = lean_unbox_usize(v_x_229_);
lean_dec(v_x_229_);
v_res_232_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0(v_00_u03b2_227_, v_x_228_, v_x_218__boxed_231_, v_x_230_);
lean_dec(v_x_230_);
lean_dec_ref(v_x_228_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_233_, lean_object* v_keys_234_, lean_object* v_vals_235_, lean_object* v_heq_236_, lean_object* v_i_237_, lean_object* v_k_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___redArg(v_keys_234_, v_vals_235_, v_i_237_, v_k_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_240_, lean_object* v_keys_241_, lean_object* v_vals_242_, lean_object* v_heq_243_, lean_object* v_i_244_, lean_object* v_k_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0_spec__0_spec__1(v_00_u03b2_240_, v_keys_241_, v_vals_242_, v_heq_243_, v_i_244_, v_k_245_);
lean_dec(v_k_245_);
lean_dec_ref(v_vals_242_);
lean_dec_ref(v_keys_241_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_247_, lean_object* v_x_248_, lean_object* v_x_249_, lean_object* v_x_250_){
_start:
{
lean_object* v_ks_251_; lean_object* v_vs_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_276_; 
v_ks_251_ = lean_ctor_get(v_x_247_, 0);
v_vs_252_ = lean_ctor_get(v_x_247_, 1);
v_isSharedCheck_276_ = !lean_is_exclusive(v_x_247_);
if (v_isSharedCheck_276_ == 0)
{
v___x_254_ = v_x_247_;
v_isShared_255_ = v_isSharedCheck_276_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_vs_252_);
lean_inc(v_ks_251_);
lean_dec(v_x_247_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_276_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_256_ = lean_array_get_size(v_ks_251_);
v___x_257_ = lean_nat_dec_lt(v_x_248_, v___x_256_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
lean_dec(v_x_248_);
v___x_258_ = lean_array_push(v_ks_251_, v_x_249_);
v___x_259_ = lean_array_push(v_vs_252_, v_x_250_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v___x_259_);
lean_ctor_set(v___x_254_, 0, v___x_258_);
v___x_261_ = v___x_254_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
else
{
lean_object* v_k_x27_263_; uint8_t v___x_264_; 
v_k_x27_263_ = lean_array_fget_borrowed(v_ks_251_, v_x_248_);
v___x_264_ = lean_name_eq(v_x_249_, v_k_x27_263_);
if (v___x_264_ == 0)
{
lean_object* v___x_266_; 
if (v_isShared_255_ == 0)
{
v___x_266_ = v___x_254_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_ks_251_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v_vs_252_);
v___x_266_ = v_reuseFailAlloc_270_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(1u);
v___x_268_ = lean_nat_add(v_x_248_, v___x_267_);
lean_dec(v_x_248_);
v_x_247_ = v___x_266_;
v_x_248_ = v___x_268_;
goto _start;
}
}
else
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_271_ = lean_array_fset(v_ks_251_, v_x_248_, v_x_249_);
v___x_272_ = lean_array_fset(v_vs_252_, v_x_248_, v_x_250_);
lean_dec(v_x_248_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v___x_272_);
lean_ctor_set(v___x_254_, 0, v___x_271_);
v___x_274_ = v___x_254_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_271_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1___redArg(lean_object* v_n_277_, lean_object* v_k_278_, lean_object* v_v_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(0u);
v___x_281_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2___redArg(v_n_277_, v___x_280_, v_k_278_, v_v_279_);
return v___x_281_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(lean_object* v_x_283_, size_t v_x_284_, size_t v_x_285_, lean_object* v_x_286_, lean_object* v_x_287_){
_start:
{
if (lean_obj_tag(v_x_283_) == 0)
{
lean_object* v_es_288_; size_t v___x_289_; size_t v___x_290_; lean_object* v_j_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_es_288_ = lean_ctor_get(v_x_283_, 0);
v___x_289_ = ((size_t)31ULL);
v___x_290_ = lean_usize_land(v_x_284_, v___x_289_);
v_j_291_ = lean_usize_to_nat(v___x_290_);
v___x_292_ = lean_array_get_size(v_es_288_);
v___x_293_ = lean_nat_dec_lt(v_j_291_, v___x_292_);
if (v___x_293_ == 0)
{
lean_dec(v_j_291_);
lean_dec(v_x_287_);
lean_dec(v_x_286_);
return v_x_283_;
}
else
{
lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_332_; 
lean_inc_ref(v_es_288_);
v_isSharedCheck_332_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; 
v_unused_333_ = lean_ctor_get(v_x_283_, 0);
lean_dec(v_unused_333_);
v___x_295_ = v_x_283_;
v_isShared_296_ = v_isSharedCheck_332_;
goto v_resetjp_294_;
}
else
{
lean_dec(v_x_283_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_332_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v_v_297_; lean_object* v___x_298_; lean_object* v_xs_x27_299_; lean_object* v___y_301_; 
v_v_297_ = lean_array_fget(v_es_288_, v_j_291_);
v___x_298_ = lean_box(0);
v_xs_x27_299_ = lean_array_fset(v_es_288_, v_j_291_, v___x_298_);
switch(lean_obj_tag(v_v_297_))
{
case 0:
{
lean_object* v_key_306_; lean_object* v_val_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_317_; 
v_key_306_ = lean_ctor_get(v_v_297_, 0);
v_val_307_ = lean_ctor_get(v_v_297_, 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v_v_297_);
if (v_isSharedCheck_317_ == 0)
{
v___x_309_ = v_v_297_;
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_val_307_);
lean_inc(v_key_306_);
lean_dec(v_v_297_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
uint8_t v___x_311_; 
v___x_311_ = lean_name_eq(v_x_286_, v_key_306_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; lean_object* v___x_313_; 
lean_del_object(v___x_309_);
v___x_312_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_306_, v_val_307_, v_x_286_, v_x_287_);
v___x_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
v___y_301_ = v___x_313_;
goto v___jp_300_;
}
else
{
lean_object* v___x_315_; 
lean_dec(v_val_307_);
lean_dec(v_key_306_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 1, v_x_287_);
lean_ctor_set(v___x_309_, 0, v_x_286_);
v___x_315_ = v___x_309_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_x_286_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_x_287_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
v___y_301_ = v___x_315_;
goto v___jp_300_;
}
}
}
}
case 1:
{
lean_object* v_node_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_330_; 
v_node_318_ = lean_ctor_get(v_v_297_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v_v_297_);
if (v_isSharedCheck_330_ == 0)
{
v___x_320_ = v_v_297_;
v_isShared_321_ = v_isSharedCheck_330_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_node_318_);
lean_dec(v_v_297_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_330_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
size_t v___x_322_; size_t v___x_323_; size_t v___x_324_; size_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v___x_322_ = ((size_t)5ULL);
v___x_323_ = lean_usize_shift_right(v_x_284_, v___x_322_);
v___x_324_ = ((size_t)1ULL);
v___x_325_ = lean_usize_add(v_x_285_, v___x_324_);
v___x_326_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(v_node_318_, v___x_323_, v___x_325_, v_x_286_, v_x_287_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v___x_326_);
v___x_328_ = v___x_320_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_326_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
v___y_301_ = v___x_328_;
goto v___jp_300_;
}
}
}
default: 
{
lean_object* v___x_331_; 
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v_x_286_);
lean_ctor_set(v___x_331_, 1, v_x_287_);
v___y_301_ = v___x_331_;
goto v___jp_300_;
}
}
v___jp_300_:
{
lean_object* v___x_302_; lean_object* v___x_304_; 
v___x_302_ = lean_array_fset(v_xs_x27_299_, v_j_291_, v___y_301_);
lean_dec(v_j_291_);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 0, v___x_302_);
v___x_304_ = v___x_295_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
else
{
lean_object* v_ks_334_; lean_object* v_vs_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_353_; 
v_ks_334_ = lean_ctor_get(v_x_283_, 0);
v_vs_335_ = lean_ctor_get(v_x_283_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_353_ == 0)
{
v___x_337_ = v_x_283_;
v_isShared_338_ = v_isSharedCheck_353_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_vs_335_);
lean_inc(v_ks_334_);
lean_dec(v_x_283_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_353_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_ks_334_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_vs_335_);
v___x_340_ = v_reuseFailAlloc_352_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v_newNode_341_; size_t v___x_342_; uint8_t v___x_343_; 
v_newNode_341_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1___redArg(v___x_340_, v_x_286_, v_x_287_);
v___x_342_ = ((size_t)7ULL);
v___x_343_ = lean_usize_dec_le(v___x_342_, v_x_285_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_344_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_341_);
v___x_345_ = lean_unsigned_to_nat(4u);
v___x_346_ = lean_nat_dec_lt(v___x_344_, v___x_345_);
lean_dec(v___x_344_);
if (v___x_346_ == 0)
{
lean_object* v_ks_347_; lean_object* v_vs_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_ks_347_ = lean_ctor_get(v_newNode_341_, 0);
lean_inc_ref(v_ks_347_);
v_vs_348_ = lean_ctor_get(v_newNode_341_, 1);
lean_inc_ref(v_vs_348_);
lean_dec_ref(v_newNode_341_);
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0);
v___x_351_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg(v_x_285_, v_ks_347_, v_vs_348_, v___x_349_, v___x_350_);
lean_dec_ref(v_vs_348_);
lean_dec_ref(v_ks_347_);
return v___x_351_;
}
else
{
return v_newNode_341_;
}
}
else
{
return v_newNode_341_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg(size_t v_depth_354_, lean_object* v_keys_355_, lean_object* v_vals_356_, lean_object* v_i_357_, lean_object* v_entries_358_){
_start:
{
lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_359_ = lean_array_get_size(v_keys_355_);
v___x_360_ = lean_nat_dec_lt(v_i_357_, v___x_359_);
if (v___x_360_ == 0)
{
lean_dec(v_i_357_);
return v_entries_358_;
}
else
{
lean_object* v_k_361_; lean_object* v_v_362_; uint64_t v___y_364_; 
v_k_361_ = lean_array_fget_borrowed(v_keys_355_, v_i_357_);
v_v_362_ = lean_array_fget_borrowed(v_vals_356_, v_i_357_);
if (lean_obj_tag(v_k_361_) == 0)
{
uint64_t v___x_375_; 
v___x_375_ = 1723ULL;
v___y_364_ = v___x_375_;
goto v___jp_363_;
}
else
{
uint64_t v_hash_376_; 
v_hash_376_ = lean_ctor_get_uint64(v_k_361_, sizeof(void*)*2);
v___y_364_ = v_hash_376_;
goto v___jp_363_;
}
v___jp_363_:
{
size_t v_h_365_; size_t v___x_366_; lean_object* v___x_367_; size_t v___x_368_; size_t v___x_369_; size_t v___x_370_; size_t v_h_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v_h_365_ = lean_uint64_to_usize(v___y_364_);
v___x_366_ = ((size_t)5ULL);
v___x_367_ = lean_unsigned_to_nat(1u);
v___x_368_ = ((size_t)1ULL);
v___x_369_ = lean_usize_sub(v_depth_354_, v___x_368_);
v___x_370_ = lean_usize_mul(v___x_366_, v___x_369_);
v_h_371_ = lean_usize_shift_right(v_h_365_, v___x_370_);
v___x_372_ = lean_nat_add(v_i_357_, v___x_367_);
lean_dec(v_i_357_);
lean_inc(v_v_362_);
lean_inc(v_k_361_);
v___x_373_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(v_entries_358_, v_h_371_, v_depth_354_, v_k_361_, v_v_362_);
v_i_357_ = v___x_372_;
v_entries_358_ = v___x_373_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_377_, lean_object* v_keys_378_, lean_object* v_vals_379_, lean_object* v_i_380_, lean_object* v_entries_381_){
_start:
{
size_t v_depth_boxed_382_; lean_object* v_res_383_; 
v_depth_boxed_382_ = lean_unbox_usize(v_depth_377_);
lean_dec(v_depth_377_);
v_res_383_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg(v_depth_boxed_382_, v_keys_378_, v_vals_379_, v_i_380_, v_entries_381_);
lean_dec_ref(v_vals_379_);
lean_dec_ref(v_keys_378_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___boxed(lean_object* v_x_384_, lean_object* v_x_385_, lean_object* v_x_386_, lean_object* v_x_387_, lean_object* v_x_388_){
_start:
{
size_t v_x_363__boxed_389_; size_t v_x_364__boxed_390_; lean_object* v_res_391_; 
v_x_363__boxed_389_ = lean_unbox_usize(v_x_385_);
lean_dec(v_x_385_);
v_x_364__boxed_390_ = lean_unbox_usize(v_x_386_);
lean_dec(v_x_386_);
v_res_391_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(v_x_384_, v_x_363__boxed_389_, v_x_364__boxed_390_, v_x_387_, v_x_388_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(lean_object* v_x_392_, lean_object* v_x_393_, lean_object* v_x_394_){
_start:
{
uint64_t v___y_396_; 
if (lean_obj_tag(v_x_393_) == 0)
{
uint64_t v___x_400_; 
v___x_400_ = 1723ULL;
v___y_396_ = v___x_400_;
goto v___jp_395_;
}
else
{
uint64_t v_hash_401_; 
v_hash_401_ = lean_ctor_get_uint64(v_x_393_, sizeof(void*)*2);
v___y_396_ = v_hash_401_;
goto v___jp_395_;
}
v___jp_395_:
{
size_t v___x_397_; size_t v___x_398_; lean_object* v___x_399_; 
v___x_397_ = lean_uint64_to_usize(v___y_396_);
v___x_398_ = ((size_t)1ULL);
v___x_399_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(v_x_392_, v___x_397_, v___x_398_, v_x_393_, v_x_394_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange(lean_object* v_d_402_, lean_object* v_className_403_, lean_object* v_c_404_){
_start:
{
lean_object* v_discrTree_405_; lean_object* v_instanceNames_406_; lean_object* v_erased_407_; lean_object* v_classChanges_408_; lean_object* v___x_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_418_; 
v_discrTree_405_ = lean_ctor_get(v_d_402_, 0);
lean_inc_ref(v_discrTree_405_);
v_instanceNames_406_ = lean_ctor_get(v_d_402_, 1);
lean_inc_ref(v_instanceNames_406_);
v_erased_407_ = lean_ctor_get(v_d_402_, 2);
lean_inc_ref(v_erased_407_);
v_classChanges_408_ = lean_ctor_get(v_d_402_, 3);
lean_inc_ref(v_classChanges_408_);
v___x_409_ = l_Lean_Meta_Instances_getClassChanges(v_d_402_, v_className_403_);
v_isSharedCheck_418_ = !lean_is_exclusive(v_d_402_);
if (v_isSharedCheck_418_ == 0)
{
lean_object* v_unused_419_; lean_object* v_unused_420_; lean_object* v_unused_421_; lean_object* v_unused_422_; 
v_unused_419_ = lean_ctor_get(v_d_402_, 3);
lean_dec(v_unused_419_);
v_unused_420_ = lean_ctor_get(v_d_402_, 2);
lean_dec(v_unused_420_);
v_unused_421_ = lean_ctor_get(v_d_402_, 1);
lean_dec(v_unused_421_);
v_unused_422_ = lean_ctor_get(v_d_402_, 0);
lean_dec(v_unused_422_);
v___x_411_ = v_d_402_;
v_isShared_412_ = v_isSharedCheck_418_;
goto v_resetjp_410_;
}
else
{
lean_dec(v_d_402_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_418_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_416_; 
v___x_413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_413_, 0, v_c_404_);
lean_ctor_set(v___x_413_, 1, v___x_409_);
v___x_414_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(v_classChanges_408_, v_className_403_, v___x_413_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 3, v___x_414_);
v___x_416_ = v___x_411_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_discrTree_405_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v_instanceNames_406_);
lean_ctor_set(v_reuseFailAlloc_417_, 2, v_erased_407_);
lean_ctor_set(v_reuseFailAlloc_417_, 3, v___x_414_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0(lean_object* v_00_u03b2_423_, lean_object* v_x_424_, lean_object* v_x_425_, lean_object* v_x_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(v_x_424_, v_x_425_, v_x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0(lean_object* v_00_u03b2_428_, lean_object* v_x_429_, size_t v_x_430_, size_t v_x_431_, lean_object* v_x_432_, lean_object* v_x_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg(v_x_429_, v_x_430_, v_x_431_, v_x_432_, v_x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___boxed(lean_object* v_00_u03b2_435_, lean_object* v_x_436_, lean_object* v_x_437_, lean_object* v_x_438_, lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
size_t v_x_571__boxed_441_; size_t v_x_572__boxed_442_; lean_object* v_res_443_; 
v_x_571__boxed_441_ = lean_unbox_usize(v_x_437_);
lean_dec(v_x_437_);
v_x_572__boxed_442_ = lean_unbox_usize(v_x_438_);
lean_dec(v_x_438_);
v_res_443_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0(v_00_u03b2_435_, v_x_436_, v_x_571__boxed_441_, v_x_572__boxed_442_, v_x_439_, v_x_440_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_444_, lean_object* v_n_445_, lean_object* v_k_446_, lean_object* v_v_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1___redArg(v_n_445_, v_k_446_, v_v_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_449_, size_t v_depth_450_, lean_object* v_keys_451_, lean_object* v_vals_452_, lean_object* v_heq_453_, lean_object* v_i_454_, lean_object* v_entries_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___redArg(v_depth_450_, v_keys_451_, v_vals_452_, v_i_454_, v_entries_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_457_, lean_object* v_depth_458_, lean_object* v_keys_459_, lean_object* v_vals_460_, lean_object* v_heq_461_, lean_object* v_i_462_, lean_object* v_entries_463_){
_start:
{
size_t v_depth_boxed_464_; lean_object* v_res_465_; 
v_depth_boxed_464_ = lean_unbox_usize(v_depth_458_);
lean_dec(v_depth_458_);
v_res_465_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__2(v_00_u03b2_457_, v_depth_boxed_464_, v_keys_459_, v_vals_460_, v_heq_461_, v_i_462_, v_entries_463_);
lean_dec_ref(v_vals_460_);
lean_dec_ref(v_keys_459_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_466_, lean_object* v_x_467_, lean_object* v_x_468_, lean_object* v_x_469_, lean_object* v_x_470_){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0_spec__1_spec__2___redArg(v_x_467_, v_x_468_, v_x_469_, v_x_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17(lean_object* v_xs_472_, lean_object* v_v_473_, lean_object* v_i_474_){
_start:
{
lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_475_ = lean_array_get_size(v_xs_472_);
v___x_476_ = lean_nat_dec_lt(v_i_474_, v___x_475_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; 
lean_dec(v_i_474_);
v___x_477_ = lean_box(0);
return v___x_477_;
}
else
{
lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_478_ = lean_array_fget_borrowed(v_xs_472_, v_i_474_);
v___x_479_ = lean_name_eq(v___x_478_, v_v_473_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_unsigned_to_nat(1u);
v___x_481_ = lean_nat_add(v_i_474_, v___x_480_);
lean_dec(v_i_474_);
v_i_474_ = v___x_481_;
goto _start;
}
else
{
lean_object* v___x_483_; 
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v_i_474_);
return v___x_483_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17___boxed(lean_object* v_xs_484_, lean_object* v_v_485_, lean_object* v_i_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17(v_xs_484_, v_v_485_, v_i_486_);
lean_dec(v_v_485_);
lean_dec_ref(v_xs_484_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10(lean_object* v_xs_488_, lean_object* v_v_489_){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10_spec__17(v_xs_488_, v_v_489_, v___x_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10___boxed(lean_object* v_xs_492_, lean_object* v_v_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10(v_xs_492_, v_v_493_);
lean_dec(v_v_493_);
lean_dec_ref(v_xs_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(lean_object* v_x_495_, size_t v_x_496_, lean_object* v_x_497_){
_start:
{
if (lean_obj_tag(v_x_495_) == 0)
{
lean_object* v_es_498_; lean_object* v___x_499_; size_t v___x_500_; size_t v___x_501_; lean_object* v_j_502_; lean_object* v_entry_503_; 
v_es_498_ = lean_ctor_get(v_x_495_, 0);
v___x_499_ = lean_box(2);
v___x_500_ = ((size_t)31ULL);
v___x_501_ = lean_usize_land(v_x_496_, v___x_500_);
v_j_502_ = lean_usize_to_nat(v___x_501_);
v_entry_503_ = lean_array_get(v___x_499_, v_es_498_, v_j_502_);
switch(lean_obj_tag(v_entry_503_))
{
case 0:
{
lean_object* v_key_504_; uint8_t v___x_505_; 
v_key_504_ = lean_ctor_get(v_entry_503_, 0);
lean_inc(v_key_504_);
lean_dec_ref_known(v_entry_503_, 2);
v___x_505_ = lean_name_eq(v_x_497_, v_key_504_);
lean_dec(v_key_504_);
if (v___x_505_ == 0)
{
lean_dec(v_j_502_);
return v_x_495_;
}
else
{
lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_513_; 
lean_inc_ref(v_es_498_);
v_isSharedCheck_513_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_513_ == 0)
{
lean_object* v_unused_514_; 
v_unused_514_ = lean_ctor_get(v_x_495_, 0);
lean_dec(v_unused_514_);
v___x_507_ = v_x_495_;
v_isShared_508_ = v_isSharedCheck_513_;
goto v_resetjp_506_;
}
else
{
lean_dec(v_x_495_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_513_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; lean_object* v___x_511_; 
v___x_509_ = lean_array_set(v_es_498_, v_j_502_, v___x_499_);
lean_dec(v_j_502_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v___x_509_);
v___x_511_ = v___x_507_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
}
case 1:
{
lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_549_; 
lean_inc_ref(v_es_498_);
v_isSharedCheck_549_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_549_ == 0)
{
lean_object* v_unused_550_; 
v_unused_550_ = lean_ctor_get(v_x_495_, 0);
lean_dec(v_unused_550_);
v___x_516_ = v_x_495_;
v_isShared_517_ = v_isSharedCheck_549_;
goto v_resetjp_515_;
}
else
{
lean_dec(v_x_495_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_549_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v_node_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_548_; 
v_node_518_ = lean_ctor_get(v_entry_503_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v_entry_503_);
if (v_isSharedCheck_548_ == 0)
{
v___x_520_ = v_entry_503_;
v_isShared_521_ = v_isSharedCheck_548_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_node_518_);
lean_dec(v_entry_503_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_548_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
size_t v___x_522_; lean_object* v_entries_523_; size_t v___x_524_; lean_object* v_newNode_525_; lean_object* v___x_526_; 
v___x_522_ = ((size_t)5ULL);
v_entries_523_ = lean_array_set(v_es_498_, v_j_502_, v___x_499_);
v___x_524_ = lean_usize_shift_right(v_x_496_, v___x_522_);
v_newNode_525_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(v_node_518_, v___x_524_, v_x_497_);
lean_inc_ref(v_newNode_525_);
v___x_526_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_525_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v___x_528_; 
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 0, v_newNode_525_);
v___x_528_ = v___x_520_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_newNode_525_);
v___x_528_ = v_reuseFailAlloc_533_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; lean_object* v___x_531_; 
v___x_529_ = lean_array_set(v_entries_523_, v_j_502_, v___x_528_);
lean_dec(v_j_502_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_529_);
v___x_531_ = v___x_516_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_529_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
else
{
lean_object* v_val_534_; lean_object* v_fst_535_; lean_object* v_snd_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_547_; 
lean_dec_ref(v_newNode_525_);
lean_del_object(v___x_520_);
v_val_534_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_val_534_);
lean_dec_ref_known(v___x_526_, 1);
v_fst_535_ = lean_ctor_get(v_val_534_, 0);
v_snd_536_ = lean_ctor_get(v_val_534_, 1);
v_isSharedCheck_547_ = !lean_is_exclusive(v_val_534_);
if (v_isSharedCheck_547_ == 0)
{
v___x_538_ = v_val_534_;
v_isShared_539_ = v_isSharedCheck_547_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_snd_536_);
lean_inc(v_fst_535_);
lean_dec(v_val_534_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_547_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_fst_535_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_snd_536_);
v___x_541_ = v_reuseFailAlloc_546_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_542_ = lean_array_set(v_entries_523_, v_j_502_, v___x_541_);
lean_dec(v_j_502_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_542_);
v___x_544_ = v___x_516_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_502_);
return v_x_495_;
}
}
}
else
{
lean_object* v_ks_551_; lean_object* v_vs_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_566_; 
v_ks_551_ = lean_ctor_get(v_x_495_, 0);
v_vs_552_ = lean_ctor_get(v_x_495_, 1);
v_isSharedCheck_566_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_566_ == 0)
{
v___x_554_ = v_x_495_;
v_isShared_555_ = v_isSharedCheck_566_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_vs_552_);
lean_inc(v_ks_551_);
lean_dec(v_x_495_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_566_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; 
v___x_556_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4_spec__10(v_ks_551_, v_x_497_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v___x_558_; 
if (v_isShared_555_ == 0)
{
v___x_558_ = v___x_554_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_ks_551_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_vs_552_);
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
lean_object* v_val_560_; lean_object* v_keys_x27_561_; lean_object* v_vals_x27_562_; lean_object* v___x_564_; 
v_val_560_ = lean_ctor_get(v___x_556_, 0);
lean_inc_n(v_val_560_, 2);
lean_dec_ref_known(v___x_556_, 1);
v_keys_x27_561_ = l_Array_eraseIdx___redArg(v_ks_551_, v_val_560_);
v_vals_x27_562_ = l_Array_eraseIdx___redArg(v_vs_552_, v_val_560_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v_vals_x27_562_);
lean_ctor_set(v___x_554_, 0, v_keys_x27_561_);
v___x_564_ = v___x_554_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_keys_x27_561_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_vals_x27_562_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg___boxed(lean_object* v_x_567_, lean_object* v_x_568_, lean_object* v_x_569_){
_start:
{
size_t v_x_2778__boxed_570_; lean_object* v_res_571_; 
v_x_2778__boxed_570_ = lean_unbox_usize(v_x_568_);
lean_dec(v_x_568_);
v_res_571_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(v_x_567_, v_x_2778__boxed_570_, v_x_569_);
lean_dec(v_x_569_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(lean_object* v_x_572_, lean_object* v_x_573_){
_start:
{
uint64_t v___y_575_; 
if (lean_obj_tag(v_x_573_) == 0)
{
uint64_t v___x_578_; 
v___x_578_ = 1723ULL;
v___y_575_ = v___x_578_;
goto v___jp_574_;
}
else
{
uint64_t v_hash_579_; 
v_hash_579_ = lean_ctor_get_uint64(v_x_573_, sizeof(void*)*2);
v___y_575_ = v_hash_579_;
goto v___jp_574_;
}
v___jp_574_:
{
size_t v_h_576_; lean_object* v___x_577_; 
v_h_576_ = lean_uint64_to_usize(v___y_575_);
v___x_577_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(v_x_572_, v_h_576_, v_x_573_);
return v___x_577_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg___boxed(lean_object* v_x_580_, lean_object* v_x_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(v_x_580_, v_x_581_);
lean_dec(v_x_581_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15___redArg(lean_object* v_x_583_, lean_object* v_x_584_, lean_object* v_x_585_, lean_object* v_x_586_){
_start:
{
lean_object* v_ks_587_; lean_object* v_vs_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_612_; 
v_ks_587_ = lean_ctor_get(v_x_583_, 0);
v_vs_588_ = lean_ctor_get(v_x_583_, 1);
v_isSharedCheck_612_ = !lean_is_exclusive(v_x_583_);
if (v_isSharedCheck_612_ == 0)
{
v___x_590_ = v_x_583_;
v_isShared_591_ = v_isSharedCheck_612_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_vs_588_);
lean_inc(v_ks_587_);
lean_dec(v_x_583_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_612_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_592_ = lean_array_get_size(v_ks_587_);
v___x_593_ = lean_nat_dec_lt(v_x_584_, v___x_592_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_597_; 
lean_dec(v_x_584_);
v___x_594_ = lean_array_push(v_ks_587_, v_x_585_);
v___x_595_ = lean_array_push(v_vs_588_, v_x_586_);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 1, v___x_595_);
lean_ctor_set(v___x_590_, 0, v___x_594_);
v___x_597_ = v___x_590_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_594_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v___x_595_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
else
{
lean_object* v_k_x27_599_; uint8_t v___x_600_; 
v_k_x27_599_ = lean_array_fget_borrowed(v_ks_587_, v_x_584_);
v___x_600_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_585_, v_k_x27_599_);
if (v___x_600_ == 0)
{
lean_object* v___x_602_; 
if (v_isShared_591_ == 0)
{
v___x_602_ = v___x_590_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_ks_587_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_vs_588_);
v___x_602_ = v_reuseFailAlloc_606_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_unsigned_to_nat(1u);
v___x_604_ = lean_nat_add(v_x_584_, v___x_603_);
lean_dec(v_x_584_);
v_x_583_ = v___x_602_;
v_x_584_ = v___x_604_;
goto _start;
}
}
else
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_607_ = lean_array_fset(v_ks_587_, v_x_584_, v_x_585_);
v___x_608_ = lean_array_fset(v_vs_588_, v_x_584_, v_x_586_);
lean_dec(v_x_584_);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 1, v___x_608_);
lean_ctor_set(v___x_590_, 0, v___x_607_);
v___x_610_ = v___x_590_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_607_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v___x_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13___redArg(lean_object* v_n_613_, lean_object* v_k_614_, lean_object* v_v_615_){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = lean_unsigned_to_nat(0u);
v___x_617_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15___redArg(v_n_613_, v___x_616_, v_k_614_, v_v_615_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(lean_object* v_x_618_, size_t v_x_619_, size_t v_x_620_, lean_object* v_x_621_, lean_object* v_x_622_){
_start:
{
if (lean_obj_tag(v_x_618_) == 0)
{
lean_object* v_es_623_; size_t v___x_624_; size_t v___x_625_; lean_object* v_j_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v_es_623_ = lean_ctor_get(v_x_618_, 0);
v___x_624_ = ((size_t)31ULL);
v___x_625_ = lean_usize_land(v_x_619_, v___x_624_);
v_j_626_ = lean_usize_to_nat(v___x_625_);
v___x_627_ = lean_array_get_size(v_es_623_);
v___x_628_ = lean_nat_dec_lt(v_j_626_, v___x_627_);
if (v___x_628_ == 0)
{
lean_dec(v_j_626_);
lean_dec(v_x_622_);
lean_dec(v_x_621_);
return v_x_618_;
}
else
{
lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_667_; 
lean_inc_ref(v_es_623_);
v_isSharedCheck_667_ = !lean_is_exclusive(v_x_618_);
if (v_isSharedCheck_667_ == 0)
{
lean_object* v_unused_668_; 
v_unused_668_ = lean_ctor_get(v_x_618_, 0);
lean_dec(v_unused_668_);
v___x_630_ = v_x_618_;
v_isShared_631_ = v_isSharedCheck_667_;
goto v_resetjp_629_;
}
else
{
lean_dec(v_x_618_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_667_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v_v_632_; lean_object* v___x_633_; lean_object* v_xs_x27_634_; lean_object* v___y_636_; 
v_v_632_ = lean_array_fget(v_es_623_, v_j_626_);
v___x_633_ = lean_box(0);
v_xs_x27_634_ = lean_array_fset(v_es_623_, v_j_626_, v___x_633_);
switch(lean_obj_tag(v_v_632_))
{
case 0:
{
lean_object* v_key_641_; lean_object* v_val_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_652_; 
v_key_641_ = lean_ctor_get(v_v_632_, 0);
v_val_642_ = lean_ctor_get(v_v_632_, 1);
v_isSharedCheck_652_ = !lean_is_exclusive(v_v_632_);
if (v_isSharedCheck_652_ == 0)
{
v___x_644_ = v_v_632_;
v_isShared_645_ = v_isSharedCheck_652_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_val_642_);
lean_inc(v_key_641_);
lean_dec(v_v_632_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_652_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
uint8_t v___x_646_; 
v___x_646_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_621_, v_key_641_);
if (v___x_646_ == 0)
{
lean_object* v___x_647_; lean_object* v___x_648_; 
lean_del_object(v___x_644_);
v___x_647_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_641_, v_val_642_, v_x_621_, v_x_622_);
v___x_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
v___y_636_ = v___x_648_;
goto v___jp_635_;
}
else
{
lean_object* v___x_650_; 
lean_dec(v_val_642_);
lean_dec(v_key_641_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 1, v_x_622_);
lean_ctor_set(v___x_644_, 0, v_x_621_);
v___x_650_ = v___x_644_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_x_621_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v_x_622_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
v___y_636_ = v___x_650_;
goto v___jp_635_;
}
}
}
}
case 1:
{
lean_object* v_node_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_665_; 
v_node_653_ = lean_ctor_get(v_v_632_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v_v_632_);
if (v_isSharedCheck_665_ == 0)
{
v___x_655_ = v_v_632_;
v_isShared_656_ = v_isSharedCheck_665_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_node_653_);
lean_dec(v_v_632_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_665_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
size_t v___x_657_; size_t v___x_658_; size_t v___x_659_; size_t v___x_660_; lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_657_ = ((size_t)5ULL);
v___x_658_ = lean_usize_shift_right(v_x_619_, v___x_657_);
v___x_659_ = ((size_t)1ULL);
v___x_660_ = lean_usize_add(v_x_620_, v___x_659_);
v___x_661_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(v_node_653_, v___x_658_, v___x_660_, v_x_621_, v_x_622_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v___x_661_);
v___x_663_ = v___x_655_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
v___y_636_ = v___x_663_;
goto v___jp_635_;
}
}
}
default: 
{
lean_object* v___x_666_; 
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v_x_621_);
lean_ctor_set(v___x_666_, 1, v_x_622_);
v___y_636_ = v___x_666_;
goto v___jp_635_;
}
}
v___jp_635_:
{
lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_637_ = lean_array_fset(v_xs_x27_634_, v_j_626_, v___y_636_);
lean_dec(v_j_626_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 0, v___x_637_);
v___x_639_ = v___x_630_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_637_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
}
else
{
lean_object* v_ks_669_; lean_object* v_vs_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_688_; 
v_ks_669_ = lean_ctor_get(v_x_618_, 0);
v_vs_670_ = lean_ctor_get(v_x_618_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v_x_618_);
if (v_isSharedCheck_688_ == 0)
{
v___x_672_ = v_x_618_;
v_isShared_673_ = v_isSharedCheck_688_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_vs_670_);
lean_inc(v_ks_669_);
lean_dec(v_x_618_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_688_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_ks_669_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v_vs_670_);
v___x_675_ = v_reuseFailAlloc_687_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
lean_object* v_newNode_676_; size_t v___x_677_; uint8_t v___x_678_; 
v_newNode_676_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13___redArg(v___x_675_, v_x_621_, v_x_622_);
v___x_677_ = ((size_t)7ULL);
v___x_678_ = lean_usize_dec_le(v___x_677_, v_x_620_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_679_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_676_);
v___x_680_ = lean_unsigned_to_nat(4u);
v___x_681_ = lean_nat_dec_lt(v___x_679_, v___x_680_);
lean_dec(v___x_679_);
if (v___x_681_ == 0)
{
lean_object* v_ks_682_; lean_object* v_vs_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v_ks_682_ = lean_ctor_get(v_newNode_676_, 0);
lean_inc_ref(v_ks_682_);
v_vs_683_ = lean_ctor_get(v_newNode_676_, 1);
lean_inc_ref(v_vs_683_);
lean_dec_ref(v_newNode_676_);
v___x_684_ = lean_unsigned_to_nat(0u);
v___x_685_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0);
v___x_686_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg(v_x_620_, v_ks_682_, v_vs_683_, v___x_684_, v___x_685_);
lean_dec_ref(v_vs_683_);
lean_dec_ref(v_ks_682_);
return v___x_686_;
}
else
{
return v_newNode_676_;
}
}
else
{
return v_newNode_676_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg(size_t v_depth_689_, lean_object* v_keys_690_, lean_object* v_vals_691_, lean_object* v_i_692_, lean_object* v_entries_693_){
_start:
{
lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_694_ = lean_array_get_size(v_keys_690_);
v___x_695_ = lean_nat_dec_lt(v_i_692_, v___x_694_);
if (v___x_695_ == 0)
{
lean_dec(v_i_692_);
return v_entries_693_;
}
else
{
lean_object* v_k_696_; lean_object* v_v_697_; uint64_t v___x_698_; size_t v_h_699_; size_t v___x_700_; lean_object* v___x_701_; size_t v___x_702_; size_t v___x_703_; size_t v___x_704_; size_t v_h_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_k_696_ = lean_array_fget_borrowed(v_keys_690_, v_i_692_);
v_v_697_ = lean_array_fget_borrowed(v_vals_691_, v_i_692_);
v___x_698_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_696_);
v_h_699_ = lean_uint64_to_usize(v___x_698_);
v___x_700_ = ((size_t)5ULL);
v___x_701_ = lean_unsigned_to_nat(1u);
v___x_702_ = ((size_t)1ULL);
v___x_703_ = lean_usize_sub(v_depth_689_, v___x_702_);
v___x_704_ = lean_usize_mul(v___x_700_, v___x_703_);
v_h_705_ = lean_usize_shift_right(v_h_699_, v___x_704_);
v___x_706_ = lean_nat_add(v_i_692_, v___x_701_);
lean_dec(v_i_692_);
lean_inc(v_v_697_);
lean_inc(v_k_696_);
v___x_707_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(v_entries_693_, v_h_705_, v_depth_689_, v_k_696_, v_v_697_);
v_i_692_ = v___x_706_;
v_entries_693_ = v___x_707_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg___boxed(lean_object* v_depth_709_, lean_object* v_keys_710_, lean_object* v_vals_711_, lean_object* v_i_712_, lean_object* v_entries_713_){
_start:
{
size_t v_depth_boxed_714_; lean_object* v_res_715_; 
v_depth_boxed_714_ = lean_unbox_usize(v_depth_709_);
lean_dec(v_depth_709_);
v_res_715_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg(v_depth_boxed_714_, v_keys_710_, v_vals_711_, v_i_712_, v_entries_713_);
lean_dec_ref(v_vals_711_);
lean_dec_ref(v_keys_710_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg___boxed(lean_object* v_x_716_, lean_object* v_x_717_, lean_object* v_x_718_, lean_object* v_x_719_, lean_object* v_x_720_){
_start:
{
size_t v_x_3003__boxed_721_; size_t v_x_3004__boxed_722_; lean_object* v_res_723_; 
v_x_3003__boxed_721_ = lean_unbox_usize(v_x_717_);
lean_dec(v_x_717_);
v_x_3004__boxed_722_ = lean_unbox_usize(v_x_718_);
lean_dec(v_x_718_);
v_res_723_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(v_x_716_, v_x_3003__boxed_721_, v_x_3004__boxed_722_, v_x_719_, v_x_720_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11(lean_object* v_xs_724_, lean_object* v_v_725_, lean_object* v_i_726_){
_start:
{
lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_727_ = lean_array_get_size(v_xs_724_);
v___x_728_ = lean_nat_dec_lt(v_i_726_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
lean_dec(v_i_726_);
v___x_729_ = lean_box(0);
return v___x_729_;
}
else
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = lean_array_fget_borrowed(v_xs_724_, v_i_726_);
v___x_731_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_730_, v_v_725_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = lean_unsigned_to_nat(1u);
v___x_733_ = lean_nat_add(v_i_726_, v___x_732_);
lean_dec(v_i_726_);
v_i_726_ = v___x_733_;
goto _start;
}
else
{
lean_object* v___x_735_; 
v___x_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_735_, 0, v_i_726_);
return v___x_735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11___boxed(lean_object* v_xs_736_, lean_object* v_v_737_, lean_object* v_i_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11(v_xs_736_, v_v_737_, v_i_738_);
lean_dec(v_v_737_);
lean_dec_ref(v_xs_736_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5(lean_object* v_xs_740_, lean_object* v_v_741_){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = lean_unsigned_to_nat(0u);
v___x_743_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5_spec__11(v_xs_740_, v_v_741_, v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5___boxed(lean_object* v_xs_744_, lean_object* v_v_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5(v_xs_744_, v_v_745_);
lean_dec(v_v_745_);
lean_dec_ref(v_xs_744_);
return v_res_746_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(lean_object* v_a_747_, lean_object* v_b_748_){
_start:
{
lean_object* v_fst_749_; lean_object* v_fst_750_; uint8_t v___x_751_; 
v_fst_749_ = lean_ctor_get(v_a_747_, 0);
v_fst_750_ = lean_ctor_get(v_b_748_, 0);
v___x_751_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_749_, v_fst_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_a_752_, lean_object* v_b_753_){
_start:
{
uint8_t v_res_754_; lean_object* v_r_755_; 
v_res_754_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_a_752_, v_b_753_);
lean_dec_ref(v_b_753_);
lean_dec_ref(v_a_752_);
v_r_755_ = lean_box(v_res_754_);
return v_r_755_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(lean_object* v_x_756_, lean_object* v_keys_757_, lean_object* v_v_758_, lean_object* v_k_759_, lean_object* v_x_760_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v_c_763_; lean_object* v___x_764_; 
v___x_761_ = lean_unsigned_to_nat(1u);
v___x_762_ = lean_nat_add(v_x_756_, v___x_761_);
v_c_763_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_757_, v_v_758_, v___x_762_);
lean_dec(v___x_762_);
v___x_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_764_, 0, v_k_759_);
lean_ctor_set(v___x_764_, 1, v_c_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0___boxed(lean_object* v_x_765_, lean_object* v_keys_766_, lean_object* v_v_767_, lean_object* v_k_768_, lean_object* v_x_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(v_x_765_, v_keys_766_, v_v_767_, v_k_768_, v_x_769_);
lean_dec_ref(v_keys_766_);
lean_dec(v_x_765_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2_spec__6(lean_object* v_vs_771_, lean_object* v_v_772_, lean_object* v_i_773_){
_start:
{
lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_774_ = lean_array_get_size(v_vs_771_);
v___x_775_ = lean_nat_dec_lt(v_i_773_, v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; 
lean_dec(v_i_773_);
v___x_776_ = lean_array_push(v_vs_771_, v_v_772_);
return v___x_776_;
}
else
{
lean_object* v_val_777_; lean_object* v___x_778_; lean_object* v_val_779_; uint8_t v___x_780_; 
v_val_777_ = lean_ctor_get(v_v_772_, 1);
v___x_778_ = lean_array_fget_borrowed(v_vs_771_, v_i_773_);
v_val_779_ = lean_ctor_get(v___x_778_, 1);
v___x_780_ = lean_expr_eqv(v_val_777_, v_val_779_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = lean_unsigned_to_nat(1u);
v___x_782_ = lean_nat_add(v_i_773_, v___x_781_);
lean_dec(v_i_773_);
v_i_773_ = v___x_782_;
goto _start;
}
else
{
lean_object* v___x_784_; 
v___x_784_ = lean_array_fset(v_vs_771_, v_i_773_, v_v_772_);
lean_dec(v_i_773_);
return v___x_784_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2(lean_object* v_vs_785_, lean_object* v_v_786_){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2_spec__6(v_vs_785_, v_v_786_, v___x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v___x_789_, lean_object* v_as_790_, lean_object* v_k_791_, lean_object* v_x_792_, lean_object* v_x_793_){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v_mid_796_; lean_object* v_midVal_797_; uint8_t v___x_798_; 
v___x_794_ = lean_nat_add(v_x_792_, v_x_793_);
v___x_795_ = lean_unsigned_to_nat(1u);
v_mid_796_ = lean_nat_shiftr(v___x_794_, v___x_795_);
lean_dec(v___x_794_);
v_midVal_797_ = lean_array_fget_borrowed(v_as_790_, v_mid_796_);
v___x_798_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_midVal_797_, v_k_791_);
if (v___x_798_ == 0)
{
uint8_t v___x_799_; 
lean_dec(v_x_793_);
v___x_799_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_791_, v_midVal_797_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; uint8_t v___x_801_; 
lean_dec(v_x_792_);
v___x_800_ = lean_array_get_size(v_as_790_);
v___x_801_ = lean_nat_dec_lt(v_mid_796_, v___x_800_);
if (v___x_801_ == 0)
{
lean_dec(v_mid_796_);
lean_dec_ref(v___x_789_);
return v_as_790_;
}
else
{
lean_object* v___x_802_; lean_object* v_xs_x27_803_; lean_object* v___x_804_; 
v___x_802_ = lean_box(0);
v_xs_x27_803_ = lean_array_fset(v_as_790_, v_mid_796_, v___x_802_);
v___x_804_ = lean_array_fset(v_xs_x27_803_, v_mid_796_, v___x_789_);
lean_dec(v_mid_796_);
return v___x_804_;
}
}
else
{
v_x_793_ = v_mid_796_;
goto _start;
}
}
else
{
uint8_t v___x_806_; 
v___x_806_ = lean_nat_dec_eq(v_mid_796_, v_x_792_);
if (v___x_806_ == 0)
{
lean_dec(v_x_792_);
v_x_792_ = v_mid_796_;
goto _start;
}
else
{
lean_object* v___x_808_; lean_object* v_j_809_; lean_object* v_as_810_; lean_object* v___x_811_; 
lean_dec(v_mid_796_);
lean_dec(v_x_793_);
v___x_808_ = lean_nat_add(v_x_792_, v___x_795_);
lean_dec(v_x_792_);
v_j_809_ = lean_array_get_size(v_as_790_);
v_as_810_ = lean_array_push(v_as_790_, v___x_789_);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_808_, v_as_810_, v_j_809_);
lean_dec(v___x_808_);
return v___x_811_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v___x_812_, lean_object* v_as_813_, lean_object* v_k_814_, lean_object* v_x_815_, lean_object* v_x_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg(v___x_812_, v_as_813_, v_k_814_, v_x_815_, v_x_816_);
lean_dec_ref(v_k_814_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1(lean_object* v___x_818_, lean_object* v_as_819_, lean_object* v_k_820_){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_821_ = lean_array_get_size(v_as_819_);
v___x_822_ = lean_unsigned_to_nat(0u);
v___x_823_ = lean_nat_dec_eq(v___x_821_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; uint8_t v___x_825_; 
v___x_824_ = lean_array_fget_borrowed(v_as_819_, v___x_822_);
v___x_825_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_820_, v___x_824_);
if (v___x_825_ == 0)
{
uint8_t v___x_826_; 
v___x_826_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v___x_824_, v_k_820_);
if (v___x_826_ == 0)
{
uint8_t v___x_827_; 
v___x_827_ = lean_nat_dec_lt(v___x_822_, v___x_821_);
if (v___x_827_ == 0)
{
lean_dec_ref(v___x_818_);
return v_as_819_;
}
else
{
lean_object* v___x_828_; lean_object* v_xs_x27_829_; lean_object* v___x_830_; 
v___x_828_ = lean_box(0);
v_xs_x27_829_ = lean_array_fset(v_as_819_, v___x_822_, v___x_828_);
v___x_830_ = lean_array_fset(v_xs_x27_829_, v___x_822_, v___x_818_);
return v___x_830_;
}
}
else
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_831_ = lean_unsigned_to_nat(1u);
v___x_832_ = lean_nat_sub(v___x_821_, v___x_831_);
v___x_833_ = lean_array_fget_borrowed(v_as_819_, v___x_832_);
v___x_834_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v___x_833_, v_k_820_);
if (v___x_834_ == 0)
{
uint8_t v___x_835_; 
v___x_835_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_820_, v___x_833_);
if (v___x_835_ == 0)
{
uint8_t v___x_836_; 
v___x_836_ = lean_nat_dec_lt(v___x_832_, v___x_821_);
if (v___x_836_ == 0)
{
lean_dec(v___x_832_);
lean_dec_ref(v___x_818_);
return v_as_819_;
}
else
{
lean_object* v___x_837_; lean_object* v_xs_x27_838_; lean_object* v___x_839_; 
v___x_837_ = lean_box(0);
v_xs_x27_838_ = lean_array_fset(v_as_819_, v___x_832_, v___x_837_);
v___x_839_ = lean_array_fset(v_xs_x27_838_, v___x_832_, v___x_818_);
lean_dec(v___x_832_);
return v___x_839_;
}
}
else
{
lean_object* v___x_840_; 
v___x_840_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg(v___x_818_, v_as_819_, v_k_820_, v___x_822_, v___x_832_);
return v___x_840_;
}
}
else
{
lean_object* v___x_841_; 
lean_dec(v___x_832_);
v___x_841_ = lean_array_push(v_as_819_, v___x_818_);
return v___x_841_;
}
}
}
else
{
lean_object* v_as_842_; lean_object* v___x_843_; 
v_as_842_ = lean_array_push(v_as_819_, v___x_818_);
v___x_843_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_822_, v_as_842_, v___x_821_);
return v___x_843_;
}
}
else
{
lean_object* v___x_844_; 
v___x_844_ = lean_array_push(v_as_819_, v___x_818_);
return v___x_844_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___boxed(lean_object* v___x_845_, lean_object* v_as_846_, lean_object* v_k_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1(v___x_845_, v_as_846_, v_k_847_);
lean_dec_ref(v_k_847_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg(lean_object* v_x_853_, lean_object* v_keys_854_, lean_object* v_v_855_, lean_object* v_k_856_, lean_object* v_as_857_, lean_object* v_k_858_, lean_object* v_x_859_, lean_object* v_x_860_){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v_mid_863_; lean_object* v_midVal_864_; uint8_t v___x_865_; 
v___x_861_ = lean_nat_add(v_x_859_, v_x_860_);
v___x_862_ = lean_unsigned_to_nat(1u);
v_mid_863_ = lean_nat_shiftr(v___x_861_, v___x_862_);
lean_dec(v___x_861_);
v_midVal_864_ = lean_array_fget(v_as_857_, v_mid_863_);
v___x_865_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_midVal_864_, v_k_858_);
if (v___x_865_ == 0)
{
uint8_t v___x_866_; 
lean_dec(v_x_860_);
v___x_866_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_858_, v_midVal_864_);
if (v___x_866_ == 0)
{
lean_object* v___x_867_; uint8_t v___x_868_; 
lean_dec(v_x_859_);
v___x_867_ = lean_array_get_size(v_as_857_);
v___x_868_ = lean_nat_dec_lt(v_mid_863_, v___x_867_);
if (v___x_868_ == 0)
{
lean_dec(v_midVal_864_);
lean_dec(v_mid_863_);
lean_dec(v_k_856_);
lean_dec_ref(v_v_855_);
return v_as_857_;
}
else
{
lean_object* v_snd_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_881_; 
v_snd_869_ = lean_ctor_get(v_midVal_864_, 1);
v_isSharedCheck_881_ = !lean_is_exclusive(v_midVal_864_);
if (v_isSharedCheck_881_ == 0)
{
lean_object* v_unused_882_; 
v_unused_882_ = lean_ctor_get(v_midVal_864_, 0);
lean_dec(v_unused_882_);
v___x_871_ = v_midVal_864_;
v_isShared_872_ = v_isSharedCheck_881_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_snd_869_);
lean_dec(v_midVal_864_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_881_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_873_; lean_object* v_xs_x27_874_; lean_object* v___x_875_; lean_object* v_c_876_; lean_object* v___x_878_; 
v___x_873_ = lean_box(0);
v_xs_x27_874_ = lean_array_fset(v_as_857_, v_mid_863_, v___x_873_);
v___x_875_ = lean_nat_add(v_x_853_, v___x_862_);
v_c_876_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(v_keys_854_, v_v_855_, v___x_875_, v_snd_869_);
lean_dec(v___x_875_);
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 1, v_c_876_);
lean_ctor_set(v___x_871_, 0, v_k_856_);
v___x_878_ = v___x_871_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_k_856_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v_c_876_);
v___x_878_ = v_reuseFailAlloc_880_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_879_; 
v___x_879_ = lean_array_fset(v_xs_x27_874_, v_mid_863_, v___x_878_);
lean_dec(v_mid_863_);
return v___x_879_;
}
}
}
}
else
{
lean_dec(v_midVal_864_);
v_x_860_ = v_mid_863_;
goto _start;
}
}
else
{
uint8_t v___x_884_; 
lean_dec(v_midVal_864_);
v___x_884_ = lean_nat_dec_eq(v_mid_863_, v_x_859_);
if (v___x_884_ == 0)
{
lean_dec(v_x_859_);
v_x_859_ = v_mid_863_;
goto _start;
}
else
{
lean_object* v___x_886_; lean_object* v_c_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v_j_890_; lean_object* v_as_891_; lean_object* v___x_892_; 
lean_dec(v_mid_863_);
lean_dec(v_x_860_);
v___x_886_ = lean_nat_add(v_x_853_, v___x_862_);
v_c_887_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_854_, v_v_855_, v___x_886_);
lean_dec(v___x_886_);
v___x_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_888_, 0, v_k_856_);
lean_ctor_set(v___x_888_, 1, v_c_887_);
v___x_889_ = lean_nat_add(v_x_859_, v___x_862_);
lean_dec(v_x_859_);
v_j_890_ = lean_array_get_size(v_as_857_);
v_as_891_ = lean_array_push(v_as_857_, v___x_888_);
v___x_892_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_889_, v_as_891_, v_j_890_);
lean_dec(v___x_889_);
return v___x_892_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3(lean_object* v_x_893_, lean_object* v_keys_894_, lean_object* v_v_895_, lean_object* v_k_896_, lean_object* v_as_897_, lean_object* v_k_898_){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_899_ = lean_array_get_size(v_as_897_);
v___x_900_ = lean_unsigned_to_nat(0u);
v___x_901_ = lean_nat_dec_eq(v___x_899_, v___x_900_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; uint8_t v___x_903_; 
v___x_902_ = lean_array_fget_borrowed(v_as_897_, v___x_900_);
v___x_903_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_898_, v___x_902_);
if (v___x_903_ == 0)
{
uint8_t v___x_904_; 
v___x_904_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v___x_902_, v_k_898_);
if (v___x_904_ == 0)
{
uint8_t v___x_905_; 
v___x_905_ = lean_nat_dec_lt(v___x_900_, v___x_899_);
if (v___x_905_ == 0)
{
lean_dec(v_k_896_);
lean_dec_ref(v_v_895_);
return v_as_897_;
}
else
{
lean_object* v___x_906_; lean_object* v_xs_x27_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
lean_inc(v___x_902_);
v___x_906_ = lean_box(0);
v_xs_x27_907_ = lean_array_fset(v_as_897_, v___x_900_, v___x_906_);
v___x_908_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v___x_902_);
v___x_909_ = lean_array_fset(v_xs_x27_907_, v___x_900_, v___x_908_);
return v___x_909_;
}
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_910_ = lean_unsigned_to_nat(1u);
v___x_911_ = lean_nat_sub(v___x_899_, v___x_910_);
v___x_912_ = lean_array_fget_borrowed(v_as_897_, v___x_911_);
v___x_913_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v___x_912_, v_k_898_);
if (v___x_913_ == 0)
{
uint8_t v___x_914_; 
v___x_914_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1___lam__0(v_k_898_, v___x_912_);
if (v___x_914_ == 0)
{
uint8_t v___x_915_; 
v___x_915_ = lean_nat_dec_lt(v___x_911_, v___x_899_);
if (v___x_915_ == 0)
{
lean_dec(v___x_911_);
lean_dec(v_k_896_);
lean_dec_ref(v_v_895_);
return v_as_897_;
}
else
{
lean_object* v___x_916_; lean_object* v_xs_x27_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
lean_inc(v___x_912_);
v___x_916_ = lean_box(0);
v_xs_x27_917_ = lean_array_fset(v_as_897_, v___x_911_, v___x_916_);
v___x_918_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v___x_912_);
v___x_919_ = lean_array_fset(v_xs_x27_917_, v___x_911_, v___x_918_);
lean_dec(v___x_911_);
return v___x_919_;
}
}
else
{
lean_object* v___x_920_; 
v___x_920_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v_as_897_, v_k_898_, v___x_900_, v___x_911_);
return v___x_920_;
}
}
else
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
lean_dec(v___x_911_);
v___x_921_ = lean_box(0);
v___x_922_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v___x_921_);
v___x_923_ = lean_array_push(v_as_897_, v___x_922_);
return v___x_923_;
}
}
}
else
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v_as_926_; lean_object* v___x_927_; 
v___x_924_ = lean_box(0);
v___x_925_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v___x_924_);
v_as_926_ = lean_array_push(v_as_897_, v___x_925_);
v___x_927_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_900_, v_as_926_, v___x_899_);
return v___x_927_;
}
}
else
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_928_ = lean_box(0);
v___x_929_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__0(v_x_893_, v_keys_894_, v_v_895_, v_k_896_, v___x_928_);
v___x_930_ = lean_array_push(v_as_897_, v___x_929_);
return v___x_930_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(lean_object* v_keys_931_, lean_object* v_v_932_, lean_object* v_x_933_, lean_object* v_x_934_){
_start:
{
if (lean_obj_tag(v_x_934_) == 0)
{
lean_object* v_key_935_; lean_object* v_child_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_970_; 
v_key_935_ = lean_ctor_get(v_x_934_, 0);
v_child_936_ = lean_ctor_get(v_x_934_, 1);
v_isSharedCheck_970_ = !lean_is_exclusive(v_x_934_);
if (v_isSharedCheck_970_ == 0)
{
v___x_938_ = v_x_934_;
v_isShared_939_ = v_isSharedCheck_970_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_child_936_);
lean_inc(v_key_935_);
lean_dec(v_x_934_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_970_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_940_ = lean_array_get_size(v_keys_931_);
v___x_941_ = lean_nat_dec_lt(v_x_933_, v___x_940_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
v___x_942_ = lean_unsigned_to_nat(1u);
v___x_943_ = lean_mk_empty_array_with_capacity(v___x_942_);
lean_inc_ref(v___x_943_);
v___x_944_ = lean_array_push(v___x_943_, v_v_932_);
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v_key_935_);
lean_ctor_set(v___x_945_, 1, v_child_936_);
v___x_946_ = lean_array_push(v___x_943_, v___x_945_);
if (v_isShared_939_ == 0)
{
lean_ctor_set_tag(v___x_938_, 1);
lean_ctor_set(v___x_938_, 1, v___x_946_);
lean_ctor_set(v___x_938_, 0, v___x_944_);
v___x_948_ = v___x_938_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_949_, 1, v___x_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
else
{
lean_object* v___x_950_; uint8_t v___x_951_; 
v___x_950_ = lean_array_fget_borrowed(v_keys_931_, v_x_933_);
v___x_951_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_950_, v_key_935_);
if (v___x_951_ == 0)
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_962_; 
v___x_952_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__0));
v___x_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_953_, 0, v_key_935_);
lean_ctor_set(v___x_953_, 1, v_child_936_);
v___x_954_ = lean_unsigned_to_nat(1u);
v___x_955_ = lean_mk_empty_array_with_capacity(v___x_954_);
v___x_956_ = lean_array_push(v___x_955_, v___x_953_);
v___x_957_ = lean_nat_add(v_x_933_, v___x_954_);
v___x_958_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_931_, v_v_932_, v___x_957_);
lean_dec(v___x_957_);
lean_inc(v___x_950_);
v___x_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_950_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
lean_inc_ref(v___x_959_);
v___x_960_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1(v___x_959_, v___x_956_, v___x_959_);
lean_dec_ref_known(v___x_959_, 2);
if (v_isShared_939_ == 0)
{
lean_ctor_set_tag(v___x_938_, 1);
lean_ctor_set(v___x_938_, 1, v___x_960_);
lean_ctor_set(v___x_938_, 0, v___x_952_);
v___x_962_ = v___x_938_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_952_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v___x_960_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
else
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_964_ = lean_unsigned_to_nat(1u);
v___x_965_ = lean_nat_add(v_x_933_, v___x_964_);
v___x_966_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(v_keys_931_, v_v_932_, v___x_965_, v_child_936_);
lean_dec(v___x_965_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 1, v___x_966_);
v___x_968_ = v___x_938_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_key_935_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_966_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
}
else
{
lean_object* v_vs_971_; lean_object* v_children_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_989_; 
v_vs_971_ = lean_ctor_get(v_x_934_, 0);
v_children_972_ = lean_ctor_get(v_x_934_, 1);
v_isSharedCheck_989_ = !lean_is_exclusive(v_x_934_);
if (v_isSharedCheck_989_ == 0)
{
v___x_974_ = v_x_934_;
v_isShared_975_ = v_isSharedCheck_989_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_children_972_);
lean_inc(v_vs_971_);
lean_dec(v_x_934_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_989_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_976_; uint8_t v___x_977_; 
v___x_976_ = lean_array_get_size(v_keys_931_);
v___x_977_ = lean_nat_dec_lt(v_x_933_, v___x_976_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; lean_object* v___x_980_; 
v___x_978_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__2(v_vs_971_, v_v_932_);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 0, v___x_978_);
v___x_980_ = v___x_974_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_978_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v_children_972_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
else
{
lean_object* v_k_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v_c_985_; lean_object* v___x_987_; 
v_k_982_ = lean_array_fget_borrowed(v_keys_931_, v_x_933_);
v___x_983_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___closed__1));
lean_inc_n(v_k_982_, 2);
v___x_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_984_, 0, v_k_982_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v_c_985_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3(v_x_933_, v_keys_931_, v_v_932_, v_k_982_, v_children_972_, v___x_984_);
lean_dec_ref_known(v___x_984_, 2);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 1, v_c_985_);
v___x_987_ = v___x_974_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_vs_971_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v_c_985_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2(lean_object* v_x_990_, lean_object* v_keys_991_, lean_object* v_v_992_, lean_object* v_k_993_, lean_object* v_x_994_){
_start:
{
lean_object* v_snd_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1005_; 
v_snd_995_ = lean_ctor_get(v_x_994_, 1);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_x_994_);
if (v_isSharedCheck_1005_ == 0)
{
lean_object* v_unused_1006_; 
v_unused_1006_ = lean_ctor_get(v_x_994_, 0);
lean_dec(v_unused_1006_);
v___x_997_ = v_x_994_;
v_isShared_998_ = v_isSharedCheck_1005_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_snd_995_);
lean_dec(v_x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1005_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v_c_1001_; lean_object* v___x_1003_; 
v___x_999_ = lean_unsigned_to_nat(1u);
v___x_1000_ = lean_nat_add(v_x_990_, v___x_999_);
v_c_1001_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(v_keys_991_, v_v_992_, v___x_1000_, v_snd_995_);
lean_dec(v___x_1000_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v_c_1001_);
lean_ctor_set(v___x_997_, 0, v_k_993_);
v___x_1003_ = v___x_997_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_k_993_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_c_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2___boxed(lean_object* v_x_1007_, lean_object* v_keys_1008_, lean_object* v_v_1009_, lean_object* v_k_1010_, lean_object* v_x_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___lam__2(v_x_1007_, v_keys_1008_, v_v_1009_, v_k_1010_, v_x_1011_);
lean_dec_ref(v_keys_1008_);
lean_dec(v_x_1007_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg___boxed(lean_object* v_x_1013_, lean_object* v_keys_1014_, lean_object* v_v_1015_, lean_object* v_k_1016_, lean_object* v_as_1017_, lean_object* v_k_1018_, lean_object* v_x_1019_, lean_object* v_x_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg(v_x_1013_, v_keys_1014_, v_v_1015_, v_k_1016_, v_as_1017_, v_k_1018_, v_x_1019_, v_x_1020_);
lean_dec_ref(v_k_1018_);
lean_dec_ref(v_keys_1014_);
lean_dec(v_x_1013_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0___boxed(lean_object* v_keys_1022_, lean_object* v_v_1023_, lean_object* v_x_1024_, lean_object* v_x_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(v_keys_1022_, v_v_1023_, v_x_1024_, v_x_1025_);
lean_dec(v_x_1024_);
lean_dec_ref(v_keys_1022_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3___boxed(lean_object* v_x_1027_, lean_object* v_keys_1028_, lean_object* v_v_1029_, lean_object* v_k_1030_, lean_object* v_as_1031_, lean_object* v_k_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3(v_x_1027_, v_keys_1028_, v_v_1029_, v_k_1030_, v_as_1031_, v_k_1032_);
lean_dec_ref(v_k_1032_);
lean_dec_ref(v_keys_1028_);
lean_dec(v_x_1027_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(lean_object* v_keys_1034_, lean_object* v_v_1035_, lean_object* v_x_1036_){
_start:
{
if (lean_obj_tag(v_x_1036_) == 0)
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1037_ = lean_unsigned_to_nat(1u);
v___x_1038_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_1034_, v_v_1035_, v___x_1037_);
v___x_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1038_);
return v___x_1039_;
}
else
{
lean_object* v_val_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1049_; 
v_val_1040_ = lean_ctor_get(v_x_1036_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v_x_1036_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1042_ = v_x_1036_;
v_isShared_1043_ = v_isSharedCheck_1049_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_val_1040_);
lean_dec(v_x_1036_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1049_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1047_; 
v___x_1044_ = lean_unsigned_to_nat(1u);
v___x_1045_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0(v_keys_1034_, v_v_1035_, v___x_1044_, v_val_1040_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 0, v___x_1045_);
v___x_1047_ = v___x_1042_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0___boxed(lean_object* v_keys_1050_, lean_object* v_v_1051_, lean_object* v_x_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1050_, v_v_1051_, v_x_1052_);
lean_dec_ref(v_keys_1050_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1(lean_object* v_keys_1054_, lean_object* v_v_1055_, lean_object* v_x_1056_, size_t v_x_1057_, size_t v_x_1058_, lean_object* v_x_1059_){
_start:
{
if (lean_obj_tag(v_x_1056_) == 0)
{
lean_object* v_es_1060_; size_t v___x_1061_; size_t v___x_1062_; lean_object* v_j_1063_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v_es_1060_ = lean_ctor_get(v_x_1056_, 0);
v___x_1061_ = ((size_t)31ULL);
v___x_1062_ = lean_usize_land(v_x_1057_, v___x_1061_);
v_j_1063_ = lean_usize_to_nat(v___x_1062_);
v___x_1064_ = lean_array_get_size(v_es_1060_);
v___x_1065_ = lean_nat_dec_lt(v_j_1063_, v___x_1064_);
if (v___x_1065_ == 0)
{
lean_dec(v_j_1063_);
lean_dec(v_x_1059_);
lean_dec_ref(v_v_1055_);
return v_x_1056_;
}
else
{
lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1133_; 
lean_inc_ref(v_es_1060_);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_x_1056_);
if (v_isSharedCheck_1133_ == 0)
{
lean_object* v_unused_1134_; 
v_unused_1134_ = lean_ctor_get(v_x_1056_, 0);
lean_dec(v_unused_1134_);
v___x_1067_ = v_x_1056_;
v_isShared_1068_ = v_isSharedCheck_1133_;
goto v_resetjp_1066_;
}
else
{
lean_dec(v_x_1056_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1133_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v_v_1069_; lean_object* v___x_1070_; lean_object* v_xs_x27_1071_; lean_object* v___y_1073_; 
v_v_1069_ = lean_array_fget(v_es_1060_, v_j_1063_);
v___x_1070_ = lean_box(0);
v_xs_x27_1071_ = lean_array_fset(v_es_1060_, v_j_1063_, v___x_1070_);
switch(lean_obj_tag(v_v_1069_))
{
case 0:
{
lean_object* v_key_1078_; lean_object* v_val_1079_; uint8_t v___x_1080_; 
v_key_1078_ = lean_ctor_get(v_v_1069_, 0);
v_val_1079_ = lean_ctor_get(v_v_1069_, 1);
v___x_1080_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_1059_, v_key_1078_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = lean_box(0);
v___x_1082_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1054_, v_v_1055_, v___x_1081_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_dec(v_x_1059_);
v___y_1073_ = v_v_1069_;
goto v___jp_1072_;
}
else
{
lean_object* v_val_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1091_; 
lean_inc(v_val_1079_);
lean_inc(v_key_1078_);
lean_dec_ref_known(v_v_1069_, 2);
v_val_1083_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1085_ = v___x_1082_;
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_val_1083_);
lean_dec(v___x_1082_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1087_; lean_object* v___x_1089_; 
v___x_1087_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1078_, v_val_1079_, v_x_1059_, v_val_1083_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 0, v___x_1087_);
v___x_1089_ = v___x_1085_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
v___y_1073_ = v___x_1089_;
goto v___jp_1072_;
}
}
}
}
else
{
lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1102_; 
lean_inc(v_val_1079_);
v_isSharedCheck_1102_ = !lean_is_exclusive(v_v_1069_);
if (v_isSharedCheck_1102_ == 0)
{
lean_object* v_unused_1103_; lean_object* v_unused_1104_; 
v_unused_1103_ = lean_ctor_get(v_v_1069_, 1);
lean_dec(v_unused_1103_);
v_unused_1104_ = lean_ctor_get(v_v_1069_, 0);
lean_dec(v_unused_1104_);
v___x_1093_ = v_v_1069_;
v_isShared_1094_ = v_isSharedCheck_1102_;
goto v_resetjp_1092_;
}
else
{
lean_dec(v_v_1069_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1102_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1095_, 0, v_val_1079_);
v___x_1096_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1054_, v_v_1055_, v___x_1095_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v___x_1097_; 
lean_del_object(v___x_1093_);
lean_dec(v_x_1059_);
v___x_1097_ = lean_box(2);
v___y_1073_ = v___x_1097_;
goto v___jp_1072_;
}
else
{
lean_object* v_val_1098_; lean_object* v___x_1100_; 
v_val_1098_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_val_1098_);
lean_dec_ref_known(v___x_1096_, 1);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 1, v_val_1098_);
lean_ctor_set(v___x_1093_, 0, v_x_1059_);
v___x_1100_ = v___x_1093_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_x_1059_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_val_1098_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
v___y_1073_ = v___x_1100_;
goto v___jp_1072_;
}
}
}
}
}
case 1:
{
lean_object* v_node_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1128_; 
v_node_1105_ = lean_ctor_get(v_v_1069_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_v_1069_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1107_ = v_v_1069_;
v_isShared_1108_ = v_isSharedCheck_1128_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_node_1105_);
lean_dec(v_v_1069_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1128_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
size_t v___x_1109_; size_t v___x_1110_; size_t v___x_1111_; size_t v___x_1112_; lean_object* v_newNode_1113_; lean_object* v___x_1114_; 
v___x_1109_ = ((size_t)5ULL);
v___x_1110_ = lean_usize_shift_right(v_x_1057_, v___x_1109_);
v___x_1111_ = ((size_t)1ULL);
v___x_1112_ = lean_usize_add(v_x_1058_, v___x_1111_);
v_newNode_1113_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1(v_keys_1054_, v_v_1055_, v_node_1105_, v___x_1110_, v___x_1112_, v_x_1059_);
lean_inc_ref(v_newNode_1113_);
v___x_1114_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_1113_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v___x_1116_; 
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v_newNode_1113_);
v___x_1116_ = v___x_1107_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_newNode_1113_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
v___y_1073_ = v___x_1116_;
goto v___jp_1072_;
}
}
else
{
lean_object* v_val_1118_; lean_object* v_fst_1119_; lean_object* v_snd_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec_ref(v_newNode_1113_);
lean_del_object(v___x_1107_);
v_val_1118_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_val_1118_);
lean_dec_ref_known(v___x_1114_, 1);
v_fst_1119_ = lean_ctor_get(v_val_1118_, 0);
v_snd_1120_ = lean_ctor_get(v_val_1118_, 1);
v_isSharedCheck_1127_ = !lean_is_exclusive(v_val_1118_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v_val_1118_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_snd_1120_);
lean_inc(v_fst_1119_);
lean_dec(v_val_1118_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_fst_1119_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_snd_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
v___y_1073_ = v___x_1125_;
goto v___jp_1072_;
}
}
}
}
}
default: 
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = lean_box(0);
v___x_1130_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1054_, v_v_1055_, v___x_1129_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_dec(v_x_1059_);
v___y_1073_ = v_v_1069_;
goto v___jp_1072_;
}
else
{
lean_object* v_val_1131_; lean_object* v___x_1132_; 
v_val_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_val_1131_);
lean_dec_ref_known(v___x_1130_, 1);
v___x_1132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1132_, 0, v_x_1059_);
lean_ctor_set(v___x_1132_, 1, v_val_1131_);
v___y_1073_ = v___x_1132_;
goto v___jp_1072_;
}
}
}
v___jp_1072_:
{
lean_object* v___x_1074_; lean_object* v___x_1076_; 
v___x_1074_ = lean_array_fset(v_xs_x27_1071_, v_j_1063_, v___y_1073_);
lean_dec(v_j_1063_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1074_);
v___x_1076_ = v___x_1067_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1074_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
else
{
lean_object* v_ks_1135_; lean_object* v_vs_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1169_; 
v_ks_1135_ = lean_ctor_get(v_x_1056_, 0);
v_vs_1136_ = lean_ctor_get(v_x_1056_, 1);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_x_1056_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1138_ = v_x_1056_;
v_isShared_1139_ = v_isSharedCheck_1169_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_vs_1136_);
lean_inc(v_ks_1135_);
lean_dec(v_x_1056_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1169_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1140_; 
v___x_1140_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__5(v_ks_1135_, v_x_1059_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v___x_1142_; 
if (v_isShared_1139_ == 0)
{
v___x_1142_ = v___x_1138_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_ks_1135_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v_vs_1136_);
v___x_1142_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = lean_box(0);
v___x_1144_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1054_, v_v_1055_, v___x_1143_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_dec(v_x_1059_);
return v___x_1142_;
}
else
{
lean_object* v_val_1145_; lean_object* v___x_1146_; 
v_val_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_val_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v___x_1146_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(v___x_1142_, v_x_1057_, v_x_1058_, v_x_1059_, v_val_1145_);
return v___x_1146_;
}
}
}
else
{
lean_object* v_val_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1168_; 
v_val_1148_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1150_ = v___x_1140_;
v_isShared_1151_ = v_isSharedCheck_1168_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_val_1148_);
lean_dec(v___x_1140_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1168_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v_v_x27_1152_; lean_object* v_keys_1153_; lean_object* v_vals_1154_; lean_object* v___x_1156_; 
v_v_x27_1152_ = lean_array_fget(v_vs_1136_, v_val_1148_);
lean_inc(v_val_1148_);
v_keys_1153_ = l_Array_eraseIdx___redArg(v_ks_1135_, v_val_1148_);
v_vals_1154_ = l_Array_eraseIdx___redArg(v_vs_1136_, v_val_1148_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v_v_x27_1152_);
v___x_1156_ = v___x_1150_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_v_x27_1152_);
v___x_1156_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
lean_object* v___x_1157_; 
v___x_1157_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___lam__0(v_keys_1054_, v_v_1055_, v___x_1156_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v___x_1159_; 
lean_dec(v_x_1059_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 1, v_vals_1154_);
lean_ctor_set(v___x_1138_, 0, v_keys_1153_);
v___x_1159_ = v___x_1138_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_keys_1153_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v_vals_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
else
{
lean_object* v_val_1161_; lean_object* v_keys_1162_; lean_object* v_vals_1163_; lean_object* v___x_1165_; 
v_val_1161_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_val_1161_);
lean_dec_ref_known(v___x_1157_, 1);
v_keys_1162_ = lean_array_push(v_keys_1153_, v_x_1059_);
v_vals_1163_ = lean_array_push(v_vals_1154_, v_val_1161_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 1, v_vals_1163_);
lean_ctor_set(v___x_1138_, 0, v_keys_1162_);
v___x_1165_ = v___x_1138_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_keys_1162_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_vals_1163_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1___boxed(lean_object* v_keys_1170_, lean_object* v_v_1171_, lean_object* v_x_1172_, lean_object* v_x_1173_, lean_object* v_x_1174_, lean_object* v_x_1175_){
_start:
{
size_t v_x_3599__boxed_1176_; size_t v_x_3600__boxed_1177_; lean_object* v_res_1178_; 
v_x_3599__boxed_1176_ = lean_unbox_usize(v_x_1173_);
lean_dec(v_x_1173_);
v_x_3600__boxed_1177_ = lean_unbox_usize(v_x_1174_);
lean_dec(v_x_1174_);
v_res_1178_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1(v_keys_1170_, v_v_1171_, v_x_1172_, v_x_3599__boxed_1176_, v_x_3600__boxed_1177_, v_x_1175_);
lean_dec_ref(v_keys_1170_);
return v_res_1178_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = l_Lean_Meta_DiscrTree_instInhabited___redArg();
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2(lean_object* v_msg_1180_){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2___closed__0);
v___x_1182_ = lean_panic_fn_borrowed(v___x_1181_, v_msg_1180_);
return v___x_1182_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1186_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__2));
v___x_1187_ = lean_unsigned_to_nat(23u);
v___x_1188_ = lean_unsigned_to_nat(179u);
v___x_1189_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__1));
v___x_1190_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__0));
v___x_1191_ = l_mkPanicMessageWithDecl(v___x_1190_, v___x_1189_, v___x_1188_, v___x_1187_, v___x_1186_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0(lean_object* v_d_1192_, lean_object* v_keys_1193_, lean_object* v_v_1194_){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; 
v___x_1195_ = lean_array_get_size(v_keys_1193_);
v___x_1196_ = lean_unsigned_to_nat(0u);
v___x_1197_ = lean_nat_dec_eq(v___x_1195_, v___x_1196_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; lean_object* v_k_1199_; uint64_t v___x_1200_; size_t v_h_1201_; size_t v___x_1202_; lean_object* v___x_1203_; 
v___x_1198_ = lean_box(0);
v_k_1199_ = lean_array_get_borrowed(v___x_1198_, v_keys_1193_, v___x_1196_);
v___x_1200_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_1199_);
v_h_1201_ = lean_uint64_to_usize(v___x_1200_);
v___x_1202_ = ((size_t)1ULL);
lean_inc(v_k_1199_);
v___x_1203_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1(v_keys_1193_, v_v_1194_, v_d_1192_, v_h_1201_, v___x_1202_, v_k_1199_);
return v___x_1203_;
}
else
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
lean_dec_ref(v_v_1194_);
lean_dec_ref(v_d_1192_);
v___x_1204_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___closed__3);
v___x_1205_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__2(v___x_1204_);
return v___x_1205_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0___boxed(lean_object* v_d_1206_, lean_object* v_keys_1207_, lean_object* v_v_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0(v_d_1206_, v_keys_1207_, v_v_1208_);
lean_dec_ref(v_keys_1207_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addImportedInstanceEntry(lean_object* v_d_1210_, lean_object* v_e_1211_){
_start:
{
lean_object* v_globalName_x3f_1212_; 
v_globalName_x3f_1212_ = lean_ctor_get(v_e_1211_, 3);
if (lean_obj_tag(v_globalName_x3f_1212_) == 0)
{
lean_object* v_keys_1213_; lean_object* v_discrTree_1214_; lean_object* v_instanceNames_1215_; lean_object* v_erased_1216_; lean_object* v_classChanges_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1225_; 
v_keys_1213_ = lean_ctor_get(v_e_1211_, 0);
lean_inc_ref(v_keys_1213_);
v_discrTree_1214_ = lean_ctor_get(v_d_1210_, 0);
v_instanceNames_1215_ = lean_ctor_get(v_d_1210_, 1);
v_erased_1216_ = lean_ctor_get(v_d_1210_, 2);
v_classChanges_1217_ = lean_ctor_get(v_d_1210_, 3);
v_isSharedCheck_1225_ = !lean_is_exclusive(v_d_1210_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1219_ = v_d_1210_;
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_classChanges_1217_);
lean_inc(v_erased_1216_);
lean_inc(v_instanceNames_1215_);
lean_inc(v_discrTree_1214_);
lean_dec(v_d_1210_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0(v_discrTree_1214_, v_keys_1213_, v_e_1211_);
lean_dec_ref(v_keys_1213_);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v___x_1221_);
v___x_1223_ = v___x_1219_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_instanceNames_1215_);
lean_ctor_set(v_reuseFailAlloc_1224_, 2, v_erased_1216_);
lean_ctor_set(v_reuseFailAlloc_1224_, 3, v_classChanges_1217_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
else
{
lean_object* v_keys_1226_; lean_object* v_val_1227_; lean_object* v_discrTree_1228_; lean_object* v_instanceNames_1229_; lean_object* v_erased_1230_; lean_object* v_classChanges_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1241_; 
v_keys_1226_ = lean_ctor_get(v_e_1211_, 0);
v_val_1227_ = lean_ctor_get(v_globalName_x3f_1212_, 0);
lean_inc(v_val_1227_);
v_discrTree_1228_ = lean_ctor_get(v_d_1210_, 0);
v_instanceNames_1229_ = lean_ctor_get(v_d_1210_, 1);
v_erased_1230_ = lean_ctor_get(v_d_1210_, 2);
v_classChanges_1231_ = lean_ctor_get(v_d_1210_, 3);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_d_1210_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1233_ = v_d_1210_;
v_isShared_1234_ = v_isSharedCheck_1241_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_classChanges_1231_);
lean_inc(v_erased_1230_);
lean_inc(v_instanceNames_1229_);
lean_inc(v_discrTree_1228_);
lean_dec(v_d_1210_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1241_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1239_; 
lean_inc_ref(v_e_1211_);
v___x_1235_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0(v_discrTree_1228_, v_keys_1226_, v_e_1211_);
lean_inc(v_val_1227_);
v___x_1236_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(v_instanceNames_1229_, v_val_1227_, v_e_1211_);
v___x_1237_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(v_erased_1230_, v_val_1227_);
lean_dec(v_val_1227_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 2, v___x_1237_);
lean_ctor_set(v___x_1233_, 1, v___x_1236_);
lean_ctor_set(v___x_1233_, 0, v___x_1235_);
v___x_1239_ = v___x_1233_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v___x_1235_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v___x_1236_);
lean_ctor_set(v_reuseFailAlloc_1240_, 2, v___x_1237_);
lean_ctor_set(v_reuseFailAlloc_1240_, 3, v_classChanges_1231_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1(lean_object* v_00_u03b2_1242_, lean_object* v_x_1243_, lean_object* v_x_1244_){
_start:
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(v_x_1243_, v_x_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___boxed(lean_object* v_00_u03b2_1246_, lean_object* v_x_1247_, lean_object* v_x_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1(v_00_u03b2_1246_, v_x_1247_, v_x_1248_);
lean_dec(v_x_1248_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4(lean_object* v_00_u03b2_1250_, lean_object* v_x_1251_, size_t v_x_1252_, lean_object* v_x_1253_){
_start:
{
lean_object* v___x_1254_; 
v___x_1254_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___redArg(v_x_1251_, v_x_1252_, v_x_1253_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4___boxed(lean_object* v_00_u03b2_1255_, lean_object* v_x_1256_, lean_object* v_x_1257_, lean_object* v_x_1258_){
_start:
{
size_t v_x_3911__boxed_1259_; lean_object* v_res_1260_; 
v_x_3911__boxed_1259_ = lean_unbox_usize(v_x_1257_);
lean_dec(v_x_1257_);
v_res_1260_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1_spec__4(v_00_u03b2_1255_, v_x_1256_, v_x_3911__boxed_1259_, v_x_1258_);
lean_dec(v_x_1258_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6(lean_object* v_00_u03b2_1261_, lean_object* v_x_1262_, size_t v_x_1263_, size_t v_x_1264_, lean_object* v_x_1265_, lean_object* v_x_1266_){
_start:
{
lean_object* v___x_1267_; 
v___x_1267_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___redArg(v_x_1262_, v_x_1263_, v_x_1264_, v_x_1265_, v_x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6___boxed(lean_object* v_00_u03b2_1268_, lean_object* v_x_1269_, lean_object* v_x_1270_, lean_object* v_x_1271_, lean_object* v_x_1272_, lean_object* v_x_1273_){
_start:
{
size_t v_x_3922__boxed_1274_; size_t v_x_3923__boxed_1275_; lean_object* v_res_1276_; 
v_x_3922__boxed_1274_ = lean_unbox_usize(v_x_1270_);
lean_dec(v_x_1270_);
v_x_3923__boxed_1275_ = lean_unbox_usize(v_x_1271_);
lean_dec(v_x_1271_);
v_res_1276_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6(v_00_u03b2_1268_, v_x_1269_, v_x_3922__boxed_1274_, v_x_3923__boxed_1275_, v_x_1272_, v_x_1273_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4(lean_object* v___x_1277_, lean_object* v_as_1278_, lean_object* v_k_1279_, lean_object* v_x_1280_, lean_object* v_x_1281_, lean_object* v_x_1282_, lean_object* v_x_1283_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___redArg(v___x_1277_, v_as_1278_, v_k_1279_, v_x_1280_, v_x_1281_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v___x_1285_, lean_object* v_as_1286_, lean_object* v_k_1287_, lean_object* v_x_1288_, lean_object* v_x_1289_, lean_object* v_x_1290_, lean_object* v_x_1291_){
_start:
{
lean_object* v_res_1292_; 
v_res_1292_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__1_spec__4(v___x_1285_, v_as_1286_, v_k_1287_, v_x_1288_, v_x_1289_, v_x_1290_, v_x_1291_);
lean_dec_ref(v_k_1287_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8(lean_object* v_x_1293_, lean_object* v_keys_1294_, lean_object* v_v_1295_, lean_object* v_k_1296_, lean_object* v_as_1297_, lean_object* v_k_1298_, lean_object* v_x_1299_, lean_object* v_x_1300_, lean_object* v_x_1301_, lean_object* v_x_1302_){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___redArg(v_x_1293_, v_keys_1294_, v_v_1295_, v_k_1296_, v_as_1297_, v_k_1298_, v_x_1299_, v_x_1300_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8___boxed(lean_object* v_x_1304_, lean_object* v_keys_1305_, lean_object* v_v_1306_, lean_object* v_k_1307_, lean_object* v_as_1308_, lean_object* v_k_1309_, lean_object* v_x_1310_, lean_object* v_x_1311_, lean_object* v_x_1312_, lean_object* v_x_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__0_spec__3_spec__8(v_x_1304_, v_keys_1305_, v_v_1306_, v_k_1307_, v_as_1308_, v_k_1309_, v_x_1310_, v_x_1311_, v_x_1312_, v_x_1313_);
lean_dec_ref(v_k_1309_);
lean_dec_ref(v_keys_1305_);
lean_dec(v_x_1304_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13(lean_object* v_00_u03b2_1315_, lean_object* v_n_1316_, lean_object* v_k_1317_, lean_object* v_v_1318_){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13___redArg(v_n_1316_, v_k_1317_, v_v_1318_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14(lean_object* v_00_u03b2_1320_, size_t v_depth_1321_, lean_object* v_keys_1322_, lean_object* v_vals_1323_, lean_object* v_heq_1324_, lean_object* v_i_1325_, lean_object* v_entries_1326_){
_start:
{
lean_object* v___x_1327_; 
v___x_1327_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___redArg(v_depth_1321_, v_keys_1322_, v_vals_1323_, v_i_1325_, v_entries_1326_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14___boxed(lean_object* v_00_u03b2_1328_, lean_object* v_depth_1329_, lean_object* v_keys_1330_, lean_object* v_vals_1331_, lean_object* v_heq_1332_, lean_object* v_i_1333_, lean_object* v_entries_1334_){
_start:
{
size_t v_depth_boxed_1335_; lean_object* v_res_1336_; 
v_depth_boxed_1335_ = lean_unbox_usize(v_depth_1329_);
lean_dec(v_depth_1329_);
v_res_1336_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__14(v_00_u03b2_1328_, v_depth_boxed_1335_, v_keys_1330_, v_vals_1331_, v_heq_1332_, v_i_1333_, v_entries_1334_);
lean_dec_ref(v_vals_1331_);
lean_dec_ref(v_keys_1330_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15(lean_object* v_00_u03b2_1337_, lean_object* v_x_1338_, lean_object* v_x_1339_, lean_object* v_x_1340_, lean_object* v_x_1341_){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_addImportedInstanceEntry_spec__0_spec__1_spec__6_spec__13_spec__15___redArg(v_x_1338_, v_x_1339_, v_x_1340_, v_x_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstanceEntry(lean_object* v_d_1343_, lean_object* v_e_1344_){
_start:
{
lean_object* v_val_1345_; lean_object* v_priority_1346_; lean_object* v_synthOrder_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v_val_1345_ = lean_ctor_get(v_e_1344_, 1);
v_priority_1346_ = lean_ctor_get(v_e_1344_, 2);
v_synthOrder_1347_ = lean_ctor_get(v_e_1344_, 4);
v___x_1348_ = l_Lean_Meta_InstanceEntry_keyClass(v_e_1344_);
lean_inc_ref(v_synthOrder_1347_);
lean_inc(v_priority_1346_);
lean_inc_ref(v_val_1345_);
v___x_1349_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1349_, 0, v_val_1345_);
lean_ctor_set(v___x_1349_, 1, v_priority_1346_);
lean_ctor_set(v___x_1349_, 2, v_synthOrder_1347_);
v___x_1350_ = l___private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange(v_d_1343_, v___x_1348_, v___x_1349_);
v___x_1351_ = l_Lean_Meta_addImportedInstanceEntry(v___x_1350_, v_e_1344_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_eraseCore(lean_object* v_d_1352_, lean_object* v_declName_1353_){
_start:
{
lean_object* v_discrTree_1355_; lean_object* v_instanceNames_1356_; lean_object* v_erased_1357_; lean_object* v_classChanges_1358_; lean_object* v_discrTree_1363_; lean_object* v_instanceNames_1364_; lean_object* v_erased_1365_; lean_object* v_classChanges_1366_; lean_object* v___x_1367_; 
v_discrTree_1363_ = lean_ctor_get(v_d_1352_, 0);
v_instanceNames_1364_ = lean_ctor_get(v_d_1352_, 1);
v_erased_1365_ = lean_ctor_get(v_d_1352_, 2);
v_classChanges_1366_ = lean_ctor_get(v_d_1352_, 3);
v___x_1367_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_instanceNames_1364_, v_declName_1353_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_inc_ref(v_classChanges_1366_);
lean_inc_ref(v_erased_1365_);
lean_inc_ref(v_instanceNames_1364_);
lean_inc_ref(v_discrTree_1363_);
lean_dec_ref(v_d_1352_);
v_discrTree_1355_ = v_discrTree_1363_;
v_instanceNames_1356_ = v_instanceNames_1364_;
v_erased_1357_ = v_erased_1365_;
v_classChanges_1358_ = v_classChanges_1366_;
goto v___jp_1354_;
}
else
{
lean_object* v_val_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1381_; 
v_val_1368_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1370_ = v___x_1367_;
v_isShared_1371_ = v_isSharedCheck_1381_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_val_1368_);
lean_dec(v___x_1367_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1381_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1372_; lean_object* v___x_1374_; 
v___x_1372_ = l_Lean_Meta_InstanceEntry_keyClass(v_val_1368_);
lean_dec(v_val_1368_);
lean_inc(v_declName_1353_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 0, v_declName_1353_);
v___x_1374_ = v___x_1370_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_declName_1353_);
v___x_1374_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
lean_object* v___x_1375_; lean_object* v_discrTree_1376_; lean_object* v_instanceNames_1377_; lean_object* v_erased_1378_; lean_object* v_classChanges_1379_; 
v___x_1375_ = l___private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange(v_d_1352_, v___x_1372_, v___x_1374_);
v_discrTree_1376_ = lean_ctor_get(v___x_1375_, 0);
lean_inc_ref(v_discrTree_1376_);
v_instanceNames_1377_ = lean_ctor_get(v___x_1375_, 1);
lean_inc_ref(v_instanceNames_1377_);
v_erased_1378_ = lean_ctor_get(v___x_1375_, 2);
lean_inc_ref(v_erased_1378_);
v_classChanges_1379_ = lean_ctor_get(v___x_1375_, 3);
lean_inc_ref(v_classChanges_1379_);
lean_dec_ref(v___x_1375_);
v_discrTree_1355_ = v_discrTree_1376_;
v_instanceNames_1356_ = v_instanceNames_1377_;
v_erased_1357_ = v_erased_1378_;
v_classChanges_1358_ = v_classChanges_1379_;
goto v___jp_1354_;
}
}
}
v___jp_1354_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1359_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_addImportedInstanceEntry_spec__1___redArg(v_instanceNames_1356_, v_declName_1353_);
v___x_1360_ = lean_box(0);
v___x_1361_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0___redArg(v_erased_1357_, v_declName_1353_, v___x_1360_);
v___x_1362_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1362_, 0, v_discrTree_1355_);
lean_ctor_set(v___x_1362_, 1, v___x_1359_);
lean_ctor_set(v___x_1362_, 2, v___x_1361_);
lean_ctor_set(v___x_1362_, 3, v_classChanges_1358_);
return v___x_1362_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__0(lean_object* v_d_1382_, lean_object* v_declName_1383_, lean_object* v_toPure_1384_, lean_object* v_____r_1385_){
_start:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = l_Lean_Meta_Instances_eraseCore(v_d_1382_, v_declName_1383_);
v___x_1387_ = lean_apply_2(v_toPure_1384_, lean_box(0), v___x_1386_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg___lam__1(lean_object* v___f_1388_, lean_object* v_____r_1389_){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = lean_apply_1(v___f_1388_, v_____r_1389_);
return v___x_1390_;
}
}
static lean_object* _init_l_Lean_Meta_Instances_erase___redArg___closed__3(void){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__2));
v___x_1395_ = l_Lean_stringToMessageData(v___x_1394_);
return v___x_1395_;
}
}
static lean_object* _init_l_Lean_Meta_Instances_erase___redArg___closed__5(void){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1397_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__4));
v___x_1398_ = l_Lean_stringToMessageData(v___x_1397_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___redArg(lean_object* v_inst_1399_, lean_object* v_inst_1400_, lean_object* v_d_1401_, lean_object* v_declName_1402_){
_start:
{
lean_object* v_toApplicative_1403_; lean_object* v_toBind_1404_; lean_object* v_toPure_1405_; lean_object* v_instanceNames_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___f_1409_; uint8_t v___x_1410_; 
v_toApplicative_1403_ = lean_ctor_get(v_inst_1399_, 0);
v_toBind_1404_ = lean_ctor_get(v_inst_1399_, 1);
lean_inc(v_toBind_1404_);
v_toPure_1405_ = lean_ctor_get(v_toApplicative_1403_, 1);
v_instanceNames_1406_ = lean_ctor_get(v_d_1401_, 1);
v___x_1407_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__0));
v___x_1408_ = ((lean_object*)(l_Lean_Meta_Instances_erase___redArg___closed__1));
lean_inc(v_toPure_1405_);
lean_inc_n(v_declName_1402_, 2);
lean_inc_ref(v_d_1401_);
v___f_1409_ = lean_alloc_closure((void*)(l_Lean_Meta_Instances_erase___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1409_, 0, v_d_1401_);
lean_closure_set(v___f_1409_, 1, v_declName_1402_);
lean_closure_set(v___f_1409_, 2, v_toPure_1405_);
lean_inc_ref(v_instanceNames_1406_);
v___x_1410_ = l_Lean_PersistentHashMap_contains___redArg(v___x_1407_, v___x_1408_, v_instanceNames_1406_, v_declName_1402_);
if (v___x_1410_ == 0)
{
lean_object* v___f_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
lean_dec_ref(v_d_1401_);
v___f_1411_ = lean_alloc_closure((void*)(l_Lean_Meta_Instances_erase___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1411_, 0, v___f_1409_);
v___x_1412_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_1413_ = l_Lean_MessageData_ofConstName(v_declName_1402_, v___x_1410_);
v___x_1414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1412_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__5, &l_Lean_Meta_Instances_erase___redArg___closed__5_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__5);
v___x_1416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1414_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = l_Lean_throwError___redArg(v_inst_1399_, v_inst_1400_, v___x_1416_);
v___x_1418_ = lean_apply_4(v_toBind_1404_, lean_box(0), lean_box(0), v___x_1417_, v___f_1411_);
return v___x_1418_;
}
else
{
lean_object* v___x_1419_; lean_object* v___x_1420_; 
lean_inc(v_toPure_1405_);
lean_dec_ref(v___f_1409_);
lean_dec(v_toBind_1404_);
lean_dec_ref(v_inst_1400_);
lean_dec_ref(v_inst_1399_);
v___x_1419_ = lean_box(0);
v___x_1420_ = l_Lean_Meta_Instances_erase___redArg___lam__0(v_d_1401_, v_declName_1402_, v_toPure_1405_, v___x_1419_);
return v___x_1420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase(lean_object* v_m_1421_, lean_object* v_inst_1422_, lean_object* v_inst_1423_, lean_object* v_d_1424_, lean_object* v_declName_1425_){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = l_Lean_Meta_Instances_erase___redArg(v_inst_1422_, v_inst_1423_, v_d_1424_, v_declName_1425_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(lean_object* v_x_1427_, lean_object* v_e_1428_){
_start:
{
lean_object* v_globalName_x3f_1433_; 
v_globalName_x3f_1433_ = lean_ctor_get(v_e_1428_, 3);
lean_inc(v_globalName_x3f_1433_);
if (lean_obj_tag(v_globalName_x3f_1433_) == 0)
{
goto v___jp_1429_;
}
else
{
lean_object* v_val_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1443_; 
v_val_1434_ = lean_ctor_get(v_globalName_x3f_1433_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_globalName_x3f_1433_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1436_ = v_globalName_x3f_1433_;
v_isShared_1437_ = v_isSharedCheck_1443_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_val_1434_);
lean_dec(v_globalName_x3f_1433_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1443_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
uint8_t v___x_1438_; 
v___x_1438_ = l_Lean_isPrivateName(v_val_1434_);
lean_dec(v_val_1434_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1440_; 
if (v_isShared_1437_ == 0)
{
lean_ctor_set(v___x_1436_, 0, v_e_1428_);
v___x_1440_ = v___x_1436_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_e_1428_);
v___x_1440_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
lean_object* v___x_1441_; 
lean_inc_ref_n(v___x_1440_, 2);
v___x_1441_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
lean_ctor_set(v___x_1441_, 2, v___x_1440_);
return v___x_1441_;
}
}
else
{
lean_del_object(v___x_1436_);
goto v___jp_1429_;
}
}
}
v___jp_1429_:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1430_ = lean_box(0);
v___x_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1431_, 0, v_e_1428_);
v___x_1432_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1430_);
lean_ctor_set(v___x_1432_, 1, v___x_1430_);
lean_ctor_set(v___x_1432_, 2, v___x_1431_);
return v___x_1432_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object* v_x_1444_, lean_object* v_e_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(v_x_1444_, v_e_1445_);
lean_dec_ref(v_x_1444_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(lean_object* v___y_1447_){
_start:
{
lean_inc_ref(v___y_1447_);
return v___y_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object* v___y_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(v___y_1448_);
lean_dec_ref(v___y_1448_);
return v_res_1449_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1459_; uint8_t v___x_1460_; uint8_t v___x_1461_; lean_object* v___f_1462_; lean_object* v___f_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1459_ = lean_box(0);
v___x_1460_ = 0;
v___x_1461_ = 1;
v___f_1462_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_));
v___f_1463_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_));
v___x_1464_ = lean_obj_once(&l_Lean_Meta_instInhabitedInstances_default___closed__2, &l_Lean_Meta_instInhabitedInstances_default___closed__2_once, _init_l_Lean_Meta_instInhabitedInstances_default___closed__2);
v___x_1465_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_));
v___x_1466_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_));
v___x_1467_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_));
v___x_1468_ = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(v___x_1468_, 0, v___x_1467_);
lean_ctor_set(v___x_1468_, 1, v___x_1466_);
lean_ctor_set(v___x_1468_, 2, v___x_1465_);
lean_ctor_set(v___x_1468_, 3, v___x_1464_);
lean_ctor_set(v___x_1468_, 4, v___f_1463_);
lean_ctor_set(v___x_1468_, 5, v___f_1462_);
lean_ctor_set(v___x_1468_, 6, v___x_1459_);
lean_ctor_set_uint8(v___x_1468_, sizeof(void*)*7, v___x_1461_);
lean_ctor_set_uint8(v___x_1468_, sizeof(void*)*7 + 1, v___x_1460_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1470_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_);
v___x_1471_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2____boxed(lean_object* v_a_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_();
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(lean_object* v_k_1474_, uint8_t v_allowLevelAssignments_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1475_, v_k_1474_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1481_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1481_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
else
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1497_; 
v_a_1490_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1492_ = v___x_1481_;
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1481_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1493_ == 0)
{
v___x_1495_ = v___x_1492_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_a_1490_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg___boxed(lean_object* v_k_1498_, lean_object* v_allowLevelAssignments_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1505_; lean_object* v_res_1506_; 
v_allowLevelAssignments_boxed_1505_ = lean_unbox(v_allowLevelAssignments_1499_);
v_res_1506_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v_k_1498_, v_allowLevelAssignments_boxed_1505_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(lean_object* v_00_u03b1_1507_, lean_object* v_k_1508_, uint8_t v_allowLevelAssignments_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v_k_1508_, v_allowLevelAssignments_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___boxed(lean_object* v_00_u03b1_1516_, lean_object* v_k_1517_, lean_object* v_allowLevelAssignments_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1524_; lean_object* v_res_1525_; 
v_allowLevelAssignments_boxed_1524_ = lean_unbox(v_allowLevelAssignments_1518_);
v_res_1525_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0(v_00_u03b1_1516_, v_k_1517_, v_allowLevelAssignments_boxed_1524_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(lean_object* v_a_1526_, lean_object* v___x_1527_, uint8_t v___x_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_1526_, v___x_1527_, v___x_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; lean_object* v_snd_1536_; lean_object* v_snd_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
lean_dec_ref_known(v___x_1534_, 1);
v_snd_1536_ = lean_ctor_get(v_a_1535_, 1);
lean_inc(v_snd_1536_);
lean_dec(v_a_1535_);
v_snd_1537_ = lean_ctor_get(v_snd_1536_, 1);
lean_inc(v_snd_1537_);
lean_dec(v_snd_1536_);
v___x_1538_ = 0;
v___x_1539_ = l_Lean_Meta_DiscrTree_mkPath(v_snd_1537_, v___x_1538_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
return v___x_1539_;
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1547_; 
v_a_1540_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1542_ = v___x_1534_;
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1534_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1543_ == 0)
{
v___x_1545_ = v___x_1542_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1540_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed(lean_object* v_a_1548_, lean_object* v___x_1549_, lean_object* v___x_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
uint8_t v___x_497__boxed_1556_; lean_object* v_res_1557_; 
v___x_497__boxed_1556_ = lean_unbox(v___x_1550_);
v_res_1557_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0(v_a_1548_, v___x_1549_, v___x_497__boxed_1556_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(lean_object* v_e_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v___x_1564_; 
lean_inc(v_a_1562_);
lean_inc_ref(v_a_1561_);
lean_inc(v_a_1560_);
lean_inc_ref(v_a_1559_);
v___x_1564_ = lean_infer_type(v_e_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v___x_1566_; uint8_t v___x_1567_; lean_object* v___x_1568_; lean_object* v___f_1569_; uint8_t v___x_1570_; lean_object* v___x_1571_; 
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
lean_inc(v_a_1565_);
lean_dec_ref_known(v___x_1564_, 1);
v___x_1566_ = lean_box(0);
v___x_1567_ = 0;
v___x_1568_ = lean_box(v___x_1567_);
v___f_1569_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1569_, 0, v_a_1565_);
lean_closure_set(v___f_1569_, 1, v___x_1566_);
lean_closure_set(v___f_1569_, 2, v___x_1568_);
v___x_1570_ = 0;
v___x_1571_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey_spec__0___redArg(v___f_1569_, v___x_1570_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
return v___x_1571_;
}
else
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1579_; 
v_a_1572_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1574_ = v___x_1564_;
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v___x_1564_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_a_1572_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___boxed(lean_object* v_e_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(v_e_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
lean_dec(v_a_1584_);
lean_dec_ref(v_a_1583_);
lean_dec(v_a_1582_);
lean_dec_ref(v_a_1581_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(lean_object* v_k_1587_, lean_object* v_b_1588_, lean_object* v_c_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
lean_object* v___x_1595_; 
lean_inc(v___y_1593_);
lean_inc_ref(v___y_1592_);
lean_inc(v___y_1591_);
lean_inc_ref(v___y_1590_);
v___x_1595_ = lean_apply_7(v_k_1587_, v_b_1588_, v_c_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, lean_box(0));
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed(lean_object* v_k_1596_, lean_object* v_b_1597_, lean_object* v_c_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0(v_k_1596_, v_b_1597_, v_c_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(lean_object* v_type_1605_, lean_object* v_k_1606_, uint8_t v_cleanupAnnotations_1607_, uint8_t v_whnfType_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v___f_1614_; lean_object* v___x_1615_; 
v___f_1614_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1614_, 0, v_k_1606_);
v___x_1615_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1605_, v___f_1614_, v_cleanupAnnotations_1607_, v_whnfType_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1615_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1615_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
else
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
v_a_1624_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___x_1615_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1615_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
v___x_1629_ = v___x_1626_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_a_1624_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___boxed(lean_object* v_type_1632_, lean_object* v_k_1633_, lean_object* v_cleanupAnnotations_1634_, lean_object* v_whnfType_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1641_; uint8_t v_whnfType_boxed_1642_; lean_object* v_res_1643_; 
v_cleanupAnnotations_boxed_1641_ = lean_unbox(v_cleanupAnnotations_1634_);
v_whnfType_boxed_1642_ = lean_unbox(v_whnfType_1635_);
v_res_1643_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_type_1632_, v_k_1633_, v_cleanupAnnotations_boxed_1641_, v_whnfType_boxed_1642_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
lean_dec(v___y_1637_);
lean_dec_ref(v___y_1636_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(lean_object* v_00_u03b1_1644_, lean_object* v_type_1645_, lean_object* v_k_1646_, uint8_t v_cleanupAnnotations_1647_, uint8_t v_whnfType_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_type_1645_, v_k_1646_, v_cleanupAnnotations_1647_, v_whnfType_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___boxed(lean_object* v_00_u03b1_1655_, lean_object* v_type_1656_, lean_object* v_k_1657_, lean_object* v_cleanupAnnotations_1658_, lean_object* v_whnfType_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1665_; uint8_t v_whnfType_boxed_1666_; lean_object* v_res_1667_; 
v_cleanupAnnotations_boxed_1665_ = lean_unbox(v_cleanupAnnotations_1658_);
v_whnfType_boxed_1666_ = lean_unbox(v_whnfType_1659_);
v_res_1667_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1(v_00_u03b1_1655_, v_type_1656_, v_k_1657_, v_cleanupAnnotations_boxed_1665_, v_whnfType_boxed_1666_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(lean_object* v_as_1671_, size_t v_sz_1672_, size_t v_i_1673_, lean_object* v_b_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v_a_1681_; uint8_t v___x_1685_; 
v___x_1685_ = lean_usize_dec_lt(v_i_1673_, v_sz_1672_);
if (v___x_1685_ == 0)
{
lean_object* v___x_1686_; 
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v_b_1674_);
return v___x_1686_;
}
else
{
lean_object* v_fst_1687_; lean_object* v_snd_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1735_; 
v_fst_1687_ = lean_ctor_get(v_b_1674_, 0);
v_snd_1688_ = lean_ctor_get(v_b_1674_, 1);
v_isSharedCheck_1735_ = !lean_is_exclusive(v_b_1674_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1690_ = v_b_1674_;
v_isShared_1691_ = v_isSharedCheck_1735_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_snd_1688_);
lean_inc(v_fst_1687_);
lean_dec(v_b_1674_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1735_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v_next_1697_; 
v_next_1697_ = lean_ctor_get(v_snd_1688_, 0);
lean_inc(v_next_1697_);
if (lean_obj_tag(v_next_1697_) == 0)
{
goto v___jp_1692_;
}
else
{
lean_object* v_upperBound_1698_; lean_object* v_val_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1734_; 
v_upperBound_1698_ = lean_ctor_get(v_snd_1688_, 1);
v_val_1699_ = lean_ctor_get(v_next_1697_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v_next_1697_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1701_ = v_next_1697_;
v_isShared_1702_ = v_isSharedCheck_1734_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_val_1699_);
lean_dec(v_next_1697_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1734_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
uint8_t v___x_1703_; 
v___x_1703_ = lean_nat_dec_lt(v_val_1699_, v_upperBound_1698_);
if (v___x_1703_ == 0)
{
lean_del_object(v___x_1701_);
lean_dec(v_val_1699_);
goto v___jp_1692_;
}
else
{
lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1731_; 
lean_inc(v_upperBound_1698_);
lean_del_object(v___x_1690_);
v_isSharedCheck_1731_ = !lean_is_exclusive(v_snd_1688_);
if (v_isSharedCheck_1731_ == 0)
{
lean_object* v_unused_1732_; lean_object* v_unused_1733_; 
v_unused_1732_ = lean_ctor_get(v_snd_1688_, 1);
lean_dec(v_unused_1732_);
v_unused_1733_ = lean_ctor_get(v_snd_1688_, 0);
lean_dec(v_unused_1733_);
v___x_1705_ = v_snd_1688_;
v_isShared_1706_ = v_isSharedCheck_1731_;
goto v_resetjp_1704_;
}
else
{
lean_dec(v_snd_1688_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1731_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v_a_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1711_; 
v_a_1707_ = lean_array_uget_borrowed(v_as_1671_, v_i_1673_);
v___x_1708_ = lean_unsigned_to_nat(1u);
v___x_1709_ = lean_nat_add(v_val_1699_, v___x_1708_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v___x_1709_);
v___x_1711_ = v___x_1701_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v___x_1709_);
v___x_1711_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
lean_object* v___x_1713_; 
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 0, v___x_1711_);
v___x_1713_ = v___x_1705_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v___x_1711_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v_upperBound_1698_);
v___x_1713_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
lean_object* v___x_1714_; 
lean_inc(v___y_1678_);
lean_inc_ref(v___y_1677_);
lean_inc(v___y_1676_);
lean_inc_ref(v___y_1675_);
lean_inc(v_a_1707_);
v___x_1714_ = lean_infer_type(v_a_1707_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; lean_object* v___x_1716_; uint8_t v___x_1717_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
lean_inc(v_a_1715_);
lean_dec_ref_known(v___x_1714_, 1);
v___x_1716_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___closed__1));
v___x_1717_ = l_Lean_Expr_isAppOf(v_a_1715_, v___x_1716_);
lean_dec(v_a_1715_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; 
lean_dec(v_val_1699_);
v___x_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1718_, 0, v_fst_1687_);
lean_ctor_set(v___x_1718_, 1, v___x_1713_);
v_a_1681_ = v___x_1718_;
goto v___jp_1680_;
}
else
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1719_ = lean_array_push(v_fst_1687_, v_val_1699_);
v___x_1720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1719_);
lean_ctor_set(v___x_1720_, 1, v___x_1713_);
v_a_1681_ = v___x_1720_;
goto v___jp_1680_;
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v___x_1713_);
lean_dec(v_val_1699_);
lean_dec(v_fst_1687_);
v_a_1721_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1714_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1714_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
}
}
}
}
}
v___jp_1692_:
{
lean_object* v___x_1694_; 
if (v_isShared_1691_ == 0)
{
v___x_1694_ = v___x_1690_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_fst_1687_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_snd_1688_);
v___x_1694_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1694_);
return v___x_1695_;
}
}
}
}
v___jp_1680_:
{
size_t v___x_1682_; size_t v___x_1683_; 
v___x_1682_ = ((size_t)1ULL);
v___x_1683_ = lean_usize_add(v_i_1673_, v___x_1682_);
v_i_1673_ = v___x_1683_;
v_b_1674_ = v_a_1681_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0___boxed(lean_object* v_as_1736_, lean_object* v_sz_1737_, lean_object* v_i_1738_, lean_object* v_b_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
size_t v_sz_boxed_1745_; size_t v_i_boxed_1746_; lean_object* v_res_1747_; 
v_sz_boxed_1745_ = lean_unbox_usize(v_sz_1737_);
lean_dec(v_sz_1737_);
v_i_boxed_1746_ = lean_unbox_usize(v_i_1738_);
lean_dec(v_i_1738_);
v_res_1747_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(v_as_1736_, v_sz_boxed_1745_, v_i_boxed_1746_, v_b_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec_ref(v_as_1736_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(lean_object* v_declName_1752_, lean_object* v_args_1753_, lean_object* v_x_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v___x_1760_; lean_object* v___y_1762_; lean_object* v_env_1787_; lean_object* v___x_1788_; 
v___x_1760_ = lean_st_ref_get(v___y_1758_);
v_env_1787_ = lean_ctor_get(v___x_1760_, 0);
lean_inc_ref(v_env_1787_);
lean_dec(v___x_1760_);
v___x_1788_ = l_Lean_getOutParamPositions_x3f(v_env_1787_, v_declName_1752_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v___x_1789_; 
v___x_1789_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___y_1762_ = v___x_1789_;
goto v___jp_1761_;
}
else
{
lean_object* v_val_1790_; 
v_val_1790_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_val_1790_);
lean_dec_ref_known(v___x_1788_, 1);
v___y_1762_ = v_val_1790_;
goto v___jp_1761_;
}
v___jp_1761_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; size_t v_sz_1767_; size_t v___x_1768_; lean_object* v___x_1769_; 
v___x_1763_ = lean_array_get_size(v_args_1753_);
v___x_1764_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0));
v___x_1765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
lean_ctor_set(v___x_1765_, 1, v___x_1763_);
v___x_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___y_1762_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
v_sz_1767_ = lean_array_size(v_args_1753_);
v___x_1768_ = ((size_t)0ULL);
v___x_1769_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__0(v_args_1753_, v_sz_1767_, v___x_1768_, v___x_1766_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1778_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1772_ = v___x_1769_;
v_isShared_1773_ = v_isSharedCheck_1778_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1769_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1778_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v_fst_1774_; lean_object* v___x_1776_; 
v_fst_1774_ = lean_ctor_get(v_a_1770_, 0);
lean_inc(v_fst_1774_);
lean_dec(v_a_1770_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v_fst_1774_);
v___x_1776_ = v___x_1772_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_fst_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
v_a_1779_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1769_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1769_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed(lean_object* v_declName_1791_, lean_object* v_args_1792_, lean_object* v_x_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
lean_object* v_res_1799_; 
v_res_1799_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0(v_declName_1791_, v_args_1792_, v_x_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec_ref(v_x_1793_);
lean_dec_ref(v_args_1792_);
lean_dec(v_declName_1791_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(lean_object* v_classTy_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_){
_start:
{
lean_object* v___x_1806_; 
v___x_1806_ = l_Lean_Expr_getAppFn(v_classTy_1800_);
if (lean_obj_tag(v___x_1806_) == 4)
{
lean_object* v_declName_1807_; lean_object* v___f_1808_; lean_object* v___x_1809_; 
v_declName_1807_ = lean_ctor_get(v___x_1806_, 0);
lean_inc(v_declName_1807_);
v___f_1808_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1808_, 0, v_declName_1807_);
lean_inc(v_a_1804_);
lean_inc_ref(v_a_1803_);
lean_inc(v_a_1802_);
lean_inc_ref(v_a_1801_);
v___x_1809_ = lean_infer_type(v___x_1806_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
if (lean_obj_tag(v___x_1809_) == 0)
{
lean_object* v_a_1810_; uint8_t v___x_1811_; lean_object* v___x_1812_; 
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
lean_inc(v_a_1810_);
lean_dec_ref_known(v___x_1809_, 1);
v___x_1811_ = 0;
v___x_1812_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_1810_, v___f_1808_, v___x_1811_, v___x_1811_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
return v___x_1812_;
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_dec_ref(v___f_1808_);
v_a_1813_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1809_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1809_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
else
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
lean_dec_ref(v___x_1806_);
v___x_1821_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
return v___x_1822_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___boxed(lean_object* v_classTy_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_classTy_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_);
lean_dec(v_a_1827_);
lean_dec_ref(v_a_1826_);
lean_dec(v_a_1825_);
lean_dec_ref(v_a_1824_);
lean_dec_ref(v_classTy_1823_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(lean_object* v_a_1830_, lean_object* v_as_1831_, lean_object* v_j_1832_){
_start:
{
lean_object* v___x_1833_; uint8_t v___x_1834_; 
v___x_1833_ = lean_array_get_size(v_as_1831_);
v___x_1834_ = lean_nat_dec_lt(v_j_1832_, v___x_1833_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; 
lean_dec(v_j_1832_);
v___x_1835_ = lean_box(0);
return v___x_1835_;
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; 
v___x_1836_ = lean_array_fget_borrowed(v_as_1831_, v_j_1832_);
v___x_1837_ = l_Lean_Expr_mvarId_x21(v___x_1836_);
v___x_1838_ = l_Lean_instBEqMVarId_beq(v___x_1837_, v_a_1830_);
lean_dec(v___x_1837_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = lean_unsigned_to_nat(1u);
v___x_1840_ = lean_nat_add(v_j_1832_, v___x_1839_);
lean_dec(v_j_1832_);
v_j_1832_ = v___x_1840_;
goto _start;
}
else
{
lean_object* v___x_1842_; 
v___x_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1842_, 0, v_j_1832_);
return v___x_1842_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0___boxed(lean_object* v_a_1843_, lean_object* v_as_1844_, lean_object* v_j_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(v_a_1843_, v_as_1844_, v_j_1845_);
lean_dec_ref(v_as_1844_);
lean_dec(v_a_1843_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_1847_, lean_object* v_x_1848_, lean_object* v_x_1849_, lean_object* v_x_1850_){
_start:
{
lean_object* v_ks_1851_; lean_object* v_vs_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1876_; 
v_ks_1851_ = lean_ctor_get(v_x_1847_, 0);
v_vs_1852_ = lean_ctor_get(v_x_1847_, 1);
v_isSharedCheck_1876_ = !lean_is_exclusive(v_x_1847_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1854_ = v_x_1847_;
v_isShared_1855_ = v_isSharedCheck_1876_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_vs_1852_);
lean_inc(v_ks_1851_);
lean_dec(v_x_1847_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1876_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1856_; uint8_t v___x_1857_; 
v___x_1856_ = lean_array_get_size(v_ks_1851_);
v___x_1857_ = lean_nat_dec_lt(v_x_1848_, v___x_1856_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1861_; 
lean_dec(v_x_1848_);
v___x_1858_ = lean_array_push(v_ks_1851_, v_x_1849_);
v___x_1859_ = lean_array_push(v_vs_1852_, v_x_1850_);
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 1, v___x_1859_);
lean_ctor_set(v___x_1854_, 0, v___x_1858_);
v___x_1861_ = v___x_1854_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1858_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v___x_1859_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
else
{
lean_object* v_k_x27_1863_; uint8_t v___x_1864_; 
v_k_x27_1863_ = lean_array_fget_borrowed(v_ks_1851_, v_x_1848_);
v___x_1864_ = l_Lean_instBEqMVarId_beq(v_x_1849_, v_k_x27_1863_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1866_; 
if (v_isShared_1855_ == 0)
{
v___x_1866_ = v___x_1854_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_ks_1851_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_vs_1852_);
v___x_1866_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1867_ = lean_unsigned_to_nat(1u);
v___x_1868_ = lean_nat_add(v_x_1848_, v___x_1867_);
lean_dec(v_x_1848_);
v_x_1847_ = v___x_1866_;
v_x_1848_ = v___x_1868_;
goto _start;
}
}
else
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1874_; 
v___x_1871_ = lean_array_fset(v_ks_1851_, v_x_1848_, v_x_1849_);
v___x_1872_ = lean_array_fset(v_vs_1852_, v_x_1848_, v_x_1850_);
lean_dec(v_x_1848_);
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 1, v___x_1872_);
lean_ctor_set(v___x_1854_, 0, v___x_1871_);
v___x_1874_ = v___x_1854_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___x_1871_);
lean_ctor_set(v_reuseFailAlloc_1875_, 1, v___x_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_n_1877_, lean_object* v_k_1878_, lean_object* v_v_1879_){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = lean_unsigned_to_nat(0u);
v___x_1881_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(v_n_1877_, v___x_1880_, v_k_1878_, v_v_1879_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(lean_object* v_x_1882_, size_t v_x_1883_, size_t v_x_1884_, lean_object* v_x_1885_, lean_object* v_x_1886_){
_start:
{
if (lean_obj_tag(v_x_1882_) == 0)
{
lean_object* v_es_1887_; size_t v___x_1888_; size_t v___x_1889_; lean_object* v_j_1890_; lean_object* v___x_1891_; uint8_t v___x_1892_; 
v_es_1887_ = lean_ctor_get(v_x_1882_, 0);
v___x_1888_ = ((size_t)31ULL);
v___x_1889_ = lean_usize_land(v_x_1883_, v___x_1888_);
v_j_1890_ = lean_usize_to_nat(v___x_1889_);
v___x_1891_ = lean_array_get_size(v_es_1887_);
v___x_1892_ = lean_nat_dec_lt(v_j_1890_, v___x_1891_);
if (v___x_1892_ == 0)
{
lean_dec(v_j_1890_);
lean_dec(v_x_1886_);
lean_dec(v_x_1885_);
return v_x_1882_;
}
else
{
lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1931_; 
lean_inc_ref(v_es_1887_);
v_isSharedCheck_1931_ = !lean_is_exclusive(v_x_1882_);
if (v_isSharedCheck_1931_ == 0)
{
lean_object* v_unused_1932_; 
v_unused_1932_ = lean_ctor_get(v_x_1882_, 0);
lean_dec(v_unused_1932_);
v___x_1894_ = v_x_1882_;
v_isShared_1895_ = v_isSharedCheck_1931_;
goto v_resetjp_1893_;
}
else
{
lean_dec(v_x_1882_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1931_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v_v_1896_; lean_object* v___x_1897_; lean_object* v_xs_x27_1898_; lean_object* v___y_1900_; 
v_v_1896_ = lean_array_fget(v_es_1887_, v_j_1890_);
v___x_1897_ = lean_box(0);
v_xs_x27_1898_ = lean_array_fset(v_es_1887_, v_j_1890_, v___x_1897_);
switch(lean_obj_tag(v_v_1896_))
{
case 0:
{
lean_object* v_key_1905_; lean_object* v_val_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1916_; 
v_key_1905_ = lean_ctor_get(v_v_1896_, 0);
v_val_1906_ = lean_ctor_get(v_v_1896_, 1);
v_isSharedCheck_1916_ = !lean_is_exclusive(v_v_1896_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1908_ = v_v_1896_;
v_isShared_1909_ = v_isSharedCheck_1916_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_val_1906_);
lean_inc(v_key_1905_);
lean_dec(v_v_1896_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1916_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
uint8_t v___x_1910_; 
v___x_1910_ = l_Lean_instBEqMVarId_beq(v_x_1885_, v_key_1905_);
if (v___x_1910_ == 0)
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
lean_del_object(v___x_1908_);
v___x_1911_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1905_, v_val_1906_, v_x_1885_, v_x_1886_);
v___x_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1911_);
v___y_1900_ = v___x_1912_;
goto v___jp_1899_;
}
else
{
lean_object* v___x_1914_; 
lean_dec(v_val_1906_);
lean_dec(v_key_1905_);
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 1, v_x_1886_);
lean_ctor_set(v___x_1908_, 0, v_x_1885_);
v___x_1914_ = v___x_1908_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_x_1885_);
lean_ctor_set(v_reuseFailAlloc_1915_, 1, v_x_1886_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
v___y_1900_ = v___x_1914_;
goto v___jp_1899_;
}
}
}
}
case 1:
{
lean_object* v_node_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1929_; 
v_node_1917_ = lean_ctor_get(v_v_1896_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v_v_1896_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1919_ = v_v_1896_;
v_isShared_1920_ = v_isSharedCheck_1929_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_node_1917_);
lean_dec(v_v_1896_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1929_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
size_t v___x_1921_; size_t v___x_1922_; size_t v___x_1923_; size_t v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1921_ = ((size_t)5ULL);
v___x_1922_ = lean_usize_shift_right(v_x_1883_, v___x_1921_);
v___x_1923_ = ((size_t)1ULL);
v___x_1924_ = lean_usize_add(v_x_1884_, v___x_1923_);
v___x_1925_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_node_1917_, v___x_1922_, v___x_1924_, v_x_1885_, v_x_1886_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set(v___x_1919_, 0, v___x_1925_);
v___x_1927_ = v___x_1919_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1925_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
v___y_1900_ = v___x_1927_;
goto v___jp_1899_;
}
}
}
default: 
{
lean_object* v___x_1930_; 
v___x_1930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1930_, 0, v_x_1885_);
lean_ctor_set(v___x_1930_, 1, v_x_1886_);
v___y_1900_ = v___x_1930_;
goto v___jp_1899_;
}
}
v___jp_1899_:
{
lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1901_ = lean_array_fset(v_xs_x27_1898_, v_j_1890_, v___y_1900_);
lean_dec(v_j_1890_);
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 0, v___x_1901_);
v___x_1903_ = v___x_1894_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1901_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
}
else
{
lean_object* v_ks_1933_; lean_object* v_vs_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1952_; 
v_ks_1933_ = lean_ctor_get(v_x_1882_, 0);
v_vs_1934_ = lean_ctor_get(v_x_1882_, 1);
v_isSharedCheck_1952_ = !lean_is_exclusive(v_x_1882_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1936_ = v_x_1882_;
v_isShared_1937_ = v_isSharedCheck_1952_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_vs_1934_);
lean_inc(v_ks_1933_);
lean_dec(v_x_1882_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1952_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_ks_1933_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v_vs_1934_);
v___x_1939_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
lean_object* v_newNode_1940_; size_t v___x_1941_; uint8_t v___x_1942_; 
v_newNode_1940_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(v___x_1939_, v_x_1885_, v_x_1886_);
v___x_1941_ = ((size_t)7ULL);
v___x_1942_ = lean_usize_dec_le(v___x_1941_, v_x_1884_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1943_; lean_object* v___x_1944_; uint8_t v___x_1945_; 
v___x_1943_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1940_);
v___x_1944_ = lean_unsigned_to_nat(4u);
v___x_1945_ = lean_nat_dec_lt(v___x_1943_, v___x_1944_);
lean_dec(v___x_1943_);
if (v___x_1945_ == 0)
{
lean_object* v_ks_1946_; lean_object* v_vs_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v_ks_1946_ = lean_ctor_get(v_newNode_1940_, 0);
lean_inc_ref(v_ks_1946_);
v_vs_1947_ = lean_ctor_get(v_newNode_1940_, 1);
lean_inc_ref(v_vs_1947_);
lean_dec_ref(v_newNode_1940_);
v___x_1948_ = lean_unsigned_to_nat(0u);
v___x_1949_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Instances_0__Lean_Meta_Instances_logChange_spec__0_spec__0___redArg___closed__0);
v___x_1950_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_x_1884_, v_ks_1946_, v_vs_1947_, v___x_1948_, v___x_1949_);
lean_dec_ref(v_vs_1947_);
lean_dec_ref(v_ks_1946_);
return v___x_1950_;
}
else
{
return v_newNode_1940_;
}
}
else
{
return v_newNode_1940_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(size_t v_depth_1953_, lean_object* v_keys_1954_, lean_object* v_vals_1955_, lean_object* v_i_1956_, lean_object* v_entries_1957_){
_start:
{
lean_object* v___x_1958_; uint8_t v___x_1959_; 
v___x_1958_ = lean_array_get_size(v_keys_1954_);
v___x_1959_ = lean_nat_dec_lt(v_i_1956_, v___x_1958_);
if (v___x_1959_ == 0)
{
lean_dec(v_i_1956_);
return v_entries_1957_;
}
else
{
lean_object* v_k_1960_; lean_object* v_v_1961_; uint64_t v___x_1962_; size_t v_h_1963_; size_t v___x_1964_; lean_object* v___x_1965_; size_t v___x_1966_; size_t v___x_1967_; size_t v___x_1968_; size_t v_h_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v_k_1960_ = lean_array_fget_borrowed(v_keys_1954_, v_i_1956_);
v_v_1961_ = lean_array_fget_borrowed(v_vals_1955_, v_i_1956_);
v___x_1962_ = l_Lean_instHashableMVarId_hash(v_k_1960_);
v_h_1963_ = lean_uint64_to_usize(v___x_1962_);
v___x_1964_ = ((size_t)5ULL);
v___x_1965_ = lean_unsigned_to_nat(1u);
v___x_1966_ = ((size_t)1ULL);
v___x_1967_ = lean_usize_sub(v_depth_1953_, v___x_1966_);
v___x_1968_ = lean_usize_mul(v___x_1964_, v___x_1967_);
v_h_1969_ = lean_usize_shift_right(v_h_1963_, v___x_1968_);
v___x_1970_ = lean_nat_add(v_i_1956_, v___x_1965_);
lean_dec(v_i_1956_);
lean_inc(v_v_1961_);
lean_inc(v_k_1960_);
v___x_1971_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_entries_1957_, v_h_1969_, v_depth_1953_, v_k_1960_, v_v_1961_);
v_i_1956_ = v___x_1970_;
v_entries_1957_ = v___x_1971_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_1973_, lean_object* v_keys_1974_, lean_object* v_vals_1975_, lean_object* v_i_1976_, lean_object* v_entries_1977_){
_start:
{
size_t v_depth_boxed_1978_; lean_object* v_res_1979_; 
v_depth_boxed_1978_ = lean_unbox_usize(v_depth_1973_);
lean_dec(v_depth_1973_);
v_res_1979_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_depth_boxed_1978_, v_keys_1974_, v_vals_1975_, v_i_1976_, v_entries_1977_);
lean_dec_ref(v_vals_1975_);
lean_dec_ref(v_keys_1974_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_1980_, lean_object* v_x_1981_, lean_object* v_x_1982_, lean_object* v_x_1983_, lean_object* v_x_1984_){
_start:
{
size_t v_x_1603__boxed_1985_; size_t v_x_1604__boxed_1986_; lean_object* v_res_1987_; 
v_x_1603__boxed_1985_ = lean_unbox_usize(v_x_1981_);
lean_dec(v_x_1981_);
v_x_1604__boxed_1986_ = lean_unbox_usize(v_x_1982_);
lean_dec(v_x_1982_);
v_res_1987_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_1980_, v_x_1603__boxed_1985_, v_x_1604__boxed_1986_, v_x_1983_, v_x_1984_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(lean_object* v_x_1988_, lean_object* v_x_1989_, lean_object* v_x_1990_){
_start:
{
uint64_t v___x_1991_; size_t v___x_1992_; size_t v___x_1993_; lean_object* v___x_1994_; 
v___x_1991_ = l_Lean_instHashableMVarId_hash(v_x_1989_);
v___x_1992_ = lean_uint64_to_usize(v___x_1991_);
v___x_1993_ = ((size_t)1ULL);
v___x_1994_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_1988_, v___x_1992_, v___x_1993_, v_x_1989_, v_x_1990_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(lean_object* v_mvarId_1995_, lean_object* v_val_1996_, lean_object* v___y_1997_){
_start:
{
lean_object* v___x_1999_; lean_object* v_mctx_2000_; lean_object* v_cache_2001_; lean_object* v_zetaDeltaFVarIds_2002_; lean_object* v_postponed_2003_; lean_object* v_diag_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2032_; 
v___x_1999_ = lean_st_ref_take(v___y_1997_);
v_mctx_2000_ = lean_ctor_get(v___x_1999_, 0);
v_cache_2001_ = lean_ctor_get(v___x_1999_, 1);
v_zetaDeltaFVarIds_2002_ = lean_ctor_get(v___x_1999_, 2);
v_postponed_2003_ = lean_ctor_get(v___x_1999_, 3);
v_diag_2004_ = lean_ctor_get(v___x_1999_, 4);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2006_ = v___x_1999_;
v_isShared_2007_ = v_isSharedCheck_2032_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_diag_2004_);
lean_inc(v_postponed_2003_);
lean_inc(v_zetaDeltaFVarIds_2002_);
lean_inc(v_cache_2001_);
lean_inc(v_mctx_2000_);
lean_dec(v___x_1999_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2032_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v_depth_2008_; lean_object* v_levelAssignDepth_2009_; lean_object* v_lmvarCounter_2010_; lean_object* v_mvarCounter_2011_; lean_object* v_lDecls_2012_; lean_object* v_decls_2013_; lean_object* v_userNames_2014_; lean_object* v_lAssignment_2015_; lean_object* v_eAssignment_2016_; lean_object* v_dAssignment_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2031_; 
v_depth_2008_ = lean_ctor_get(v_mctx_2000_, 0);
v_levelAssignDepth_2009_ = lean_ctor_get(v_mctx_2000_, 1);
v_lmvarCounter_2010_ = lean_ctor_get(v_mctx_2000_, 2);
v_mvarCounter_2011_ = lean_ctor_get(v_mctx_2000_, 3);
v_lDecls_2012_ = lean_ctor_get(v_mctx_2000_, 4);
v_decls_2013_ = lean_ctor_get(v_mctx_2000_, 5);
v_userNames_2014_ = lean_ctor_get(v_mctx_2000_, 6);
v_lAssignment_2015_ = lean_ctor_get(v_mctx_2000_, 7);
v_eAssignment_2016_ = lean_ctor_get(v_mctx_2000_, 8);
v_dAssignment_2017_ = lean_ctor_get(v_mctx_2000_, 9);
v_isSharedCheck_2031_ = !lean_is_exclusive(v_mctx_2000_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2019_ = v_mctx_2000_;
v_isShared_2020_ = v_isSharedCheck_2031_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_dAssignment_2017_);
lean_inc(v_eAssignment_2016_);
lean_inc(v_lAssignment_2015_);
lean_inc(v_userNames_2014_);
lean_inc(v_decls_2013_);
lean_inc(v_lDecls_2012_);
lean_inc(v_mvarCounter_2011_);
lean_inc(v_lmvarCounter_2010_);
lean_inc(v_levelAssignDepth_2009_);
lean_inc(v_depth_2008_);
lean_dec(v_mctx_2000_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2031_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2024_; 
v___x_2021_ = lean_box(0);
v___x_2022_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(v_eAssignment_2016_, v_mvarId_1995_, v_val_1996_);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 8, v___x_2022_);
v___x_2024_ = v___x_2019_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_depth_2008_);
lean_ctor_set(v_reuseFailAlloc_2030_, 1, v_levelAssignDepth_2009_);
lean_ctor_set(v_reuseFailAlloc_2030_, 2, v_lmvarCounter_2010_);
lean_ctor_set(v_reuseFailAlloc_2030_, 3, v_mvarCounter_2011_);
lean_ctor_set(v_reuseFailAlloc_2030_, 4, v_lDecls_2012_);
lean_ctor_set(v_reuseFailAlloc_2030_, 5, v_decls_2013_);
lean_ctor_set(v_reuseFailAlloc_2030_, 6, v_userNames_2014_);
lean_ctor_set(v_reuseFailAlloc_2030_, 7, v_lAssignment_2015_);
lean_ctor_set(v_reuseFailAlloc_2030_, 8, v___x_2022_);
lean_ctor_set(v_reuseFailAlloc_2030_, 9, v_dAssignment_2017_);
v___x_2024_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
lean_object* v___x_2026_; 
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v___x_2024_);
v___x_2026_ = v___x_2006_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2024_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v_cache_2001_);
lean_ctor_set(v_reuseFailAlloc_2029_, 2, v_zetaDeltaFVarIds_2002_);
lean_ctor_set(v_reuseFailAlloc_2029_, 3, v_postponed_2003_);
lean_ctor_set(v_reuseFailAlloc_2029_, 4, v_diag_2004_);
v___x_2026_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = lean_st_ref_put(v___y_1997_, v___x_2026_);
v___x_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2021_);
return v___x_2028_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg___boxed(lean_object* v_mvarId_2033_, lean_object* v_val_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_mvarId_2033_, v_val_2034_, v___y_2035_);
lean_dec(v___y_2035_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(lean_object* v_argMVars_2038_, lean_object* v_argVars_2039_, lean_object* v_as_2040_, size_t v_sz_2041_, size_t v_i_2042_, lean_object* v_b_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
uint8_t v___x_2049_; 
v___x_2049_ = lean_usize_dec_lt(v_i_2042_, v_sz_2041_);
if (v___x_2049_ == 0)
{
lean_object* v___x_2050_; 
v___x_2050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2050_, 0, v_b_2043_);
return v___x_2050_;
}
else
{
lean_object* v___x_2051_; lean_object* v_a_2052_; lean_object* v___y_2054_; lean_object* v___y_2055_; lean_object* v___y_2056_; lean_object* v___y_2057_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2051_ = lean_box(0);
v_a_2052_ = lean_array_uget_borrowed(v_as_2040_, v_i_2042_);
v___x_2073_ = lean_unsigned_to_nat(0u);
v___x_2074_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__0(v_a_2052_, v_argMVars_2038_, v___x_2073_);
if (lean_obj_tag(v___x_2074_) == 1)
{
lean_object* v_val_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v_val_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_val_2075_);
lean_dec_ref_known(v___x_2074_, 1);
v___x_2076_ = l_Lean_instInhabitedExpr;
v___x_2077_ = lean_array_get_borrowed(v___x_2076_, v_argVars_2039_, v_val_2075_);
lean_dec(v_val_2075_);
lean_inc(v___x_2077_);
lean_inc(v_a_2052_);
v___x_2078_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_a_2052_, v___x_2077_, v___y_2045_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_dec_ref_known(v___x_2078_, 1);
v___y_2054_ = v___y_2044_;
v___y_2055_ = v___y_2045_;
v___y_2056_ = v___y_2046_;
v___y_2057_ = v___y_2047_;
goto v___jp_2053_;
}
else
{
return v___x_2078_;
}
}
else
{
lean_dec(v___x_2074_);
v___y_2054_ = v___y_2044_;
v___y_2055_ = v___y_2045_;
v___y_2056_ = v___y_2046_;
v___y_2057_ = v___y_2047_;
goto v___jp_2053_;
}
v___jp_2053_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
lean_inc(v_a_2052_);
v___x_2058_ = l_Lean_Expr_mvar___override(v_a_2052_);
lean_inc(v___y_2057_);
lean_inc_ref(v___y_2056_);
lean_inc(v___y_2055_);
lean_inc_ref(v___y_2054_);
v___x_2059_ = lean_infer_type(v___x_2058_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; lean_object* v___x_2061_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2060_);
lean_dec_ref_known(v___x_2059_, 1);
v___x_2061_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_argMVars_2038_, v_argVars_2039_, v_a_2060_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_);
if (lean_obj_tag(v___x_2061_) == 0)
{
size_t v___x_2062_; size_t v___x_2063_; 
lean_dec_ref_known(v___x_2061_, 1);
v___x_2062_ = ((size_t)1ULL);
v___x_2063_ = lean_usize_add(v_i_2042_, v___x_2062_);
v_i_2042_ = v___x_2063_;
v_b_2043_ = v___x_2051_;
goto _start;
}
else
{
return v___x_2061_;
}
}
else
{
lean_object* v_a_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2072_; 
v_a_2065_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2067_ = v___x_2059_;
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_a_2065_);
lean_dec(v___x_2059_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2070_; 
if (v_isShared_2068_ == 0)
{
v___x_2070_ = v___x_2067_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2065_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(lean_object* v_argMVars_2079_, lean_object* v_argVars_2080_, lean_object* v_e_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_){
_start:
{
lean_object* v___x_2087_; 
v___x_2087_ = l_Lean_Meta_getMVars(v_e_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_);
if (lean_obj_tag(v___x_2087_) == 0)
{
lean_object* v_a_2088_; lean_object* v___x_2089_; size_t v_sz_2090_; size_t v___x_2091_; lean_object* v___x_2092_; 
v_a_2088_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_a_2088_);
lean_dec_ref_known(v___x_2087_, 1);
v___x_2089_ = lean_box(0);
v_sz_2090_ = lean_array_size(v_a_2088_);
v___x_2091_ = ((size_t)0ULL);
v___x_2092_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(v_argMVars_2079_, v_argVars_2080_, v_a_2088_, v_sz_2090_, v___x_2091_, v___x_2089_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_);
lean_dec(v_a_2088_);
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2099_; 
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2099_ == 0)
{
lean_object* v_unused_2100_; 
v_unused_2100_ = lean_ctor_get(v___x_2092_, 0);
lean_dec(v_unused_2100_);
v___x_2094_ = v___x_2092_;
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
else
{
lean_dec(v___x_2092_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2097_; 
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v___x_2089_);
v___x_2097_ = v___x_2094_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2089_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
else
{
return v___x_2092_;
}
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
v_a_2101_ = lean_ctor_get(v___x_2087_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2087_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2087_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2087_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn___boxed(lean_object* v_argMVars_2109_, lean_object* v_argVars_2110_, lean_object* v_e_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_){
_start:
{
lean_object* v_res_2117_; 
v_res_2117_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_argMVars_2109_, v_argVars_2110_, v_e_2111_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
lean_dec(v_a_2115_);
lean_dec_ref(v_a_2114_);
lean_dec(v_a_2113_);
lean_dec_ref(v_a_2112_);
lean_dec_ref(v_argVars_2110_);
lean_dec_ref(v_argMVars_2109_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2___boxed(lean_object* v_argMVars_2118_, lean_object* v_argVars_2119_, lean_object* v_as_2120_, lean_object* v_sz_2121_, lean_object* v_i_2122_, lean_object* v_b_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
_start:
{
size_t v_sz_boxed_2129_; size_t v_i_boxed_2130_; lean_object* v_res_2131_; 
v_sz_boxed_2129_ = lean_unbox_usize(v_sz_2121_);
lean_dec(v_sz_2121_);
v_i_boxed_2130_ = lean_unbox_usize(v_i_2122_);
lean_dec(v_i_2122_);
v_res_2131_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__2(v_argMVars_2118_, v_argVars_2119_, v_as_2120_, v_sz_boxed_2129_, v_i_boxed_2130_, v_b_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_);
lean_dec(v___y_2127_);
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec_ref(v_as_2120_);
lean_dec_ref(v_argVars_2119_);
lean_dec_ref(v_argMVars_2118_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(lean_object* v_mvarId_2132_, lean_object* v_val_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v___x_2139_; 
v___x_2139_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___redArg(v_mvarId_2132_, v_val_2133_, v___y_2135_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1___boxed(lean_object* v_mvarId_2140_, lean_object* v_val_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1(v_mvarId_2140_, v_val_2141_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_);
lean_dec(v___y_2145_);
lean_dec_ref(v___y_2144_);
lean_dec(v___y_2143_);
lean_dec_ref(v___y_2142_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1(lean_object* v_00_u03b2_2148_, lean_object* v_x_2149_, lean_object* v_x_2150_, lean_object* v_x_2151_){
_start:
{
lean_object* v___x_2152_; 
v___x_2152_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1___redArg(v_x_2149_, v_x_2150_, v_x_2151_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_2153_, lean_object* v_x_2154_, size_t v_x_2155_, size_t v_x_2156_, lean_object* v_x_2157_, lean_object* v_x_2158_){
_start:
{
lean_object* v___x_2159_; 
v___x_2159_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___redArg(v_x_2154_, v_x_2155_, v_x_2156_, v_x_2157_, v_x_2158_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2160_, lean_object* v_x_2161_, lean_object* v_x_2162_, lean_object* v_x_2163_, lean_object* v_x_2164_, lean_object* v_x_2165_){
_start:
{
size_t v_x_1961__boxed_2166_; size_t v_x_1962__boxed_2167_; lean_object* v_res_2168_; 
v_x_1961__boxed_2166_ = lean_unbox_usize(v_x_2162_);
lean_dec(v_x_2162_);
v_x_1962__boxed_2167_ = lean_unbox_usize(v_x_2163_);
lean_dec(v_x_2163_);
v_res_2168_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2(v_00_u03b2_2160_, v_x_2161_, v_x_1961__boxed_2166_, v_x_1962__boxed_2167_, v_x_2164_, v_x_2165_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_2169_, lean_object* v_n_2170_, lean_object* v_k_2171_, lean_object* v_v_2172_){
_start:
{
lean_object* v___x_2173_; 
v___x_2173_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4___redArg(v_n_2170_, v_k_2171_, v_v_2172_);
return v___x_2173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_2174_, size_t v_depth_2175_, lean_object* v_keys_2176_, lean_object* v_vals_2177_, lean_object* v_heq_2178_, lean_object* v_i_2179_, lean_object* v_entries_2180_){
_start:
{
lean_object* v___x_2181_; 
v___x_2181_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___redArg(v_depth_2175_, v_keys_2176_, v_vals_2177_, v_i_2179_, v_entries_2180_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2182_, lean_object* v_depth_2183_, lean_object* v_keys_2184_, lean_object* v_vals_2185_, lean_object* v_heq_2186_, lean_object* v_i_2187_, lean_object* v_entries_2188_){
_start:
{
size_t v_depth_boxed_2189_; lean_object* v_res_2190_; 
v_depth_boxed_2189_ = lean_unbox_usize(v_depth_2183_);
lean_dec(v_depth_2183_);
v_res_2190_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__5(v_00_u03b2_2182_, v_depth_boxed_2189_, v_keys_2184_, v_vals_2185_, v_heq_2186_, v_i_2187_, v_entries_2188_);
lean_dec_ref(v_vals_2185_);
lean_dec_ref(v_keys_2184_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_2191_, lean_object* v_x_2192_, lean_object* v_x_2193_, lean_object* v_x_2194_, lean_object* v_x_2195_){
_start:
{
lean_object* v___x_2196_; 
v___x_2196_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn_spec__1_spec__1_spec__2_spec__4_spec__5___redArg(v_x_2192_, v_x_2193_, v_x_2194_, v_x_2195_);
return v___x_2196_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(lean_object* v_e_2197_, lean_object* v___y_2198_){
_start:
{
uint8_t v___x_2200_; 
v___x_2200_ = l_Lean_Expr_hasMVar(v_e_2197_);
if (v___x_2200_ == 0)
{
lean_object* v___x_2201_; 
v___x_2201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2201_, 0, v_e_2197_);
return v___x_2201_;
}
else
{
lean_object* v___x_2202_; lean_object* v_mctx_2203_; lean_object* v___x_2204_; lean_object* v_fst_2205_; lean_object* v_snd_2206_; lean_object* v___x_2207_; lean_object* v_cache_2208_; lean_object* v_zetaDeltaFVarIds_2209_; lean_object* v_postponed_2210_; lean_object* v_diag_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2220_; 
v___x_2202_ = lean_st_ref_get(v___y_2198_);
v_mctx_2203_ = lean_ctor_get(v___x_2202_, 0);
lean_inc_ref(v_mctx_2203_);
lean_dec(v___x_2202_);
v___x_2204_ = l_Lean_instantiateMVarsCore(v_mctx_2203_, v_e_2197_);
v_fst_2205_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_fst_2205_);
v_snd_2206_ = lean_ctor_get(v___x_2204_, 1);
lean_inc(v_snd_2206_);
lean_dec_ref(v___x_2204_);
v___x_2207_ = lean_st_ref_take(v___y_2198_);
v_cache_2208_ = lean_ctor_get(v___x_2207_, 1);
v_zetaDeltaFVarIds_2209_ = lean_ctor_get(v___x_2207_, 2);
v_postponed_2210_ = lean_ctor_get(v___x_2207_, 3);
v_diag_2211_ = lean_ctor_get(v___x_2207_, 4);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2220_ == 0)
{
lean_object* v_unused_2221_; 
v_unused_2221_ = lean_ctor_get(v___x_2207_, 0);
lean_dec(v_unused_2221_);
v___x_2213_ = v___x_2207_;
v_isShared_2214_ = v_isSharedCheck_2220_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_diag_2211_);
lean_inc(v_postponed_2210_);
lean_inc(v_zetaDeltaFVarIds_2209_);
lean_inc(v_cache_2208_);
lean_dec(v___x_2207_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2220_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 0, v_snd_2206_);
v___x_2216_ = v___x_2213_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_snd_2206_);
lean_ctor_set(v_reuseFailAlloc_2219_, 1, v_cache_2208_);
lean_ctor_set(v_reuseFailAlloc_2219_, 2, v_zetaDeltaFVarIds_2209_);
lean_ctor_set(v_reuseFailAlloc_2219_, 3, v_postponed_2210_);
lean_ctor_set(v_reuseFailAlloc_2219_, 4, v_diag_2211_);
v___x_2216_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2217_ = lean_st_ref_put(v___y_2198_, v___x_2216_);
v___x_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2218_, 0, v_fst_2205_);
return v___x_2218_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg___boxed(lean_object* v_e_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_e_2222_, v___y_2223_);
lean_dec(v___y_2223_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(lean_object* v_e_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_){
_start:
{
lean_object* v___x_2232_; 
v___x_2232_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_e_2226_, v___y_2228_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___boxed(lean_object* v_e_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_){
_start:
{
lean_object* v_res_2239_; 
v_res_2239_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3(v_e_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_);
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
return v_res_2239_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(lean_object* v_opts_2240_, lean_object* v_opt_2241_){
_start:
{
lean_object* v_name_2242_; lean_object* v_defValue_2243_; lean_object* v_map_2244_; lean_object* v___x_2245_; 
v_name_2242_ = lean_ctor_get(v_opt_2241_, 0);
v_defValue_2243_ = lean_ctor_get(v_opt_2241_, 1);
v_map_2244_ = lean_ctor_get(v_opts_2240_, 0);
v___x_2245_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2244_, v_name_2242_);
if (lean_obj_tag(v___x_2245_) == 0)
{
uint8_t v___x_2246_; 
v___x_2246_ = lean_unbox(v_defValue_2243_);
return v___x_2246_;
}
else
{
lean_object* v_val_2247_; 
v_val_2247_ = lean_ctor_get(v___x_2245_, 0);
lean_inc(v_val_2247_);
lean_dec_ref_known(v___x_2245_, 1);
if (lean_obj_tag(v_val_2247_) == 1)
{
uint8_t v_v_2248_; 
v_v_2248_ = lean_ctor_get_uint8(v_val_2247_, 0);
lean_dec_ref_known(v_val_2247_, 0);
return v_v_2248_;
}
else
{
uint8_t v___x_2249_; 
lean_dec(v_val_2247_);
v___x_2249_ = lean_unbox(v_defValue_2243_);
return v___x_2249_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4___boxed(lean_object* v_opts_2250_, lean_object* v_opt_2251_){
_start:
{
uint8_t v_res_2252_; lean_object* v_r_2253_; 
v_res_2252_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v_opts_2250_, v_opt_2251_);
lean_dec_ref(v_opt_2251_);
lean_dec_ref(v_opts_2250_);
v_r_2253_ = lean_box(v_res_2252_);
return v_r_2253_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(lean_object* v_a_2254_, lean_object* v_as_2255_, size_t v_i_2256_, size_t v_stop_2257_){
_start:
{
uint8_t v___x_2258_; 
v___x_2258_ = lean_usize_dec_eq(v_i_2256_, v_stop_2257_);
if (v___x_2258_ == 0)
{
lean_object* v___x_2259_; uint8_t v___x_2260_; 
v___x_2259_ = lean_array_uget_borrowed(v_as_2255_, v_i_2256_);
v___x_2260_ = lean_nat_dec_eq(v_a_2254_, v___x_2259_);
if (v___x_2260_ == 0)
{
size_t v___x_2261_; size_t v___x_2262_; 
v___x_2261_ = ((size_t)1ULL);
v___x_2262_ = lean_usize_add(v_i_2256_, v___x_2261_);
v_i_2256_ = v___x_2262_;
goto _start;
}
else
{
return v___x_2260_;
}
}
else
{
uint8_t v___x_2264_; 
v___x_2264_ = 0;
return v___x_2264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1___boxed(lean_object* v_a_2265_, lean_object* v_as_2266_, lean_object* v_i_2267_, lean_object* v_stop_2268_){
_start:
{
size_t v_i_boxed_2269_; size_t v_stop_boxed_2270_; uint8_t v_res_2271_; lean_object* v_r_2272_; 
v_i_boxed_2269_ = lean_unbox_usize(v_i_2267_);
lean_dec(v_i_2267_);
v_stop_boxed_2270_ = lean_unbox_usize(v_stop_2268_);
lean_dec(v_stop_2268_);
v_res_2271_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(v_a_2265_, v_as_2266_, v_i_boxed_2269_, v_stop_boxed_2270_);
lean_dec_ref(v_as_2266_);
lean_dec(v_a_2265_);
v_r_2272_ = lean_box(v_res_2271_);
return v_r_2272_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(lean_object* v_as_2273_, lean_object* v_a_2274_){
_start:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; 
v___x_2275_ = lean_unsigned_to_nat(0u);
v___x_2276_ = lean_array_get_size(v_as_2273_);
v___x_2277_ = lean_nat_dec_lt(v___x_2275_, v___x_2276_);
if (v___x_2277_ == 0)
{
return v___x_2277_;
}
else
{
size_t v___x_2278_; size_t v___x_2279_; uint8_t v___x_2280_; 
v___x_2278_ = ((size_t)0ULL);
v___x_2279_ = lean_usize_of_nat(v___x_2276_);
v___x_2280_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1_spec__1(v_a_2274_, v_as_2273_, v___x_2278_, v___x_2279_);
return v___x_2280_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1___boxed(lean_object* v_as_2281_, lean_object* v_a_2282_){
_start:
{
uint8_t v_res_2283_; lean_object* v_r_2284_; 
v_res_2283_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v_as_2281_, v_a_2282_);
lean_dec(v_a_2282_);
lean_dec_ref(v_as_2281_);
v_r_2284_ = lean_box(v_res_2283_);
return v_r_2284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(lean_object* v_a_2285_, lean_object* v_fst_2286_, lean_object* v_argVars_2287_, lean_object* v_as_2288_, size_t v_sz_2289_, size_t v_i_2290_, lean_object* v_b_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v_a_2298_; uint8_t v___x_2302_; 
v___x_2302_ = lean_usize_dec_lt(v_i_2290_, v_sz_2289_);
if (v___x_2302_ == 0)
{
lean_object* v___x_2303_; 
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v_b_2291_);
return v___x_2303_;
}
else
{
lean_object* v_next_2304_; 
v_next_2304_ = lean_ctor_get(v_b_2291_, 0);
lean_inc(v_next_2304_);
if (lean_obj_tag(v_next_2304_) == 0)
{
lean_object* v___x_2305_; 
v___x_2305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2305_, 0, v_b_2291_);
return v___x_2305_;
}
else
{
lean_object* v_upperBound_2306_; lean_object* v_val_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2338_; 
v_upperBound_2306_ = lean_ctor_get(v_b_2291_, 1);
v_val_2307_ = lean_ctor_get(v_next_2304_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_next_2304_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2309_ = v_next_2304_;
v_isShared_2310_ = v_isSharedCheck_2338_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_val_2307_);
lean_dec(v_next_2304_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2338_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
uint8_t v___x_2311_; 
v___x_2311_ = lean_nat_dec_lt(v_val_2307_, v_upperBound_2306_);
if (v___x_2311_ == 0)
{
lean_object* v___x_2312_; 
lean_del_object(v___x_2309_);
lean_dec(v_val_2307_);
v___x_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2312_, 0, v_b_2291_);
return v___x_2312_;
}
else
{
lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2335_; 
lean_inc(v_upperBound_2306_);
v_isSharedCheck_2335_ = !lean_is_exclusive(v_b_2291_);
if (v_isSharedCheck_2335_ == 0)
{
lean_object* v_unused_2336_; lean_object* v_unused_2337_; 
v_unused_2336_ = lean_ctor_get(v_b_2291_, 1);
lean_dec(v_unused_2336_);
v_unused_2337_ = lean_ctor_get(v_b_2291_, 0);
lean_dec(v_unused_2337_);
v___x_2314_ = v_b_2291_;
v_isShared_2315_ = v_isSharedCheck_2335_;
goto v_resetjp_2313_;
}
else
{
lean_dec(v_b_2291_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2335_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2319_; 
v___x_2316_ = lean_unsigned_to_nat(1u);
v___x_2317_ = lean_nat_add(v_val_2307_, v___x_2316_);
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 0, v___x_2317_);
v___x_2319_ = v___x_2309_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v___x_2317_);
v___x_2319_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
lean_object* v___x_2321_; 
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 0, v___x_2319_);
v___x_2321_ = v___x_2314_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v___x_2319_);
lean_ctor_set(v_reuseFailAlloc_2333_, 1, v_upperBound_2306_);
v___x_2321_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
uint8_t v___x_2322_; 
v___x_2322_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v_a_2285_, v_val_2307_);
lean_dec(v_val_2307_);
if (v___x_2322_ == 0)
{
lean_object* v_a_2323_; lean_object* v___x_2324_; 
v_a_2323_ = lean_array_uget_borrowed(v_as_2288_, v_i_2290_);
lean_inc(v_a_2323_);
v___x_2324_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2286_, v_argVars_2287_, v_a_2323_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_);
if (lean_obj_tag(v___x_2324_) == 0)
{
lean_dec_ref_known(v___x_2324_, 1);
v_a_2298_ = v___x_2321_;
goto v___jp_2297_;
}
else
{
lean_object* v_a_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2332_; 
lean_dec_ref(v___x_2321_);
v_a_2325_ = lean_ctor_get(v___x_2324_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2324_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2327_ = v___x_2324_;
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_a_2325_);
lean_dec(v___x_2324_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2330_; 
if (v_isShared_2328_ == 0)
{
v___x_2330_ = v___x_2327_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_a_2325_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
else
{
v_a_2298_ = v___x_2321_;
goto v___jp_2297_;
}
}
}
}
}
}
}
}
v___jp_2297_:
{
size_t v___x_2299_; size_t v___x_2300_; 
v___x_2299_ = ((size_t)1ULL);
v___x_2300_ = lean_usize_add(v_i_2290_, v___x_2299_);
v_i_2290_ = v___x_2300_;
v_b_2291_ = v_a_2298_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8___boxed(lean_object* v_a_2339_, lean_object* v_fst_2340_, lean_object* v_argVars_2341_, lean_object* v_as_2342_, lean_object* v_sz_2343_, lean_object* v_i_2344_, lean_object* v_b_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
size_t v_sz_boxed_2351_; size_t v_i_boxed_2352_; lean_object* v_res_2353_; 
v_sz_boxed_2351_ = lean_unbox_usize(v_sz_2343_);
lean_dec(v_sz_2343_);
v_i_boxed_2352_ = lean_unbox_usize(v_i_2344_);
lean_dec(v_i_2344_);
v_res_2353_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(v_a_2339_, v_fst_2340_, v_argVars_2341_, v_as_2342_, v_sz_boxed_2351_, v_i_boxed_2352_, v_b_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_);
lean_dec(v___y_2349_);
lean_dec_ref(v___y_2348_);
lean_dec(v___y_2347_);
lean_dec_ref(v___y_2346_);
lean_dec_ref(v_as_2342_);
lean_dec_ref(v_argVars_2341_);
lean_dec_ref(v_fst_2340_);
lean_dec_ref(v_a_2339_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(lean_object* v_upperBound_2354_, lean_object* v_a_2355_, lean_object* v___x_2356_, lean_object* v_a_2357_, lean_object* v_b_2358_){
_start:
{
uint8_t v___x_2360_; 
v___x_2360_ = lean_nat_dec_lt(v_a_2357_, v_upperBound_2354_);
if (v___x_2360_ == 0)
{
lean_object* v___x_2361_; 
lean_dec(v_a_2357_);
v___x_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2361_, 0, v_b_2358_);
return v___x_2361_;
}
else
{
lean_object* v_snd_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2402_; 
v_snd_2362_ = lean_ctor_get(v_b_2358_, 1);
v_isSharedCheck_2402_ = !lean_is_exclusive(v_b_2358_);
if (v_isSharedCheck_2402_ == 0)
{
lean_object* v_unused_2403_; 
v_unused_2403_ = lean_ctor_get(v_b_2358_, 0);
lean_dec(v_unused_2403_);
v___x_2364_ = v_b_2358_;
v_isShared_2365_ = v_isSharedCheck_2402_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_snd_2362_);
lean_dec(v_b_2358_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2402_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v_array_2366_; lean_object* v_start_2367_; lean_object* v_stop_2368_; lean_object* v___x_2369_; uint8_t v___x_2370_; 
v_array_2366_ = lean_ctor_get(v_snd_2362_, 0);
v_start_2367_ = lean_ctor_get(v_snd_2362_, 1);
v_stop_2368_ = lean_ctor_get(v_snd_2362_, 2);
v___x_2369_ = lean_box(0);
v___x_2370_ = lean_nat_dec_lt(v_start_2367_, v_stop_2368_);
if (v___x_2370_ == 0)
{
lean_object* v___x_2372_; 
lean_dec(v_a_2357_);
if (v_isShared_2365_ == 0)
{
lean_ctor_set(v___x_2364_, 0, v___x_2369_);
v___x_2372_ = v___x_2364_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2374_, 1, v_snd_2362_);
v___x_2372_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
lean_object* v___x_2373_; 
v___x_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
return v___x_2373_;
}
}
else
{
lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2398_; 
lean_inc(v_stop_2368_);
lean_inc(v_start_2367_);
lean_inc_ref(v_array_2366_);
v_isSharedCheck_2398_ = !lean_is_exclusive(v_snd_2362_);
if (v_isSharedCheck_2398_ == 0)
{
lean_object* v_unused_2399_; lean_object* v_unused_2400_; lean_object* v_unused_2401_; 
v_unused_2399_ = lean_ctor_get(v_snd_2362_, 2);
lean_dec(v_unused_2399_);
v_unused_2400_ = lean_ctor_get(v_snd_2362_, 1);
lean_dec(v_unused_2400_);
v_unused_2401_ = lean_ctor_get(v_snd_2362_, 0);
lean_dec(v_unused_2401_);
v___x_2376_ = v_snd_2362_;
v_isShared_2377_ = v_isSharedCheck_2398_;
goto v_resetjp_2375_;
}
else
{
lean_dec(v_snd_2362_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2398_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2382_; 
v___x_2378_ = lean_array_fget(v_array_2366_, v_start_2367_);
v___x_2379_ = lean_unsigned_to_nat(1u);
v___x_2380_ = lean_nat_add(v_start_2367_, v___x_2379_);
lean_dec(v_start_2367_);
if (v_isShared_2377_ == 0)
{
lean_ctor_set(v___x_2376_, 1, v___x_2380_);
v___x_2382_ = v___x_2376_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_array_2366_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v___x_2380_);
lean_ctor_set(v_reuseFailAlloc_2397_, 2, v_stop_2368_);
v___x_2382_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
uint8_t v___x_2389_; 
v___x_2389_ = l_Array_contains___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__1(v_a_2355_, v_a_2357_);
if (v___x_2389_ == 0)
{
uint8_t v___x_2390_; 
v___x_2390_ = l_Lean_Expr_hasExprMVar(v___x_2378_);
lean_dec(v___x_2378_);
if (v___x_2390_ == 0)
{
goto v___jp_2383_;
}
else
{
lean_object* v___x_2391_; uint8_t v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; 
lean_del_object(v___x_2364_);
lean_dec(v_a_2357_);
v___x_2391_ = lean_unsigned_to_nat(0u);
v___x_2392_ = lean_nat_dec_eq(v___x_2356_, v___x_2391_);
v___x_2393_ = lean_box(v___x_2392_);
v___x_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2393_);
v___x_2395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2394_);
lean_ctor_set(v___x_2395_, 1, v___x_2382_);
v___x_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
return v___x_2396_;
}
}
else
{
lean_dec(v___x_2378_);
goto v___jp_2383_;
}
v___jp_2383_:
{
lean_object* v___x_2385_; 
if (v_isShared_2365_ == 0)
{
lean_ctor_set(v___x_2364_, 1, v___x_2382_);
lean_ctor_set(v___x_2364_, 0, v___x_2369_);
v___x_2385_ = v___x_2364_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2388_, 1, v___x_2382_);
v___x_2385_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
lean_object* v___x_2386_; 
v___x_2386_ = lean_nat_add(v_a_2357_, v___x_2379_);
lean_dec(v_a_2357_);
v_a_2357_ = v___x_2386_;
v_b_2358_ = v___x_2385_;
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg___boxed(lean_object* v_upperBound_2404_, lean_object* v_a_2405_, lean_object* v___x_2406_, lean_object* v_a_2407_, lean_object* v_b_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_upperBound_2404_, v_a_2405_, v___x_2406_, v_a_2407_, v_b_2408_);
lean_dec(v___x_2406_);
lean_dec_ref(v_a_2405_);
lean_dec(v_upperBound_2404_);
return v_res_2410_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2411_; lean_object* v_dummy_2412_; 
v___x_2411_ = lean_box(0);
v_dummy_2412_ = l_Lean_Expr_sort___override(v___x_2411_);
return v_dummy_2412_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(lean_object* v___x_2413_, lean_object* v___x_2414_, uint8_t v___x_2415_, lean_object* v_x_2416_, lean_object* v_argTy_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_){
_start:
{
lean_object* v___x_2423_; 
lean_inc(v___y_2421_);
lean_inc_ref(v___y_2420_);
lean_inc(v___y_2419_);
lean_inc_ref(v___y_2418_);
v___x_2423_ = lean_whnf(v_argTy_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2425_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
lean_inc(v_a_2424_);
lean_dec_ref_known(v___x_2423_, 1);
v___x_2425_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_a_2424_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v_a_2426_; lean_object* v_dummy_2427_; lean_object* v_nargs_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v_a_2426_ = lean_ctor_get(v___x_2425_, 0);
lean_inc(v_a_2426_);
lean_dec_ref_known(v___x_2425_, 1);
v_dummy_2427_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0);
v_nargs_2428_ = l_Lean_Expr_getAppNumArgs(v_a_2424_);
lean_inc(v_nargs_2428_);
v___x_2429_ = lean_mk_array(v_nargs_2428_, v_dummy_2427_);
v___x_2430_ = lean_unsigned_to_nat(1u);
v___x_2431_ = lean_nat_sub(v_nargs_2428_, v___x_2430_);
lean_dec(v_nargs_2428_);
v___x_2432_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2424_, v___x_2429_, v___x_2431_);
v___x_2433_ = lean_array_get_size(v___x_2432_);
lean_inc(v___x_2413_);
v___x_2434_ = l_Array_toSubarray___redArg(v___x_2432_, v___x_2413_, v___x_2433_);
v___x_2435_ = lean_box(0);
v___x_2436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
lean_ctor_set(v___x_2436_, 1, v___x_2434_);
v___x_2437_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v___x_2433_, v_a_2426_, v___x_2414_, v___x_2413_, v___x_2436_);
lean_dec(v_a_2426_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2451_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2440_ = v___x_2437_;
v_isShared_2441_ = v_isSharedCheck_2451_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_a_2438_);
lean_dec(v___x_2437_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2451_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v_fst_2442_; 
v_fst_2442_ = lean_ctor_get(v_a_2438_, 0);
lean_inc(v_fst_2442_);
lean_dec(v_a_2438_);
if (lean_obj_tag(v_fst_2442_) == 0)
{
lean_object* v___x_2443_; lean_object* v___x_2445_; 
v___x_2443_ = lean_box(v___x_2415_);
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v___x_2443_);
v___x_2445_ = v___x_2440_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v___x_2443_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
else
{
lean_object* v_val_2447_; lean_object* v___x_2449_; 
v_val_2447_ = lean_ctor_get(v_fst_2442_, 0);
lean_inc(v_val_2447_);
lean_dec_ref_known(v_fst_2442_, 1);
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v_val_2447_);
v___x_2449_ = v___x_2440_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_val_2447_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
}
else
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2459_; 
v_a_2452_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2454_ = v___x_2437_;
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2437_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2457_; 
if (v_isShared_2455_ == 0)
{
v___x_2457_ = v___x_2454_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2452_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
}
}
else
{
lean_object* v_a_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2467_; 
lean_dec(v_a_2424_);
lean_dec(v___x_2413_);
v_a_2460_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2462_ = v___x_2425_;
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_a_2460_);
lean_dec(v___x_2425_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2465_; 
if (v_isShared_2463_ == 0)
{
v___x_2465_ = v___x_2462_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_a_2460_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
return v___x_2465_;
}
}
}
}
else
{
lean_object* v_a_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2475_; 
lean_dec(v___x_2413_);
v_a_2468_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2470_ = v___x_2423_;
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_a_2468_);
lean_dec(v___x_2423_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2473_; 
if (v_isShared_2471_ == 0)
{
v___x_2473_ = v___x_2470_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_a_2468_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed(lean_object* v___x_2476_, lean_object* v___x_2477_, lean_object* v___x_2478_, lean_object* v_x_2479_, lean_object* v_argTy_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
uint8_t v___x_22665__boxed_2486_; lean_object* v_res_2487_; 
v___x_22665__boxed_2486_ = lean_unbox(v___x_2478_);
v_res_2487_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0(v___x_2476_, v___x_2477_, v___x_22665__boxed_2486_, v_x_2479_, v_argTy_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_);
lean_dec(v___y_2484_);
lean_dec_ref(v___y_2483_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec_ref(v_x_2479_);
lean_dec(v___x_2477_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(lean_object* v_fst_2491_, lean_object* v_projInfo_x3f_2492_, lean_object* v___x_2493_, lean_object* v_argVars_2494_, lean_object* v_as_2495_, size_t v_sz_2496_, size_t v_i_2497_, lean_object* v_b_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
uint8_t v___x_2504_; 
v___x_2504_ = lean_usize_dec_lt(v_i_2497_, v_sz_2496_);
if (v___x_2504_ == 0)
{
lean_object* v___x_2505_; 
lean_dec(v___x_2493_);
v___x_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2505_, 0, v_b_2498_);
return v___x_2505_;
}
else
{
lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___f_2511_; uint8_t v___x_2512_; lean_object* v_a_2513_; lean_object* v___y_2520_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
lean_dec_ref(v_b_2498_);
v___x_2506_ = lean_box(0);
v___x_2507_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0));
v___x_2508_ = l_Lean_instInhabitedExpr;
v___x_2509_ = lean_unsigned_to_nat(0u);
v___x_2510_ = lean_box(v___x_2504_);
lean_inc(v___x_2493_);
v___f_2511_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___boxed), 10, 3);
lean_closure_set(v___f_2511_, 0, v___x_2509_);
lean_closure_set(v___f_2511_, 1, v___x_2493_);
lean_closure_set(v___f_2511_, 2, v___x_2510_);
v___x_2512_ = lean_nat_dec_eq(v___x_2493_, v___x_2509_);
v_a_2513_ = lean_array_uget_borrowed(v_as_2495_, v_i_2497_);
v___x_2534_ = lean_array_get_borrowed(v___x_2508_, v_fst_2491_, v_a_2513_);
lean_inc(v___y_2502_);
lean_inc_ref(v___y_2501_);
lean_inc(v___y_2500_);
lean_inc_ref(v___y_2499_);
lean_inc(v___x_2534_);
v___x_2535_ = lean_infer_type(v___x_2534_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; lean_object* v___x_2537_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2536_);
lean_dec_ref_known(v___x_2535_, 1);
v___x_2537_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_a_2536_, v___y_2500_);
if (lean_obj_tag(v___x_2537_) == 0)
{
if (lean_obj_tag(v_projInfo_x3f_2492_) == 1)
{
lean_object* v_val_2538_; lean_object* v_a_2539_; lean_object* v_numParams_2540_; uint8_t v___x_2541_; 
v_val_2538_ = lean_ctor_get(v_projInfo_x3f_2492_, 0);
v_a_2539_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2539_);
lean_dec_ref_known(v___x_2537_, 1);
v_numParams_2540_ = lean_ctor_get(v_val_2538_, 1);
v___x_2541_ = lean_nat_dec_eq(v_numParams_2540_, v_a_2513_);
if (v___x_2541_ == 0)
{
lean_object* v___x_2542_; 
v___x_2542_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_2539_, v___f_2511_, v___x_2512_, v___x_2512_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
v___y_2520_ = v___x_2542_;
goto v___jp_2519_;
}
else
{
lean_object* v___x_2543_; 
lean_dec_ref(v___f_2511_);
lean_dec(v___x_2493_);
v___x_2543_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2491_, v_argVars_2494_, v_a_2539_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_dec_ref_known(v___x_2543_, 1);
goto v___jp_2514_;
}
else
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2551_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2546_ = v___x_2543_;
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v___x_2543_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2549_; 
if (v_isShared_2547_ == 0)
{
v___x_2549_ = v___x_2546_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v_a_2544_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
}
}
else
{
lean_object* v_a_2552_; lean_object* v___x_2553_; 
v_a_2552_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2537_, 1);
v___x_2553_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_2552_, v___f_2511_, v___x_2512_, v___x_2512_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
v___y_2520_ = v___x_2553_;
goto v___jp_2519_;
}
}
else
{
lean_object* v_a_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2561_; 
lean_dec_ref(v___f_2511_);
lean_dec(v___x_2493_);
v_a_2554_ = lean_ctor_get(v___x_2537_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2556_ = v___x_2537_;
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_a_2554_);
lean_dec(v___x_2537_);
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
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
lean_dec_ref(v___f_2511_);
lean_dec(v___x_2493_);
v_a_2562_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2535_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2535_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
v___jp_2514_:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
lean_inc(v_a_2513_);
v___x_2515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2515_, 0, v_a_2513_);
v___x_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2515_);
v___x_2517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2516_);
lean_ctor_set(v___x_2517_, 1, v___x_2506_);
v___x_2518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2517_);
return v___x_2518_;
}
v___jp_2519_:
{
if (lean_obj_tag(v___y_2520_) == 0)
{
lean_object* v_a_2521_; uint8_t v___x_2522_; 
v_a_2521_ = lean_ctor_get(v___y_2520_, 0);
lean_inc(v_a_2521_);
lean_dec_ref_known(v___y_2520_, 1);
v___x_2522_ = lean_unbox(v_a_2521_);
lean_dec(v_a_2521_);
if (v___x_2522_ == 0)
{
size_t v___x_2523_; size_t v___x_2524_; 
v___x_2523_ = ((size_t)1ULL);
v___x_2524_ = lean_usize_add(v_i_2497_, v___x_2523_);
v_i_2497_ = v___x_2524_;
v_b_2498_ = v___x_2507_;
goto _start;
}
else
{
lean_dec(v___x_2493_);
goto v___jp_2514_;
}
}
else
{
lean_object* v_a_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2533_; 
lean_dec(v___x_2493_);
v_a_2526_ = lean_ctor_get(v___y_2520_, 0);
v_isSharedCheck_2533_ = !lean_is_exclusive(v___y_2520_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2528_ = v___y_2520_;
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_a_2526_);
lean_dec(v___y_2520_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
lean_object* v___x_2531_; 
if (v_isShared_2529_ == 0)
{
v___x_2531_ = v___x_2528_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2526_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___boxed(lean_object* v_fst_2570_, lean_object* v_projInfo_x3f_2571_, lean_object* v___x_2572_, lean_object* v_argVars_2573_, lean_object* v_as_2574_, lean_object* v_sz_2575_, lean_object* v_i_2576_, lean_object* v_b_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
size_t v_sz_boxed_2583_; size_t v_i_boxed_2584_; lean_object* v_res_2585_; 
v_sz_boxed_2583_ = lean_unbox_usize(v_sz_2575_);
lean_dec(v_sz_2575_);
v_i_boxed_2584_ = lean_unbox_usize(v_i_2576_);
lean_dec(v_i_2576_);
v_res_2585_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(v_fst_2570_, v_projInfo_x3f_2571_, v___x_2572_, v_argVars_2573_, v_as_2574_, v_sz_boxed_2583_, v_i_boxed_2584_, v_b_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
lean_dec(v___y_2579_);
lean_dec_ref(v___y_2578_);
lean_dec_ref(v_as_2574_);
lean_dec_ref(v_argVars_2573_);
lean_dec(v_projInfo_x3f_2571_);
lean_dec_ref(v_fst_2570_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(lean_object* v_next_2586_, lean_object* v_as_2587_, size_t v_i_2588_, size_t v_stop_2589_, lean_object* v_b_2590_){
_start:
{
lean_object* v___y_2592_; uint8_t v___x_2596_; 
v___x_2596_ = lean_usize_dec_eq(v_i_2588_, v_stop_2589_);
if (v___x_2596_ == 0)
{
lean_object* v___x_2597_; uint8_t v___x_2598_; 
v___x_2597_ = lean_array_uget_borrowed(v_as_2587_, v_i_2588_);
v___x_2598_ = lean_nat_dec_eq(v___x_2597_, v_next_2586_);
if (v___x_2598_ == 0)
{
lean_object* v___x_2599_; 
lean_inc(v___x_2597_);
v___x_2599_ = lean_array_push(v_b_2590_, v___x_2597_);
v___y_2592_ = v___x_2599_;
goto v___jp_2591_;
}
else
{
v___y_2592_ = v_b_2590_;
goto v___jp_2591_;
}
}
else
{
return v_b_2590_;
}
v___jp_2591_:
{
size_t v___x_2593_; size_t v___x_2594_; 
v___x_2593_ = ((size_t)1ULL);
v___x_2594_ = lean_usize_add(v_i_2588_, v___x_2593_);
v_i_2588_ = v___x_2594_;
v_b_2590_ = v___y_2592_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0___boxed(lean_object* v_next_2600_, lean_object* v_as_2601_, lean_object* v_i_2602_, lean_object* v_stop_2603_, lean_object* v_b_2604_){
_start:
{
size_t v_i_boxed_2605_; size_t v_stop_boxed_2606_; lean_object* v_res_2607_; 
v_i_boxed_2605_ = lean_unbox_usize(v_i_2602_);
lean_dec(v_i_2602_);
v_stop_boxed_2606_ = lean_unbox_usize(v_stop_2603_);
lean_dec(v_stop_2603_);
v_res_2607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(v_next_2600_, v_as_2601_, v_i_boxed_2605_, v_stop_boxed_2606_, v_b_2604_);
lean_dec_ref(v_as_2601_);
lean_dec(v_next_2600_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(lean_object* v_fst_2608_, lean_object* v___x_2609_, lean_object* v_fst_2610_, lean_object* v_argVars_2611_, lean_object* v_snd_2612_, lean_object* v_next_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_){
_start:
{
lean_object* v___x_2619_; lean_object* v___y_2621_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; uint8_t v___x_2664_; 
lean_inc(v_next_2613_);
v___x_2619_ = lean_array_push(v_fst_2608_, v_next_2613_);
v___x_2661_ = lean_unsigned_to_nat(0u);
v___x_2662_ = lean_array_get_size(v_snd_2612_);
v___x_2663_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_2664_ = lean_nat_dec_lt(v___x_2661_, v___x_2662_);
if (v___x_2664_ == 0)
{
v___y_2621_ = v___x_2663_;
goto v___jp_2620_;
}
else
{
size_t v___x_2665_; size_t v___x_2666_; lean_object* v___x_2667_; 
v___x_2665_ = ((size_t)0ULL);
v___x_2666_ = lean_usize_of_nat(v___x_2662_);
v___x_2667_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__0(v_next_2613_, v_snd_2612_, v___x_2665_, v___x_2666_, v___x_2663_);
v___y_2621_ = v___x_2667_;
goto v___jp_2620_;
}
v___jp_2620_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2622_ = lean_array_get_borrowed(v___x_2609_, v_fst_2610_, v_next_2613_);
lean_dec(v_next_2613_);
lean_inc(v___y_2617_);
lean_inc_ref(v___y_2616_);
lean_inc(v___y_2615_);
lean_inc_ref(v___y_2614_);
lean_inc(v___x_2622_);
v___x_2623_ = lean_infer_type(v___x_2622_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; lean_object* v___x_2625_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
lean_inc(v_a_2624_);
lean_dec_ref_known(v___x_2623_, 1);
v___x_2625_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2610_, v_argVars_2611_, v_a_2624_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_);
if (lean_obj_tag(v___x_2625_) == 0)
{
lean_object* v___x_2626_; 
lean_dec_ref_known(v___x_2625_, 1);
lean_inc(v___x_2622_);
v___x_2626_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_assignMVarsIn(v_fst_2610_, v_argVars_2611_, v___x_2622_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2635_; 
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2635_ == 0)
{
lean_object* v_unused_2636_; 
v_unused_2636_ = lean_ctor_get(v___x_2626_, 0);
lean_dec(v_unused_2636_);
v___x_2628_ = v___x_2626_;
v_isShared_2629_ = v_isSharedCheck_2635_;
goto v_resetjp_2627_;
}
else
{
lean_dec(v___x_2626_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2635_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2633_; 
v___x_2630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2619_);
lean_ctor_set(v___x_2630_, 1, v___y_2621_);
v___x_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2630_);
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 0, v___x_2631_);
v___x_2633_ = v___x_2628_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v___x_2631_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
else
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2644_; 
lean_dec_ref(v___y_2621_);
lean_dec_ref(v___x_2619_);
v_a_2637_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2639_ = v___x_2626_;
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2626_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2642_; 
if (v_isShared_2640_ == 0)
{
v___x_2642_ = v___x_2639_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v_a_2637_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
}
}
else
{
lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2652_; 
lean_dec_ref(v___y_2621_);
lean_dec_ref(v___x_2619_);
v_a_2645_ = lean_ctor_get(v___x_2625_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2647_ = v___x_2625_;
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_dec(v___x_2625_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_a_2645_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
else
{
lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
lean_dec_ref(v___y_2621_);
lean_dec_ref(v___x_2619_);
v_a_2653_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2655_ = v___x_2623_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2623_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2653_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed(lean_object* v_fst_2668_, lean_object* v___x_2669_, lean_object* v_fst_2670_, lean_object* v_argVars_2671_, lean_object* v_snd_2672_, lean_object* v_next_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(v_fst_2668_, v___x_2669_, v_fst_2670_, v_argVars_2671_, v_snd_2672_, v_next_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
lean_dec(v___y_2677_);
lean_dec_ref(v___y_2676_);
lean_dec(v___y_2675_);
lean_dec_ref(v___y_2674_);
lean_dec(v_snd_2672_);
lean_dec_ref(v_argVars_2671_);
lean_dec_ref(v_fst_2670_);
lean_dec_ref(v___x_2669_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(lean_object* v_msgData_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_){
_start:
{
lean_object* v___x_2686_; lean_object* v_env_2687_; uint8_t v___x_2688_; lean_object* v_env_2689_; lean_object* v___x_2690_; lean_object* v_toCold_2691_; lean_object* v_mctx_2692_; lean_object* v_lctx_2693_; lean_object* v_options_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2686_ = lean_st_ref_get(v___y_2684_);
v_env_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc_ref(v_env_2687_);
lean_dec(v___x_2686_);
v___x_2688_ = 0;
v_env_2689_ = l_Lean_Environment_setRecordingDeps(v_env_2687_, v___x_2688_);
v___x_2690_ = lean_st_ref_get(v___y_2682_);
v_toCold_2691_ = lean_ctor_get(v___y_2683_, 0);
v_mctx_2692_ = lean_ctor_get(v___x_2690_, 0);
lean_inc_ref(v_mctx_2692_);
lean_dec(v___x_2690_);
v_lctx_2693_ = lean_ctor_get(v___y_2681_, 2);
v_options_2694_ = lean_ctor_get(v_toCold_2691_, 2);
lean_inc_ref(v_options_2694_);
lean_inc_ref(v_lctx_2693_);
v___x_2695_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2695_, 0, v_env_2689_);
lean_ctor_set(v___x_2695_, 1, v_mctx_2692_);
lean_ctor_set(v___x_2695_, 2, v_lctx_2693_);
lean_ctor_set(v___x_2695_, 3, v_options_2694_);
v___x_2696_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2695_);
lean_ctor_set(v___x_2696_, 1, v_msgData_2680_);
v___x_2697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2696_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7___boxed(lean_object* v_msgData_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_){
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v_msgData_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
lean_dec_ref(v___y_2699_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(lean_object* v_msg_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v_ref_2711_; lean_object* v___x_2712_; lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2721_; 
v_ref_2711_ = lean_ctor_get(v___y_2708_, 2);
v___x_2712_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v_msg_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
v_a_2713_ = lean_ctor_get(v___x_2712_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2715_ = v___x_2712_;
v_isShared_2716_ = v_isSharedCheck_2721_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2712_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2721_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2717_; lean_object* v___x_2719_; 
lean_inc(v_ref_2711_);
v___x_2717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2717_, 0, v_ref_2711_);
lean_ctor_set(v___x_2717_, 1, v_a_2713_);
if (v_isShared_2716_ == 0)
{
lean_ctor_set_tag(v___x_2715_, 1);
lean_ctor_set(v___x_2715_, 0, v___x_2717_);
v___x_2719_ = v___x_2715_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg___boxed(lean_object* v_msg_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_msg_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(lean_object* v_fst_2729_, size_t v_sz_2730_, size_t v_i_2731_, lean_object* v_bs_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
uint8_t v___x_2738_; 
v___x_2738_ = lean_usize_dec_lt(v_i_2731_, v_sz_2730_);
if (v___x_2738_ == 0)
{
lean_object* v___x_2739_; 
v___x_2739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2739_, 0, v_bs_2732_);
return v___x_2739_;
}
else
{
lean_object* v___x_2740_; lean_object* v_v_2741_; lean_object* v___x_2742_; lean_object* v_bs_x27_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; 
v___x_2740_ = l_Lean_instInhabitedExpr;
v_v_2741_ = lean_array_uget(v_bs_2732_, v_i_2731_);
v___x_2742_ = lean_unsigned_to_nat(0u);
v_bs_x27_2743_ = lean_array_uset(v_bs_2732_, v_i_2731_, v___x_2742_);
v___x_2744_ = lean_array_get_borrowed(v___x_2740_, v_fst_2729_, v_v_2741_);
lean_dec(v_v_2741_);
lean_inc(v___y_2736_);
lean_inc_ref(v___y_2735_);
lean_inc(v___y_2734_);
lean_inc_ref(v___y_2733_);
lean_inc(v___x_2744_);
v___x_2745_ = lean_infer_type(v___x_2744_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_);
if (lean_obj_tag(v___x_2745_) == 0)
{
lean_object* v_a_2746_; lean_object* v___x_2747_; 
v_a_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2746_);
lean_dec_ref_known(v___x_2745_, 1);
v___x_2747_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_a_2746_, v___y_2734_);
if (lean_obj_tag(v___x_2747_) == 0)
{
lean_object* v_a_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; size_t v___x_2751_; size_t v___x_2752_; lean_object* v___x_2753_; 
v_a_2748_ = lean_ctor_get(v___x_2747_, 0);
lean_inc(v_a_2748_);
lean_dec_ref_known(v___x_2747_, 1);
v___x_2749_ = l_Lean_Expr_setPPExplicit(v_a_2748_, v___x_2738_);
v___x_2750_ = l_Lean_indentExpr(v___x_2749_);
v___x_2751_ = ((size_t)1ULL);
v___x_2752_ = lean_usize_add(v_i_2731_, v___x_2751_);
v___x_2753_ = lean_array_uset(v_bs_x27_2743_, v_i_2731_, v___x_2750_);
v_i_2731_ = v___x_2752_;
v_bs_2732_ = v___x_2753_;
goto _start;
}
else
{
lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2762_; 
lean_dec_ref(v_bs_x27_2743_);
v_a_2755_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2757_ = v___x_2747_;
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v___x_2747_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2760_; 
if (v_isShared_2758_ == 0)
{
v___x_2760_ = v___x_2757_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v_a_2755_);
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
lean_object* v_a_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
lean_dec_ref(v_bs_x27_2743_);
v_a_2763_ = lean_ctor_get(v___x_2745_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2745_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2765_ = v___x_2745_;
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_a_2763_);
lean_dec(v___x_2745_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2763_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5___boxed(lean_object* v_fst_2771_, lean_object* v_sz_2772_, lean_object* v_i_2773_, lean_object* v_bs_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_){
_start:
{
size_t v_sz_boxed_2780_; size_t v_i_boxed_2781_; lean_object* v_res_2782_; 
v_sz_boxed_2780_ = lean_unbox_usize(v_sz_2772_);
lean_dec(v_sz_2772_);
v_i_boxed_2781_ = lean_unbox_usize(v_i_2773_);
lean_dec(v_i_2773_);
v_res_2782_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(v_fst_2771_, v_sz_boxed_2780_, v_i_boxed_2781_, v_bs_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_);
lean_dec(v___y_2778_);
lean_dec_ref(v___y_2777_);
lean_dec(v___y_2776_);
lean_dec_ref(v___y_2775_);
lean_dec_ref(v_fst_2771_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(lean_object* v___x_2783_, lean_object* v_snd_2784_, lean_object* v___f_2785_, lean_object* v_____r_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_){
_start:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2792_ = lean_unsigned_to_nat(0u);
v___x_2793_ = lean_array_get_borrowed(v___x_2783_, v_snd_2784_, v___x_2792_);
lean_inc(v___y_2790_);
lean_inc_ref(v___y_2789_);
lean_inc(v___y_2788_);
lean_inc_ref(v___y_2787_);
lean_inc(v___x_2793_);
v___x_2794_ = lean_apply_6(v___f_2785_, v___x_2793_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, lean_box(0));
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1___boxed(lean_object* v___x_2795_, lean_object* v_snd_2796_, lean_object* v___f_2797_, lean_object* v_____r_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_){
_start:
{
lean_object* v_res_2804_; 
v_res_2804_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2795_, v_snd_2796_, v___f_2797_, v_____r_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
lean_dec(v___y_2802_);
lean_dec_ref(v___y_2801_);
lean_dec(v___y_2800_);
lean_dec_ref(v___y_2799_);
lean_dec(v_snd_2796_);
lean_dec(v___x_2795_);
return v_res_2804_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; 
v___x_2808_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__1));
v___x_2809_ = l_Lean_MessageData_ofFormat(v___x_2808_);
return v___x_2809_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2811_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__3));
v___x_2812_ = l_Lean_stringToMessageData(v___x_2811_);
return v___x_2812_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6(void){
_start:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__5));
v___x_2815_ = l_Lean_stringToMessageData(v___x_2814_);
return v___x_2815_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8(void){
_start:
{
lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2817_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__7));
v___x_2818_ = l_Lean_stringToMessageData(v___x_2817_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(lean_object* v_fst_2819_, lean_object* v_argVars_2820_, lean_object* v_inst_2821_, lean_object* v_a_2822_, lean_object* v_projInfo_x3f_2823_, lean_object* v_a_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v___y_2831_; lean_object* v_fst_2851_; lean_object* v_snd_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2924_; 
v_fst_2851_ = lean_ctor_get(v_a_2824_, 0);
v_snd_2852_ = lean_ctor_get(v_a_2824_, 1);
v_isSharedCheck_2924_ = !lean_is_exclusive(v_a_2824_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2854_ = v_a_2824_;
v_isShared_2855_ = v_isSharedCheck_2924_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_snd_2852_);
lean_inc(v_fst_2851_);
lean_dec(v_a_2824_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2924_;
goto v_resetjp_2853_;
}
v___jp_2830_:
{
if (lean_obj_tag(v___y_2831_) == 0)
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2842_; 
v_a_2832_ = lean_ctor_get(v___y_2831_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___y_2831_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2834_ = v___y_2831_;
v_isShared_2835_ = v_isSharedCheck_2842_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___y_2831_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2842_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
if (lean_obj_tag(v_a_2832_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2838_; 
lean_dec_ref(v_a_2822_);
lean_dec_ref(v_inst_2821_);
lean_dec_ref(v_argVars_2820_);
lean_dec_ref(v_fst_2819_);
v_a_2836_ = lean_ctor_get(v_a_2832_, 0);
lean_inc(v_a_2836_);
lean_dec_ref_known(v_a_2832_, 1);
if (v_isShared_2835_ == 0)
{
lean_ctor_set(v___x_2834_, 0, v_a_2836_);
v___x_2838_ = v___x_2834_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2836_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
else
{
lean_object* v_a_2840_; 
lean_del_object(v___x_2834_);
v_a_2840_ = lean_ctor_get(v_a_2832_, 0);
lean_inc(v_a_2840_);
lean_dec_ref_known(v_a_2832_, 1);
v_a_2824_ = v_a_2840_;
goto _start;
}
}
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2850_; 
lean_dec_ref(v_a_2822_);
lean_dec_ref(v_inst_2821_);
lean_dec_ref(v_argVars_2820_);
lean_dec_ref(v_fst_2819_);
v_a_2843_ = lean_ctor_get(v___y_2831_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___y_2831_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2845_ = v___y_2831_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___y_2831_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2848_; 
if (v_isShared_2846_ == 0)
{
v___x_2848_ = v___x_2845_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2843_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
}
}
v_resetjp_2853_:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; uint8_t v___x_2858_; 
v___x_2856_ = lean_array_get_size(v_snd_2852_);
v___x_2857_ = lean_unsigned_to_nat(0u);
v___x_2858_ = lean_nat_dec_eq(v___x_2856_, v___x_2857_);
if (v___x_2858_ == 0)
{
lean_object* v___x_2859_; lean_object* v___f_2860_; lean_object* v___x_2903_; size_t v_sz_2904_; size_t v___x_2905_; lean_object* v___x_2906_; 
lean_del_object(v___x_2854_);
v___x_2859_ = l_Lean_instInhabitedExpr;
lean_inc(v_snd_2852_);
lean_inc_ref(v_argVars_2820_);
lean_inc_ref(v_fst_2819_);
lean_inc(v_fst_2851_);
v___f_2860_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_2860_, 0, v_fst_2851_);
lean_closure_set(v___f_2860_, 1, v___x_2859_);
lean_closure_set(v___f_2860_, 2, v_fst_2819_);
lean_closure_set(v___f_2860_, 3, v_argVars_2820_);
lean_closure_set(v___f_2860_, 4, v_snd_2852_);
v___x_2903_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___closed__0));
v_sz_2904_ = lean_array_size(v_snd_2852_);
v___x_2905_ = ((size_t)0ULL);
v___x_2906_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7(v_fst_2819_, v_projInfo_x3f_2823_, v___x_2856_, v_argVars_2820_, v_snd_2852_, v_sz_2904_, v___x_2905_, v___x_2903_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
if (lean_obj_tag(v___x_2906_) == 0)
{
lean_object* v_a_2907_; lean_object* v_fst_2908_; 
v_a_2907_ = lean_ctor_get(v___x_2906_, 0);
lean_inc(v_a_2907_);
lean_dec_ref_known(v___x_2906_, 1);
v_fst_2908_ = lean_ctor_get(v_a_2907_, 0);
lean_inc(v_fst_2908_);
lean_dec(v_a_2907_);
if (lean_obj_tag(v_fst_2908_) == 0)
{
lean_dec(v_fst_2851_);
goto v___jp_2861_;
}
else
{
lean_object* v_val_2909_; 
v_val_2909_ = lean_ctor_get(v_fst_2908_, 0);
lean_inc(v_val_2909_);
lean_dec_ref_known(v_fst_2908_, 1);
if (lean_obj_tag(v_val_2909_) == 0)
{
lean_dec(v_fst_2851_);
goto v___jp_2861_;
}
else
{
lean_object* v_val_2910_; lean_object* v___x_2911_; 
lean_dec_ref(v___f_2860_);
v_val_2910_ = lean_ctor_get(v_val_2909_, 0);
lean_inc(v_val_2910_);
lean_dec_ref_known(v_val_2909_, 1);
v___x_2911_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__0(v_fst_2851_, v___x_2859_, v_fst_2819_, v_argVars_2820_, v_snd_2852_, v_val_2910_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
lean_dec(v_snd_2852_);
v___y_2831_ = v___x_2911_;
goto v___jp_2830_;
}
}
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec_ref(v___f_2860_);
lean_dec(v_snd_2852_);
lean_dec(v_fst_2851_);
lean_dec_ref(v_a_2822_);
lean_dec_ref(v_inst_2821_);
lean_dec_ref(v_argVars_2820_);
lean_dec_ref(v_fst_2819_);
v_a_2912_ = lean_ctor_get(v___x_2906_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2906_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2906_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2906_);
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
v___jp_2861_:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; uint8_t v___x_2864_; 
v___x_2862_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2827_);
v___x_2863_ = l_Lean_Meta_synthInstance_checkSynthOrder;
v___x_2864_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v___x_2862_, v___x_2863_);
lean_dec_ref(v___x_2862_);
if (v___x_2864_ == 0)
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = lean_box(0);
v___x_2866_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2857_, v_snd_2852_, v___f_2860_, v___x_2865_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
lean_dec(v_snd_2852_);
v___y_2831_ = v___x_2866_;
goto v___jp_2830_;
}
else
{
size_t v_sz_2867_; size_t v___x_2868_; lean_object* v___x_2869_; 
v_sz_2867_ = lean_array_size(v_snd_2852_);
v___x_2868_ = ((size_t)0ULL);
lean_inc(v_snd_2852_);
v___x_2869_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__5(v_fst_2819_, v_sz_2867_, v___x_2868_, v_snd_2852_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
lean_inc(v_a_2870_);
lean_dec_ref_known(v___x_2869_, 1);
v___x_2871_ = lean_array_to_list(v_a_2870_);
v___x_2872_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2);
v___x_2873_ = l_Lean_MessageData_joinSep(v___x_2871_, v___x_2872_);
v___x_2874_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__4);
lean_inc_ref(v_inst_2821_);
v___x_2875_ = l_Lean_MessageData_ofExpr(v_inst_2821_);
v___x_2876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2874_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__6);
v___x_2878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2876_);
lean_ctor_set(v___x_2878_, 1, v___x_2877_);
lean_inc_ref(v_a_2822_);
v___x_2879_ = l_Lean_indentExpr(v_a_2822_);
v___x_2880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2878_);
lean_ctor_set(v___x_2880_, 1, v___x_2879_);
v___x_2881_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__8);
v___x_2882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2880_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
v___x_2883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
lean_ctor_set(v___x_2883_, 1, v___x_2873_);
v___x_2884_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_2883_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; lean_object* v___x_2886_; 
v_a_2885_ = lean_ctor_get(v___x_2884_, 0);
lean_inc(v_a_2885_);
lean_dec_ref_known(v___x_2884_, 1);
v___x_2886_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___lam__1(v___x_2857_, v_snd_2852_, v___f_2860_, v_a_2885_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
lean_dec(v_snd_2852_);
v___y_2831_ = v___x_2886_;
goto v___jp_2830_;
}
else
{
lean_object* v_a_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2894_; 
lean_dec_ref(v___f_2860_);
lean_dec(v_snd_2852_);
lean_dec_ref(v_a_2822_);
lean_dec_ref(v_inst_2821_);
lean_dec_ref(v_argVars_2820_);
lean_dec_ref(v_fst_2819_);
v_a_2887_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2889_ = v___x_2884_;
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_a_2887_);
lean_dec(v___x_2884_);
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
lean_object* v_a_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2902_; 
lean_dec_ref(v___f_2860_);
lean_dec(v_snd_2852_);
lean_dec_ref(v_a_2822_);
lean_dec_ref(v_inst_2821_);
lean_dec_ref(v_argVars_2820_);
lean_dec_ref(v_fst_2819_);
v_a_2895_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2897_ = v___x_2869_;
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_a_2895_);
lean_dec(v___x_2869_);
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
}
}
else
{
lean_object* v___x_2921_; 
lean_dec_ref(v_a_2822_);
lean_dec_ref(v_inst_2821_);
lean_dec_ref(v_argVars_2820_);
lean_dec_ref(v_fst_2819_);
if (v_isShared_2855_ == 0)
{
v___x_2921_ = v___x_2854_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v_fst_2851_);
lean_ctor_set(v_reuseFailAlloc_2923_, 1, v_snd_2852_);
v___x_2921_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
lean_object* v___x_2922_; 
v___x_2922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2921_);
return v___x_2922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___boxed(lean_object* v_fst_2925_, lean_object* v_argVars_2926_, lean_object* v_inst_2927_, lean_object* v_a_2928_, lean_object* v_projInfo_x3f_2929_, lean_object* v_a_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_2925_, v_argVars_2926_, v_inst_2927_, v_a_2928_, v_projInfo_x3f_2929_, v_a_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
lean_dec(v_projInfo_x3f_2929_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(lean_object* v_fst_2937_, lean_object* v_a_2938_, lean_object* v_a_2939_){
_start:
{
if (lean_obj_tag(v_a_2938_) == 0)
{
lean_object* v___x_2940_; 
v___x_2940_ = l_List_reverse___redArg(v_a_2939_);
return v___x_2940_;
}
else
{
lean_object* v_head_2941_; lean_object* v_tail_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2957_; 
v_head_2941_ = lean_ctor_get(v_a_2938_, 0);
v_tail_2942_ = lean_ctor_get(v_a_2938_, 1);
v_isSharedCheck_2957_ = !lean_is_exclusive(v_a_2938_);
if (v_isSharedCheck_2957_ == 0)
{
v___x_2944_ = v_a_2938_;
v_isShared_2945_ = v_isSharedCheck_2957_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_tail_2942_);
lean_inc(v_head_2941_);
lean_dec(v_a_2938_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2957_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
uint8_t v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; uint8_t v___x_2949_; uint8_t v___x_2950_; uint8_t v___x_2951_; 
v___x_2946_ = 0;
v___x_2947_ = lean_box(v___x_2946_);
v___x_2948_ = lean_array_get(v___x_2947_, v_fst_2937_, v_head_2941_);
lean_dec(v___x_2947_);
v___x_2949_ = 3;
v___x_2950_ = lean_unbox(v___x_2948_);
lean_dec(v___x_2948_);
v___x_2951_ = l_Lean_instBEqBinderInfo_beq(v___x_2950_, v___x_2949_);
if (v___x_2951_ == 0)
{
lean_del_object(v___x_2944_);
lean_dec(v_head_2941_);
v_a_2938_ = v_tail_2942_;
goto _start;
}
else
{
lean_object* v___x_2954_; 
if (v_isShared_2945_ == 0)
{
lean_ctor_set(v___x_2944_, 1, v_a_2939_);
v___x_2954_ = v___x_2944_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_head_2941_);
lean_ctor_set(v_reuseFailAlloc_2956_, 1, v_a_2939_);
v___x_2954_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
v_a_2938_ = v_tail_2942_;
v_a_2939_ = v___x_2954_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9___boxed(lean_object* v_fst_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(v_fst_2958_, v_a_2959_, v_a_2960_);
lean_dec_ref(v_fst_2958_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(lean_object* v_argVars_2962_, size_t v_sz_2963_, size_t v_i_2964_, lean_object* v_bs_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_){
_start:
{
uint8_t v___x_2971_; 
v___x_2971_ = lean_usize_dec_lt(v_i_2964_, v_sz_2963_);
if (v___x_2971_ == 0)
{
lean_object* v___x_2972_; 
v___x_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2972_, 0, v_bs_2965_);
return v___x_2972_;
}
else
{
lean_object* v___x_2973_; lean_object* v_v_2974_; lean_object* v___x_2975_; lean_object* v_bs_x27_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2973_ = l_Lean_instInhabitedExpr;
v_v_2974_ = lean_array_uget(v_bs_2965_, v_i_2964_);
v___x_2975_ = lean_unsigned_to_nat(0u);
v_bs_x27_2976_ = lean_array_uset(v_bs_2965_, v_i_2964_, v___x_2975_);
v___x_2977_ = lean_array_get_borrowed(v___x_2973_, v_argVars_2962_, v_v_2974_);
lean_dec(v_v_2974_);
lean_inc(v___y_2969_);
lean_inc_ref(v___y_2968_);
lean_inc(v___y_2967_);
lean_inc_ref(v___y_2966_);
lean_inc(v___x_2977_);
v___x_2978_ = lean_infer_type(v___x_2977_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; lean_object* v___x_2980_; size_t v___x_2981_; size_t v___x_2982_; lean_object* v___x_2983_; 
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2979_);
lean_dec_ref_known(v___x_2978_, 1);
v___x_2980_ = l_Lean_indentExpr(v_a_2979_);
v___x_2981_ = ((size_t)1ULL);
v___x_2982_ = lean_usize_add(v_i_2964_, v___x_2981_);
v___x_2983_ = lean_array_uset(v_bs_x27_2976_, v_i_2964_, v___x_2980_);
v_i_2964_ = v___x_2982_;
v_bs_2965_ = v___x_2983_;
goto _start;
}
else
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2992_; 
lean_dec_ref(v_bs_x27_2976_);
v_a_2985_ = lean_ctor_get(v___x_2978_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2987_ = v___x_2978_;
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2978_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2985_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11___boxed(lean_object* v_argVars_2993_, lean_object* v_sz_2994_, lean_object* v_i_2995_, lean_object* v_bs_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_){
_start:
{
size_t v_sz_boxed_3002_; size_t v_i_boxed_3003_; lean_object* v_res_3004_; 
v_sz_boxed_3002_ = lean_unbox_usize(v_sz_2994_);
lean_dec(v_sz_2994_);
v_i_boxed_3003_ = lean_unbox_usize(v_i_2995_);
lean_dec(v_i_2995_);
v_res_3004_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(v_argVars_2993_, v_sz_boxed_3002_, v_i_boxed_3003_, v_bs_2996_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
lean_dec(v___y_2998_);
lean_dec_ref(v___y_2997_);
lean_dec_ref(v_argVars_2993_);
return v_res_3004_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(lean_object* v_a_3005_, lean_object* v_a_3006_){
_start:
{
if (lean_obj_tag(v_a_3005_) == 0)
{
lean_object* v___x_3007_; 
v___x_3007_ = l_List_reverse___redArg(v_a_3006_);
return v___x_3007_;
}
else
{
lean_object* v_head_3008_; lean_object* v_tail_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3020_; 
v_head_3008_ = lean_ctor_get(v_a_3005_, 0);
v_tail_3009_ = lean_ctor_get(v_a_3005_, 1);
v_isSharedCheck_3020_ = !lean_is_exclusive(v_a_3005_);
if (v_isSharedCheck_3020_ == 0)
{
v___x_3011_ = v_a_3005_;
v_isShared_3012_ = v_isSharedCheck_3020_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_tail_3009_);
lean_inc(v_head_3008_);
lean_dec(v_a_3005_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3020_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3017_; 
v___x_3013_ = l_Nat_reprFast(v_head_3008_);
v___x_3014_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3013_);
v___x_3015_ = l_Lean_MessageData_ofFormat(v___x_3014_);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 1, v_a_3006_);
lean_ctor_set(v___x_3011_, 0, v___x_3015_);
v___x_3017_ = v___x_3011_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v___x_3015_);
lean_ctor_set(v_reuseFailAlloc_3019_, 1, v_a_3006_);
v___x_3017_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
v_a_3005_ = v_tail_3009_;
v_a_3006_ = v___x_3017_;
goto _start;
}
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0(void){
_start:
{
lean_object* v___x_3021_; double v___x_3022_; 
v___x_3021_ = lean_unsigned_to_nat(0u);
v___x_3022_ = lean_float_of_nat(v___x_3021_);
return v___x_3022_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(lean_object* v_cls_3025_, lean_object* v_msg_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_){
_start:
{
lean_object* v_ref_3032_; lean_object* v___x_3033_; lean_object* v_a_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3079_; 
v_ref_3032_ = lean_ctor_get(v___y_3029_, 2);
v___x_3033_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v_msg_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_);
v_a_3034_ = lean_ctor_get(v___x_3033_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3033_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3036_ = v___x_3033_;
v_isShared_3037_ = v_isSharedCheck_3079_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_a_3034_);
lean_dec(v___x_3033_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3079_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
lean_object* v___x_3038_; lean_object* v_traceState_3039_; lean_object* v_env_3040_; lean_object* v_nextMacroScope_3041_; lean_object* v_ngen_3042_; lean_object* v_auxDeclNGen_3043_; lean_object* v_cache_3044_; lean_object* v_recordedDeps_3045_; lean_object* v_messages_3046_; lean_object* v_infoState_3047_; lean_object* v_snapshotTasks_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3078_; 
v___x_3038_ = lean_st_ref_take(v___y_3030_);
v_traceState_3039_ = lean_ctor_get(v___x_3038_, 4);
v_env_3040_ = lean_ctor_get(v___x_3038_, 0);
v_nextMacroScope_3041_ = lean_ctor_get(v___x_3038_, 1);
v_ngen_3042_ = lean_ctor_get(v___x_3038_, 2);
v_auxDeclNGen_3043_ = lean_ctor_get(v___x_3038_, 3);
v_cache_3044_ = lean_ctor_get(v___x_3038_, 5);
v_recordedDeps_3045_ = lean_ctor_get(v___x_3038_, 6);
v_messages_3046_ = lean_ctor_get(v___x_3038_, 7);
v_infoState_3047_ = lean_ctor_get(v___x_3038_, 8);
v_snapshotTasks_3048_ = lean_ctor_get(v___x_3038_, 9);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3038_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3050_ = v___x_3038_;
v_isShared_3051_ = v_isSharedCheck_3078_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_snapshotTasks_3048_);
lean_inc(v_infoState_3047_);
lean_inc(v_messages_3046_);
lean_inc(v_recordedDeps_3045_);
lean_inc(v_cache_3044_);
lean_inc(v_traceState_3039_);
lean_inc(v_auxDeclNGen_3043_);
lean_inc(v_ngen_3042_);
lean_inc(v_nextMacroScope_3041_);
lean_inc(v_env_3040_);
lean_dec(v___x_3038_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3078_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
uint64_t v_tid_3052_; lean_object* v_traces_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3077_; 
v_tid_3052_ = lean_ctor_get_uint64(v_traceState_3039_, sizeof(void*)*1);
v_traces_3053_ = lean_ctor_get(v_traceState_3039_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v_traceState_3039_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3055_ = v_traceState_3039_;
v_isShared_3056_ = v_isSharedCheck_3077_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_traces_3053_);
lean_dec(v_traceState_3039_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3077_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; double v___x_3059_; uint8_t v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3068_; 
v___x_3057_ = lean_box(0);
v___x_3058_ = lean_box(0);
v___x_3059_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__0);
v___x_3060_ = 0;
v___x_3061_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
v___x_3062_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3062_, 0, v_cls_3025_);
lean_ctor_set(v___x_3062_, 1, v___x_3058_);
lean_ctor_set(v___x_3062_, 2, v___x_3061_);
lean_ctor_set_float(v___x_3062_, sizeof(void*)*3, v___x_3059_);
lean_ctor_set_float(v___x_3062_, sizeof(void*)*3 + 8, v___x_3059_);
lean_ctor_set_uint8(v___x_3062_, sizeof(void*)*3 + 16, v___x_3060_);
v___x_3063_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___closed__1));
v___x_3064_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3064_, 0, v___x_3062_);
lean_ctor_set(v___x_3064_, 1, v_a_3034_);
lean_ctor_set(v___x_3064_, 2, v___x_3063_);
lean_inc(v_ref_3032_);
v___x_3065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3065_, 0, v_ref_3032_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
v___x_3066_ = l_Lean_PersistentArray_push___redArg(v_traces_3053_, v___x_3065_);
if (v_isShared_3056_ == 0)
{
lean_ctor_set(v___x_3055_, 0, v___x_3066_);
v___x_3068_ = v___x_3055_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v___x_3066_);
lean_ctor_set_uint64(v_reuseFailAlloc_3076_, sizeof(void*)*1, v_tid_3052_);
v___x_3068_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
lean_object* v___x_3070_; 
if (v_isShared_3051_ == 0)
{
lean_ctor_set(v___x_3050_, 4, v___x_3068_);
v___x_3070_ = v___x_3050_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_env_3040_);
lean_ctor_set(v_reuseFailAlloc_3075_, 1, v_nextMacroScope_3041_);
lean_ctor_set(v_reuseFailAlloc_3075_, 2, v_ngen_3042_);
lean_ctor_set(v_reuseFailAlloc_3075_, 3, v_auxDeclNGen_3043_);
lean_ctor_set(v_reuseFailAlloc_3075_, 4, v___x_3068_);
lean_ctor_set(v_reuseFailAlloc_3075_, 5, v_cache_3044_);
lean_ctor_set(v_reuseFailAlloc_3075_, 6, v_recordedDeps_3045_);
lean_ctor_set(v_reuseFailAlloc_3075_, 7, v_messages_3046_);
lean_ctor_set(v_reuseFailAlloc_3075_, 8, v_infoState_3047_);
lean_ctor_set(v_reuseFailAlloc_3075_, 9, v_snapshotTasks_3048_);
v___x_3070_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
lean_object* v___x_3071_; lean_object* v___x_3073_; 
v___x_3071_ = lean_st_ref_put(v___y_3030_, v___x_3070_);
if (v_isShared_3037_ == 0)
{
lean_ctor_set(v___x_3036_, 0, v___x_3057_);
v___x_3073_ = v___x_3036_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v___x_3057_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13___boxed(lean_object* v_cls_3080_, lean_object* v_msg_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_){
_start:
{
lean_object* v_res_3087_; 
v_res_3087_ = l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(v_cls_3080_, v_msg_3081_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_);
lean_dec(v___y_3085_);
lean_dec_ref(v___y_3084_);
lean_dec(v___y_3083_);
lean_dec_ref(v___y_3082_);
return v_res_3087_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v___x_3095_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_3096_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__3));
v___x_3097_ = l_Lean_Name_append(v___x_3096_, v___x_3095_);
return v___x_3097_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3099_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__5));
v___x_3100_ = l_Lean_stringToMessageData(v___x_3099_);
return v___x_3100_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8(void){
_start:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3102_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__7));
v___x_3103_ = l_Lean_stringToMessageData(v___x_3102_);
return v___x_3103_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10(void){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3105_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__9));
v___x_3106_ = l_Lean_stringToMessageData(v___x_3105_);
return v___x_3106_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12(void){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3108_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__11));
v___x_3109_ = l_Lean_stringToMessageData(v___x_3108_);
return v___x_3109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(lean_object* v_a_3110_, lean_object* v_fst_3111_, lean_object* v_fst_3112_, lean_object* v_inst_3113_, lean_object* v_a_3114_, lean_object* v_projInfo_x3f_3115_, lean_object* v_argVars_3116_, lean_object* v_x_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_){
_start:
{
lean_object* v___x_3123_; 
v___x_3123_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf(v_a_3110_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v_dummy_3125_; lean_object* v_nargs_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; size_t v_sz_3134_; size_t v___x_3135_; lean_object* v___x_3136_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref_known(v___x_3123_, 1);
v_dummy_3125_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__7___lam__0___closed__0);
v_nargs_3126_ = l_Lean_Expr_getAppNumArgs(v_a_3110_);
lean_inc(v_nargs_3126_);
v___x_3127_ = lean_mk_array(v_nargs_3126_, v_dummy_3125_);
v___x_3128_ = lean_unsigned_to_nat(1u);
v___x_3129_ = lean_nat_sub(v_nargs_3126_, v___x_3128_);
lean_dec(v_nargs_3126_);
lean_inc_ref(v_a_3110_);
v___x_3130_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_3110_, v___x_3127_, v___x_3129_);
v___x_3131_ = lean_array_get_size(v___x_3130_);
v___x_3132_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__0));
v___x_3133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3132_);
lean_ctor_set(v___x_3133_, 1, v___x_3131_);
v_sz_3134_ = lean_array_size(v___x_3130_);
v___x_3135_ = ((size_t)0ULL);
v___x_3136_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__8(v_a_3124_, v_fst_3111_, v_argVars_3116_, v___x_3130_, v_sz_3134_, v___x_3135_, v___x_3133_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_);
lean_dec_ref(v___x_3130_);
lean_dec(v_a_3124_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
lean_dec_ref_known(v___x_3136_, 1);
v___x_3137_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf___lam__0___closed__1));
v___x_3138_ = lean_array_get_size(v_fst_3111_);
v___x_3139_ = l_List_range(v___x_3138_);
v___x_3140_ = lean_box(0);
v___x_3141_ = l_List_filterTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__9(v_fst_3112_, v___x_3139_, v___x_3140_);
v___x_3142_ = lean_array_mk(v___x_3141_);
v___x_3143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3137_);
lean_ctor_set(v___x_3143_, 1, v___x_3142_);
lean_inc_ref(v_inst_3113_);
lean_inc_ref(v_argVars_3116_);
v___x_3144_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_3111_, v_argVars_3116_, v_inst_3113_, v_a_3114_, v_projInfo_x3f_3115_, v___x_3143_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_);
if (lean_obj_tag(v___x_3144_) == 0)
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3237_; 
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3237_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3147_ = v___x_3144_;
v_isShared_3148_ = v_isSharedCheck_3237_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3144_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3237_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v_fst_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3235_; 
v_fst_3149_ = lean_ctor_get(v_a_3145_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v_a_3145_);
if (v_isSharedCheck_3235_ == 0)
{
lean_object* v_unused_3236_; 
v_unused_3236_ = lean_ctor_get(v_a_3145_, 1);
lean_dec(v_unused_3236_);
v___x_3151_ = v_a_3145_;
v_isShared_3152_ = v_isSharedCheck_3235_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_fst_3149_);
lean_dec(v_a_3145_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3235_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v___x_3216_; lean_object* v___x_3217_; uint8_t v___x_3218_; 
v___x_3216_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3120_);
v___x_3217_ = l_Lean_Meta_synthInstance_checkSynthOrder;
v___x_3218_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v___x_3216_, v___x_3217_);
lean_dec_ref(v___x_3216_);
if (v___x_3218_ == 0)
{
lean_dec_ref(v_a_3110_);
v___y_3154_ = v___y_3118_;
v___y_3155_ = v___y_3119_;
v___y_3156_ = v___y_3120_;
v___y_3157_ = v___y_3121_;
goto v___jp_3153_;
}
else
{
lean_object* v___x_3219_; lean_object* v_a_3220_; uint8_t v___x_3221_; 
v___x_3219_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__3___redArg(v_a_3110_, v___y_3119_);
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3220_);
lean_dec_ref(v___x_3219_);
v___x_3221_ = l_Lean_Expr_hasExprMVar(v_a_3220_);
if (v___x_3221_ == 0)
{
lean_dec(v_a_3220_);
v___y_3154_ = v___y_3118_;
v___y_3155_ = v___y_3119_;
v___y_3156_ = v___y_3120_;
v___y_3157_ = v___y_3121_;
goto v___jp_3153_;
}
else
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_del_object(v___x_3151_);
lean_dec(v_fst_3149_);
lean_del_object(v___x_3147_);
lean_dec_ref(v_argVars_3116_);
lean_dec_ref(v_inst_3113_);
v___x_3222_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__12);
v___x_3223_ = l_Lean_Expr_setPPExplicit(v_a_3220_, v___x_3218_);
v___x_3224_ = l_Lean_indentExpr(v___x_3223_);
v___x_3225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3222_);
lean_ctor_set(v___x_3225_, 1, v___x_3224_);
v___x_3226_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_3225_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_);
v_a_3227_ = lean_ctor_get(v___x_3226_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3226_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3226_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3226_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
v___jp_3153_:
{
lean_object* v_toCold_3158_; lean_object* v_options_3159_; uint8_t v_hasTrace_3160_; 
v_toCold_3158_ = lean_ctor_get(v___y_3156_, 0);
v_options_3159_ = lean_ctor_get(v_toCold_3158_, 2);
v_hasTrace_3160_ = lean_ctor_get_uint8(v_options_3159_, sizeof(void*)*1);
if (v_hasTrace_3160_ == 0)
{
lean_object* v___x_3162_; 
lean_del_object(v___x_3151_);
lean_dec_ref(v_argVars_3116_);
lean_dec_ref(v_inst_3113_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 0, v_fst_3149_);
v___x_3162_ = v___x_3147_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_fst_3149_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; uint8_t v___x_3167_; 
v_inheritedTraceOptions_3164_ = lean_ctor_get(v_toCold_3158_, 11);
v___x_3165_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_3166_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__4);
v___x_3167_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3164_, v_options_3159_, v___x_3166_);
if (v___x_3167_ == 0)
{
lean_object* v___x_3169_; 
lean_del_object(v___x_3151_);
lean_dec_ref(v_argVars_3116_);
lean_dec_ref(v_inst_3113_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 0, v_fst_3149_);
v___x_3169_ = v___x_3147_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v_fst_3149_);
v___x_3169_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
return v___x_3169_;
}
}
else
{
size_t v_sz_3171_; lean_object* v___x_3172_; 
lean_del_object(v___x_3147_);
v_sz_3171_ = lean_array_size(v_fst_3149_);
lean_inc(v_fst_3149_);
v___x_3172_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__11(v_argVars_3116_, v_sz_3171_, v___x_3135_, v_fst_3149_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_);
lean_dec_ref(v_argVars_3116_);
if (lean_obj_tag(v___x_3172_) == 0)
{
lean_object* v_a_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3177_; 
v_a_3173_ = lean_ctor_get(v___x_3172_, 0);
lean_inc(v_a_3173_);
lean_dec_ref_known(v___x_3172_, 1);
v___x_3174_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__6);
v___x_3175_ = l_Lean_MessageData_ofExpr(v_inst_3113_);
if (v_isShared_3152_ == 0)
{
lean_ctor_set_tag(v___x_3151_, 7);
lean_ctor_set(v___x_3151_, 1, v___x_3175_);
lean_ctor_set(v___x_3151_, 0, v___x_3174_);
v___x_3177_ = v___x_3151_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v___x_3174_);
lean_ctor_set(v_reuseFailAlloc_3207_, 1, v___x_3175_);
v___x_3177_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3178_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__8);
v___x_3179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3177_);
lean_ctor_set(v___x_3179_, 1, v___x_3178_);
lean_inc(v_fst_3149_);
v___x_3180_ = lean_array_to_list(v_fst_3149_);
v___x_3181_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__12(v___x_3180_, v___x_3140_);
v___x_3182_ = l_Lean_MessageData_ofList(v___x_3181_);
v___x_3183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3179_);
lean_ctor_set(v___x_3183_, 1, v___x_3182_);
v___x_3184_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10, &l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10_once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__10);
v___x_3185_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3183_);
lean_ctor_set(v___x_3185_, 1, v___x_3184_);
v___x_3186_ = lean_array_to_list(v_a_3173_);
v___x_3187_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__2);
v___x_3188_ = l_Lean_MessageData_joinSep(v___x_3186_, v___x_3187_);
v___x_3189_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3185_);
lean_ctor_set(v___x_3189_, 1, v___x_3188_);
v___x_3190_ = l_Lean_addTrace___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__13(v___x_3165_, v___x_3189_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_);
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3197_; 
v_isSharedCheck_3197_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3197_ == 0)
{
lean_object* v_unused_3198_; 
v_unused_3198_ = lean_ctor_get(v___x_3190_, 0);
lean_dec(v_unused_3198_);
v___x_3192_ = v___x_3190_;
v_isShared_3193_ = v_isSharedCheck_3197_;
goto v_resetjp_3191_;
}
else
{
lean_dec(v___x_3190_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3197_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v___x_3195_; 
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 0, v_fst_3149_);
v___x_3195_ = v___x_3192_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v_fst_3149_);
v___x_3195_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
return v___x_3195_;
}
}
}
else
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3206_; 
lean_dec(v_fst_3149_);
v_a_3199_ = lean_ctor_get(v___x_3190_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3201_ = v___x_3190_;
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3190_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3204_; 
if (v_isShared_3202_ == 0)
{
v___x_3204_ = v___x_3201_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_3199_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
lean_del_object(v___x_3151_);
lean_dec(v_fst_3149_);
lean_dec_ref(v_inst_3113_);
v_a_3208_ = lean_ctor_get(v___x_3172_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3172_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3172_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3172_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
v___x_3213_ = v___x_3210_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
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
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3245_; 
lean_dec_ref(v_argVars_3116_);
lean_dec_ref(v_inst_3113_);
lean_dec_ref(v_a_3110_);
v_a_3238_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3245_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3245_ == 0)
{
v___x_3240_ = v___x_3144_;
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3144_);
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
lean_object* v_a_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3253_; 
lean_dec_ref(v_argVars_3116_);
lean_dec_ref(v_a_3114_);
lean_dec_ref(v_inst_3113_);
lean_dec_ref(v_fst_3111_);
lean_dec_ref(v_a_3110_);
v_a_3246_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3248_ = v___x_3136_;
v_isShared_3249_ = v_isSharedCheck_3253_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_a_3246_);
lean_dec(v___x_3136_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3253_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v___x_3251_; 
if (v_isShared_3249_ == 0)
{
v___x_3251_ = v___x_3248_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v_a_3246_);
v___x_3251_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
return v___x_3251_;
}
}
}
}
else
{
lean_dec_ref(v_argVars_3116_);
lean_dec_ref(v_a_3114_);
lean_dec_ref(v_inst_3113_);
lean_dec_ref(v_fst_3111_);
lean_dec_ref(v_a_3110_);
return v___x_3123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed(lean_object* v_a_3254_, lean_object* v_fst_3255_, lean_object* v_fst_3256_, lean_object* v_inst_3257_, lean_object* v_a_3258_, lean_object* v_projInfo_x3f_3259_, lean_object* v_argVars_3260_, lean_object* v_x_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_){
_start:
{
lean_object* v_res_3267_; 
v_res_3267_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0(v_a_3254_, v_fst_3255_, v_fst_3256_, v_inst_3257_, v_a_3258_, v_projInfo_x3f_3259_, v_argVars_3260_, v_x_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_);
lean_dec(v___y_3265_);
lean_dec_ref(v___y_3264_);
lean_dec(v___y_3263_);
lean_dec_ref(v___y_3262_);
lean_dec_ref(v_x_3261_);
lean_dec(v_projInfo_x3f_3259_);
lean_dec_ref(v_fst_3256_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(lean_object* v_inst_3268_, lean_object* v_projInfo_x3f_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v___x_3275_; 
lean_inc(v___y_3273_);
lean_inc_ref(v___y_3272_);
lean_inc(v___y_3271_);
lean_inc_ref(v___y_3270_);
lean_inc_ref(v_inst_3268_);
v___x_3275_ = lean_infer_type(v_inst_3268_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v_a_3276_; lean_object* v___x_3277_; uint8_t v___x_3278_; lean_object* v___x_3279_; 
v_a_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc_n(v_a_3276_, 2);
lean_dec_ref_known(v___x_3275_, 1);
v___x_3277_ = lean_box(0);
v___x_3278_ = 0;
v___x_3279_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3276_, v___x_3277_, v___x_3278_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
if (lean_obj_tag(v___x_3279_) == 0)
{
lean_object* v_a_3280_; lean_object* v_snd_3281_; lean_object* v_fst_3282_; lean_object* v_fst_3283_; lean_object* v_snd_3284_; lean_object* v___x_3285_; 
v_a_3280_ = lean_ctor_get(v___x_3279_, 0);
lean_inc(v_a_3280_);
lean_dec_ref_known(v___x_3279_, 1);
v_snd_3281_ = lean_ctor_get(v_a_3280_, 1);
lean_inc(v_snd_3281_);
v_fst_3282_ = lean_ctor_get(v_a_3280_, 0);
lean_inc(v_fst_3282_);
lean_dec(v_a_3280_);
v_fst_3283_ = lean_ctor_get(v_snd_3281_, 0);
lean_inc(v_fst_3283_);
v_snd_3284_ = lean_ctor_get(v_snd_3281_, 1);
lean_inc(v_snd_3284_);
lean_dec(v_snd_3281_);
lean_inc(v___y_3273_);
lean_inc_ref(v___y_3272_);
lean_inc(v___y_3271_);
lean_inc_ref(v___y_3270_);
v___x_3285_ = lean_whnf(v_snd_3284_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
if (lean_obj_tag(v___x_3285_) == 0)
{
lean_object* v_a_3286_; lean_object* v___f_3287_; uint8_t v___x_3288_; lean_object* v___x_3289_; 
v_a_3286_ = lean_ctor_get(v___x_3285_, 0);
lean_inc(v_a_3286_);
lean_dec_ref_known(v___x_3285_, 1);
lean_inc(v_a_3276_);
v___f_3287_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___boxed), 13, 6);
lean_closure_set(v___f_3287_, 0, v_a_3286_);
lean_closure_set(v___f_3287_, 1, v_fst_3282_);
lean_closure_set(v___f_3287_, 2, v_fst_3283_);
lean_closure_set(v___f_3287_, 3, v_inst_3268_);
lean_closure_set(v___f_3287_, 4, v_a_3276_);
lean_closure_set(v___f_3287_, 5, v_projInfo_x3f_3269_);
v___x_3288_ = 0;
v___x_3289_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_3276_, v___f_3287_, v___x_3288_, v___x_3288_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
return v___x_3289_;
}
else
{
lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3297_; 
lean_dec(v_fst_3283_);
lean_dec(v_fst_3282_);
lean_dec(v_a_3276_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
lean_dec(v_projInfo_x3f_3269_);
lean_dec_ref(v_inst_3268_);
v_a_3290_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3292_ = v___x_3285_;
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_dec(v___x_3285_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3295_; 
if (v_isShared_3293_ == 0)
{
v___x_3295_ = v___x_3292_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_a_3290_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
}
}
else
{
lean_object* v_a_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3305_; 
lean_dec(v_a_3276_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
lean_dec(v_projInfo_x3f_3269_);
lean_dec_ref(v_inst_3268_);
v_a_3298_ = lean_ctor_get(v___x_3279_, 0);
v_isSharedCheck_3305_ = !lean_is_exclusive(v___x_3279_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3300_ = v___x_3279_;
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_a_3298_);
lean_dec(v___x_3279_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3303_; 
if (v_isShared_3301_ == 0)
{
v___x_3303_ = v___x_3300_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v_a_3298_);
v___x_3303_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
return v___x_3303_;
}
}
}
}
else
{
lean_object* v_a_3306_; lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3313_; 
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
lean_dec(v_projInfo_x3f_3269_);
lean_dec_ref(v_inst_3268_);
v_a_3306_ = lean_ctor_get(v___x_3275_, 0);
v_isSharedCheck_3313_ = !lean_is_exclusive(v___x_3275_);
if (v_isSharedCheck_3313_ == 0)
{
v___x_3308_ = v___x_3275_;
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
else
{
lean_inc(v_a_3306_);
lean_dec(v___x_3275_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
lean_object* v___x_3311_; 
if (v_isShared_3309_ == 0)
{
v___x_3311_ = v___x_3308_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v_a_3306_);
v___x_3311_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
return v___x_3311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1___boxed(lean_object* v_inst_3314_, lean_object* v_projInfo_x3f_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_){
_start:
{
lean_object* v_res_3321_; 
v_res_3321_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3314_, v_projInfo_x3f_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(lean_object* v_inst_3322_, lean_object* v_projInfo_x3f_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_){
_start:
{
lean_object* v___y_3330_; lean_object* v___x_3347_; uint8_t v_transparency_3348_; uint8_t v___x_3349_; uint8_t v___x_3350_; 
v___x_3347_ = l_Lean_Meta_Context_config(v_a_3324_);
v_transparency_3348_ = lean_ctor_get_uint8(v___x_3347_, 9);
lean_dec_ref(v___x_3347_);
v___x_3349_ = 2;
v___x_3350_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3348_, v___x_3349_);
if (v___x_3350_ == 0)
{
lean_object* v_keyedConfig_3351_; uint8_t v_trackZetaDelta_3352_; lean_object* v_zetaDeltaSet_3353_; lean_object* v_lctx_3354_; lean_object* v_localInstances_3355_; lean_object* v_defEqCtx_x3f_3356_; lean_object* v_synthPendingDepth_3357_; lean_object* v_customCanUnfoldPredicate_x3f_3358_; uint8_t v_univApprox_3359_; uint8_t v_inTypeClassResolution_3360_; uint8_t v_cacheInferType_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
v_keyedConfig_3351_ = lean_ctor_get(v_a_3324_, 0);
v_trackZetaDelta_3352_ = lean_ctor_get_uint8(v_a_3324_, sizeof(void*)*7);
v_zetaDeltaSet_3353_ = lean_ctor_get(v_a_3324_, 1);
v_lctx_3354_ = lean_ctor_get(v_a_3324_, 2);
v_localInstances_3355_ = lean_ctor_get(v_a_3324_, 3);
v_defEqCtx_x3f_3356_ = lean_ctor_get(v_a_3324_, 4);
v_synthPendingDepth_3357_ = lean_ctor_get(v_a_3324_, 5);
v_customCanUnfoldPredicate_x3f_3358_ = lean_ctor_get(v_a_3324_, 6);
v_univApprox_3359_ = lean_ctor_get_uint8(v_a_3324_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3360_ = lean_ctor_get_uint8(v_a_3324_, sizeof(void*)*7 + 2);
v_cacheInferType_3361_ = lean_ctor_get_uint8(v_a_3324_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3351_);
v___x_3362_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3349_, v_keyedConfig_3351_);
lean_inc(v_customCanUnfoldPredicate_x3f_3358_);
lean_inc(v_synthPendingDepth_3357_);
lean_inc(v_defEqCtx_x3f_3356_);
lean_inc_ref(v_localInstances_3355_);
lean_inc_ref(v_lctx_3354_);
lean_inc(v_zetaDeltaSet_3353_);
v___x_3363_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3363_, 0, v___x_3362_);
lean_ctor_set(v___x_3363_, 1, v_zetaDeltaSet_3353_);
lean_ctor_set(v___x_3363_, 2, v_lctx_3354_);
lean_ctor_set(v___x_3363_, 3, v_localInstances_3355_);
lean_ctor_set(v___x_3363_, 4, v_defEqCtx_x3f_3356_);
lean_ctor_set(v___x_3363_, 5, v_synthPendingDepth_3357_);
lean_ctor_set(v___x_3363_, 6, v_customCanUnfoldPredicate_x3f_3358_);
lean_ctor_set_uint8(v___x_3363_, sizeof(void*)*7, v_trackZetaDelta_3352_);
lean_ctor_set_uint8(v___x_3363_, sizeof(void*)*7 + 1, v_univApprox_3359_);
lean_ctor_set_uint8(v___x_3363_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3360_);
lean_ctor_set_uint8(v___x_3363_, sizeof(void*)*7 + 3, v_cacheInferType_3361_);
lean_inc(v_a_3327_);
lean_inc_ref(v_a_3326_);
lean_inc(v_a_3325_);
v___x_3364_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3322_, v_projInfo_x3f_3323_, v___x_3363_, v_a_3325_, v_a_3326_, v_a_3327_);
v___y_3330_ = v___x_3364_;
goto v___jp_3329_;
}
else
{
lean_object* v___x_3365_; 
lean_inc(v_a_3327_);
lean_inc_ref(v_a_3326_);
lean_inc(v_a_3325_);
lean_inc_ref(v_a_3324_);
v___x_3365_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__1(v_inst_3322_, v_projInfo_x3f_3323_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
v___y_3330_ = v___x_3365_;
goto v___jp_3329_;
}
v___jp_3329_:
{
if (lean_obj_tag(v___y_3330_) == 0)
{
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3338_; 
v_a_3331_ = lean_ctor_get(v___y_3330_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___y_3330_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3333_ = v___y_3330_;
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___y_3330_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
else
{
lean_object* v_a_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3346_; 
v_a_3339_ = lean_ctor_get(v___y_3330_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___y_3330_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3341_ = v___y_3330_;
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_a_3339_);
lean_dec(v___y_3330_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3344_; 
if (v_isShared_3342_ == 0)
{
v___x_3344_ = v___x_3341_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v_a_3339_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
return v___x_3344_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___boxed(lean_object* v_inst_3366_, lean_object* v_projInfo_x3f_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_){
_start:
{
lean_object* v_res_3373_; 
v_res_3373_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(v_inst_3366_, v_projInfo_x3f_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
lean_dec(v_a_3371_);
lean_dec_ref(v_a_3370_);
lean_dec(v_a_3369_);
lean_dec_ref(v_a_3368_);
return v_res_3373_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(lean_object* v_upperBound_3374_, lean_object* v_a_3375_, lean_object* v___x_3376_, lean_object* v_inst_3377_, lean_object* v_R_3378_, lean_object* v_a_3379_, lean_object* v_b_3380_, lean_object* v_c_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_){
_start:
{
lean_object* v___x_3387_; 
v___x_3387_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___redArg(v_upperBound_3374_, v_a_3375_, v___x_3376_, v_a_3379_, v_b_3380_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2___boxed(lean_object* v_upperBound_3388_, lean_object* v_a_3389_, lean_object* v___x_3390_, lean_object* v_inst_3391_, lean_object* v_R_3392_, lean_object* v_a_3393_, lean_object* v_b_3394_, lean_object* v_c_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__2(v_upperBound_3388_, v_a_3389_, v___x_3390_, v_inst_3391_, v_R_3392_, v_a_3393_, v_b_3394_, v_c_3395_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_);
lean_dec(v___y_3399_);
lean_dec_ref(v___y_3398_);
lean_dec(v___y_3397_);
lean_dec_ref(v___y_3396_);
lean_dec(v___x_3390_);
lean_dec_ref(v_a_3389_);
lean_dec(v_upperBound_3388_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(lean_object* v_00_u03b1_3402_, lean_object* v_msg_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
lean_object* v___x_3409_; 
v___x_3409_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_msg_3403_, v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___boxed(lean_object* v_00_u03b1_3410_, lean_object* v_msg_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6(v_00_u03b1_3410_, v_msg_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
lean_dec(v___y_3415_);
lean_dec_ref(v___y_3414_);
lean_dec(v___y_3413_);
lean_dec_ref(v___y_3412_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(lean_object* v_fst_3418_, lean_object* v_argVars_3419_, lean_object* v_inst_3420_, lean_object* v_a_3421_, lean_object* v_projInfo_x3f_3422_, lean_object* v_inst_3423_, lean_object* v_a_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v___x_3430_; 
v___x_3430_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg(v_fst_3418_, v_argVars_3419_, v_inst_3420_, v_a_3421_, v_projInfo_x3f_3422_, v_a_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_);
return v___x_3430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___boxed(lean_object* v_fst_3431_, lean_object* v_argVars_3432_, lean_object* v_inst_3433_, lean_object* v_a_3434_, lean_object* v_projInfo_x3f_3435_, lean_object* v_inst_3436_, lean_object* v_a_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_){
_start:
{
lean_object* v_res_3443_; 
v_res_3443_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10(v_fst_3431_, v_argVars_3432_, v_inst_3433_, v_a_3434_, v_projInfo_x3f_3435_, v_inst_3436_, v_a_3437_, v___y_3438_, v___y_3439_, v___y_3440_, v___y_3441_);
lean_dec(v___y_3441_);
lean_dec_ref(v___y_3440_);
lean_dec(v___y_3439_);
lean_dec_ref(v___y_3438_);
lean_dec(v_projInfo_x3f_3435_);
return v_res_3443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(lean_object* v_type_3444_, lean_object* v_k_3445_, uint8_t v_cleanupAnnotations_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_){
_start:
{
lean_object* v___f_3452_; uint8_t v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___f_3452_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3452_, 0, v_k_3445_);
v___x_3453_ = 0;
v___x_3454_ = lean_box(0);
v___x_3455_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_3453_, v___x_3454_, v_type_3444_, v___f_3452_, v_cleanupAnnotations_3446_, v___x_3453_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_);
if (lean_obj_tag(v___x_3455_) == 0)
{
lean_object* v_a_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3463_; 
v_a_3456_ = lean_ctor_get(v___x_3455_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3458_ = v___x_3455_;
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_a_3456_);
lean_dec(v___x_3455_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3461_; 
if (v_isShared_3459_ == 0)
{
v___x_3461_ = v___x_3458_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v_a_3456_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
}
else
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3471_; 
v_a_3464_ = lean_ctor_get(v___x_3455_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3466_ = v___x_3455_;
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v___x_3455_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_a_3464_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg___boxed(lean_object* v_type_3472_, lean_object* v_k_3473_, lean_object* v_cleanupAnnotations_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3480_; lean_object* v_res_3481_; 
v_cleanupAnnotations_boxed_3480_ = lean_unbox(v_cleanupAnnotations_3474_);
v_res_3481_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(v_type_3472_, v_k_3473_, v_cleanupAnnotations_boxed_3480_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_);
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
lean_dec(v___y_3476_);
lean_dec_ref(v___y_3475_);
return v_res_3481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5(lean_object* v_00_u03b1_3482_, lean_object* v_type_3483_, lean_object* v_k_3484_, uint8_t v_cleanupAnnotations_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_){
_start:
{
lean_object* v___x_3491_; 
v___x_3491_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(v_type_3483_, v_k_3484_, v_cleanupAnnotations_3485_, v___y_3486_, v___y_3487_, v___y_3488_, v___y_3489_);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___boxed(lean_object* v_00_u03b1_3492_, lean_object* v_type_3493_, lean_object* v_k_3494_, lean_object* v_cleanupAnnotations_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3501_; lean_object* v_res_3502_; 
v_cleanupAnnotations_boxed_3501_ = lean_unbox(v_cleanupAnnotations_3495_);
v_res_3502_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5(v_00_u03b1_3492_, v_type_3493_, v_k_3494_, v_cleanupAnnotations_boxed_3501_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
lean_dec(v___y_3499_);
lean_dec_ref(v___y_3498_);
lean_dec(v___y_3497_);
lean_dec_ref(v___y_3496_);
return v_res_3502_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(lean_object* v_as_3503_, size_t v_sz_3504_, size_t v_i_3505_, lean_object* v_b_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_){
_start:
{
lean_object* v_a_3513_; uint8_t v___x_3517_; 
v___x_3517_ = lean_usize_dec_lt(v_i_3505_, v_sz_3504_);
if (v___x_3517_ == 0)
{
lean_object* v___x_3518_; 
v___x_3518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3518_, 0, v_b_3506_);
return v___x_3518_;
}
else
{
lean_object* v___x_3519_; lean_object* v_a_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3519_ = lean_box(0);
v_a_3520_ = lean_array_uget_borrowed(v_as_3503_, v_i_3505_);
v___x_3521_ = l_Lean_Expr_fvarId_x21(v_a_3520_);
lean_inc(v___x_3521_);
v___x_3522_ = l_Lean_FVarId_getBinderInfo___redArg(v___x_3521_, v___y_3508_, v___y_3509_, v___y_3510_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3523_; uint8_t v___x_3524_; uint8_t v___x_3525_; 
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_a_3523_);
lean_dec_ref_known(v___x_3522_, 1);
v___x_3524_ = lean_unbox(v_a_3523_);
lean_dec(v_a_3523_);
v___x_3525_ = l_Lean_BinderInfo_isInstImplicit(v___x_3524_);
if (v___x_3525_ == 0)
{
lean_dec(v___x_3521_);
v_a_3513_ = v___x_3519_;
goto v___jp_3512_;
}
else
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3526_ = lean_st_ref_take(v___y_3507_);
v___x_3527_ = l_Lean_CollectFVars_State_add(v___x_3526_, v___x_3521_);
v___x_3528_ = lean_st_ref_put(v___y_3507_, v___x_3527_);
v_a_3513_ = v___x_3519_;
goto v___jp_3512_;
}
}
else
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3536_; 
lean_dec(v___x_3521_);
v_a_3529_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3536_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3531_ = v___x_3522_;
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3522_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3532_ == 0)
{
v___x_3534_ = v___x_3531_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v_a_3529_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
return v___x_3534_;
}
}
}
}
v___jp_3512_:
{
size_t v___x_3514_; size_t v___x_3515_; 
v___x_3514_ = ((size_t)1ULL);
v___x_3515_ = lean_usize_add(v_i_3505_, v___x_3514_);
v_i_3505_ = v___x_3515_;
v_b_3506_ = v_a_3513_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg___boxed(lean_object* v_as_3537_, lean_object* v_sz_3538_, lean_object* v_i_3539_, lean_object* v_b_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_){
_start:
{
size_t v_sz_boxed_3546_; size_t v_i_boxed_3547_; lean_object* v_res_3548_; 
v_sz_boxed_3546_ = lean_unbox_usize(v_sz_3538_);
lean_dec(v_sz_3538_);
v_i_boxed_3547_ = lean_unbox_usize(v_i_3539_);
lean_dec(v_i_3539_);
v_res_3548_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(v_as_3537_, v_sz_boxed_3546_, v_i_boxed_3547_, v_b_3540_, v___y_3541_, v___y_3542_, v___y_3543_, v___y_3544_);
lean_dec(v___y_3544_);
lean_dec_ref(v___y_3543_);
lean_dec_ref(v___y_3542_);
lean_dec(v___y_3541_);
lean_dec_ref(v_as_3537_);
return v_res_3548_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0(uint8_t v_suppressElabErrors_3556_, lean_object* v_x_3557_){
_start:
{
if (lean_obj_tag(v_x_3557_) == 1)
{
lean_object* v_pre_3558_; 
v_pre_3558_ = lean_ctor_get(v_x_3557_, 0);
switch(lean_obj_tag(v_pre_3558_))
{
case 1:
{
lean_object* v_pre_3559_; 
v_pre_3559_ = lean_ctor_get(v_pre_3558_, 0);
switch(lean_obj_tag(v_pre_3559_))
{
case 0:
{
lean_object* v_str_3560_; lean_object* v_str_3561_; lean_object* v___x_3562_; uint8_t v___x_3563_; 
v_str_3560_ = lean_ctor_get(v_x_3557_, 1);
v_str_3561_ = lean_ctor_get(v_pre_3558_, 1);
v___x_3562_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__0));
v___x_3563_ = lean_string_dec_eq(v_str_3561_, v___x_3562_);
if (v___x_3563_ == 0)
{
lean_object* v___x_3564_; uint8_t v___x_3565_; 
v___x_3564_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__1));
v___x_3565_ = lean_string_dec_eq(v_str_3561_, v___x_3564_);
if (v___x_3565_ == 0)
{
return v___x_3565_;
}
else
{
lean_object* v___x_3566_; uint8_t v___x_3567_; 
v___x_3566_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__2));
v___x_3567_ = lean_string_dec_eq(v_str_3560_, v___x_3566_);
if (v___x_3567_ == 0)
{
return v___x_3567_;
}
else
{
return v_suppressElabErrors_3556_;
}
}
}
else
{
lean_object* v___x_3568_; uint8_t v___x_3569_; 
v___x_3568_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__3));
v___x_3569_ = lean_string_dec_eq(v_str_3560_, v___x_3568_);
if (v___x_3569_ == 0)
{
return v___x_3569_;
}
else
{
return v_suppressElabErrors_3556_;
}
}
}
case 1:
{
lean_object* v_pre_3570_; 
v_pre_3570_ = lean_ctor_get(v_pre_3559_, 0);
if (lean_obj_tag(v_pre_3570_) == 0)
{
lean_object* v_str_3571_; lean_object* v_str_3572_; lean_object* v_str_3573_; lean_object* v___x_3574_; uint8_t v___x_3575_; 
v_str_3571_ = lean_ctor_get(v_x_3557_, 1);
v_str_3572_ = lean_ctor_get(v_pre_3558_, 1);
v_str_3573_ = lean_ctor_get(v_pre_3559_, 1);
v___x_3574_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__4));
v___x_3575_ = lean_string_dec_eq(v_str_3573_, v___x_3574_);
if (v___x_3575_ == 0)
{
return v___x_3575_;
}
else
{
lean_object* v___x_3576_; uint8_t v___x_3577_; 
v___x_3576_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__5));
v___x_3577_ = lean_string_dec_eq(v_str_3572_, v___x_3576_);
if (v___x_3577_ == 0)
{
return v___x_3577_;
}
else
{
lean_object* v___x_3578_; uint8_t v___x_3579_; 
v___x_3578_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___closed__6));
v___x_3579_ = lean_string_dec_eq(v_str_3571_, v___x_3578_);
if (v___x_3579_ == 0)
{
return v___x_3579_;
}
else
{
return v_suppressElabErrors_3556_;
}
}
}
}
else
{
uint8_t v___x_3580_; 
v___x_3580_ = 0;
return v___x_3580_;
}
}
default: 
{
uint8_t v___x_3581_; 
v___x_3581_ = 0;
return v___x_3581_;
}
}
}
case 0:
{
lean_object* v_str_3582_; lean_object* v___x_3583_; uint8_t v___x_3584_; 
v_str_3582_ = lean_ctor_get(v_x_3557_, 1);
v___x_3583_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__2));
v___x_3584_ = lean_string_dec_eq(v_str_3582_, v___x_3583_);
if (v___x_3584_ == 0)
{
return v___x_3584_;
}
else
{
return v_suppressElabErrors_3556_;
}
}
default: 
{
uint8_t v___x_3585_; 
v___x_3585_ = 0;
return v___x_3585_;
}
}
}
else
{
uint8_t v___x_3586_; 
v___x_3586_ = 0;
return v___x_3586_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___boxed(lean_object* v_suppressElabErrors_3587_, lean_object* v_x_3588_){
_start:
{
uint8_t v_suppressElabErrors_boxed_3589_; uint8_t v_res_3590_; lean_object* v_r_3591_; 
v_suppressElabErrors_boxed_3589_ = lean_unbox(v_suppressElabErrors_3587_);
v_res_3590_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0(v_suppressElabErrors_boxed_3589_, v_x_3588_);
lean_dec(v_x_3588_);
v_r_3591_ = lean_box(v_res_3590_);
return v_r_3591_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5(lean_object* v_ref_3592_, lean_object* v_msgData_3593_, uint8_t v_severity_3594_, uint8_t v_isSilent_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_){
_start:
{
lean_object* v___y_3602_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; uint8_t v___y_3606_; uint8_t v___y_3607_; lean_object* v___y_3608_; lean_object* v_toCold_3609_; lean_object* v___y_3610_; lean_object* v___y_3639_; lean_object* v___y_3640_; lean_object* v___y_3641_; lean_object* v___y_3642_; uint8_t v___y_3643_; uint8_t v___y_3644_; uint8_t v___y_3645_; lean_object* v___y_3646_; lean_object* v___y_3666_; lean_object* v___y_3667_; uint8_t v___y_3668_; uint8_t v___y_3669_; uint8_t v___y_3670_; lean_object* v___y_3671_; lean_object* v___y_3672_; uint8_t v___y_3676_; uint8_t v___y_3677_; uint8_t v___x_3687_; uint8_t v___y_3689_; uint8_t v___x_3695_; 
v___x_3687_ = 2;
v___x_3695_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3594_, v___x_3687_);
if (v___x_3695_ == 0)
{
v___y_3689_ = v___x_3695_;
goto v___jp_3688_;
}
else
{
uint8_t v___x_3696_; 
lean_inc_ref(v_msgData_3593_);
v___x_3696_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3593_);
if (v___x_3696_ == 0)
{
v___y_3689_ = v___x_3696_;
goto v___jp_3688_;
}
else
{
lean_object* v___x_3697_; lean_object* v___x_3698_; 
lean_dec_ref(v_msgData_3593_);
v___x_3697_ = lean_box(0);
v___x_3698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3698_, 0, v___x_3697_);
return v___x_3698_;
}
}
v___jp_3601_:
{
lean_object* v_currNamespace_3611_; lean_object* v_openDecls_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v_env_3617_; lean_object* v_nextMacroScope_3618_; lean_object* v_ngen_3619_; lean_object* v_auxDeclNGen_3620_; lean_object* v_traceState_3621_; lean_object* v_cache_3622_; lean_object* v_recordedDeps_3623_; lean_object* v_messages_3624_; lean_object* v_infoState_3625_; lean_object* v_snapshotTasks_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3637_; 
v_currNamespace_3611_ = lean_ctor_get(v_toCold_3609_, 4);
v_openDecls_3612_ = lean_ctor_get(v_toCold_3609_, 5);
lean_inc(v_openDecls_3612_);
lean_inc(v_currNamespace_3611_);
v___x_3613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3613_, 0, v_currNamespace_3611_);
lean_ctor_set(v___x_3613_, 1, v_openDecls_3612_);
v___x_3614_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3613_);
lean_ctor_set(v___x_3614_, 1, v___y_3605_);
lean_inc_ref(v___y_3604_);
lean_inc_ref(v___y_3603_);
v___x_3615_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3615_, 0, v___y_3603_);
lean_ctor_set(v___x_3615_, 1, v___y_3602_);
lean_ctor_set(v___x_3615_, 2, v___y_3608_);
lean_ctor_set(v___x_3615_, 3, v___y_3604_);
lean_ctor_set(v___x_3615_, 4, v___x_3614_);
lean_ctor_set_uint8(v___x_3615_, sizeof(void*)*5, v___y_3607_);
lean_ctor_set_uint8(v___x_3615_, sizeof(void*)*5 + 1, v___y_3606_);
lean_ctor_set_uint8(v___x_3615_, sizeof(void*)*5 + 2, v_isSilent_3595_);
v___x_3616_ = lean_st_ref_take(v___y_3610_);
v_env_3617_ = lean_ctor_get(v___x_3616_, 0);
v_nextMacroScope_3618_ = lean_ctor_get(v___x_3616_, 1);
v_ngen_3619_ = lean_ctor_get(v___x_3616_, 2);
v_auxDeclNGen_3620_ = lean_ctor_get(v___x_3616_, 3);
v_traceState_3621_ = lean_ctor_get(v___x_3616_, 4);
v_cache_3622_ = lean_ctor_get(v___x_3616_, 5);
v_recordedDeps_3623_ = lean_ctor_get(v___x_3616_, 6);
v_messages_3624_ = lean_ctor_get(v___x_3616_, 7);
v_infoState_3625_ = lean_ctor_get(v___x_3616_, 8);
v_snapshotTasks_3626_ = lean_ctor_get(v___x_3616_, 9);
v_isSharedCheck_3637_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3637_ == 0)
{
v___x_3628_ = v___x_3616_;
v_isShared_3629_ = v_isSharedCheck_3637_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_snapshotTasks_3626_);
lean_inc(v_infoState_3625_);
lean_inc(v_messages_3624_);
lean_inc(v_recordedDeps_3623_);
lean_inc(v_cache_3622_);
lean_inc(v_traceState_3621_);
lean_inc(v_auxDeclNGen_3620_);
lean_inc(v_ngen_3619_);
lean_inc(v_nextMacroScope_3618_);
lean_inc(v_env_3617_);
lean_dec(v___x_3616_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3637_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3633_; 
v___x_3630_ = lean_box(0);
v___x_3631_ = l_Lean_MessageLog_add(v___x_3615_, v_messages_3624_);
if (v_isShared_3629_ == 0)
{
lean_ctor_set(v___x_3628_, 7, v___x_3631_);
v___x_3633_ = v___x_3628_;
goto v_reusejp_3632_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_env_3617_);
lean_ctor_set(v_reuseFailAlloc_3636_, 1, v_nextMacroScope_3618_);
lean_ctor_set(v_reuseFailAlloc_3636_, 2, v_ngen_3619_);
lean_ctor_set(v_reuseFailAlloc_3636_, 3, v_auxDeclNGen_3620_);
lean_ctor_set(v_reuseFailAlloc_3636_, 4, v_traceState_3621_);
lean_ctor_set(v_reuseFailAlloc_3636_, 5, v_cache_3622_);
lean_ctor_set(v_reuseFailAlloc_3636_, 6, v_recordedDeps_3623_);
lean_ctor_set(v_reuseFailAlloc_3636_, 7, v___x_3631_);
lean_ctor_set(v_reuseFailAlloc_3636_, 8, v_infoState_3625_);
lean_ctor_set(v_reuseFailAlloc_3636_, 9, v_snapshotTasks_3626_);
v___x_3633_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3632_;
}
v_reusejp_3632_:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; 
v___x_3634_ = lean_st_ref_put(v___y_3610_, v___x_3633_);
v___x_3635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3635_, 0, v___x_3630_);
return v___x_3635_;
}
}
}
v___jp_3638_:
{
lean_object* v_fileName_3647_; lean_object* v_fileMap_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3664_; 
v_fileName_3647_ = lean_ctor_get(v___y_3642_, 0);
v_fileMap_3648_ = lean_ctor_get(v___y_3642_, 1);
v___x_3649_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3593_);
v___x_3650_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6_spec__7(v___x_3649_, v___y_3596_, v___y_3597_, v___y_3598_, v___y_3599_);
v_a_3651_ = lean_ctor_get(v___x_3650_, 0);
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3650_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3653_ = v___x_3650_;
v_isShared_3654_ = v_isSharedCheck_3664_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3650_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3664_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
lean_inc_ref_n(v_fileMap_3648_, 2);
v___x_3655_ = l_Lean_FileMap_toPosition(v_fileMap_3648_, v___y_3641_);
lean_dec(v___y_3641_);
v___x_3656_ = l_Lean_FileMap_toPosition(v_fileMap_3648_, v___y_3646_);
lean_dec(v___y_3646_);
v___x_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3657_, 0, v___x_3656_);
v___x_3658_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
if (v___y_3645_ == 0)
{
lean_del_object(v___x_3653_);
lean_dec_ref(v___y_3640_);
v___y_3602_ = v___x_3655_;
v___y_3603_ = v_fileName_3647_;
v___y_3604_ = v___x_3658_;
v___y_3605_ = v_a_3651_;
v___y_3606_ = v___y_3644_;
v___y_3607_ = v___y_3643_;
v___y_3608_ = v___x_3657_;
v_toCold_3609_ = v___y_3639_;
v___y_3610_ = v___y_3599_;
goto v___jp_3601_;
}
else
{
uint8_t v___x_3659_; 
lean_inc(v_a_3651_);
v___x_3659_ = l_Lean_MessageData_hasTag(v___y_3640_, v_a_3651_);
if (v___x_3659_ == 0)
{
lean_object* v___x_3660_; lean_object* v___x_3662_; 
lean_dec_ref_known(v___x_3657_, 1);
lean_dec_ref(v___x_3655_);
lean_dec(v_a_3651_);
v___x_3660_ = lean_box(0);
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 0, v___x_3660_);
v___x_3662_ = v___x_3653_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v___x_3660_);
v___x_3662_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
return v___x_3662_;
}
}
else
{
lean_del_object(v___x_3653_);
v___y_3602_ = v___x_3655_;
v___y_3603_ = v_fileName_3647_;
v___y_3604_ = v___x_3658_;
v___y_3605_ = v_a_3651_;
v___y_3606_ = v___y_3644_;
v___y_3607_ = v___y_3643_;
v___y_3608_ = v___x_3657_;
v_toCold_3609_ = v___y_3639_;
v___y_3610_ = v___y_3599_;
goto v___jp_3601_;
}
}
}
}
v___jp_3665_:
{
lean_object* v___x_3673_; 
v___x_3673_ = l_Lean_Syntax_getTailPos_x3f(v___y_3671_, v___y_3670_);
lean_dec(v___y_3671_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_inc(v___y_3672_);
v___y_3639_ = v___y_3666_;
v___y_3640_ = v___y_3667_;
v___y_3641_ = v___y_3672_;
v___y_3642_ = v___y_3666_;
v___y_3643_ = v___y_3670_;
v___y_3644_ = v___y_3669_;
v___y_3645_ = v___y_3668_;
v___y_3646_ = v___y_3672_;
goto v___jp_3638_;
}
else
{
lean_object* v_val_3674_; 
v_val_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_val_3674_);
lean_dec_ref_known(v___x_3673_, 1);
v___y_3639_ = v___y_3666_;
v___y_3640_ = v___y_3667_;
v___y_3641_ = v___y_3672_;
v___y_3642_ = v___y_3666_;
v___y_3643_ = v___y_3670_;
v___y_3644_ = v___y_3669_;
v___y_3645_ = v___y_3668_;
v___y_3646_ = v_val_3674_;
goto v___jp_3638_;
}
}
v___jp_3675_:
{
lean_object* v_toCold_3678_; lean_object* v_ref_3679_; uint8_t v_suppressElabErrors_3680_; lean_object* v___x_3681_; lean_object* v___f_3682_; lean_object* v_ref_3683_; lean_object* v___x_3684_; 
v_toCold_3678_ = lean_ctor_get(v___y_3598_, 0);
v_ref_3679_ = lean_ctor_get(v___y_3598_, 2);
v_suppressElabErrors_3680_ = lean_ctor_get_uint8(v___y_3598_, sizeof(void*)*3 + 2);
v___x_3681_ = lean_box(v_suppressElabErrors_3680_);
v___f_3682_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3682_, 0, v___x_3681_);
v_ref_3683_ = l_Lean_replaceRef(v_ref_3592_, v_ref_3679_);
v___x_3684_ = l_Lean_Syntax_getPos_x3f(v_ref_3683_, v___y_3676_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v___x_3685_; 
v___x_3685_ = lean_unsigned_to_nat(0u);
v___y_3666_ = v_toCold_3678_;
v___y_3667_ = v___f_3682_;
v___y_3668_ = v_suppressElabErrors_3680_;
v___y_3669_ = v___y_3677_;
v___y_3670_ = v___y_3676_;
v___y_3671_ = v_ref_3683_;
v___y_3672_ = v___x_3685_;
goto v___jp_3665_;
}
else
{
lean_object* v_val_3686_; 
v_val_3686_ = lean_ctor_get(v___x_3684_, 0);
lean_inc(v_val_3686_);
lean_dec_ref_known(v___x_3684_, 1);
v___y_3666_ = v_toCold_3678_;
v___y_3667_ = v___f_3682_;
v___y_3668_ = v_suppressElabErrors_3680_;
v___y_3669_ = v___y_3677_;
v___y_3670_ = v___y_3676_;
v___y_3671_ = v_ref_3683_;
v___y_3672_ = v_val_3686_;
goto v___jp_3665_;
}
}
v___jp_3688_:
{
uint8_t v___x_3690_; uint8_t v___x_3691_; 
v___x_3690_ = 1;
v___x_3691_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3594_, v___x_3690_);
if (v___x_3691_ == 0)
{
v___y_3676_ = v___y_3689_;
v___y_3677_ = v_severity_3594_;
goto v___jp_3675_;
}
else
{
lean_object* v___x_3692_; lean_object* v___x_3693_; uint8_t v___x_3694_; 
v___x_3692_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3598_);
v___x_3693_ = l_Lean_warningAsError;
v___x_3694_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v___x_3692_, v___x_3693_);
lean_dec_ref(v___x_3692_);
if (v___x_3694_ == 0)
{
v___y_3676_ = v___y_3689_;
v___y_3677_ = v_severity_3594_;
goto v___jp_3675_;
}
else
{
v___y_3676_ = v___y_3689_;
v___y_3677_ = v___x_3687_;
goto v___jp_3675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5___boxed(lean_object* v_ref_3699_, lean_object* v_msgData_3700_, lean_object* v_severity_3701_, lean_object* v_isSilent_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_){
_start:
{
uint8_t v_severity_boxed_3708_; uint8_t v_isSilent_boxed_3709_; lean_object* v_res_3710_; 
v_severity_boxed_3708_ = lean_unbox(v_severity_3701_);
v_isSilent_boxed_3709_ = lean_unbox(v_isSilent_3702_);
v_res_3710_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5(v_ref_3699_, v_msgData_3700_, v_severity_boxed_3708_, v_isSilent_boxed_3709_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_);
lean_dec(v___y_3706_);
lean_dec_ref(v___y_3705_);
lean_dec(v___y_3704_);
lean_dec_ref(v___y_3703_);
lean_dec(v_ref_3699_);
return v_res_3710_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3(lean_object* v_msgData_3711_, uint8_t v_severity_3712_, uint8_t v_isSilent_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_){
_start:
{
lean_object* v_ref_3719_; lean_object* v___x_3720_; 
v_ref_3719_ = lean_ctor_get(v___y_3716_, 2);
v___x_3720_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3_spec__5(v_ref_3719_, v_msgData_3711_, v_severity_3712_, v_isSilent_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_);
return v___x_3720_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3___boxed(lean_object* v_msgData_3721_, lean_object* v_severity_3722_, lean_object* v_isSilent_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_){
_start:
{
uint8_t v_severity_boxed_3729_; uint8_t v_isSilent_boxed_3730_; lean_object* v_res_3731_; 
v_severity_boxed_3729_ = lean_unbox(v_severity_3722_);
v_isSilent_boxed_3730_ = lean_unbox(v_isSilent_3723_);
v_res_3731_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3(v_msgData_3721_, v_severity_boxed_3729_, v_isSilent_boxed_3730_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_);
lean_dec(v___y_3727_);
lean_dec_ref(v___y_3726_);
lean_dec(v___y_3725_);
lean_dec_ref(v___y_3724_);
return v_res_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3(lean_object* v_msgData_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_){
_start:
{
uint8_t v___x_3738_; uint8_t v___x_3739_; lean_object* v___x_3740_; 
v___x_3738_ = 1;
v___x_3739_ = 0;
v___x_3740_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3_spec__3(v_msgData_3732_, v___x_3738_, v___x_3739_, v___y_3733_, v___y_3734_, v___y_3735_, v___y_3736_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3___boxed(lean_object* v_msgData_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_){
_start:
{
lean_object* v_res_3747_; 
v_res_3747_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3(v_msgData_3741_, v___y_3742_, v___y_3743_, v___y_3744_, v___y_3745_);
lean_dec(v___y_3745_);
lean_dec_ref(v___y_3744_);
lean_dec(v___y_3743_);
lean_dec_ref(v___y_3742_);
return v_res_3747_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(lean_object* v_k_3748_, lean_object* v_t_3749_){
_start:
{
if (lean_obj_tag(v_t_3749_) == 0)
{
lean_object* v_k_3750_; lean_object* v_l_3751_; lean_object* v_r_3752_; uint8_t v___x_3753_; 
v_k_3750_ = lean_ctor_get(v_t_3749_, 1);
v_l_3751_ = lean_ctor_get(v_t_3749_, 3);
v_r_3752_ = lean_ctor_get(v_t_3749_, 4);
v___x_3753_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3748_, v_k_3750_);
switch(v___x_3753_)
{
case 0:
{
v_t_3749_ = v_l_3751_;
goto _start;
}
case 1:
{
uint8_t v___x_3755_; 
v___x_3755_ = 1;
return v___x_3755_;
}
default: 
{
v_t_3749_ = v_r_3752_;
goto _start;
}
}
}
else
{
uint8_t v___x_3757_; 
v___x_3757_ = 0;
return v___x_3757_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg___boxed(lean_object* v_k_3758_, lean_object* v_t_3759_){
_start:
{
uint8_t v_res_3760_; lean_object* v_r_3761_; 
v_res_3760_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(v_k_3758_, v_t_3759_);
lean_dec(v_t_3759_);
lean_dec(v_k_3758_);
v_r_3761_ = lean_box(v_res_3760_);
return v_r_3761_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3763_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__0));
v___x_3764_ = l_Lean_stringToMessageData(v___x_3763_);
return v___x_3764_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3766_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__2));
v___x_3767_ = l_Lean_stringToMessageData(v___x_3766_);
return v___x_3767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(lean_object* v_a_3768_, lean_object* v_as_3769_, size_t v_sz_3770_, size_t v_i_3771_, lean_object* v_b_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_){
_start:
{
lean_object* v_a_3778_; uint8_t v___x_3782_; 
v___x_3782_ = lean_usize_dec_lt(v_i_3771_, v_sz_3770_);
if (v___x_3782_ == 0)
{
lean_object* v___x_3783_; 
v___x_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3783_, 0, v_b_3772_);
return v___x_3783_;
}
else
{
lean_object* v_snd_3784_; 
v_snd_3784_ = lean_ctor_get(v_b_3772_, 1);
lean_inc(v_snd_3784_);
if (lean_obj_tag(v_snd_3784_) == 0)
{
lean_object* v_fst_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3793_; 
v_fst_3785_ = lean_ctor_get(v_b_3772_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v_b_3772_);
if (v_isSharedCheck_3793_ == 0)
{
lean_object* v_unused_3794_; 
v_unused_3794_ = lean_ctor_get(v_b_3772_, 1);
lean_dec(v_unused_3794_);
v___x_3787_ = v_b_3772_;
v_isShared_3788_ = v_isSharedCheck_3793_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_fst_3785_);
lean_dec(v_b_3772_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3793_;
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
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_fst_3785_);
lean_ctor_set(v_reuseFailAlloc_3792_, 1, v_snd_3784_);
v___x_3790_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
lean_object* v___x_3791_; 
v___x_3791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3791_, 0, v___x_3790_);
return v___x_3791_;
}
}
}
else
{
lean_object* v_fst_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3852_; 
v_fst_3795_ = lean_ctor_get(v_b_3772_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v_b_3772_);
if (v_isSharedCheck_3852_ == 0)
{
lean_object* v_unused_3853_; 
v_unused_3853_ = lean_ctor_get(v_b_3772_, 1);
lean_dec(v_unused_3853_);
v___x_3797_ = v_b_3772_;
v_isShared_3798_ = v_isSharedCheck_3852_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_fst_3795_);
lean_dec(v_b_3772_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3852_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v_val_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3851_; 
v_val_3799_ = lean_ctor_get(v_snd_3784_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v_snd_3784_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3801_ = v_snd_3784_;
v_isShared_3802_ = v_isSharedCheck_3851_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_val_3799_);
lean_dec(v_snd_3784_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3851_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v_fvarSet_3803_; lean_object* v_a_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3808_; 
v_fvarSet_3803_ = lean_ctor_get(v_a_3768_, 1);
v_a_3804_ = lean_array_uget_borrowed(v_as_3769_, v_i_3771_);
v___x_3805_ = lean_unsigned_to_nat(1u);
v___x_3806_ = lean_nat_add(v_val_3799_, v___x_3805_);
if (v_isShared_3802_ == 0)
{
lean_ctor_set(v___x_3801_, 0, v___x_3806_);
v___x_3808_ = v___x_3801_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v___x_3806_);
v___x_3808_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
lean_object* v___x_3809_; uint8_t v___x_3810_; 
v___x_3809_ = l_Lean_Expr_fvarId_x21(v_a_3804_);
v___x_3810_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(v___x_3809_, v_fvarSet_3803_);
if (v___x_3810_ == 0)
{
lean_object* v___x_3811_; 
v___x_3811_ = l_Lean_FVarId_getDecl___redArg(v___x_3809_, v___y_3773_, v___y_3774_, v___y_3775_);
if (lean_obj_tag(v___x_3811_) == 0)
{
lean_object* v_a_3812_; lean_object* v___x_3813_; 
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
lean_inc(v_a_3812_);
lean_dec_ref_known(v___x_3811_, 1);
v___x_3813_ = l_Lean_LocalDecl_ppAsBinder(v_a_3812_);
if (lean_obj_tag(v___x_3813_) == 1)
{
lean_object* v_val_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3835_; 
v_val_3814_ = lean_ctor_get(v___x_3813_, 0);
v_isSharedCheck_3835_ = !lean_is_exclusive(v___x_3813_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3816_ = v___x_3813_;
v_isShared_3817_ = v_isSharedCheck_3835_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_val_3814_);
lean_dec(v___x_3813_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3835_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3821_; 
v___x_3818_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__1);
v___x_3819_ = l_Nat_reprFast(v_val_3799_);
if (v_isShared_3817_ == 0)
{
lean_ctor_set_tag(v___x_3816_, 3);
lean_ctor_set(v___x_3816_, 0, v___x_3819_);
v___x_3821_ = v___x_3816_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v___x_3819_);
v___x_3821_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3832_; 
v___x_3822_ = l_Lean_MessageData_ofFormat(v___x_3821_);
v___x_3823_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3818_);
lean_ctor_set(v___x_3823_, 1, v___x_3822_);
v___x_3824_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___closed__3);
v___x_3825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3825_, 0, v___x_3823_);
lean_ctor_set(v___x_3825_, 1, v___x_3824_);
v___x_3826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3826_, 0, v___x_3825_);
lean_ctor_set(v___x_3826_, 1, v_val_3814_);
v___x_3827_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_3828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3828_, 0, v___x_3826_);
lean_ctor_set(v___x_3828_, 1, v___x_3827_);
v___x_3829_ = l_Lean_indentD(v___x_3828_);
v___x_3830_ = lean_array_push(v_fst_3795_, v___x_3829_);
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 1, v___x_3808_);
lean_ctor_set(v___x_3797_, 0, v___x_3830_);
v___x_3832_ = v___x_3797_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v___x_3830_);
lean_ctor_set(v_reuseFailAlloc_3833_, 1, v___x_3808_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
v_a_3778_ = v___x_3832_;
goto v___jp_3777_;
}
}
}
}
else
{
lean_object* v___x_3837_; 
lean_dec(v___x_3813_);
lean_dec(v_val_3799_);
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 1, v___x_3808_);
v___x_3837_ = v___x_3797_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_fst_3795_);
lean_ctor_set(v_reuseFailAlloc_3838_, 1, v___x_3808_);
v___x_3837_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
v_a_3778_ = v___x_3837_;
goto v___jp_3777_;
}
}
}
else
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3846_; 
lean_dec_ref(v___x_3808_);
lean_dec(v_val_3799_);
lean_del_object(v___x_3797_);
lean_dec(v_fst_3795_);
v_a_3839_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3841_ = v___x_3811_;
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3811_);
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
else
{
lean_object* v___x_3848_; 
lean_dec(v___x_3809_);
lean_dec(v_val_3799_);
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 1, v___x_3808_);
v___x_3848_ = v___x_3797_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_fst_3795_);
lean_ctor_set(v_reuseFailAlloc_3849_, 1, v___x_3808_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
v_a_3778_ = v___x_3848_;
goto v___jp_3777_;
}
}
}
}
}
}
}
v___jp_3777_:
{
size_t v___x_3779_; size_t v___x_3780_; 
v___x_3779_ = ((size_t)1ULL);
v___x_3780_ = lean_usize_add(v_i_3771_, v___x_3779_);
v_i_3771_ = v___x_3780_;
v_b_3772_ = v_a_3778_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg___boxed(lean_object* v_a_3854_, lean_object* v_as_3855_, lean_object* v_sz_3856_, lean_object* v_i_3857_, lean_object* v_b_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_){
_start:
{
size_t v_sz_boxed_3863_; size_t v_i_boxed_3864_; lean_object* v_res_3865_; 
v_sz_boxed_3863_ = lean_unbox_usize(v_sz_3856_);
lean_dec(v_sz_3856_);
v_i_boxed_3864_ = lean_unbox_usize(v_i_3857_);
lean_dec(v_i_3857_);
v_res_3865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(v_a_3854_, v_as_3855_, v_sz_boxed_3863_, v_i_boxed_3864_, v_b_3858_, v___y_3859_, v___y_3860_, v___y_3861_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec_ref(v___y_3859_);
lean_dec_ref(v_as_3855_);
lean_dec_ref(v_a_3854_);
return v_res_3865_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; 
v___x_3868_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__0));
v___x_3869_ = lean_box(1);
v___x_3870_ = l_Lean_CollectFVars_State_ofFVarSet(v___x_3869_, v___x_3868_);
return v___x_3870_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; 
v___x_3877_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__4));
v___x_3878_ = l_Lean_stringToMessageData(v___x_3877_);
return v___x_3878_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; 
v___x_3880_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__6));
v___x_3881_ = l_Lean_stringToMessageData(v___x_3880_);
return v___x_3881_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9(void){
_start:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; 
v___x_3883_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__8));
v___x_3884_ = l_Lean_stringToMessageData(v___x_3883_);
return v___x_3884_;
}
}
static lean_object* _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11(void){
_start:
{
lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___x_3886_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__10));
v___x_3887_ = l_Lean_stringToMessageData(v___x_3886_);
return v___x_3887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0(lean_object* v___x_3889_, lean_object* v_args_3890_, lean_object* v_ty_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_){
_start:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3897_ = lean_unsigned_to_nat(0u);
v___x_3898_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__1);
v___x_3899_ = lean_st_mk_ref(v___x_3898_);
v___x_3900_ = l_Lean_Expr_collectFVars(v_ty_3891_, v___x_3899_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
if (lean_obj_tag(v___x_3900_) == 0)
{
lean_object* v___x_3901_; size_t v_sz_3902_; size_t v___x_3903_; lean_object* v___x_3904_; 
lean_dec_ref_known(v___x_3900_, 1);
v___x_3901_ = lean_box(0);
v_sz_3902_ = lean_array_size(v_args_3890_);
v___x_3903_ = ((size_t)0ULL);
v___x_3904_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(v_args_3890_, v_sz_3902_, v___x_3903_, v___x_3901_, v___x_3899_, v___y_3892_, v___y_3894_, v___y_3895_);
if (lean_obj_tag(v___x_3904_) == 0)
{
lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3975_; 
v_isSharedCheck_3975_ = !lean_is_exclusive(v___x_3904_);
if (v_isSharedCheck_3975_ == 0)
{
lean_object* v_unused_3976_; 
v_unused_3976_ = lean_ctor_get(v___x_3904_, 0);
lean_dec(v_unused_3976_);
v___x_3906_ = v___x_3904_;
v_isShared_3907_ = v_isSharedCheck_3975_;
goto v_resetjp_3905_;
}
else
{
lean_dec(v___x_3904_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3975_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___x_3908_ = lean_st_ref_get(v___x_3899_);
lean_dec(v___x_3899_);
v___x_3909_ = l_Lean_CollectFVars_State_addDependencies(v___x_3908_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
if (lean_obj_tag(v___x_3909_) == 0)
{
lean_object* v_a_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; 
v_a_3910_ = lean_ctor_get(v___x_3909_, 0);
lean_inc(v_a_3910_);
lean_dec_ref_known(v___x_3909_, 1);
v___x_3911_ = lean_unsigned_to_nat(1u);
v___x_3912_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__3));
v___x_3913_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(v_a_3910_, v_args_3890_, v_sz_3902_, v___x_3903_, v___x_3912_, v___y_3892_, v___y_3894_, v___y_3895_);
lean_dec(v_a_3910_);
if (lean_obj_tag(v___x_3913_) == 0)
{
lean_object* v_a_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3958_; 
v_a_3914_ = lean_ctor_get(v___x_3913_, 0);
v_isSharedCheck_3958_ = !lean_is_exclusive(v___x_3913_);
if (v_isSharedCheck_3958_ == 0)
{
v___x_3916_ = v___x_3913_;
v_isShared_3917_ = v_isSharedCheck_3958_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_a_3914_);
lean_dec(v___x_3913_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3958_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
lean_object* v_fst_3918_; lean_object* v___x_3920_; uint8_t v_isShared_3921_; uint8_t v_isSharedCheck_3956_; 
v_fst_3918_ = lean_ctor_get(v_a_3914_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v_a_3914_);
if (v_isSharedCheck_3956_ == 0)
{
lean_object* v_unused_3957_; 
v_unused_3957_ = lean_ctor_get(v_a_3914_, 1);
lean_dec(v_unused_3957_);
v___x_3920_ = v_a_3914_;
v_isShared_3921_ = v_isSharedCheck_3956_;
goto v_resetjp_3919_;
}
else
{
lean_inc(v_fst_3918_);
lean_dec(v_a_3914_);
v___x_3920_ = lean_box(0);
v_isShared_3921_ = v_isSharedCheck_3956_;
goto v_resetjp_3919_;
}
v_resetjp_3919_:
{
lean_object* v___x_3922_; uint8_t v___x_3923_; 
v___x_3922_ = lean_array_get_size(v_fst_3918_);
v___x_3923_ = lean_nat_dec_eq(v___x_3922_, v___x_3897_);
if (v___x_3923_ == 0)
{
lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3927_; 
lean_del_object(v___x_3916_);
v___x_3924_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__5);
v___x_3925_ = l_Nat_reprFast(v___x_3922_);
if (v_isShared_3907_ == 0)
{
lean_ctor_set_tag(v___x_3906_, 3);
lean_ctor_set(v___x_3906_, 0, v___x_3925_);
v___x_3927_ = v___x_3906_;
goto v_reusejp_3926_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v___x_3925_);
v___x_3927_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3926_;
}
v_reusejp_3926_:
{
lean_object* v___x_3928_; lean_object* v___x_3930_; 
v___x_3928_ = l_Lean_MessageData_ofFormat(v___x_3927_);
if (v_isShared_3921_ == 0)
{
lean_ctor_set_tag(v___x_3920_, 7);
lean_ctor_set(v___x_3920_, 1, v___x_3928_);
lean_ctor_set(v___x_3920_, 0, v___x_3924_);
v___x_3930_ = v___x_3920_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v___x_3924_);
lean_ctor_set(v_reuseFailAlloc_3951_, 1, v___x_3928_);
v___x_3930_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___y_3934_; uint8_t v___x_3948_; 
v___x_3931_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__7);
v___x_3932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3932_, 0, v___x_3930_);
lean_ctor_set(v___x_3932_, 1, v___x_3931_);
v___x_3948_ = lean_nat_dec_eq(v___x_3922_, v___x_3911_);
if (v___x_3948_ == 0)
{
lean_object* v___x_3949_; 
v___x_3949_ = ((lean_object*)(l_Lean_Meta_checkImpossibleInstance___lam__0___closed__12));
v___y_3934_ = v___x_3949_;
goto v___jp_3933_;
}
else
{
lean_object* v___x_3950_; 
v___x_3950_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__10___redArg___closed__0));
v___y_3934_ = v___x_3950_;
goto v___jp_3933_;
}
v___jp_3933_:
{
lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; uint8_t v___x_3945_; 
lean_inc_ref(v___y_3934_);
v___x_3935_ = l_Lean_stringToMessageData(v___y_3934_);
v___x_3936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3936_, 0, v___x_3932_);
lean_ctor_set(v___x_3936_, 1, v___x_3935_);
v___x_3937_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__9);
v___x_3938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3936_);
lean_ctor_set(v___x_3938_, 1, v___x_3937_);
v___x_3939_ = lean_array_to_list(v_fst_3918_);
v___x_3940_ = l_Lean_MessageData_nil;
v___x_3941_ = l_Lean_MessageData_joinSep(v___x_3939_, v___x_3940_);
v___x_3942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3942_, 0, v___x_3938_);
lean_ctor_set(v___x_3942_, 1, v___x_3941_);
v___x_3943_ = lean_obj_once(&l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11, &l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11_once, _init_l_Lean_Meta_checkImpossibleInstance___lam__0___closed__11);
v___x_3944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3942_);
lean_ctor_set(v___x_3944_, 1, v___x_3943_);
v___x_3945_ = l_Lean_Expr_hasSorry(v___x_3889_);
if (v___x_3945_ == 0)
{
lean_object* v___x_3946_; 
v___x_3946_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_3944_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
return v___x_3946_;
}
else
{
lean_object* v___x_3947_; 
v___x_3947_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3(v___x_3944_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
return v___x_3947_;
}
}
}
}
}
else
{
lean_object* v___x_3954_; 
lean_del_object(v___x_3920_);
lean_dec(v_fst_3918_);
lean_del_object(v___x_3906_);
if (v_isShared_3917_ == 0)
{
lean_ctor_set(v___x_3916_, 0, v___x_3901_);
v___x_3954_ = v___x_3916_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v___x_3901_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
return v___x_3954_;
}
}
}
}
}
else
{
lean_object* v_a_3959_; lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3966_; 
lean_del_object(v___x_3906_);
v_a_3959_ = lean_ctor_get(v___x_3913_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v___x_3913_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3961_ = v___x_3913_;
v_isShared_3962_ = v_isSharedCheck_3966_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_a_3959_);
lean_dec(v___x_3913_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3966_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v___x_3964_; 
if (v_isShared_3962_ == 0)
{
v___x_3964_ = v___x_3961_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_a_3959_);
v___x_3964_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
return v___x_3964_;
}
}
}
}
else
{
lean_object* v_a_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3974_; 
lean_del_object(v___x_3906_);
v_a_3967_ = lean_ctor_get(v___x_3909_, 0);
v_isSharedCheck_3974_ = !lean_is_exclusive(v___x_3909_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3969_ = v___x_3909_;
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_a_3967_);
lean_dec(v___x_3909_);
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
lean_dec(v___x_3899_);
return v___x_3904_;
}
}
else
{
lean_dec(v___x_3899_);
return v___x_3900_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___lam__0___boxed(lean_object* v___x_3977_, lean_object* v_args_3978_, lean_object* v_ty_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_){
_start:
{
lean_object* v_res_3985_; 
v_res_3985_ = l_Lean_Meta_checkImpossibleInstance___lam__0(v___x_3977_, v_args_3978_, v_ty_3979_, v___y_3980_, v___y_3981_, v___y_3982_, v___y_3983_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
lean_dec(v___y_3981_);
lean_dec_ref(v___y_3980_);
lean_dec_ref(v_args_3978_);
lean_dec_ref(v___x_3977_);
return v_res_3985_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4(lean_object* v_e_3986_){
_start:
{
lean_object* v___x_3987_; 
v___x_3987_ = l_Lean_Expr_cleanupAnnotations(v_e_3986_);
lean_dec_ref(v_e_3986_);
switch(lean_obj_tag(v___x_3987_))
{
case 7:
{
lean_object* v_body_3988_; uint8_t v_binderInfo_3989_; uint8_t v___x_3990_; 
v_body_3988_ = lean_ctor_get(v___x_3987_, 2);
lean_inc_ref(v_body_3988_);
v_binderInfo_3989_ = lean_ctor_get_uint8(v___x_3987_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_3987_, 3);
v___x_3990_ = l_Lean_BinderInfo_isInstImplicit(v_binderInfo_3989_);
if (v___x_3990_ == 0)
{
lean_object* v___x_3991_; uint8_t v___x_3992_; 
v___x_3991_ = lean_unsigned_to_nat(0u);
v___x_3992_ = lean_expr_has_loose_bvar(v_body_3988_, v___x_3991_);
if (v___x_3992_ == 0)
{
uint8_t v___x_3993_; 
lean_dec_ref(v_body_3988_);
v___x_3993_ = 1;
return v___x_3993_;
}
else
{
v_e_3986_ = v_body_3988_;
goto _start;
}
}
else
{
v_e_3986_ = v_body_3988_;
goto _start;
}
}
case 8:
{
lean_object* v_body_3996_; 
v_body_3996_ = lean_ctor_get(v___x_3987_, 3);
lean_inc_ref(v_body_3996_);
lean_dec_ref_known(v___x_3987_, 4);
v_e_3986_ = v_body_3996_;
goto _start;
}
default: 
{
uint8_t v___x_3998_; 
lean_dec_ref(v___x_3987_);
v___x_3998_ = 0;
return v___x_3998_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4___boxed(lean_object* v_e_3999_){
_start:
{
uint8_t v_res_4000_; lean_object* v_r_4001_; 
v_res_4000_ = l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4(v_e_3999_);
v_r_4001_ = lean_box(v_res_4000_);
return v_r_4001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance(lean_object* v_cinfo_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_){
_start:
{
lean_object* v___x_4008_; uint8_t v___x_4009_; 
v___x_4008_ = l_Lean_ConstantInfo_type(v_cinfo_4002_);
lean_inc_ref(v___x_4008_);
v___x_4009_ = l_Lean_Expr_hasUnusedForallBindersWhere___at___00Lean_Meta_checkImpossibleInstance_spec__4(v___x_4008_);
if (v___x_4009_ == 0)
{
lean_object* v___x_4010_; lean_object* v___x_4011_; 
lean_dec_ref(v___x_4008_);
v___x_4010_ = lean_box(0);
v___x_4011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4011_, 0, v___x_4010_);
return v___x_4011_;
}
else
{
lean_object* v___f_4012_; uint8_t v___x_4013_; lean_object* v___x_4014_; 
lean_inc_ref(v___x_4008_);
v___f_4012_ = lean_alloc_closure((void*)(l_Lean_Meta_checkImpossibleInstance___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4012_, 0, v___x_4008_);
v___x_4013_ = 0;
v___x_4014_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_checkImpossibleInstance_spec__5___redArg(v___x_4008_, v___f_4012_, v___x_4013_, v_a_4003_, v_a_4004_, v_a_4005_, v_a_4006_);
return v___x_4014_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkImpossibleInstance___boxed(lean_object* v_cinfo_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_){
_start:
{
lean_object* v_res_4021_; 
v_res_4021_ = l_Lean_Meta_checkImpossibleInstance(v_cinfo_4015_, v_a_4016_, v_a_4017_, v_a_4018_, v_a_4019_);
lean_dec(v_a_4019_);
lean_dec_ref(v_a_4018_);
lean_dec(v_a_4017_);
lean_dec_ref(v_a_4016_);
lean_dec_ref(v_cinfo_4015_);
return v_res_4021_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0(lean_object* v_as_4022_, size_t v_sz_4023_, size_t v_i_4024_, lean_object* v_b_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
lean_object* v___x_4032_; 
v___x_4032_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___redArg(v_as_4022_, v_sz_4023_, v_i_4024_, v_b_4025_, v___y_4026_, v___y_4027_, v___y_4029_, v___y_4030_);
return v___x_4032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0___boxed(lean_object* v_as_4033_, lean_object* v_sz_4034_, lean_object* v_i_4035_, lean_object* v_b_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_){
_start:
{
size_t v_sz_boxed_4043_; size_t v_i_boxed_4044_; lean_object* v_res_4045_; 
v_sz_boxed_4043_ = lean_unbox_usize(v_sz_4034_);
lean_dec(v_sz_4034_);
v_i_boxed_4044_ = lean_unbox_usize(v_i_4035_);
lean_dec(v_i_4035_);
v_res_4045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__0(v_as_4033_, v_sz_boxed_4043_, v_i_boxed_4044_, v_b_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v___y_4039_);
lean_dec_ref(v___y_4038_);
lean_dec(v___y_4037_);
lean_dec_ref(v_as_4033_);
return v_res_4045_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1(lean_object* v_00_u03b2_4046_, lean_object* v_k_4047_, lean_object* v_t_4048_){
_start:
{
uint8_t v___x_4049_; 
v___x_4049_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1___redArg(v_k_4047_, v_t_4048_);
return v___x_4049_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1___boxed(lean_object* v_00_u03b2_4050_, lean_object* v_k_4051_, lean_object* v_t_4052_){
_start:
{
uint8_t v_res_4053_; lean_object* v_r_4054_; 
v_res_4053_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_checkImpossibleInstance_spec__1(v_00_u03b2_4050_, v_k_4051_, v_t_4052_);
lean_dec(v_t_4052_);
lean_dec(v_k_4051_);
v_r_4054_ = lean_box(v_res_4053_);
return v_r_4054_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2(lean_object* v_a_4055_, lean_object* v_as_4056_, size_t v_sz_4057_, size_t v_i_4058_, lean_object* v_b_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_){
_start:
{
lean_object* v___x_4065_; 
v___x_4065_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___redArg(v_a_4055_, v_as_4056_, v_sz_4057_, v_i_4058_, v_b_4059_, v___y_4060_, v___y_4062_, v___y_4063_);
return v___x_4065_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2___boxed(lean_object* v_a_4066_, lean_object* v_as_4067_, lean_object* v_sz_4068_, lean_object* v_i_4069_, lean_object* v_b_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_){
_start:
{
size_t v_sz_boxed_4076_; size_t v_i_boxed_4077_; lean_object* v_res_4078_; 
v_sz_boxed_4076_ = lean_unbox_usize(v_sz_4068_);
lean_dec(v_sz_4068_);
v_i_boxed_4077_ = lean_unbox_usize(v_i_4069_);
lean_dec(v_i_4069_);
v_res_4078_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_checkImpossibleInstance_spec__2(v_a_4066_, v_as_4067_, v_sz_boxed_4076_, v_i_boxed_4077_, v_b_4070_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4071_);
lean_dec_ref(v_as_4067_);
lean_dec_ref(v_a_4066_);
return v_res_4078_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4080_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__0));
v___x_4081_ = l_Lean_stringToMessageData(v___x_4080_);
return v___x_4081_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4083_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__2));
v___x_4084_ = l_Lean_stringToMessageData(v___x_4083_);
return v___x_4084_;
}
}
static lean_object* _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4086_ = ((lean_object*)(l_Lean_Meta_checkNonClassInstance___lam__0___closed__4));
v___x_4087_ = l_Lean_stringToMessageData(v___x_4086_);
return v___x_4087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0(lean_object* v_c_4088_, lean_object* v_x_4089_, lean_object* v_target_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_){
_start:
{
lean_object* v___x_4096_; 
lean_inc_ref(v_target_4090_);
v___x_4096_ = l_Lean_Meta_isClass_x3f(v_target_4090_, v___y_4091_, v___y_4092_, v___y_4093_, v___y_4094_);
if (lean_obj_tag(v___x_4096_) == 0)
{
lean_object* v_a_4097_; lean_object* v___x_4099_; uint8_t v_isShared_4100_; uint8_t v_isSharedCheck_4115_; 
v_a_4097_ = lean_ctor_get(v___x_4096_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v___x_4096_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4099_ = v___x_4096_;
v_isShared_4100_ = v_isSharedCheck_4115_;
goto v_resetjp_4098_;
}
else
{
lean_inc(v_a_4097_);
lean_dec(v___x_4096_);
v___x_4099_ = lean_box(0);
v_isShared_4100_ = v_isSharedCheck_4115_;
goto v_resetjp_4098_;
}
v_resetjp_4098_:
{
if (lean_obj_tag(v_a_4097_) == 0)
{
lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; 
lean_del_object(v___x_4099_);
v___x_4101_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__1, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__1_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__1);
v___x_4102_ = l_Lean_MessageData_ofExpr(v_c_4088_);
v___x_4103_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4101_);
lean_ctor_set(v___x_4103_, 1, v___x_4102_);
v___x_4104_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__3, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__3_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__3);
v___x_4105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4105_, 0, v___x_4103_);
lean_ctor_set(v___x_4105_, 1, v___x_4104_);
v___x_4106_ = l_Lean_MessageData_ofExpr(v_target_4090_);
v___x_4107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4105_);
lean_ctor_set(v___x_4107_, 1, v___x_4106_);
v___x_4108_ = lean_obj_once(&l_Lean_Meta_checkNonClassInstance___lam__0___closed__5, &l_Lean_Meta_checkNonClassInstance___lam__0___closed__5_once, _init_l_Lean_Meta_checkNonClassInstance___lam__0___closed__5);
v___x_4109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4109_, 0, v___x_4107_);
lean_ctor_set(v___x_4109_, 1, v___x_4108_);
v___x_4110_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_4109_, v___y_4091_, v___y_4092_, v___y_4093_, v___y_4094_);
return v___x_4110_;
}
else
{
lean_object* v___x_4111_; lean_object* v___x_4113_; 
lean_dec_ref_known(v_a_4097_, 1);
lean_dec_ref(v_target_4090_);
lean_dec_ref(v_c_4088_);
v___x_4111_ = lean_box(0);
if (v_isShared_4100_ == 0)
{
lean_ctor_set(v___x_4099_, 0, v___x_4111_);
v___x_4113_ = v___x_4099_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v___x_4111_);
v___x_4113_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
return v___x_4113_;
}
}
}
}
else
{
lean_object* v_a_4116_; lean_object* v___x_4118_; uint8_t v_isShared_4119_; uint8_t v_isSharedCheck_4123_; 
lean_dec_ref(v_target_4090_);
lean_dec_ref(v_c_4088_);
v_a_4116_ = lean_ctor_get(v___x_4096_, 0);
v_isSharedCheck_4123_ = !lean_is_exclusive(v___x_4096_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4118_ = v___x_4096_;
v_isShared_4119_ = v_isSharedCheck_4123_;
goto v_resetjp_4117_;
}
else
{
lean_inc(v_a_4116_);
lean_dec(v___x_4096_);
v___x_4118_ = lean_box(0);
v_isShared_4119_ = v_isSharedCheck_4123_;
goto v_resetjp_4117_;
}
v_resetjp_4117_:
{
lean_object* v___x_4121_; 
if (v_isShared_4119_ == 0)
{
v___x_4121_ = v___x_4118_;
goto v_reusejp_4120_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v_a_4116_);
v___x_4121_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4120_;
}
v_reusejp_4120_:
{
return v___x_4121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___lam__0___boxed(lean_object* v_c_4124_, lean_object* v_x_4125_, lean_object* v_target_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_){
_start:
{
lean_object* v_res_4132_; 
v_res_4132_ = l_Lean_Meta_checkNonClassInstance___lam__0(v_c_4124_, v_x_4125_, v_target_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_);
lean_dec(v___y_4130_);
lean_dec_ref(v___y_4129_);
lean_dec(v___y_4128_);
lean_dec_ref(v___y_4127_);
lean_dec_ref(v_x_4125_);
return v_res_4132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance(lean_object* v_c_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_){
_start:
{
lean_object* v___f_4139_; lean_object* v___x_4140_; 
lean_inc_ref(v_c_4133_);
v___f_4139_ = lean_alloc_closure((void*)(l_Lean_Meta_checkNonClassInstance___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4139_, 0, v_c_4133_);
lean_inc(v_a_4137_);
lean_inc_ref(v_a_4136_);
lean_inc(v_a_4135_);
lean_inc_ref(v_a_4134_);
v___x_4140_ = lean_infer_type(v_c_4133_, v_a_4134_, v_a_4135_, v_a_4136_, v_a_4137_);
if (lean_obj_tag(v___x_4140_) == 0)
{
lean_object* v_a_4141_; uint8_t v___x_4142_; lean_object* v___x_4143_; 
v_a_4141_ = lean_ctor_get(v___x_4140_, 0);
lean_inc(v_a_4141_);
lean_dec_ref_known(v___x_4140_, 1);
v___x_4142_ = 0;
v___x_4143_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v_a_4141_, v___f_4139_, v___x_4142_, v___x_4142_, v_a_4134_, v_a_4135_, v_a_4136_, v_a_4137_);
return v___x_4143_;
}
else
{
lean_object* v_a_4144_; lean_object* v___x_4146_; uint8_t v_isShared_4147_; uint8_t v_isSharedCheck_4151_; 
lean_dec_ref(v___f_4139_);
v_a_4144_ = lean_ctor_get(v___x_4140_, 0);
v_isSharedCheck_4151_ = !lean_is_exclusive(v___x_4140_);
if (v_isSharedCheck_4151_ == 0)
{
v___x_4146_ = v___x_4140_;
v_isShared_4147_ = v_isSharedCheck_4151_;
goto v_resetjp_4145_;
}
else
{
lean_inc(v_a_4144_);
lean_dec(v___x_4140_);
v___x_4146_ = lean_box(0);
v_isShared_4147_ = v_isSharedCheck_4151_;
goto v_resetjp_4145_;
}
v_resetjp_4145_:
{
lean_object* v___x_4149_; 
if (v_isShared_4147_ == 0)
{
v___x_4149_ = v___x_4146_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4150_; 
v_reuseFailAlloc_4150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4150_, 0, v_a_4144_);
v___x_4149_ = v_reuseFailAlloc_4150_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
return v___x_4149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_checkNonClassInstance___boxed(lean_object* v_c_4152_, lean_object* v_a_4153_, lean_object* v_a_4154_, lean_object* v_a_4155_, lean_object* v_a_4156_, lean_object* v_a_4157_){
_start:
{
lean_object* v_res_4158_; 
v_res_4158_ = l_Lean_Meta_checkNonClassInstance(v_c_4152_, v_a_4153_, v_a_4154_, v_a_4155_, v_a_4156_);
lean_dec(v_a_4156_);
lean_dec_ref(v_a_4155_);
lean_dec(v_a_4154_);
lean_dec_ref(v_a_4153_);
return v_res_4158_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg(lean_object* v_declName_4169_, lean_object* v___y_4170_){
_start:
{
lean_object* v___x_4172_; lean_object* v_env_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; 
v___x_4172_ = lean_st_ref_get(v___y_4170_);
v_env_4173_ = lean_ctor_get(v___x_4172_, 0);
lean_inc_ref(v_env_4173_);
lean_dec(v___x_4172_);
v___x_4174_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_4173_, v_declName_4169_);
v___x_4175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4175_, 0, v___x_4174_);
return v___x_4175_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg___boxed(lean_object* v_declName_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_){
_start:
{
lean_object* v_res_4179_; 
v_res_4179_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg(v_declName_4176_, v___y_4177_);
lean_dec(v___y_4177_);
return v_res_4179_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2(lean_object* v_declName_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_){
_start:
{
lean_object* v___x_4186_; 
v___x_4186_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg(v_declName_4180_, v___y_4184_);
return v___x_4186_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___boxed(lean_object* v_declName_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_){
_start:
{
lean_object* v_res_4193_; 
v_res_4193_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2(v_declName_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_);
lean_dec(v___y_4191_);
lean_dec_ref(v___y_4190_);
lean_dec(v___y_4189_);
lean_dec_ref(v___y_4188_);
return v_res_4193_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg(lean_object* v_declName_4194_, lean_object* v___y_4195_){
_start:
{
lean_object* v___x_4197_; lean_object* v_env_4198_; uint8_t v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; 
v___x_4197_ = lean_st_ref_get(v___y_4195_);
v_env_4198_ = lean_ctor_get(v___x_4197_, 0);
lean_inc_ref(v_env_4198_);
lean_dec(v___x_4197_);
v___x_4199_ = l_Lean_getReducibilityStatusCore(v_env_4198_, v_declName_4194_);
v___x_4200_ = lean_box(v___x_4199_);
v___x_4201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4201_, 0, v___x_4200_);
return v___x_4201_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg___boxed(lean_object* v_declName_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_){
_start:
{
lean_object* v_res_4205_; 
v_res_4205_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg(v_declName_4202_, v___y_4203_);
lean_dec(v___y_4203_);
return v_res_4205_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4(lean_object* v_declName_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_){
_start:
{
lean_object* v___x_4212_; 
v___x_4212_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg(v_declName_4206_, v___y_4210_);
return v___x_4212_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___boxed(lean_object* v_declName_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_){
_start:
{
lean_object* v_res_4219_; 
v_res_4219_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4(v_declName_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_);
lean_dec(v___y_4217_);
lean_dec_ref(v___y_4216_);
lean_dec(v___y_4215_);
lean_dec_ref(v___y_4214_);
return v_res_4219_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_4220_; lean_object* v___x_4221_; 
v___x_4220_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_4221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4221_, 0, v___x_4220_);
return v___x_4221_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; 
v___x_4222_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0);
v___x_4223_ = lean_unsigned_to_nat(0u);
v___x_4224_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4224_, 0, v___x_4223_);
lean_ctor_set(v___x_4224_, 1, v___x_4223_);
lean_ctor_set(v___x_4224_, 2, v___x_4223_);
lean_ctor_set(v___x_4224_, 3, v___x_4223_);
lean_ctor_set(v___x_4224_, 4, v___x_4222_);
lean_ctor_set(v___x_4224_, 5, v___x_4222_);
lean_ctor_set(v___x_4224_, 6, v___x_4222_);
lean_ctor_set(v___x_4224_, 7, v___x_4222_);
lean_ctor_set(v___x_4224_, 8, v___x_4222_);
lean_ctor_set(v___x_4224_, 9, v___x_4222_);
return v___x_4224_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4225_ = lean_unsigned_to_nat(32u);
v___x_4226_ = lean_mk_empty_array_with_capacity(v___x_4225_);
v___x_4227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4226_);
return v___x_4227_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3(void){
_start:
{
size_t v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; 
v___x_4228_ = ((size_t)5ULL);
v___x_4229_ = lean_unsigned_to_nat(0u);
v___x_4230_ = lean_unsigned_to_nat(32u);
v___x_4231_ = lean_mk_empty_array_with_capacity(v___x_4230_);
v___x_4232_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2);
v___x_4233_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4233_, 0, v___x_4232_);
lean_ctor_set(v___x_4233_, 1, v___x_4231_);
lean_ctor_set(v___x_4233_, 2, v___x_4229_);
lean_ctor_set(v___x_4233_, 3, v___x_4229_);
lean_ctor_set_usize(v___x_4233_, 4, v___x_4228_);
return v___x_4233_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4(void){
_start:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; 
v___x_4234_ = lean_box(1);
v___x_4235_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__3);
v___x_4236_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__0);
v___x_4237_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4237_, 0, v___x_4236_);
lean_ctor_set(v___x_4237_, 1, v___x_4235_);
lean_ctor_set(v___x_4237_, 2, v___x_4234_);
return v___x_4237_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6(void){
_start:
{
lean_object* v___x_4239_; lean_object* v___x_4240_; 
v___x_4239_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__5));
v___x_4240_ = l_Lean_stringToMessageData(v___x_4239_);
return v___x_4240_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8(void){
_start:
{
lean_object* v___x_4242_; lean_object* v___x_4243_; 
v___x_4242_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__7));
v___x_4243_ = l_Lean_stringToMessageData(v___x_4242_);
return v___x_4243_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10(void){
_start:
{
lean_object* v___x_4245_; lean_object* v___x_4246_; 
v___x_4245_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__9));
v___x_4246_ = l_Lean_stringToMessageData(v___x_4245_);
return v___x_4246_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12(void){
_start:
{
lean_object* v___x_4248_; lean_object* v___x_4249_; 
v___x_4248_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__11));
v___x_4249_ = l_Lean_stringToMessageData(v___x_4248_);
return v___x_4249_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14(void){
_start:
{
lean_object* v___x_4251_; lean_object* v___x_4252_; 
v___x_4251_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__13));
v___x_4252_ = l_Lean_stringToMessageData(v___x_4251_);
return v___x_4252_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16(void){
_start:
{
lean_object* v___x_4254_; lean_object* v___x_4255_; 
v___x_4254_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__15));
v___x_4255_ = l_Lean_stringToMessageData(v___x_4254_);
return v___x_4255_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18(void){
_start:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; 
v___x_4257_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__17));
v___x_4258_ = l_Lean_stringToMessageData(v___x_4257_);
return v___x_4258_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg(lean_object* v_msg_4259_, lean_object* v_declHint_4260_, lean_object* v___y_4261_){
_start:
{
lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v_env_4265_; uint8_t v___x_4266_; 
v___x_4263_ = lean_box(0);
v___x_4264_ = lean_st_ref_get(v___y_4261_);
v_env_4265_ = lean_ctor_get(v___x_4264_, 0);
lean_inc_ref(v_env_4265_);
lean_dec(v___x_4264_);
v___x_4266_ = l_Lean_Name_isAnonymous(v_declHint_4260_);
if (v___x_4266_ == 0)
{
uint8_t v_isExporting_4267_; 
v_isExporting_4267_ = lean_ctor_get_uint8(v_env_4265_, sizeof(void*)*13);
if (v_isExporting_4267_ == 0)
{
lean_object* v___x_4268_; 
lean_dec_ref(v_env_4265_);
lean_dec(v_declHint_4260_);
v___x_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4268_, 0, v_msg_4259_);
return v___x_4268_;
}
else
{
lean_object* v___x_4269_; uint8_t v___x_4270_; 
lean_inc_ref(v_env_4265_);
v___x_4269_ = l_Lean_Environment_setExporting(v_env_4265_, v___x_4266_);
lean_inc(v_declHint_4260_);
lean_inc_ref(v___x_4269_);
v___x_4270_ = l_Lean_Environment_contains(v___x_4269_, v_declHint_4260_, v_isExporting_4267_);
if (v___x_4270_ == 0)
{
lean_object* v___x_4271_; 
lean_dec_ref(v___x_4269_);
lean_dec_ref(v_env_4265_);
lean_dec(v_declHint_4260_);
v___x_4271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4271_, 0, v_msg_4259_);
return v___x_4271_;
}
else
{
lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v_c_4277_; lean_object* v___x_4278_; 
v___x_4272_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1);
v___x_4273_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4);
v___x_4274_ = l_Lean_Options_empty;
lean_inc_ref(v___x_4269_);
v___x_4275_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4275_, 0, v___x_4269_);
lean_ctor_set(v___x_4275_, 1, v___x_4272_);
lean_ctor_set(v___x_4275_, 2, v___x_4273_);
lean_ctor_set(v___x_4275_, 3, v___x_4274_);
lean_inc(v_declHint_4260_);
v___x_4276_ = l_Lean_MessageData_ofConstName(v_declHint_4260_, v___x_4266_);
v_c_4277_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_4277_, 0, v___x_4275_);
lean_ctor_set(v_c_4277_, 1, v___x_4276_);
v___x_4278_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_4269_, v_declHint_4260_);
lean_dec_ref(v___x_4269_);
if (lean_obj_tag(v___x_4278_) == 0)
{
lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; 
lean_dec_ref(v_env_4265_);
lean_dec(v_declHint_4260_);
v___x_4279_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6);
v___x_4280_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4280_, 0, v___x_4279_);
lean_ctor_set(v___x_4280_, 1, v_c_4277_);
v___x_4281_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__8);
v___x_4282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4282_, 0, v___x_4280_);
lean_ctor_set(v___x_4282_, 1, v___x_4281_);
v___x_4283_ = l_Lean_MessageData_note(v___x_4282_);
v___x_4284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4284_, 0, v_msg_4259_);
lean_ctor_set(v___x_4284_, 1, v___x_4283_);
v___x_4285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4285_, 0, v___x_4284_);
return v___x_4285_;
}
else
{
lean_object* v_val_4286_; lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4320_; 
v_val_4286_ = lean_ctor_get(v___x_4278_, 0);
v_isSharedCheck_4320_ = !lean_is_exclusive(v___x_4278_);
if (v_isSharedCheck_4320_ == 0)
{
v___x_4288_ = v___x_4278_;
v_isShared_4289_ = v_isSharedCheck_4320_;
goto v_resetjp_4287_;
}
else
{
lean_inc(v_val_4286_);
lean_dec(v___x_4278_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4320_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
lean_object* v___x_4290_; lean_object* v_moduleNames_4291_; lean_object* v_mod_4292_; uint8_t v___x_4293_; 
v___x_4290_ = l_Lean_Environment_header(v_env_4265_);
lean_dec_ref(v_env_4265_);
v_moduleNames_4291_ = lean_ctor_get(v___x_4290_, 4);
lean_inc_ref(v_moduleNames_4291_);
lean_dec_ref(v___x_4290_);
v_mod_4292_ = lean_array_get(v___x_4263_, v_moduleNames_4291_, v_val_4286_);
lean_dec(v_val_4286_);
lean_dec_ref(v_moduleNames_4291_);
v___x_4293_ = l_Lean_isPrivateName(v_declHint_4260_);
lean_dec(v_declHint_4260_);
if (v___x_4293_ == 0)
{
lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4305_; 
v___x_4294_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__10);
v___x_4295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4295_, 0, v___x_4294_);
lean_ctor_set(v___x_4295_, 1, v_c_4277_);
v___x_4296_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__12);
v___x_4297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4295_);
lean_ctor_set(v___x_4297_, 1, v___x_4296_);
v___x_4298_ = l_Lean_MessageData_ofName(v_mod_4292_);
v___x_4299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4299_, 0, v___x_4297_);
lean_ctor_set(v___x_4299_, 1, v___x_4298_);
v___x_4300_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__14);
v___x_4301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4301_, 0, v___x_4299_);
lean_ctor_set(v___x_4301_, 1, v___x_4300_);
v___x_4302_ = l_Lean_MessageData_note(v___x_4301_);
v___x_4303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4303_, 0, v_msg_4259_);
lean_ctor_set(v___x_4303_, 1, v___x_4302_);
if (v_isShared_4289_ == 0)
{
lean_ctor_set_tag(v___x_4288_, 0);
lean_ctor_set(v___x_4288_, 0, v___x_4303_);
v___x_4305_ = v___x_4288_;
goto v_reusejp_4304_;
}
else
{
lean_object* v_reuseFailAlloc_4306_; 
v_reuseFailAlloc_4306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4306_, 0, v___x_4303_);
v___x_4305_ = v_reuseFailAlloc_4306_;
goto v_reusejp_4304_;
}
v_reusejp_4304_:
{
return v___x_4305_;
}
}
else
{
lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4318_; 
v___x_4307_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__6);
v___x_4308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4308_, 0, v___x_4307_);
lean_ctor_set(v___x_4308_, 1, v_c_4277_);
v___x_4309_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__16);
v___x_4310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4310_, 0, v___x_4308_);
lean_ctor_set(v___x_4310_, 1, v___x_4309_);
v___x_4311_ = l_Lean_MessageData_ofName(v_mod_4292_);
v___x_4312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4312_, 0, v___x_4310_);
lean_ctor_set(v___x_4312_, 1, v___x_4311_);
v___x_4313_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__18);
v___x_4314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4314_, 0, v___x_4312_);
lean_ctor_set(v___x_4314_, 1, v___x_4313_);
v___x_4315_ = l_Lean_MessageData_note(v___x_4314_);
v___x_4316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4316_, 0, v_msg_4259_);
lean_ctor_set(v___x_4316_, 1, v___x_4315_);
if (v_isShared_4289_ == 0)
{
lean_ctor_set_tag(v___x_4288_, 0);
lean_ctor_set(v___x_4288_, 0, v___x_4316_);
v___x_4318_ = v___x_4288_;
goto v_reusejp_4317_;
}
else
{
lean_object* v_reuseFailAlloc_4319_; 
v_reuseFailAlloc_4319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4319_, 0, v___x_4316_);
v___x_4318_ = v_reuseFailAlloc_4319_;
goto v_reusejp_4317_;
}
v_reusejp_4317_:
{
return v___x_4318_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4321_; 
lean_dec_ref(v_env_4265_);
lean_dec(v_declHint_4260_);
v___x_4321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4321_, 0, v_msg_4259_);
return v___x_4321_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___boxed(lean_object* v_msg_4322_, lean_object* v_declHint_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_){
_start:
{
lean_object* v_res_4326_; 
v_res_4326_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg(v_msg_4322_, v_declHint_4323_, v___y_4324_);
lean_dec(v___y_4324_);
return v_res_4326_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11(lean_object* v_msg_4327_, lean_object* v_declHint_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_){
_start:
{
lean_object* v___x_4334_; lean_object* v_a_4335_; lean_object* v___x_4337_; uint8_t v_isShared_4338_; uint8_t v_isSharedCheck_4344_; 
v___x_4334_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg(v_msg_4327_, v_declHint_4328_, v___y_4332_);
v_a_4335_ = lean_ctor_get(v___x_4334_, 0);
v_isSharedCheck_4344_ = !lean_is_exclusive(v___x_4334_);
if (v_isSharedCheck_4344_ == 0)
{
v___x_4337_ = v___x_4334_;
v_isShared_4338_ = v_isSharedCheck_4344_;
goto v_resetjp_4336_;
}
else
{
lean_inc(v_a_4335_);
lean_dec(v___x_4334_);
v___x_4337_ = lean_box(0);
v_isShared_4338_ = v_isSharedCheck_4344_;
goto v_resetjp_4336_;
}
v_resetjp_4336_:
{
lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4342_; 
v___x_4339_ = l_Lean_unknownIdentifierMessageTag;
v___x_4340_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4340_, 0, v___x_4339_);
lean_ctor_set(v___x_4340_, 1, v_a_4335_);
if (v_isShared_4338_ == 0)
{
lean_ctor_set(v___x_4337_, 0, v___x_4340_);
v___x_4342_ = v___x_4337_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v___x_4340_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
return v___x_4342_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11___boxed(lean_object* v_msg_4345_, lean_object* v_declHint_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_){
_start:
{
lean_object* v_res_4352_; 
v_res_4352_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11(v_msg_4345_, v_declHint_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_);
lean_dec(v___y_4350_);
lean_dec_ref(v___y_4349_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
return v_res_4352_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg(lean_object* v_ref_4353_, lean_object* v_msg_4354_, lean_object* v___y_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_){
_start:
{
lean_object* v_toCold_4360_; lean_object* v_currRecDepth_4361_; lean_object* v_ref_4362_; uint16_t v_optionFlags_4363_; uint8_t v_suppressElabErrors_4364_; uint8_t v_checkDeprecated_4365_; uint8_t v_isRecordingDeps_4366_; lean_object* v_ref_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; 
v_toCold_4360_ = lean_ctor_get(v___y_4357_, 0);
v_currRecDepth_4361_ = lean_ctor_get(v___y_4357_, 1);
v_ref_4362_ = lean_ctor_get(v___y_4357_, 2);
v_optionFlags_4363_ = lean_ctor_get_uint16(v___y_4357_, sizeof(void*)*3);
v_suppressElabErrors_4364_ = lean_ctor_get_uint8(v___y_4357_, sizeof(void*)*3 + 2);
v_checkDeprecated_4365_ = lean_ctor_get_uint8(v___y_4357_, sizeof(void*)*3 + 3);
v_isRecordingDeps_4366_ = lean_ctor_get_uint8(v___y_4357_, sizeof(void*)*3 + 4);
v_ref_4367_ = l_Lean_replaceRef(v_ref_4353_, v_ref_4362_);
lean_inc(v_currRecDepth_4361_);
lean_inc_ref(v_toCold_4360_);
v___x_4368_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4368_, 0, v_toCold_4360_);
lean_ctor_set(v___x_4368_, 1, v_currRecDepth_4361_);
lean_ctor_set(v___x_4368_, 2, v_ref_4367_);
lean_ctor_set_uint16(v___x_4368_, sizeof(void*)*3, v_optionFlags_4363_);
lean_ctor_set_uint8(v___x_4368_, sizeof(void*)*3 + 2, v_suppressElabErrors_4364_);
lean_ctor_set_uint8(v___x_4368_, sizeof(void*)*3 + 3, v_checkDeprecated_4365_);
lean_ctor_set_uint8(v___x_4368_, sizeof(void*)*3 + 4, v_isRecordingDeps_4366_);
v___x_4369_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v_msg_4354_, v___y_4355_, v___y_4356_, v___x_4368_, v___y_4358_);
lean_dec_ref_known(v___x_4368_, 3);
return v___x_4369_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg___boxed(lean_object* v_ref_4370_, lean_object* v_msg_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_){
_start:
{
lean_object* v_res_4377_; 
v_res_4377_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg(v_ref_4370_, v_msg_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_);
lean_dec(v___y_4375_);
lean_dec_ref(v___y_4374_);
lean_dec(v___y_4373_);
lean_dec_ref(v___y_4372_);
lean_dec(v_ref_4370_);
return v_res_4377_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg(lean_object* v_ref_4378_, lean_object* v_msg_4379_, lean_object* v_declHint_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_){
_start:
{
lean_object* v___x_4386_; lean_object* v_a_4387_; lean_object* v___x_4388_; 
v___x_4386_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11(v_msg_4379_, v_declHint_4380_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
lean_inc(v_a_4387_);
lean_dec_ref(v___x_4386_);
v___x_4388_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg(v_ref_4378_, v_a_4387_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
return v___x_4388_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg___boxed(lean_object* v_ref_4389_, lean_object* v_msg_4390_, lean_object* v_declHint_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_){
_start:
{
lean_object* v_res_4397_; 
v_res_4397_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg(v_ref_4389_, v_msg_4390_, v_declHint_4391_, v___y_4392_, v___y_4393_, v___y_4394_, v___y_4395_);
lean_dec(v___y_4395_);
lean_dec_ref(v___y_4394_);
lean_dec(v___y_4393_);
lean_dec_ref(v___y_4392_);
lean_dec(v_ref_4389_);
return v_res_4397_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; 
v___x_4399_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__0));
v___x_4400_ = l_Lean_stringToMessageData(v___x_4399_);
return v___x_4400_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg(lean_object* v_ref_4401_, lean_object* v_constName_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_){
_start:
{
lean_object* v___x_4408_; uint8_t v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; 
v___x_4408_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1);
v___x_4409_ = 0;
lean_inc(v_constName_4402_);
v___x_4410_ = l_Lean_MessageData_ofConstName(v_constName_4402_, v___x_4409_);
v___x_4411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4411_, 0, v___x_4408_);
lean_ctor_set(v___x_4411_, 1, v___x_4410_);
v___x_4412_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_4413_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4413_, 0, v___x_4411_);
lean_ctor_set(v___x_4413_, 1, v___x_4412_);
v___x_4414_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg(v_ref_4401_, v___x_4413_, v_constName_4402_, v___y_4403_, v___y_4404_, v___y_4405_, v___y_4406_);
return v___x_4414_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_ref_4415_, lean_object* v_constName_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_){
_start:
{
lean_object* v_res_4422_; 
v_res_4422_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg(v_ref_4415_, v_constName_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
lean_dec(v_ref_4415_);
return v_res_4422_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(lean_object* v_constName_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_){
_start:
{
lean_object* v_ref_4429_; lean_object* v___x_4430_; 
v_ref_4429_ = lean_ctor_get(v___y_4426_, 2);
v___x_4430_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg(v_ref_4429_, v_constName_4423_, v___y_4424_, v___y_4425_, v___y_4426_, v___y_4427_);
return v___x_4430_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg___boxed(lean_object* v_constName_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_){
_start:
{
lean_object* v_res_4437_; 
v_res_4437_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(v_constName_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
lean_dec(v___y_4435_);
lean_dec_ref(v___y_4434_);
lean_dec(v___y_4433_);
lean_dec_ref(v___y_4432_);
return v_res_4437_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(lean_object* v_constName_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_){
_start:
{
lean_object* v___x_4444_; lean_object* v_env_4445_; uint8_t v___x_4446_; lean_object* v___x_4447_; 
v___x_4444_ = lean_st_ref_get(v___y_4442_);
v_env_4445_ = lean_ctor_get(v___x_4444_, 0);
lean_inc_ref(v_env_4445_);
lean_dec(v___x_4444_);
v___x_4446_ = 0;
lean_inc(v_constName_4438_);
v___x_4447_ = l_Lean_Environment_findConstVal_x3f(v_env_4445_, v_constName_4438_, v___x_4446_);
if (lean_obj_tag(v___x_4447_) == 0)
{
lean_object* v___x_4448_; 
v___x_4448_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(v_constName_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_);
return v___x_4448_;
}
else
{
lean_object* v_val_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4456_; 
lean_dec(v_constName_4438_);
v_val_4449_ = lean_ctor_get(v___x_4447_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4447_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4451_ = v___x_4447_;
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_val_4449_);
lean_dec(v___x_4447_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4454_; 
if (v_isShared_4452_ == 0)
{
lean_ctor_set_tag(v___x_4451_, 0);
v___x_4454_ = v___x_4451_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_val_4449_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0___boxed(lean_object* v_constName_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_){
_start:
{
lean_object* v_res_4463_; 
v_res_4463_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(v_constName_4457_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
lean_dec(v___y_4459_);
lean_dec_ref(v___y_4458_);
return v_res_4463_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(lean_object* v_a_4464_, lean_object* v_a_4465_){
_start:
{
if (lean_obj_tag(v_a_4464_) == 0)
{
lean_object* v___x_4466_; 
v___x_4466_ = l_List_reverse___redArg(v_a_4465_);
return v___x_4466_;
}
else
{
lean_object* v_head_4467_; lean_object* v_tail_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4477_; 
v_head_4467_ = lean_ctor_get(v_a_4464_, 0);
v_tail_4468_ = lean_ctor_get(v_a_4464_, 1);
v_isSharedCheck_4477_ = !lean_is_exclusive(v_a_4464_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4470_ = v_a_4464_;
v_isShared_4471_ = v_isSharedCheck_4477_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_tail_4468_);
lean_inc(v_head_4467_);
lean_dec(v_a_4464_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4477_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v___x_4472_; lean_object* v___x_4474_; 
v___x_4472_ = l_Lean_mkLevelParam(v_head_4467_);
if (v_isShared_4471_ == 0)
{
lean_ctor_set(v___x_4470_, 1, v_a_4465_);
lean_ctor_set(v___x_4470_, 0, v___x_4472_);
v___x_4474_ = v___x_4470_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v___x_4472_);
lean_ctor_set(v_reuseFailAlloc_4476_, 1, v_a_4465_);
v___x_4474_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
v_a_4464_ = v_tail_4468_;
v_a_4465_ = v___x_4474_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(lean_object* v_constName_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_){
_start:
{
lean_object* v___x_4484_; 
lean_inc(v_constName_4478_);
v___x_4484_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__0(v_constName_4478_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_);
if (lean_obj_tag(v___x_4484_) == 0)
{
lean_object* v_a_4485_; lean_object* v___x_4487_; uint8_t v_isShared_4488_; uint8_t v_isSharedCheck_4496_; 
v_a_4485_ = lean_ctor_get(v___x_4484_, 0);
v_isSharedCheck_4496_ = !lean_is_exclusive(v___x_4484_);
if (v_isSharedCheck_4496_ == 0)
{
v___x_4487_ = v___x_4484_;
v_isShared_4488_ = v_isSharedCheck_4496_;
goto v_resetjp_4486_;
}
else
{
lean_inc(v_a_4485_);
lean_dec(v___x_4484_);
v___x_4487_ = lean_box(0);
v_isShared_4488_ = v_isSharedCheck_4496_;
goto v_resetjp_4486_;
}
v_resetjp_4486_:
{
lean_object* v_levelParams_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4494_; 
v_levelParams_4489_ = lean_ctor_get(v_a_4485_, 1);
lean_inc(v_levelParams_4489_);
lean_dec(v_a_4485_);
v___x_4490_ = lean_box(0);
v___x_4491_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0_spec__1(v_levelParams_4489_, v___x_4490_);
v___x_4492_ = l_Lean_mkConst(v_constName_4478_, v___x_4491_);
if (v_isShared_4488_ == 0)
{
lean_ctor_set(v___x_4487_, 0, v___x_4492_);
v___x_4494_ = v___x_4487_;
goto v_reusejp_4493_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v___x_4492_);
v___x_4494_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4493_;
}
v_reusejp_4493_:
{
return v___x_4494_;
}
}
}
else
{
lean_object* v_a_4497_; lean_object* v___x_4499_; uint8_t v_isShared_4500_; uint8_t v_isSharedCheck_4504_; 
lean_dec(v_constName_4478_);
v_a_4497_ = lean_ctor_get(v___x_4484_, 0);
v_isSharedCheck_4504_ = !lean_is_exclusive(v___x_4484_);
if (v_isSharedCheck_4504_ == 0)
{
v___x_4499_ = v___x_4484_;
v_isShared_4500_ = v_isSharedCheck_4504_;
goto v_resetjp_4498_;
}
else
{
lean_inc(v_a_4497_);
lean_dec(v___x_4484_);
v___x_4499_ = lean_box(0);
v_isShared_4500_ = v_isSharedCheck_4504_;
goto v_resetjp_4498_;
}
v_resetjp_4498_:
{
lean_object* v___x_4502_; 
if (v_isShared_4500_ == 0)
{
v___x_4502_ = v___x_4499_;
goto v_reusejp_4501_;
}
else
{
lean_object* v_reuseFailAlloc_4503_; 
v_reuseFailAlloc_4503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4503_, 0, v_a_4497_);
v___x_4502_ = v_reuseFailAlloc_4503_;
goto v_reusejp_4501_;
}
v_reusejp_4501_:
{
return v___x_4502_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0___boxed(lean_object* v_constName_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_){
_start:
{
lean_object* v_res_4511_; 
v_res_4511_ = l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(v_constName_4505_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
lean_dec(v___y_4507_);
lean_dec_ref(v___y_4506_);
return v_res_4511_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_4512_; lean_object* v___x_4513_; 
v___x_4512_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_4513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4512_);
return v___x_4513_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg(){
_start:
{
lean_object* v___x_4515_; 
v___x_4515_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___closed__0);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg___boxed(lean_object* v___dummy_4516_){
_start:
{
lean_object* v_res_4517_; 
v_res_4517_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg();
return v_res_4517_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4518_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_4519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4519_, 0, v___x_4518_);
return v___x_4519_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_4520_; lean_object* v___x_4521_; 
v___x_4520_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0);
v___x_4521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4520_);
lean_ctor_set(v___x_4521_, 1, v___x_4520_);
return v___x_4521_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_4522_; 
v___x_4522_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9___redArg();
return v___x_4522_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4523_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0);
v___x_4524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4524_, 0, v___x_4523_);
lean_ctor_set(v___x_4524_, 1, v___x_4523_);
return v___x_4524_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; 
v___x_4525_ = lean_unsigned_to_nat(0u);
v___x_4526_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0);
v___x_4527_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4526_);
lean_ctor_set(v___x_4527_, 1, v___x_4526_);
lean_ctor_set(v___x_4527_, 2, v___x_4525_);
return v___x_4527_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; 
v___x_4528_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__4);
v___x_4529_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__3);
v___x_4530_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__0);
v___x_4531_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
v___x_4532_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4532_, 0, v___x_4531_);
lean_ctor_set(v___x_4532_, 1, v___x_4530_);
lean_ctor_set(v___x_4532_, 2, v___x_4529_);
lean_ctor_set(v___x_4532_, 3, v___x_4530_);
lean_ctor_set(v___x_4532_, 4, v___x_4530_);
lean_ctor_set(v___x_4532_, 5, v___x_4530_);
lean_ctor_set(v___x_4532_, 6, v___x_4530_);
lean_ctor_set(v___x_4532_, 7, v___x_4528_);
return v___x_4532_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg(lean_object* v_ext_4533_, lean_object* v_b_4534_, uint8_t v_kind_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_){
_start:
{
lean_object* v_toCold_4540_; lean_object* v_currNamespace_4541_; lean_object* v___x_4542_; lean_object* v_env_4543_; lean_object* v_nextMacroScope_4544_; lean_object* v_ngen_4545_; lean_object* v_auxDeclNGen_4546_; lean_object* v_traceState_4547_; lean_object* v_recordedDeps_4548_; lean_object* v_messages_4549_; lean_object* v_infoState_4550_; lean_object* v_snapshotTasks_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4578_; 
v_toCold_4540_ = lean_ctor_get(v___y_4537_, 0);
v_currNamespace_4541_ = lean_ctor_get(v_toCold_4540_, 4);
v___x_4542_ = lean_st_ref_take(v___y_4538_);
v_env_4543_ = lean_ctor_get(v___x_4542_, 0);
v_nextMacroScope_4544_ = lean_ctor_get(v___x_4542_, 1);
v_ngen_4545_ = lean_ctor_get(v___x_4542_, 2);
v_auxDeclNGen_4546_ = lean_ctor_get(v___x_4542_, 3);
v_traceState_4547_ = lean_ctor_get(v___x_4542_, 4);
v_recordedDeps_4548_ = lean_ctor_get(v___x_4542_, 6);
v_messages_4549_ = lean_ctor_get(v___x_4542_, 7);
v_infoState_4550_ = lean_ctor_get(v___x_4542_, 8);
v_snapshotTasks_4551_ = lean_ctor_get(v___x_4542_, 9);
v_isSharedCheck_4578_ = !lean_is_exclusive(v___x_4542_);
if (v_isSharedCheck_4578_ == 0)
{
lean_object* v_unused_4579_; 
v_unused_4579_ = lean_ctor_get(v___x_4542_, 5);
lean_dec(v_unused_4579_);
v___x_4553_ = v___x_4542_;
v_isShared_4554_ = v_isSharedCheck_4578_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_snapshotTasks_4551_);
lean_inc(v_infoState_4550_);
lean_inc(v_messages_4549_);
lean_inc(v_recordedDeps_4548_);
lean_inc(v_traceState_4547_);
lean_inc(v_auxDeclNGen_4546_);
lean_inc(v_ngen_4545_);
lean_inc(v_nextMacroScope_4544_);
lean_inc(v_env_4543_);
lean_dec(v___x_4542_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4578_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4558_; 
lean_inc(v_currNamespace_4541_);
v___x_4555_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_4543_, v_ext_4533_, v_b_4534_, v_kind_4535_, v_currNamespace_4541_);
v___x_4556_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1);
if (v_isShared_4554_ == 0)
{
lean_ctor_set(v___x_4553_, 5, v___x_4556_);
lean_ctor_set(v___x_4553_, 0, v___x_4555_);
v___x_4558_ = v___x_4553_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4577_; 
v_reuseFailAlloc_4577_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4577_, 0, v___x_4555_);
lean_ctor_set(v_reuseFailAlloc_4577_, 1, v_nextMacroScope_4544_);
lean_ctor_set(v_reuseFailAlloc_4577_, 2, v_ngen_4545_);
lean_ctor_set(v_reuseFailAlloc_4577_, 3, v_auxDeclNGen_4546_);
lean_ctor_set(v_reuseFailAlloc_4577_, 4, v_traceState_4547_);
lean_ctor_set(v_reuseFailAlloc_4577_, 5, v___x_4556_);
lean_ctor_set(v_reuseFailAlloc_4577_, 6, v_recordedDeps_4548_);
lean_ctor_set(v_reuseFailAlloc_4577_, 7, v_messages_4549_);
lean_ctor_set(v_reuseFailAlloc_4577_, 8, v_infoState_4550_);
lean_ctor_set(v_reuseFailAlloc_4577_, 9, v_snapshotTasks_4551_);
v___x_4558_ = v_reuseFailAlloc_4577_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v_mctx_4561_; lean_object* v_zetaDeltaFVarIds_4562_; lean_object* v_postponed_4563_; lean_object* v_diag_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4575_; 
v___x_4559_ = lean_st_ref_put(v___y_4538_, v___x_4558_);
v___x_4560_ = lean_st_ref_take(v___y_4536_);
v_mctx_4561_ = lean_ctor_get(v___x_4560_, 0);
v_zetaDeltaFVarIds_4562_ = lean_ctor_get(v___x_4560_, 2);
v_postponed_4563_ = lean_ctor_get(v___x_4560_, 3);
v_diag_4564_ = lean_ctor_get(v___x_4560_, 4);
v_isSharedCheck_4575_ = !lean_is_exclusive(v___x_4560_);
if (v_isSharedCheck_4575_ == 0)
{
lean_object* v_unused_4576_; 
v_unused_4576_ = lean_ctor_get(v___x_4560_, 1);
lean_dec(v_unused_4576_);
v___x_4566_ = v___x_4560_;
v_isShared_4567_ = v_isSharedCheck_4575_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_diag_4564_);
lean_inc(v_postponed_4563_);
lean_inc(v_zetaDeltaFVarIds_4562_);
lean_inc(v_mctx_4561_);
lean_dec(v___x_4560_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4575_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4571_; 
v___x_4568_ = lean_box(0);
v___x_4569_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5);
if (v_isShared_4567_ == 0)
{
lean_ctor_set(v___x_4566_, 1, v___x_4569_);
v___x_4571_ = v___x_4566_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v_mctx_4561_);
lean_ctor_set(v_reuseFailAlloc_4574_, 1, v___x_4569_);
lean_ctor_set(v_reuseFailAlloc_4574_, 2, v_zetaDeltaFVarIds_4562_);
lean_ctor_set(v_reuseFailAlloc_4574_, 3, v_postponed_4563_);
lean_ctor_set(v_reuseFailAlloc_4574_, 4, v_diag_4564_);
v___x_4571_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
lean_object* v___x_4572_; lean_object* v___x_4573_; 
v___x_4572_ = lean_st_ref_put(v___y_4536_, v___x_4571_);
v___x_4573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4573_, 0, v___x_4568_);
return v___x_4573_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___boxed(lean_object* v_ext_4580_, lean_object* v_b_4581_, lean_object* v_kind_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_){
_start:
{
uint8_t v_kind_boxed_4587_; lean_object* v_res_4588_; 
v_kind_boxed_4587_ = lean_unbox(v_kind_4582_);
v_res_4588_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg(v_ext_4580_, v_b_4581_, v_kind_boxed_4587_, v___y_4583_, v___y_4584_, v___y_4585_);
lean_dec(v___y_4585_);
lean_dec_ref(v___y_4584_);
lean_dec(v___y_4583_);
return v_res_4588_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1(lean_object* v_constName_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_){
_start:
{
lean_object* v___x_4595_; lean_object* v_env_4596_; uint8_t v___x_4597_; lean_object* v___x_4598_; 
v___x_4595_ = lean_st_ref_get(v___y_4593_);
v_env_4596_ = lean_ctor_get(v___x_4595_, 0);
lean_inc_ref(v_env_4596_);
lean_dec(v___x_4595_);
v___x_4597_ = 0;
lean_inc(v_constName_4589_);
v___x_4598_ = l_Lean_Environment_find_x3f(v_env_4596_, v_constName_4589_, v___x_4597_);
if (lean_obj_tag(v___x_4598_) == 0)
{
lean_object* v___x_4599_; 
v___x_4599_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(v_constName_4589_, v___y_4590_, v___y_4591_, v___y_4592_, v___y_4593_);
return v___x_4599_;
}
else
{
lean_object* v_val_4600_; lean_object* v___x_4602_; uint8_t v_isShared_4603_; uint8_t v_isSharedCheck_4607_; 
lean_dec(v_constName_4589_);
v_val_4600_ = lean_ctor_get(v___x_4598_, 0);
v_isSharedCheck_4607_ = !lean_is_exclusive(v___x_4598_);
if (v_isSharedCheck_4607_ == 0)
{
v___x_4602_ = v___x_4598_;
v_isShared_4603_ = v_isSharedCheck_4607_;
goto v_resetjp_4601_;
}
else
{
lean_inc(v_val_4600_);
lean_dec(v___x_4598_);
v___x_4602_ = lean_box(0);
v_isShared_4603_ = v_isSharedCheck_4607_;
goto v_resetjp_4601_;
}
v_resetjp_4601_:
{
lean_object* v___x_4605_; 
if (v_isShared_4603_ == 0)
{
lean_ctor_set_tag(v___x_4602_, 0);
v___x_4605_ = v___x_4602_;
goto v_reusejp_4604_;
}
else
{
lean_object* v_reuseFailAlloc_4606_; 
v_reuseFailAlloc_4606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4606_, 0, v_val_4600_);
v___x_4605_ = v_reuseFailAlloc_4606_;
goto v_reusejp_4604_;
}
v_reusejp_4604_:
{
return v___x_4605_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1___boxed(lean_object* v_constName_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_){
_start:
{
lean_object* v_res_4614_; 
v_res_4614_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1(v_constName_4608_, v___y_4609_, v___y_4610_, v___y_4611_, v___y_4612_);
lean_dec(v___y_4612_);
lean_dec_ref(v___y_4611_);
lean_dec(v___y_4610_);
lean_dec_ref(v___y_4609_);
return v_res_4614_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__1(void){
_start:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; 
v___x_4616_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__0));
v___x_4617_ = l_Lean_stringToMessageData(v___x_4616_);
return v___x_4617_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__3(void){
_start:
{
lean_object* v___x_4619_; lean_object* v___x_4620_; 
v___x_4619_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__2));
v___x_4620_ = l_Lean_stringToMessageData(v___x_4619_);
return v___x_4620_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__5(void){
_start:
{
lean_object* v___x_4622_; lean_object* v___x_4623_; 
v___x_4622_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__4));
v___x_4623_ = l_Lean_stringToMessageData(v___x_4622_);
return v___x_4623_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__7(void){
_start:
{
lean_object* v___x_4625_; lean_object* v___x_4626_; 
v___x_4625_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__6));
v___x_4626_ = l_Lean_stringToMessageData(v___x_4625_);
return v___x_4626_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__9(void){
_start:
{
lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4628_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__8));
v___x_4629_ = l_Lean_stringToMessageData(v___x_4628_);
return v___x_4629_;
}
}
static lean_object* _init_l_Lean_Meta_addInstance___closed__11(void){
_start:
{
lean_object* v___x_4631_; lean_object* v___x_4632_; 
v___x_4631_ = ((lean_object*)(l_Lean_Meta_addInstance___closed__10));
v___x_4632_ = l_Lean_stringToMessageData(v___x_4631_);
return v___x_4632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance(lean_object* v_declName_4633_, uint8_t v_attrKind_4634_, lean_object* v_prio_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_){
_start:
{
lean_object* v___x_4641_; 
lean_inc(v_declName_4633_);
v___x_4641_ = l_Lean_mkConstWithLevelParams___at___00Lean_Meta_addInstance_spec__0(v_declName_4633_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
if (lean_obj_tag(v___x_4641_) == 0)
{
lean_object* v_a_4642_; lean_object* v___y_4644_; lean_object* v___y_4645_; lean_object* v___y_4646_; lean_object* v___y_4647_; lean_object* v___y_4648_; lean_object* v___y_4649_; lean_object* v___x_4654_; 
v_a_4642_ = lean_ctor_get(v___x_4641_, 0);
lean_inc(v_a_4642_);
lean_dec_ref_known(v___x_4641_, 1);
lean_inc(v_declName_4633_);
v___x_4654_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1(v_declName_4633_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
if (lean_obj_tag(v___x_4654_) == 0)
{
lean_object* v_a_4655_; lean_object* v___y_4657_; lean_object* v___y_4658_; lean_object* v___y_4659_; lean_object* v___y_4660_; lean_object* v___y_4661_; lean_object* v___y_4662_; lean_object* v___y_4673_; lean_object* v___y_4674_; lean_object* v___y_4675_; lean_object* v___y_4676_; lean_object* v___y_4677_; lean_object* v___y_4695_; lean_object* v___y_4696_; lean_object* v___y_4697_; lean_object* v___y_4698_; lean_object* v___x_4743_; uint8_t v___x_4744_; 
v_a_4655_ = lean_ctor_get(v___x_4654_, 0);
lean_inc(v_a_4655_);
lean_dec_ref_known(v___x_4654_, 1);
v___x_4743_ = l_Lean_ConstantInfo_type(v_a_4655_);
v___x_4744_ = l_Lean_Expr_hasSorry(v___x_4743_);
lean_dec_ref(v___x_4743_);
if (v___x_4744_ == 0)
{
lean_object* v___x_4745_; 
lean_inc(v_a_4642_);
v___x_4745_ = l_Lean_Meta_checkNonClassInstance(v_a_4642_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
if (lean_obj_tag(v___x_4745_) == 0)
{
lean_object* v___x_4746_; 
lean_dec_ref_known(v___x_4745_, 1);
v___x_4746_ = l_Lean_Meta_checkImpossibleInstance(v_a_4655_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
if (lean_obj_tag(v___x_4746_) == 0)
{
lean_dec_ref_known(v___x_4746_, 1);
v___y_4695_ = v_a_4636_;
v___y_4696_ = v_a_4637_;
v___y_4697_ = v_a_4638_;
v___y_4698_ = v_a_4639_;
goto v___jp_4694_;
}
else
{
lean_dec(v_a_4655_);
lean_dec(v_a_4642_);
lean_dec(v_prio_4635_);
lean_dec(v_declName_4633_);
return v___x_4746_;
}
}
else
{
lean_dec(v_a_4655_);
lean_dec(v_a_4642_);
lean_dec(v_prio_4635_);
lean_dec(v_declName_4633_);
return v___x_4745_;
}
}
else
{
v___y_4695_ = v_a_4636_;
v___y_4696_ = v_a_4637_;
v___y_4697_ = v_a_4638_;
v___y_4698_ = v_a_4639_;
goto v___jp_4694_;
}
v___jp_4656_:
{
lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
lean_dec_ref(v___y_4660_);
lean_dec_ref(v___y_4658_);
v___x_4663_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__1, &l_Lean_Meta_addInstance___closed__1_once, _init_l_Lean_Meta_addInstance___closed__1);
v___x_4664_ = l_Lean_MessageData_ofName(v_declName_4633_);
v___x_4665_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4665_, 0, v___x_4663_);
lean_ctor_set(v___x_4665_, 1, v___x_4664_);
v___x_4666_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__3, &l_Lean_Meta_addInstance___closed__3_once, _init_l_Lean_Meta_addInstance___closed__3);
v___x_4667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4667_, 0, v___x_4665_);
lean_ctor_set(v___x_4667_, 1, v___x_4666_);
v___x_4668_ = l_Lean_ConstantInfo_type(v_a_4655_);
lean_dec(v_a_4655_);
v___x_4669_ = l_Lean_indentExpr(v___x_4668_);
v___x_4670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4670_, 0, v___x_4667_);
lean_ctor_set(v___x_4670_, 1, v___x_4669_);
v___x_4671_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_4670_, v___y_4662_, v___y_4657_, v___y_4661_, v___y_4659_);
return v___x_4671_;
}
v___jp_4672_:
{
lean_object* v___x_4678_; lean_object* v_a_4679_; lean_object* v___x_4680_; 
lean_inc(v_declName_4633_);
v___x_4678_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_addInstance_spec__2___redArg(v_declName_4633_, v___y_4677_);
v_a_4679_ = lean_ctor_get(v___x_4678_, 0);
lean_inc(v_a_4679_);
lean_dec_ref(v___x_4678_);
lean_inc(v_a_4642_);
v___x_4680_ = l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder(v_a_4642_, v_a_4679_, v___y_4674_, v___y_4675_, v___y_4676_, v___y_4677_);
if (lean_obj_tag(v___x_4680_) == 0)
{
lean_object* v_a_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; uint8_t v___x_4684_; 
v_a_4681_ = lean_ctor_get(v___x_4680_, 0);
lean_inc(v_a_4681_);
lean_dec_ref_known(v___x_4680_, 1);
v___x_4682_ = lean_unsigned_to_nat(0u);
v___x_4683_ = lean_array_get_size(v___y_4673_);
v___x_4684_ = lean_nat_dec_lt(v___x_4682_, v___x_4683_);
if (v___x_4684_ == 0)
{
lean_dec(v_a_4642_);
lean_dec(v_prio_4635_);
v___y_4657_ = v___y_4675_;
v___y_4658_ = v___y_4673_;
v___y_4659_ = v___y_4677_;
v___y_4660_ = v_a_4681_;
v___y_4661_ = v___y_4676_;
v___y_4662_ = v___y_4674_;
goto v___jp_4656_;
}
else
{
lean_object* v___x_4685_; 
v___x_4685_ = lean_array_fget_borrowed(v___y_4673_, v___x_4682_);
if (lean_obj_tag(v___x_4685_) == 4)
{
lean_dec(v_a_4655_);
v___y_4644_ = v___y_4673_;
v___y_4645_ = v_a_4681_;
v___y_4646_ = v___y_4674_;
v___y_4647_ = v___y_4675_;
v___y_4648_ = v___y_4676_;
v___y_4649_ = v___y_4677_;
goto v___jp_4643_;
}
else
{
lean_dec(v_a_4642_);
lean_dec(v_prio_4635_);
v___y_4657_ = v___y_4675_;
v___y_4658_ = v___y_4673_;
v___y_4659_ = v___y_4677_;
v___y_4660_ = v_a_4681_;
v___y_4661_ = v___y_4676_;
v___y_4662_ = v___y_4674_;
goto v___jp_4656_;
}
}
}
else
{
lean_object* v_a_4686_; lean_object* v___x_4688_; uint8_t v_isShared_4689_; uint8_t v_isSharedCheck_4693_; 
lean_dec_ref(v___y_4673_);
lean_dec(v_a_4655_);
lean_dec(v_a_4642_);
lean_dec(v_prio_4635_);
lean_dec(v_declName_4633_);
v_a_4686_ = lean_ctor_get(v___x_4680_, 0);
v_isSharedCheck_4693_ = !lean_is_exclusive(v___x_4680_);
if (v_isSharedCheck_4693_ == 0)
{
v___x_4688_ = v___x_4680_;
v_isShared_4689_ = v_isSharedCheck_4693_;
goto v_resetjp_4687_;
}
else
{
lean_inc(v_a_4686_);
lean_dec(v___x_4680_);
v___x_4688_ = lean_box(0);
v_isShared_4689_ = v_isSharedCheck_4693_;
goto v_resetjp_4687_;
}
v_resetjp_4687_:
{
lean_object* v___x_4691_; 
if (v_isShared_4689_ == 0)
{
v___x_4691_ = v___x_4688_;
goto v_reusejp_4690_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v_a_4686_);
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
v___jp_4694_:
{
lean_object* v___x_4699_; 
lean_inc(v_a_4642_);
v___x_4699_ = l___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey(v_a_4642_, v___y_4695_, v___y_4696_, v___y_4697_, v___y_4698_);
if (lean_obj_tag(v___x_4699_) == 0)
{
lean_object* v_a_4700_; lean_object* v___x_4701_; lean_object* v_a_4702_; uint8_t v___x_4703_; uint8_t v___x_4704_; uint8_t v___x_4705_; 
v_a_4700_ = lean_ctor_get(v___x_4699_, 0);
lean_inc(v_a_4700_);
lean_dec_ref_known(v___x_4699_, 1);
lean_inc(v_declName_4633_);
v___x_4701_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_addInstance_spec__4___redArg(v_declName_4633_, v___y_4698_);
v_a_4702_ = lean_ctor_get(v___x_4701_, 0);
lean_inc(v_a_4702_);
lean_dec_ref(v___x_4701_);
v___x_4703_ = 1;
v___x_4704_ = lean_unbox(v_a_4702_);
lean_dec(v_a_4702_);
v___x_4705_ = l_Lean_instBEqReducibilityStatus_beq(v___x_4704_, v___x_4703_);
if (v___x_4705_ == 0)
{
v___y_4673_ = v_a_4700_;
v___y_4674_ = v___y_4695_;
v___y_4675_ = v___y_4696_;
v___y_4676_ = v___y_4697_;
v___y_4677_ = v___y_4698_;
goto v___jp_4672_;
}
else
{
lean_object* v___x_4706_; 
lean_inc(v_declName_4633_);
v___x_4706_ = l_Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1(v_declName_4633_, v___y_4695_, v___y_4696_, v___y_4697_, v___y_4698_);
if (lean_obj_tag(v___x_4706_) == 0)
{
lean_object* v_a_4707_; uint8_t v___x_4708_; 
v_a_4707_ = lean_ctor_get(v___x_4706_, 0);
lean_inc(v_a_4707_);
lean_dec_ref_known(v___x_4706_, 1);
v___x_4708_ = l_Lean_ConstantInfo_isDefinition(v_a_4707_);
lean_dec(v_a_4707_);
if (v___x_4708_ == 0)
{
lean_object* v___x_4709_; lean_object* v_env_4710_; uint8_t v___x_4711_; 
v___x_4709_ = lean_st_ref_get(v___y_4698_);
v_env_4710_ = lean_ctor_get(v___x_4709_, 0);
lean_inc_ref(v_env_4710_);
lean_dec(v___x_4709_);
lean_inc(v_declName_4633_);
v___x_4711_ = l_Lean_wasOriginallyDefn(v_env_4710_, v_declName_4633_);
if (v___x_4711_ == 0)
{
v___y_4673_ = v_a_4700_;
v___y_4674_ = v___y_4695_;
v___y_4675_ = v___y_4696_;
v___y_4676_ = v___y_4697_;
v___y_4677_ = v___y_4698_;
goto v___jp_4672_;
}
else
{
lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; 
v___x_4712_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__5, &l_Lean_Meta_addInstance___closed__5_once, _init_l_Lean_Meta_addInstance___closed__5);
lean_inc(v_declName_4633_);
v___x_4713_ = l_Lean_MessageData_ofName(v_declName_4633_);
v___x_4714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4712_);
lean_ctor_set(v___x_4714_, 1, v___x_4713_);
v___x_4715_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__7, &l_Lean_Meta_addInstance___closed__7_once, _init_l_Lean_Meta_addInstance___closed__7);
v___x_4716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4716_, 0, v___x_4714_);
lean_ctor_set(v___x_4716_, 1, v___x_4715_);
v___x_4717_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3(v___x_4716_, v___y_4695_, v___y_4696_, v___y_4697_, v___y_4698_);
if (lean_obj_tag(v___x_4717_) == 0)
{
lean_dec_ref_known(v___x_4717_, 1);
v___y_4673_ = v_a_4700_;
v___y_4674_ = v___y_4695_;
v___y_4675_ = v___y_4696_;
v___y_4676_ = v___y_4697_;
v___y_4677_ = v___y_4698_;
goto v___jp_4672_;
}
else
{
lean_dec(v_a_4700_);
lean_dec(v_a_4655_);
lean_dec(v_a_4642_);
lean_dec(v_prio_4635_);
lean_dec(v_declName_4633_);
return v___x_4717_;
}
}
}
else
{
lean_object* v___x_4718_; lean_object* v___x_4719_; uint8_t v___x_4720_; 
v___x_4718_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4697_);
v___x_4719_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_warnClassDefReducibility));
v___x_4720_ = l_Lean_Option_get___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__4(v___x_4718_, v___x_4719_);
lean_dec_ref(v___x_4718_);
if (v___x_4720_ == 0)
{
v___y_4673_ = v_a_4700_;
v___y_4674_ = v___y_4695_;
v___y_4675_ = v___y_4696_;
v___y_4676_ = v___y_4697_;
v___y_4677_ = v___y_4698_;
goto v___jp_4672_;
}
else
{
lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; 
v___x_4721_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__9, &l_Lean_Meta_addInstance___closed__9_once, _init_l_Lean_Meta_addInstance___closed__9);
lean_inc(v_declName_4633_);
v___x_4722_ = l_Lean_MessageData_ofName(v_declName_4633_);
v___x_4723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4723_, 0, v___x_4721_);
lean_ctor_set(v___x_4723_, 1, v___x_4722_);
v___x_4724_ = lean_obj_once(&l_Lean_Meta_addInstance___closed__11, &l_Lean_Meta_addInstance___closed__11_once, _init_l_Lean_Meta_addInstance___closed__11);
v___x_4725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4725_, 0, v___x_4723_);
lean_ctor_set(v___x_4725_, 1, v___x_4724_);
v___x_4726_ = l_Lean_logWarning___at___00Lean_Meta_checkImpossibleInstance_spec__3(v___x_4725_, v___y_4695_, v___y_4696_, v___y_4697_, v___y_4698_);
if (lean_obj_tag(v___x_4726_) == 0)
{
lean_dec_ref_known(v___x_4726_, 1);
v___y_4673_ = v_a_4700_;
v___y_4674_ = v___y_4695_;
v___y_4675_ = v___y_4696_;
v___y_4676_ = v___y_4697_;
v___y_4677_ = v___y_4698_;
goto v___jp_4672_;
}
else
{
lean_dec(v_a_4700_);
lean_dec(v_a_4655_);
lean_dec(v_a_4642_);
lean_dec(v_prio_4635_);
lean_dec(v_declName_4633_);
return v___x_4726_;
}
}
}
}
else
{
lean_object* v_a_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4734_; 
lean_dec(v_a_4700_);
lean_dec(v_a_4655_);
lean_dec(v_a_4642_);
lean_dec(v_prio_4635_);
lean_dec(v_declName_4633_);
v_a_4727_ = lean_ctor_get(v___x_4706_, 0);
v_isSharedCheck_4734_ = !lean_is_exclusive(v___x_4706_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4729_ = v___x_4706_;
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_a_4727_);
lean_dec(v___x_4706_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
lean_object* v___x_4732_; 
if (v_isShared_4730_ == 0)
{
v___x_4732_ = v___x_4729_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v_a_4727_);
v___x_4732_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
return v___x_4732_;
}
}
}
}
}
else
{
lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4742_; 
lean_dec(v_a_4655_);
lean_dec(v_a_4642_);
lean_dec(v_prio_4635_);
lean_dec(v_declName_4633_);
v_a_4735_ = lean_ctor_get(v___x_4699_, 0);
v_isSharedCheck_4742_ = !lean_is_exclusive(v___x_4699_);
if (v_isSharedCheck_4742_ == 0)
{
v___x_4737_ = v___x_4699_;
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v___x_4699_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4740_; 
if (v_isShared_4738_ == 0)
{
v___x_4740_ = v___x_4737_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4741_; 
v_reuseFailAlloc_4741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4741_, 0, v_a_4735_);
v___x_4740_ = v_reuseFailAlloc_4741_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
return v___x_4740_;
}
}
}
}
}
else
{
lean_object* v_a_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4754_; 
lean_dec(v_a_4642_);
lean_dec(v_prio_4635_);
lean_dec(v_declName_4633_);
v_a_4747_ = lean_ctor_get(v___x_4654_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___x_4654_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4749_ = v___x_4654_;
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_a_4747_);
lean_dec(v___x_4654_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
lean_object* v___x_4752_; 
if (v_isShared_4750_ == 0)
{
v___x_4752_ = v___x_4749_;
goto v_reusejp_4751_;
}
else
{
lean_object* v_reuseFailAlloc_4753_; 
v_reuseFailAlloc_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4753_, 0, v_a_4747_);
v___x_4752_ = v_reuseFailAlloc_4753_;
goto v_reusejp_4751_;
}
v_reusejp_4751_:
{
return v___x_4752_;
}
}
}
v___jp_4643_:
{
lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; 
v___x_4650_ = l_Lean_Meta_instanceExtension;
v___x_4651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4651_, 0, v_declName_4633_);
v___x_4652_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_4652_, 0, v___y_4644_);
lean_ctor_set(v___x_4652_, 1, v_a_4642_);
lean_ctor_set(v___x_4652_, 2, v_prio_4635_);
lean_ctor_set(v___x_4652_, 3, v___x_4651_);
lean_ctor_set(v___x_4652_, 4, v___y_4645_);
lean_ctor_set_uint8(v___x_4652_, sizeof(void*)*5, v_attrKind_4634_);
v___x_4653_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg(v___x_4650_, v___x_4652_, v_attrKind_4634_, v___y_4647_, v___y_4648_, v___y_4649_);
return v___x_4653_;
}
}
else
{
lean_object* v_a_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4762_; 
lean_dec(v_prio_4635_);
lean_dec(v_declName_4633_);
v_a_4755_ = lean_ctor_get(v___x_4641_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v___x_4641_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4757_ = v___x_4641_;
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_a_4755_);
lean_dec(v___x_4641_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v___x_4760_; 
if (v_isShared_4758_ == 0)
{
v___x_4760_ = v___x_4757_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_a_4755_);
v___x_4760_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
return v___x_4760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addInstance___boxed(lean_object* v_declName_4763_, lean_object* v_attrKind_4764_, lean_object* v_prio_4765_, lean_object* v_a_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_, lean_object* v_a_4770_){
_start:
{
uint8_t v_attrKind_boxed_4771_; lean_object* v_res_4772_; 
v_attrKind_boxed_4771_ = lean_unbox(v_attrKind_4764_);
v_res_4772_ = l_Lean_Meta_addInstance(v_declName_4763_, v_attrKind_boxed_4771_, v_prio_4765_, v_a_4766_, v_a_4767_, v_a_4768_, v_a_4769_);
lean_dec(v_a_4769_);
lean_dec_ref(v_a_4768_);
lean_dec(v_a_4767_);
lean_dec_ref(v_a_4766_);
return v_res_4772_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3(lean_object* v_00_u03b1_4773_, lean_object* v_00_u03b2_4774_, lean_object* v_00_u03c3_4775_, lean_object* v_ext_4776_, lean_object* v_b_4777_, uint8_t v_kind_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_){
_start:
{
lean_object* v___x_4784_; 
v___x_4784_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg(v_ext_4776_, v_b_4777_, v_kind_4778_, v___y_4780_, v___y_4781_, v___y_4782_);
return v___x_4784_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___boxed(lean_object* v_00_u03b1_4785_, lean_object* v_00_u03b2_4786_, lean_object* v_00_u03c3_4787_, lean_object* v_ext_4788_, lean_object* v_b_4789_, lean_object* v_kind_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_){
_start:
{
uint8_t v_kind_boxed_4796_; lean_object* v_res_4797_; 
v_kind_boxed_4796_ = lean_unbox(v_kind_4790_);
v_res_4797_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3(v_00_u03b1_4785_, v_00_u03b2_4786_, v_00_u03c3_4787_, v_ext_4788_, v_b_4789_, v_kind_boxed_4796_, v___y_4791_, v___y_4792_, v___y_4793_, v___y_4794_);
lean_dec(v___y_4794_);
lean_dec_ref(v___y_4793_);
lean_dec(v___y_4792_);
lean_dec_ref(v___y_4791_);
return v_res_4797_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3(lean_object* v_00_u03b1_4798_, lean_object* v_constName_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_){
_start:
{
lean_object* v___x_4805_; 
v___x_4805_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___redArg(v_constName_4799_, v___y_4800_, v___y_4801_, v___y_4802_, v___y_4803_);
return v___x_4805_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3___boxed(lean_object* v_00_u03b1_4806_, lean_object* v_constName_4807_, lean_object* v___y_4808_, lean_object* v___y_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_){
_start:
{
lean_object* v_res_4813_; 
v_res_4813_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3(v_00_u03b1_4806_, v_constName_4807_, v___y_4808_, v___y_4809_, v___y_4810_, v___y_4811_);
lean_dec(v___y_4811_);
lean_dec_ref(v___y_4810_);
lean_dec(v___y_4809_);
lean_dec_ref(v___y_4808_);
return v_res_4813_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_4814_){
_start:
{
lean_object* v___x_4815_; 
v___x_4815_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
return v___x_4815_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6___redArg(){
_start:
{
lean_object* v___x_4817_; 
v___x_4817_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
return v___x_4817_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6___redArg___boxed(lean_object* v___dummy_4818_){
_start:
{
lean_object* v_res_4819_; 
v_res_4819_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6___redArg();
return v_res_4819_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3_spec__6(lean_object* v_00_u03b2_4820_){
_start:
{
lean_object* v___x_4821_; 
v___x_4821_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
return v___x_4821_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6(lean_object* v_00_u03b1_4822_, lean_object* v_ref_4823_, lean_object* v_constName_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_){
_start:
{
lean_object* v___x_4830_; 
v___x_4830_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg(v_ref_4823_, v_constName_4824_, v___y_4825_, v___y_4826_, v___y_4827_, v___y_4828_);
return v___x_4830_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b1_4831_, lean_object* v_ref_4832_, lean_object* v_constName_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_){
_start:
{
lean_object* v_res_4839_; 
v_res_4839_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6(v_00_u03b1_4831_, v_ref_4832_, v_constName_4833_, v___y_4834_, v___y_4835_, v___y_4836_, v___y_4837_);
lean_dec(v___y_4837_);
lean_dec_ref(v___y_4836_);
lean_dec(v___y_4835_);
lean_dec_ref(v___y_4834_);
lean_dec(v_ref_4832_);
return v_res_4839_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8(lean_object* v_00_u03b1_4840_, lean_object* v_ref_4841_, lean_object* v_msg_4842_, lean_object* v_declHint_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_){
_start:
{
lean_object* v___x_4849_; 
v___x_4849_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___redArg(v_ref_4841_, v_msg_4842_, v_declHint_4843_, v___y_4844_, v___y_4845_, v___y_4846_, v___y_4847_);
return v___x_4849_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8___boxed(lean_object* v_00_u03b1_4850_, lean_object* v_ref_4851_, lean_object* v_msg_4852_, lean_object* v_declHint_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_){
_start:
{
lean_object* v_res_4859_; 
v_res_4859_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8(v_00_u03b1_4850_, v_ref_4851_, v_msg_4852_, v_declHint_4853_, v___y_4854_, v___y_4855_, v___y_4856_, v___y_4857_);
lean_dec(v___y_4857_);
lean_dec_ref(v___y_4856_);
lean_dec(v___y_4855_);
lean_dec_ref(v___y_4854_);
lean_dec(v_ref_4851_);
return v_res_4859_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12(lean_object* v_msg_4860_, lean_object* v_declHint_4861_, lean_object* v___y_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_){
_start:
{
lean_object* v___x_4867_; 
v___x_4867_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg(v_msg_4860_, v_declHint_4861_, v___y_4865_);
return v___x_4867_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___boxed(lean_object* v_msg_4868_, lean_object* v_declHint_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_, lean_object* v___y_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_){
_start:
{
lean_object* v_res_4875_; 
v_res_4875_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12(v_msg_4868_, v_declHint_4869_, v___y_4870_, v___y_4871_, v___y_4872_, v___y_4873_);
lean_dec(v___y_4873_);
lean_dec_ref(v___y_4872_);
lean_dec(v___y_4871_);
lean_dec_ref(v___y_4870_);
return v_res_4875_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12(lean_object* v_00_u03b1_4876_, lean_object* v_ref_4877_, lean_object* v_msg_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_){
_start:
{
lean_object* v___x_4884_; 
v___x_4884_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___redArg(v_ref_4877_, v_msg_4878_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_);
return v___x_4884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12___boxed(lean_object* v_00_u03b1_4885_, lean_object* v_ref_4886_, lean_object* v_msg_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_, lean_object* v___y_4892_){
_start:
{
lean_object* v_res_4893_; 
v_res_4893_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__12(v_00_u03b1_4885_, v_ref_4886_, v_msg_4887_, v___y_4888_, v___y_4889_, v___y_4890_, v___y_4891_);
lean_dec(v___y_4891_);
lean_dec_ref(v___y_4890_);
lean_dec(v___y_4889_);
lean_dec_ref(v___y_4888_);
lean_dec(v_ref_4886_);
return v_res_4893_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(lean_object* v_declName_4894_, uint8_t v_s_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_){
_start:
{
lean_object* v___x_4899_; lean_object* v_env_4900_; lean_object* v_nextMacroScope_4901_; lean_object* v_ngen_4902_; lean_object* v_auxDeclNGen_4903_; lean_object* v_traceState_4904_; lean_object* v_recordedDeps_4905_; lean_object* v_messages_4906_; lean_object* v_infoState_4907_; lean_object* v_snapshotTasks_4908_; lean_object* v___x_4910_; uint8_t v_isShared_4911_; uint8_t v_isSharedCheck_4937_; 
v___x_4899_ = lean_st_ref_take(v___y_4897_);
v_env_4900_ = lean_ctor_get(v___x_4899_, 0);
v_nextMacroScope_4901_ = lean_ctor_get(v___x_4899_, 1);
v_ngen_4902_ = lean_ctor_get(v___x_4899_, 2);
v_auxDeclNGen_4903_ = lean_ctor_get(v___x_4899_, 3);
v_traceState_4904_ = lean_ctor_get(v___x_4899_, 4);
v_recordedDeps_4905_ = lean_ctor_get(v___x_4899_, 6);
v_messages_4906_ = lean_ctor_get(v___x_4899_, 7);
v_infoState_4907_ = lean_ctor_get(v___x_4899_, 8);
v_snapshotTasks_4908_ = lean_ctor_get(v___x_4899_, 9);
v_isSharedCheck_4937_ = !lean_is_exclusive(v___x_4899_);
if (v_isSharedCheck_4937_ == 0)
{
lean_object* v_unused_4938_; 
v_unused_4938_ = lean_ctor_get(v___x_4899_, 5);
lean_dec(v_unused_4938_);
v___x_4910_ = v___x_4899_;
v_isShared_4911_ = v_isSharedCheck_4937_;
goto v_resetjp_4909_;
}
else
{
lean_inc(v_snapshotTasks_4908_);
lean_inc(v_infoState_4907_);
lean_inc(v_messages_4906_);
lean_inc(v_recordedDeps_4905_);
lean_inc(v_traceState_4904_);
lean_inc(v_auxDeclNGen_4903_);
lean_inc(v_ngen_4902_);
lean_inc(v_nextMacroScope_4901_);
lean_inc(v_env_4900_);
lean_dec(v___x_4899_);
v___x_4910_ = lean_box(0);
v_isShared_4911_ = v_isSharedCheck_4937_;
goto v_resetjp_4909_;
}
v_resetjp_4909_:
{
uint8_t v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4917_; 
v___x_4912_ = 0;
v___x_4913_ = lean_box(0);
v___x_4914_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_4900_, v_declName_4894_, v_s_4895_, v___x_4912_, v___x_4913_);
v___x_4915_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1);
if (v_isShared_4911_ == 0)
{
lean_ctor_set(v___x_4910_, 5, v___x_4915_);
lean_ctor_set(v___x_4910_, 0, v___x_4914_);
v___x_4917_ = v___x_4910_;
goto v_reusejp_4916_;
}
else
{
lean_object* v_reuseFailAlloc_4936_; 
v_reuseFailAlloc_4936_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4936_, 0, v___x_4914_);
lean_ctor_set(v_reuseFailAlloc_4936_, 1, v_nextMacroScope_4901_);
lean_ctor_set(v_reuseFailAlloc_4936_, 2, v_ngen_4902_);
lean_ctor_set(v_reuseFailAlloc_4936_, 3, v_auxDeclNGen_4903_);
lean_ctor_set(v_reuseFailAlloc_4936_, 4, v_traceState_4904_);
lean_ctor_set(v_reuseFailAlloc_4936_, 5, v___x_4915_);
lean_ctor_set(v_reuseFailAlloc_4936_, 6, v_recordedDeps_4905_);
lean_ctor_set(v_reuseFailAlloc_4936_, 7, v_messages_4906_);
lean_ctor_set(v_reuseFailAlloc_4936_, 8, v_infoState_4907_);
lean_ctor_set(v_reuseFailAlloc_4936_, 9, v_snapshotTasks_4908_);
v___x_4917_ = v_reuseFailAlloc_4936_;
goto v_reusejp_4916_;
}
v_reusejp_4916_:
{
lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v_mctx_4920_; lean_object* v_zetaDeltaFVarIds_4921_; lean_object* v_postponed_4922_; lean_object* v_diag_4923_; lean_object* v___x_4925_; uint8_t v_isShared_4926_; uint8_t v_isSharedCheck_4934_; 
v___x_4918_ = lean_st_ref_put(v___y_4897_, v___x_4917_);
v___x_4919_ = lean_st_ref_take(v___y_4896_);
v_mctx_4920_ = lean_ctor_get(v___x_4919_, 0);
v_zetaDeltaFVarIds_4921_ = lean_ctor_get(v___x_4919_, 2);
v_postponed_4922_ = lean_ctor_get(v___x_4919_, 3);
v_diag_4923_ = lean_ctor_get(v___x_4919_, 4);
v_isSharedCheck_4934_ = !lean_is_exclusive(v___x_4919_);
if (v_isSharedCheck_4934_ == 0)
{
lean_object* v_unused_4935_; 
v_unused_4935_ = lean_ctor_get(v___x_4919_, 1);
lean_dec(v_unused_4935_);
v___x_4925_ = v___x_4919_;
v_isShared_4926_ = v_isSharedCheck_4934_;
goto v_resetjp_4924_;
}
else
{
lean_inc(v_diag_4923_);
lean_inc(v_postponed_4922_);
lean_inc(v_zetaDeltaFVarIds_4921_);
lean_inc(v_mctx_4920_);
lean_dec(v___x_4919_);
v___x_4925_ = lean_box(0);
v_isShared_4926_ = v_isSharedCheck_4934_;
goto v_resetjp_4924_;
}
v_resetjp_4924_:
{
lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4930_; 
v___x_4927_ = lean_box(0);
v___x_4928_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5);
if (v_isShared_4926_ == 0)
{
lean_ctor_set(v___x_4925_, 1, v___x_4928_);
v___x_4930_ = v___x_4925_;
goto v_reusejp_4929_;
}
else
{
lean_object* v_reuseFailAlloc_4933_; 
v_reuseFailAlloc_4933_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4933_, 0, v_mctx_4920_);
lean_ctor_set(v_reuseFailAlloc_4933_, 1, v___x_4928_);
lean_ctor_set(v_reuseFailAlloc_4933_, 2, v_zetaDeltaFVarIds_4921_);
lean_ctor_set(v_reuseFailAlloc_4933_, 3, v_postponed_4922_);
lean_ctor_set(v_reuseFailAlloc_4933_, 4, v_diag_4923_);
v___x_4930_ = v_reuseFailAlloc_4933_;
goto v_reusejp_4929_;
}
v_reusejp_4929_:
{
lean_object* v___x_4931_; lean_object* v___x_4932_; 
v___x_4931_ = lean_st_ref_put(v___y_4896_, v___x_4930_);
v___x_4932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4932_, 0, v___x_4927_);
return v___x_4932_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg___boxed(lean_object* v_declName_4939_, lean_object* v_s_4940_, lean_object* v___y_4941_, lean_object* v___y_4942_, lean_object* v___y_4943_){
_start:
{
uint8_t v_s_boxed_4944_; lean_object* v_res_4945_; 
v_s_boxed_4944_ = lean_unbox(v_s_4940_);
v_res_4945_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4939_, v_s_boxed_4944_, v___y_4941_, v___y_4942_);
lean_dec(v___y_4942_);
lean_dec(v___y_4941_);
return v_res_4945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance(lean_object* v_declName_4946_, uint8_t v_attrKind_4947_, lean_object* v_prio_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_){
_start:
{
uint8_t v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; 
v___x_4954_ = 4;
lean_inc(v_declName_4946_);
v___x_4955_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4946_, v___x_4954_, v_a_4950_, v_a_4952_);
lean_dec_ref(v___x_4955_);
v___x_4956_ = l_Lean_Meta_addInstance(v_declName_4946_, v_attrKind_4947_, v_prio_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
return v___x_4956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerInstance___boxed(lean_object* v_declName_4957_, lean_object* v_attrKind_4958_, lean_object* v_prio_4959_, lean_object* v_a_4960_, lean_object* v_a_4961_, lean_object* v_a_4962_, lean_object* v_a_4963_, lean_object* v_a_4964_){
_start:
{
uint8_t v_attrKind_boxed_4965_; lean_object* v_res_4966_; 
v_attrKind_boxed_4965_ = lean_unbox(v_attrKind_4958_);
v_res_4966_ = l_Lean_Meta_registerInstance(v_declName_4957_, v_attrKind_boxed_4965_, v_prio_4959_, v_a_4960_, v_a_4961_, v_a_4962_, v_a_4963_);
lean_dec(v_a_4963_);
lean_dec_ref(v_a_4962_);
lean_dec(v_a_4961_);
lean_dec_ref(v_a_4960_);
return v_res_4966_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(lean_object* v_declName_4967_, uint8_t v_s_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_){
_start:
{
lean_object* v___x_4974_; 
v___x_4974_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___redArg(v_declName_4967_, v_s_4968_, v___y_4970_, v___y_4972_);
return v___x_4974_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0___boxed(lean_object* v_declName_4975_, lean_object* v_s_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_){
_start:
{
uint8_t v_s_boxed_4982_; lean_object* v_res_4983_; 
v_s_boxed_4982_ = lean_unbox(v_s_4976_);
v_res_4983_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_registerInstance_spec__0(v_declName_4975_, v_s_boxed_4982_, v___y_4977_, v___y_4978_, v___y_4979_, v___y_4980_);
lean_dec(v___y_4980_);
lean_dec_ref(v___y_4979_);
lean_dec(v___y_4978_);
lean_dec_ref(v___y_4977_);
return v_res_4983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v_a_4984_, lean_object* v_x_4985_){
_start:
{
lean_inc_ref(v_a_4984_);
return v_a_4984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v_a_4986_, lean_object* v_x_4987_){
_start:
{
lean_object* v_res_4988_; 
v_res_4988_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v_a_4986_, v_x_4987_);
lean_dec_ref(v_x_4987_);
lean_dec_ref(v_a_4986_);
return v_res_4988_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object* v_msgData_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_){
_start:
{
lean_object* v___x_4993_; lean_object* v_toCold_4994_; lean_object* v_env_4995_; lean_object* v_options_4996_; uint8_t v___x_4997_; lean_object* v_env_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; lean_object* v___x_5005_; 
v___x_4993_ = lean_st_ref_get(v___y_4991_);
v_toCold_4994_ = lean_ctor_get(v___y_4990_, 0);
v_env_4995_ = lean_ctor_get(v___x_4993_, 0);
lean_inc_ref(v_env_4995_);
lean_dec(v___x_4993_);
v_options_4996_ = lean_ctor_get(v_toCold_4994_, 2);
v___x_4997_ = 0;
v_env_4998_ = l_Lean_Environment_setRecordingDeps(v_env_4995_, v___x_4997_);
v___x_4999_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__1);
v___x_5000_ = lean_unsigned_to_nat(32u);
v___x_5001_ = lean_mk_empty_array_with_capacity(v___x_5000_);
lean_dec_ref(v___x_5001_);
v___x_5002_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__4);
lean_inc_ref(v_options_4996_);
v___x_5003_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5003_, 0, v_env_4998_);
lean_ctor_set(v___x_5003_, 1, v___x_4999_);
lean_ctor_set(v___x_5003_, 2, v___x_5002_);
lean_ctor_set(v___x_5003_, 3, v_options_4996_);
v___x_5004_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_5004_, 0, v___x_5003_);
lean_ctor_set(v___x_5004_, 1, v_msgData_4989_);
v___x_5005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5005_, 0, v___x_5004_);
return v___x_5005_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object* v_msgData_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_){
_start:
{
lean_object* v_res_5010_; 
v_res_5010_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(v_msgData_5006_, v___y_5007_, v___y_5008_);
lean_dec(v___y_5008_);
lean_dec_ref(v___y_5007_);
return v_res_5010_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_msg_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_){
_start:
{
lean_object* v_ref_5015_; lean_object* v___x_5016_; lean_object* v_a_5017_; lean_object* v___x_5019_; uint8_t v_isShared_5020_; uint8_t v_isSharedCheck_5025_; 
v_ref_5015_ = lean_ctor_get(v___y_5012_, 2);
v___x_5016_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1_spec__3(v_msg_5011_, v___y_5012_, v___y_5013_);
v_a_5017_ = lean_ctor_get(v___x_5016_, 0);
v_isSharedCheck_5025_ = !lean_is_exclusive(v___x_5016_);
if (v_isSharedCheck_5025_ == 0)
{
v___x_5019_ = v___x_5016_;
v_isShared_5020_ = v_isSharedCheck_5025_;
goto v_resetjp_5018_;
}
else
{
lean_inc(v_a_5017_);
lean_dec(v___x_5016_);
v___x_5019_ = lean_box(0);
v_isShared_5020_ = v_isSharedCheck_5025_;
goto v_resetjp_5018_;
}
v_resetjp_5018_:
{
lean_object* v___x_5021_; lean_object* v___x_5023_; 
lean_inc(v_ref_5015_);
v___x_5021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5021_, 0, v_ref_5015_);
lean_ctor_set(v___x_5021_, 1, v_a_5017_);
if (v_isShared_5020_ == 0)
{
lean_ctor_set_tag(v___x_5019_, 1);
lean_ctor_set(v___x_5019_, 0, v___x_5021_);
v___x_5023_ = v___x_5019_;
goto v_reusejp_5022_;
}
else
{
lean_object* v_reuseFailAlloc_5024_; 
v_reuseFailAlloc_5024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5024_, 0, v___x_5021_);
v___x_5023_ = v_reuseFailAlloc_5024_;
goto v_reusejp_5022_;
}
v_reusejp_5022_:
{
return v___x_5023_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object* v_msg_5026_, lean_object* v___y_5027_, lean_object* v___y_5028_, lean_object* v___y_5029_){
_start:
{
lean_object* v_res_5030_; 
v_res_5030_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v_msg_5026_, v___y_5027_, v___y_5028_);
lean_dec(v___y_5028_);
lean_dec_ref(v___y_5027_);
return v_res_5030_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_5031_, lean_object* v_i_5032_, lean_object* v_k_5033_){
_start:
{
lean_object* v___x_5034_; uint8_t v___x_5035_; 
v___x_5034_ = lean_array_get_size(v_keys_5031_);
v___x_5035_ = lean_nat_dec_lt(v_i_5032_, v___x_5034_);
if (v___x_5035_ == 0)
{
lean_dec(v_i_5032_);
return v___x_5035_;
}
else
{
lean_object* v_k_x27_5036_; uint8_t v___x_5037_; 
v_k_x27_5036_ = lean_array_fget_borrowed(v_keys_5031_, v_i_5032_);
v___x_5037_ = lean_name_eq(v_k_5033_, v_k_x27_5036_);
if (v___x_5037_ == 0)
{
lean_object* v___x_5038_; lean_object* v___x_5039_; 
v___x_5038_ = lean_unsigned_to_nat(1u);
v___x_5039_ = lean_nat_add(v_i_5032_, v___x_5038_);
lean_dec(v_i_5032_);
v_i_5032_ = v___x_5039_;
goto _start;
}
else
{
lean_dec(v_i_5032_);
return v___x_5035_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_5041_, lean_object* v_i_5042_, lean_object* v_k_5043_){
_start:
{
uint8_t v_res_5044_; lean_object* v_r_5045_; 
v_res_5044_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_keys_5041_, v_i_5042_, v_k_5043_);
lean_dec(v_k_5043_);
lean_dec_ref(v_keys_5041_);
v_r_5045_ = lean_box(v_res_5044_);
return v_r_5045_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_x_5046_, size_t v_x_5047_, lean_object* v_x_5048_){
_start:
{
if (lean_obj_tag(v_x_5046_) == 0)
{
lean_object* v_es_5049_; lean_object* v___x_5050_; size_t v___x_5051_; size_t v___x_5052_; lean_object* v_j_5053_; lean_object* v___x_5054_; 
v_es_5049_ = lean_ctor_get(v_x_5046_, 0);
v___x_5050_ = lean_box(2);
v___x_5051_ = ((size_t)31ULL);
v___x_5052_ = lean_usize_land(v_x_5047_, v___x_5051_);
v_j_5053_ = lean_usize_to_nat(v___x_5052_);
v___x_5054_ = lean_array_get_borrowed(v___x_5050_, v_es_5049_, v_j_5053_);
lean_dec(v_j_5053_);
switch(lean_obj_tag(v___x_5054_))
{
case 0:
{
lean_object* v_key_5055_; uint8_t v___x_5056_; 
v_key_5055_ = lean_ctor_get(v___x_5054_, 0);
v___x_5056_ = lean_name_eq(v_x_5048_, v_key_5055_);
return v___x_5056_;
}
case 1:
{
lean_object* v_node_5057_; size_t v___x_5058_; size_t v___x_5059_; 
v_node_5057_ = lean_ctor_get(v___x_5054_, 0);
v___x_5058_ = ((size_t)5ULL);
v___x_5059_ = lean_usize_shift_right(v_x_5047_, v___x_5058_);
v_x_5046_ = v_node_5057_;
v_x_5047_ = v___x_5059_;
goto _start;
}
default: 
{
uint8_t v___x_5061_; 
v___x_5061_ = 0;
return v___x_5061_;
}
}
}
else
{
lean_object* v_ks_5062_; lean_object* v___x_5063_; uint8_t v___x_5064_; 
v_ks_5062_ = lean_ctor_get(v_x_5046_, 0);
v___x_5063_ = lean_unsigned_to_nat(0u);
v___x_5064_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_ks_5062_, v___x_5063_, v_x_5048_);
return v___x_5064_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_5065_, lean_object* v_x_5066_, lean_object* v_x_5067_){
_start:
{
size_t v_x_2448__boxed_5068_; uint8_t v_res_5069_; lean_object* v_r_5070_; 
v_x_2448__boxed_5068_ = lean_unbox_usize(v_x_5066_);
lean_dec(v_x_5066_);
v_res_5069_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_5065_, v_x_2448__boxed_5068_, v_x_5067_);
lean_dec(v_x_5067_);
lean_dec_ref(v_x_5065_);
v_r_5070_ = lean_box(v_res_5069_);
return v_r_5070_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_5071_, lean_object* v_x_5072_){
_start:
{
uint64_t v___y_5074_; 
if (lean_obj_tag(v_x_5072_) == 0)
{
uint64_t v___x_5077_; 
v___x_5077_ = 1723ULL;
v___y_5074_ = v___x_5077_;
goto v___jp_5073_;
}
else
{
uint64_t v_hash_5078_; 
v_hash_5078_ = lean_ctor_get_uint64(v_x_5072_, sizeof(void*)*2);
v___y_5074_ = v_hash_5078_;
goto v___jp_5073_;
}
v___jp_5073_:
{
size_t v___x_5075_; uint8_t v___x_5076_; 
v___x_5075_ = lean_uint64_to_usize(v___y_5074_);
v___x_5076_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_5071_, v___x_5075_, v_x_5072_);
return v___x_5076_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_5079_, lean_object* v_x_5080_){
_start:
{
uint8_t v_res_5081_; lean_object* v_r_5082_; 
v_res_5081_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_5079_, v_x_5080_);
lean_dec(v_x_5080_);
lean_dec_ref(v_x_5079_);
v_r_5082_ = lean_box(v_res_5081_);
return v_r_5082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(lean_object* v_d_5083_, lean_object* v_declName_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_){
_start:
{
lean_object* v_instanceNames_5091_; uint8_t v___x_5092_; 
v_instanceNames_5091_ = lean_ctor_get(v_d_5083_, 1);
v___x_5092_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_instanceNames_5091_, v_declName_5084_);
if (v___x_5092_ == 0)
{
lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v_a_5099_; lean_object* v___x_5101_; uint8_t v_isShared_5102_; uint8_t v_isSharedCheck_5106_; 
lean_dec_ref(v_d_5083_);
v___x_5093_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_5094_ = l_Lean_MessageData_ofConstName(v_declName_5084_, v___x_5092_);
v___x_5095_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5095_, 0, v___x_5093_);
lean_ctor_set(v___x_5095_, 1, v___x_5094_);
v___x_5096_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__5, &l_Lean_Meta_Instances_erase___redArg___closed__5_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__5);
v___x_5097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5097_, 0, v___x_5095_);
lean_ctor_set(v___x_5097_, 1, v___x_5096_);
v___x_5098_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_5097_, v___y_5085_, v___y_5086_);
v_a_5099_ = lean_ctor_get(v___x_5098_, 0);
v_isSharedCheck_5106_ = !lean_is_exclusive(v___x_5098_);
if (v_isSharedCheck_5106_ == 0)
{
v___x_5101_ = v___x_5098_;
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
else
{
lean_inc(v_a_5099_);
lean_dec(v___x_5098_);
v___x_5101_ = lean_box(0);
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
v_resetjp_5100_:
{
lean_object* v___x_5104_; 
if (v_isShared_5102_ == 0)
{
v___x_5104_ = v___x_5101_;
goto v_reusejp_5103_;
}
else
{
lean_object* v_reuseFailAlloc_5105_; 
v_reuseFailAlloc_5105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5105_, 0, v_a_5099_);
v___x_5104_ = v_reuseFailAlloc_5105_;
goto v_reusejp_5103_;
}
v_reusejp_5103_:
{
return v___x_5104_;
}
}
}
else
{
goto v___jp_5088_;
}
v___jp_5088_:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; 
v___x_5089_ = l_Lean_Meta_Instances_eraseCore(v_d_5083_, v_declName_5084_);
v___x_5090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5090_, 0, v___x_5089_);
return v___x_5090_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0___boxed(lean_object* v_d_5107_, lean_object* v_declName_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_){
_start:
{
lean_object* v_res_5112_; 
v_res_5112_ = l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(v_d_5107_, v_declName_5108_, v___y_5109_, v___y_5110_);
lean_dec(v___y_5110_);
lean_dec_ref(v___y_5109_);
return v_res_5112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v___x_5113_, lean_object* v_declName_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_){
_start:
{
lean_object* v___x_5118_; lean_object* v_env_5119_; lean_object* v___x_5120_; lean_object* v_ext_5121_; lean_object* v_toEnvExtension_5122_; lean_object* v_asyncMode_5123_; uint8_t v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; 
v___x_5118_ = lean_st_ref_get(v___y_5116_);
v_env_5119_ = lean_ctor_get(v___x_5118_, 0);
lean_inc_ref(v_env_5119_);
lean_dec(v___x_5118_);
v___x_5120_ = l_Lean_Meta_instanceExtension;
v_ext_5121_ = lean_ctor_get(v___x_5120_, 1);
v_toEnvExtension_5122_ = lean_ctor_get(v_ext_5121_, 0);
v_asyncMode_5123_ = lean_ctor_get(v_toEnvExtension_5122_, 2);
v___x_5124_ = 0;
v___x_5125_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5113_, v___x_5120_, v_env_5119_, v_asyncMode_5123_, v___x_5124_);
v___x_5126_ = l_Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0(v___x_5125_, v_declName_5114_, v___y_5115_, v___y_5116_);
if (lean_obj_tag(v___x_5126_) == 0)
{
lean_object* v_a_5127_; lean_object* v___x_5129_; uint8_t v_isShared_5130_; uint8_t v_isSharedCheck_5157_; 
v_a_5127_ = lean_ctor_get(v___x_5126_, 0);
v_isSharedCheck_5157_ = !lean_is_exclusive(v___x_5126_);
if (v_isSharedCheck_5157_ == 0)
{
v___x_5129_ = v___x_5126_;
v_isShared_5130_ = v_isSharedCheck_5157_;
goto v_resetjp_5128_;
}
else
{
lean_inc(v_a_5127_);
lean_dec(v___x_5126_);
v___x_5129_ = lean_box(0);
v_isShared_5130_ = v_isSharedCheck_5157_;
goto v_resetjp_5128_;
}
v_resetjp_5128_:
{
lean_object* v___f_5131_; lean_object* v___x_5132_; lean_object* v_env_5133_; lean_object* v_nextMacroScope_5134_; lean_object* v_ngen_5135_; lean_object* v_auxDeclNGen_5136_; lean_object* v_traceState_5137_; lean_object* v_recordedDeps_5138_; lean_object* v_messages_5139_; lean_object* v_infoState_5140_; lean_object* v_snapshotTasks_5141_; lean_object* v___x_5143_; uint8_t v_isShared_5144_; uint8_t v_isSharedCheck_5155_; 
v___f_5131_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_5131_, 0, v_a_5127_);
v___x_5132_ = lean_st_ref_take(v___y_5116_);
v_env_5133_ = lean_ctor_get(v___x_5132_, 0);
v_nextMacroScope_5134_ = lean_ctor_get(v___x_5132_, 1);
v_ngen_5135_ = lean_ctor_get(v___x_5132_, 2);
v_auxDeclNGen_5136_ = lean_ctor_get(v___x_5132_, 3);
v_traceState_5137_ = lean_ctor_get(v___x_5132_, 4);
v_recordedDeps_5138_ = lean_ctor_get(v___x_5132_, 6);
v_messages_5139_ = lean_ctor_get(v___x_5132_, 7);
v_infoState_5140_ = lean_ctor_get(v___x_5132_, 8);
v_snapshotTasks_5141_ = lean_ctor_get(v___x_5132_, 9);
v_isSharedCheck_5155_ = !lean_is_exclusive(v___x_5132_);
if (v_isSharedCheck_5155_ == 0)
{
lean_object* v_unused_5156_; 
v_unused_5156_ = lean_ctor_get(v___x_5132_, 5);
lean_dec(v_unused_5156_);
v___x_5143_ = v___x_5132_;
v_isShared_5144_ = v_isSharedCheck_5155_;
goto v_resetjp_5142_;
}
else
{
lean_inc(v_snapshotTasks_5141_);
lean_inc(v_infoState_5140_);
lean_inc(v_messages_5139_);
lean_inc(v_recordedDeps_5138_);
lean_inc(v_traceState_5137_);
lean_inc(v_auxDeclNGen_5136_);
lean_inc(v_ngen_5135_);
lean_inc(v_nextMacroScope_5134_);
lean_inc(v_env_5133_);
lean_dec(v___x_5132_);
v___x_5143_ = lean_box(0);
v_isShared_5144_ = v_isSharedCheck_5155_;
goto v_resetjp_5142_;
}
v_resetjp_5142_:
{
lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5149_; 
v___x_5145_ = lean_box(0);
v___x_5146_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v___x_5120_, v_env_5133_, v___f_5131_);
v___x_5147_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1);
if (v_isShared_5144_ == 0)
{
lean_ctor_set(v___x_5143_, 5, v___x_5147_);
lean_ctor_set(v___x_5143_, 0, v___x_5146_);
v___x_5149_ = v___x_5143_;
goto v_reusejp_5148_;
}
else
{
lean_object* v_reuseFailAlloc_5154_; 
v_reuseFailAlloc_5154_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5154_, 0, v___x_5146_);
lean_ctor_set(v_reuseFailAlloc_5154_, 1, v_nextMacroScope_5134_);
lean_ctor_set(v_reuseFailAlloc_5154_, 2, v_ngen_5135_);
lean_ctor_set(v_reuseFailAlloc_5154_, 3, v_auxDeclNGen_5136_);
lean_ctor_set(v_reuseFailAlloc_5154_, 4, v_traceState_5137_);
lean_ctor_set(v_reuseFailAlloc_5154_, 5, v___x_5147_);
lean_ctor_set(v_reuseFailAlloc_5154_, 6, v_recordedDeps_5138_);
lean_ctor_set(v_reuseFailAlloc_5154_, 7, v_messages_5139_);
lean_ctor_set(v_reuseFailAlloc_5154_, 8, v_infoState_5140_);
lean_ctor_set(v_reuseFailAlloc_5154_, 9, v_snapshotTasks_5141_);
v___x_5149_ = v_reuseFailAlloc_5154_;
goto v_reusejp_5148_;
}
v_reusejp_5148_:
{
lean_object* v___x_5150_; lean_object* v___x_5152_; 
v___x_5150_ = lean_st_ref_put(v___y_5116_, v___x_5149_);
if (v_isShared_5130_ == 0)
{
lean_ctor_set(v___x_5129_, 0, v___x_5145_);
v___x_5152_ = v___x_5129_;
goto v_reusejp_5151_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v___x_5145_);
v___x_5152_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5151_;
}
v_reusejp_5151_:
{
return v___x_5152_;
}
}
}
}
}
else
{
lean_object* v_a_5158_; lean_object* v___x_5160_; uint8_t v_isShared_5161_; uint8_t v_isSharedCheck_5165_; 
v_a_5158_ = lean_ctor_get(v___x_5126_, 0);
v_isSharedCheck_5165_ = !lean_is_exclusive(v___x_5126_);
if (v_isSharedCheck_5165_ == 0)
{
v___x_5160_ = v___x_5126_;
v_isShared_5161_ = v_isSharedCheck_5165_;
goto v_resetjp_5159_;
}
else
{
lean_inc(v_a_5158_);
lean_dec(v___x_5126_);
v___x_5160_ = lean_box(0);
v_isShared_5161_ = v_isSharedCheck_5165_;
goto v_resetjp_5159_;
}
v_resetjp_5159_:
{
lean_object* v___x_5163_; 
if (v_isShared_5161_ == 0)
{
v___x_5163_ = v___x_5160_;
goto v_reusejp_5162_;
}
else
{
lean_object* v_reuseFailAlloc_5164_; 
v_reuseFailAlloc_5164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5164_, 0, v_a_5158_);
v___x_5163_ = v_reuseFailAlloc_5164_;
goto v_reusejp_5162_;
}
v_reusejp_5162_:
{
return v___x_5163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v___x_5166_, lean_object* v_declName_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_){
_start:
{
lean_object* v_res_5171_; 
v_res_5171_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v___x_5166_, v_declName_5167_, v___y_5168_, v___y_5169_);
lean_dec(v___y_5169_);
lean_dec_ref(v___y_5168_);
lean_dec_ref(v___x_5166_);
return v_res_5171_;
}
}
static uint64_t _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5178_; uint64_t v___x_5179_; 
v___x_5178_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5179_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_5178_);
return v___x_5179_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; 
v___x_5180_ = lean_uint64_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5181_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5182_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_5182_, 0, v___x_5181_);
lean_ctor_set_uint64(v___x_5182_, sizeof(void*)*1, v___x_5180_);
return v___x_5182_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5183_; lean_object* v___x_5184_; 
v___x_5183_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_instInhabitedInstances_default_spec__0___redArg___closed__0);
v___x_5184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5184_, 0, v___x_5183_);
return v___x_5184_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5185_; lean_object* v___x_5186_; 
v___x_5185_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5186_, 0, v___x_5185_);
lean_ctor_set(v___x_5186_, 1, v___x_5185_);
return v___x_5186_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5187_; lean_object* v___x_5188_; 
v___x_5187_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5188_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5188_, 0, v___x_5187_);
lean_ctor_set(v___x_5188_, 1, v___x_5187_);
lean_ctor_set(v___x_5188_, 2, v___x_5187_);
lean_ctor_set(v___x_5188_, 3, v___x_5187_);
lean_ctor_set(v___x_5188_, 4, v___x_5187_);
return v___x_5188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(lean_object* v___x_5189_, lean_object* v___x_5190_, lean_object* v_declName_5191_, lean_object* v_stx_5192_, uint8_t v_attrKind_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_){
_start:
{
lean_object* v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; 
v___x_5197_ = lean_unsigned_to_nat(1u);
v___x_5198_ = l_Lean_Syntax_getArg(v_stx_5192_, v___x_5197_);
v___x_5199_ = l_Lean_getAttrParamOptPrio(v___x_5198_, v___y_5194_, v___y_5195_);
if (lean_obj_tag(v___x_5199_) == 0)
{
lean_object* v_a_5200_; uint8_t v___x_5201_; uint8_t v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; size_t v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; 
v_a_5200_ = lean_ctor_get(v___x_5199_, 0);
lean_inc(v_a_5200_);
lean_dec_ref_known(v___x_5199_, 1);
v___x_5201_ = 0;
v___x_5202_ = 1;
v___x_5203_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5204_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5205_ = lean_unsigned_to_nat(32u);
v___x_5206_ = lean_mk_empty_array_with_capacity(v___x_5205_);
v___x_5207_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2);
v___x_5208_ = ((size_t)5ULL);
lean_inc_n(v___x_5189_, 7);
v___x_5209_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5209_, 0, v___x_5207_);
lean_ctor_set(v___x_5209_, 1, v___x_5206_);
lean_ctor_set(v___x_5209_, 2, v___x_5189_);
lean_ctor_set(v___x_5209_, 3, v___x_5189_);
lean_ctor_set_usize(v___x_5209_, 4, v___x_5208_);
v___x_5210_ = lean_box(1);
lean_inc_ref(v___x_5209_);
v___x_5211_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5211_, 0, v___x_5204_);
lean_ctor_set(v___x_5211_, 1, v___x_5209_);
lean_ctor_set(v___x_5211_, 2, v___x_5210_);
v___x_5212_ = lean_mk_empty_array_with_capacity(v___x_5189_);
v___x_5213_ = lean_box(0);
lean_inc(v___x_5190_);
v___x_5214_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_5214_, 0, v___x_5203_);
lean_ctor_set(v___x_5214_, 1, v___x_5190_);
lean_ctor_set(v___x_5214_, 2, v___x_5211_);
lean_ctor_set(v___x_5214_, 3, v___x_5212_);
lean_ctor_set(v___x_5214_, 4, v___x_5213_);
lean_ctor_set(v___x_5214_, 5, v___x_5189_);
lean_ctor_set(v___x_5214_, 6, v___x_5213_);
lean_ctor_set_uint8(v___x_5214_, sizeof(void*)*7, v___x_5201_);
lean_ctor_set_uint8(v___x_5214_, sizeof(void*)*7 + 1, v___x_5201_);
lean_ctor_set_uint8(v___x_5214_, sizeof(void*)*7 + 2, v___x_5201_);
lean_ctor_set_uint8(v___x_5214_, sizeof(void*)*7 + 3, v___x_5202_);
v___x_5215_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_5215_, 0, v___x_5189_);
lean_ctor_set(v___x_5215_, 1, v___x_5189_);
lean_ctor_set(v___x_5215_, 2, v___x_5189_);
lean_ctor_set(v___x_5215_, 3, v___x_5189_);
lean_ctor_set(v___x_5215_, 4, v___x_5204_);
lean_ctor_set(v___x_5215_, 5, v___x_5204_);
lean_ctor_set(v___x_5215_, 6, v___x_5204_);
lean_ctor_set(v___x_5215_, 7, v___x_5204_);
lean_ctor_set(v___x_5215_, 8, v___x_5204_);
lean_ctor_set(v___x_5215_, 9, v___x_5204_);
v___x_5216_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
v___x_5217_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5218_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5218_, 0, v___x_5204_);
lean_ctor_set(v___x_5218_, 1, v___x_5204_);
lean_ctor_set(v___x_5218_, 2, v___x_5189_);
v___x_5219_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5219_, 0, v___x_5216_);
lean_ctor_set(v___x_5219_, 1, v___x_5204_);
lean_ctor_set(v___x_5219_, 2, v___x_5217_);
lean_ctor_set(v___x_5219_, 3, v___x_5204_);
lean_ctor_set(v___x_5219_, 4, v___x_5204_);
lean_ctor_set(v___x_5219_, 5, v___x_5204_);
lean_ctor_set(v___x_5219_, 6, v___x_5204_);
lean_ctor_set(v___x_5219_, 7, v___x_5218_);
v___x_5220_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5221_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5221_, 0, v___x_5215_);
lean_ctor_set(v___x_5221_, 1, v___x_5219_);
lean_ctor_set(v___x_5221_, 2, v___x_5190_);
lean_ctor_set(v___x_5221_, 3, v___x_5209_);
lean_ctor_set(v___x_5221_, 4, v___x_5220_);
v___x_5222_ = lean_box(0);
v___x_5223_ = lean_st_mk_ref(v___x_5221_);
v___x_5224_ = l_Lean_Meta_addInstance(v_declName_5191_, v_attrKind_5193_, v_a_5200_, v___x_5214_, v___x_5223_, v___y_5194_, v___y_5195_);
lean_dec_ref_known(v___x_5214_, 7);
if (lean_obj_tag(v___x_5224_) == 0)
{
lean_object* v___x_5226_; uint8_t v_isShared_5227_; uint8_t v_isSharedCheck_5232_; 
v_isSharedCheck_5232_ = !lean_is_exclusive(v___x_5224_);
if (v_isSharedCheck_5232_ == 0)
{
lean_object* v_unused_5233_; 
v_unused_5233_ = lean_ctor_get(v___x_5224_, 0);
lean_dec(v_unused_5233_);
v___x_5226_ = v___x_5224_;
v_isShared_5227_ = v_isSharedCheck_5232_;
goto v_resetjp_5225_;
}
else
{
lean_dec(v___x_5224_);
v___x_5226_ = lean_box(0);
v_isShared_5227_ = v_isSharedCheck_5232_;
goto v_resetjp_5225_;
}
v_resetjp_5225_:
{
lean_object* v___x_5228_; lean_object* v___x_5230_; 
v___x_5228_ = lean_st_ref_get(v___x_5223_);
lean_dec(v___x_5223_);
lean_dec(v___x_5228_);
if (v_isShared_5227_ == 0)
{
lean_ctor_set(v___x_5226_, 0, v___x_5222_);
v___x_5230_ = v___x_5226_;
goto v_reusejp_5229_;
}
else
{
lean_object* v_reuseFailAlloc_5231_; 
v_reuseFailAlloc_5231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5231_, 0, v___x_5222_);
v___x_5230_ = v_reuseFailAlloc_5231_;
goto v_reusejp_5229_;
}
v_reusejp_5229_:
{
return v___x_5230_;
}
}
}
else
{
lean_dec(v___x_5223_);
return v___x_5224_;
}
}
else
{
lean_object* v_a_5234_; lean_object* v___x_5236_; uint8_t v_isShared_5237_; uint8_t v_isSharedCheck_5241_; 
lean_dec(v_declName_5191_);
lean_dec(v___x_5190_);
lean_dec(v___x_5189_);
v_a_5234_ = lean_ctor_get(v___x_5199_, 0);
v_isSharedCheck_5241_ = !lean_is_exclusive(v___x_5199_);
if (v_isSharedCheck_5241_ == 0)
{
v___x_5236_ = v___x_5199_;
v_isShared_5237_ = v_isSharedCheck_5241_;
goto v_resetjp_5235_;
}
else
{
lean_inc(v_a_5234_);
lean_dec(v___x_5199_);
v___x_5236_ = lean_box(0);
v_isShared_5237_ = v_isSharedCheck_5241_;
goto v_resetjp_5235_;
}
v_resetjp_5235_:
{
lean_object* v___x_5239_; 
if (v_isShared_5237_ == 0)
{
v___x_5239_ = v___x_5236_;
goto v_reusejp_5238_;
}
else
{
lean_object* v_reuseFailAlloc_5240_; 
v_reuseFailAlloc_5240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5240_, 0, v_a_5234_);
v___x_5239_ = v_reuseFailAlloc_5240_;
goto v_reusejp_5238_;
}
v_reusejp_5238_:
{
return v___x_5239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v___x_5242_, lean_object* v___x_5243_, lean_object* v_declName_5244_, lean_object* v_stx_5245_, lean_object* v_attrKind_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_){
_start:
{
uint8_t v_attrKind_boxed_5250_; lean_object* v_res_5251_; 
v_attrKind_boxed_5250_ = lean_unbox(v_attrKind_5246_);
v_res_5251_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(v___x_5242_, v___x_5243_, v_declName_5244_, v_stx_5245_, v_attrKind_boxed_5250_, v___y_5247_, v___y_5248_);
lean_dec(v___y_5248_);
lean_dec_ref(v___y_5247_);
lean_dec(v_stx_5245_);
return v_res_5251_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5252_; lean_object* v___f_5253_; 
v___x_5252_ = l_Lean_Meta_instInhabitedInstances_default;
v___f_5253_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_5253_, 0, v___x_5252_);
return v___f_5253_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_5320_; lean_object* v___f_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; 
v___f_5320_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___f_5321_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5322_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__27_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5323_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5323_, 0, v___x_5322_);
lean_ctor_set(v___x_5323_, 1, v___f_5321_);
lean_ctor_set(v___x_5323_, 2, v___f_5320_);
return v___x_5323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5325_; lean_object* v___x_5326_; 
v___x_5325_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__28_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_5326_ = l_Lean_registerBuiltinAttribute(v___x_5325_);
return v___x_5326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v_a_5327_){
_start:
{
lean_object* v_res_5328_; 
v_res_5328_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
return v_res_5328_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_5329_, lean_object* v_x_5330_, lean_object* v_x_5331_){
_start:
{
uint8_t v___x_5332_; 
v___x_5332_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_5330_, v_x_5331_);
return v___x_5332_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_5333_, lean_object* v_x_5334_, lean_object* v_x_5335_){
_start:
{
uint8_t v_res_5336_; lean_object* v_r_5337_; 
v_res_5336_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_5333_, v_x_5334_, v_x_5335_);
lean_dec(v_x_5335_);
lean_dec_ref(v_x_5334_);
v_r_5337_ = lean_box(v_res_5336_);
return v_r_5337_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b1_5338_, lean_object* v_msg_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_){
_start:
{
lean_object* v___x_5343_; 
v___x_5343_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v_msg_5339_, v___y_5340_, v___y_5341_);
return v___x_5343_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_00_u03b1_5344_, lean_object* v_msg_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_, lean_object* v___y_5348_){
_start:
{
lean_object* v_res_5349_; 
v_res_5349_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1(v_00_u03b1_5344_, v_msg_5345_, v___y_5346_, v___y_5347_);
lean_dec(v___y_5347_);
lean_dec_ref(v___y_5346_);
return v_res_5349_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5350_, lean_object* v_x_5351_, size_t v_x_5352_, lean_object* v_x_5353_){
_start:
{
uint8_t v___x_5354_; 
v___x_5354_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_5351_, v_x_5352_, v_x_5353_);
return v___x_5354_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5355_, lean_object* v_x_5356_, lean_object* v_x_5357_, lean_object* v_x_5358_){
_start:
{
size_t v_x_3096__boxed_5359_; uint8_t v_res_5360_; lean_object* v_r_5361_; 
v_x_3096__boxed_5359_ = lean_unbox_usize(v_x_5357_);
lean_dec(v_x_5357_);
v_res_5360_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_5355_, v_x_5356_, v_x_3096__boxed_5359_, v_x_5358_);
lean_dec(v_x_5358_);
lean_dec_ref(v_x_5356_);
v_r_5361_ = lean_box(v_res_5360_);
return v_r_5361_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_5362_, lean_object* v_keys_5363_, lean_object* v_vals_5364_, lean_object* v_heq_5365_, lean_object* v_i_5366_, lean_object* v_k_5367_){
_start:
{
uint8_t v___x_5368_; 
v___x_5368_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_keys_5363_, v_i_5366_, v_k_5367_);
return v___x_5368_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_5369_, lean_object* v_keys_5370_, lean_object* v_vals_5371_, lean_object* v_heq_5372_, lean_object* v_i_5373_, lean_object* v_k_5374_){
_start:
{
uint8_t v_res_5375_; lean_object* v_r_5376_; 
v_res_5375_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(v_00_u03b2_5369_, v_keys_5370_, v_vals_5371_, v_heq_5372_, v_i_5373_, v_k_5374_);
lean_dec(v_k_5374_);
lean_dec_ref(v_vals_5371_);
lean_dec_ref(v_keys_5370_);
v_r_5376_ = lean_box(v_res_5375_);
return v_r_5376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; 
v___x_5379_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5380_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1___closed__0_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_));
v___x_5381_ = l_Lean_addBuiltinDocString(v___x_5379_, v___x_5380_);
return v___x_5381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2____boxed(lean_object* v_a_5382_){
_start:
{
lean_object* v_res_5383_; 
v_res_5383_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___regBuiltin___private_Lean_Meta_Instances_0__Lean_Meta_initFn_docString__1_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_();
return v_res_5383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg(lean_object* v_a_5384_){
_start:
{
lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v_env_5388_; lean_object* v___x_5389_; lean_object* v_ext_5390_; lean_object* v_toEnvExtension_5391_; lean_object* v_asyncMode_5392_; uint8_t v___x_5393_; lean_object* v___x_5394_; lean_object* v_discrTree_5395_; lean_object* v___x_5396_; 
v___x_5386_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5387_ = lean_st_ref_get(v_a_5384_);
v_env_5388_ = lean_ctor_get(v___x_5387_, 0);
lean_inc_ref(v_env_5388_);
lean_dec(v___x_5387_);
v___x_5389_ = l_Lean_Meta_instanceExtension;
v_ext_5390_ = lean_ctor_get(v___x_5389_, 1);
v_toEnvExtension_5391_ = lean_ctor_get(v_ext_5390_, 0);
v_asyncMode_5392_ = lean_ctor_get(v_toEnvExtension_5391_, 2);
v___x_5393_ = 1;
v___x_5394_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5386_, v___x_5389_, v_env_5388_, v_asyncMode_5392_, v___x_5393_);
v_discrTree_5395_ = lean_ctor_get(v___x_5394_, 0);
lean_inc_ref(v_discrTree_5395_);
lean_dec(v___x_5394_);
v___x_5396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5396_, 0, v_discrTree_5395_);
return v___x_5396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___redArg___boxed(lean_object* v_a_5397_, lean_object* v_a_5398_){
_start:
{
lean_object* v_res_5399_; 
v_res_5399_ = l_Lean_Meta_getGlobalInstancesIndex___redArg(v_a_5397_);
lean_dec(v_a_5397_);
return v_res_5399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex(lean_object* v_a_5400_, lean_object* v_a_5401_){
_start:
{
lean_object* v___x_5403_; 
v___x_5403_ = l_Lean_Meta_getGlobalInstancesIndex___redArg(v_a_5401_);
return v___x_5403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGlobalInstancesIndex___boxed(lean_object* v_a_5404_, lean_object* v_a_5405_, lean_object* v_a_5406_){
_start:
{
lean_object* v_res_5407_; 
v_res_5407_ = l_Lean_Meta_getGlobalInstancesIndex(v_a_5404_, v_a_5405_);
lean_dec(v_a_5405_);
lean_dec_ref(v_a_5404_);
return v_res_5407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceClassChanges(lean_object* v_env_5408_, lean_object* v_className_5409_){
_start:
{
lean_object* v___x_5410_; lean_object* v_ext_5411_; lean_object* v_toEnvExtension_5412_; lean_object* v_asyncMode_5413_; lean_object* v___x_5414_; uint8_t v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; 
v___x_5410_ = l_Lean_Meta_instanceExtension;
v_ext_5411_ = lean_ctor_get(v___x_5410_, 1);
v_toEnvExtension_5412_ = lean_ctor_get(v_ext_5411_, 0);
v_asyncMode_5413_ = lean_ctor_get(v_toEnvExtension_5412_, 2);
v___x_5414_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5415_ = 1;
v___x_5416_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5414_, v___x_5410_, v_env_5408_, v_asyncMode_5413_, v___x_5415_);
v___x_5417_ = l_Lean_Meta_Instances_getClassChanges(v___x_5416_, v_className_5409_);
lean_dec(v___x_5416_);
return v___x_5417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceClassChanges___boxed(lean_object* v_env_5418_, lean_object* v_className_5419_){
_start:
{
lean_object* v_res_5420_; 
v_res_5420_ = l_Lean_Meta_getInstanceClassChanges(v_env_5418_, v_className_5419_);
lean_dec(v_className_5419_);
return v_res_5420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg(lean_object* v_a_5421_){
_start:
{
lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v_env_5425_; lean_object* v___x_5426_; lean_object* v_ext_5427_; lean_object* v_toEnvExtension_5428_; lean_object* v_asyncMode_5429_; uint8_t v___x_5430_; lean_object* v___x_5431_; lean_object* v_erased_5432_; lean_object* v___x_5433_; 
v___x_5423_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5424_ = lean_st_ref_get(v_a_5421_);
v_env_5425_ = lean_ctor_get(v___x_5424_, 0);
lean_inc_ref(v_env_5425_);
lean_dec(v___x_5424_);
v___x_5426_ = l_Lean_Meta_instanceExtension;
v_ext_5427_ = lean_ctor_get(v___x_5426_, 1);
v_toEnvExtension_5428_ = lean_ctor_get(v_ext_5427_, 0);
v_asyncMode_5429_ = lean_ctor_get(v_toEnvExtension_5428_, 2);
v___x_5430_ = 1;
v___x_5431_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5423_, v___x_5426_, v_env_5425_, v_asyncMode_5429_, v___x_5430_);
v_erased_5432_ = lean_ctor_get(v___x_5431_, 2);
lean_inc_ref(v_erased_5432_);
lean_dec(v___x_5431_);
v___x_5433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5433_, 0, v_erased_5432_);
return v___x_5433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___redArg___boxed(lean_object* v_a_5434_, lean_object* v_a_5435_){
_start:
{
lean_object* v_res_5436_; 
v_res_5436_ = l_Lean_Meta_getErasedInstances___redArg(v_a_5434_);
lean_dec(v_a_5434_);
return v_res_5436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances(lean_object* v_a_5437_, lean_object* v_a_5438_){
_start:
{
lean_object* v___x_5440_; 
v___x_5440_ = l_Lean_Meta_getErasedInstances___redArg(v_a_5438_);
return v___x_5440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getErasedInstances___boxed(lean_object* v_a_5441_, lean_object* v_a_5442_, lean_object* v_a_5443_){
_start:
{
lean_object* v_res_5444_; 
v_res_5444_ = l_Lean_Meta_getErasedInstances(v_a_5441_, v_a_5442_);
lean_dec(v_a_5442_);
lean_dec_ref(v_a_5441_);
return v_res_5444_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isInstanceCore(lean_object* v_env_5445_, lean_object* v_declName_5446_){
_start:
{
lean_object* v___x_5447_; lean_object* v_ext_5448_; lean_object* v_toEnvExtension_5449_; lean_object* v_asyncMode_5450_; lean_object* v___x_5451_; uint8_t v___x_5452_; lean_object* v___x_5453_; lean_object* v_instanceNames_5454_; uint8_t v___x_5455_; 
v___x_5447_ = l_Lean_Meta_instanceExtension;
v_ext_5448_ = lean_ctor_get(v___x_5447_, 1);
v_toEnvExtension_5449_ = lean_ctor_get(v_ext_5448_, 0);
v_asyncMode_5450_ = lean_ctor_get(v_toEnvExtension_5449_, 2);
v___x_5451_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5452_ = 1;
v___x_5453_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5451_, v___x_5447_, v_env_5445_, v_asyncMode_5450_, v___x_5452_);
v_instanceNames_5454_ = lean_ctor_get(v___x_5453_, 1);
lean_inc_ref(v_instanceNames_5454_);
lean_dec(v___x_5453_);
v___x_5455_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__0___redArg(v_instanceNames_5454_, v_declName_5446_);
lean_dec_ref(v_instanceNames_5454_);
return v___x_5455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstanceCore___boxed(lean_object* v_env_5456_, lean_object* v_declName_5457_){
_start:
{
uint8_t v_res_5458_; lean_object* v_r_5459_; 
v_res_5458_ = l_Lean_Meta_isInstanceCore(v_env_5456_, v_declName_5457_);
lean_dec(v_declName_5457_);
v_r_5459_ = lean_box(v_res_5458_);
return v_r_5459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg(lean_object* v_declName_5460_, lean_object* v_a_5461_){
_start:
{
lean_object* v___x_5463_; lean_object* v_env_5464_; uint8_t v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; 
v___x_5463_ = lean_st_ref_get(v_a_5461_);
v_env_5464_ = lean_ctor_get(v___x_5463_, 0);
lean_inc_ref(v_env_5464_);
lean_dec(v___x_5463_);
v___x_5465_ = l_Lean_Meta_isInstanceCore(v_env_5464_, v_declName_5460_);
v___x_5466_ = lean_box(v___x_5465_);
v___x_5467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5467_, 0, v___x_5466_);
return v___x_5467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___redArg___boxed(lean_object* v_declName_5468_, lean_object* v_a_5469_, lean_object* v_a_5470_){
_start:
{
lean_object* v_res_5471_; 
v_res_5471_ = l_Lean_Meta_isInstance___redArg(v_declName_5468_, v_a_5469_);
lean_dec(v_a_5469_);
lean_dec(v_declName_5468_);
return v_res_5471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance(lean_object* v_declName_5472_, lean_object* v_a_5473_, lean_object* v_a_5474_){
_start:
{
lean_object* v___x_5476_; 
v___x_5476_ = l_Lean_Meta_isInstance___redArg(v_declName_5472_, v_a_5474_);
return v___x_5476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isInstance___boxed(lean_object* v_declName_5477_, lean_object* v_a_5478_, lean_object* v_a_5479_, lean_object* v_a_5480_){
_start:
{
lean_object* v_res_5481_; 
v_res_5481_ = l_Lean_Meta_isInstance(v_declName_5477_, v_a_5478_, v_a_5479_);
lean_dec(v_a_5479_);
lean_dec_ref(v_a_5478_);
lean_dec(v_declName_5477_);
return v_res_5481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg(lean_object* v_declName_5482_, lean_object* v_a_5483_){
_start:
{
lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v_env_5487_; lean_object* v___x_5488_; lean_object* v_ext_5489_; lean_object* v_toEnvExtension_5490_; lean_object* v_asyncMode_5491_; uint8_t v___x_5492_; lean_object* v___x_5493_; lean_object* v_instanceNames_5494_; lean_object* v___x_5495_; 
v___x_5485_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5486_ = lean_st_ref_get(v_a_5483_);
v_env_5487_ = lean_ctor_get(v___x_5486_, 0);
lean_inc_ref(v_env_5487_);
lean_dec(v___x_5486_);
v___x_5488_ = l_Lean_Meta_instanceExtension;
v_ext_5489_ = lean_ctor_get(v___x_5488_, 1);
v_toEnvExtension_5490_ = lean_ctor_get(v_ext_5489_, 0);
v_asyncMode_5491_ = lean_ctor_get(v_toEnvExtension_5490_, 2);
v___x_5492_ = 1;
v___x_5493_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5485_, v___x_5488_, v_env_5487_, v_asyncMode_5491_, v___x_5492_);
v_instanceNames_5494_ = lean_ctor_get(v___x_5493_, 1);
lean_inc_ref(v_instanceNames_5494_);
lean_dec(v___x_5493_);
v___x_5495_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_instanceNames_5494_, v_declName_5482_);
lean_dec_ref(v_instanceNames_5494_);
if (lean_obj_tag(v___x_5495_) == 1)
{
lean_object* v_val_5496_; lean_object* v___x_5498_; uint8_t v_isShared_5499_; uint8_t v_isSharedCheck_5505_; 
v_val_5496_ = lean_ctor_get(v___x_5495_, 0);
v_isSharedCheck_5505_ = !lean_is_exclusive(v___x_5495_);
if (v_isSharedCheck_5505_ == 0)
{
v___x_5498_ = v___x_5495_;
v_isShared_5499_ = v_isSharedCheck_5505_;
goto v_resetjp_5497_;
}
else
{
lean_inc(v_val_5496_);
lean_dec(v___x_5495_);
v___x_5498_ = lean_box(0);
v_isShared_5499_ = v_isSharedCheck_5505_;
goto v_resetjp_5497_;
}
v_resetjp_5497_:
{
lean_object* v_priority_5500_; lean_object* v___x_5502_; 
v_priority_5500_ = lean_ctor_get(v_val_5496_, 2);
lean_inc(v_priority_5500_);
lean_dec(v_val_5496_);
if (v_isShared_5499_ == 0)
{
lean_ctor_set(v___x_5498_, 0, v_priority_5500_);
v___x_5502_ = v___x_5498_;
goto v_reusejp_5501_;
}
else
{
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v_priority_5500_);
v___x_5502_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5501_;
}
v_reusejp_5501_:
{
lean_object* v___x_5503_; 
v___x_5503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5503_, 0, v___x_5502_);
return v___x_5503_;
}
}
}
else
{
lean_object* v___x_5506_; lean_object* v___x_5507_; 
lean_dec(v___x_5495_);
v___x_5506_ = lean_box(0);
v___x_5507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5507_, 0, v___x_5506_);
return v___x_5507_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___redArg___boxed(lean_object* v_declName_5508_, lean_object* v_a_5509_, lean_object* v_a_5510_){
_start:
{
lean_object* v_res_5511_; 
v_res_5511_ = l_Lean_Meta_getInstancePriority_x3f___redArg(v_declName_5508_, v_a_5509_);
lean_dec(v_a_5509_);
lean_dec(v_declName_5508_);
return v_res_5511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f(lean_object* v_declName_5512_, lean_object* v_a_5513_, lean_object* v_a_5514_){
_start:
{
lean_object* v___x_5516_; 
v___x_5516_ = l_Lean_Meta_getInstancePriority_x3f___redArg(v_declName_5512_, v_a_5514_);
return v___x_5516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstancePriority_x3f___boxed(lean_object* v_declName_5517_, lean_object* v_a_5518_, lean_object* v_a_5519_, lean_object* v_a_5520_){
_start:
{
lean_object* v_res_5521_; 
v_res_5521_ = l_Lean_Meta_getInstancePriority_x3f(v_declName_5517_, v_a_5518_, v_a_5519_);
lean_dec(v_a_5519_);
lean_dec_ref(v_a_5518_);
lean_dec(v_declName_5517_);
return v_res_5521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg(lean_object* v_declName_5522_, lean_object* v_a_5523_){
_start:
{
lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v_env_5527_; lean_object* v___x_5528_; lean_object* v_ext_5529_; lean_object* v_toEnvExtension_5530_; lean_object* v_asyncMode_5531_; uint8_t v___x_5532_; lean_object* v___x_5533_; lean_object* v_instanceNames_5534_; lean_object* v___x_5535_; 
v___x_5525_ = l_Lean_Meta_instInhabitedInstances_default;
v___x_5526_ = lean_st_ref_get(v_a_5523_);
v_env_5527_ = lean_ctor_get(v___x_5526_, 0);
lean_inc_ref(v_env_5527_);
lean_dec(v___x_5526_);
v___x_5528_ = l_Lean_Meta_instanceExtension;
v_ext_5529_ = lean_ctor_get(v___x_5528_, 1);
v_toEnvExtension_5530_ = lean_ctor_get(v_ext_5529_, 0);
v_asyncMode_5531_ = lean_ctor_get(v_toEnvExtension_5530_, 2);
v___x_5532_ = 1;
v___x_5533_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5525_, v___x_5528_, v_env_5527_, v_asyncMode_5531_, v___x_5532_);
v_instanceNames_5534_ = lean_ctor_get(v___x_5533_, 1);
lean_inc_ref(v_instanceNames_5534_);
lean_dec(v___x_5533_);
v___x_5535_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Instances_getClassChanges_spec__0___redArg(v_instanceNames_5534_, v_declName_5522_);
lean_dec_ref(v_instanceNames_5534_);
if (lean_obj_tag(v___x_5535_) == 1)
{
lean_object* v_val_5536_; lean_object* v___x_5538_; uint8_t v_isShared_5539_; uint8_t v_isSharedCheck_5546_; 
v_val_5536_ = lean_ctor_get(v___x_5535_, 0);
v_isSharedCheck_5546_ = !lean_is_exclusive(v___x_5535_);
if (v_isSharedCheck_5546_ == 0)
{
v___x_5538_ = v___x_5535_;
v_isShared_5539_ = v_isSharedCheck_5546_;
goto v_resetjp_5537_;
}
else
{
lean_inc(v_val_5536_);
lean_dec(v___x_5535_);
v___x_5538_ = lean_box(0);
v_isShared_5539_ = v_isSharedCheck_5546_;
goto v_resetjp_5537_;
}
v_resetjp_5537_:
{
uint8_t v_attrKind_5540_; lean_object* v___x_5541_; lean_object* v___x_5543_; 
v_attrKind_5540_ = lean_ctor_get_uint8(v_val_5536_, sizeof(void*)*5);
lean_dec(v_val_5536_);
v___x_5541_ = lean_box(v_attrKind_5540_);
if (v_isShared_5539_ == 0)
{
lean_ctor_set(v___x_5538_, 0, v___x_5541_);
v___x_5543_ = v___x_5538_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5545_; 
v_reuseFailAlloc_5545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5545_, 0, v___x_5541_);
v___x_5543_ = v_reuseFailAlloc_5545_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
lean_object* v___x_5544_; 
v___x_5544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5544_, 0, v___x_5543_);
return v___x_5544_;
}
}
}
else
{
lean_object* v___x_5547_; lean_object* v___x_5548_; 
lean_dec(v___x_5535_);
v___x_5547_ = lean_box(0);
v___x_5548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5548_, 0, v___x_5547_);
return v___x_5548_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___redArg___boxed(lean_object* v_declName_5549_, lean_object* v_a_5550_, lean_object* v_a_5551_){
_start:
{
lean_object* v_res_5552_; 
v_res_5552_ = l_Lean_Meta_getInstanceAttrKind_x3f___redArg(v_declName_5549_, v_a_5550_);
lean_dec(v_a_5550_);
lean_dec(v_declName_5549_);
return v_res_5552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f(lean_object* v_declName_5553_, lean_object* v_a_5554_, lean_object* v_a_5555_){
_start:
{
lean_object* v___x_5557_; 
v___x_5557_ = l_Lean_Meta_getInstanceAttrKind_x3f___redArg(v_declName_5553_, v_a_5555_);
return v___x_5557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInstanceAttrKind_x3f___boxed(lean_object* v_declName_5558_, lean_object* v_a_5559_, lean_object* v_a_5560_, lean_object* v_a_5561_){
_start:
{
lean_object* v_res_5562_; 
v_res_5562_ = l_Lean_Meta_getInstanceAttrKind_x3f(v_declName_5558_, v_a_5559_, v_a_5560_);
lean_dec(v_a_5560_);
lean_dec_ref(v_a_5559_);
lean_dec(v_declName_5558_);
return v_res_5562_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(lean_object* v_k_5567_, lean_object* v_v_5568_, lean_object* v_t_5569_){
_start:
{
if (lean_obj_tag(v_t_5569_) == 0)
{
lean_object* v_size_5570_; lean_object* v_k_5571_; lean_object* v_v_5572_; lean_object* v_l_5573_; lean_object* v_r_5574_; lean_object* v___x_5576_; uint8_t v_isShared_5577_; uint8_t v_isSharedCheck_5855_; 
v_size_5570_ = lean_ctor_get(v_t_5569_, 0);
v_k_5571_ = lean_ctor_get(v_t_5569_, 1);
v_v_5572_ = lean_ctor_get(v_t_5569_, 2);
v_l_5573_ = lean_ctor_get(v_t_5569_, 3);
v_r_5574_ = lean_ctor_get(v_t_5569_, 4);
v_isSharedCheck_5855_ = !lean_is_exclusive(v_t_5569_);
if (v_isSharedCheck_5855_ == 0)
{
v___x_5576_ = v_t_5569_;
v_isShared_5577_ = v_isSharedCheck_5855_;
goto v_resetjp_5575_;
}
else
{
lean_inc(v_r_5574_);
lean_inc(v_l_5573_);
lean_inc(v_v_5572_);
lean_inc(v_k_5571_);
lean_inc(v_size_5570_);
lean_dec(v_t_5569_);
v___x_5576_ = lean_box(0);
v_isShared_5577_ = v_isSharedCheck_5855_;
goto v_resetjp_5575_;
}
v_resetjp_5575_:
{
uint8_t v___x_5578_; 
v___x_5578_ = lean_nat_dec_lt(v_k_5571_, v_k_5567_);
if (v___x_5578_ == 0)
{
uint8_t v___x_5579_; 
v___x_5579_ = lean_nat_dec_eq(v_k_5571_, v_k_5567_);
if (v___x_5579_ == 0)
{
lean_object* v_impl_5580_; lean_object* v___x_5581_; 
lean_dec(v_size_5570_);
v_impl_5580_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5567_, v_v_5568_, v_r_5574_);
v___x_5581_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_5573_) == 0)
{
lean_object* v_size_5582_; lean_object* v_size_5583_; lean_object* v_k_5584_; lean_object* v_v_5585_; lean_object* v_l_5586_; lean_object* v_r_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; uint8_t v___x_5590_; 
v_size_5582_ = lean_ctor_get(v_l_5573_, 0);
v_size_5583_ = lean_ctor_get(v_impl_5580_, 0);
v_k_5584_ = lean_ctor_get(v_impl_5580_, 1);
v_v_5585_ = lean_ctor_get(v_impl_5580_, 2);
v_l_5586_ = lean_ctor_get(v_impl_5580_, 3);
lean_inc(v_l_5586_);
v_r_5587_ = lean_ctor_get(v_impl_5580_, 4);
v___x_5588_ = lean_unsigned_to_nat(3u);
v___x_5589_ = lean_nat_mul(v___x_5588_, v_size_5582_);
v___x_5590_ = lean_nat_dec_lt(v___x_5589_, v_size_5583_);
lean_dec(v___x_5589_);
if (v___x_5590_ == 0)
{
lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5594_; 
lean_dec(v_l_5586_);
v___x_5591_ = lean_nat_add(v___x_5581_, v_size_5582_);
v___x_5592_ = lean_nat_add(v___x_5591_, v_size_5583_);
lean_dec(v___x_5591_);
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 4, v_impl_5580_);
lean_ctor_set(v___x_5576_, 0, v___x_5592_);
v___x_5594_ = v___x_5576_;
goto v_reusejp_5593_;
}
else
{
lean_object* v_reuseFailAlloc_5595_; 
v_reuseFailAlloc_5595_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5595_, 0, v___x_5592_);
lean_ctor_set(v_reuseFailAlloc_5595_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5595_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5595_, 3, v_l_5573_);
lean_ctor_set(v_reuseFailAlloc_5595_, 4, v_impl_5580_);
v___x_5594_ = v_reuseFailAlloc_5595_;
goto v_reusejp_5593_;
}
v_reusejp_5593_:
{
return v___x_5594_;
}
}
else
{
lean_object* v___x_5597_; uint8_t v_isShared_5598_; uint8_t v_isSharedCheck_5659_; 
lean_inc(v_r_5587_);
lean_inc(v_v_5585_);
lean_inc(v_k_5584_);
lean_inc(v_size_5583_);
v_isSharedCheck_5659_ = !lean_is_exclusive(v_impl_5580_);
if (v_isSharedCheck_5659_ == 0)
{
lean_object* v_unused_5660_; lean_object* v_unused_5661_; lean_object* v_unused_5662_; lean_object* v_unused_5663_; lean_object* v_unused_5664_; 
v_unused_5660_ = lean_ctor_get(v_impl_5580_, 4);
lean_dec(v_unused_5660_);
v_unused_5661_ = lean_ctor_get(v_impl_5580_, 3);
lean_dec(v_unused_5661_);
v_unused_5662_ = lean_ctor_get(v_impl_5580_, 2);
lean_dec(v_unused_5662_);
v_unused_5663_ = lean_ctor_get(v_impl_5580_, 1);
lean_dec(v_unused_5663_);
v_unused_5664_ = lean_ctor_get(v_impl_5580_, 0);
lean_dec(v_unused_5664_);
v___x_5597_ = v_impl_5580_;
v_isShared_5598_ = v_isSharedCheck_5659_;
goto v_resetjp_5596_;
}
else
{
lean_dec(v_impl_5580_);
v___x_5597_ = lean_box(0);
v_isShared_5598_ = v_isSharedCheck_5659_;
goto v_resetjp_5596_;
}
v_resetjp_5596_:
{
lean_object* v_size_5599_; lean_object* v_k_5600_; lean_object* v_v_5601_; lean_object* v_l_5602_; lean_object* v_r_5603_; lean_object* v_size_5604_; lean_object* v___x_5605_; lean_object* v___x_5606_; uint8_t v___x_5607_; 
v_size_5599_ = lean_ctor_get(v_l_5586_, 0);
v_k_5600_ = lean_ctor_get(v_l_5586_, 1);
v_v_5601_ = lean_ctor_get(v_l_5586_, 2);
v_l_5602_ = lean_ctor_get(v_l_5586_, 3);
v_r_5603_ = lean_ctor_get(v_l_5586_, 4);
v_size_5604_ = lean_ctor_get(v_r_5587_, 0);
v___x_5605_ = lean_unsigned_to_nat(2u);
v___x_5606_ = lean_nat_mul(v___x_5605_, v_size_5604_);
v___x_5607_ = lean_nat_dec_lt(v_size_5599_, v___x_5606_);
lean_dec(v___x_5606_);
if (v___x_5607_ == 0)
{
lean_object* v___x_5609_; uint8_t v_isShared_5610_; uint8_t v_isSharedCheck_5635_; 
lean_inc(v_r_5603_);
lean_inc(v_l_5602_);
lean_inc(v_v_5601_);
lean_inc(v_k_5600_);
v_isSharedCheck_5635_ = !lean_is_exclusive(v_l_5586_);
if (v_isSharedCheck_5635_ == 0)
{
lean_object* v_unused_5636_; lean_object* v_unused_5637_; lean_object* v_unused_5638_; lean_object* v_unused_5639_; lean_object* v_unused_5640_; 
v_unused_5636_ = lean_ctor_get(v_l_5586_, 4);
lean_dec(v_unused_5636_);
v_unused_5637_ = lean_ctor_get(v_l_5586_, 3);
lean_dec(v_unused_5637_);
v_unused_5638_ = lean_ctor_get(v_l_5586_, 2);
lean_dec(v_unused_5638_);
v_unused_5639_ = lean_ctor_get(v_l_5586_, 1);
lean_dec(v_unused_5639_);
v_unused_5640_ = lean_ctor_get(v_l_5586_, 0);
lean_dec(v_unused_5640_);
v___x_5609_ = v_l_5586_;
v_isShared_5610_ = v_isSharedCheck_5635_;
goto v_resetjp_5608_;
}
else
{
lean_dec(v_l_5586_);
v___x_5609_ = lean_box(0);
v_isShared_5610_ = v_isSharedCheck_5635_;
goto v_resetjp_5608_;
}
v_resetjp_5608_:
{
lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___y_5614_; lean_object* v___y_5615_; lean_object* v___y_5616_; lean_object* v___y_5625_; 
v___x_5611_ = lean_nat_add(v___x_5581_, v_size_5582_);
v___x_5612_ = lean_nat_add(v___x_5611_, v_size_5583_);
lean_dec(v_size_5583_);
if (lean_obj_tag(v_l_5602_) == 0)
{
lean_object* v_size_5633_; 
v_size_5633_ = lean_ctor_get(v_l_5602_, 0);
lean_inc(v_size_5633_);
v___y_5625_ = v_size_5633_;
goto v___jp_5624_;
}
else
{
lean_object* v___x_5634_; 
v___x_5634_ = lean_unsigned_to_nat(0u);
v___y_5625_ = v___x_5634_;
goto v___jp_5624_;
}
v___jp_5613_:
{
lean_object* v___x_5617_; lean_object* v___x_5619_; 
v___x_5617_ = lean_nat_add(v___y_5614_, v___y_5616_);
lean_dec(v___y_5616_);
lean_dec(v___y_5614_);
if (v_isShared_5610_ == 0)
{
lean_ctor_set(v___x_5609_, 4, v_r_5587_);
lean_ctor_set(v___x_5609_, 3, v_r_5603_);
lean_ctor_set(v___x_5609_, 2, v_v_5585_);
lean_ctor_set(v___x_5609_, 1, v_k_5584_);
lean_ctor_set(v___x_5609_, 0, v___x_5617_);
v___x_5619_ = v___x_5609_;
goto v_reusejp_5618_;
}
else
{
lean_object* v_reuseFailAlloc_5623_; 
v_reuseFailAlloc_5623_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5623_, 0, v___x_5617_);
lean_ctor_set(v_reuseFailAlloc_5623_, 1, v_k_5584_);
lean_ctor_set(v_reuseFailAlloc_5623_, 2, v_v_5585_);
lean_ctor_set(v_reuseFailAlloc_5623_, 3, v_r_5603_);
lean_ctor_set(v_reuseFailAlloc_5623_, 4, v_r_5587_);
v___x_5619_ = v_reuseFailAlloc_5623_;
goto v_reusejp_5618_;
}
v_reusejp_5618_:
{
lean_object* v___x_5621_; 
if (v_isShared_5598_ == 0)
{
lean_ctor_set(v___x_5597_, 4, v___x_5619_);
lean_ctor_set(v___x_5597_, 3, v___y_5615_);
lean_ctor_set(v___x_5597_, 2, v_v_5601_);
lean_ctor_set(v___x_5597_, 1, v_k_5600_);
lean_ctor_set(v___x_5597_, 0, v___x_5612_);
v___x_5621_ = v___x_5597_;
goto v_reusejp_5620_;
}
else
{
lean_object* v_reuseFailAlloc_5622_; 
v_reuseFailAlloc_5622_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5622_, 0, v___x_5612_);
lean_ctor_set(v_reuseFailAlloc_5622_, 1, v_k_5600_);
lean_ctor_set(v_reuseFailAlloc_5622_, 2, v_v_5601_);
lean_ctor_set(v_reuseFailAlloc_5622_, 3, v___y_5615_);
lean_ctor_set(v_reuseFailAlloc_5622_, 4, v___x_5619_);
v___x_5621_ = v_reuseFailAlloc_5622_;
goto v_reusejp_5620_;
}
v_reusejp_5620_:
{
return v___x_5621_;
}
}
}
v___jp_5624_:
{
lean_object* v___x_5626_; lean_object* v___x_5628_; 
v___x_5626_ = lean_nat_add(v___x_5611_, v___y_5625_);
lean_dec(v___y_5625_);
lean_dec(v___x_5611_);
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 4, v_l_5602_);
lean_ctor_set(v___x_5576_, 0, v___x_5626_);
v___x_5628_ = v___x_5576_;
goto v_reusejp_5627_;
}
else
{
lean_object* v_reuseFailAlloc_5632_; 
v_reuseFailAlloc_5632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5632_, 0, v___x_5626_);
lean_ctor_set(v_reuseFailAlloc_5632_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5632_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5632_, 3, v_l_5573_);
lean_ctor_set(v_reuseFailAlloc_5632_, 4, v_l_5602_);
v___x_5628_ = v_reuseFailAlloc_5632_;
goto v_reusejp_5627_;
}
v_reusejp_5627_:
{
lean_object* v___x_5629_; 
v___x_5629_ = lean_nat_add(v___x_5581_, v_size_5604_);
if (lean_obj_tag(v_r_5603_) == 0)
{
lean_object* v_size_5630_; 
v_size_5630_ = lean_ctor_get(v_r_5603_, 0);
lean_inc(v_size_5630_);
v___y_5614_ = v___x_5629_;
v___y_5615_ = v___x_5628_;
v___y_5616_ = v_size_5630_;
goto v___jp_5613_;
}
else
{
lean_object* v___x_5631_; 
v___x_5631_ = lean_unsigned_to_nat(0u);
v___y_5614_ = v___x_5629_;
v___y_5615_ = v___x_5628_;
v___y_5616_ = v___x_5631_;
goto v___jp_5613_;
}
}
}
}
}
else
{
lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5645_; 
lean_del_object(v___x_5576_);
v___x_5641_ = lean_nat_add(v___x_5581_, v_size_5582_);
v___x_5642_ = lean_nat_add(v___x_5641_, v_size_5583_);
lean_dec(v_size_5583_);
v___x_5643_ = lean_nat_add(v___x_5641_, v_size_5599_);
lean_dec(v___x_5641_);
lean_inc_ref(v_l_5573_);
if (v_isShared_5598_ == 0)
{
lean_ctor_set(v___x_5597_, 4, v_l_5586_);
lean_ctor_set(v___x_5597_, 3, v_l_5573_);
lean_ctor_set(v___x_5597_, 2, v_v_5572_);
lean_ctor_set(v___x_5597_, 1, v_k_5571_);
lean_ctor_set(v___x_5597_, 0, v___x_5643_);
v___x_5645_ = v___x_5597_;
goto v_reusejp_5644_;
}
else
{
lean_object* v_reuseFailAlloc_5658_; 
v_reuseFailAlloc_5658_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5658_, 0, v___x_5643_);
lean_ctor_set(v_reuseFailAlloc_5658_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5658_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5658_, 3, v_l_5573_);
lean_ctor_set(v_reuseFailAlloc_5658_, 4, v_l_5586_);
v___x_5645_ = v_reuseFailAlloc_5658_;
goto v_reusejp_5644_;
}
v_reusejp_5644_:
{
lean_object* v___x_5647_; uint8_t v_isShared_5648_; uint8_t v_isSharedCheck_5652_; 
v_isSharedCheck_5652_ = !lean_is_exclusive(v_l_5573_);
if (v_isSharedCheck_5652_ == 0)
{
lean_object* v_unused_5653_; lean_object* v_unused_5654_; lean_object* v_unused_5655_; lean_object* v_unused_5656_; lean_object* v_unused_5657_; 
v_unused_5653_ = lean_ctor_get(v_l_5573_, 4);
lean_dec(v_unused_5653_);
v_unused_5654_ = lean_ctor_get(v_l_5573_, 3);
lean_dec(v_unused_5654_);
v_unused_5655_ = lean_ctor_get(v_l_5573_, 2);
lean_dec(v_unused_5655_);
v_unused_5656_ = lean_ctor_get(v_l_5573_, 1);
lean_dec(v_unused_5656_);
v_unused_5657_ = lean_ctor_get(v_l_5573_, 0);
lean_dec(v_unused_5657_);
v___x_5647_ = v_l_5573_;
v_isShared_5648_ = v_isSharedCheck_5652_;
goto v_resetjp_5646_;
}
else
{
lean_dec(v_l_5573_);
v___x_5647_ = lean_box(0);
v_isShared_5648_ = v_isSharedCheck_5652_;
goto v_resetjp_5646_;
}
v_resetjp_5646_:
{
lean_object* v___x_5650_; 
if (v_isShared_5648_ == 0)
{
lean_ctor_set(v___x_5647_, 4, v_r_5587_);
lean_ctor_set(v___x_5647_, 3, v___x_5645_);
lean_ctor_set(v___x_5647_, 2, v_v_5585_);
lean_ctor_set(v___x_5647_, 1, v_k_5584_);
lean_ctor_set(v___x_5647_, 0, v___x_5642_);
v___x_5650_ = v___x_5647_;
goto v_reusejp_5649_;
}
else
{
lean_object* v_reuseFailAlloc_5651_; 
v_reuseFailAlloc_5651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5651_, 0, v___x_5642_);
lean_ctor_set(v_reuseFailAlloc_5651_, 1, v_k_5584_);
lean_ctor_set(v_reuseFailAlloc_5651_, 2, v_v_5585_);
lean_ctor_set(v_reuseFailAlloc_5651_, 3, v___x_5645_);
lean_ctor_set(v_reuseFailAlloc_5651_, 4, v_r_5587_);
v___x_5650_ = v_reuseFailAlloc_5651_;
goto v_reusejp_5649_;
}
v_reusejp_5649_:
{
return v___x_5650_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_5665_; 
v_l_5665_ = lean_ctor_get(v_impl_5580_, 3);
lean_inc(v_l_5665_);
if (lean_obj_tag(v_l_5665_) == 0)
{
lean_object* v_r_5666_; lean_object* v_k_5667_; lean_object* v_v_5668_; lean_object* v___x_5670_; uint8_t v_isShared_5671_; uint8_t v_isSharedCheck_5691_; 
v_r_5666_ = lean_ctor_get(v_impl_5580_, 4);
v_k_5667_ = lean_ctor_get(v_impl_5580_, 1);
v_v_5668_ = lean_ctor_get(v_impl_5580_, 2);
v_isSharedCheck_5691_ = !lean_is_exclusive(v_impl_5580_);
if (v_isSharedCheck_5691_ == 0)
{
lean_object* v_unused_5692_; lean_object* v_unused_5693_; 
v_unused_5692_ = lean_ctor_get(v_impl_5580_, 3);
lean_dec(v_unused_5692_);
v_unused_5693_ = lean_ctor_get(v_impl_5580_, 0);
lean_dec(v_unused_5693_);
v___x_5670_ = v_impl_5580_;
v_isShared_5671_ = v_isSharedCheck_5691_;
goto v_resetjp_5669_;
}
else
{
lean_inc(v_r_5666_);
lean_inc(v_v_5668_);
lean_inc(v_k_5667_);
lean_dec(v_impl_5580_);
v___x_5670_ = lean_box(0);
v_isShared_5671_ = v_isSharedCheck_5691_;
goto v_resetjp_5669_;
}
v_resetjp_5669_:
{
lean_object* v_k_5672_; lean_object* v_v_5673_; lean_object* v___x_5675_; uint8_t v_isShared_5676_; uint8_t v_isSharedCheck_5687_; 
v_k_5672_ = lean_ctor_get(v_l_5665_, 1);
v_v_5673_ = lean_ctor_get(v_l_5665_, 2);
v_isSharedCheck_5687_ = !lean_is_exclusive(v_l_5665_);
if (v_isSharedCheck_5687_ == 0)
{
lean_object* v_unused_5688_; lean_object* v_unused_5689_; lean_object* v_unused_5690_; 
v_unused_5688_ = lean_ctor_get(v_l_5665_, 4);
lean_dec(v_unused_5688_);
v_unused_5689_ = lean_ctor_get(v_l_5665_, 3);
lean_dec(v_unused_5689_);
v_unused_5690_ = lean_ctor_get(v_l_5665_, 0);
lean_dec(v_unused_5690_);
v___x_5675_ = v_l_5665_;
v_isShared_5676_ = v_isSharedCheck_5687_;
goto v_resetjp_5674_;
}
else
{
lean_inc(v_v_5673_);
lean_inc(v_k_5672_);
lean_dec(v_l_5665_);
v___x_5675_ = lean_box(0);
v_isShared_5676_ = v_isSharedCheck_5687_;
goto v_resetjp_5674_;
}
v_resetjp_5674_:
{
lean_object* v___x_5677_; lean_object* v___x_5679_; 
v___x_5677_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_5666_, 2);
if (v_isShared_5676_ == 0)
{
lean_ctor_set(v___x_5675_, 4, v_r_5666_);
lean_ctor_set(v___x_5675_, 3, v_r_5666_);
lean_ctor_set(v___x_5675_, 2, v_v_5572_);
lean_ctor_set(v___x_5675_, 1, v_k_5571_);
lean_ctor_set(v___x_5675_, 0, v___x_5581_);
v___x_5679_ = v___x_5675_;
goto v_reusejp_5678_;
}
else
{
lean_object* v_reuseFailAlloc_5686_; 
v_reuseFailAlloc_5686_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5686_, 0, v___x_5581_);
lean_ctor_set(v_reuseFailAlloc_5686_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5686_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5686_, 3, v_r_5666_);
lean_ctor_set(v_reuseFailAlloc_5686_, 4, v_r_5666_);
v___x_5679_ = v_reuseFailAlloc_5686_;
goto v_reusejp_5678_;
}
v_reusejp_5678_:
{
lean_object* v___x_5681_; 
lean_inc(v_r_5666_);
if (v_isShared_5671_ == 0)
{
lean_ctor_set(v___x_5670_, 3, v_r_5666_);
lean_ctor_set(v___x_5670_, 0, v___x_5581_);
v___x_5681_ = v___x_5670_;
goto v_reusejp_5680_;
}
else
{
lean_object* v_reuseFailAlloc_5685_; 
v_reuseFailAlloc_5685_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5685_, 0, v___x_5581_);
lean_ctor_set(v_reuseFailAlloc_5685_, 1, v_k_5667_);
lean_ctor_set(v_reuseFailAlloc_5685_, 2, v_v_5668_);
lean_ctor_set(v_reuseFailAlloc_5685_, 3, v_r_5666_);
lean_ctor_set(v_reuseFailAlloc_5685_, 4, v_r_5666_);
v___x_5681_ = v_reuseFailAlloc_5685_;
goto v_reusejp_5680_;
}
v_reusejp_5680_:
{
lean_object* v___x_5683_; 
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 4, v___x_5681_);
lean_ctor_set(v___x_5576_, 3, v___x_5679_);
lean_ctor_set(v___x_5576_, 2, v_v_5673_);
lean_ctor_set(v___x_5576_, 1, v_k_5672_);
lean_ctor_set(v___x_5576_, 0, v___x_5677_);
v___x_5683_ = v___x_5576_;
goto v_reusejp_5682_;
}
else
{
lean_object* v_reuseFailAlloc_5684_; 
v_reuseFailAlloc_5684_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5684_, 0, v___x_5677_);
lean_ctor_set(v_reuseFailAlloc_5684_, 1, v_k_5672_);
lean_ctor_set(v_reuseFailAlloc_5684_, 2, v_v_5673_);
lean_ctor_set(v_reuseFailAlloc_5684_, 3, v___x_5679_);
lean_ctor_set(v_reuseFailAlloc_5684_, 4, v___x_5681_);
v___x_5683_ = v_reuseFailAlloc_5684_;
goto v_reusejp_5682_;
}
v_reusejp_5682_:
{
return v___x_5683_;
}
}
}
}
}
}
else
{
lean_object* v_r_5694_; 
v_r_5694_ = lean_ctor_get(v_impl_5580_, 4);
lean_inc(v_r_5694_);
if (lean_obj_tag(v_r_5694_) == 0)
{
lean_object* v_k_5695_; lean_object* v_v_5696_; lean_object* v___x_5698_; uint8_t v_isShared_5699_; uint8_t v_isSharedCheck_5707_; 
v_k_5695_ = lean_ctor_get(v_impl_5580_, 1);
v_v_5696_ = lean_ctor_get(v_impl_5580_, 2);
v_isSharedCheck_5707_ = !lean_is_exclusive(v_impl_5580_);
if (v_isSharedCheck_5707_ == 0)
{
lean_object* v_unused_5708_; lean_object* v_unused_5709_; lean_object* v_unused_5710_; 
v_unused_5708_ = lean_ctor_get(v_impl_5580_, 4);
lean_dec(v_unused_5708_);
v_unused_5709_ = lean_ctor_get(v_impl_5580_, 3);
lean_dec(v_unused_5709_);
v_unused_5710_ = lean_ctor_get(v_impl_5580_, 0);
lean_dec(v_unused_5710_);
v___x_5698_ = v_impl_5580_;
v_isShared_5699_ = v_isSharedCheck_5707_;
goto v_resetjp_5697_;
}
else
{
lean_inc(v_v_5696_);
lean_inc(v_k_5695_);
lean_dec(v_impl_5580_);
v___x_5698_ = lean_box(0);
v_isShared_5699_ = v_isSharedCheck_5707_;
goto v_resetjp_5697_;
}
v_resetjp_5697_:
{
lean_object* v___x_5700_; lean_object* v___x_5702_; 
v___x_5700_ = lean_unsigned_to_nat(3u);
if (v_isShared_5699_ == 0)
{
lean_ctor_set(v___x_5698_, 4, v_l_5665_);
lean_ctor_set(v___x_5698_, 2, v_v_5572_);
lean_ctor_set(v___x_5698_, 1, v_k_5571_);
lean_ctor_set(v___x_5698_, 0, v___x_5581_);
v___x_5702_ = v___x_5698_;
goto v_reusejp_5701_;
}
else
{
lean_object* v_reuseFailAlloc_5706_; 
v_reuseFailAlloc_5706_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5706_, 0, v___x_5581_);
lean_ctor_set(v_reuseFailAlloc_5706_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5706_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5706_, 3, v_l_5665_);
lean_ctor_set(v_reuseFailAlloc_5706_, 4, v_l_5665_);
v___x_5702_ = v_reuseFailAlloc_5706_;
goto v_reusejp_5701_;
}
v_reusejp_5701_:
{
lean_object* v___x_5704_; 
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 4, v_r_5694_);
lean_ctor_set(v___x_5576_, 3, v___x_5702_);
lean_ctor_set(v___x_5576_, 2, v_v_5696_);
lean_ctor_set(v___x_5576_, 1, v_k_5695_);
lean_ctor_set(v___x_5576_, 0, v___x_5700_);
v___x_5704_ = v___x_5576_;
goto v_reusejp_5703_;
}
else
{
lean_object* v_reuseFailAlloc_5705_; 
v_reuseFailAlloc_5705_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5705_, 0, v___x_5700_);
lean_ctor_set(v_reuseFailAlloc_5705_, 1, v_k_5695_);
lean_ctor_set(v_reuseFailAlloc_5705_, 2, v_v_5696_);
lean_ctor_set(v_reuseFailAlloc_5705_, 3, v___x_5702_);
lean_ctor_set(v_reuseFailAlloc_5705_, 4, v_r_5694_);
v___x_5704_ = v_reuseFailAlloc_5705_;
goto v_reusejp_5703_;
}
v_reusejp_5703_:
{
return v___x_5704_;
}
}
}
}
else
{
lean_object* v___x_5711_; lean_object* v___x_5713_; 
v___x_5711_ = lean_unsigned_to_nat(2u);
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 4, v_impl_5580_);
lean_ctor_set(v___x_5576_, 3, v_r_5694_);
lean_ctor_set(v___x_5576_, 0, v___x_5711_);
v___x_5713_ = v___x_5576_;
goto v_reusejp_5712_;
}
else
{
lean_object* v_reuseFailAlloc_5714_; 
v_reuseFailAlloc_5714_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5714_, 0, v___x_5711_);
lean_ctor_set(v_reuseFailAlloc_5714_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5714_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5714_, 3, v_r_5694_);
lean_ctor_set(v_reuseFailAlloc_5714_, 4, v_impl_5580_);
v___x_5713_ = v_reuseFailAlloc_5714_;
goto v_reusejp_5712_;
}
v_reusejp_5712_:
{
return v___x_5713_;
}
}
}
}
}
else
{
lean_object* v___x_5716_; 
lean_dec(v_v_5572_);
lean_dec(v_k_5571_);
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 2, v_v_5568_);
lean_ctor_set(v___x_5576_, 1, v_k_5567_);
v___x_5716_ = v___x_5576_;
goto v_reusejp_5715_;
}
else
{
lean_object* v_reuseFailAlloc_5717_; 
v_reuseFailAlloc_5717_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5717_, 0, v_size_5570_);
lean_ctor_set(v_reuseFailAlloc_5717_, 1, v_k_5567_);
lean_ctor_set(v_reuseFailAlloc_5717_, 2, v_v_5568_);
lean_ctor_set(v_reuseFailAlloc_5717_, 3, v_l_5573_);
lean_ctor_set(v_reuseFailAlloc_5717_, 4, v_r_5574_);
v___x_5716_ = v_reuseFailAlloc_5717_;
goto v_reusejp_5715_;
}
v_reusejp_5715_:
{
return v___x_5716_;
}
}
}
else
{
lean_object* v_impl_5718_; lean_object* v___x_5719_; 
lean_dec(v_size_5570_);
v_impl_5718_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5567_, v_v_5568_, v_l_5573_);
v___x_5719_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_5574_) == 0)
{
lean_object* v_size_5720_; lean_object* v_size_5721_; lean_object* v_k_5722_; lean_object* v_v_5723_; lean_object* v_l_5724_; lean_object* v_r_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; uint8_t v___x_5728_; 
v_size_5720_ = lean_ctor_get(v_r_5574_, 0);
v_size_5721_ = lean_ctor_get(v_impl_5718_, 0);
v_k_5722_ = lean_ctor_get(v_impl_5718_, 1);
v_v_5723_ = lean_ctor_get(v_impl_5718_, 2);
v_l_5724_ = lean_ctor_get(v_impl_5718_, 3);
v_r_5725_ = lean_ctor_get(v_impl_5718_, 4);
lean_inc(v_r_5725_);
v___x_5726_ = lean_unsigned_to_nat(3u);
v___x_5727_ = lean_nat_mul(v___x_5726_, v_size_5720_);
v___x_5728_ = lean_nat_dec_lt(v___x_5727_, v_size_5721_);
lean_dec(v___x_5727_);
if (v___x_5728_ == 0)
{
lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5732_; 
lean_dec(v_r_5725_);
v___x_5729_ = lean_nat_add(v___x_5719_, v_size_5721_);
v___x_5730_ = lean_nat_add(v___x_5729_, v_size_5720_);
lean_dec(v___x_5729_);
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 3, v_impl_5718_);
lean_ctor_set(v___x_5576_, 0, v___x_5730_);
v___x_5732_ = v___x_5576_;
goto v_reusejp_5731_;
}
else
{
lean_object* v_reuseFailAlloc_5733_; 
v_reuseFailAlloc_5733_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5733_, 0, v___x_5730_);
lean_ctor_set(v_reuseFailAlloc_5733_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5733_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5733_, 3, v_impl_5718_);
lean_ctor_set(v_reuseFailAlloc_5733_, 4, v_r_5574_);
v___x_5732_ = v_reuseFailAlloc_5733_;
goto v_reusejp_5731_;
}
v_reusejp_5731_:
{
return v___x_5732_;
}
}
else
{
lean_object* v___x_5735_; uint8_t v_isShared_5736_; uint8_t v_isSharedCheck_5799_; 
lean_inc(v_l_5724_);
lean_inc(v_v_5723_);
lean_inc(v_k_5722_);
lean_inc(v_size_5721_);
v_isSharedCheck_5799_ = !lean_is_exclusive(v_impl_5718_);
if (v_isSharedCheck_5799_ == 0)
{
lean_object* v_unused_5800_; lean_object* v_unused_5801_; lean_object* v_unused_5802_; lean_object* v_unused_5803_; lean_object* v_unused_5804_; 
v_unused_5800_ = lean_ctor_get(v_impl_5718_, 4);
lean_dec(v_unused_5800_);
v_unused_5801_ = lean_ctor_get(v_impl_5718_, 3);
lean_dec(v_unused_5801_);
v_unused_5802_ = lean_ctor_get(v_impl_5718_, 2);
lean_dec(v_unused_5802_);
v_unused_5803_ = lean_ctor_get(v_impl_5718_, 1);
lean_dec(v_unused_5803_);
v_unused_5804_ = lean_ctor_get(v_impl_5718_, 0);
lean_dec(v_unused_5804_);
v___x_5735_ = v_impl_5718_;
v_isShared_5736_ = v_isSharedCheck_5799_;
goto v_resetjp_5734_;
}
else
{
lean_dec(v_impl_5718_);
v___x_5735_ = lean_box(0);
v_isShared_5736_ = v_isSharedCheck_5799_;
goto v_resetjp_5734_;
}
v_resetjp_5734_:
{
lean_object* v_size_5737_; lean_object* v_size_5738_; lean_object* v_k_5739_; lean_object* v_v_5740_; lean_object* v_l_5741_; lean_object* v_r_5742_; lean_object* v___x_5743_; lean_object* v___x_5744_; uint8_t v___x_5745_; 
v_size_5737_ = lean_ctor_get(v_l_5724_, 0);
v_size_5738_ = lean_ctor_get(v_r_5725_, 0);
v_k_5739_ = lean_ctor_get(v_r_5725_, 1);
v_v_5740_ = lean_ctor_get(v_r_5725_, 2);
v_l_5741_ = lean_ctor_get(v_r_5725_, 3);
v_r_5742_ = lean_ctor_get(v_r_5725_, 4);
v___x_5743_ = lean_unsigned_to_nat(2u);
v___x_5744_ = lean_nat_mul(v___x_5743_, v_size_5737_);
v___x_5745_ = lean_nat_dec_lt(v_size_5738_, v___x_5744_);
lean_dec(v___x_5744_);
if (v___x_5745_ == 0)
{
lean_object* v___x_5747_; uint8_t v_isShared_5748_; uint8_t v_isSharedCheck_5774_; 
lean_inc(v_r_5742_);
lean_inc(v_l_5741_);
lean_inc(v_v_5740_);
lean_inc(v_k_5739_);
v_isSharedCheck_5774_ = !lean_is_exclusive(v_r_5725_);
if (v_isSharedCheck_5774_ == 0)
{
lean_object* v_unused_5775_; lean_object* v_unused_5776_; lean_object* v_unused_5777_; lean_object* v_unused_5778_; lean_object* v_unused_5779_; 
v_unused_5775_ = lean_ctor_get(v_r_5725_, 4);
lean_dec(v_unused_5775_);
v_unused_5776_ = lean_ctor_get(v_r_5725_, 3);
lean_dec(v_unused_5776_);
v_unused_5777_ = lean_ctor_get(v_r_5725_, 2);
lean_dec(v_unused_5777_);
v_unused_5778_ = lean_ctor_get(v_r_5725_, 1);
lean_dec(v_unused_5778_);
v_unused_5779_ = lean_ctor_get(v_r_5725_, 0);
lean_dec(v_unused_5779_);
v___x_5747_ = v_r_5725_;
v_isShared_5748_ = v_isSharedCheck_5774_;
goto v_resetjp_5746_;
}
else
{
lean_dec(v_r_5725_);
v___x_5747_ = lean_box(0);
v_isShared_5748_ = v_isSharedCheck_5774_;
goto v_resetjp_5746_;
}
v_resetjp_5746_:
{
lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___y_5752_; lean_object* v___y_5753_; lean_object* v___y_5754_; lean_object* v___x_5762_; lean_object* v___y_5764_; 
v___x_5749_ = lean_nat_add(v___x_5719_, v_size_5721_);
lean_dec(v_size_5721_);
v___x_5750_ = lean_nat_add(v___x_5749_, v_size_5720_);
lean_dec(v___x_5749_);
v___x_5762_ = lean_nat_add(v___x_5719_, v_size_5737_);
if (lean_obj_tag(v_l_5741_) == 0)
{
lean_object* v_size_5772_; 
v_size_5772_ = lean_ctor_get(v_l_5741_, 0);
lean_inc(v_size_5772_);
v___y_5764_ = v_size_5772_;
goto v___jp_5763_;
}
else
{
lean_object* v___x_5773_; 
v___x_5773_ = lean_unsigned_to_nat(0u);
v___y_5764_ = v___x_5773_;
goto v___jp_5763_;
}
v___jp_5751_:
{
lean_object* v___x_5755_; lean_object* v___x_5757_; 
v___x_5755_ = lean_nat_add(v___y_5753_, v___y_5754_);
lean_dec(v___y_5754_);
lean_dec(v___y_5753_);
if (v_isShared_5748_ == 0)
{
lean_ctor_set(v___x_5747_, 4, v_r_5574_);
lean_ctor_set(v___x_5747_, 3, v_r_5742_);
lean_ctor_set(v___x_5747_, 2, v_v_5572_);
lean_ctor_set(v___x_5747_, 1, v_k_5571_);
lean_ctor_set(v___x_5747_, 0, v___x_5755_);
v___x_5757_ = v___x_5747_;
goto v_reusejp_5756_;
}
else
{
lean_object* v_reuseFailAlloc_5761_; 
v_reuseFailAlloc_5761_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5761_, 0, v___x_5755_);
lean_ctor_set(v_reuseFailAlloc_5761_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5761_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5761_, 3, v_r_5742_);
lean_ctor_set(v_reuseFailAlloc_5761_, 4, v_r_5574_);
v___x_5757_ = v_reuseFailAlloc_5761_;
goto v_reusejp_5756_;
}
v_reusejp_5756_:
{
lean_object* v___x_5759_; 
if (v_isShared_5736_ == 0)
{
lean_ctor_set(v___x_5735_, 4, v___x_5757_);
lean_ctor_set(v___x_5735_, 3, v___y_5752_);
lean_ctor_set(v___x_5735_, 2, v_v_5740_);
lean_ctor_set(v___x_5735_, 1, v_k_5739_);
lean_ctor_set(v___x_5735_, 0, v___x_5750_);
v___x_5759_ = v___x_5735_;
goto v_reusejp_5758_;
}
else
{
lean_object* v_reuseFailAlloc_5760_; 
v_reuseFailAlloc_5760_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5760_, 0, v___x_5750_);
lean_ctor_set(v_reuseFailAlloc_5760_, 1, v_k_5739_);
lean_ctor_set(v_reuseFailAlloc_5760_, 2, v_v_5740_);
lean_ctor_set(v_reuseFailAlloc_5760_, 3, v___y_5752_);
lean_ctor_set(v_reuseFailAlloc_5760_, 4, v___x_5757_);
v___x_5759_ = v_reuseFailAlloc_5760_;
goto v_reusejp_5758_;
}
v_reusejp_5758_:
{
return v___x_5759_;
}
}
}
v___jp_5763_:
{
lean_object* v___x_5765_; lean_object* v___x_5767_; 
v___x_5765_ = lean_nat_add(v___x_5762_, v___y_5764_);
lean_dec(v___y_5764_);
lean_dec(v___x_5762_);
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 4, v_l_5741_);
lean_ctor_set(v___x_5576_, 3, v_l_5724_);
lean_ctor_set(v___x_5576_, 2, v_v_5723_);
lean_ctor_set(v___x_5576_, 1, v_k_5722_);
lean_ctor_set(v___x_5576_, 0, v___x_5765_);
v___x_5767_ = v___x_5576_;
goto v_reusejp_5766_;
}
else
{
lean_object* v_reuseFailAlloc_5771_; 
v_reuseFailAlloc_5771_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5771_, 0, v___x_5765_);
lean_ctor_set(v_reuseFailAlloc_5771_, 1, v_k_5722_);
lean_ctor_set(v_reuseFailAlloc_5771_, 2, v_v_5723_);
lean_ctor_set(v_reuseFailAlloc_5771_, 3, v_l_5724_);
lean_ctor_set(v_reuseFailAlloc_5771_, 4, v_l_5741_);
v___x_5767_ = v_reuseFailAlloc_5771_;
goto v_reusejp_5766_;
}
v_reusejp_5766_:
{
lean_object* v___x_5768_; 
v___x_5768_ = lean_nat_add(v___x_5719_, v_size_5720_);
if (lean_obj_tag(v_r_5742_) == 0)
{
lean_object* v_size_5769_; 
v_size_5769_ = lean_ctor_get(v_r_5742_, 0);
lean_inc(v_size_5769_);
v___y_5752_ = v___x_5767_;
v___y_5753_ = v___x_5768_;
v___y_5754_ = v_size_5769_;
goto v___jp_5751_;
}
else
{
lean_object* v___x_5770_; 
v___x_5770_ = lean_unsigned_to_nat(0u);
v___y_5752_ = v___x_5767_;
v___y_5753_ = v___x_5768_;
v___y_5754_ = v___x_5770_;
goto v___jp_5751_;
}
}
}
}
}
else
{
lean_object* v___x_5780_; lean_object* v___x_5781_; lean_object* v___x_5782_; lean_object* v___x_5783_; lean_object* v___x_5785_; 
lean_del_object(v___x_5576_);
v___x_5780_ = lean_nat_add(v___x_5719_, v_size_5721_);
lean_dec(v_size_5721_);
v___x_5781_ = lean_nat_add(v___x_5780_, v_size_5720_);
lean_dec(v___x_5780_);
v___x_5782_ = lean_nat_add(v___x_5719_, v_size_5720_);
v___x_5783_ = lean_nat_add(v___x_5782_, v_size_5738_);
lean_dec(v___x_5782_);
lean_inc_ref(v_r_5574_);
if (v_isShared_5736_ == 0)
{
lean_ctor_set(v___x_5735_, 4, v_r_5574_);
lean_ctor_set(v___x_5735_, 3, v_r_5725_);
lean_ctor_set(v___x_5735_, 2, v_v_5572_);
lean_ctor_set(v___x_5735_, 1, v_k_5571_);
lean_ctor_set(v___x_5735_, 0, v___x_5783_);
v___x_5785_ = v___x_5735_;
goto v_reusejp_5784_;
}
else
{
lean_object* v_reuseFailAlloc_5798_; 
v_reuseFailAlloc_5798_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5798_, 0, v___x_5783_);
lean_ctor_set(v_reuseFailAlloc_5798_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5798_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5798_, 3, v_r_5725_);
lean_ctor_set(v_reuseFailAlloc_5798_, 4, v_r_5574_);
v___x_5785_ = v_reuseFailAlloc_5798_;
goto v_reusejp_5784_;
}
v_reusejp_5784_:
{
lean_object* v___x_5787_; uint8_t v_isShared_5788_; uint8_t v_isSharedCheck_5792_; 
v_isSharedCheck_5792_ = !lean_is_exclusive(v_r_5574_);
if (v_isSharedCheck_5792_ == 0)
{
lean_object* v_unused_5793_; lean_object* v_unused_5794_; lean_object* v_unused_5795_; lean_object* v_unused_5796_; lean_object* v_unused_5797_; 
v_unused_5793_ = lean_ctor_get(v_r_5574_, 4);
lean_dec(v_unused_5793_);
v_unused_5794_ = lean_ctor_get(v_r_5574_, 3);
lean_dec(v_unused_5794_);
v_unused_5795_ = lean_ctor_get(v_r_5574_, 2);
lean_dec(v_unused_5795_);
v_unused_5796_ = lean_ctor_get(v_r_5574_, 1);
lean_dec(v_unused_5796_);
v_unused_5797_ = lean_ctor_get(v_r_5574_, 0);
lean_dec(v_unused_5797_);
v___x_5787_ = v_r_5574_;
v_isShared_5788_ = v_isSharedCheck_5792_;
goto v_resetjp_5786_;
}
else
{
lean_dec(v_r_5574_);
v___x_5787_ = lean_box(0);
v_isShared_5788_ = v_isSharedCheck_5792_;
goto v_resetjp_5786_;
}
v_resetjp_5786_:
{
lean_object* v___x_5790_; 
if (v_isShared_5788_ == 0)
{
lean_ctor_set(v___x_5787_, 4, v___x_5785_);
lean_ctor_set(v___x_5787_, 3, v_l_5724_);
lean_ctor_set(v___x_5787_, 2, v_v_5723_);
lean_ctor_set(v___x_5787_, 1, v_k_5722_);
lean_ctor_set(v___x_5787_, 0, v___x_5781_);
v___x_5790_ = v___x_5787_;
goto v_reusejp_5789_;
}
else
{
lean_object* v_reuseFailAlloc_5791_; 
v_reuseFailAlloc_5791_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5791_, 0, v___x_5781_);
lean_ctor_set(v_reuseFailAlloc_5791_, 1, v_k_5722_);
lean_ctor_set(v_reuseFailAlloc_5791_, 2, v_v_5723_);
lean_ctor_set(v_reuseFailAlloc_5791_, 3, v_l_5724_);
lean_ctor_set(v_reuseFailAlloc_5791_, 4, v___x_5785_);
v___x_5790_ = v_reuseFailAlloc_5791_;
goto v_reusejp_5789_;
}
v_reusejp_5789_:
{
return v___x_5790_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_5805_; 
v_l_5805_ = lean_ctor_get(v_impl_5718_, 3);
if (lean_obj_tag(v_l_5805_) == 0)
{
lean_object* v_r_5806_; lean_object* v_k_5807_; lean_object* v_v_5808_; lean_object* v___x_5810_; uint8_t v_isShared_5811_; uint8_t v_isSharedCheck_5819_; 
lean_inc_ref(v_l_5805_);
v_r_5806_ = lean_ctor_get(v_impl_5718_, 4);
v_k_5807_ = lean_ctor_get(v_impl_5718_, 1);
v_v_5808_ = lean_ctor_get(v_impl_5718_, 2);
v_isSharedCheck_5819_ = !lean_is_exclusive(v_impl_5718_);
if (v_isSharedCheck_5819_ == 0)
{
lean_object* v_unused_5820_; lean_object* v_unused_5821_; 
v_unused_5820_ = lean_ctor_get(v_impl_5718_, 3);
lean_dec(v_unused_5820_);
v_unused_5821_ = lean_ctor_get(v_impl_5718_, 0);
lean_dec(v_unused_5821_);
v___x_5810_ = v_impl_5718_;
v_isShared_5811_ = v_isSharedCheck_5819_;
goto v_resetjp_5809_;
}
else
{
lean_inc(v_r_5806_);
lean_inc(v_v_5808_);
lean_inc(v_k_5807_);
lean_dec(v_impl_5718_);
v___x_5810_ = lean_box(0);
v_isShared_5811_ = v_isSharedCheck_5819_;
goto v_resetjp_5809_;
}
v_resetjp_5809_:
{
lean_object* v___x_5812_; lean_object* v___x_5814_; 
v___x_5812_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_5806_);
if (v_isShared_5811_ == 0)
{
lean_ctor_set(v___x_5810_, 3, v_r_5806_);
lean_ctor_set(v___x_5810_, 2, v_v_5572_);
lean_ctor_set(v___x_5810_, 1, v_k_5571_);
lean_ctor_set(v___x_5810_, 0, v___x_5719_);
v___x_5814_ = v___x_5810_;
goto v_reusejp_5813_;
}
else
{
lean_object* v_reuseFailAlloc_5818_; 
v_reuseFailAlloc_5818_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5818_, 0, v___x_5719_);
lean_ctor_set(v_reuseFailAlloc_5818_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5818_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5818_, 3, v_r_5806_);
lean_ctor_set(v_reuseFailAlloc_5818_, 4, v_r_5806_);
v___x_5814_ = v_reuseFailAlloc_5818_;
goto v_reusejp_5813_;
}
v_reusejp_5813_:
{
lean_object* v___x_5816_; 
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 4, v___x_5814_);
lean_ctor_set(v___x_5576_, 3, v_l_5805_);
lean_ctor_set(v___x_5576_, 2, v_v_5808_);
lean_ctor_set(v___x_5576_, 1, v_k_5807_);
lean_ctor_set(v___x_5576_, 0, v___x_5812_);
v___x_5816_ = v___x_5576_;
goto v_reusejp_5815_;
}
else
{
lean_object* v_reuseFailAlloc_5817_; 
v_reuseFailAlloc_5817_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5817_, 0, v___x_5812_);
lean_ctor_set(v_reuseFailAlloc_5817_, 1, v_k_5807_);
lean_ctor_set(v_reuseFailAlloc_5817_, 2, v_v_5808_);
lean_ctor_set(v_reuseFailAlloc_5817_, 3, v_l_5805_);
lean_ctor_set(v_reuseFailAlloc_5817_, 4, v___x_5814_);
v___x_5816_ = v_reuseFailAlloc_5817_;
goto v_reusejp_5815_;
}
v_reusejp_5815_:
{
return v___x_5816_;
}
}
}
}
else
{
lean_object* v_r_5822_; 
v_r_5822_ = lean_ctor_get(v_impl_5718_, 4);
lean_inc(v_r_5822_);
if (lean_obj_tag(v_r_5822_) == 0)
{
lean_object* v_k_5823_; lean_object* v_v_5824_; lean_object* v___x_5826_; uint8_t v_isShared_5827_; uint8_t v_isSharedCheck_5847_; 
lean_inc(v_l_5805_);
v_k_5823_ = lean_ctor_get(v_impl_5718_, 1);
v_v_5824_ = lean_ctor_get(v_impl_5718_, 2);
v_isSharedCheck_5847_ = !lean_is_exclusive(v_impl_5718_);
if (v_isSharedCheck_5847_ == 0)
{
lean_object* v_unused_5848_; lean_object* v_unused_5849_; lean_object* v_unused_5850_; 
v_unused_5848_ = lean_ctor_get(v_impl_5718_, 4);
lean_dec(v_unused_5848_);
v_unused_5849_ = lean_ctor_get(v_impl_5718_, 3);
lean_dec(v_unused_5849_);
v_unused_5850_ = lean_ctor_get(v_impl_5718_, 0);
lean_dec(v_unused_5850_);
v___x_5826_ = v_impl_5718_;
v_isShared_5827_ = v_isSharedCheck_5847_;
goto v_resetjp_5825_;
}
else
{
lean_inc(v_v_5824_);
lean_inc(v_k_5823_);
lean_dec(v_impl_5718_);
v___x_5826_ = lean_box(0);
v_isShared_5827_ = v_isSharedCheck_5847_;
goto v_resetjp_5825_;
}
v_resetjp_5825_:
{
lean_object* v_k_5828_; lean_object* v_v_5829_; lean_object* v___x_5831_; uint8_t v_isShared_5832_; uint8_t v_isSharedCheck_5843_; 
v_k_5828_ = lean_ctor_get(v_r_5822_, 1);
v_v_5829_ = lean_ctor_get(v_r_5822_, 2);
v_isSharedCheck_5843_ = !lean_is_exclusive(v_r_5822_);
if (v_isSharedCheck_5843_ == 0)
{
lean_object* v_unused_5844_; lean_object* v_unused_5845_; lean_object* v_unused_5846_; 
v_unused_5844_ = lean_ctor_get(v_r_5822_, 4);
lean_dec(v_unused_5844_);
v_unused_5845_ = lean_ctor_get(v_r_5822_, 3);
lean_dec(v_unused_5845_);
v_unused_5846_ = lean_ctor_get(v_r_5822_, 0);
lean_dec(v_unused_5846_);
v___x_5831_ = v_r_5822_;
v_isShared_5832_ = v_isSharedCheck_5843_;
goto v_resetjp_5830_;
}
else
{
lean_inc(v_v_5829_);
lean_inc(v_k_5828_);
lean_dec(v_r_5822_);
v___x_5831_ = lean_box(0);
v_isShared_5832_ = v_isSharedCheck_5843_;
goto v_resetjp_5830_;
}
v_resetjp_5830_:
{
lean_object* v___x_5833_; lean_object* v___x_5835_; 
v___x_5833_ = lean_unsigned_to_nat(3u);
if (v_isShared_5832_ == 0)
{
lean_ctor_set(v___x_5831_, 4, v_l_5805_);
lean_ctor_set(v___x_5831_, 3, v_l_5805_);
lean_ctor_set(v___x_5831_, 2, v_v_5824_);
lean_ctor_set(v___x_5831_, 1, v_k_5823_);
lean_ctor_set(v___x_5831_, 0, v___x_5719_);
v___x_5835_ = v___x_5831_;
goto v_reusejp_5834_;
}
else
{
lean_object* v_reuseFailAlloc_5842_; 
v_reuseFailAlloc_5842_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5842_, 0, v___x_5719_);
lean_ctor_set(v_reuseFailAlloc_5842_, 1, v_k_5823_);
lean_ctor_set(v_reuseFailAlloc_5842_, 2, v_v_5824_);
lean_ctor_set(v_reuseFailAlloc_5842_, 3, v_l_5805_);
lean_ctor_set(v_reuseFailAlloc_5842_, 4, v_l_5805_);
v___x_5835_ = v_reuseFailAlloc_5842_;
goto v_reusejp_5834_;
}
v_reusejp_5834_:
{
lean_object* v___x_5837_; 
if (v_isShared_5827_ == 0)
{
lean_ctor_set(v___x_5826_, 4, v_l_5805_);
lean_ctor_set(v___x_5826_, 2, v_v_5572_);
lean_ctor_set(v___x_5826_, 1, v_k_5571_);
lean_ctor_set(v___x_5826_, 0, v___x_5719_);
v___x_5837_ = v___x_5826_;
goto v_reusejp_5836_;
}
else
{
lean_object* v_reuseFailAlloc_5841_; 
v_reuseFailAlloc_5841_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5841_, 0, v___x_5719_);
lean_ctor_set(v_reuseFailAlloc_5841_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5841_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5841_, 3, v_l_5805_);
lean_ctor_set(v_reuseFailAlloc_5841_, 4, v_l_5805_);
v___x_5837_ = v_reuseFailAlloc_5841_;
goto v_reusejp_5836_;
}
v_reusejp_5836_:
{
lean_object* v___x_5839_; 
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 4, v___x_5837_);
lean_ctor_set(v___x_5576_, 3, v___x_5835_);
lean_ctor_set(v___x_5576_, 2, v_v_5829_);
lean_ctor_set(v___x_5576_, 1, v_k_5828_);
lean_ctor_set(v___x_5576_, 0, v___x_5833_);
v___x_5839_ = v___x_5576_;
goto v_reusejp_5838_;
}
else
{
lean_object* v_reuseFailAlloc_5840_; 
v_reuseFailAlloc_5840_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5840_, 0, v___x_5833_);
lean_ctor_set(v_reuseFailAlloc_5840_, 1, v_k_5828_);
lean_ctor_set(v_reuseFailAlloc_5840_, 2, v_v_5829_);
lean_ctor_set(v_reuseFailAlloc_5840_, 3, v___x_5835_);
lean_ctor_set(v_reuseFailAlloc_5840_, 4, v___x_5837_);
v___x_5839_ = v_reuseFailAlloc_5840_;
goto v_reusejp_5838_;
}
v_reusejp_5838_:
{
return v___x_5839_;
}
}
}
}
}
}
else
{
lean_object* v___x_5851_; lean_object* v___x_5853_; 
v___x_5851_ = lean_unsigned_to_nat(2u);
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 4, v_r_5822_);
lean_ctor_set(v___x_5576_, 3, v_impl_5718_);
lean_ctor_set(v___x_5576_, 0, v___x_5851_);
v___x_5853_ = v___x_5576_;
goto v_reusejp_5852_;
}
else
{
lean_object* v_reuseFailAlloc_5854_; 
v_reuseFailAlloc_5854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5854_, 0, v___x_5851_);
lean_ctor_set(v_reuseFailAlloc_5854_, 1, v_k_5571_);
lean_ctor_set(v_reuseFailAlloc_5854_, 2, v_v_5572_);
lean_ctor_set(v_reuseFailAlloc_5854_, 3, v_impl_5718_);
lean_ctor_set(v_reuseFailAlloc_5854_, 4, v_r_5822_);
v___x_5853_ = v_reuseFailAlloc_5854_;
goto v_reusejp_5852_;
}
v_reusejp_5852_:
{
return v___x_5853_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5856_; lean_object* v___x_5857_; 
v___x_5856_ = lean_unsigned_to_nat(1u);
v___x_5857_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5857_, 0, v___x_5856_);
lean_ctor_set(v___x_5857_, 1, v_k_5567_);
lean_ctor_set(v___x_5857_, 2, v_v_5568_);
lean_ctor_set(v___x_5857_, 3, v_t_5569_);
lean_ctor_set(v___x_5857_, 4, v_t_5569_);
return v___x_5857_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(lean_object* v_k_5858_, lean_object* v_t_5859_){
_start:
{
if (lean_obj_tag(v_t_5859_) == 0)
{
lean_object* v_k_5860_; lean_object* v_l_5861_; lean_object* v_r_5862_; uint8_t v___x_5863_; 
v_k_5860_ = lean_ctor_get(v_t_5859_, 1);
v_l_5861_ = lean_ctor_get(v_t_5859_, 3);
v_r_5862_ = lean_ctor_get(v_t_5859_, 4);
v___x_5863_ = lean_nat_dec_lt(v_k_5860_, v_k_5858_);
if (v___x_5863_ == 0)
{
uint8_t v___x_5864_; 
v___x_5864_ = lean_nat_dec_eq(v_k_5860_, v_k_5858_);
if (v___x_5864_ == 0)
{
v_t_5859_ = v_r_5862_;
goto _start;
}
else
{
return v___x_5864_;
}
}
else
{
v_t_5859_ = v_l_5861_;
goto _start;
}
}
else
{
uint8_t v___x_5867_; 
v___x_5867_ = 0;
return v___x_5867_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg___boxed(lean_object* v_k_5868_, lean_object* v_t_5869_){
_start:
{
uint8_t v_res_5870_; lean_object* v_r_5871_; 
v_res_5870_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_k_5868_, v_t_5869_);
lean_dec(v_t_5869_);
lean_dec(v_k_5868_);
v_r_5871_ = lean_box(v_res_5870_);
return v_r_5871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstanceEntry(lean_object* v_d_5872_, lean_object* v_e_5873_){
_start:
{
lean_object* v_defaultInstances_5874_; lean_object* v_priorities_5875_; lean_object* v___x_5877_; uint8_t v_isShared_5878_; uint8_t v_isSharedCheck_5902_; 
v_defaultInstances_5874_ = lean_ctor_get(v_d_5872_, 0);
v_priorities_5875_ = lean_ctor_get(v_d_5872_, 1);
v_isSharedCheck_5902_ = !lean_is_exclusive(v_d_5872_);
if (v_isSharedCheck_5902_ == 0)
{
v___x_5877_ = v_d_5872_;
v_isShared_5878_ = v_isSharedCheck_5902_;
goto v_resetjp_5876_;
}
else
{
lean_inc(v_priorities_5875_);
lean_inc(v_defaultInstances_5874_);
lean_dec(v_d_5872_);
v___x_5877_ = lean_box(0);
v_isShared_5878_ = v_isSharedCheck_5902_;
goto v_resetjp_5876_;
}
v_resetjp_5876_:
{
lean_object* v_className_5879_; lean_object* v_instanceName_5880_; lean_object* v_priority_5881_; lean_object* v___y_5883_; uint8_t v___x_5899_; 
v_className_5879_ = lean_ctor_get(v_e_5873_, 0);
lean_inc(v_className_5879_);
v_instanceName_5880_ = lean_ctor_get(v_e_5873_, 1);
lean_inc(v_instanceName_5880_);
v_priority_5881_ = lean_ctor_get(v_e_5873_, 2);
lean_inc(v_priority_5881_);
lean_dec_ref(v_e_5873_);
v___x_5899_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_priority_5881_, v_priorities_5875_);
if (v___x_5899_ == 0)
{
lean_object* v___x_5900_; lean_object* v___x_5901_; 
v___x_5900_ = lean_box(0);
lean_inc(v_priority_5881_);
v___x_5901_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_priority_5881_, v___x_5900_, v_priorities_5875_);
v___y_5883_ = v___x_5901_;
goto v___jp_5882_;
}
else
{
v___y_5883_ = v_priorities_5875_;
goto v___jp_5882_;
}
v___jp_5882_:
{
lean_object* v___x_5884_; 
v___x_5884_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_defaultInstances_5874_, v_className_5879_);
if (lean_obj_tag(v___x_5884_) == 0)
{
lean_object* v___x_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5890_; 
v___x_5885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5885_, 0, v_instanceName_5880_);
lean_ctor_set(v___x_5885_, 1, v_priority_5881_);
v___x_5886_ = lean_box(0);
v___x_5887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5887_, 0, v___x_5885_);
lean_ctor_set(v___x_5887_, 1, v___x_5886_);
v___x_5888_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_className_5879_, v___x_5887_, v_defaultInstances_5874_);
if (v_isShared_5878_ == 0)
{
lean_ctor_set(v___x_5877_, 1, v___y_5883_);
lean_ctor_set(v___x_5877_, 0, v___x_5888_);
v___x_5890_ = v___x_5877_;
goto v_reusejp_5889_;
}
else
{
lean_object* v_reuseFailAlloc_5891_; 
v_reuseFailAlloc_5891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5891_, 0, v___x_5888_);
lean_ctor_set(v_reuseFailAlloc_5891_, 1, v___y_5883_);
v___x_5890_ = v_reuseFailAlloc_5891_;
goto v_reusejp_5889_;
}
v_reusejp_5889_:
{
return v___x_5890_;
}
}
else
{
lean_object* v_val_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5897_; 
v_val_5892_ = lean_ctor_get(v___x_5884_, 0);
lean_inc(v_val_5892_);
lean_dec_ref_known(v___x_5884_, 1);
v___x_5893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5893_, 0, v_instanceName_5880_);
lean_ctor_set(v___x_5893_, 1, v_priority_5881_);
v___x_5894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5894_, 0, v___x_5893_);
lean_ctor_set(v___x_5894_, 1, v_val_5892_);
v___x_5895_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_className_5879_, v___x_5894_, v_defaultInstances_5874_);
if (v_isShared_5878_ == 0)
{
lean_ctor_set(v___x_5877_, 1, v___y_5883_);
lean_ctor_set(v___x_5877_, 0, v___x_5895_);
v___x_5897_ = v___x_5877_;
goto v_reusejp_5896_;
}
else
{
lean_object* v_reuseFailAlloc_5898_; 
v_reuseFailAlloc_5898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5898_, 0, v___x_5895_);
lean_ctor_set(v_reuseFailAlloc_5898_, 1, v___y_5883_);
v___x_5897_ = v_reuseFailAlloc_5898_;
goto v_reusejp_5896_;
}
v_reusejp_5896_:
{
return v___x_5897_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(lean_object* v_00_u03b2_5903_, lean_object* v_k_5904_, lean_object* v_t_5905_){
_start:
{
uint8_t v___x_5906_; 
v___x_5906_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___redArg(v_k_5904_, v_t_5905_);
return v___x_5906_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0___boxed(lean_object* v_00_u03b2_5907_, lean_object* v_k_5908_, lean_object* v_t_5909_){
_start:
{
uint8_t v_res_5910_; lean_object* v_r_5911_; 
v_res_5910_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_addDefaultInstanceEntry_spec__0(v_00_u03b2_5907_, v_k_5908_, v_t_5909_);
lean_dec(v_t_5909_);
lean_dec(v_k_5908_);
v_r_5911_ = lean_box(v_res_5910_);
return v_r_5911_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1(lean_object* v_00_u03b2_5912_, lean_object* v_k_5913_, lean_object* v_v_5914_, lean_object* v_t_5915_, lean_object* v_hl_5916_){
_start:
{
lean_object* v___x_5917_; 
v___x_5917_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_addDefaultInstanceEntry_spec__1___redArg(v_k_5913_, v_v_5914_, v_t_5915_);
return v___x_5917_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(lean_object* v_env_5918_, lean_object* v_as_5919_, size_t v_i_5920_, size_t v_stop_5921_, lean_object* v_b_5922_){
_start:
{
lean_object* v___y_5924_; uint8_t v___x_5928_; 
v___x_5928_ = lean_usize_dec_eq(v_i_5920_, v_stop_5921_);
if (v___x_5928_ == 0)
{
lean_object* v___x_5929_; lean_object* v_instanceName_5930_; uint8_t v___x_5931_; lean_object* v___x_5932_; uint8_t v___x_5933_; 
v___x_5929_ = lean_array_uget_borrowed(v_as_5919_, v_i_5920_);
v_instanceName_5930_ = lean_ctor_get(v___x_5929_, 1);
v___x_5931_ = 1;
lean_inc_ref(v_env_5918_);
v___x_5932_ = l_Lean_Environment_setExporting(v_env_5918_, v___x_5931_);
lean_inc(v_instanceName_5930_);
v___x_5933_ = l_Lean_Environment_contains(v___x_5932_, v_instanceName_5930_, v___x_5928_);
if (v___x_5933_ == 0)
{
v___y_5924_ = v_b_5922_;
goto v___jp_5923_;
}
else
{
lean_object* v___x_5934_; 
lean_inc(v___x_5929_);
v___x_5934_ = lean_array_push(v_b_5922_, v___x_5929_);
v___y_5924_ = v___x_5934_;
goto v___jp_5923_;
}
}
else
{
lean_dec_ref(v_env_5918_);
return v_b_5922_;
}
v___jp_5923_:
{
size_t v___x_5925_; size_t v___x_5926_; 
v___x_5925_ = ((size_t)1ULL);
v___x_5926_ = lean_usize_add(v_i_5920_, v___x_5925_);
v_i_5920_ = v___x_5926_;
v_b_5922_ = v___y_5924_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_5935_, lean_object* v_as_5936_, lean_object* v_i_5937_, lean_object* v_stop_5938_, lean_object* v_b_5939_){
_start:
{
size_t v_i_boxed_5940_; size_t v_stop_boxed_5941_; lean_object* v_res_5942_; 
v_i_boxed_5940_ = lean_unbox_usize(v_i_5937_);
lean_dec(v_i_5937_);
v_stop_boxed_5941_ = lean_unbox_usize(v_stop_5938_);
lean_dec(v_stop_5938_);
v_res_5942_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(v_env_5935_, v_as_5936_, v_i_boxed_5940_, v_stop_boxed_5941_, v_b_5939_);
lean_dec_ref(v_as_5936_);
return v_res_5942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_env_5945_, lean_object* v_x_5946_, lean_object* v_entries_5947_){
_start:
{
lean_object* v_all_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; uint8_t v___x_5952_; 
v_all_5948_ = lean_array_mk(v_entries_5947_);
v___x_5949_ = lean_unsigned_to_nat(0u);
v___x_5950_ = lean_array_get_size(v_all_5948_);
v___x_5951_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_));
v___x_5952_ = lean_nat_dec_lt(v___x_5949_, v___x_5950_);
if (v___x_5952_ == 0)
{
lean_object* v___x_5953_; 
lean_dec_ref(v_env_5945_);
v___x_5953_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5953_, 0, v___x_5951_);
lean_ctor_set(v___x_5953_, 1, v___x_5951_);
lean_ctor_set(v___x_5953_, 2, v_all_5948_);
return v___x_5953_;
}
else
{
size_t v___x_5954_; size_t v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; 
v___x_5954_ = ((size_t)0ULL);
v___x_5955_ = lean_usize_of_nat(v___x_5950_);
v___x_5956_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__0(v_env_5945_, v_all_5948_, v___x_5954_, v___x_5955_, v___x_5951_);
lean_inc_ref(v___x_5956_);
v___x_5957_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5957_, 0, v___x_5956_);
lean_ctor_set(v___x_5957_, 1, v___x_5956_);
lean_ctor_set(v___x_5957_, 2, v_all_5948_);
return v___x_5957_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_env_5958_, lean_object* v_x_5959_, lean_object* v_entries_5960_){
_start:
{
lean_object* v_res_5961_; 
v_res_5961_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(v_env_5958_, v_x_5959_, v_entries_5960_);
lean_dec_ref(v_x_5959_);
return v_res_5961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_es_5962_){
_start:
{
lean_object* v___x_5963_; 
v___x_5963_ = lean_array_mk(v_es_5962_);
return v___x_5963_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_as_5964_, size_t v_i_5965_, size_t v_stop_5966_, lean_object* v_b_5967_){
_start:
{
uint8_t v___x_5968_; 
v___x_5968_ = lean_usize_dec_eq(v_i_5965_, v_stop_5966_);
if (v___x_5968_ == 0)
{
lean_object* v___x_5969_; lean_object* v___x_5970_; size_t v___x_5971_; size_t v___x_5972_; 
v___x_5969_ = lean_array_uget_borrowed(v_as_5964_, v_i_5965_);
lean_inc(v___x_5969_);
v___x_5970_ = l_Lean_Meta_addDefaultInstanceEntry(v_b_5967_, v___x_5969_);
v___x_5971_ = ((size_t)1ULL);
v___x_5972_ = lean_usize_add(v_i_5965_, v___x_5971_);
v_i_5965_ = v___x_5972_;
v_b_5967_ = v___x_5970_;
goto _start;
}
else
{
return v_b_5967_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_as_5974_, lean_object* v_i_5975_, lean_object* v_stop_5976_, lean_object* v_b_5977_){
_start:
{
size_t v_i_boxed_5978_; size_t v_stop_boxed_5979_; lean_object* v_res_5980_; 
v_i_boxed_5978_ = lean_unbox_usize(v_i_5975_);
lean_dec(v_i_5975_);
v_stop_boxed_5979_ = lean_unbox_usize(v_stop_5976_);
lean_dec(v_stop_5976_);
v_res_5980_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(v_as_5974_, v_i_boxed_5978_, v_stop_boxed_5979_, v_b_5977_);
lean_dec_ref(v_as_5974_);
return v_res_5980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_as_5981_, size_t v_i_5982_, size_t v_stop_5983_, lean_object* v_b_5984_){
_start:
{
lean_object* v___y_5986_; uint8_t v___x_5990_; 
v___x_5990_ = lean_usize_dec_eq(v_i_5982_, v_stop_5983_);
if (v___x_5990_ == 0)
{
lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; uint8_t v___x_5994_; 
v___x_5991_ = lean_array_uget_borrowed(v_as_5981_, v_i_5982_);
v___x_5992_ = lean_unsigned_to_nat(0u);
v___x_5993_ = lean_array_get_size(v___x_5991_);
v___x_5994_ = lean_nat_dec_lt(v___x_5992_, v___x_5993_);
if (v___x_5994_ == 0)
{
v___y_5986_ = v_b_5984_;
goto v___jp_5985_;
}
else
{
size_t v___x_5995_; size_t v___x_5996_; lean_object* v___x_5997_; 
v___x_5995_ = ((size_t)0ULL);
v___x_5996_ = lean_usize_of_nat(v___x_5993_);
v___x_5997_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__1(v___x_5991_, v___x_5995_, v___x_5996_, v_b_5984_);
v___y_5986_ = v___x_5997_;
goto v___jp_5985_;
}
}
else
{
return v_b_5984_;
}
v___jp_5985_:
{
size_t v___x_5987_; size_t v___x_5988_; 
v___x_5987_ = ((size_t)1ULL);
v___x_5988_ = lean_usize_add(v_i_5982_, v___x_5987_);
v_i_5982_ = v___x_5988_;
v_b_5984_ = v___y_5986_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_as_5998_, lean_object* v_i_5999_, lean_object* v_stop_6000_, lean_object* v_b_6001_){
_start:
{
size_t v_i_boxed_6002_; size_t v_stop_boxed_6003_; lean_object* v_res_6004_; 
v_i_boxed_6002_ = lean_unbox_usize(v_i_5999_);
lean_dec(v_i_5999_);
v_stop_boxed_6003_ = lean_unbox_usize(v_stop_6000_);
lean_dec(v_stop_6000_);
v_res_6004_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(v_as_5998_, v_i_boxed_6002_, v_stop_boxed_6003_, v_b_6001_);
lean_dec_ref(v_as_5998_);
return v_res_6004_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(lean_object* v_initState_6005_, lean_object* v_as_6006_){
_start:
{
lean_object* v___x_6007_; lean_object* v___x_6008_; uint8_t v___x_6009_; 
v___x_6007_ = lean_unsigned_to_nat(0u);
v___x_6008_ = lean_array_get_size(v_as_6006_);
v___x_6009_ = lean_nat_dec_lt(v___x_6007_, v___x_6008_);
if (v___x_6009_ == 0)
{
return v_initState_6005_;
}
else
{
size_t v___x_6010_; size_t v___x_6011_; lean_object* v___x_6012_; 
v___x_6010_ = ((size_t)0ULL);
v___x_6011_ = lean_usize_of_nat(v___x_6008_);
v___x_6012_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1_spec__2(v_as_6006_, v___x_6010_, v___x_6011_, v_initState_6005_);
return v___x_6012_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1___boxed(lean_object* v_initState_6013_, lean_object* v_as_6014_){
_start:
{
lean_object* v_res_6015_; 
v_res_6015_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(v_initState_6013_, v_as_6014_);
lean_dec_ref(v_as_6014_);
return v_res_6015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(lean_object* v_es_6016_){
_start:
{
lean_object* v___x_6017_; lean_object* v___x_6018_; 
v___x_6017_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default___closed__0));
v___x_6018_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2__spec__1(v___x_6017_, v_es_6016_);
return v___x_6018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_es_6019_){
_start:
{
lean_object* v_res_6020_; 
v_res_6020_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(v_es_6019_);
lean_dec_ref(v_es_6019_);
return v_res_6020_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6042_; lean_object* v___x_6043_; 
v___x_6042_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_));
v___x_6043_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_6042_);
return v___x_6043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2____boxed(lean_object* v_a_6044_){
_start:
{
lean_object* v_res_6045_; 
v_res_6045_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1412103510____hygCtx___hyg_2_();
return v_res_6045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__0(lean_object* v_addEntryFn_6046_, lean_object* v___x_6047_, lean_object* v_s_6048_){
_start:
{
lean_object* v_importedEntries_6049_; lean_object* v_state_6050_; lean_object* v___x_6052_; uint8_t v_isShared_6053_; uint8_t v_isSharedCheck_6058_; 
v_importedEntries_6049_ = lean_ctor_get(v_s_6048_, 0);
v_state_6050_ = lean_ctor_get(v_s_6048_, 1);
v_isSharedCheck_6058_ = !lean_is_exclusive(v_s_6048_);
if (v_isSharedCheck_6058_ == 0)
{
v___x_6052_ = v_s_6048_;
v_isShared_6053_ = v_isSharedCheck_6058_;
goto v_resetjp_6051_;
}
else
{
lean_inc(v_state_6050_);
lean_inc(v_importedEntries_6049_);
lean_dec(v_s_6048_);
v___x_6052_ = lean_box(0);
v_isShared_6053_ = v_isSharedCheck_6058_;
goto v_resetjp_6051_;
}
v_resetjp_6051_:
{
lean_object* v_state_6054_; lean_object* v___x_6056_; 
v_state_6054_ = lean_apply_2(v_addEntryFn_6046_, v_state_6050_, v___x_6047_);
if (v_isShared_6053_ == 0)
{
lean_ctor_set(v___x_6052_, 1, v_state_6054_);
v___x_6056_ = v___x_6052_;
goto v_reusejp_6055_;
}
else
{
lean_object* v_reuseFailAlloc_6057_; 
v_reuseFailAlloc_6057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6057_, 0, v_importedEntries_6049_);
lean_ctor_set(v_reuseFailAlloc_6057_, 1, v_state_6054_);
v___x_6056_ = v_reuseFailAlloc_6057_;
goto v_reusejp_6055_;
}
v_reusejp_6055_:
{
return v___x_6056_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(lean_object* v_env_6059_, lean_object* v___y_6060_, lean_object* v___y_6061_){
_start:
{
lean_object* v___x_6063_; lean_object* v_nextMacroScope_6064_; lean_object* v_ngen_6065_; lean_object* v_auxDeclNGen_6066_; lean_object* v_traceState_6067_; lean_object* v_recordedDeps_6068_; lean_object* v_messages_6069_; lean_object* v_infoState_6070_; lean_object* v_snapshotTasks_6071_; lean_object* v___x_6073_; uint8_t v_isShared_6074_; uint8_t v_isSharedCheck_6097_; 
v___x_6063_ = lean_st_ref_take(v___y_6061_);
v_nextMacroScope_6064_ = lean_ctor_get(v___x_6063_, 1);
v_ngen_6065_ = lean_ctor_get(v___x_6063_, 2);
v_auxDeclNGen_6066_ = lean_ctor_get(v___x_6063_, 3);
v_traceState_6067_ = lean_ctor_get(v___x_6063_, 4);
v_recordedDeps_6068_ = lean_ctor_get(v___x_6063_, 6);
v_messages_6069_ = lean_ctor_get(v___x_6063_, 7);
v_infoState_6070_ = lean_ctor_get(v___x_6063_, 8);
v_snapshotTasks_6071_ = lean_ctor_get(v___x_6063_, 9);
v_isSharedCheck_6097_ = !lean_is_exclusive(v___x_6063_);
if (v_isSharedCheck_6097_ == 0)
{
lean_object* v_unused_6098_; lean_object* v_unused_6099_; 
v_unused_6098_ = lean_ctor_get(v___x_6063_, 5);
lean_dec(v_unused_6098_);
v_unused_6099_ = lean_ctor_get(v___x_6063_, 0);
lean_dec(v_unused_6099_);
v___x_6073_ = v___x_6063_;
v_isShared_6074_ = v_isSharedCheck_6097_;
goto v_resetjp_6072_;
}
else
{
lean_inc(v_snapshotTasks_6071_);
lean_inc(v_infoState_6070_);
lean_inc(v_messages_6069_);
lean_inc(v_recordedDeps_6068_);
lean_inc(v_traceState_6067_);
lean_inc(v_auxDeclNGen_6066_);
lean_inc(v_ngen_6065_);
lean_inc(v_nextMacroScope_6064_);
lean_dec(v___x_6063_);
v___x_6073_ = lean_box(0);
v_isShared_6074_ = v_isSharedCheck_6097_;
goto v_resetjp_6072_;
}
v_resetjp_6072_:
{
lean_object* v___x_6075_; lean_object* v___x_6077_; 
v___x_6075_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__1);
if (v_isShared_6074_ == 0)
{
lean_ctor_set(v___x_6073_, 5, v___x_6075_);
lean_ctor_set(v___x_6073_, 0, v_env_6059_);
v___x_6077_ = v___x_6073_;
goto v_reusejp_6076_;
}
else
{
lean_object* v_reuseFailAlloc_6096_; 
v_reuseFailAlloc_6096_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6096_, 0, v_env_6059_);
lean_ctor_set(v_reuseFailAlloc_6096_, 1, v_nextMacroScope_6064_);
lean_ctor_set(v_reuseFailAlloc_6096_, 2, v_ngen_6065_);
lean_ctor_set(v_reuseFailAlloc_6096_, 3, v_auxDeclNGen_6066_);
lean_ctor_set(v_reuseFailAlloc_6096_, 4, v_traceState_6067_);
lean_ctor_set(v_reuseFailAlloc_6096_, 5, v___x_6075_);
lean_ctor_set(v_reuseFailAlloc_6096_, 6, v_recordedDeps_6068_);
lean_ctor_set(v_reuseFailAlloc_6096_, 7, v_messages_6069_);
lean_ctor_set(v_reuseFailAlloc_6096_, 8, v_infoState_6070_);
lean_ctor_set(v_reuseFailAlloc_6096_, 9, v_snapshotTasks_6071_);
v___x_6077_ = v_reuseFailAlloc_6096_;
goto v_reusejp_6076_;
}
v_reusejp_6076_:
{
lean_object* v___x_6078_; lean_object* v___x_6079_; lean_object* v_mctx_6080_; lean_object* v_zetaDeltaFVarIds_6081_; lean_object* v_postponed_6082_; lean_object* v_diag_6083_; lean_object* v___x_6085_; uint8_t v_isShared_6086_; uint8_t v_isSharedCheck_6094_; 
v___x_6078_ = lean_st_ref_put(v___y_6061_, v___x_6077_);
v___x_6079_ = lean_st_ref_take(v___y_6060_);
v_mctx_6080_ = lean_ctor_get(v___x_6079_, 0);
v_zetaDeltaFVarIds_6081_ = lean_ctor_get(v___x_6079_, 2);
v_postponed_6082_ = lean_ctor_get(v___x_6079_, 3);
v_diag_6083_ = lean_ctor_get(v___x_6079_, 4);
v_isSharedCheck_6094_ = !lean_is_exclusive(v___x_6079_);
if (v_isSharedCheck_6094_ == 0)
{
lean_object* v_unused_6095_; 
v_unused_6095_ = lean_ctor_get(v___x_6079_, 1);
lean_dec(v_unused_6095_);
v___x_6085_ = v___x_6079_;
v_isShared_6086_ = v_isSharedCheck_6094_;
goto v_resetjp_6084_;
}
else
{
lean_inc(v_diag_6083_);
lean_inc(v_postponed_6082_);
lean_inc(v_zetaDeltaFVarIds_6081_);
lean_inc(v_mctx_6080_);
lean_dec(v___x_6079_);
v___x_6085_ = lean_box(0);
v_isShared_6086_ = v_isSharedCheck_6094_;
goto v_resetjp_6084_;
}
v_resetjp_6084_:
{
lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6090_; 
v___x_6087_ = lean_box(0);
v___x_6088_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__5);
if (v_isShared_6086_ == 0)
{
lean_ctor_set(v___x_6085_, 1, v___x_6088_);
v___x_6090_ = v___x_6085_;
goto v_reusejp_6089_;
}
else
{
lean_object* v_reuseFailAlloc_6093_; 
v_reuseFailAlloc_6093_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6093_, 0, v_mctx_6080_);
lean_ctor_set(v_reuseFailAlloc_6093_, 1, v___x_6088_);
lean_ctor_set(v_reuseFailAlloc_6093_, 2, v_zetaDeltaFVarIds_6081_);
lean_ctor_set(v_reuseFailAlloc_6093_, 3, v_postponed_6082_);
lean_ctor_set(v_reuseFailAlloc_6093_, 4, v_diag_6083_);
v___x_6090_ = v_reuseFailAlloc_6093_;
goto v_reusejp_6089_;
}
v_reusejp_6089_:
{
lean_object* v___x_6091_; lean_object* v___x_6092_; 
v___x_6091_ = lean_st_ref_put(v___y_6060_, v___x_6090_);
v___x_6092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6092_, 0, v___x_6087_);
return v___x_6092_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg___boxed(lean_object* v_env_6100_, lean_object* v___y_6101_, lean_object* v___y_6102_, lean_object* v___y_6103_){
_start:
{
lean_object* v_res_6104_; 
v_res_6104_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v_env_6100_, v___y_6101_, v___y_6102_);
lean_dec(v___y_6102_);
lean_dec(v___y_6101_);
return v_res_6104_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__1(void){
_start:
{
lean_object* v___x_6106_; lean_object* v___x_6107_; 
v___x_6106_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__1___closed__0));
v___x_6107_ = l_Lean_stringToMessageData(v___x_6106_);
return v___x_6107_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__3(void){
_start:
{
lean_object* v___x_6109_; lean_object* v___x_6110_; 
v___x_6109_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__1___closed__2));
v___x_6110_ = l_Lean_stringToMessageData(v___x_6109_);
return v___x_6110_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__5(void){
_start:
{
lean_object* v___x_6112_; lean_object* v___x_6113_; 
v___x_6112_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__1___closed__4));
v___x_6113_ = l_Lean_stringToMessageData(v___x_6112_);
return v___x_6113_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__7(void){
_start:
{
lean_object* v___x_6115_; lean_object* v___x_6116_; 
v___x_6115_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__1___closed__6));
v___x_6116_ = l_Lean_stringToMessageData(v___x_6115_);
return v___x_6116_;
}
}
static lean_object* _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__9(void){
_start:
{
lean_object* v___x_6118_; lean_object* v___x_6119_; 
v___x_6118_ = ((lean_object*)(l_Lean_Meta_addDefaultInstance___lam__1___closed__8));
v___x_6119_ = l_Lean_stringToMessageData(v___x_6118_);
return v___x_6119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__1(lean_object* v_declName_6120_, lean_object* v_prio_6121_, lean_object* v_x_6122_, lean_object* v_type_6123_, lean_object* v___y_6124_, lean_object* v___y_6125_, lean_object* v___y_6126_, lean_object* v___y_6127_){
_start:
{
lean_object* v___x_6129_; 
v___x_6129_ = l_Lean_Expr_getAppFn(v_type_6123_);
if (lean_obj_tag(v___x_6129_) == 4)
{
lean_object* v_declName_6130_; lean_object* v___y_6132_; lean_object* v___y_6133_; lean_object* v___y_6134_; lean_object* v___y_6135_; lean_object* v___x_6152_; lean_object* v_env_6153_; uint8_t v___x_6154_; 
v_declName_6130_ = lean_ctor_get(v___x_6129_, 0);
lean_inc(v_declName_6130_);
lean_dec_ref_known(v___x_6129_, 2);
v___x_6152_ = lean_st_ref_get(v___y_6127_);
v_env_6153_ = lean_ctor_get(v___x_6152_, 0);
lean_inc_ref(v_env_6153_);
lean_dec(v___x_6152_);
v___x_6154_ = l_Lean_isClass(v_env_6153_, v_declName_6130_);
if (v___x_6154_ == 0)
{
lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; lean_object* v___x_6168_; 
lean_dec(v_prio_6121_);
v___x_6155_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__1, &l_Lean_Meta_addDefaultInstance___lam__1___closed__1_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__1);
v___x_6156_ = l_Lean_MessageData_ofConstName(v_declName_6120_, v___x_6154_);
v___x_6157_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6157_, 0, v___x_6155_);
lean_ctor_set(v___x_6157_, 1, v___x_6156_);
v___x_6158_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__3, &l_Lean_Meta_addDefaultInstance___lam__1___closed__3_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__3);
v___x_6159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6159_, 0, v___x_6157_);
lean_ctor_set(v___x_6159_, 1, v___x_6158_);
lean_inc(v_declName_6130_);
v___x_6160_ = l_Lean_MessageData_ofName(v_declName_6130_);
v___x_6161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6161_, 0, v___x_6159_);
lean_ctor_set(v___x_6161_, 1, v___x_6160_);
v___x_6162_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__5, &l_Lean_Meta_addDefaultInstance___lam__1___closed__5_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__5);
v___x_6163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6163_, 0, v___x_6161_);
lean_ctor_set(v___x_6163_, 1, v___x_6162_);
v___x_6164_ = l_Lean_MessageData_ofConstName(v_declName_6130_, v___x_6154_);
v___x_6165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6165_, 0, v___x_6163_);
lean_ctor_set(v___x_6165_, 1, v___x_6164_);
v___x_6166_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__7, &l_Lean_Meta_addDefaultInstance___lam__1___closed__7_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__7);
v___x_6167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6167_, 0, v___x_6165_);
lean_ctor_set(v___x_6167_, 1, v___x_6166_);
v___x_6168_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_6167_, v___y_6124_, v___y_6125_, v___y_6126_, v___y_6127_);
return v___x_6168_;
}
else
{
v___y_6132_ = v___y_6124_;
v___y_6133_ = v___y_6125_;
v___y_6134_ = v___y_6126_;
v___y_6135_ = v___y_6127_;
goto v___jp_6131_;
}
v___jp_6131_:
{
lean_object* v___x_6136_; lean_object* v_env_6137_; lean_object* v___x_6138_; lean_object* v_toEnvExtension_6139_; lean_object* v_addEntryFn_6140_; lean_object* v_asyncMode_6141_; uint8_t v_logWrites_6142_; lean_object* v___x_6143_; lean_object* v___f_6144_; lean_object* v___x_6145_; uint8_t v___x_6146_; 
v___x_6136_ = lean_st_ref_get(v___y_6135_);
v_env_6137_ = lean_ctor_get(v___x_6136_, 0);
lean_inc_ref(v_env_6137_);
lean_dec(v___x_6136_);
v___x_6138_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_6139_ = lean_ctor_get(v___x_6138_, 0);
v_addEntryFn_6140_ = lean_ctor_get(v___x_6138_, 3);
v_asyncMode_6141_ = lean_ctor_get(v_toEnvExtension_6139_, 2);
v_logWrites_6142_ = lean_ctor_get_uint8(v_toEnvExtension_6139_, sizeof(void*)*6);
v___x_6143_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6143_, 0, v_declName_6130_);
lean_ctor_set(v___x_6143_, 1, v_declName_6120_);
lean_ctor_set(v___x_6143_, 2, v_prio_6121_);
lean_inc(v_addEntryFn_6140_);
v___f_6144_ = lean_alloc_closure((void*)(l_Lean_Meta_addDefaultInstance___lam__0), 3, 2);
lean_closure_set(v___f_6144_, 0, v_addEntryFn_6140_);
lean_closure_set(v___f_6144_, 1, v___x_6143_);
v___x_6145_ = lean_box(0);
v___x_6146_ = 1;
if (v_logWrites_6142_ == 0)
{
lean_object* v___x_6147_; lean_object* v___x_6148_; 
lean_inc_ref(v_toEnvExtension_6139_);
v___x_6147_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_6139_, v_env_6137_, v___f_6144_, v_asyncMode_6141_, v___x_6145_, v___x_6146_);
v___x_6148_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v___x_6147_, v___y_6133_, v___y_6135_);
return v___x_6148_;
}
else
{
lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; 
lean_inc_ref_n(v_toEnvExtension_6139_, 2);
v___x_6149_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_6139_, v_env_6137_);
lean_dec_ref(v_env_6137_);
v___x_6150_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_6139_, v___x_6149_, v___f_6144_, v_asyncMode_6141_, v___x_6145_, v___x_6146_);
v___x_6151_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v___x_6150_, v___y_6133_, v___y_6135_);
return v___x_6151_;
}
}
}
else
{
lean_object* v___x_6169_; uint8_t v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; 
lean_dec_ref(v___x_6129_);
lean_dec(v_prio_6121_);
v___x_6169_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__1, &l_Lean_Meta_addDefaultInstance___lam__1___closed__1_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__1);
v___x_6170_ = 0;
v___x_6171_ = l_Lean_MessageData_ofConstName(v_declName_6120_, v___x_6170_);
v___x_6172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6172_, 0, v___x_6169_);
lean_ctor_set(v___x_6172_, 1, v___x_6171_);
v___x_6173_ = lean_obj_once(&l_Lean_Meta_addDefaultInstance___lam__1___closed__9, &l_Lean_Meta_addDefaultInstance___lam__1___closed__9_once, _init_l_Lean_Meta_addDefaultInstance___lam__1___closed__9);
v___x_6174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6174_, 0, v___x_6172_);
lean_ctor_set(v___x_6174_, 1, v___x_6173_);
v___x_6175_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_6174_, v___y_6124_, v___y_6125_, v___y_6126_, v___y_6127_);
return v___x_6175_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___lam__1___boxed(lean_object* v_declName_6176_, lean_object* v_prio_6177_, lean_object* v_x_6178_, lean_object* v_type_6179_, lean_object* v___y_6180_, lean_object* v___y_6181_, lean_object* v___y_6182_, lean_object* v___y_6183_, lean_object* v___y_6184_){
_start:
{
lean_object* v_res_6185_; 
v_res_6185_ = l_Lean_Meta_addDefaultInstance___lam__1(v_declName_6176_, v_prio_6177_, v_x_6178_, v_type_6179_, v___y_6180_, v___y_6181_, v___y_6182_, v___y_6183_);
lean_dec(v___y_6183_);
lean_dec_ref(v___y_6182_);
lean_dec(v___y_6181_);
lean_dec_ref(v___y_6180_);
lean_dec_ref(v_type_6179_);
lean_dec_ref(v_x_6178_);
return v_res_6185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance(lean_object* v_declName_6186_, lean_object* v_prio_6187_, lean_object* v_a_6188_, lean_object* v_a_6189_, lean_object* v_a_6190_, lean_object* v_a_6191_){
_start:
{
lean_object* v___f_6193_; lean_object* v___x_6194_; lean_object* v_env_6195_; uint8_t v___x_6196_; lean_object* v___x_6197_; 
lean_inc_n(v_declName_6186_, 2);
v___f_6193_ = lean_alloc_closure((void*)(l_Lean_Meta_addDefaultInstance___lam__1___boxed), 9, 2);
lean_closure_set(v___f_6193_, 0, v_declName_6186_);
lean_closure_set(v___f_6193_, 1, v_prio_6187_);
v___x_6194_ = lean_st_ref_get(v_a_6191_);
v_env_6195_ = lean_ctor_get(v___x_6194_, 0);
lean_inc_ref(v_env_6195_);
lean_dec(v___x_6194_);
v___x_6196_ = 0;
v___x_6197_ = l_Lean_Environment_find_x3f(v_env_6195_, v_declName_6186_, v___x_6196_);
if (lean_obj_tag(v___x_6197_) == 0)
{
lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v___x_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; 
lean_dec_ref(v___f_6193_);
v___x_6198_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6___redArg___closed__1);
v___x_6199_ = l_Lean_MessageData_ofConstName(v_declName_6186_, v___x_6196_);
v___x_6200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6200_, 0, v___x_6198_);
lean_ctor_set(v___x_6200_, 1, v___x_6199_);
v___x_6201_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_6202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6202_, 0, v___x_6200_);
lean_ctor_set(v___x_6202_, 1, v___x_6201_);
v___x_6203_ = l_Lean_throwError___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_spec__6___redArg(v___x_6202_, v_a_6188_, v_a_6189_, v_a_6190_, v_a_6191_);
return v___x_6203_;
}
else
{
lean_object* v_val_6204_; lean_object* v___x_6205_; lean_object* v___x_6206_; 
lean_dec(v_declName_6186_);
v_val_6204_ = lean_ctor_get(v___x_6197_, 0);
lean_inc(v_val_6204_);
lean_dec_ref_known(v___x_6197_, 1);
v___x_6205_ = l_Lean_ConstantInfo_type(v_val_6204_);
lean_dec(v_val_6204_);
v___x_6206_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder_getSemiOutParamPositionsOf_spec__1___redArg(v___x_6205_, v___f_6193_, v___x_6196_, v___x_6196_, v_a_6188_, v_a_6189_, v_a_6190_, v_a_6191_);
return v___x_6206_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_addDefaultInstance___boxed(lean_object* v_declName_6207_, lean_object* v_prio_6208_, lean_object* v_a_6209_, lean_object* v_a_6210_, lean_object* v_a_6211_, lean_object* v_a_6212_, lean_object* v_a_6213_){
_start:
{
lean_object* v_res_6214_; 
v_res_6214_ = l_Lean_Meta_addDefaultInstance(v_declName_6207_, v_prio_6208_, v_a_6209_, v_a_6210_, v_a_6211_, v_a_6212_);
lean_dec(v_a_6212_);
lean_dec_ref(v_a_6211_);
lean_dec(v_a_6210_);
lean_dec_ref(v_a_6209_);
return v_res_6214_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(lean_object* v_env_6215_, lean_object* v___y_6216_, lean_object* v___y_6217_, lean_object* v___y_6218_, lean_object* v___y_6219_){
_start:
{
lean_object* v___x_6221_; 
v___x_6221_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___redArg(v_env_6215_, v___y_6217_, v___y_6219_);
return v___x_6221_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0___boxed(lean_object* v_env_6222_, lean_object* v___y_6223_, lean_object* v___y_6224_, lean_object* v___y_6225_, lean_object* v___y_6226_, lean_object* v___y_6227_){
_start:
{
lean_object* v_res_6228_; 
v_res_6228_ = l_Lean_setEnv___at___00Lean_Meta_addDefaultInstance_spec__0(v_env_6222_, v___y_6223_, v___y_6224_, v___y_6225_, v___y_6226_);
lean_dec(v___y_6226_);
lean_dec_ref(v___y_6225_);
lean_dec(v___y_6224_);
lean_dec_ref(v___y_6223_);
return v_res_6228_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_6230_; lean_object* v___x_6231_; 
v___x_6230_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__0));
v___x_6231_ = l_Lean_stringToMessageData(v___x_6230_);
return v___x_6231_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_6233_; lean_object* v___x_6234_; 
v___x_6233_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__2));
v___x_6234_ = l_Lean_stringToMessageData(v___x_6233_);
return v___x_6234_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(lean_object* v_name_6238_, uint8_t v_kind_6239_, lean_object* v___y_6240_, lean_object* v___y_6241_){
_start:
{
lean_object* v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; lean_object* v___x_6247_; lean_object* v___y_6249_; 
v___x_6243_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__1);
v___x_6244_ = l_Lean_MessageData_ofName(v_name_6238_);
v___x_6245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6245_, 0, v___x_6243_);
lean_ctor_set(v___x_6245_, 1, v___x_6244_);
v___x_6246_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__3);
v___x_6247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6247_, 0, v___x_6245_);
lean_ctor_set(v___x_6247_, 1, v___x_6246_);
switch(v_kind_6239_)
{
case 0:
{
lean_object* v___x_6256_; 
v___x_6256_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__4));
v___y_6249_ = v___x_6256_;
goto v___jp_6248_;
}
case 1:
{
lean_object* v___x_6257_; 
v___x_6257_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__5));
v___y_6249_ = v___x_6257_;
goto v___jp_6248_;
}
default: 
{
lean_object* v___x_6258_; 
v___x_6258_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___closed__6));
v___y_6249_ = v___x_6258_;
goto v___jp_6248_;
}
}
v___jp_6248_:
{
lean_object* v___x_6250_; lean_object* v___x_6251_; lean_object* v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6254_; lean_object* v___x_6255_; 
lean_inc_ref(v___y_6249_);
v___x_6250_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6250_, 0, v___y_6249_);
v___x_6251_ = l_Lean_MessageData_ofFormat(v___x_6250_);
v___x_6252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6252_, 0, v___x_6247_);
lean_ctor_set(v___x_6252_, 1, v___x_6251_);
v___x_6253_ = lean_obj_once(&l_Lean_Meta_Instances_erase___redArg___closed__3, &l_Lean_Meta_Instances_erase___redArg___closed__3_once, _init_l_Lean_Meta_Instances_erase___redArg___closed__3);
v___x_6254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6254_, 0, v___x_6252_);
lean_ctor_set(v___x_6254_, 1, v___x_6253_);
v___x_6255_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_6254_, v___y_6240_, v___y_6241_);
return v___x_6255_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_name_6259_, lean_object* v_kind_6260_, lean_object* v___y_6261_, lean_object* v___y_6262_, lean_object* v___y_6263_){
_start:
{
uint8_t v_kind_boxed_6264_; lean_object* v_res_6265_; 
v_kind_boxed_6264_ = lean_unbox(v_kind_6260_);
v_res_6265_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v_name_6259_, v_kind_boxed_6264_, v___y_6261_, v___y_6262_);
lean_dec(v___y_6262_);
lean_dec_ref(v___y_6261_);
return v_res_6265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object* v___x_6266_, lean_object* v___x_6267_, lean_object* v___x_6268_, lean_object* v_declName_6269_, lean_object* v_stx_6270_, uint8_t v_kind_6271_, lean_object* v___y_6272_, lean_object* v___y_6273_){
_start:
{
lean_object* v___x_6275_; lean_object* v___x_6276_; lean_object* v___x_6277_; 
v___x_6275_ = lean_unsigned_to_nat(1u);
v___x_6276_ = l_Lean_Syntax_getArg(v_stx_6270_, v___x_6275_);
v___x_6277_ = l_Lean_getAttrParamOptPrio(v___x_6276_, v___y_6272_, v___y_6273_);
if (lean_obj_tag(v___x_6277_) == 0)
{
lean_object* v_a_6278_; lean_object* v___y_6280_; lean_object* v___y_6281_; uint8_t v___x_6315_; uint8_t v___x_6316_; 
v_a_6278_ = lean_ctor_get(v___x_6277_, 0);
lean_inc(v_a_6278_);
lean_dec_ref_known(v___x_6277_, 1);
v___x_6315_ = 0;
v___x_6316_ = l_Lean_instBEqAttributeKind_beq(v_kind_6271_, v___x_6315_);
if (v___x_6316_ == 0)
{
lean_object* v___x_6317_; 
lean_dec(v_a_6278_);
lean_dec(v_declName_6269_);
lean_dec(v___x_6267_);
lean_dec(v___x_6266_);
v___x_6317_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v___x_6268_, v_kind_6271_, v___y_6272_, v___y_6273_);
return v___x_6317_;
}
else
{
lean_dec(v___x_6268_);
v___y_6280_ = v___y_6272_;
v___y_6281_ = v___y_6273_;
goto v___jp_6279_;
}
v___jp_6279_:
{
uint8_t v___x_6282_; uint8_t v___x_6283_; lean_object* v___x_6284_; lean_object* v___x_6285_; lean_object* v___x_6286_; lean_object* v___x_6287_; lean_object* v___x_6288_; size_t v___x_6289_; lean_object* v___x_6290_; lean_object* v___x_6291_; lean_object* v___x_6292_; lean_object* v___x_6293_; lean_object* v___x_6294_; lean_object* v___x_6295_; lean_object* v___x_6296_; lean_object* v___x_6297_; lean_object* v___x_6298_; lean_object* v___x_6299_; lean_object* v___x_6300_; lean_object* v___x_6301_; lean_object* v___x_6302_; lean_object* v___x_6303_; lean_object* v___x_6304_; lean_object* v___x_6305_; 
v___x_6282_ = 0;
v___x_6283_ = 1;
v___x_6284_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6285_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6286_ = lean_unsigned_to_nat(32u);
v___x_6287_ = lean_mk_empty_array_with_capacity(v___x_6286_);
v___x_6288_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_addInstance_spec__1_spec__3_spec__6_spec__8_spec__11_spec__12___redArg___closed__2);
v___x_6289_ = ((size_t)5ULL);
lean_inc_n(v___x_6266_, 7);
v___x_6290_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6290_, 0, v___x_6288_);
lean_ctor_set(v___x_6290_, 1, v___x_6287_);
lean_ctor_set(v___x_6290_, 2, v___x_6266_);
lean_ctor_set(v___x_6290_, 3, v___x_6266_);
lean_ctor_set_usize(v___x_6290_, 4, v___x_6289_);
v___x_6291_ = lean_box(1);
lean_inc_ref(v___x_6290_);
v___x_6292_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6292_, 0, v___x_6285_);
lean_ctor_set(v___x_6292_, 1, v___x_6290_);
lean_ctor_set(v___x_6292_, 2, v___x_6291_);
v___x_6293_ = lean_mk_empty_array_with_capacity(v___x_6266_);
v___x_6294_ = lean_box(0);
lean_inc(v___x_6267_);
v___x_6295_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6295_, 0, v___x_6284_);
lean_ctor_set(v___x_6295_, 1, v___x_6267_);
lean_ctor_set(v___x_6295_, 2, v___x_6292_);
lean_ctor_set(v___x_6295_, 3, v___x_6293_);
lean_ctor_set(v___x_6295_, 4, v___x_6294_);
lean_ctor_set(v___x_6295_, 5, v___x_6266_);
lean_ctor_set(v___x_6295_, 6, v___x_6294_);
lean_ctor_set_uint8(v___x_6295_, sizeof(void*)*7, v___x_6282_);
lean_ctor_set_uint8(v___x_6295_, sizeof(void*)*7 + 1, v___x_6282_);
lean_ctor_set_uint8(v___x_6295_, sizeof(void*)*7 + 2, v___x_6282_);
lean_ctor_set_uint8(v___x_6295_, sizeof(void*)*7 + 3, v___x_6283_);
v___x_6296_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_6296_, 0, v___x_6266_);
lean_ctor_set(v___x_6296_, 1, v___x_6266_);
lean_ctor_set(v___x_6296_, 2, v___x_6266_);
lean_ctor_set(v___x_6296_, 3, v___x_6266_);
lean_ctor_set(v___x_6296_, 4, v___x_6285_);
lean_ctor_set(v___x_6296_, 5, v___x_6285_);
lean_ctor_set(v___x_6296_, 6, v___x_6285_);
lean_ctor_set(v___x_6296_, 7, v___x_6285_);
lean_ctor_set(v___x_6296_, 8, v___x_6285_);
lean_ctor_set(v___x_6296_, 9, v___x_6285_);
v___x_6297_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_addInstance_spec__3___redArg___closed__2);
v___x_6298_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6299_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6299_, 0, v___x_6285_);
lean_ctor_set(v___x_6299_, 1, v___x_6285_);
lean_ctor_set(v___x_6299_, 2, v___x_6266_);
v___x_6300_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6300_, 0, v___x_6297_);
lean_ctor_set(v___x_6300_, 1, v___x_6285_);
lean_ctor_set(v___x_6300_, 2, v___x_6298_);
lean_ctor_set(v___x_6300_, 3, v___x_6285_);
lean_ctor_set(v___x_6300_, 4, v___x_6285_);
lean_ctor_set(v___x_6300_, 5, v___x_6285_);
lean_ctor_set(v___x_6300_, 6, v___x_6285_);
lean_ctor_set(v___x_6300_, 7, v___x_6299_);
v___x_6301_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2_);
v___x_6302_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6302_, 0, v___x_6296_);
lean_ctor_set(v___x_6302_, 1, v___x_6300_);
lean_ctor_set(v___x_6302_, 2, v___x_6267_);
lean_ctor_set(v___x_6302_, 3, v___x_6290_);
lean_ctor_set(v___x_6302_, 4, v___x_6301_);
v___x_6303_ = lean_box(0);
v___x_6304_ = lean_st_mk_ref(v___x_6302_);
v___x_6305_ = l_Lean_Meta_addDefaultInstance(v_declName_6269_, v_a_6278_, v___x_6295_, v___x_6304_, v___y_6280_, v___y_6281_);
lean_dec_ref_known(v___x_6295_, 7);
if (lean_obj_tag(v___x_6305_) == 0)
{
lean_object* v___x_6307_; uint8_t v_isShared_6308_; uint8_t v_isSharedCheck_6313_; 
v_isSharedCheck_6313_ = !lean_is_exclusive(v___x_6305_);
if (v_isSharedCheck_6313_ == 0)
{
lean_object* v_unused_6314_; 
v_unused_6314_ = lean_ctor_get(v___x_6305_, 0);
lean_dec(v_unused_6314_);
v___x_6307_ = v___x_6305_;
v_isShared_6308_ = v_isSharedCheck_6313_;
goto v_resetjp_6306_;
}
else
{
lean_dec(v___x_6305_);
v___x_6307_ = lean_box(0);
v_isShared_6308_ = v_isSharedCheck_6313_;
goto v_resetjp_6306_;
}
v_resetjp_6306_:
{
lean_object* v___x_6309_; lean_object* v___x_6311_; 
v___x_6309_ = lean_st_ref_get(v___x_6304_);
lean_dec(v___x_6304_);
lean_dec(v___x_6309_);
if (v_isShared_6308_ == 0)
{
lean_ctor_set(v___x_6307_, 0, v___x_6303_);
v___x_6311_ = v___x_6307_;
goto v_reusejp_6310_;
}
else
{
lean_object* v_reuseFailAlloc_6312_; 
v_reuseFailAlloc_6312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6312_, 0, v___x_6303_);
v___x_6311_ = v_reuseFailAlloc_6312_;
goto v_reusejp_6310_;
}
v_reusejp_6310_:
{
return v___x_6311_;
}
}
}
else
{
lean_dec(v___x_6304_);
return v___x_6305_;
}
}
}
else
{
lean_object* v_a_6318_; lean_object* v___x_6320_; uint8_t v_isShared_6321_; uint8_t v_isSharedCheck_6325_; 
lean_dec(v_declName_6269_);
lean_dec(v___x_6268_);
lean_dec(v___x_6267_);
lean_dec(v___x_6266_);
v_a_6318_ = lean_ctor_get(v___x_6277_, 0);
v_isSharedCheck_6325_ = !lean_is_exclusive(v___x_6277_);
if (v_isSharedCheck_6325_ == 0)
{
v___x_6320_ = v___x_6277_;
v_isShared_6321_ = v_isSharedCheck_6325_;
goto v_resetjp_6319_;
}
else
{
lean_inc(v_a_6318_);
lean_dec(v___x_6277_);
v___x_6320_ = lean_box(0);
v_isShared_6321_ = v_isSharedCheck_6325_;
goto v_resetjp_6319_;
}
v_resetjp_6319_:
{
lean_object* v___x_6323_; 
if (v_isShared_6321_ == 0)
{
v___x_6323_ = v___x_6320_;
goto v_reusejp_6322_;
}
else
{
lean_object* v_reuseFailAlloc_6324_; 
v_reuseFailAlloc_6324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6324_, 0, v_a_6318_);
v___x_6323_ = v_reuseFailAlloc_6324_;
goto v_reusejp_6322_;
}
v_reusejp_6322_:
{
return v___x_6323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v___x_6326_, lean_object* v___x_6327_, lean_object* v___x_6328_, lean_object* v_declName_6329_, lean_object* v_stx_6330_, lean_object* v_kind_6331_, lean_object* v___y_6332_, lean_object* v___y_6333_, lean_object* v___y_6334_){
_start:
{
uint8_t v_kind_boxed_6335_; lean_object* v_res_6336_; 
v_kind_boxed_6335_ = lean_unbox(v_kind_6331_);
v_res_6336_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(v___x_6326_, v___x_6327_, v___x_6328_, v_declName_6329_, v_stx_6330_, v_kind_boxed_6335_, v___y_6332_, v___y_6333_);
lean_dec(v___y_6333_);
lean_dec_ref(v___y_6332_);
lean_dec(v_stx_6330_);
return v_res_6336_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6338_; lean_object* v___x_6339_; 
v___x_6338_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6339_ = l_Lean_stringToMessageData(v___x_6338_);
return v___x_6339_;
}
}
static lean_object* _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6341_; lean_object* v___x_6342_; 
v___x_6341_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6342_ = l_Lean_stringToMessageData(v___x_6341_);
return v___x_6342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(lean_object* v___x_6343_, lean_object* v_decl_6344_, lean_object* v___y_6345_, lean_object* v___y_6346_){
_start:
{
lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; 
v___x_6348_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6349_ = l_Lean_MessageData_ofName(v___x_6343_);
v___x_6350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6350_, 0, v___x_6348_);
lean_ctor_set(v___x_6350_, 1, v___x_6349_);
v___x_6351_ = lean_obj_once(&l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_, &l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_);
v___x_6352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6352_, 0, v___x_6350_);
lean_ctor_set(v___x_6352_, 1, v___x_6351_);
v___x_6353_ = l_Lean_throwError___at___00Lean_Meta_Instances_erase___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_1841422150____hygCtx___hyg_2__spec__0_spec__1___redArg(v___x_6352_, v___y_6345_, v___y_6346_);
return v___x_6353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v___x_6354_, lean_object* v_decl_6355_, lean_object* v___y_6356_, lean_object* v___y_6357_, lean_object* v___y_6358_){
_start:
{
lean_object* v_res_6359_; 
v_res_6359_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(v___x_6354_, v_decl_6355_, v___y_6356_, v___y_6357_);
lean_dec(v___y_6357_);
lean_dec_ref(v___y_6356_);
lean_dec(v_decl_6355_);
return v_res_6359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6392_; lean_object* v___x_6393_; lean_object* v___x_6394_; 
v___x_6392_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6393_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_));
v___x_6394_ = l_Lean_registerBuiltinAttribute(v___x_6393_);
if (lean_obj_tag(v___x_6394_) == 0)
{
lean_object* v___x_6395_; uint8_t v___x_6396_; lean_object* v___x_6397_; 
lean_dec_ref_known(v___x_6394_, 1);
v___x_6395_ = ((lean_object*)(l___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___lam__0___closed__1));
v___x_6396_ = 0;
v___x_6397_ = l_Lean_registerTraceClass(v___x_6395_, v___x_6396_, v___x_6392_);
return v___x_6397_;
}
else
{
return v___x_6394_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2____boxed(lean_object* v_a_6398_){
_start:
{
lean_object* v_res_6399_; 
v_res_6399_ = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2_();
return v_res_6399_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_6400_, lean_object* v_name_6401_, uint8_t v_kind_6402_, lean_object* v___y_6403_, lean_object* v___y_6404_){
_start:
{
lean_object* v___x_6406_; 
v___x_6406_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___redArg(v_name_6401_, v_kind_6402_, v___y_6403_, v___y_6404_);
return v___x_6406_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_6407_, lean_object* v_name_6408_, lean_object* v_kind_6409_, lean_object* v___y_6410_, lean_object* v___y_6411_, lean_object* v___y_6412_){
_start:
{
uint8_t v_kind_boxed_6413_; lean_object* v_res_6414_; 
v_kind_boxed_6413_ = lean_unbox(v_kind_6409_);
v_res_6414_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_397728026____hygCtx___hyg_2__spec__0(v_00_u03b1_6407_, v_name_6408_, v_kind_boxed_6413_, v___y_6410_, v___y_6411_);
lean_dec(v___y_6411_);
lean_dec_ref(v___y_6410_);
return v_res_6414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0(lean_object* v___x_6415_, lean_object* v_toPure_6416_, lean_object* v_____do__lift_6417_){
_start:
{
lean_object* v___x_6418_; lean_object* v_toEnvExtension_6419_; lean_object* v_asyncMode_6420_; lean_object* v___x_6421_; lean_object* v___x_6422_; lean_object* v_priorities_6423_; lean_object* v___x_6424_; 
v___x_6418_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_6419_ = lean_ctor_get(v___x_6418_, 0);
v_asyncMode_6420_ = lean_ctor_get(v_toEnvExtension_6419_, 2);
v___x_6421_ = lean_box(0);
v___x_6422_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_6415_, v___x_6418_, v_____do__lift_6417_, v_asyncMode_6420_, v___x_6421_);
v_priorities_6423_ = lean_ctor_get(v___x_6422_, 1);
lean_inc(v_priorities_6423_);
lean_dec(v___x_6422_);
v___x_6424_ = lean_apply_2(v_toPure_6416_, lean_box(0), v_priorities_6423_);
return v___x_6424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities___redArg(lean_object* v_inst_6425_, lean_object* v_inst_6426_){
_start:
{
lean_object* v_toApplicative_6427_; lean_object* v_toBind_6428_; lean_object* v_getEnv_6429_; lean_object* v_toPure_6430_; lean_object* v___x_6431_; lean_object* v___f_6432_; lean_object* v___x_6433_; 
v_toApplicative_6427_ = lean_ctor_get(v_inst_6425_, 0);
lean_inc_ref(v_toApplicative_6427_);
v_toBind_6428_ = lean_ctor_get(v_inst_6425_, 1);
lean_inc(v_toBind_6428_);
lean_dec_ref(v_inst_6425_);
v_getEnv_6429_ = lean_ctor_get(v_inst_6426_, 0);
lean_inc(v_getEnv_6429_);
lean_dec_ref(v_inst_6426_);
v_toPure_6430_ = lean_ctor_get(v_toApplicative_6427_, 1);
lean_inc(v_toPure_6430_);
lean_dec_ref(v_toApplicative_6427_);
v___x_6431_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default));
v___f_6432_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstancesPriorities___redArg___lam__0), 3, 2);
lean_closure_set(v___f_6432_, 0, v___x_6431_);
lean_closure_set(v___f_6432_, 1, v_toPure_6430_);
v___x_6433_ = lean_apply_4(v_toBind_6428_, lean_box(0), lean_box(0), v_getEnv_6429_, v___f_6432_);
return v___x_6433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstancesPriorities(lean_object* v_m_6434_, lean_object* v_inst_6435_, lean_object* v_inst_6436_){
_start:
{
lean_object* v___x_6437_; 
v___x_6437_ = l_Lean_Meta_getDefaultInstancesPriorities___redArg(v_inst_6435_, v_inst_6436_);
return v___x_6437_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_getDefaultInstances___redArg___lam__0(lean_object* v_env_6438_, uint8_t v_isExporting_6439_, lean_object* v_x_6440_){
_start:
{
lean_object* v_fst_6441_; uint8_t v___x_6442_; 
v_fst_6441_ = lean_ctor_get(v_x_6440_, 0);
lean_inc(v_fst_6441_);
lean_dec_ref(v_x_6440_);
v___x_6442_ = l_Lean_Environment_contains(v_env_6438_, v_fst_6441_, v_isExporting_6439_);
return v___x_6442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed(lean_object* v_env_6443_, lean_object* v_isExporting_6444_, lean_object* v_x_6445_){
_start:
{
uint8_t v_isExporting_boxed_6446_; uint8_t v_res_6447_; lean_object* v_r_6448_; 
v_isExporting_boxed_6446_ = lean_unbox(v_isExporting_6444_);
v_res_6447_ = l_Lean_Meta_getDefaultInstances___redArg___lam__0(v_env_6443_, v_isExporting_boxed_6446_, v_x_6445_);
v_r_6448_ = lean_box(v_res_6447_);
return v_r_6448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1(lean_object* v___x_6449_, lean_object* v_toPure_6450_, lean_object* v_className_6451_, lean_object* v_env_6452_){
_start:
{
lean_object* v___y_6454_; lean_object* v___x_6462_; lean_object* v_toEnvExtension_6463_; lean_object* v_asyncMode_6464_; lean_object* v___x_6465_; lean_object* v___x_6466_; lean_object* v_defaultInstances_6467_; lean_object* v___x_6468_; 
v___x_6462_ = l_Lean_Meta_defaultInstanceExtension;
v_toEnvExtension_6463_ = lean_ctor_get(v___x_6462_, 0);
v_asyncMode_6464_ = lean_ctor_get(v_toEnvExtension_6463_, 2);
v___x_6465_ = lean_box(0);
lean_inc_ref(v_env_6452_);
v___x_6466_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_6449_, v___x_6462_, v_env_6452_, v_asyncMode_6464_, v___x_6465_);
v_defaultInstances_6467_ = lean_ctor_get(v___x_6466_, 0);
lean_inc(v_defaultInstances_6467_);
lean_dec(v___x_6466_);
v___x_6468_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_defaultInstances_6467_, v_className_6451_);
lean_dec(v_defaultInstances_6467_);
if (lean_obj_tag(v___x_6468_) == 0)
{
lean_object* v___x_6469_; 
v___x_6469_ = lean_box(0);
v___y_6454_ = v___x_6469_;
goto v___jp_6453_;
}
else
{
lean_object* v_val_6470_; 
v_val_6470_ = lean_ctor_get(v___x_6468_, 0);
lean_inc(v_val_6470_);
lean_dec_ref_known(v___x_6468_, 1);
v___y_6454_ = v_val_6470_;
goto v___jp_6453_;
}
v___jp_6453_:
{
uint8_t v_isExporting_6455_; 
v_isExporting_6455_ = lean_ctor_get_uint8(v_env_6452_, sizeof(void*)*13);
if (v_isExporting_6455_ == 0)
{
lean_object* v___x_6456_; 
lean_dec_ref(v_env_6452_);
v___x_6456_ = lean_apply_2(v_toPure_6450_, lean_box(0), v___y_6454_);
return v___x_6456_;
}
else
{
lean_object* v___x_6457_; lean_object* v___f_6458_; lean_object* v___x_6459_; lean_object* v___x_6460_; lean_object* v___x_6461_; 
v___x_6457_ = lean_box(v_isExporting_6455_);
v___f_6458_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstances___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_6458_, 0, v_env_6452_);
lean_closure_set(v___f_6458_, 1, v___x_6457_);
v___x_6459_ = lean_box(0);
v___x_6460_ = l_List_filterTR_loop___redArg(v___f_6458_, v___y_6454_, v___x_6459_);
v___x_6461_ = lean_apply_2(v_toPure_6450_, lean_box(0), v___x_6460_);
return v___x_6461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed(lean_object* v___x_6471_, lean_object* v_toPure_6472_, lean_object* v_className_6473_, lean_object* v_env_6474_){
_start:
{
lean_object* v_res_6475_; 
v_res_6475_ = l_Lean_Meta_getDefaultInstances___redArg___lam__1(v___x_6471_, v_toPure_6472_, v_className_6473_, v_env_6474_);
lean_dec(v_className_6473_);
return v_res_6475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances___redArg(lean_object* v_inst_6476_, lean_object* v_inst_6477_, lean_object* v_className_6478_){
_start:
{
lean_object* v_toApplicative_6479_; lean_object* v_toBind_6480_; lean_object* v_getEnv_6481_; lean_object* v_toPure_6482_; lean_object* v___x_6483_; lean_object* v___f_6484_; lean_object* v___x_6485_; 
v_toApplicative_6479_ = lean_ctor_get(v_inst_6476_, 0);
lean_inc_ref(v_toApplicative_6479_);
v_toBind_6480_ = lean_ctor_get(v_inst_6476_, 1);
lean_inc(v_toBind_6480_);
lean_dec_ref(v_inst_6476_);
v_getEnv_6481_ = lean_ctor_get(v_inst_6477_, 0);
lean_inc(v_getEnv_6481_);
lean_dec_ref(v_inst_6477_);
v_toPure_6482_ = lean_ctor_get(v_toApplicative_6479_, 1);
lean_inc(v_toPure_6482_);
lean_dec_ref(v_toApplicative_6479_);
v___x_6483_ = ((lean_object*)(l_Lean_Meta_instInhabitedDefaultInstances_default));
v___f_6484_ = lean_alloc_closure((void*)(l_Lean_Meta_getDefaultInstances___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_6484_, 0, v___x_6483_);
lean_closure_set(v___f_6484_, 1, v_toPure_6482_);
lean_closure_set(v___f_6484_, 2, v_className_6478_);
v___x_6485_ = lean_apply_4(v_toBind_6480_, lean_box(0), lean_box(0), v_getEnv_6481_, v___f_6484_);
return v___x_6485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getDefaultInstances(lean_object* v_m_6486_, lean_object* v_inst_6487_, lean_object* v_inst_6488_, lean_object* v_className_6489_){
_start:
{
lean_object* v___x_6490_; 
v___x_6490_ = l_Lean_Meta_getDefaultInstances___redArg(v_inst_6487_, v_inst_6488_, v_className_6489_);
return v___x_6490_;
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
res = l___private_Lean_Meta_Instances_0__Lean_Meta_initFn_00___x40_Lean_Meta_Instances_638191375____hygCtx___hyg_2_();
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
