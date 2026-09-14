// Lean compiler output
// Module: Lean.Elab.PreDefinition.PartialFixpoint.Eqns
// Imports: public import Lean.Elab.PreDefinition.FixedParams import Init.Internal.Order.Basic import Lean.Meta.Tactic.Delta import Lean.Meta.Tactic.Refl
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
uint8_t l_Lean_Environment_hasExposedBody(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
extern lean_object* l_Lean_Meta_smartUnfolding;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_deltaExpand(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
uint8_t l_Lean_Expr_isProj(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_NameMap_toArray___redArg(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
extern lean_object* l_Lean_Meta_unfoldThmSuffix;
lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_tactic_hygienic;
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object*);
static const lean_string_object l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0 = (const lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1_value;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2;
static const lean_array_object l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3 = (const lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3_value;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo;
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "PartialFixpoint"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eqnInfoExt"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(125, 126, 228, 214, 96, 108, 195, 201)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(200, 154, 190, 235, 71, 53, 215, 0)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_eqnInfoExt;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "deltaLHSUntilFix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 223, 150, 107, 82, 172, 43, 154)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "equality expected"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(18, 104, 23, 57, 110, 104, 99, 16)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lfp_monotone"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3_value),LEAN_SCALAR_PTR_LITERAL(226, 115, 213, 20, 156, 86, 56, 31)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "rwFixUnder: unexpected expression "};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7_value),LEAN_SCALAR_PTR_LITERAL(34, 153, 146, 175, 179, 220, 230, 134)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__13 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__13_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateProj!Impl"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__14 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__14_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proj expected"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__15 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__15_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrFun"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__17 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__17_value),LEAN_SCALAR_PTR_LITERAL(63, 110, 174, 29, 249, 91, 125, 152)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__18 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__18_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "lfp_monotone_fix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__19 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__19_value),LEAN_SCALAR_PTR_LITERAL(178, 113, 187, 250, 69, 106, 19, 81)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fix_eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__22 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__22_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__22_value),LEAN_SCALAR_PTR_LITERAL(83, 197, 58, 21, 58, 52, 66, 18)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lean.Elab.PreDefinition.PartialFixpoint.Eqns"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "_private.Lean.Elab.PreDefinition.PartialFixpoint.Eqns.0.Lean.Elab.PartialFixpoint.rwFixEq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "mkUnfoldEq rfl succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "mkUnfoldEq after rwFixEq:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "mkUnfoldEq after deltaLHS:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to generate unfold theorem for `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "`:\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "partialFixpoint"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(21, 214, 78, 192, 157, 92, 193, 45)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value)} };
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__7_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "mkUnfoldEq start:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_9_ = l_Lean_Elab_instInhabitedFixedParamPerms_default;
v___x_10_ = ((lean_object*)(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3));
v___x_11_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2, &l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2_once, _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2);
v___x_12_ = lean_box(0);
v___x_13_ = lean_box(0);
v___x_14_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
lean_ctor_set(v___x_14_, 2, v___x_11_);
lean_ctor_set(v___x_14_, 3, v___x_11_);
lean_ctor_set(v___x_14_, 4, v___x_10_);
lean_ctor_set(v___x_14_, 5, v___x_13_);
lean_ctor_set(v___x_14_, 6, v___x_9_);
lean_ctor_set(v___x_14_, 7, v___x_10_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4, &l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4_once, _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default;
return v___x_16_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_(lean_object* v_env_17_, lean_object* v_n_18_, lean_object* v_x_19_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = l_Lean_Environment_hasExposedBody(v_env_17_, v_n_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2____boxed(lean_object* v_env_21_, lean_object* v_n_22_, lean_object* v_x_23_){
_start:
{
uint8_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_(v_env_21_, v_n_22_, v_x_23_);
lean_dec_ref(v_x_23_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_(lean_object* v_env_26_, lean_object* v_s_27_){
_start:
{
lean_object* v___f_28_; lean_object* v_all_29_; lean_object* v___x_30_; lean_object* v_exported_31_; lean_object* v___x_32_; 
v___f_28_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2____boxed), 3, 1);
lean_closure_set(v___f_28_, 0, v_env_26_);
v_all_29_ = l_Lean_NameMap_toArray___redArg(v_s_27_);
v___x_30_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v___f_28_, v_s_27_);
v_exported_31_ = l_Lean_NameMap_toArray___redArg(v___x_30_);
lean_dec(v___x_30_);
lean_inc_ref(v_exported_31_);
v___x_32_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_32_, 0, v_exported_31_);
lean_ctor_set(v___x_32_, 1, v_exported_31_);
lean_ctor_set(v___x_32_, 2, v_all_29_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___f_46_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_));
v___x_47_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_));
v___x_48_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_));
v___x_49_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_47_, v___x_48_, v___f_46_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2____boxed(lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_();
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(uint8_t v___x_52_, uint8_t v___x_53_, uint8_t v_____do__lift_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_){
_start:
{
if (v_____do__lift_54_ == 0)
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_box(v___x_52_);
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
else
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_box(v___x_53_);
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0___boxed(lean_object* v___x_64_, lean_object* v___x_65_, lean_object* v_____do__lift_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_){
_start:
{
uint8_t v___x_3626__boxed_72_; uint8_t v___x_3627__boxed_73_; uint8_t v_____do__lift_3628__boxed_74_; lean_object* v_res_75_; 
v___x_3626__boxed_72_ = lean_unbox(v___x_64_);
v___x_3627__boxed_73_ = lean_unbox(v___x_65_);
v_____do__lift_3628__boxed_74_ = lean_unbox(v_____do__lift_66_);
v_res_75_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(v___x_3626__boxed_72_, v___x_3627__boxed_73_, v_____do__lift_3628__boxed_74_, v___y_67_, v___y_68_, v___y_69_, v___y_70_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
lean_dec(v___y_68_);
lean_dec_ref(v___y_67_);
return v_res_75_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(lean_object* v_as_76_, size_t v_i_77_, size_t v_stop_78_){
_start:
{
uint8_t v___x_79_; 
v___x_79_ = lean_usize_dec_eq(v_i_77_, v_stop_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; uint8_t v_kind_81_; uint8_t v___x_82_; 
v___x_80_ = lean_array_uget_borrowed(v_as_76_, v_i_77_);
v_kind_81_ = lean_ctor_get_uint8(v___x_80_, sizeof(void*)*9);
v___x_82_ = l_Lean_Elab_DefKind_isTheorem(v_kind_81_);
if (v___x_82_ == 0)
{
uint8_t v___x_83_; 
v___x_83_ = 1;
return v___x_83_;
}
else
{
size_t v___x_84_; size_t v___x_85_; 
v___x_84_ = ((size_t)1ULL);
v___x_85_ = lean_usize_add(v_i_77_, v___x_84_);
v_i_77_ = v___x_85_;
goto _start;
}
}
else
{
uint8_t v___x_87_; 
v___x_87_ = 0;
return v___x_87_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2___boxed(lean_object* v_as_88_, lean_object* v_i_89_, lean_object* v_stop_90_){
_start:
{
size_t v_i_boxed_91_; size_t v_stop_boxed_92_; uint8_t v_res_93_; lean_object* v_r_94_; 
v_i_boxed_91_ = lean_unbox_usize(v_i_89_);
lean_dec(v_i_89_);
v_stop_boxed_92_ = lean_unbox_usize(v_stop_90_);
lean_dec(v_stop_90_);
v_res_93_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(v_as_88_, v_i_boxed_91_, v_stop_boxed_92_);
lean_dec_ref(v_as_88_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(lean_object* v___x_95_, lean_object* v_declNameNonRec_96_, lean_object* v_fixedParamPerms_97_, lean_object* v_fixpointType_98_, lean_object* v_as_99_, size_t v_i_100_, size_t v_stop_101_, lean_object* v_b_102_){
_start:
{
uint8_t v___x_103_; 
v___x_103_ = lean_usize_dec_eq(v_i_100_, v_stop_101_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v_levelParams_105_; lean_object* v_declName_106_; lean_object* v_type_107_; lean_object* v_value_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; size_t v___x_112_; size_t v___x_113_; 
v___x_104_ = lean_array_uget_borrowed(v_as_99_, v_i_100_);
v_levelParams_105_ = lean_ctor_get(v___x_104_, 1);
v_declName_106_ = lean_ctor_get(v___x_104_, 3);
v_type_107_ = lean_ctor_get(v___x_104_, 6);
v_value_108_ = lean_ctor_get(v___x_104_, 7);
v___x_109_ = l_Lean_Elab_PartialFixpoint_eqnInfoExt;
lean_inc_ref(v_fixpointType_98_);
lean_inc_ref(v_fixedParamPerms_97_);
lean_inc(v_declNameNonRec_96_);
lean_inc_ref(v___x_95_);
lean_inc_ref(v_value_108_);
lean_inc_ref(v_type_107_);
lean_inc(v_levelParams_105_);
lean_inc_n(v_declName_106_, 2);
v___x_110_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_110_, 0, v_declName_106_);
lean_ctor_set(v___x_110_, 1, v_levelParams_105_);
lean_ctor_set(v___x_110_, 2, v_type_107_);
lean_ctor_set(v___x_110_, 3, v_value_108_);
lean_ctor_set(v___x_110_, 4, v___x_95_);
lean_ctor_set(v___x_110_, 5, v_declNameNonRec_96_);
lean_ctor_set(v___x_110_, 6, v_fixedParamPerms_97_);
lean_ctor_set(v___x_110_, 7, v_fixpointType_98_);
v___x_111_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_109_, v_b_102_, v_declName_106_, v___x_110_);
v___x_112_ = ((size_t)1ULL);
v___x_113_ = lean_usize_add(v_i_100_, v___x_112_);
v_i_100_ = v___x_113_;
v_b_102_ = v___x_111_;
goto _start;
}
else
{
lean_dec_ref(v_fixpointType_98_);
lean_dec_ref(v_fixedParamPerms_97_);
lean_dec(v_declNameNonRec_96_);
lean_dec_ref(v___x_95_);
return v_b_102_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1___boxed(lean_object* v___x_115_, lean_object* v_declNameNonRec_116_, lean_object* v_fixedParamPerms_117_, lean_object* v_fixpointType_118_, lean_object* v_as_119_, lean_object* v_i_120_, lean_object* v_stop_121_, lean_object* v_b_122_){
_start:
{
size_t v_i_boxed_123_; size_t v_stop_boxed_124_; lean_object* v_res_125_; 
v_i_boxed_123_ = lean_unbox_usize(v_i_120_);
lean_dec(v_i_120_);
v_stop_boxed_124_ = lean_unbox_usize(v_stop_121_);
lean_dec(v_stop_121_);
v_res_125_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(v___x_115_, v_declNameNonRec_116_, v_fixedParamPerms_117_, v_fixpointType_118_, v_as_119_, v_i_boxed_123_, v_stop_boxed_124_, v_b_122_);
lean_dec_ref(v_as_119_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(size_t v_sz_126_, size_t v_i_127_, lean_object* v_bs_128_){
_start:
{
uint8_t v___x_129_; 
v___x_129_ = lean_usize_dec_lt(v_i_127_, v_sz_126_);
if (v___x_129_ == 0)
{
return v_bs_128_;
}
else
{
lean_object* v_v_130_; lean_object* v_declName_131_; lean_object* v___x_132_; lean_object* v_bs_x27_133_; size_t v___x_134_; size_t v___x_135_; lean_object* v___x_136_; 
v_v_130_ = lean_array_uget_borrowed(v_bs_128_, v_i_127_);
v_declName_131_ = lean_ctor_get(v_v_130_, 3);
lean_inc(v_declName_131_);
v___x_132_ = lean_unsigned_to_nat(0u);
v_bs_x27_133_ = lean_array_uset(v_bs_128_, v_i_127_, v___x_132_);
v___x_134_ = ((size_t)1ULL);
v___x_135_ = lean_usize_add(v_i_127_, v___x_134_);
v___x_136_ = lean_array_uset(v_bs_x27_133_, v_i_127_, v_declName_131_);
v_i_127_ = v___x_135_;
v_bs_128_ = v___x_136_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0___boxed(lean_object* v_sz_138_, lean_object* v_i_139_, lean_object* v_bs_140_){
_start:
{
size_t v_sz_boxed_141_; size_t v_i_boxed_142_; lean_object* v_res_143_; 
v_sz_boxed_141_ = lean_unbox_usize(v_sz_138_);
lean_dec(v_sz_138_);
v_i_boxed_142_ = lean_unbox_usize(v_i_139_);
lean_dec(v_i_139_);
v_res_143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(v_sz_boxed_141_, v_i_boxed_142_, v_bs_140_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(lean_object* v_as_144_, size_t v_i_145_, size_t v_stop_146_, lean_object* v_b_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
uint8_t v___x_151_; 
v___x_151_ = lean_usize_dec_eq(v_i_145_, v_stop_146_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; lean_object* v_declName_153_; lean_object* v___x_154_; 
v___x_152_ = lean_array_uget_borrowed(v_as_144_, v_i_145_);
v_declName_153_ = lean_ctor_get(v___x_152_, 3);
lean_inc(v_declName_153_);
v___x_154_ = l_Lean_Meta_ensureEqnReservedNamesAvailable(v_declName_153_, v___y_148_, v___y_149_);
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; size_t v___x_156_; size_t v___x_157_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_a_155_);
lean_dec_ref_known(v___x_154_, 1);
v___x_156_ = ((size_t)1ULL);
v___x_157_ = lean_usize_add(v_i_145_, v___x_156_);
v_i_145_ = v___x_157_;
v_b_147_ = v_a_155_;
goto _start;
}
else
{
return v___x_154_;
}
}
else
{
lean_object* v___x_159_; 
v___x_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_159_, 0, v_b_147_);
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg___boxed(lean_object* v_as_160_, lean_object* v_i_161_, lean_object* v_stop_162_, lean_object* v_b_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
size_t v_i_boxed_167_; size_t v_stop_boxed_168_; lean_object* v_res_169_; 
v_i_boxed_167_ = lean_unbox_usize(v_i_161_);
lean_dec(v_i_161_);
v_stop_boxed_168_ = lean_unbox_usize(v_stop_162_);
lean_dec(v_stop_162_);
v_res_169_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_as_160_, v_i_boxed_167_, v_stop_boxed_168_, v_b_163_, v___y_164_, v___y_165_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec_ref(v_as_160_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(uint8_t v___x_170_, lean_object* v_as_171_, size_t v_i_172_, size_t v_stop_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
uint8_t v___x_183_; 
v___x_183_ = lean_usize_dec_eq(v_i_172_, v_stop_173_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; lean_object* v_type_185_; uint8_t v___x_186_; uint8_t v_a_188_; lean_object* v___x_191_; 
v___x_184_ = lean_array_uget_borrowed(v_as_171_, v_i_172_);
v_type_185_ = lean_ctor_get(v___x_184_, 6);
v___x_186_ = 1;
lean_inc_ref(v_type_185_);
v___x_191_ = l_Lean_Meta_isProp(v_type_185_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; uint8_t v___x_193_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_191_, 1);
v___x_193_ = lean_unbox(v_a_192_);
lean_dec(v_a_192_);
if (v___x_193_ == 0)
{
v_a_188_ = v___x_170_;
goto v___jp_187_;
}
else
{
goto v___jp_179_;
}
}
else
{
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_194_; uint8_t v___x_195_; 
v_a_194_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_194_);
lean_dec_ref_known(v___x_191_, 1);
v___x_195_ = lean_unbox(v_a_194_);
lean_dec(v_a_194_);
v_a_188_ = v___x_195_;
goto v___jp_187_;
}
else
{
return v___x_191_;
}
}
v___jp_187_:
{
if (v_a_188_ == 0)
{
goto v___jp_179_;
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_box(v___x_186_);
v___x_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
return v___x_190_;
}
}
}
else
{
uint8_t v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_196_ = 0;
v___x_197_ = lean_box(v___x_196_);
v___x_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
return v___x_198_;
}
v___jp_179_:
{
size_t v___x_180_; size_t v___x_181_; 
v___x_180_ = ((size_t)1ULL);
v___x_181_ = lean_usize_add(v_i_172_, v___x_180_);
v_i_172_ = v___x_181_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3___boxed(lean_object* v___x_199_, lean_object* v_as_200_, lean_object* v_i_201_, lean_object* v_stop_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
uint8_t v___x_3731__boxed_208_; size_t v_i_boxed_209_; size_t v_stop_boxed_210_; lean_object* v_res_211_; 
v___x_3731__boxed_208_ = lean_unbox(v___x_199_);
v_i_boxed_209_ = lean_unbox_usize(v_i_201_);
lean_dec(v_i_201_);
v_stop_boxed_210_ = lean_unbox_usize(v_stop_202_);
lean_dec(v_stop_202_);
v_res_211_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(v___x_3731__boxed_208_, v_as_200_, v_i_boxed_209_, v_stop_boxed_210_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec_ref(v_as_200_);
return v_res_211_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0(void){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_212_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0);
v___x_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1);
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1);
v___x_218_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
lean_ctor_set(v___x_218_, 2, v___x_217_);
lean_ctor_set(v___x_218_, 3, v___x_217_);
lean_ctor_set(v___x_218_, 4, v___x_217_);
lean_ctor_set(v___x_218_, 5, v___x_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo(lean_object* v_preDefs_219_, lean_object* v_declNameNonRec_220_, lean_object* v_fixedParamPerms_221_, lean_object* v_fixpointType_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_){
_start:
{
lean_object* v_nextMacroScope_232_; lean_object* v_ngen_233_; lean_object* v_auxDeclNGen_234_; lean_object* v_traceState_235_; lean_object* v_messages_236_; lean_object* v_infoState_237_; lean_object* v_snapshotTasks_238_; lean_object* v___y_239_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___y_266_; lean_object* v___y_307_; uint8_t v___x_308_; 
v___x_263_ = lean_unsigned_to_nat(0u);
v___x_264_ = lean_array_get_size(v_preDefs_219_);
v___x_308_ = lean_nat_dec_lt(v___x_263_, v___x_264_);
if (v___x_308_ == 0)
{
goto v___jp_295_;
}
else
{
lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_309_ = lean_box(0);
v___x_310_ = lean_nat_dec_le(v___x_264_, v___x_264_);
if (v___x_310_ == 0)
{
if (v___x_308_ == 0)
{
goto v___jp_295_;
}
else
{
size_t v___x_311_; size_t v___x_312_; lean_object* v___x_313_; 
v___x_311_ = ((size_t)0ULL);
v___x_312_ = lean_usize_of_nat(v___x_264_);
v___x_313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_preDefs_219_, v___x_311_, v___x_312_, v___x_309_, v_a_225_, v_a_226_);
v___y_307_ = v___x_313_;
goto v___jp_306_;
}
}
else
{
size_t v___x_314_; size_t v___x_315_; lean_object* v___x_316_; 
v___x_314_ = ((size_t)0ULL);
v___x_315_ = lean_usize_of_nat(v___x_264_);
v___x_316_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_preDefs_219_, v___x_314_, v___x_315_, v___x_309_, v_a_225_, v_a_226_);
v___y_307_ = v___x_316_;
goto v___jp_306_;
}
}
v___jp_228_:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = lean_box(0);
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
return v___x_230_;
}
v___jp_231_:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v_mctx_244_; lean_object* v_zetaDeltaFVarIds_245_; lean_object* v_postponed_246_; lean_object* v_diag_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_258_; 
v___x_240_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2);
v___x_241_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_241_, 0, v___y_239_);
lean_ctor_set(v___x_241_, 1, v_nextMacroScope_232_);
lean_ctor_set(v___x_241_, 2, v_ngen_233_);
lean_ctor_set(v___x_241_, 3, v_auxDeclNGen_234_);
lean_ctor_set(v___x_241_, 4, v_traceState_235_);
lean_ctor_set(v___x_241_, 5, v___x_240_);
lean_ctor_set(v___x_241_, 6, v_messages_236_);
lean_ctor_set(v___x_241_, 7, v_infoState_237_);
lean_ctor_set(v___x_241_, 8, v_snapshotTasks_238_);
v___x_242_ = lean_st_ref_put(v_a_226_, v___x_241_);
v___x_243_ = lean_st_ref_take(v_a_224_);
v_mctx_244_ = lean_ctor_get(v___x_243_, 0);
v_zetaDeltaFVarIds_245_ = lean_ctor_get(v___x_243_, 2);
v_postponed_246_ = lean_ctor_get(v___x_243_, 3);
v_diag_247_ = lean_ctor_get(v___x_243_, 4);
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_258_ == 0)
{
lean_object* v_unused_259_; 
v_unused_259_ = lean_ctor_get(v___x_243_, 1);
lean_dec(v_unused_259_);
v___x_249_ = v___x_243_;
v_isShared_250_ = v_isSharedCheck_258_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_diag_247_);
lean_inc(v_postponed_246_);
lean_inc(v_zetaDeltaFVarIds_245_);
lean_inc(v_mctx_244_);
lean_dec(v___x_243_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_258_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_254_; 
v___x_251_ = lean_box(0);
v___x_252_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 1, v___x_252_);
v___x_254_ = v___x_249_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_mctx_244_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v___x_252_);
lean_ctor_set(v_reuseFailAlloc_257_, 2, v_zetaDeltaFVarIds_245_);
lean_ctor_set(v_reuseFailAlloc_257_, 3, v_postponed_246_);
lean_ctor_set(v_reuseFailAlloc_257_, 4, v_diag_247_);
v___x_254_ = v_reuseFailAlloc_257_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_st_ref_put(v_a_224_, v___x_254_);
v___x_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_251_);
return v___x_256_;
}
}
}
v___jp_260_:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = lean_box(0);
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
v___jp_265_:
{
if (lean_obj_tag(v___y_266_) == 0)
{
lean_object* v_a_267_; uint8_t v___x_268_; 
v_a_267_ = lean_ctor_get(v___y_266_, 0);
lean_inc(v_a_267_);
lean_dec_ref_known(v___y_266_, 1);
v___x_268_ = lean_unbox(v_a_267_);
lean_dec(v_a_267_);
if (v___x_268_ == 0)
{
size_t v_sz_269_; size_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v_env_273_; lean_object* v_nextMacroScope_274_; lean_object* v_ngen_275_; lean_object* v_auxDeclNGen_276_; lean_object* v_traceState_277_; lean_object* v_messages_278_; lean_object* v_infoState_279_; lean_object* v_snapshotTasks_280_; uint8_t v___x_281_; 
v_sz_269_ = lean_array_size(v_preDefs_219_);
v___x_270_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_219_);
v___x_271_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(v_sz_269_, v___x_270_, v_preDefs_219_);
v___x_272_ = lean_st_ref_take(v_a_226_);
v_env_273_ = lean_ctor_get(v___x_272_, 0);
lean_inc_ref(v_env_273_);
v_nextMacroScope_274_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_nextMacroScope_274_);
v_ngen_275_ = lean_ctor_get(v___x_272_, 2);
lean_inc_ref(v_ngen_275_);
v_auxDeclNGen_276_ = lean_ctor_get(v___x_272_, 3);
lean_inc_ref(v_auxDeclNGen_276_);
v_traceState_277_ = lean_ctor_get(v___x_272_, 4);
lean_inc_ref(v_traceState_277_);
v_messages_278_ = lean_ctor_get(v___x_272_, 6);
lean_inc_ref(v_messages_278_);
v_infoState_279_ = lean_ctor_get(v___x_272_, 7);
lean_inc_ref(v_infoState_279_);
v_snapshotTasks_280_ = lean_ctor_get(v___x_272_, 8);
lean_inc_ref(v_snapshotTasks_280_);
lean_dec(v___x_272_);
v___x_281_ = lean_nat_dec_lt(v___x_263_, v___x_264_);
if (v___x_281_ == 0)
{
lean_dec_ref(v___x_271_);
lean_dec_ref(v_fixpointType_222_);
lean_dec_ref(v_fixedParamPerms_221_);
lean_dec(v_declNameNonRec_220_);
lean_dec_ref(v_preDefs_219_);
v_nextMacroScope_232_ = v_nextMacroScope_274_;
v_ngen_233_ = v_ngen_275_;
v_auxDeclNGen_234_ = v_auxDeclNGen_276_;
v_traceState_235_ = v_traceState_277_;
v_messages_236_ = v_messages_278_;
v_infoState_237_ = v_infoState_279_;
v_snapshotTasks_238_ = v_snapshotTasks_280_;
v___y_239_ = v_env_273_;
goto v___jp_231_;
}
else
{
uint8_t v___x_282_; 
v___x_282_ = lean_nat_dec_le(v___x_264_, v___x_264_);
if (v___x_282_ == 0)
{
if (v___x_281_ == 0)
{
lean_dec_ref(v___x_271_);
lean_dec_ref(v_fixpointType_222_);
lean_dec_ref(v_fixedParamPerms_221_);
lean_dec(v_declNameNonRec_220_);
lean_dec_ref(v_preDefs_219_);
v_nextMacroScope_232_ = v_nextMacroScope_274_;
v_ngen_233_ = v_ngen_275_;
v_auxDeclNGen_234_ = v_auxDeclNGen_276_;
v_traceState_235_ = v_traceState_277_;
v_messages_236_ = v_messages_278_;
v_infoState_237_ = v_infoState_279_;
v_snapshotTasks_238_ = v_snapshotTasks_280_;
v___y_239_ = v_env_273_;
goto v___jp_231_;
}
else
{
size_t v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_usize_of_nat(v___x_264_);
v___x_284_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(v___x_271_, v_declNameNonRec_220_, v_fixedParamPerms_221_, v_fixpointType_222_, v_preDefs_219_, v___x_270_, v___x_283_, v_env_273_);
lean_dec_ref(v_preDefs_219_);
v_nextMacroScope_232_ = v_nextMacroScope_274_;
v_ngen_233_ = v_ngen_275_;
v_auxDeclNGen_234_ = v_auxDeclNGen_276_;
v_traceState_235_ = v_traceState_277_;
v_messages_236_ = v_messages_278_;
v_infoState_237_ = v_infoState_279_;
v_snapshotTasks_238_ = v_snapshotTasks_280_;
v___y_239_ = v___x_284_;
goto v___jp_231_;
}
}
else
{
size_t v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_usize_of_nat(v___x_264_);
v___x_286_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(v___x_271_, v_declNameNonRec_220_, v_fixedParamPerms_221_, v_fixpointType_222_, v_preDefs_219_, v___x_270_, v___x_285_, v_env_273_);
lean_dec_ref(v_preDefs_219_);
v_nextMacroScope_232_ = v_nextMacroScope_274_;
v_ngen_233_ = v_ngen_275_;
v_auxDeclNGen_234_ = v_auxDeclNGen_276_;
v_traceState_235_ = v_traceState_277_;
v_messages_236_ = v_messages_278_;
v_infoState_237_ = v_infoState_279_;
v_snapshotTasks_238_ = v_snapshotTasks_280_;
v___y_239_ = v___x_286_;
goto v___jp_231_;
}
}
}
else
{
lean_dec_ref(v_fixpointType_222_);
lean_dec_ref(v_fixedParamPerms_221_);
lean_dec(v_declNameNonRec_220_);
lean_dec_ref(v_preDefs_219_);
goto v___jp_228_;
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec_ref(v_fixpointType_222_);
lean_dec_ref(v_fixedParamPerms_221_);
lean_dec(v_declNameNonRec_220_);
lean_dec_ref(v_preDefs_219_);
v_a_287_ = lean_ctor_get(v___y_266_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___y_266_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___y_266_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___y_266_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
v___jp_295_:
{
uint8_t v___x_296_; 
v___x_296_ = lean_nat_dec_lt(v___x_263_, v___x_264_);
if (v___x_296_ == 0)
{
lean_dec_ref(v_fixpointType_222_);
lean_dec_ref(v_fixedParamPerms_221_);
lean_dec(v_declNameNonRec_220_);
lean_dec_ref(v_preDefs_219_);
goto v___jp_260_;
}
else
{
if (v___x_296_ == 0)
{
lean_dec_ref(v_fixpointType_222_);
lean_dec_ref(v_fixedParamPerms_221_);
lean_dec(v_declNameNonRec_220_);
lean_dec_ref(v_preDefs_219_);
goto v___jp_260_;
}
else
{
size_t v___x_297_; size_t v___x_298_; uint8_t v___x_299_; 
v___x_297_ = ((size_t)0ULL);
v___x_298_ = lean_usize_of_nat(v___x_264_);
v___x_299_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(v_preDefs_219_, v___x_297_, v___x_298_);
if (v___x_299_ == 0)
{
lean_dec_ref(v_fixpointType_222_);
lean_dec_ref(v_fixedParamPerms_221_);
lean_dec(v_declNameNonRec_220_);
lean_dec_ref(v_preDefs_219_);
goto v___jp_260_;
}
else
{
uint8_t v___x_300_; 
v___x_300_ = 0;
if (v___x_296_ == 0)
{
lean_object* v___x_301_; 
v___x_301_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(v___x_299_, v___x_300_, v___x_296_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
v___y_266_ = v___x_301_;
goto v___jp_265_;
}
else
{
if (v___x_296_ == 0)
{
lean_dec_ref(v_fixpointType_222_);
lean_dec_ref(v_fixedParamPerms_221_);
lean_dec(v_declNameNonRec_220_);
lean_dec_ref(v_preDefs_219_);
goto v___jp_228_;
}
else
{
lean_object* v___x_302_; 
v___x_302_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(v___x_299_, v_preDefs_219_, v___x_297_, v___x_298_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; uint8_t v___x_304_; lean_object* v___x_305_; 
v_a_303_ = lean_ctor_get(v___x_302_, 0);
lean_inc(v_a_303_);
lean_dec_ref_known(v___x_302_, 1);
v___x_304_ = lean_unbox(v_a_303_);
lean_dec(v_a_303_);
v___x_305_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(v___x_299_, v___x_300_, v___x_304_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
v___y_266_ = v___x_305_;
goto v___jp_265_;
}
else
{
v___y_266_ = v___x_302_;
goto v___jp_265_;
}
}
}
}
}
}
}
v___jp_306_:
{
if (lean_obj_tag(v___y_307_) == 0)
{
lean_dec_ref_known(v___y_307_, 1);
goto v___jp_295_;
}
else
{
lean_dec_ref(v_fixpointType_222_);
lean_dec_ref(v_fixedParamPerms_221_);
lean_dec(v_declNameNonRec_220_);
lean_dec_ref(v_preDefs_219_);
return v___y_307_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___boxed(lean_object* v_preDefs_317_, lean_object* v_declNameNonRec_318_, lean_object* v_fixedParamPerms_319_, lean_object* v_fixpointType_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v___y_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo(v_preDefs_317_, v_declNameNonRec_318_, v_fixedParamPerms_319_, v_fixpointType_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4(lean_object* v_as_327_, size_t v_i_328_, size_t v_stop_329_, lean_object* v_b_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_as_327_, v_i_328_, v_stop_329_, v_b_330_, v___y_333_, v___y_334_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___boxed(lean_object* v_as_337_, lean_object* v_i_338_, lean_object* v_stop_339_, lean_object* v_b_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
size_t v_i_boxed_346_; size_t v_stop_boxed_347_; lean_object* v_res_348_; 
v_i_boxed_346_ = lean_unbox_usize(v_i_338_);
lean_dec(v_i_338_);
v_stop_boxed_347_ = lean_unbox_usize(v_stop_339_);
lean_dec(v_stop_339_);
v_res_348_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4(v_as_337_, v_i_boxed_346_, v_stop_boxed_347_, v_b_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
lean_dec_ref(v_as_337_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(lean_object* v_mvarId_349_, lean_object* v_x_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_349_, v_x_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_364_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_364_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_357_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
else
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
v_a_365_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_356_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_356_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg___boxed(lean_object* v_mvarId_373_, lean_object* v_x_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_373_, v_x_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0(lean_object* v_00_u03b1_381_, lean_object* v_mvarId_382_, lean_object* v_x_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_382_, v_x_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___boxed(lean_object* v_00_u03b1_390_, lean_object* v_mvarId_391_, lean_object* v_x_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0(v_00_u03b1_390_, v_mvarId_391_, v_x_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
return v_res_398_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0(lean_object* v_declName_399_, lean_object* v_declNameNonRec_400_, lean_object* v_n_401_){
_start:
{
uint8_t v___x_402_; 
v___x_402_ = lean_name_eq(v_n_401_, v_declName_399_);
if (v___x_402_ == 0)
{
uint8_t v___x_403_; 
v___x_403_ = lean_name_eq(v_n_401_, v_declNameNonRec_400_);
return v___x_403_;
}
else
{
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0___boxed(lean_object* v_declName_404_, lean_object* v_declNameNonRec_405_, lean_object* v_n_406_){
_start:
{
uint8_t v_res_407_; lean_object* v_r_408_; 
v_res_407_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0(v_declName_404_, v_declNameNonRec_405_, v_n_406_);
lean_dec(v_n_406_);
lean_dec(v_declNameNonRec_405_);
lean_dec(v_declName_404_);
v_r_408_ = lean_box(v_res_407_);
return v_r_408_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5));
v___x_419_ = l_Lean_MessageData_ofFormat(v___x_418_);
return v___x_419_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_420_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6);
v___x_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1(lean_object* v_mvarId_422_, lean_object* v___f_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v___x_429_; 
lean_inc(v_mvarId_422_);
v___x_429_ = l_Lean_MVarId_getType_x27(v_mvarId_422_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_429_, 1);
v___x_431_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1));
v___x_432_ = lean_unsigned_to_nat(3u);
v___x_433_ = l_Lean_Expr_isAppOfArity(v_a_430_, v___x_431_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
lean_dec(v_a_430_);
lean_dec_ref(v___f_423_);
v___x_434_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3));
v___x_435_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7);
v___x_436_ = l_Lean_Meta_throwTacticEx___redArg(v___x_434_, v_mvarId_422_, v___x_435_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
return v___x_436_;
}
else
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; uint8_t v___x_440_; lean_object* v___x_441_; 
v___x_437_ = l_Lean_Expr_appFn_x21(v_a_430_);
v___x_438_ = l_Lean_Expr_appArg_x21(v___x_437_);
lean_dec_ref(v___x_437_);
v___x_439_ = l_Lean_Expr_appArg_x21(v_a_430_);
lean_dec(v_a_430_);
v___x_440_ = 0;
v___x_441_ = l_Lean_Meta_deltaExpand(v___x_438_, v___f_423_, v___x_440_, v___y_426_, v___y_427_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v_a_442_; lean_object* v___x_443_; 
v_a_442_ = lean_ctor_get(v___x_441_, 0);
lean_inc(v_a_442_);
lean_dec_ref_known(v___x_441_, 1);
v___x_443_ = l_Lean_Meta_mkEq(v_a_442_, v___x_439_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_445_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref_known(v___x_443_, 1);
v___x_445_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_422_, v_a_444_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
return v___x_445_;
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_dec(v_mvarId_422_);
v_a_446_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___x_443_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_443_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
lean_dec_ref(v___x_439_);
lean_dec(v_mvarId_422_);
v_a_454_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_441_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_441_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
else
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_469_; 
lean_dec_ref(v___f_423_);
lean_dec(v_mvarId_422_);
v_a_462_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_469_ == 0)
{
v___x_464_ = v___x_429_;
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_429_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_467_; 
if (v_isShared_465_ == 0)
{
v___x_467_ = v___x_464_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_462_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___boxed(lean_object* v_mvarId_470_, lean_object* v___f_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1(v_mvarId_470_, v___f_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(lean_object* v_declName_478_, lean_object* v_declNameNonRec_479_, lean_object* v_mvarId_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_){
_start:
{
lean_object* v___f_486_; lean_object* v___f_487_; lean_object* v___x_488_; 
v___f_486_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0___boxed), 3, 2);
lean_closure_set(v___f_486_, 0, v_declName_478_);
lean_closure_set(v___f_486_, 1, v_declNameNonRec_479_);
lean_inc(v_mvarId_480_);
v___f_487_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___boxed), 7, 2);
lean_closure_set(v___f_487_, 0, v_mvarId_480_);
lean_closure_set(v___f_487_, 1, v___f_486_);
v___x_488_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_480_, v___f_487_, v_a_481_, v_a_482_, v_a_483_, v_a_484_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___boxed(lean_object* v_declName_489_, lean_object* v_declNameNonRec_490_, lean_object* v_mvarId_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(v_declName_489_, v_declNameNonRec_490_, v_mvarId_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_);
lean_dec(v_a_495_);
lean_dec_ref(v_a_494_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__1(lean_object* v_msg_498_){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = l_Lean_instInhabitedExpr;
v___x_500_ = lean_panic_fn_borrowed(v___x_499_, v_msg_498_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0(lean_object* v_msgData_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v___x_507_; lean_object* v_env_508_; lean_object* v___x_509_; lean_object* v_toCold_510_; lean_object* v_mctx_511_; lean_object* v_lctx_512_; lean_object* v_options_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_507_ = lean_st_ref_get(v___y_505_);
v_env_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc_ref(v_env_508_);
lean_dec(v___x_507_);
v___x_509_ = lean_st_ref_get(v___y_503_);
v_toCold_510_ = lean_ctor_get(v___y_504_, 0);
v_mctx_511_ = lean_ctor_get(v___x_509_, 0);
lean_inc_ref(v_mctx_511_);
lean_dec(v___x_509_);
v_lctx_512_ = lean_ctor_get(v___y_502_, 2);
v_options_513_ = lean_ctor_get(v_toCold_510_, 2);
lean_inc_ref(v_options_513_);
lean_inc_ref(v_lctx_512_);
v___x_514_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_514_, 0, v_env_508_);
lean_ctor_set(v___x_514_, 1, v_mctx_511_);
lean_ctor_set(v___x_514_, 2, v_lctx_512_);
lean_ctor_set(v___x_514_, 3, v_options_513_);
v___x_515_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
lean_ctor_set(v___x_515_, 1, v_msgData_501_);
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0___boxed(lean_object* v_msgData_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0(v_msgData_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(lean_object* v_msg_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_){
_start:
{
lean_object* v_ref_530_; lean_object* v___x_531_; lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_540_; 
v_ref_530_ = lean_ctor_get(v___y_527_, 2);
v___x_531_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0(v_msg_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_540_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_540_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_540_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v___x_538_; 
lean_inc(v_ref_530_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v_ref_530_);
lean_ctor_set(v___x_536_, 1, v_a_532_);
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 1);
lean_ctor_set(v___x_534_, 0, v___x_536_);
v___x_538_ = v___x_534_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg___boxed(lean_object* v_msg_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(v_msg_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
return v_res_547_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5));
v___x_561_ = l_Lean_stringToMessageData(v___x_560_);
return v___x_561_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = lean_unsigned_to_nat(0u);
v___x_569_ = l_Lean_Expr_bvar___override(v___x_568_);
return v___x_569_;
}
}
static size_t _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12(void){
_start:
{
lean_object* v___x_570_; size_t v___x_571_; 
v___x_570_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11);
v___x_571_ = lean_ptr_addr(v___x_570_);
return v___x_571_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_575_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__15));
v___x_576_ = lean_unsigned_to_nat(18u);
v___x_577_ = lean_unsigned_to_nat(2051u);
v___x_578_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__14));
v___x_579_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__13));
v___x_580_ = l_mkPanicMessageWithDecl(v___x_579_, v___x_578_, v___x_577_, v___x_576_, v___x_575_);
return v___x_580_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21(void){
_start:
{
lean_object* v___x_589_; lean_object* v_dummy_590_; 
v___x_589_ = lean_box(0);
v_dummy_590_ = l_Lean_Expr_sort___override(v___x_589_);
return v_dummy_590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(lean_object* v_lhs_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_602_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2));
v___x_603_ = lean_unsigned_to_nat(4u);
v___x_604_ = l_Lean_Expr_isAppOfArity(v_lhs_596_, v___x_602_, v___x_603_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4));
v___x_606_ = l_Lean_Expr_isAppOfArity(v_lhs_596_, v___x_605_, v___x_603_);
if (v___x_606_ == 0)
{
uint8_t v___x_607_; 
v___x_607_ = l_Lean_Expr_isApp(v_lhs_596_);
if (v___x_607_ == 0)
{
uint8_t v___x_608_; 
v___x_608_ = l_Lean_Expr_isProj(v_lhs_596_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_609_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6);
v___x_610_ = l_Lean_MessageData_ofExpr(v_lhs_596_);
v___x_611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_609_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(v___x_611_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
return v___x_612_;
}
else
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = l_Lean_Expr_projExpr_x21(v_lhs_596_);
lean_inc(v_a_600_);
lean_inc_ref(v_a_599_);
lean_inc(v_a_598_);
lean_inc_ref(v_a_597_);
lean_inc_ref(v___x_613_);
v___x_614_ = lean_infer_type(v___x_613_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_616_; uint8_t v___x_617_; lean_object* v___y_619_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_615_);
lean_dec_ref_known(v___x_614_, 1);
v___x_616_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8));
v___x_617_ = 0;
if (lean_obj_tag(v_lhs_596_) == 11)
{
lean_object* v_typeName_629_; lean_object* v_idx_630_; lean_object* v_struct_631_; lean_object* v___x_632_; size_t v___x_633_; size_t v___x_634_; uint8_t v___x_635_; 
v_typeName_629_ = lean_ctor_get(v_lhs_596_, 0);
v_idx_630_ = lean_ctor_get(v_lhs_596_, 1);
v_struct_631_ = lean_ctor_get(v_lhs_596_, 2);
v___x_632_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11);
v___x_633_ = lean_ptr_addr(v_struct_631_);
v___x_634_ = lean_usize_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12);
v___x_635_ = lean_usize_dec_eq(v___x_633_, v___x_634_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; 
lean_inc(v_idx_630_);
lean_inc(v_typeName_629_);
lean_dec_ref_known(v_lhs_596_, 3);
v___x_636_ = l_Lean_Expr_proj___override(v_typeName_629_, v_idx_630_, v___x_632_);
v___y_619_ = v___x_636_;
goto v___jp_618_;
}
else
{
v___y_619_ = v_lhs_596_;
goto v___jp_618_;
}
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; 
lean_dec_ref(v_lhs_596_);
v___x_637_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16);
v___x_638_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__1(v___x_637_);
v___y_619_ = v___x_638_;
goto v___jp_618_;
}
v___jp_618_:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = l_Lean_mkLambda(v___x_616_, v___x_617_, v_a_615_, v___y_619_);
v___x_621_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v___x_613_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc(v_a_622_);
lean_dec_ref_known(v___x_621_, 1);
v___x_623_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10));
v___x_624_ = lean_unsigned_to_nat(2u);
v___x_625_ = lean_mk_empty_array_with_capacity(v___x_624_);
v___x_626_ = lean_array_push(v___x_625_, v___x_620_);
v___x_627_ = lean_array_push(v___x_626_, v_a_622_);
v___x_628_ = l_Lean_Meta_mkAppM(v___x_623_, v___x_627_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
return v___x_628_;
}
else
{
lean_dec_ref(v___x_620_);
return v___x_621_;
}
}
}
else
{
lean_dec_ref(v___x_613_);
lean_dec_ref(v_lhs_596_);
return v___x_614_;
}
}
}
else
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = l_Lean_Expr_appFn_x21(v_lhs_596_);
v___x_640_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v___x_639_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
lean_dec_ref_known(v___x_640_, 1);
v___x_642_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__18));
v___x_643_ = l_Lean_Expr_appArg_x21(v_lhs_596_);
lean_dec_ref(v_lhs_596_);
v___x_644_ = lean_unsigned_to_nat(2u);
v___x_645_ = lean_mk_empty_array_with_capacity(v___x_644_);
v___x_646_ = lean_array_push(v___x_645_, v_a_641_);
v___x_647_ = lean_array_push(v___x_646_, v___x_643_);
v___x_648_ = l_Lean_Meta_mkAppM(v___x_642_, v___x_647_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
return v___x_648_;
}
else
{
lean_dec_ref(v_lhs_596_);
return v___x_640_;
}
}
}
else
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v_dummy_653_; lean_object* v_nargs_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_649_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20));
v___x_650_ = l_Lean_Expr_getAppFn(v_lhs_596_);
v___x_651_ = l_Lean_Expr_constLevels_x21(v___x_650_);
lean_dec_ref(v___x_650_);
v___x_652_ = l_Lean_mkConst(v___x_649_, v___x_651_);
v_dummy_653_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21);
v_nargs_654_ = l_Lean_Expr_getAppNumArgs(v_lhs_596_);
lean_inc(v_nargs_654_);
v___x_655_ = lean_mk_array(v_nargs_654_, v_dummy_653_);
v___x_656_ = lean_unsigned_to_nat(1u);
v___x_657_ = lean_nat_sub(v_nargs_654_, v___x_656_);
lean_dec(v_nargs_654_);
v___x_658_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_lhs_596_, v___x_655_, v___x_657_);
v___x_659_ = l_Lean_mkAppN(v___x_652_, v___x_658_);
lean_dec_ref(v___x_658_);
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
return v___x_660_;
}
}
else
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v_dummy_665_; lean_object* v_nargs_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_661_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23));
v___x_662_ = l_Lean_Expr_getAppFn(v_lhs_596_);
v___x_663_ = l_Lean_Expr_constLevels_x21(v___x_662_);
lean_dec_ref(v___x_662_);
v___x_664_ = l_Lean_mkConst(v___x_661_, v___x_663_);
v_dummy_665_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21);
v_nargs_666_ = l_Lean_Expr_getAppNumArgs(v_lhs_596_);
lean_inc(v_nargs_666_);
v___x_667_ = lean_mk_array(v_nargs_666_, v_dummy_665_);
v___x_668_ = lean_unsigned_to_nat(1u);
v___x_669_ = lean_nat_sub(v_nargs_666_, v___x_668_);
lean_dec(v_nargs_666_);
v___x_670_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_lhs_596_, v___x_667_, v___x_669_);
v___x_671_ = l_Lean_mkAppN(v___x_664_, v___x_670_);
lean_dec_ref(v___x_670_);
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___boxed(lean_object* v_lhs_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v___y_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v_lhs_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_);
lean_dec(v_a_677_);
lean_dec_ref(v_a_676_);
lean_dec(v_a_675_);
lean_dec_ref(v_a_674_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0(lean_object* v_00_u03b1_680_, lean_object* v_msg_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(v_msg_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___boxed(lean_object* v_00_u03b1_688_, lean_object* v_msg_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0(v_00_u03b1_688_, v_msg_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(lean_object* v_msg_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___f_703_; lean_object* v___x_1516__overap_704_; lean_object* v___x_705_; 
v___f_703_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0));
v___x_1516__overap_704_ = lean_panic_fn_borrowed(v___f_703_, v_msg_697_);
lean_inc(v___y_701_);
lean_inc_ref(v___y_700_);
lean_inc(v___y_699_);
lean_inc_ref(v___y_698_);
v___x_705_ = lean_apply_5(v___x_1516__overap_704_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, lean_box(0));
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___boxed(lean_object* v_msg_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v_msg_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_713_, lean_object* v_x_714_, lean_object* v_x_715_, lean_object* v_x_716_){
_start:
{
lean_object* v_ks_717_; lean_object* v_vs_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_742_; 
v_ks_717_ = lean_ctor_get(v_x_713_, 0);
v_vs_718_ = lean_ctor_get(v_x_713_, 1);
v_isSharedCheck_742_ = !lean_is_exclusive(v_x_713_);
if (v_isSharedCheck_742_ == 0)
{
v___x_720_ = v_x_713_;
v_isShared_721_ = v_isSharedCheck_742_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_vs_718_);
lean_inc(v_ks_717_);
lean_dec(v_x_713_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_742_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_722_; uint8_t v___x_723_; 
v___x_722_ = lean_array_get_size(v_ks_717_);
v___x_723_ = lean_nat_dec_lt(v_x_714_, v___x_722_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_727_; 
lean_dec(v_x_714_);
v___x_724_ = lean_array_push(v_ks_717_, v_x_715_);
v___x_725_ = lean_array_push(v_vs_718_, v_x_716_);
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 1, v___x_725_);
lean_ctor_set(v___x_720_, 0, v___x_724_);
v___x_727_ = v___x_720_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v___x_724_);
lean_ctor_set(v_reuseFailAlloc_728_, 1, v___x_725_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
else
{
lean_object* v_k_x27_729_; uint8_t v___x_730_; 
v_k_x27_729_ = lean_array_fget_borrowed(v_ks_717_, v_x_714_);
v___x_730_ = l_Lean_instBEqMVarId_beq(v_x_715_, v_k_x27_729_);
if (v___x_730_ == 0)
{
lean_object* v___x_732_; 
if (v_isShared_721_ == 0)
{
v___x_732_ = v___x_720_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_ks_717_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_vs_718_);
v___x_732_ = v_reuseFailAlloc_736_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_733_ = lean_unsigned_to_nat(1u);
v___x_734_ = lean_nat_add(v_x_714_, v___x_733_);
lean_dec(v_x_714_);
v_x_713_ = v___x_732_;
v_x_714_ = v___x_734_;
goto _start;
}
}
else
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v___x_737_ = lean_array_fset(v_ks_717_, v_x_714_, v_x_715_);
v___x_738_ = lean_array_fset(v_vs_718_, v_x_714_, v_x_716_);
lean_dec(v_x_714_);
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 1, v___x_738_);
lean_ctor_set(v___x_720_, 0, v___x_737_);
v___x_740_ = v___x_720_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_737_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_738_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(lean_object* v_n_743_, lean_object* v_k_744_, lean_object* v_v_745_){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_unsigned_to_nat(0u);
v___x_747_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_n_743_, v___x_746_, v_k_744_, v_v_745_);
return v___x_747_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(lean_object* v_x_749_, size_t v_x_750_, size_t v_x_751_, lean_object* v_x_752_, lean_object* v_x_753_){
_start:
{
if (lean_obj_tag(v_x_749_) == 0)
{
lean_object* v_es_754_; size_t v___x_755_; size_t v___x_756_; lean_object* v_j_757_; lean_object* v___x_758_; uint8_t v___x_759_; 
v_es_754_ = lean_ctor_get(v_x_749_, 0);
v___x_755_ = ((size_t)31ULL);
v___x_756_ = lean_usize_land(v_x_750_, v___x_755_);
v_j_757_ = lean_usize_to_nat(v___x_756_);
v___x_758_ = lean_array_get_size(v_es_754_);
v___x_759_ = lean_nat_dec_lt(v_j_757_, v___x_758_);
if (v___x_759_ == 0)
{
lean_dec(v_j_757_);
lean_dec(v_x_753_);
lean_dec(v_x_752_);
return v_x_749_;
}
else
{
lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_798_; 
lean_inc_ref(v_es_754_);
v_isSharedCheck_798_ = !lean_is_exclusive(v_x_749_);
if (v_isSharedCheck_798_ == 0)
{
lean_object* v_unused_799_; 
v_unused_799_ = lean_ctor_get(v_x_749_, 0);
lean_dec(v_unused_799_);
v___x_761_ = v_x_749_;
v_isShared_762_ = v_isSharedCheck_798_;
goto v_resetjp_760_;
}
else
{
lean_dec(v_x_749_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_798_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v_v_763_; lean_object* v___x_764_; lean_object* v_xs_x27_765_; lean_object* v___y_767_; 
v_v_763_ = lean_array_fget(v_es_754_, v_j_757_);
v___x_764_ = lean_box(0);
v_xs_x27_765_ = lean_array_fset(v_es_754_, v_j_757_, v___x_764_);
switch(lean_obj_tag(v_v_763_))
{
case 0:
{
lean_object* v_key_772_; lean_object* v_val_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_783_; 
v_key_772_ = lean_ctor_get(v_v_763_, 0);
v_val_773_ = lean_ctor_get(v_v_763_, 1);
v_isSharedCheck_783_ = !lean_is_exclusive(v_v_763_);
if (v_isSharedCheck_783_ == 0)
{
v___x_775_ = v_v_763_;
v_isShared_776_ = v_isSharedCheck_783_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_val_773_);
lean_inc(v_key_772_);
lean_dec(v_v_763_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_783_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
uint8_t v___x_777_; 
v___x_777_ = l_Lean_instBEqMVarId_beq(v_x_752_, v_key_772_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; 
lean_del_object(v___x_775_);
v___x_778_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_772_, v_val_773_, v_x_752_, v_x_753_);
v___x_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
v___y_767_ = v___x_779_;
goto v___jp_766_;
}
else
{
lean_object* v___x_781_; 
lean_dec(v_val_773_);
lean_dec(v_key_772_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 1, v_x_753_);
lean_ctor_set(v___x_775_, 0, v_x_752_);
v___x_781_ = v___x_775_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_x_752_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v_x_753_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
v___y_767_ = v___x_781_;
goto v___jp_766_;
}
}
}
}
case 1:
{
lean_object* v_node_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_796_; 
v_node_784_ = lean_ctor_get(v_v_763_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v_v_763_);
if (v_isSharedCheck_796_ == 0)
{
v___x_786_ = v_v_763_;
v_isShared_787_ = v_isSharedCheck_796_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_node_784_);
lean_dec(v_v_763_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_796_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
size_t v___x_788_; size_t v___x_789_; size_t v___x_790_; size_t v___x_791_; lean_object* v___x_792_; lean_object* v___x_794_; 
v___x_788_ = ((size_t)5ULL);
v___x_789_ = lean_usize_shift_right(v_x_750_, v___x_788_);
v___x_790_ = ((size_t)1ULL);
v___x_791_ = lean_usize_add(v_x_751_, v___x_790_);
v___x_792_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_node_784_, v___x_789_, v___x_791_, v_x_752_, v_x_753_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v___x_792_);
v___x_794_ = v___x_786_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
v___y_767_ = v___x_794_;
goto v___jp_766_;
}
}
}
default: 
{
lean_object* v___x_797_; 
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v_x_752_);
lean_ctor_set(v___x_797_, 1, v_x_753_);
v___y_767_ = v___x_797_;
goto v___jp_766_;
}
}
v___jp_766_:
{
lean_object* v___x_768_; lean_object* v___x_770_; 
v___x_768_ = lean_array_fset(v_xs_x27_765_, v_j_757_, v___y_767_);
lean_dec(v_j_757_);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 0, v___x_768_);
v___x_770_ = v___x_761_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v___x_768_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
}
else
{
lean_object* v_ks_800_; lean_object* v_vs_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_819_; 
v_ks_800_ = lean_ctor_get(v_x_749_, 0);
v_vs_801_ = lean_ctor_get(v_x_749_, 1);
v_isSharedCheck_819_ = !lean_is_exclusive(v_x_749_);
if (v_isSharedCheck_819_ == 0)
{
v___x_803_ = v_x_749_;
v_isShared_804_ = v_isSharedCheck_819_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_vs_801_);
lean_inc(v_ks_800_);
lean_dec(v_x_749_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_819_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_ks_800_);
lean_ctor_set(v_reuseFailAlloc_818_, 1, v_vs_801_);
v___x_806_ = v_reuseFailAlloc_818_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
lean_object* v_newNode_807_; size_t v___x_808_; uint8_t v___x_809_; 
v_newNode_807_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(v___x_806_, v_x_752_, v_x_753_);
v___x_808_ = ((size_t)7ULL);
v___x_809_ = lean_usize_dec_le(v___x_808_, v_x_751_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_810_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_807_);
v___x_811_ = lean_unsigned_to_nat(4u);
v___x_812_ = lean_nat_dec_lt(v___x_810_, v___x_811_);
lean_dec(v___x_810_);
if (v___x_812_ == 0)
{
lean_object* v_ks_813_; lean_object* v_vs_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v_ks_813_ = lean_ctor_get(v_newNode_807_, 0);
lean_inc_ref(v_ks_813_);
v_vs_814_ = lean_ctor_get(v_newNode_807_, 1);
lean_inc_ref(v_vs_814_);
lean_dec_ref(v_newNode_807_);
v___x_815_ = lean_unsigned_to_nat(0u);
v___x_816_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0);
v___x_817_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(v_x_751_, v_ks_813_, v_vs_814_, v___x_815_, v___x_816_);
lean_dec_ref(v_vs_814_);
lean_dec_ref(v_ks_813_);
return v___x_817_;
}
else
{
return v_newNode_807_;
}
}
else
{
return v_newNode_807_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(size_t v_depth_820_, lean_object* v_keys_821_, lean_object* v_vals_822_, lean_object* v_i_823_, lean_object* v_entries_824_){
_start:
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = lean_array_get_size(v_keys_821_);
v___x_826_ = lean_nat_dec_lt(v_i_823_, v___x_825_);
if (v___x_826_ == 0)
{
lean_dec(v_i_823_);
return v_entries_824_;
}
else
{
lean_object* v_k_827_; lean_object* v_v_828_; uint64_t v___x_829_; size_t v_h_830_; size_t v___x_831_; lean_object* v___x_832_; size_t v___x_833_; size_t v___x_834_; size_t v___x_835_; size_t v_h_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v_k_827_ = lean_array_fget_borrowed(v_keys_821_, v_i_823_);
v_v_828_ = lean_array_fget_borrowed(v_vals_822_, v_i_823_);
v___x_829_ = l_Lean_instHashableMVarId_hash(v_k_827_);
v_h_830_ = lean_uint64_to_usize(v___x_829_);
v___x_831_ = ((size_t)5ULL);
v___x_832_ = lean_unsigned_to_nat(1u);
v___x_833_ = ((size_t)1ULL);
v___x_834_ = lean_usize_sub(v_depth_820_, v___x_833_);
v___x_835_ = lean_usize_mul(v___x_831_, v___x_834_);
v_h_836_ = lean_usize_shift_right(v_h_830_, v___x_835_);
v___x_837_ = lean_nat_add(v_i_823_, v___x_832_);
lean_dec(v_i_823_);
lean_inc(v_v_828_);
lean_inc(v_k_827_);
v___x_838_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_entries_824_, v_h_836_, v_depth_820_, v_k_827_, v_v_828_);
v_i_823_ = v___x_837_;
v_entries_824_ = v___x_838_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_depth_840_, lean_object* v_keys_841_, lean_object* v_vals_842_, lean_object* v_i_843_, lean_object* v_entries_844_){
_start:
{
size_t v_depth_boxed_845_; lean_object* v_res_846_; 
v_depth_boxed_845_ = lean_unbox_usize(v_depth_840_);
lean_dec(v_depth_840_);
v_res_846_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(v_depth_boxed_845_, v_keys_841_, v_vals_842_, v_i_843_, v_entries_844_);
lean_dec_ref(v_vals_842_);
lean_dec_ref(v_keys_841_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_847_, lean_object* v_x_848_, lean_object* v_x_849_, lean_object* v_x_850_, lean_object* v_x_851_){
_start:
{
size_t v_x_2103__boxed_852_; size_t v_x_2104__boxed_853_; lean_object* v_res_854_; 
v_x_2103__boxed_852_ = lean_unbox_usize(v_x_848_);
lean_dec(v_x_848_);
v_x_2104__boxed_853_ = lean_unbox_usize(v_x_849_);
lean_dec(v_x_849_);
v_res_854_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_x_847_, v_x_2103__boxed_852_, v_x_2104__boxed_853_, v_x_850_, v_x_851_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(lean_object* v_x_855_, lean_object* v_x_856_, lean_object* v_x_857_){
_start:
{
uint64_t v___x_858_; size_t v___x_859_; size_t v___x_860_; lean_object* v___x_861_; 
v___x_858_ = l_Lean_instHashableMVarId_hash(v_x_856_);
v___x_859_ = lean_uint64_to_usize(v___x_858_);
v___x_860_ = ((size_t)1ULL);
v___x_861_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_x_855_, v___x_859_, v___x_860_, v_x_856_, v_x_857_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(lean_object* v_mvarId_862_, lean_object* v_val_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_866_; lean_object* v_mctx_867_; lean_object* v_cache_868_; lean_object* v_zetaDeltaFVarIds_869_; lean_object* v_postponed_870_; lean_object* v_diag_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_900_; 
v___x_866_ = lean_st_ref_take(v___y_864_);
v_mctx_867_ = lean_ctor_get(v___x_866_, 0);
v_cache_868_ = lean_ctor_get(v___x_866_, 1);
v_zetaDeltaFVarIds_869_ = lean_ctor_get(v___x_866_, 2);
v_postponed_870_ = lean_ctor_get(v___x_866_, 3);
v_diag_871_ = lean_ctor_get(v___x_866_, 4);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_900_ == 0)
{
v___x_873_ = v___x_866_;
v_isShared_874_ = v_isSharedCheck_900_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_diag_871_);
lean_inc(v_postponed_870_);
lean_inc(v_zetaDeltaFVarIds_869_);
lean_inc(v_cache_868_);
lean_inc(v_mctx_867_);
lean_dec(v___x_866_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_900_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v_depth_875_; lean_object* v_levelAssignDepth_876_; lean_object* v_lmvarCounter_877_; lean_object* v_mvarCounter_878_; lean_object* v_lDecls_879_; lean_object* v_decls_880_; lean_object* v_userNames_881_; lean_object* v_lAssignment_882_; lean_object* v_eAssignment_883_; lean_object* v_dAssignment_884_; lean_object* v_instanceTypedMVars_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_899_; 
v_depth_875_ = lean_ctor_get(v_mctx_867_, 0);
v_levelAssignDepth_876_ = lean_ctor_get(v_mctx_867_, 1);
v_lmvarCounter_877_ = lean_ctor_get(v_mctx_867_, 2);
v_mvarCounter_878_ = lean_ctor_get(v_mctx_867_, 3);
v_lDecls_879_ = lean_ctor_get(v_mctx_867_, 4);
v_decls_880_ = lean_ctor_get(v_mctx_867_, 5);
v_userNames_881_ = lean_ctor_get(v_mctx_867_, 6);
v_lAssignment_882_ = lean_ctor_get(v_mctx_867_, 7);
v_eAssignment_883_ = lean_ctor_get(v_mctx_867_, 8);
v_dAssignment_884_ = lean_ctor_get(v_mctx_867_, 9);
v_instanceTypedMVars_885_ = lean_ctor_get(v_mctx_867_, 10);
v_isSharedCheck_899_ = !lean_is_exclusive(v_mctx_867_);
if (v_isSharedCheck_899_ == 0)
{
v___x_887_ = v_mctx_867_;
v_isShared_888_ = v_isSharedCheck_899_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_instanceTypedMVars_885_);
lean_inc(v_dAssignment_884_);
lean_inc(v_eAssignment_883_);
lean_inc(v_lAssignment_882_);
lean_inc(v_userNames_881_);
lean_inc(v_decls_880_);
lean_inc(v_lDecls_879_);
lean_inc(v_mvarCounter_878_);
lean_inc(v_lmvarCounter_877_);
lean_inc(v_levelAssignDepth_876_);
lean_inc(v_depth_875_);
lean_dec(v_mctx_867_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_899_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_892_; 
v___x_889_ = lean_box(0);
v___x_890_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(v_eAssignment_883_, v_mvarId_862_, v_val_863_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 8, v___x_890_);
v___x_892_ = v___x_887_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_depth_875_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_levelAssignDepth_876_);
lean_ctor_set(v_reuseFailAlloc_898_, 2, v_lmvarCounter_877_);
lean_ctor_set(v_reuseFailAlloc_898_, 3, v_mvarCounter_878_);
lean_ctor_set(v_reuseFailAlloc_898_, 4, v_lDecls_879_);
lean_ctor_set(v_reuseFailAlloc_898_, 5, v_decls_880_);
lean_ctor_set(v_reuseFailAlloc_898_, 6, v_userNames_881_);
lean_ctor_set(v_reuseFailAlloc_898_, 7, v_lAssignment_882_);
lean_ctor_set(v_reuseFailAlloc_898_, 8, v___x_890_);
lean_ctor_set(v_reuseFailAlloc_898_, 9, v_dAssignment_884_);
lean_ctor_set(v_reuseFailAlloc_898_, 10, v_instanceTypedMVars_885_);
v___x_892_ = v_reuseFailAlloc_898_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
lean_object* v___x_894_; 
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 0, v___x_892_);
v___x_894_ = v___x_873_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_892_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v_cache_868_);
lean_ctor_set(v_reuseFailAlloc_897_, 2, v_zetaDeltaFVarIds_869_);
lean_ctor_set(v_reuseFailAlloc_897_, 3, v_postponed_870_);
lean_ctor_set(v_reuseFailAlloc_897_, 4, v_diag_871_);
v___x_894_ = v_reuseFailAlloc_897_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = lean_st_ref_put(v___y_864_, v___x_894_);
v___x_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_896_, 0, v___x_889_);
return v___x_896_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg___boxed(lean_object* v_mvarId_901_, lean_object* v_val_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(v_mvarId_901_, v_val_902_, v___y_903_);
lean_dec(v___y_903_);
return v_res_905_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3(void){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_909_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2));
v___x_910_ = lean_unsigned_to_nat(41u);
v___x_911_ = lean_unsigned_to_nat(70u);
v___x_912_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1));
v___x_913_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0));
v___x_914_ = l_mkPanicMessageWithDecl(v___x_913_, v___x_912_, v___x_911_, v___x_910_, v___x_909_);
return v___x_914_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_915_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2));
v___x_916_ = lean_unsigned_to_nat(51u);
v___x_917_ = lean_unsigned_to_nat(72u);
v___x_918_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1));
v___x_919_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0));
v___x_920_ = l_mkPanicMessageWithDecl(v___x_919_, v___x_918_, v___x_917_, v___x_916_, v___x_915_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0(lean_object* v_mvarId_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
lean_object* v___x_927_; 
lean_inc(v_mvarId_921_);
v___x_927_ = l_Lean_MVarId_getType_x27(v_mvarId_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; lean_object* v___x_929_; lean_object* v___x_930_; uint8_t v___x_931_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_928_);
lean_dec_ref_known(v___x_927_, 1);
v___x_929_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1));
v___x_930_ = lean_unsigned_to_nat(3u);
v___x_931_ = l_Lean_Expr_isAppOfArity(v_a_928_, v___x_929_, v___x_930_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; lean_object* v___x_933_; 
lean_dec(v_a_928_);
lean_dec(v_mvarId_921_);
v___x_932_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3);
v___x_933_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v___x_932_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
return v___x_933_;
}
else
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_934_ = l_Lean_Expr_appFn_x21(v_a_928_);
v___x_935_ = l_Lean_Expr_appArg_x21(v___x_934_);
lean_dec_ref(v___x_934_);
v___x_936_ = l_Lean_Expr_appArg_x21(v_a_928_);
lean_dec(v_a_928_);
v___x_937_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v___x_935_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_939_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc_n(v_a_938_, 2);
lean_dec_ref_known(v___x_937_, 1);
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
lean_inc(v___y_923_);
lean_inc_ref(v___y_922_);
v___x_939_ = lean_infer_type(v_a_938_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; uint8_t v___x_941_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_939_, 1);
v___x_941_ = l_Lean_Expr_isAppOfArity(v_a_940_, v___x_929_, v___x_930_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; 
lean_dec(v_a_940_);
lean_dec(v_a_938_);
lean_dec_ref(v___x_936_);
lean_dec(v_mvarId_921_);
v___x_942_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4);
v___x_943_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v___x_942_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
return v___x_943_;
}
else
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = l_Lean_Expr_appArg_x21(v_a_940_);
lean_dec(v_a_940_);
v___x_945_ = l_Lean_Meta_mkEq(v___x_944_, v___x_936_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
lean_dec_ref_known(v___x_945_, 1);
v___x_947_ = lean_box(0);
v___x_948_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_946_, v___x_947_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_950_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc_n(v_a_949_, 2);
lean_dec_ref_known(v___x_948_, 1);
v___x_950_ = l_Lean_Meta_mkEqTrans(v_a_938_, v_a_949_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec_ref(v___y_922_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_960_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_a_951_);
lean_dec_ref_known(v___x_950_, 1);
v___x_952_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(v_mvarId_921_, v_a_951_, v___y_923_);
lean_dec(v___y_923_);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_960_ == 0)
{
lean_object* v_unused_961_; 
v_unused_961_ = lean_ctor_get(v___x_952_, 0);
lean_dec(v_unused_961_);
v___x_954_ = v___x_952_;
v_isShared_955_ = v_isSharedCheck_960_;
goto v_resetjp_953_;
}
else
{
lean_dec(v___x_952_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_960_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_956_ = l_Lean_Expr_mvarId_x21(v_a_949_);
lean_dec(v_a_949_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 0, v___x_956_);
v___x_958_ = v___x_954_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_956_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec(v_a_949_);
lean_dec(v___y_923_);
lean_dec(v_mvarId_921_);
v_a_962_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_950_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_950_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec(v_a_938_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v_mvarId_921_);
v_a_970_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_948_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_948_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec(v_a_938_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v_mvarId_921_);
v_a_978_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_945_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_945_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
}
else
{
lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
lean_dec(v_a_938_);
lean_dec_ref(v___x_936_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v_mvarId_921_);
v_a_986_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_993_ == 0)
{
v___x_988_ = v___x_939_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_dec(v___x_939_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_a_986_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
lean_dec_ref(v___x_936_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v_mvarId_921_);
v_a_994_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_937_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_937_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v_mvarId_921_);
v_a_1002_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_927_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_927_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___boxed(lean_object* v_mvarId_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0(v_mvarId_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(lean_object* v_mvarId_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_){
_start:
{
lean_object* v___f_1023_; lean_object* v___x_1024_; 
lean_inc(v_mvarId_1017_);
v___f_1023_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1023_, 0, v_mvarId_1017_);
v___x_1024_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_1017_, v___f_1023_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___boxed(lean_object* v_mvarId_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(v_mvarId_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_);
lean_dec(v_a_1029_);
lean_dec_ref(v_a_1028_);
lean_dec(v_a_1027_);
lean_dec_ref(v_a_1026_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1(lean_object* v_mvarId_1032_, lean_object* v_val_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(v_mvarId_1032_, v_val_1033_, v___y_1035_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___boxed(lean_object* v_mvarId_1040_, lean_object* v_val_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1(v_mvarId_1040_, v_val_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1(lean_object* v_00_u03b2_1048_, lean_object* v_x_1049_, lean_object* v_x_1050_, lean_object* v_x_1051_){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(v_x_1049_, v_x_1050_, v_x_1051_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_1053_, lean_object* v_x_1054_, size_t v_x_1055_, size_t v_x_1056_, lean_object* v_x_1057_, lean_object* v_x_1058_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_x_1054_, v_x_1055_, v_x_1056_, v_x_1057_, v_x_1058_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1060_, lean_object* v_x_1061_, lean_object* v_x_1062_, lean_object* v_x_1063_, lean_object* v_x_1064_, lean_object* v_x_1065_){
_start:
{
size_t v_x_2579__boxed_1066_; size_t v_x_2580__boxed_1067_; lean_object* v_res_1068_; 
v_x_2579__boxed_1066_ = lean_unbox_usize(v_x_1062_);
lean_dec(v_x_1062_);
v_x_2580__boxed_1067_ = lean_unbox_usize(v_x_1063_);
lean_dec(v_x_1063_);
v_res_1068_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2(v_00_u03b2_1060_, v_x_1061_, v_x_2579__boxed_1066_, v_x_2580__boxed_1067_, v_x_1064_, v_x_1065_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1069_, lean_object* v_n_1070_, lean_object* v_k_1071_, lean_object* v_v_1072_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(v_n_1070_, v_k_1071_, v_v_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1074_, size_t v_depth_1075_, lean_object* v_keys_1076_, lean_object* v_vals_1077_, lean_object* v_heq_1078_, lean_object* v_i_1079_, lean_object* v_entries_1080_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(v_depth_1075_, v_keys_1076_, v_vals_1077_, v_i_1079_, v_entries_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1082_, lean_object* v_depth_1083_, lean_object* v_keys_1084_, lean_object* v_vals_1085_, lean_object* v_heq_1086_, lean_object* v_i_1087_, lean_object* v_entries_1088_){
_start:
{
size_t v_depth_boxed_1089_; lean_object* v_res_1090_; 
v_depth_boxed_1089_ = lean_unbox_usize(v_depth_1083_);
lean_dec(v_depth_1083_);
v_res_1090_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4(v_00_u03b2_1082_, v_depth_boxed_1089_, v_keys_1084_, v_vals_1085_, v_heq_1086_, v_i_1087_, v_entries_1088_);
lean_dec_ref(v_vals_1085_);
lean_dec_ref(v_keys_1084_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1091_, lean_object* v_x_1092_, lean_object* v_x_1093_, lean_object* v_x_1094_, lean_object* v_x_1095_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_x_1092_, v_x_1093_, v_x_1094_, v_x_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(lean_object* v_e_1097_, lean_object* v___y_1098_){
_start:
{
uint8_t v___x_1100_; 
v___x_1100_ = l_Lean_Expr_hasMVar(v_e_1097_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_e_1097_);
return v___x_1101_;
}
else
{
lean_object* v___x_1102_; lean_object* v_mctx_1103_; lean_object* v___x_1104_; lean_object* v_fst_1105_; lean_object* v_snd_1106_; lean_object* v___x_1107_; lean_object* v_cache_1108_; lean_object* v_zetaDeltaFVarIds_1109_; lean_object* v_postponed_1110_; lean_object* v_diag_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1120_; 
v___x_1102_ = lean_st_ref_get(v___y_1098_);
v_mctx_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc_ref(v_mctx_1103_);
lean_dec(v___x_1102_);
v___x_1104_ = l_Lean_instantiateMVarsCore(v_mctx_1103_, v_e_1097_);
v_fst_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_fst_1105_);
v_snd_1106_ = lean_ctor_get(v___x_1104_, 1);
lean_inc(v_snd_1106_);
lean_dec_ref(v___x_1104_);
v___x_1107_ = lean_st_ref_take(v___y_1098_);
v_cache_1108_ = lean_ctor_get(v___x_1107_, 1);
v_zetaDeltaFVarIds_1109_ = lean_ctor_get(v___x_1107_, 2);
v_postponed_1110_ = lean_ctor_get(v___x_1107_, 3);
v_diag_1111_ = lean_ctor_get(v___x_1107_, 4);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1120_ == 0)
{
lean_object* v_unused_1121_; 
v_unused_1121_ = lean_ctor_get(v___x_1107_, 0);
lean_dec(v_unused_1121_);
v___x_1113_ = v___x_1107_;
v_isShared_1114_ = v_isSharedCheck_1120_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_diag_1111_);
lean_inc(v_postponed_1110_);
lean_inc(v_zetaDeltaFVarIds_1109_);
lean_inc(v_cache_1108_);
lean_dec(v___x_1107_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1120_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 0, v_snd_1106_);
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_snd_1106_);
lean_ctor_set(v_reuseFailAlloc_1119_, 1, v_cache_1108_);
lean_ctor_set(v_reuseFailAlloc_1119_, 2, v_zetaDeltaFVarIds_1109_);
lean_ctor_set(v_reuseFailAlloc_1119_, 3, v_postponed_1110_);
lean_ctor_set(v_reuseFailAlloc_1119_, 4, v_diag_1111_);
v___x_1116_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = lean_st_ref_put(v___y_1098_, v___x_1116_);
v___x_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1118_, 0, v_fst_1105_);
return v___x_1118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___boxed(lean_object* v_e_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v_e_1122_, v___y_1123_);
lean_dec(v___y_1123_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(lean_object* v_e_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v_e_1126_, v___y_1128_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___boxed(lean_object* v_e_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(v_e_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
return v_res_1139_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(lean_object* v_opts_1140_, lean_object* v_opt_1141_){
_start:
{
lean_object* v_name_1142_; lean_object* v_defValue_1143_; lean_object* v_map_1144_; lean_object* v___x_1145_; 
v_name_1142_ = lean_ctor_get(v_opt_1141_, 0);
v_defValue_1143_ = lean_ctor_get(v_opt_1141_, 1);
v_map_1144_ = lean_ctor_get(v_opts_1140_, 0);
v___x_1145_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1144_, v_name_1142_);
if (lean_obj_tag(v___x_1145_) == 0)
{
uint8_t v___x_1146_; 
v___x_1146_ = lean_unbox(v_defValue_1143_);
return v___x_1146_;
}
else
{
lean_object* v_val_1147_; 
v_val_1147_ = lean_ctor_get(v___x_1145_, 0);
lean_inc(v_val_1147_);
lean_dec_ref_known(v___x_1145_, 1);
if (lean_obj_tag(v_val_1147_) == 1)
{
uint8_t v_v_1148_; 
v_v_1148_ = lean_ctor_get_uint8(v_val_1147_, 0);
lean_dec_ref_known(v_val_1147_, 0);
return v_v_1148_;
}
else
{
uint8_t v___x_1149_; 
lean_dec(v_val_1147_);
v___x_1149_ = lean_unbox(v_defValue_1143_);
return v___x_1149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___boxed(lean_object* v_opts_1150_, lean_object* v_opt_1151_){
_start:
{
uint8_t v_res_1152_; lean_object* v_r_1153_; 
v_res_1152_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(v_opts_1150_, v_opt_1151_);
lean_dec_ref(v_opt_1151_);
lean_dec_ref(v_opts_1150_);
v_r_1153_ = lean_box(v_res_1152_);
return v_r_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5(lean_object* v_opts_1154_, lean_object* v_opt_1155_){
_start:
{
lean_object* v_name_1156_; lean_object* v_defValue_1157_; lean_object* v_map_1158_; lean_object* v___x_1159_; 
v_name_1156_ = lean_ctor_get(v_opt_1155_, 0);
v_defValue_1157_ = lean_ctor_get(v_opt_1155_, 1);
v_map_1158_ = lean_ctor_get(v_opts_1154_, 0);
v___x_1159_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1158_, v_name_1156_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_inc(v_defValue_1157_);
return v_defValue_1157_;
}
else
{
lean_object* v_val_1160_; 
v_val_1160_ = lean_ctor_get(v___x_1159_, 0);
lean_inc(v_val_1160_);
lean_dec_ref_known(v___x_1159_, 1);
if (lean_obj_tag(v_val_1160_) == 3)
{
lean_object* v_v_1161_; 
v_v_1161_ = lean_ctor_get(v_val_1160_, 0);
lean_inc(v_v_1161_);
lean_dec_ref_known(v_val_1160_, 1);
return v_v_1161_;
}
else
{
lean_dec(v_val_1160_);
lean_inc(v_defValue_1157_);
return v_defValue_1157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___boxed(lean_object* v_opts_1162_, lean_object* v_opt_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5(v_opts_1162_, v_opt_1163_);
lean_dec_ref(v_opt_1163_);
lean_dec_ref(v_opts_1162_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___redArg(lean_object* v_k_1165_, uint8_t v_allowLevelAssignments_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1166_, v_k_1165_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1180_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_a_1173_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
else
{
lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1188_; 
v_a_1181_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1183_ = v___x_1172_;
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1172_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1186_; 
if (v_isShared_1184_ == 0)
{
v___x_1186_ = v___x_1183_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_a_1181_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___redArg___boxed(lean_object* v_k_1189_, lean_object* v_allowLevelAssignments_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1196_; lean_object* v_res_1197_; 
v_allowLevelAssignments_boxed_1196_ = lean_unbox(v_allowLevelAssignments_1190_);
v_res_1197_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___redArg(v_k_1189_, v_allowLevelAssignments_boxed_1196_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6(lean_object* v_00_u03b1_1198_, lean_object* v_k_1199_, uint8_t v_allowLevelAssignments_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___redArg(v_k_1199_, v_allowLevelAssignments_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___boxed(lean_object* v_00_u03b1_1207_, lean_object* v_k_1208_, lean_object* v_allowLevelAssignments_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1215_; lean_object* v_res_1216_; 
v_allowLevelAssignments_boxed_1215_ = lean_unbox(v_allowLevelAssignments_1209_);
v_res_1216_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6(v_00_u03b1_1207_, v_k_1208_, v_allowLevelAssignments_boxed_1215_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
lean_dec(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg(lean_object* v_thm_1217_, lean_object* v___y_1218_){
_start:
{
lean_object* v___x_1220_; lean_object* v_env_1221_; lean_object* v_toConstantVal_1222_; lean_object* v_value_1223_; lean_object* v_all_1224_; uint8_t v___y_1226_; lean_object* v_type_1234_; uint8_t v___x_1235_; 
v___x_1220_ = lean_st_ref_get(v___y_1218_);
v_env_1221_ = lean_ctor_get(v___x_1220_, 0);
lean_inc_ref_n(v_env_1221_, 2);
lean_dec(v___x_1220_);
v_toConstantVal_1222_ = lean_ctor_get(v_thm_1217_, 0);
v_value_1223_ = lean_ctor_get(v_thm_1217_, 1);
v_all_1224_ = lean_ctor_get(v_thm_1217_, 2);
v_type_1234_ = lean_ctor_get(v_toConstantVal_1222_, 2);
v___x_1235_ = l_Lean_Environment_hasUnsafe(v_env_1221_, v_type_1234_);
if (v___x_1235_ == 0)
{
uint8_t v___x_1236_; 
v___x_1236_ = l_Lean_Environment_hasUnsafe(v_env_1221_, v_value_1223_);
v___y_1226_ = v___x_1236_;
goto v___jp_1225_;
}
else
{
lean_dec_ref(v_env_1221_);
v___y_1226_ = v___x_1235_;
goto v___jp_1225_;
}
v___jp_1225_:
{
if (v___y_1226_ == 0)
{
lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1227_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1227_, 0, v_thm_1217_);
v___x_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
return v___x_1228_;
}
else
{
lean_object* v___x_1229_; uint8_t v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
lean_inc(v_all_1224_);
lean_inc_ref(v_value_1223_);
lean_inc_ref(v_toConstantVal_1222_);
lean_dec_ref(v_thm_1217_);
v___x_1229_ = lean_box(0);
v___x_1230_ = 0;
v___x_1231_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1231_, 0, v_toConstantVal_1222_);
lean_ctor_set(v___x_1231_, 1, v_value_1223_);
lean_ctor_set(v___x_1231_, 2, v___x_1229_);
lean_ctor_set(v___x_1231_, 3, v_all_1224_);
lean_ctor_set_uint8(v___x_1231_, sizeof(void*)*4, v___x_1230_);
v___x_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
v___x_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1232_);
return v___x_1233_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg___boxed(lean_object* v_thm_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg(v_thm_1237_, v___y_1238_);
lean_dec(v___y_1238_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7(lean_object* v_thm_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg(v_thm_1241_, v___y_1245_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___boxed(lean_object* v_thm_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7(v_thm_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg___lam__0(lean_object* v_k_1255_, lean_object* v_b_1256_, lean_object* v_c_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___x_1263_; 
lean_inc(v___y_1261_);
lean_inc_ref(v___y_1260_);
lean_inc(v___y_1259_);
lean_inc_ref(v___y_1258_);
v___x_1263_ = lean_apply_7(v_k_1255_, v_b_1256_, v_c_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, lean_box(0));
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg___lam__0___boxed(lean_object* v_k_1264_, lean_object* v_b_1265_, lean_object* v_c_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg___lam__0(v_k_1264_, v_b_1265_, v_c_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
lean_dec_ref(v___y_1267_);
return v_res_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg(lean_object* v_e_1273_, lean_object* v_k_1274_, uint8_t v_cleanupAnnotations_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v___f_1281_; uint8_t v___x_1282_; uint8_t v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___f_1281_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1281_, 0, v_k_1274_);
v___x_1282_ = 1;
v___x_1283_ = 0;
v___x_1284_ = lean_box(0);
v___x_1285_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1273_, v___x_1282_, v___x_1283_, v___x_1282_, v___x_1283_, v___x_1284_, v___f_1281_, v_cleanupAnnotations_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1285_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1285_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
v_a_1294_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1285_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1285_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg___boxed(lean_object* v_e_1302_, lean_object* v_k_1303_, lean_object* v_cleanupAnnotations_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1310_; lean_object* v_res_1311_; 
v_cleanupAnnotations_boxed_1310_ = lean_unbox(v_cleanupAnnotations_1304_);
v_res_1311_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg(v_e_1302_, v_k_1303_, v_cleanupAnnotations_boxed_1310_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8(lean_object* v_00_u03b1_1312_, lean_object* v_e_1313_, lean_object* v_k_1314_, uint8_t v_cleanupAnnotations_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v___x_1321_; 
v___x_1321_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg(v_e_1313_, v_k_1314_, v_cleanupAnnotations_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___boxed(lean_object* v_00_u03b1_1322_, lean_object* v_e_1323_, lean_object* v_k_1324_, lean_object* v_cleanupAnnotations_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1331_; lean_object* v_res_1332_; 
v_cleanupAnnotations_boxed_1331_ = lean_unbox(v_cleanupAnnotations_1325_);
v_res_1332_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8(v_00_u03b1_1322_, v_e_1323_, v_k_1324_, v_cleanupAnnotations_boxed_1331_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_);
lean_dec(v___y_1329_);
lean_dec_ref(v___y_1328_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(lean_object* v___x_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v_toCold_1342_; lean_object* v_options_1343_; uint8_t v_hasTrace_1344_; 
v_toCold_1342_ = lean_ctor_get(v___y_1339_, 0);
v_options_1343_ = lean_ctor_get(v_toCold_1342_, 2);
v_hasTrace_1344_ = lean_ctor_get_uint8(v_options_1343_, sizeof(void*)*1);
if (v_hasTrace_1344_ == 0)
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
lean_dec(v___x_1336_);
v___x_1345_ = lean_box(v_hasTrace_1344_);
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
return v___x_1346_;
}
else
{
lean_object* v_inheritedTraceOptions_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; uint8_t v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v_inheritedTraceOptions_1347_ = lean_ctor_get(v_toCold_1342_, 11);
v___x_1348_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1));
v___x_1349_ = l_Lean_Name_append(v___x_1348_, v___x_1336_);
v___x_1350_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1347_, v_options_1343_, v___x_1349_);
lean_dec(v___x_1349_);
v___x_1351_ = lean_box(v___x_1350_);
v___x_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
return v___x_1352_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___boxed(lean_object* v___x_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(v___x_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3(lean_object* v_o_1360_, lean_object* v_k_1361_, uint8_t v_v_1362_){
_start:
{
lean_object* v_map_1363_; uint8_t v_hasTrace_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1378_; 
v_map_1363_ = lean_ctor_get(v_o_1360_, 0);
v_hasTrace_1364_ = lean_ctor_get_uint8(v_o_1360_, sizeof(void*)*1);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_o_1360_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1366_ = v_o_1360_;
v_isShared_1367_ = v_isSharedCheck_1378_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_map_1363_);
lean_dec(v_o_1360_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1378_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1368_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1368_, 0, v_v_1362_);
lean_inc(v_k_1361_);
v___x_1369_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1361_, v___x_1368_, v_map_1363_);
if (v_hasTrace_1364_ == 0)
{
lean_object* v___x_1370_; uint8_t v___x_1371_; lean_object* v___x_1373_; 
v___x_1370_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1));
v___x_1371_ = l_Lean_Name_isPrefixOf(v___x_1370_, v_k_1361_);
lean_dec(v_k_1361_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 0, v___x_1369_);
v___x_1373_ = v___x_1366_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v___x_1369_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_ctor_set_uint8(v___x_1373_, sizeof(void*)*1, v___x_1371_);
return v___x_1373_;
}
}
else
{
lean_object* v___x_1376_; 
lean_dec(v_k_1361_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 0, v___x_1369_);
v___x_1376_ = v___x_1366_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1369_);
lean_ctor_set_uint8(v_reuseFailAlloc_1377_, sizeof(void*)*1, v_hasTrace_1364_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3___boxed(lean_object* v_o_1379_, lean_object* v_k_1380_, lean_object* v_v_1381_){
_start:
{
uint8_t v_v_boxed_1382_; lean_object* v_res_1383_; 
v_v_boxed_1382_ = lean_unbox(v_v_1381_);
v_res_1383_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3(v_o_1379_, v_k_1380_, v_v_boxed_1382_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(lean_object* v_opts_1384_, lean_object* v_opt_1385_, uint8_t v_val_1386_){
_start:
{
lean_object* v_name_1387_; lean_object* v___x_1388_; 
v_name_1387_ = lean_ctor_get(v_opt_1385_, 0);
lean_inc(v_name_1387_);
lean_dec_ref(v_opt_1385_);
v___x_1388_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3(v_opts_1384_, v_name_1387_, v_val_1386_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3___boxed(lean_object* v_opts_1389_, lean_object* v_opt_1390_, lean_object* v_val_1391_){
_start:
{
uint8_t v_val_boxed_1392_; lean_object* v_res_1393_; 
v_val_boxed_1392_ = lean_unbox(v_val_1391_);
v_res_1393_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(v_opts_1389_, v_opt_1390_, v_val_boxed_1392_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(lean_object* v_a_1394_, uint8_t v___x_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_){
_start:
{
lean_object* v_toCold_1401_; lean_object* v_currRecDepth_1402_; lean_object* v_ref_1403_; uint8_t v_suppressElabErrors_1404_; lean_object* v_fileName_1405_; lean_object* v_fileMap_1406_; lean_object* v_options_1407_; lean_object* v_currNamespace_1408_; lean_object* v_openDecls_1409_; lean_object* v_initHeartbeats_1410_; lean_object* v_maxHeartbeats_1411_; lean_object* v_quotContext_1412_; lean_object* v_currMacroScope_1413_; lean_object* v_cancelTk_x3f_1414_; lean_object* v_inheritedTraceOptions_1415_; lean_object* v___x_1416_; uint8_t v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; uint8_t v___x_1420_; lean_object* v_fileName_1422_; lean_object* v_fileMap_1423_; lean_object* v_currNamespace_1424_; lean_object* v_openDecls_1425_; lean_object* v_initHeartbeats_1426_; lean_object* v_maxHeartbeats_1427_; lean_object* v_quotContext_1428_; lean_object* v_currMacroScope_1429_; lean_object* v_cancelTk_x3f_1430_; lean_object* v_inheritedTraceOptions_1431_; lean_object* v_currRecDepth_1432_; lean_object* v_ref_1433_; uint8_t v_suppressElabErrors_1434_; lean_object* v___y_1435_; lean_object* v___x_1441_; uint8_t v___y_1443_; lean_object* v_env_1464_; uint8_t v___x_1465_; 
v_toCold_1401_ = lean_ctor_get(v___y_1398_, 0);
v_currRecDepth_1402_ = lean_ctor_get(v___y_1398_, 1);
v_ref_1403_ = lean_ctor_get(v___y_1398_, 2);
v_suppressElabErrors_1404_ = lean_ctor_get_uint8(v___y_1398_, sizeof(void*)*3 + 1);
v_fileName_1405_ = lean_ctor_get(v_toCold_1401_, 0);
v_fileMap_1406_ = lean_ctor_get(v_toCold_1401_, 1);
v_options_1407_ = lean_ctor_get(v_toCold_1401_, 2);
v_currNamespace_1408_ = lean_ctor_get(v_toCold_1401_, 4);
v_openDecls_1409_ = lean_ctor_get(v_toCold_1401_, 5);
v_initHeartbeats_1410_ = lean_ctor_get(v_toCold_1401_, 6);
v_maxHeartbeats_1411_ = lean_ctor_get(v_toCold_1401_, 7);
v_quotContext_1412_ = lean_ctor_get(v_toCold_1401_, 8);
v_currMacroScope_1413_ = lean_ctor_get(v_toCold_1401_, 9);
v_cancelTk_x3f_1414_ = lean_ctor_get(v_toCold_1401_, 10);
v_inheritedTraceOptions_1415_ = lean_ctor_get(v_toCold_1401_, 11);
v___x_1416_ = l_Lean_Meta_smartUnfolding;
v___x_1417_ = 0;
lean_inc_ref(v_options_1407_);
v___x_1418_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(v_options_1407_, v___x_1416_, v___x_1417_);
v___x_1419_ = l_Lean_diagnostics;
v___x_1420_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(v___x_1418_, v___x_1419_);
v___x_1441_ = lean_st_ref_get(v___y_1399_);
v_env_1464_ = lean_ctor_get(v___x_1441_, 0);
lean_inc_ref(v_env_1464_);
lean_dec(v___x_1441_);
v___x_1465_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1464_);
lean_dec_ref(v_env_1464_);
if (v___x_1420_ == 0)
{
if (v___x_1465_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_1415_);
lean_inc(v_cancelTk_x3f_1414_);
lean_inc(v_currMacroScope_1413_);
lean_inc(v_quotContext_1412_);
lean_inc(v_maxHeartbeats_1411_);
lean_inc(v_initHeartbeats_1410_);
lean_inc(v_openDecls_1409_);
lean_inc(v_currNamespace_1408_);
lean_inc_ref(v_fileMap_1406_);
lean_inc_ref(v_fileName_1405_);
v_fileName_1422_ = v_fileName_1405_;
v_fileMap_1423_ = v_fileMap_1406_;
v_currNamespace_1424_ = v_currNamespace_1408_;
v_openDecls_1425_ = v_openDecls_1409_;
v_initHeartbeats_1426_ = v_initHeartbeats_1410_;
v_maxHeartbeats_1427_ = v_maxHeartbeats_1411_;
v_quotContext_1428_ = v_quotContext_1412_;
v_currMacroScope_1429_ = v_currMacroScope_1413_;
v_cancelTk_x3f_1430_ = v_cancelTk_x3f_1414_;
v_inheritedTraceOptions_1431_ = v_inheritedTraceOptions_1415_;
v_currRecDepth_1432_ = v_currRecDepth_1402_;
v_ref_1433_ = v_ref_1403_;
v_suppressElabErrors_1434_ = v_suppressElabErrors_1404_;
v___y_1435_ = v___y_1399_;
goto v___jp_1421_;
}
else
{
v___y_1443_ = v___x_1420_;
goto v___jp_1442_;
}
}
else
{
v___y_1443_ = v___x_1465_;
goto v___jp_1442_;
}
v___jp_1421_:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1436_ = l_Lean_maxRecDepth;
v___x_1437_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5(v___x_1418_, v___x_1436_);
v___x_1438_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1438_, 0, v_fileName_1422_);
lean_ctor_set(v___x_1438_, 1, v_fileMap_1423_);
lean_ctor_set(v___x_1438_, 2, v___x_1418_);
lean_ctor_set(v___x_1438_, 3, v___x_1437_);
lean_ctor_set(v___x_1438_, 4, v_currNamespace_1424_);
lean_ctor_set(v___x_1438_, 5, v_openDecls_1425_);
lean_ctor_set(v___x_1438_, 6, v_initHeartbeats_1426_);
lean_ctor_set(v___x_1438_, 7, v_maxHeartbeats_1427_);
lean_ctor_set(v___x_1438_, 8, v_quotContext_1428_);
lean_ctor_set(v___x_1438_, 9, v_currMacroScope_1429_);
lean_ctor_set(v___x_1438_, 10, v_cancelTk_x3f_1430_);
lean_ctor_set(v___x_1438_, 11, v_inheritedTraceOptions_1431_);
lean_inc(v_ref_1433_);
lean_inc(v_currRecDepth_1432_);
v___x_1439_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1439_, 0, v___x_1438_);
lean_ctor_set(v___x_1439_, 1, v_currRecDepth_1432_);
lean_ctor_set(v___x_1439_, 2, v_ref_1433_);
lean_ctor_set_uint8(v___x_1439_, sizeof(void*)*3, v___x_1420_);
lean_ctor_set_uint8(v___x_1439_, sizeof(void*)*3 + 1, v_suppressElabErrors_1434_);
v___x_1440_ = l_Lean_MVarId_refl(v_a_1394_, v___x_1395_, v___y_1396_, v___y_1397_, v___x_1439_, v___y_1435_);
lean_dec_ref_known(v___x_1439_, 3);
return v___x_1440_;
}
v___jp_1442_:
{
if (v___y_1443_ == 0)
{
lean_object* v___x_1444_; lean_object* v_env_1445_; lean_object* v_nextMacroScope_1446_; lean_object* v_ngen_1447_; lean_object* v_auxDeclNGen_1448_; lean_object* v_traceState_1449_; lean_object* v_messages_1450_; lean_object* v_infoState_1451_; lean_object* v_snapshotTasks_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1462_; 
v___x_1444_ = lean_st_ref_take(v___y_1399_);
v_env_1445_ = lean_ctor_get(v___x_1444_, 0);
v_nextMacroScope_1446_ = lean_ctor_get(v___x_1444_, 1);
v_ngen_1447_ = lean_ctor_get(v___x_1444_, 2);
v_auxDeclNGen_1448_ = lean_ctor_get(v___x_1444_, 3);
v_traceState_1449_ = lean_ctor_get(v___x_1444_, 4);
v_messages_1450_ = lean_ctor_get(v___x_1444_, 6);
v_infoState_1451_ = lean_ctor_get(v___x_1444_, 7);
v_snapshotTasks_1452_ = lean_ctor_get(v___x_1444_, 8);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1462_ == 0)
{
lean_object* v_unused_1463_; 
v_unused_1463_ = lean_ctor_get(v___x_1444_, 5);
lean_dec(v_unused_1463_);
v___x_1454_ = v___x_1444_;
v_isShared_1455_ = v_isSharedCheck_1462_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_snapshotTasks_1452_);
lean_inc(v_infoState_1451_);
lean_inc(v_messages_1450_);
lean_inc(v_traceState_1449_);
lean_inc(v_auxDeclNGen_1448_);
lean_inc(v_ngen_1447_);
lean_inc(v_nextMacroScope_1446_);
lean_inc(v_env_1445_);
lean_dec(v___x_1444_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1462_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1459_; 
v___x_1456_ = l_Lean_Kernel_enableDiag(v_env_1445_, v___x_1420_);
v___x_1457_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2);
if (v_isShared_1455_ == 0)
{
lean_ctor_set(v___x_1454_, 5, v___x_1457_);
lean_ctor_set(v___x_1454_, 0, v___x_1456_);
v___x_1459_ = v___x_1454_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v___x_1456_);
lean_ctor_set(v_reuseFailAlloc_1461_, 1, v_nextMacroScope_1446_);
lean_ctor_set(v_reuseFailAlloc_1461_, 2, v_ngen_1447_);
lean_ctor_set(v_reuseFailAlloc_1461_, 3, v_auxDeclNGen_1448_);
lean_ctor_set(v_reuseFailAlloc_1461_, 4, v_traceState_1449_);
lean_ctor_set(v_reuseFailAlloc_1461_, 5, v___x_1457_);
lean_ctor_set(v_reuseFailAlloc_1461_, 6, v_messages_1450_);
lean_ctor_set(v_reuseFailAlloc_1461_, 7, v_infoState_1451_);
lean_ctor_set(v_reuseFailAlloc_1461_, 8, v_snapshotTasks_1452_);
v___x_1459_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
lean_object* v___x_1460_; 
v___x_1460_ = lean_st_ref_put(v___y_1399_, v___x_1459_);
lean_inc_ref(v_inheritedTraceOptions_1415_);
lean_inc(v_cancelTk_x3f_1414_);
lean_inc(v_currMacroScope_1413_);
lean_inc(v_quotContext_1412_);
lean_inc(v_maxHeartbeats_1411_);
lean_inc(v_initHeartbeats_1410_);
lean_inc(v_openDecls_1409_);
lean_inc(v_currNamespace_1408_);
lean_inc_ref(v_fileMap_1406_);
lean_inc_ref(v_fileName_1405_);
v_fileName_1422_ = v_fileName_1405_;
v_fileMap_1423_ = v_fileMap_1406_;
v_currNamespace_1424_ = v_currNamespace_1408_;
v_openDecls_1425_ = v_openDecls_1409_;
v_initHeartbeats_1426_ = v_initHeartbeats_1410_;
v_maxHeartbeats_1427_ = v_maxHeartbeats_1411_;
v_quotContext_1428_ = v_quotContext_1412_;
v_currMacroScope_1429_ = v_currMacroScope_1413_;
v_cancelTk_x3f_1430_ = v_cancelTk_x3f_1414_;
v_inheritedTraceOptions_1431_ = v_inheritedTraceOptions_1415_;
v_currRecDepth_1432_ = v_currRecDepth_1402_;
v_ref_1433_ = v_ref_1403_;
v_suppressElabErrors_1434_ = v_suppressElabErrors_1404_;
v___y_1435_ = v___y_1399_;
goto v___jp_1421_;
}
}
}
else
{
lean_inc_ref(v_inheritedTraceOptions_1415_);
lean_inc(v_cancelTk_x3f_1414_);
lean_inc(v_currMacroScope_1413_);
lean_inc(v_quotContext_1412_);
lean_inc(v_maxHeartbeats_1411_);
lean_inc(v_initHeartbeats_1410_);
lean_inc(v_openDecls_1409_);
lean_inc(v_currNamespace_1408_);
lean_inc_ref(v_fileMap_1406_);
lean_inc_ref(v_fileName_1405_);
v_fileName_1422_ = v_fileName_1405_;
v_fileMap_1423_ = v_fileMap_1406_;
v_currNamespace_1424_ = v_currNamespace_1408_;
v_openDecls_1425_ = v_openDecls_1409_;
v_initHeartbeats_1426_ = v_initHeartbeats_1410_;
v_maxHeartbeats_1427_ = v_maxHeartbeats_1411_;
v_quotContext_1428_ = v_quotContext_1412_;
v_currMacroScope_1429_ = v_currMacroScope_1413_;
v_cancelTk_x3f_1430_ = v_cancelTk_x3f_1414_;
v_inheritedTraceOptions_1431_ = v_inheritedTraceOptions_1415_;
v_currRecDepth_1432_ = v_currRecDepth_1402_;
v_ref_1433_ = v_ref_1403_;
v_suppressElabErrors_1434_ = v_suppressElabErrors_1404_;
v___y_1435_ = v___y_1399_;
goto v___jp_1421_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___boxed(lean_object* v_a_1466_, lean_object* v___x_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_){
_start:
{
uint8_t v___x_10526__boxed_1473_; lean_object* v_res_1474_; 
v___x_10526__boxed_1473_ = lean_unbox(v___x_1467_);
v_res_1474_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(v_a_1466_, v___x_10526__boxed_1473_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_);
lean_dec(v___y_1471_);
lean_dec_ref(v___y_1470_);
lean_dec(v___y_1469_);
lean_dec_ref(v___y_1468_);
return v_res_1474_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1475_; double v___x_1476_; 
v___x_1475_ = lean_unsigned_to_nat(0u);
v___x_1476_ = lean_float_of_nat(v___x_1475_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(lean_object* v_cls_1480_, lean_object* v_msg_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v_ref_1487_; lean_object* v___x_1488_; lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1533_; 
v_ref_1487_ = lean_ctor_get(v___y_1484_, 2);
v___x_1488_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0(v_msg_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1491_ = v___x_1488_;
v_isShared_1492_ = v_isSharedCheck_1533_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1488_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1533_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1493_; lean_object* v_traceState_1494_; lean_object* v_env_1495_; lean_object* v_nextMacroScope_1496_; lean_object* v_ngen_1497_; lean_object* v_auxDeclNGen_1498_; lean_object* v_cache_1499_; lean_object* v_messages_1500_; lean_object* v_infoState_1501_; lean_object* v_snapshotTasks_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1532_; 
v___x_1493_ = lean_st_ref_take(v___y_1485_);
v_traceState_1494_ = lean_ctor_get(v___x_1493_, 4);
v_env_1495_ = lean_ctor_get(v___x_1493_, 0);
v_nextMacroScope_1496_ = lean_ctor_get(v___x_1493_, 1);
v_ngen_1497_ = lean_ctor_get(v___x_1493_, 2);
v_auxDeclNGen_1498_ = lean_ctor_get(v___x_1493_, 3);
v_cache_1499_ = lean_ctor_get(v___x_1493_, 5);
v_messages_1500_ = lean_ctor_get(v___x_1493_, 6);
v_infoState_1501_ = lean_ctor_get(v___x_1493_, 7);
v_snapshotTasks_1502_ = lean_ctor_get(v___x_1493_, 8);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1504_ = v___x_1493_;
v_isShared_1505_ = v_isSharedCheck_1532_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_snapshotTasks_1502_);
lean_inc(v_infoState_1501_);
lean_inc(v_messages_1500_);
lean_inc(v_cache_1499_);
lean_inc(v_traceState_1494_);
lean_inc(v_auxDeclNGen_1498_);
lean_inc(v_ngen_1497_);
lean_inc(v_nextMacroScope_1496_);
lean_inc(v_env_1495_);
lean_dec(v___x_1493_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1532_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
uint64_t v_tid_1506_; lean_object* v_traces_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1531_; 
v_tid_1506_ = lean_ctor_get_uint64(v_traceState_1494_, sizeof(void*)*1);
v_traces_1507_ = lean_ctor_get(v_traceState_1494_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v_traceState_1494_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1509_ = v_traceState_1494_;
v_isShared_1510_ = v_isSharedCheck_1531_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_traces_1507_);
lean_dec(v_traceState_1494_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1531_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1511_; lean_object* v___x_1512_; double v___x_1513_; uint8_t v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1522_; 
v___x_1511_ = lean_box(0);
v___x_1512_ = lean_box(0);
v___x_1513_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__0);
v___x_1514_ = 0;
v___x_1515_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__1));
v___x_1516_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1516_, 0, v_cls_1480_);
lean_ctor_set(v___x_1516_, 1, v___x_1512_);
lean_ctor_set(v___x_1516_, 2, v___x_1515_);
lean_ctor_set_float(v___x_1516_, sizeof(void*)*3, v___x_1513_);
lean_ctor_set_float(v___x_1516_, sizeof(void*)*3 + 8, v___x_1513_);
lean_ctor_set_uint8(v___x_1516_, sizeof(void*)*3 + 16, v___x_1514_);
v___x_1517_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___closed__2));
v___x_1518_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1516_);
lean_ctor_set(v___x_1518_, 1, v_a_1489_);
lean_ctor_set(v___x_1518_, 2, v___x_1517_);
lean_inc(v_ref_1487_);
v___x_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1519_, 0, v_ref_1487_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = l_Lean_PersistentArray_push___redArg(v_traces_1507_, v___x_1519_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 0, v___x_1520_);
v___x_1522_ = v___x_1509_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1520_);
lean_ctor_set_uint64(v_reuseFailAlloc_1530_, sizeof(void*)*1, v_tid_1506_);
v___x_1522_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
lean_object* v___x_1524_; 
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 4, v___x_1522_);
v___x_1524_ = v___x_1504_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_env_1495_);
lean_ctor_set(v_reuseFailAlloc_1529_, 1, v_nextMacroScope_1496_);
lean_ctor_set(v_reuseFailAlloc_1529_, 2, v_ngen_1497_);
lean_ctor_set(v_reuseFailAlloc_1529_, 3, v_auxDeclNGen_1498_);
lean_ctor_set(v_reuseFailAlloc_1529_, 4, v___x_1522_);
lean_ctor_set(v_reuseFailAlloc_1529_, 5, v_cache_1499_);
lean_ctor_set(v_reuseFailAlloc_1529_, 6, v_messages_1500_);
lean_ctor_set(v_reuseFailAlloc_1529_, 7, v_infoState_1501_);
lean_ctor_set(v_reuseFailAlloc_1529_, 8, v_snapshotTasks_1502_);
v___x_1524_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
lean_object* v___x_1525_; lean_object* v___x_1527_; 
v___x_1525_ = lean_st_ref_put(v___y_1485_, v___x_1524_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 0, v___x_1511_);
v___x_1527_ = v___x_1491_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v___x_1511_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___boxed(lean_object* v_cls_1534_, lean_object* v_msg_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v_res_1541_; 
v_res_1541_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v_cls_1534_, v_msg_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
return v_res_1541_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1543_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__0));
v___x_1544_ = l_Lean_stringToMessageData(v___x_1543_);
return v___x_1544_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1546_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__2));
v___x_1547_ = l_Lean_stringToMessageData(v___x_1546_);
return v___x_1547_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5(void){
_start:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__4));
v___x_1550_ = l_Lean_stringToMessageData(v___x_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(lean_object* v_a_1551_, lean_object* v___x_1552_, lean_object* v_declName_1553_, lean_object* v_declNameNonRec_1554_, lean_object* v___x_1555_, lean_object* v___f_1556_, lean_object* v_____r_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1566_; lean_object* v___y_1567_; lean_object* v___y_1568_; lean_object* v___y_1598_; lean_object* v___y_1599_; lean_object* v___y_1600_; lean_object* v___y_1601_; lean_object* v___y_1602_; lean_object* v___x_1623_; 
v___x_1623_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(v_declName_1553_, v_declNameNonRec_1554_, v___x_1555_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___y_1626_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___x_1663_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
lean_inc_ref(v___f_1556_);
lean_inc(v___y_1561_);
lean_inc_ref(v___y_1560_);
lean_inc(v___y_1559_);
lean_inc_ref(v___y_1558_);
v___x_1663_ = lean_apply_5(v___f_1556_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, lean_box(0));
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; uint8_t v___x_1665_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v___x_1665_ = lean_unbox(v_a_1664_);
lean_dec(v_a_1664_);
if (v___x_1665_ == 0)
{
v___y_1626_ = v___y_1558_;
v___y_1627_ = v___y_1559_;
v___y_1628_ = v___y_1560_;
v___y_1629_ = v___y_1561_;
goto v___jp_1625_;
}
else
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1666_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5);
lean_inc(v_a_1624_);
v___x_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1667_, 0, v_a_1624_);
v___x_1668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1666_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
lean_inc(v___x_1552_);
v___x_1669_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v___x_1552_, v___x_1668_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_dec_ref_known(v___x_1669_, 1);
v___y_1626_ = v___y_1558_;
v___y_1627_ = v___y_1559_;
v___y_1628_ = v___y_1560_;
v___y_1629_ = v___y_1561_;
goto v___jp_1625_;
}
else
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1677_; 
lean_dec(v_a_1624_);
lean_dec_ref(v___f_1556_);
lean_dec(v___x_1552_);
lean_dec_ref(v_a_1551_);
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1672_ = v___x_1669_;
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1669_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1675_; 
if (v_isShared_1673_ == 0)
{
v___x_1675_ = v___x_1672_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1670_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
}
else
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
lean_dec(v_a_1624_);
lean_dec_ref(v___f_1556_);
lean_dec(v___x_1552_);
lean_dec_ref(v_a_1551_);
v_a_1678_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v___x_1663_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1663_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_a_1678_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
v___jp_1625_:
{
lean_object* v___x_1630_; 
v___x_1630_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(v_a_1624_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v_a_1631_; lean_object* v___x_1632_; 
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_a_1631_);
lean_dec_ref_known(v___x_1630_, 1);
lean_inc(v___y_1629_);
lean_inc_ref(v___y_1628_);
lean_inc(v___y_1627_);
lean_inc_ref(v___y_1626_);
v___x_1632_ = lean_apply_5(v___f_1556_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, lean_box(0));
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v_a_1633_; uint8_t v___x_1634_; 
v_a_1633_ = lean_ctor_get(v___x_1632_, 0);
lean_inc(v_a_1633_);
lean_dec_ref_known(v___x_1632_, 1);
v___x_1634_ = lean_unbox(v_a_1633_);
lean_dec(v_a_1633_);
if (v___x_1634_ == 0)
{
v___y_1598_ = v_a_1631_;
v___y_1599_ = v___y_1626_;
v___y_1600_ = v___y_1627_;
v___y_1601_ = v___y_1628_;
v___y_1602_ = v___y_1629_;
goto v___jp_1597_;
}
else
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1635_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3);
lean_inc(v_a_1631_);
v___x_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1636_, 0, v_a_1631_);
v___x_1637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1635_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
lean_inc(v___x_1552_);
v___x_1638_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v___x_1552_, v___x_1637_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_dec_ref_known(v___x_1638_, 1);
v___y_1598_ = v_a_1631_;
v___y_1599_ = v___y_1626_;
v___y_1600_ = v___y_1627_;
v___y_1601_ = v___y_1628_;
v___y_1602_ = v___y_1629_;
goto v___jp_1597_;
}
else
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1646_; 
lean_dec(v_a_1631_);
lean_dec(v___x_1552_);
lean_dec_ref(v_a_1551_);
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1641_ = v___x_1638_;
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1638_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1644_; 
if (v_isShared_1642_ == 0)
{
v___x_1644_ = v___x_1641_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_a_1639_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
lean_dec(v_a_1631_);
lean_dec(v___x_1552_);
lean_dec_ref(v_a_1551_);
v_a_1647_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v___x_1632_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1632_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
else
{
lean_object* v_a_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1662_; 
lean_dec_ref(v___f_1556_);
lean_dec(v___x_1552_);
lean_dec_ref(v_a_1551_);
v_a_1655_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1657_ = v___x_1630_;
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_a_1655_);
lean_dec(v___x_1630_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1658_ == 0)
{
v___x_1660_ = v___x_1657_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_a_1655_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
}
}
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
lean_dec_ref(v___f_1556_);
lean_dec(v___x_1552_);
lean_dec_ref(v_a_1551_);
v_a_1686_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v___x_1623_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1623_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
v___jp_1563_:
{
if (lean_obj_tag(v___y_1568_) == 0)
{
lean_object* v_toCold_1569_; lean_object* v_options_1570_; uint8_t v_hasTrace_1571_; 
lean_dec_ref_known(v___y_1568_, 1);
v_toCold_1569_ = lean_ctor_get(v___y_1567_, 0);
v_options_1570_ = lean_ctor_get(v_toCold_1569_, 2);
v_hasTrace_1571_ = lean_ctor_get_uint8(v_options_1570_, sizeof(void*)*1);
if (v_hasTrace_1571_ == 0)
{
lean_object* v___x_1572_; 
lean_dec(v___x_1552_);
v___x_1572_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v_a_1551_, v___y_1565_);
return v___x_1572_;
}
else
{
lean_object* v_inheritedTraceOptions_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; 
v_inheritedTraceOptions_1573_ = lean_ctor_get(v_toCold_1569_, 11);
v___x_1574_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1));
lean_inc(v___x_1552_);
v___x_1575_ = l_Lean_Name_append(v___x_1574_, v___x_1552_);
v___x_1576_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1573_, v_options_1570_, v___x_1575_);
lean_dec(v___x_1575_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1577_; 
lean_dec(v___x_1552_);
v___x_1577_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v_a_1551_, v___y_1565_);
return v___x_1577_;
}
else
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1578_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1);
v___x_1579_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v___x_1552_, v___x_1578_, v___y_1566_, v___y_1565_, v___y_1567_, v___y_1564_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v___x_1580_; 
lean_dec_ref_known(v___x_1579_, 1);
v___x_1580_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v_a_1551_, v___y_1565_);
return v___x_1580_;
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
lean_dec_ref(v_a_1551_);
v_a_1581_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1583_ = v___x_1579_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1579_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1581_);
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
else
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1596_; 
lean_dec(v___x_1552_);
lean_dec_ref(v_a_1551_);
v_a_1589_ = lean_ctor_get(v___y_1568_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v___y_1568_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1591_ = v___y_1568_;
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v___y_1568_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1592_ == 0)
{
v___x_1594_ = v___x_1591_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
}
v___jp_1597_:
{
lean_object* v___x_1603_; uint8_t v_transparency_1604_; uint8_t v___x_1605_; uint8_t v___x_1606_; uint8_t v___x_1607_; 
v___x_1603_ = l_Lean_Meta_Context_config(v___y_1599_);
v_transparency_1604_ = lean_ctor_get_uint8(v___x_1603_, 9);
lean_dec_ref(v___x_1603_);
v___x_1605_ = 0;
v___x_1606_ = 1;
v___x_1607_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_1604_, v___x_1605_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; 
v___x_1608_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(v___y_1598_, v___x_1606_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
v___y_1564_ = v___y_1602_;
v___y_1565_ = v___y_1600_;
v___y_1566_ = v___y_1599_;
v___y_1567_ = v___y_1601_;
v___y_1568_ = v___x_1608_;
goto v___jp_1563_;
}
else
{
lean_object* v_keyedConfig_1609_; uint8_t v_trackZetaDelta_1610_; lean_object* v_zetaDeltaSet_1611_; lean_object* v_lctx_1612_; lean_object* v_localInstances_1613_; lean_object* v_defEqCtx_x3f_1614_; lean_object* v_synthPendingDepth_1615_; lean_object* v_customCanUnfoldPredicate_x3f_1616_; uint8_t v_univApprox_1617_; uint8_t v_inTypeClassResolution_1618_; uint8_t v_cacheInferType_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v_keyedConfig_1609_ = lean_ctor_get(v___y_1599_, 0);
v_trackZetaDelta_1610_ = lean_ctor_get_uint8(v___y_1599_, sizeof(void*)*7);
v_zetaDeltaSet_1611_ = lean_ctor_get(v___y_1599_, 1);
v_lctx_1612_ = lean_ctor_get(v___y_1599_, 2);
v_localInstances_1613_ = lean_ctor_get(v___y_1599_, 3);
v_defEqCtx_x3f_1614_ = lean_ctor_get(v___y_1599_, 4);
v_synthPendingDepth_1615_ = lean_ctor_get(v___y_1599_, 5);
v_customCanUnfoldPredicate_x3f_1616_ = lean_ctor_get(v___y_1599_, 6);
v_univApprox_1617_ = lean_ctor_get_uint8(v___y_1599_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1618_ = lean_ctor_get_uint8(v___y_1599_, sizeof(void*)*7 + 2);
v_cacheInferType_1619_ = lean_ctor_get_uint8(v___y_1599_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1609_);
v___x_1620_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1605_, v_keyedConfig_1609_);
lean_inc(v_customCanUnfoldPredicate_x3f_1616_);
lean_inc(v_synthPendingDepth_1615_);
lean_inc(v_defEqCtx_x3f_1614_);
lean_inc_ref(v_localInstances_1613_);
lean_inc_ref(v_lctx_1612_);
lean_inc(v_zetaDeltaSet_1611_);
v___x_1621_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
lean_ctor_set(v___x_1621_, 1, v_zetaDeltaSet_1611_);
lean_ctor_set(v___x_1621_, 2, v_lctx_1612_);
lean_ctor_set(v___x_1621_, 3, v_localInstances_1613_);
lean_ctor_set(v___x_1621_, 4, v_defEqCtx_x3f_1614_);
lean_ctor_set(v___x_1621_, 5, v_synthPendingDepth_1615_);
lean_ctor_set(v___x_1621_, 6, v_customCanUnfoldPredicate_x3f_1616_);
lean_ctor_set_uint8(v___x_1621_, sizeof(void*)*7, v_trackZetaDelta_1610_);
lean_ctor_set_uint8(v___x_1621_, sizeof(void*)*7 + 1, v_univApprox_1617_);
lean_ctor_set_uint8(v___x_1621_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1618_);
lean_ctor_set_uint8(v___x_1621_, sizeof(void*)*7 + 3, v_cacheInferType_1619_);
v___x_1622_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(v___y_1598_, v___x_1606_, v___x_1621_, v___y_1600_, v___y_1601_, v___y_1602_);
lean_dec_ref_known(v___x_1621_, 7);
v___y_1564_ = v___y_1602_;
v___y_1565_ = v___y_1600_;
v___y_1566_ = v___y_1599_;
v___y_1567_ = v___y_1601_;
v___y_1568_ = v___x_1622_;
goto v___jp_1563_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___boxed(lean_object* v_a_1694_, lean_object* v___x_1695_, lean_object* v_declName_1696_, lean_object* v_declNameNonRec_1697_, lean_object* v___x_1698_, lean_object* v___f_1699_, lean_object* v_____r_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(v_a_1694_, v___x_1695_, v_declName_1696_, v_declNameNonRec_1697_, v___x_1698_, v___f_1699_, v_____r_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec_ref(v___y_1701_);
return v_res_1706_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__0));
v___x_1709_ = l_Lean_stringToMessageData(v___x_1708_);
return v___x_1709_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__2));
v___x_1712_ = l_Lean_stringToMessageData(v___x_1711_);
return v___x_1712_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9(void){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1722_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__8));
v___x_1723_ = l_Lean_stringToMessageData(v___x_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3(lean_object* v_declName_1724_, lean_object* v_a_1725_, lean_object* v___x_1726_, lean_object* v_declNameNonRec_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_){
_start:
{
lean_object* v___y_1734_; lean_object* v___y_1735_; uint8_t v___y_1736_; lean_object* v___y_1746_; lean_object* v_a_1747_; lean_object* v___y_1751_; lean_object* v___x_1753_; 
v___x_1753_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1725_, v___x_1726_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___f_1757_; lean_object* v___x_1758_; lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1782_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1753_, 1);
v___x_1755_ = l_Lean_Expr_mvarId_x21(v_a_1754_);
v___x_1756_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6));
v___f_1757_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__7));
v___x_1758_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(v___x_1756_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1761_ = v___x_1758_;
v_isShared_1762_ = v_isSharedCheck_1782_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1758_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1782_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
uint8_t v___x_1763_; 
v___x_1763_ = lean_unbox(v_a_1759_);
lean_dec(v_a_1759_);
if (v___x_1763_ == 0)
{
lean_object* v___x_1764_; lean_object* v___x_1765_; 
lean_del_object(v___x_1761_);
v___x_1764_ = lean_box(0);
lean_inc(v_declName_1724_);
v___x_1765_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(v_a_1754_, v___x_1756_, v_declName_1724_, v_declNameNonRec_1727_, v___x_1755_, v___f_1757_, v___x_1764_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
v___y_1751_ = v___x_1765_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1766_; lean_object* v___x_1768_; 
v___x_1766_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9);
lean_inc(v___x_1755_);
if (v_isShared_1762_ == 0)
{
lean_ctor_set_tag(v___x_1761_, 1);
lean_ctor_set(v___x_1761_, 0, v___x_1755_);
v___x_1768_ = v___x_1761_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___x_1755_);
v___x_1768_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1766_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
v___x_1770_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v___x_1756_, v___x_1769_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
if (lean_obj_tag(v___x_1770_) == 0)
{
lean_object* v_a_1771_; lean_object* v___x_1772_; 
v_a_1771_ = lean_ctor_get(v___x_1770_, 0);
lean_inc(v_a_1771_);
lean_dec_ref_known(v___x_1770_, 1);
lean_inc(v_declName_1724_);
v___x_1772_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(v_a_1754_, v___x_1756_, v_declName_1724_, v_declNameNonRec_1727_, v___x_1755_, v___f_1757_, v_a_1771_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
v___y_1751_ = v___x_1772_;
goto v___jp_1750_;
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
lean_dec(v___x_1755_);
lean_dec(v_a_1754_);
lean_dec(v_declNameNonRec_1727_);
v_a_1773_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1775_ = v___x_1770_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1770_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
lean_inc(v_a_1773_);
if (v_isShared_1776_ == 0)
{
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1773_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
v___y_1746_ = v___x_1778_;
v_a_1747_ = v_a_1773_;
goto v___jp_1745_;
}
}
}
}
}
}
}
else
{
lean_dec(v_declNameNonRec_1727_);
v___y_1751_ = v___x_1753_;
goto v___jp_1750_;
}
v___jp_1733_:
{
if (v___y_1736_ == 0)
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
lean_dec_ref(v___y_1734_);
v___x_1737_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1);
v___x_1738_ = l_Lean_MessageData_ofConstName(v_declName_1724_, v___y_1736_);
v___x_1739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1737_);
lean_ctor_set(v___x_1739_, 1, v___x_1738_);
v___x_1740_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3);
v___x_1741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1739_);
lean_ctor_set(v___x_1741_, 1, v___x_1740_);
v___x_1742_ = l_Lean_Exception_toMessageData(v___y_1735_);
v___x_1743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1741_);
lean_ctor_set(v___x_1743_, 1, v___x_1742_);
v___x_1744_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(v___x_1743_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
return v___x_1744_;
}
else
{
lean_dec_ref(v___y_1735_);
lean_dec(v_declName_1724_);
return v___y_1734_;
}
}
v___jp_1745_:
{
uint8_t v___x_1748_; 
v___x_1748_ = l_Lean_Exception_isInterrupt(v_a_1747_);
if (v___x_1748_ == 0)
{
uint8_t v___x_1749_; 
lean_inc_ref(v_a_1747_);
v___x_1749_ = l_Lean_Exception_isRuntime(v_a_1747_);
v___y_1734_ = v___y_1746_;
v___y_1735_ = v_a_1747_;
v___y_1736_ = v___x_1749_;
goto v___jp_1733_;
}
else
{
v___y_1734_ = v___y_1746_;
v___y_1735_ = v_a_1747_;
v___y_1736_ = v___x_1748_;
goto v___jp_1733_;
}
}
v___jp_1750_:
{
if (lean_obj_tag(v___y_1751_) == 0)
{
lean_dec(v_declName_1724_);
return v___y_1751_;
}
else
{
lean_object* v_a_1752_; 
v_a_1752_ = lean_ctor_get(v___y_1751_, 0);
lean_inc(v_a_1752_);
v___y_1746_ = v___y_1751_;
v_a_1747_ = v_a_1752_;
goto v___jp_1745_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___boxed(lean_object* v_declName_1783_, lean_object* v_a_1784_, lean_object* v___x_1785_, lean_object* v_declNameNonRec_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3(v_declName_1783_, v_a_1784_, v___x_1785_, v_declNameNonRec_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0(lean_object* v_a_1793_, lean_object* v_a_1794_){
_start:
{
if (lean_obj_tag(v_a_1793_) == 0)
{
lean_object* v___x_1795_; 
v___x_1795_ = l_List_reverse___redArg(v_a_1794_);
return v___x_1795_;
}
else
{
lean_object* v_head_1796_; lean_object* v_tail_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1806_; 
v_head_1796_ = lean_ctor_get(v_a_1793_, 0);
v_tail_1797_ = lean_ctor_get(v_a_1793_, 1);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_a_1793_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1799_ = v_a_1793_;
v_isShared_1800_ = v_isSharedCheck_1806_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_tail_1797_);
lean_inc(v_head_1796_);
lean_dec(v_a_1793_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1806_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1801_; lean_object* v___x_1803_; 
v___x_1801_ = l_Lean_mkLevelParam(v_head_1796_);
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 1, v_a_1794_);
lean_ctor_set(v___x_1799_, 0, v___x_1801_);
v___x_1803_ = v___x_1799_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v___x_1801_);
lean_ctor_set(v_reuseFailAlloc_1805_, 1, v_a_1794_);
v___x_1803_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
v_a_1793_ = v_tail_1797_;
v_a_1794_ = v___x_1803_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4(lean_object* v_levelParams_1807_, lean_object* v_declName_1808_, lean_object* v_declNameNonRec_1809_, lean_object* v_name_1810_, lean_object* v_xs_1811_, lean_object* v_body_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v___x_1818_; lean_object* v_us_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1818_ = lean_box(0);
lean_inc(v_levelParams_1807_);
v_us_1819_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0(v_levelParams_1807_, v___x_1818_);
lean_inc(v_declName_1808_);
v___x_1820_ = l_Lean_mkConst(v_declName_1808_, v_us_1819_);
v___x_1821_ = l_Lean_mkAppN(v___x_1820_, v_xs_1811_);
v___x_1822_ = l_Lean_Meta_mkEq(v___x_1821_, v_body_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; lean_object* v___x_1824_; lean_object* v___f_1825_; uint8_t v___x_1826_; lean_object* v___x_1827_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc_n(v_a_1823_, 2);
lean_dec_ref_known(v___x_1822_, 1);
v___x_1824_ = lean_box(0);
v___f_1825_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___boxed), 9, 4);
lean_closure_set(v___f_1825_, 0, v_declName_1808_);
lean_closure_set(v___f_1825_, 1, v_a_1823_);
lean_closure_set(v___f_1825_, 2, v___x_1824_);
lean_closure_set(v___f_1825_, 3, v_declNameNonRec_1809_);
v___x_1826_ = 0;
v___x_1827_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___redArg(v___f_1825_, v___x_1826_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; uint8_t v___x_1829_; uint8_t v___x_1830_; lean_object* v___x_1831_; 
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v___x_1827_, 1);
v___x_1829_ = 1;
v___x_1830_ = 1;
v___x_1831_ = l_Lean_Meta_mkForallFVars(v_xs_1811_, v_a_1823_, v___x_1826_, v___x_1829_, v___x_1829_, v___x_1830_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1833_; 
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
lean_inc(v_a_1832_);
lean_dec_ref_known(v___x_1831_, 1);
v___x_1833_ = l_Lean_Meta_letToHave(v_a_1832_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_a_1834_; lean_object* v___x_1835_; 
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v___x_1833_, 1);
v___x_1835_ = l_Lean_Meta_mkLambdaFVars(v_xs_1811_, v_a_1828_, v___x_1826_, v___x_1829_, v___x_1826_, v___x_1829_, v___x_1830_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v_a_1841_; lean_object* v___x_1842_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref_known(v___x_1835_, 1);
lean_inc(v_name_1810_);
v___x_1837_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1837_, 0, v_name_1810_);
lean_ctor_set(v___x_1837_, 1, v_levelParams_1807_);
lean_ctor_set(v___x_1837_, 2, v_a_1834_);
v___x_1838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1838_, 0, v_name_1810_);
lean_ctor_set(v___x_1838_, 1, v___x_1818_);
v___x_1839_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1837_);
lean_ctor_set(v___x_1839_, 1, v_a_1836_);
lean_ctor_set(v___x_1839_, 2, v___x_1838_);
v___x_1840_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg(v___x_1839_, v___y_1816_);
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref(v___x_1840_);
v___x_1842_ = l_Lean_addDecl(v_a_1841_, v___x_1826_, v___y_1815_, v___y_1816_);
return v___x_1842_;
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec(v_a_1834_);
lean_dec(v_name_1810_);
lean_dec(v_levelParams_1807_);
v_a_1843_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1835_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1835_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
lean_dec(v_a_1828_);
lean_dec(v_name_1810_);
lean_dec(v_levelParams_1807_);
v_a_1851_ = lean_ctor_get(v___x_1833_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1833_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1833_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1833_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
lean_dec(v_a_1828_);
lean_dec(v_name_1810_);
lean_dec(v_levelParams_1807_);
v_a_1859_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v___x_1831_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1831_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_a_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
else
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
lean_dec(v_a_1823_);
lean_dec(v_name_1810_);
lean_dec(v_levelParams_1807_);
v_a_1867_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1827_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1827_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_dec(v_name_1810_);
lean_dec(v_declNameNonRec_1809_);
lean_dec(v_declName_1808_);
lean_dec(v_levelParams_1807_);
v_a_1875_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1822_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1822_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4___boxed(lean_object* v_levelParams_1883_, lean_object* v_declName_1884_, lean_object* v_declNameNonRec_1885_, lean_object* v_name_1886_, lean_object* v_xs_1887_, lean_object* v_body_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4(v_levelParams_1883_, v_declName_1884_, v_declNameNonRec_1885_, v_name_1886_, v_xs_1887_, v_body_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec_ref(v_xs_1887_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize(lean_object* v_declName_1895_, lean_object* v_info_1896_, lean_object* v_name_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_){
_start:
{
lean_object* v_toCold_1903_; lean_object* v_levelParams_1904_; lean_object* v_value_1905_; lean_object* v_declNameNonRec_1906_; lean_object* v_currRecDepth_1907_; lean_object* v_ref_1908_; uint8_t v_suppressElabErrors_1909_; lean_object* v_fileName_1910_; lean_object* v_fileMap_1911_; lean_object* v_options_1912_; lean_object* v_currNamespace_1913_; lean_object* v_openDecls_1914_; lean_object* v_initHeartbeats_1915_; lean_object* v_maxHeartbeats_1916_; lean_object* v_quotContext_1917_; lean_object* v_currMacroScope_1918_; lean_object* v_cancelTk_x3f_1919_; lean_object* v_inheritedTraceOptions_1920_; lean_object* v___f_1921_; uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; uint8_t v___x_1926_; lean_object* v_fileName_1928_; lean_object* v_fileMap_1929_; lean_object* v_currNamespace_1930_; lean_object* v_openDecls_1931_; lean_object* v_initHeartbeats_1932_; lean_object* v_maxHeartbeats_1933_; lean_object* v_quotContext_1934_; lean_object* v_currMacroScope_1935_; lean_object* v_cancelTk_x3f_1936_; lean_object* v_inheritedTraceOptions_1937_; lean_object* v_currRecDepth_1938_; lean_object* v_ref_1939_; uint8_t v_suppressElabErrors_1940_; lean_object* v___y_1941_; lean_object* v___x_1947_; uint8_t v___y_1949_; lean_object* v_env_1970_; uint8_t v___x_1971_; 
v_toCold_1903_ = lean_ctor_get(v_a_1900_, 0);
v_levelParams_1904_ = lean_ctor_get(v_info_1896_, 1);
lean_inc(v_levelParams_1904_);
v_value_1905_ = lean_ctor_get(v_info_1896_, 3);
lean_inc_ref(v_value_1905_);
v_declNameNonRec_1906_ = lean_ctor_get(v_info_1896_, 5);
lean_inc(v_declNameNonRec_1906_);
lean_dec_ref(v_info_1896_);
v_currRecDepth_1907_ = lean_ctor_get(v_a_1900_, 1);
v_ref_1908_ = lean_ctor_get(v_a_1900_, 2);
v_suppressElabErrors_1909_ = lean_ctor_get_uint8(v_a_1900_, sizeof(void*)*3 + 1);
v_fileName_1910_ = lean_ctor_get(v_toCold_1903_, 0);
v_fileMap_1911_ = lean_ctor_get(v_toCold_1903_, 1);
v_options_1912_ = lean_ctor_get(v_toCold_1903_, 2);
v_currNamespace_1913_ = lean_ctor_get(v_toCold_1903_, 4);
v_openDecls_1914_ = lean_ctor_get(v_toCold_1903_, 5);
v_initHeartbeats_1915_ = lean_ctor_get(v_toCold_1903_, 6);
v_maxHeartbeats_1916_ = lean_ctor_get(v_toCold_1903_, 7);
v_quotContext_1917_ = lean_ctor_get(v_toCold_1903_, 8);
v_currMacroScope_1918_ = lean_ctor_get(v_toCold_1903_, 9);
v_cancelTk_x3f_1919_ = lean_ctor_get(v_toCold_1903_, 10);
v_inheritedTraceOptions_1920_ = lean_ctor_get(v_toCold_1903_, 11);
v___f_1921_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4___boxed), 11, 4);
lean_closure_set(v___f_1921_, 0, v_levelParams_1904_);
lean_closure_set(v___f_1921_, 1, v_declName_1895_);
lean_closure_set(v___f_1921_, 2, v_declNameNonRec_1906_);
lean_closure_set(v___f_1921_, 3, v_name_1897_);
v___x_1922_ = 0;
v___x_1923_ = l_Lean_Meta_tactic_hygienic;
lean_inc_ref(v_options_1912_);
v___x_1924_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(v_options_1912_, v___x_1923_, v___x_1922_);
v___x_1925_ = l_Lean_diagnostics;
v___x_1926_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(v___x_1924_, v___x_1925_);
v___x_1947_ = lean_st_ref_get(v_a_1901_);
v_env_1970_ = lean_ctor_get(v___x_1947_, 0);
lean_inc_ref(v_env_1970_);
lean_dec(v___x_1947_);
v___x_1971_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1970_);
lean_dec_ref(v_env_1970_);
if (v___x_1926_ == 0)
{
if (v___x_1971_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_1920_);
lean_inc(v_cancelTk_x3f_1919_);
lean_inc(v_currMacroScope_1918_);
lean_inc(v_quotContext_1917_);
lean_inc(v_maxHeartbeats_1916_);
lean_inc(v_initHeartbeats_1915_);
lean_inc(v_openDecls_1914_);
lean_inc(v_currNamespace_1913_);
lean_inc_ref(v_fileMap_1911_);
lean_inc_ref(v_fileName_1910_);
v_fileName_1928_ = v_fileName_1910_;
v_fileMap_1929_ = v_fileMap_1911_;
v_currNamespace_1930_ = v_currNamespace_1913_;
v_openDecls_1931_ = v_openDecls_1914_;
v_initHeartbeats_1932_ = v_initHeartbeats_1915_;
v_maxHeartbeats_1933_ = v_maxHeartbeats_1916_;
v_quotContext_1934_ = v_quotContext_1917_;
v_currMacroScope_1935_ = v_currMacroScope_1918_;
v_cancelTk_x3f_1936_ = v_cancelTk_x3f_1919_;
v_inheritedTraceOptions_1937_ = v_inheritedTraceOptions_1920_;
v_currRecDepth_1938_ = v_currRecDepth_1907_;
v_ref_1939_ = v_ref_1908_;
v_suppressElabErrors_1940_ = v_suppressElabErrors_1909_;
v___y_1941_ = v_a_1901_;
goto v___jp_1927_;
}
else
{
v___y_1949_ = v___x_1926_;
goto v___jp_1948_;
}
}
else
{
v___y_1949_ = v___x_1971_;
goto v___jp_1948_;
}
v___jp_1927_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1942_ = l_Lean_maxRecDepth;
v___x_1943_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5(v___x_1924_, v___x_1942_);
v___x_1944_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1944_, 0, v_fileName_1928_);
lean_ctor_set(v___x_1944_, 1, v_fileMap_1929_);
lean_ctor_set(v___x_1944_, 2, v___x_1924_);
lean_ctor_set(v___x_1944_, 3, v___x_1943_);
lean_ctor_set(v___x_1944_, 4, v_currNamespace_1930_);
lean_ctor_set(v___x_1944_, 5, v_openDecls_1931_);
lean_ctor_set(v___x_1944_, 6, v_initHeartbeats_1932_);
lean_ctor_set(v___x_1944_, 7, v_maxHeartbeats_1933_);
lean_ctor_set(v___x_1944_, 8, v_quotContext_1934_);
lean_ctor_set(v___x_1944_, 9, v_currMacroScope_1935_);
lean_ctor_set(v___x_1944_, 10, v_cancelTk_x3f_1936_);
lean_ctor_set(v___x_1944_, 11, v_inheritedTraceOptions_1937_);
lean_inc(v_ref_1939_);
lean_inc(v_currRecDepth_1938_);
v___x_1945_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1945_, 0, v___x_1944_);
lean_ctor_set(v___x_1945_, 1, v_currRecDepth_1938_);
lean_ctor_set(v___x_1945_, 2, v_ref_1939_);
lean_ctor_set_uint8(v___x_1945_, sizeof(void*)*3, v___x_1926_);
lean_ctor_set_uint8(v___x_1945_, sizeof(void*)*3 + 1, v_suppressElabErrors_1940_);
v___x_1946_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg(v_value_1905_, v___f_1921_, v___x_1922_, v_a_1898_, v_a_1899_, v___x_1945_, v___y_1941_);
lean_dec_ref_known(v___x_1945_, 3);
return v___x_1946_;
}
v___jp_1948_:
{
if (v___y_1949_ == 0)
{
lean_object* v___x_1950_; lean_object* v_env_1951_; lean_object* v_nextMacroScope_1952_; lean_object* v_ngen_1953_; lean_object* v_auxDeclNGen_1954_; lean_object* v_traceState_1955_; lean_object* v_messages_1956_; lean_object* v_infoState_1957_; lean_object* v_snapshotTasks_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1968_; 
v___x_1950_ = lean_st_ref_take(v_a_1901_);
v_env_1951_ = lean_ctor_get(v___x_1950_, 0);
v_nextMacroScope_1952_ = lean_ctor_get(v___x_1950_, 1);
v_ngen_1953_ = lean_ctor_get(v___x_1950_, 2);
v_auxDeclNGen_1954_ = lean_ctor_get(v___x_1950_, 3);
v_traceState_1955_ = lean_ctor_get(v___x_1950_, 4);
v_messages_1956_ = lean_ctor_get(v___x_1950_, 6);
v_infoState_1957_ = lean_ctor_get(v___x_1950_, 7);
v_snapshotTasks_1958_ = lean_ctor_get(v___x_1950_, 8);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_1968_ == 0)
{
lean_object* v_unused_1969_; 
v_unused_1969_ = lean_ctor_get(v___x_1950_, 5);
lean_dec(v_unused_1969_);
v___x_1960_ = v___x_1950_;
v_isShared_1961_ = v_isSharedCheck_1968_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_snapshotTasks_1958_);
lean_inc(v_infoState_1957_);
lean_inc(v_messages_1956_);
lean_inc(v_traceState_1955_);
lean_inc(v_auxDeclNGen_1954_);
lean_inc(v_ngen_1953_);
lean_inc(v_nextMacroScope_1952_);
lean_inc(v_env_1951_);
lean_dec(v___x_1950_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1968_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1962_ = l_Lean_Kernel_enableDiag(v_env_1951_, v___x_1926_);
v___x_1963_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2);
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 5, v___x_1963_);
lean_ctor_set(v___x_1960_, 0, v___x_1962_);
v___x_1965_ = v___x_1960_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1962_);
lean_ctor_set(v_reuseFailAlloc_1967_, 1, v_nextMacroScope_1952_);
lean_ctor_set(v_reuseFailAlloc_1967_, 2, v_ngen_1953_);
lean_ctor_set(v_reuseFailAlloc_1967_, 3, v_auxDeclNGen_1954_);
lean_ctor_set(v_reuseFailAlloc_1967_, 4, v_traceState_1955_);
lean_ctor_set(v_reuseFailAlloc_1967_, 5, v___x_1963_);
lean_ctor_set(v_reuseFailAlloc_1967_, 6, v_messages_1956_);
lean_ctor_set(v_reuseFailAlloc_1967_, 7, v_infoState_1957_);
lean_ctor_set(v_reuseFailAlloc_1967_, 8, v_snapshotTasks_1958_);
v___x_1965_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
lean_object* v___x_1966_; 
v___x_1966_ = lean_st_ref_put(v_a_1901_, v___x_1965_);
lean_inc_ref(v_inheritedTraceOptions_1920_);
lean_inc(v_cancelTk_x3f_1919_);
lean_inc(v_currMacroScope_1918_);
lean_inc(v_quotContext_1917_);
lean_inc(v_maxHeartbeats_1916_);
lean_inc(v_initHeartbeats_1915_);
lean_inc(v_openDecls_1914_);
lean_inc(v_currNamespace_1913_);
lean_inc_ref(v_fileMap_1911_);
lean_inc_ref(v_fileName_1910_);
v_fileName_1928_ = v_fileName_1910_;
v_fileMap_1929_ = v_fileMap_1911_;
v_currNamespace_1930_ = v_currNamespace_1913_;
v_openDecls_1931_ = v_openDecls_1914_;
v_initHeartbeats_1932_ = v_initHeartbeats_1915_;
v_maxHeartbeats_1933_ = v_maxHeartbeats_1916_;
v_quotContext_1934_ = v_quotContext_1917_;
v_currMacroScope_1935_ = v_currMacroScope_1918_;
v_cancelTk_x3f_1936_ = v_cancelTk_x3f_1919_;
v_inheritedTraceOptions_1937_ = v_inheritedTraceOptions_1920_;
v_currRecDepth_1938_ = v_currRecDepth_1907_;
v_ref_1939_ = v_ref_1908_;
v_suppressElabErrors_1940_ = v_suppressElabErrors_1909_;
v___y_1941_ = v_a_1901_;
goto v___jp_1927_;
}
}
}
else
{
lean_inc_ref(v_inheritedTraceOptions_1920_);
lean_inc(v_cancelTk_x3f_1919_);
lean_inc(v_currMacroScope_1918_);
lean_inc(v_quotContext_1917_);
lean_inc(v_maxHeartbeats_1916_);
lean_inc(v_initHeartbeats_1915_);
lean_inc(v_openDecls_1914_);
lean_inc(v_currNamespace_1913_);
lean_inc_ref(v_fileMap_1911_);
lean_inc_ref(v_fileName_1910_);
v_fileName_1928_ = v_fileName_1910_;
v_fileMap_1929_ = v_fileMap_1911_;
v_currNamespace_1930_ = v_currNamespace_1913_;
v_openDecls_1931_ = v_openDecls_1914_;
v_initHeartbeats_1932_ = v_initHeartbeats_1915_;
v_maxHeartbeats_1933_ = v_maxHeartbeats_1916_;
v_quotContext_1934_ = v_quotContext_1917_;
v_currMacroScope_1935_ = v_currMacroScope_1918_;
v_cancelTk_x3f_1936_ = v_cancelTk_x3f_1919_;
v_inheritedTraceOptions_1937_ = v_inheritedTraceOptions_1920_;
v_currRecDepth_1938_ = v_currRecDepth_1907_;
v_ref_1939_ = v_ref_1908_;
v_suppressElabErrors_1940_ = v_suppressElabErrors_1909_;
v___y_1941_ = v_a_1901_;
goto v___jp_1927_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___boxed(lean_object* v_declName_1972_, lean_object* v_info_1973_, lean_object* v_name_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize(v_declName_1972_, v_info_1973_, v_name_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_);
lean_dec(v_a_1978_);
lean_dec_ref(v_a_1977_);
lean_dec(v_a_1976_);
lean_dec_ref(v_a_1975_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(lean_object* v_declName_1981_, lean_object* v_info_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_){
_start:
{
lean_object* v___x_1988_; lean_object* v_env_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1988_ = lean_st_ref_get(v_a_1986_);
v_env_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc_ref(v_env_1989_);
lean_dec(v___x_1988_);
v___x_1990_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc_n(v_declName_1981_, 2);
v___x_1991_ = l_Lean_Meta_mkEqLikeNameFor(v_env_1989_, v_declName_1981_, v___x_1990_);
lean_inc_n(v___x_1991_, 2);
v___x_1992_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___boxed), 8, 3);
lean_closure_set(v___x_1992_, 0, v_declName_1981_);
lean_closure_set(v___x_1992_, 1, v_info_1982_);
lean_closure_set(v___x_1992_, 2, v___x_1991_);
v___x_1993_ = l_Lean_Meta_realizeConst(v_declName_1981_, v___x_1991_, v___x_1992_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2000_; 
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2000_ == 0)
{
lean_object* v_unused_2001_; 
v_unused_2001_ = lean_ctor_get(v___x_1993_, 0);
lean_dec(v_unused_2001_);
v___x_1995_ = v___x_1993_;
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
else
{
lean_dec(v___x_1993_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 0, v___x_1991_);
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1991_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_dec(v___x_1991_);
v_a_2002_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1993_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1993_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2007_; 
if (v_isShared_2005_ == 0)
{
v___x_2007_ = v___x_2004_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_a_2002_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq___boxed(lean_object* v_declName_2010_, lean_object* v_info_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v___y_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(v_declName_2010_, v_info_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_);
lean_dec(v_a_2015_);
lean_dec_ref(v_a_2014_);
lean_dec(v_a_2013_);
lean_dec_ref(v_a_2012_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f(lean_object* v_declName_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_){
_start:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v_env_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v_env_2030_; uint8_t v___x_2031_; uint8_t v___x_2032_; 
v___x_2024_ = l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default;
v___x_2025_ = lean_st_ref_get(v_a_2022_);
v_env_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc_ref(v_env_2026_);
lean_dec(v___x_2025_);
v___x_2027_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc(v_declName_2018_);
v___x_2028_ = l_Lean_Meta_mkEqLikeNameFor(v_env_2026_, v_declName_2018_, v___x_2027_);
v___x_2029_ = lean_st_ref_get(v_a_2022_);
v_env_2030_ = lean_ctor_get(v___x_2029_, 0);
lean_inc_ref_n(v_env_2030_, 2);
lean_dec(v___x_2029_);
v___x_2031_ = 1;
lean_inc(v___x_2028_);
v___x_2032_ = l_Lean_Environment_contains(v_env_2030_, v___x_2028_, v___x_2031_);
if (v___x_2032_ == 0)
{
lean_object* v___x_2033_; lean_object* v_toEnvExtension_2034_; lean_object* v_asyncMode_2035_; uint8_t v___x_2036_; lean_object* v___x_2037_; 
lean_dec(v___x_2028_);
v___x_2033_ = l_Lean_Elab_PartialFixpoint_eqnInfoExt;
v_toEnvExtension_2034_ = lean_ctor_get(v___x_2033_, 0);
v_asyncMode_2035_ = lean_ctor_get(v_toEnvExtension_2034_, 2);
v___x_2036_ = 0;
lean_inc(v_declName_2018_);
v___x_2037_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_2024_, v___x_2033_, v_env_2030_, v_declName_2018_, v_asyncMode_2035_, v___x_2036_);
if (lean_obj_tag(v___x_2037_) == 1)
{
lean_object* v_val_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2062_; 
v_val_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2062_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_val_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2062_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; 
v___x_2042_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(v_declName_2018_, v_val_2038_, v_a_2019_, v_a_2020_, v_a_2021_, v_a_2022_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2053_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2053_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2053_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v_a_2043_);
v___x_2048_ = v___x_2040_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
lean_object* v___x_2050_; 
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 0, v___x_2048_);
v___x_2050_ = v___x_2045_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2048_);
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
else
{
lean_object* v_a_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2061_; 
lean_del_object(v___x_2040_);
v_a_2054_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2061_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2056_ = v___x_2042_;
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_a_2054_);
lean_dec(v___x_2042_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2059_; 
if (v_isShared_2057_ == 0)
{
v___x_2059_ = v___x_2056_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v_a_2054_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
}
}
else
{
lean_object* v___x_2063_; lean_object* v___x_2064_; 
lean_dec(v___x_2037_);
lean_dec(v_declName_2018_);
v___x_2063_ = lean_box(0);
v___x_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2063_);
return v___x_2064_;
}
}
else
{
lean_object* v___x_2065_; lean_object* v___x_2066_; 
lean_dec_ref(v_env_2030_);
lean_dec(v_declName_2018_);
v___x_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2028_);
v___x_2066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
return v___x_2066_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f___boxed(lean_object* v_declName_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f(v_declName_2067_, v_a_2068_, v_a_2069_, v_a_2070_, v_a_2071_);
lean_dec(v_a_2071_);
lean_dec_ref(v_a_2070_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2076_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_));
v___x_2077_ = l_Lean_Meta_registerGetUnfoldEqnFn(v___x_2076_);
return v___x_2077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2____boxed(lean_object* v___y_2078_){
_start:
{
lean_object* v_res_2079_; 
v_res_2079_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_();
return v_res_2079_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* runtime_initialize_Init_Internal_Order_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default = _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default();
lean_mark_persistent(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default);
l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo = _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo();
lean_mark_persistent(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo);
res = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_3225328890____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_PartialFixpoint_eqnInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_PartialFixpoint_eqnInfoExt);
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* initialize_Init_Internal_Order_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
}
#ifdef __cplusplus
}
#endif
