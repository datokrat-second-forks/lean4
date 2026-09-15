// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Fix
// Imports: public import Lean.Data.Array public import Lean.Elab.PreDefinition.Basic public import Lean.Elab.PreDefinition.WF.Basic public import Lean.Meta.ArgsPacker public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Meta.Tactic.Cleanup public import Lean.Util.HasConstCache
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
lean_object* l_Lean_stringToMessageData(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_unpack(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getRecAppSyntax_x3f(lean_object*);
lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_applyCleanWfTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Elab_Term_reportUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_setGoals___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Term_withDeclName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRecAppWithSyntax(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Cleanup_0__Lean_Meta_cleanupCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_HasConstCache_containsUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMData(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_Elab_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
lean_object* l_Lean_LocalContext_size(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_local_ctx_is_empty(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "replaceRecApps"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(40, 215, 222, 176, 152, 52, 0, 225)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(222, 200, 98, 106, 253, 180, 239, 155)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(54, 49, 183, 192, 189, 122, 168, 8)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(68, 153, 95, 135, 30, 171, 176, 236)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Type check every step of the well-founded definition translation"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WF"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(24, 25, 43, 203, 194, 237, 195, 214)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(7, 7, 223, 43, 113, 218, 153, 204)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(253, 66, 61, 195, 239, 57, 103, 30)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(65, 40, 109, 48, 223, 99, 87, 96)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_5),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(255, 91, 253, 16, 215, 73, 25, 62)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_debug_definition_wf_replaceRecApps;
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected empty local context"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Type not preserved transforming"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\nType was"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\nand now is"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Type error introduced when transforming"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__7 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__8 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__9 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__9_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__10 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__10_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__11 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__11_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Match.MatcherApp.Basic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.matchMatcherApp\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "replaceRecApp: eta-expanding"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "unexpected matcher application alternative"};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\nat application"};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "type of functorial "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " is"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "replaceRecApps:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inl"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PSum"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(14, 217, 178, 28, 107, 212, 157, 131)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inr"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_value),LEAN_SCALAR_PTR_LITERAL(201, 156, 94, 164, 220, 114, 107, 70)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "casesOn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(166, 115, 173, 38, 27, 113, 160, 8)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "_private.Lean.Elab.PreDefinition.WF.Fix.0.Lean.Elab.WF.processPSigmaCasesOn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Elab.PreDefinition.WF.Fix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "PSigma"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(248, 249, 30, 71, 49, 108, 60, 175)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed(lean_object**);
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(225, 129, 3, 119, 45, 252, 168, 83)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "tacticDecreasing_tactic"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 100, 186, 108, 185, 30, 251, 120)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "decreasing_tactic"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_WF_assignSubsumed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_WF_assignSubsumed___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_WF_assignSubsumed___closed__0 = (const lean_object*)&l_Lean_Elab_WF_assignSubsumed___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "MVar does not look like a recursive call:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Cannot unpack param, unexpected expression:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "MVar not annotated as a recursive call:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_isNatLtWF___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "invImage"};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__0 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__0_value;
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 194, 127, 152, 147, 1, 182, 44)}};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__1 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__1_value;
static const lean_string_object l_Lean_Elab_WF_isNatLtWF___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__2 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value;
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__3 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__3_value;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__4;
static const lean_string_object l_Lean_Elab_WF_isNatLtWF___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lt_wfRel"};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__5 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__5_value;
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__5_value),LEAN_SCALAR_PTR_LITERAL(154, 103, 103, 42, 122, 250, 41, 80)}};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__6 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__6_value;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "WellFounded"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fix"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(153, 177, 70, 214, 156, 62, 227, 219)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value),LEAN_SCALAR_PTR_LITERAL(209, 126, 194, 128, 117, 36, 224, 78)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(196, 0, 160, 225, 119, 146, 123, 62)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__2_value;
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "WellFoundedRelation"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(247, 146, 95, 132, 177, 137, 153, 47)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__4_value;
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "opaqueId"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__5_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(194, 89, 34, 148, 92, 203, 118, 146)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(153, 177, 70, 214, 156, 62, 227, 219)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(172, 133, 211, 204, 28, 206, 53, 233)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_WF_mkFix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_mkFix___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mkFix___closed__0_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_mkFix___closed__1 = (const lean_object*)&l_Lean_Elab_WF_mkFix___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_61_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_));
v___x_62_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_));
v___x_63_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_));
v___x_64_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(v___x_61_, v___x_62_, v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4____boxed(lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_();
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(lean_object* v_decreasingProp_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_ref_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v_ref_75_ = lean_ctor_get(v___y_72_, 2);
lean_inc(v_ref_75_);
v___x_76_ = l_Lean_mkRecAppWithSyntax(v_decreasingProp_69_, v_ref_75_);
v___x_77_ = lean_box(0);
v___x_78_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_76_, v___x_77_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
if (lean_obj_tag(v___x_78_) == 0)
{
lean_object* v_a_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; 
v_a_79_ = lean_ctor_get(v___x_78_, 0);
lean_inc(v_a_79_);
lean_dec_ref_known(v___x_78_, 1);
v___x_80_ = l_Lean_Expr_mvarId_x21(v_a_79_);
v___x_81_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0));
v___x_82_ = 1;
v___x_83_ = l___private_Lean_Meta_Tactic_Cleanup_0__Lean_Meta_cleanupCore(v___x_80_, v___x_81_, v___x_82_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_90_; 
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_90_ == 0)
{
lean_object* v_unused_91_; 
v_unused_91_ = lean_ctor_get(v___x_83_, 0);
lean_dec(v_unused_91_);
v___x_85_ = v___x_83_;
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
else
{
lean_dec(v___x_83_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_88_; 
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v_a_79_);
v___x_88_ = v___x_85_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_a_79_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec(v_a_79_);
v_a_92_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_83_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_83_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
else
{
return v___x_78_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___boxed(lean_object* v_decreasingProp_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v_decreasingProp_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(lean_object* v_decreasingProp_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v_decreasingProp_107_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___boxed(lean_object* v_decreasingProp_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(v_decreasingProp_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
lean_dec(v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(lean_object* v_msg_125_){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = l_Lean_instInhabitedLocalDecl_default;
v___x_127_ = lean_panic_fn_borrowed(v___x_126_, v_msg_125_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(lean_object* v_msgData_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; lean_object* v_env_135_; lean_object* v___x_136_; lean_object* v_toCold_137_; lean_object* v_mctx_138_; lean_object* v_lctx_139_; lean_object* v_options_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_134_ = lean_st_ref_get(v___y_132_);
v_env_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc_ref(v_env_135_);
lean_dec(v___x_134_);
v___x_136_ = lean_st_ref_get(v___y_130_);
v_toCold_137_ = lean_ctor_get(v___y_131_, 0);
v_mctx_138_ = lean_ctor_get(v___x_136_, 0);
lean_inc_ref(v_mctx_138_);
lean_dec(v___x_136_);
v_lctx_139_ = lean_ctor_get(v___y_129_, 2);
v_options_140_ = lean_ctor_get(v_toCold_137_, 2);
lean_inc_ref(v_options_140_);
lean_inc_ref(v_lctx_139_);
v___x_141_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_141_, 0, v_env_135_);
lean_ctor_set(v___x_141_, 1, v_mctx_138_);
lean_ctor_set(v___x_141_, 2, v_lctx_139_);
lean_ctor_set(v___x_141_, 3, v_options_140_);
v___x_142_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v_msgData_128_);
v___x_143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1___boxed(lean_object* v_msgData_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msgData_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(lean_object* v_msg_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v_ref_157_; lean_object* v___x_158_; lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_167_; 
v_ref_157_ = lean_ctor_get(v___y_154_, 2);
v___x_158_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
v_a_159_ = lean_ctor_get(v___x_158_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_167_ == 0)
{
v___x_161_ = v___x_158_;
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_158_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_163_; lean_object* v___x_165_; 
lean_inc(v_ref_157_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v_ref_157_);
lean_ctor_set(v___x_163_, 1, v_a_159_);
if (v_isShared_162_ == 0)
{
lean_ctor_set_tag(v___x_161_, 1);
lean_ctor_set(v___x_161_, 0, v___x_163_);
v___x_165_ = v___x_161_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg___boxed(lean_object* v_msg_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v_msg_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
return v_res_174_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_178_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2));
v___x_179_ = lean_unsigned_to_nat(14u);
v___x_180_ = lean_unsigned_to_nat(22u);
v___x_181_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1));
v___x_182_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0));
v___x_183_ = l_mkPanicMessageWithDecl(v___x_182_, v___x_181_, v___x_180_, v___x_179_, v___x_178_);
return v___x_183_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4));
v___x_186_ = l_Lean_stringToMessageData(v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_){
_start:
{
lean_object* v___y_193_; lean_object* v___y_197_; lean_object* v_lctx_201_; lean_object* v___x_202_; uint8_t v___x_212_; 
v_lctx_201_ = lean_ctor_get(v___y_187_, 2);
v___x_202_ = lean_box(0);
lean_inc_ref(v_lctx_201_);
v___x_212_ = lean_local_ctx_is_empty(v_lctx_201_);
if (v___x_212_ == 0)
{
goto v___jp_203_;
}
else
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
v___x_213_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5);
v___x_214_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_213_, v___y_187_, v___y_188_, v___y_189_, v___y_190_);
v_a_215_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_214_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_214_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = l_Lean_LocalDecl_fvarId(v___y_193_);
lean_dec_ref(v___y_193_);
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
return v___x_195_;
}
v___jp_196_:
{
if (lean_obj_tag(v___y_197_) == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3);
v___x_199_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(v___x_198_);
v___y_193_ = v___x_199_;
goto v___jp_192_;
}
else
{
lean_object* v_val_200_; 
v_val_200_ = lean_ctor_get(v___y_197_, 0);
lean_inc(v_val_200_);
lean_dec_ref_known(v___y_197_, 1);
v___y_193_ = v_val_200_;
goto v___jp_192_;
}
}
v___jp_203_:
{
lean_object* v_decls_204_; lean_object* v_size_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v_decls_204_ = lean_ctor_get(v_lctx_201_, 1);
v_size_205_ = lean_ctor_get(v_decls_204_, 2);
v___x_206_ = l_Lean_LocalContext_size(v_lctx_201_);
v___x_207_ = lean_unsigned_to_nat(1u);
v___x_208_ = lean_nat_sub(v___x_206_, v___x_207_);
lean_dec(v___x_206_);
v___x_209_ = lean_nat_dec_lt(v___x_208_, v_size_205_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
lean_dec(v___x_208_);
v___x_210_ = l_outOfBounds___redArg(v___x_202_);
v___y_197_ = v___x_210_;
goto v___jp_196_;
}
else
{
lean_object* v___x_211_; 
v___x_211_ = l_Lean_PersistentArray_get_x21___redArg(v___x_202_, v_decls_204_, v___x_208_);
lean_dec(v___x_208_);
v___y_197_ = v___x_211_;
goto v___jp_196_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___boxed(lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(v___y_223_, v___y_224_, v___y_225_, v___y_226_);
lean_dec(v___y_226_);
lean_dec_ref(v___y_225_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(lean_object* v_00_u03b1_229_, lean_object* v_msg_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v_msg_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___boxed(lean_object* v_00_u03b1_237_, lean_object* v_msg_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(v_00_u03b1_237_, v_msg_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(lean_object* v_lctxid_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_lctx_248_; uint8_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_lctx_248_ = lean_ctor_get(v___y_246_, 2);
v___x_249_ = l_Lean_LocalContext_contains(v_lctx_248_, v_lctxid_245_);
v___x_250_ = lean_box(v___x_249_);
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg___boxed(lean_object* v_lctxid_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_lctxid_252_, v___y_253_);
lean_dec_ref(v___y_253_);
lean_dec(v_lctxid_252_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(lean_object* v_lctxid_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_lctxid_256_, v___y_257_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___boxed(lean_object* v_lctxid_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(v_lctxid_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v_lctxid_263_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(lean_object* v_recFnName_270_, lean_object* v_e_271_, lean_object* v___y_272_){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v_fst_279_; lean_object* v_snd_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_274_ = lean_st_ref_take(v___y_272_);
v___x_275_ = lean_unsigned_to_nat(1u);
v___x_276_ = lean_mk_empty_array_with_capacity(v___x_275_);
v___x_277_ = lean_array_push(v___x_276_, v_recFnName_270_);
v___x_278_ = l_Lean_HasConstCache_containsUnsafe(v___x_277_, v_e_271_, v___x_274_);
lean_dec_ref(v___x_277_);
v_fst_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_fst_279_);
v_snd_280_ = lean_ctor_get(v___x_278_, 1);
lean_inc(v_snd_280_);
lean_dec_ref(v___x_278_);
v___x_281_ = lean_st_ref_put(v___y_272_, v_snd_280_);
v___x_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_282_, 0, v_fst_279_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___boxed(lean_object* v_recFnName_283_, lean_object* v_e_284_, lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_283_, v_e_284_, v___y_285_);
lean_dec(v___y_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(lean_object* v_recFnName_288_, lean_object* v_e_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_288_, v_e_289_, v___y_290_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___boxed(lean_object* v_recFnName_300_, lean_object* v_e_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(v_recFnName_300_, v_e_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_);
lean_dec(v___y_309_);
lean_dec_ref(v___y_308_);
lean_dec(v___y_307_);
lean_dec_ref(v___y_306_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
lean_dec(v___y_303_);
lean_dec(v___y_302_);
return v_res_311_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_312_; double v___x_313_; 
v___x_312_ = lean_unsigned_to_nat(0u);
v___x_313_ = lean_float_of_nat(v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(lean_object* v_cls_317_, lean_object* v_msg_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v_ref_324_; lean_object* v___x_325_; lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_370_; 
v_ref_324_ = lean_ctor_get(v___y_321_, 2);
v___x_325_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
v_a_326_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_370_ == 0)
{
v___x_328_ = v___x_325_;
v_isShared_329_ = v_isSharedCheck_370_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_325_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_370_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; lean_object* v_traceState_331_; lean_object* v_env_332_; lean_object* v_nextMacroScope_333_; lean_object* v_ngen_334_; lean_object* v_auxDeclNGen_335_; lean_object* v_cache_336_; lean_object* v_messages_337_; lean_object* v_infoState_338_; lean_object* v_snapshotTasks_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_369_; 
v___x_330_ = lean_st_ref_take(v___y_322_);
v_traceState_331_ = lean_ctor_get(v___x_330_, 4);
v_env_332_ = lean_ctor_get(v___x_330_, 0);
v_nextMacroScope_333_ = lean_ctor_get(v___x_330_, 1);
v_ngen_334_ = lean_ctor_get(v___x_330_, 2);
v_auxDeclNGen_335_ = lean_ctor_get(v___x_330_, 3);
v_cache_336_ = lean_ctor_get(v___x_330_, 5);
v_messages_337_ = lean_ctor_get(v___x_330_, 6);
v_infoState_338_ = lean_ctor_get(v___x_330_, 7);
v_snapshotTasks_339_ = lean_ctor_get(v___x_330_, 8);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_369_ == 0)
{
v___x_341_ = v___x_330_;
v_isShared_342_ = v_isSharedCheck_369_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_snapshotTasks_339_);
lean_inc(v_infoState_338_);
lean_inc(v_messages_337_);
lean_inc(v_cache_336_);
lean_inc(v_traceState_331_);
lean_inc(v_auxDeclNGen_335_);
lean_inc(v_ngen_334_);
lean_inc(v_nextMacroScope_333_);
lean_inc(v_env_332_);
lean_dec(v___x_330_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_369_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
uint64_t v_tid_343_; lean_object* v_traces_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_368_; 
v_tid_343_ = lean_ctor_get_uint64(v_traceState_331_, sizeof(void*)*1);
v_traces_344_ = lean_ctor_get(v_traceState_331_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v_traceState_331_);
if (v_isSharedCheck_368_ == 0)
{
v___x_346_ = v_traceState_331_;
v_isShared_347_ = v_isSharedCheck_368_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_traces_344_);
lean_dec(v_traceState_331_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_368_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_348_; lean_object* v___x_349_; double v___x_350_; uint8_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_359_; 
v___x_348_ = lean_box(0);
v___x_349_ = lean_box(0);
v___x_350_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0);
v___x_351_ = 0;
v___x_352_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1));
v___x_353_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_353_, 0, v_cls_317_);
lean_ctor_set(v___x_353_, 1, v___x_349_);
lean_ctor_set(v___x_353_, 2, v___x_352_);
lean_ctor_set_float(v___x_353_, sizeof(void*)*3, v___x_350_);
lean_ctor_set_float(v___x_353_, sizeof(void*)*3 + 8, v___x_350_);
lean_ctor_set_uint8(v___x_353_, sizeof(void*)*3 + 16, v___x_351_);
v___x_354_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2));
v___x_355_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_355_, 0, v___x_353_);
lean_ctor_set(v___x_355_, 1, v_a_326_);
lean_ctor_set(v___x_355_, 2, v___x_354_);
lean_inc(v_ref_324_);
v___x_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_356_, 0, v_ref_324_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
v___x_357_ = l_Lean_PersistentArray_push___redArg(v_traces_344_, v___x_356_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 0, v___x_357_);
v___x_359_ = v___x_346_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_357_);
lean_ctor_set_uint64(v_reuseFailAlloc_367_, sizeof(void*)*1, v_tid_343_);
v___x_359_ = v_reuseFailAlloc_367_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_361_; 
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 4, v___x_359_);
v___x_361_ = v___x_341_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_env_332_);
lean_ctor_set(v_reuseFailAlloc_366_, 1, v_nextMacroScope_333_);
lean_ctor_set(v_reuseFailAlloc_366_, 2, v_ngen_334_);
lean_ctor_set(v_reuseFailAlloc_366_, 3, v_auxDeclNGen_335_);
lean_ctor_set(v_reuseFailAlloc_366_, 4, v___x_359_);
lean_ctor_set(v_reuseFailAlloc_366_, 5, v_cache_336_);
lean_ctor_set(v_reuseFailAlloc_366_, 6, v_messages_337_);
lean_ctor_set(v_reuseFailAlloc_366_, 7, v_infoState_338_);
lean_ctor_set(v_reuseFailAlloc_366_, 8, v_snapshotTasks_339_);
v___x_361_ = v_reuseFailAlloc_366_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_362_; lean_object* v___x_364_; 
v___x_362_ = lean_st_ref_put(v___y_322_, v___x_361_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 0, v___x_348_);
v___x_364_ = v___x_328_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_348_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___boxed(lean_object* v_cls_371_, lean_object* v_msg_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_371_, v_msg_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(lean_object* v_x_379_, lean_object* v_x_380_){
_start:
{
if (lean_obj_tag(v_x_380_) == 0)
{
return v_x_379_;
}
else
{
lean_object* v_key_381_; lean_object* v_value_382_; lean_object* v_tail_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_406_; 
v_key_381_ = lean_ctor_get(v_x_380_, 0);
v_value_382_ = lean_ctor_get(v_x_380_, 1);
v_tail_383_ = lean_ctor_get(v_x_380_, 2);
v_isSharedCheck_406_ = !lean_is_exclusive(v_x_380_);
if (v_isSharedCheck_406_ == 0)
{
v___x_385_ = v_x_380_;
v_isShared_386_ = v_isSharedCheck_406_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_tail_383_);
lean_inc(v_value_382_);
lean_inc(v_key_381_);
lean_dec(v_x_380_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_406_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; uint64_t v___x_388_; uint64_t v___x_389_; uint64_t v___x_390_; uint64_t v_fold_391_; uint64_t v___x_392_; uint64_t v___x_393_; uint64_t v___x_394_; size_t v___x_395_; size_t v___x_396_; size_t v___x_397_; size_t v___x_398_; size_t v___x_399_; lean_object* v___x_400_; lean_object* v___x_402_; 
v___x_387_ = lean_array_get_size(v_x_379_);
v___x_388_ = l_Lean_Expr_hash(v_key_381_);
v___x_389_ = 32ULL;
v___x_390_ = lean_uint64_shift_right(v___x_388_, v___x_389_);
v_fold_391_ = lean_uint64_xor(v___x_388_, v___x_390_);
v___x_392_ = 16ULL;
v___x_393_ = lean_uint64_shift_right(v_fold_391_, v___x_392_);
v___x_394_ = lean_uint64_xor(v_fold_391_, v___x_393_);
v___x_395_ = lean_uint64_to_usize(v___x_394_);
v___x_396_ = lean_usize_of_nat(v___x_387_);
v___x_397_ = ((size_t)1ULL);
v___x_398_ = lean_usize_sub(v___x_396_, v___x_397_);
v___x_399_ = lean_usize_land(v___x_395_, v___x_398_);
v___x_400_ = lean_array_uget_borrowed(v_x_379_, v___x_399_);
lean_inc(v___x_400_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 2, v___x_400_);
v___x_402_ = v___x_385_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_key_381_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v_value_382_);
lean_ctor_set(v_reuseFailAlloc_405_, 2, v___x_400_);
v___x_402_ = v_reuseFailAlloc_405_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; 
v___x_403_ = lean_array_uset(v_x_379_, v___x_399_, v___x_402_);
v_x_379_ = v___x_403_;
v_x_380_ = v_tail_383_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(lean_object* v_i_407_, lean_object* v_source_408_, lean_object* v_target_409_){
_start:
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = lean_array_get_size(v_source_408_);
v___x_411_ = lean_nat_dec_lt(v_i_407_, v___x_410_);
if (v___x_411_ == 0)
{
lean_dec_ref(v_source_408_);
lean_dec(v_i_407_);
return v_target_409_;
}
else
{
lean_object* v_es_412_; lean_object* v___x_413_; lean_object* v_source_414_; lean_object* v_target_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v_es_412_ = lean_array_fget(v_source_408_, v_i_407_);
v___x_413_ = lean_box(0);
v_source_414_ = lean_array_fset(v_source_408_, v_i_407_, v___x_413_);
v_target_415_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(v_target_409_, v_es_412_);
v___x_416_ = lean_unsigned_to_nat(1u);
v___x_417_ = lean_nat_add(v_i_407_, v___x_416_);
lean_dec(v_i_407_);
v_i_407_ = v___x_417_;
v_source_408_ = v_source_414_;
v_target_409_ = v_target_415_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(lean_object* v_data_419_){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v_nbuckets_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_420_ = lean_array_get_size(v_data_419_);
v___x_421_ = lean_unsigned_to_nat(2u);
v_nbuckets_422_ = lean_nat_mul(v___x_420_, v___x_421_);
v___x_423_ = lean_unsigned_to_nat(0u);
v___x_424_ = lean_box(0);
v___x_425_ = lean_mk_array(v_nbuckets_422_, v___x_424_);
v___x_426_ = lean_array_propagate_mark(v_data_419_, v___x_425_);
v___x_427_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(v___x_423_, v_data_419_, v___x_426_);
return v___x_427_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object* v_a_428_, lean_object* v_x_429_){
_start:
{
if (lean_obj_tag(v_x_429_) == 0)
{
uint8_t v___x_430_; 
v___x_430_ = 0;
return v___x_430_;
}
else
{
lean_object* v_key_431_; lean_object* v_tail_432_; uint8_t v___x_433_; 
v_key_431_ = lean_ctor_get(v_x_429_, 0);
v_tail_432_ = lean_ctor_get(v_x_429_, 2);
v___x_433_ = lean_expr_eqv(v_key_431_, v_a_428_);
if (v___x_433_ == 0)
{
v_x_429_ = v_tail_432_;
goto _start;
}
else
{
return v___x_433_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object* v_a_435_, lean_object* v_x_436_){
_start:
{
uint8_t v_res_437_; lean_object* v_r_438_; 
v_res_437_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_435_, v_x_436_);
lean_dec(v_x_436_);
lean_dec_ref(v_a_435_);
v_r_438_ = lean_box(v_res_437_);
return v_r_438_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(lean_object* v_a_439_, lean_object* v_b_440_, lean_object* v_x_441_){
_start:
{
if (lean_obj_tag(v_x_441_) == 0)
{
lean_dec(v_b_440_);
lean_dec_ref(v_a_439_);
return v_x_441_;
}
else
{
lean_object* v_key_442_; lean_object* v_value_443_; lean_object* v_tail_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_456_; 
v_key_442_ = lean_ctor_get(v_x_441_, 0);
v_value_443_ = lean_ctor_get(v_x_441_, 1);
v_tail_444_ = lean_ctor_get(v_x_441_, 2);
v_isSharedCheck_456_ = !lean_is_exclusive(v_x_441_);
if (v_isSharedCheck_456_ == 0)
{
v___x_446_ = v_x_441_;
v_isShared_447_ = v_isSharedCheck_456_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_tail_444_);
lean_inc(v_value_443_);
lean_inc(v_key_442_);
lean_dec(v_x_441_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_456_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
uint8_t v___x_448_; 
v___x_448_ = lean_expr_eqv(v_key_442_, v_a_439_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; lean_object* v___x_451_; 
v___x_449_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_439_, v_b_440_, v_tail_444_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 2, v___x_449_);
v___x_451_ = v___x_446_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_key_442_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_value_443_);
lean_ctor_set(v_reuseFailAlloc_452_, 2, v___x_449_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
else
{
lean_object* v___x_454_; 
lean_dec(v_value_443_);
lean_dec(v_key_442_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 1, v_b_440_);
lean_ctor_set(v___x_446_, 0, v_a_439_);
v___x_454_ = v___x_446_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_439_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_b_440_);
lean_ctor_set(v_reuseFailAlloc_455_, 2, v_tail_444_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(lean_object* v_m_457_, lean_object* v_a_458_, lean_object* v_b_459_){
_start:
{
lean_object* v_size_460_; lean_object* v_buckets_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_504_; 
v_size_460_ = lean_ctor_get(v_m_457_, 0);
v_buckets_461_ = lean_ctor_get(v_m_457_, 1);
v_isSharedCheck_504_ = !lean_is_exclusive(v_m_457_);
if (v_isSharedCheck_504_ == 0)
{
v___x_463_ = v_m_457_;
v_isShared_464_ = v_isSharedCheck_504_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_buckets_461_);
lean_inc(v_size_460_);
lean_dec(v_m_457_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_504_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_465_; uint64_t v___x_466_; uint64_t v___x_467_; uint64_t v___x_468_; uint64_t v_fold_469_; uint64_t v___x_470_; uint64_t v___x_471_; uint64_t v___x_472_; size_t v___x_473_; size_t v___x_474_; size_t v___x_475_; size_t v___x_476_; size_t v___x_477_; lean_object* v_bkt_478_; uint8_t v___x_479_; 
v___x_465_ = lean_array_get_size(v_buckets_461_);
v___x_466_ = l_Lean_Expr_hash(v_a_458_);
v___x_467_ = 32ULL;
v___x_468_ = lean_uint64_shift_right(v___x_466_, v___x_467_);
v_fold_469_ = lean_uint64_xor(v___x_466_, v___x_468_);
v___x_470_ = 16ULL;
v___x_471_ = lean_uint64_shift_right(v_fold_469_, v___x_470_);
v___x_472_ = lean_uint64_xor(v_fold_469_, v___x_471_);
v___x_473_ = lean_uint64_to_usize(v___x_472_);
v___x_474_ = lean_usize_of_nat(v___x_465_);
v___x_475_ = ((size_t)1ULL);
v___x_476_ = lean_usize_sub(v___x_474_, v___x_475_);
v___x_477_ = lean_usize_land(v___x_473_, v___x_476_);
v_bkt_478_ = lean_array_uget_borrowed(v_buckets_461_, v___x_477_);
v___x_479_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_458_, v_bkt_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; lean_object* v_size_x27_481_; lean_object* v___x_482_; lean_object* v_buckets_x27_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; uint8_t v___x_489_; 
v___x_480_ = lean_unsigned_to_nat(1u);
v_size_x27_481_ = lean_nat_add(v_size_460_, v___x_480_);
lean_dec(v_size_460_);
lean_inc(v_bkt_478_);
v___x_482_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_482_, 0, v_a_458_);
lean_ctor_set(v___x_482_, 1, v_b_459_);
lean_ctor_set(v___x_482_, 2, v_bkt_478_);
v_buckets_x27_483_ = lean_array_uset(v_buckets_461_, v___x_477_, v___x_482_);
v___x_484_ = lean_unsigned_to_nat(4u);
v___x_485_ = lean_nat_mul(v_size_x27_481_, v___x_484_);
v___x_486_ = lean_unsigned_to_nat(3u);
v___x_487_ = lean_nat_div(v___x_485_, v___x_486_);
lean_dec(v___x_485_);
v___x_488_ = lean_array_get_size(v_buckets_x27_483_);
v___x_489_ = lean_nat_dec_le(v___x_487_, v___x_488_);
lean_dec(v___x_487_);
if (v___x_489_ == 0)
{
lean_object* v_val_490_; lean_object* v___x_492_; 
v_val_490_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(v_buckets_x27_483_);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 1, v_val_490_);
lean_ctor_set(v___x_463_, 0, v_size_x27_481_);
v___x_492_ = v___x_463_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_size_x27_481_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_val_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
else
{
lean_object* v___x_495_; 
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 1, v_buckets_x27_483_);
lean_ctor_set(v___x_463_, 0, v_size_x27_481_);
v___x_495_ = v___x_463_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_size_x27_481_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_buckets_x27_483_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
else
{
lean_object* v___x_497_; lean_object* v_buckets_x27_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_502_; 
lean_inc(v_bkt_478_);
v___x_497_ = lean_box(0);
v_buckets_x27_498_ = lean_array_uset(v_buckets_461_, v___x_477_, v___x_497_);
v___x_499_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_458_, v_b_459_, v_bkt_478_);
v___x_500_ = lean_array_uset(v_buckets_x27_498_, v___x_477_, v___x_499_);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 1, v___x_500_);
v___x_502_ = v___x_463_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_size_460_);
lean_ctor_set(v_reuseFailAlloc_503_, 1, v___x_500_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(lean_object* v_msg_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
lean_object* v_ref_511_; lean_object* v___x_512_; lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_521_; 
v_ref_511_ = lean_ctor_get(v___y_508_, 2);
v___x_512_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
v_a_513_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_521_ == 0)
{
v___x_515_ = v___x_512_;
v_isShared_516_ = v_isSharedCheck_521_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_512_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_521_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v___x_519_; 
lean_inc(v_ref_511_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v_ref_511_);
lean_ctor_set(v___x_517_, 1, v_a_513_);
if (v_isShared_516_ == 0)
{
lean_ctor_set_tag(v___x_515_, 1);
lean_ctor_set(v___x_515_, 0, v___x_517_);
v___x_519_ = v___x_515_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_517_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg___boxed(lean_object* v_msg_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
return v_res_528_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0));
v___x_531_ = l_Lean_stringToMessageData(v___x_530_);
return v___x_531_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2));
v___x_534_ = l_Lean_stringToMessageData(v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4));
v___x_537_ = l_Lean_stringToMessageData(v___x_536_);
return v___x_537_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6));
v___x_540_ = l_Lean_stringToMessageData(v___x_539_);
return v___x_540_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8));
v___x_543_ = l_Lean_stringToMessageData(v___x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(lean_object* v_e_544_, lean_object* v_a_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
lean_object* v___x_629_; 
lean_inc_ref(v_a_545_);
v___x_629_ = l_Lean_Meta_isTypeCorrect(v_a_545_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_object* v_a_630_; uint8_t v___x_631_; 
v_a_630_ = lean_ctor_get(v___x_629_, 0);
lean_inc(v_a_630_);
lean_dec_ref_known(v___x_629_, 1);
v___x_631_ = lean_unbox(v_a_630_);
lean_dec(v_a_630_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_632_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9);
lean_inc_ref(v_e_544_);
v___x_633_ = l_Lean_indentExpr(v_e_544_);
v___x_634_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_632_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3);
v___x_636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_634_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
lean_inc_ref(v_a_545_);
v___x_637_ = l_Lean_indentExpr(v_a_545_);
v___x_638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_638_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_dec_ref_known(v___x_639_, 1);
goto v___jp_555_;
}
else
{
lean_dec_ref(v_a_545_);
lean_dec_ref(v_e_544_);
return v___x_639_;
}
}
else
{
goto v___jp_555_;
}
}
else
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
lean_dec_ref(v_a_545_);
lean_dec_ref(v_e_544_);
v_a_640_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_647_ == 0)
{
v___x_642_ = v___x_629_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_629_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_640_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
v___jp_555_:
{
lean_object* v___x_556_; 
lean_inc(v___y_553_);
lean_inc_ref(v___y_552_);
lean_inc(v___y_551_);
lean_inc_ref(v___y_550_);
lean_inc_ref(v_e_544_);
v___x_556_ = lean_infer_type(v_e_544_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_558_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_a_557_);
lean_dec_ref_known(v___x_556_, 1);
lean_inc(v___y_553_);
lean_inc_ref(v___y_552_);
lean_inc(v___y_551_);
lean_inc_ref(v___y_550_);
lean_inc_ref(v_a_545_);
v___x_558_ = lean_infer_type(v_a_545_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_560_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc_n(v_a_559_, 2);
lean_dec_ref_known(v___x_558_, 1);
lean_inc(v_a_557_);
v___x_560_ = l_Lean_Meta_isExprDefEq(v_a_557_, v_a_559_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_604_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_604_ == 0)
{
v___x_563_ = v___x_560_;
v_isShared_564_ = v_isSharedCheck_604_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_560_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_604_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
uint8_t v___x_565_; 
v___x_565_ = lean_unbox(v_a_561_);
lean_dec(v_a_561_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; 
lean_del_object(v___x_563_);
v___x_566_ = l_Lean_Meta_addPPExplicitToExposeDiff(v_a_557_, v_a_559_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v_a_567_; lean_object* v_fst_568_; lean_object* v_snd_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_591_; 
v_a_567_ = lean_ctor_get(v___x_566_, 0);
lean_inc(v_a_567_);
lean_dec_ref_known(v___x_566_, 1);
v_fst_568_ = lean_ctor_get(v_a_567_, 0);
v_snd_569_ = lean_ctor_get(v_a_567_, 1);
v_isSharedCheck_591_ = !lean_is_exclusive(v_a_567_);
if (v_isSharedCheck_591_ == 0)
{
v___x_571_ = v_a_567_;
v_isShared_572_ = v_isSharedCheck_591_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_snd_569_);
lean_inc(v_fst_568_);
lean_dec(v_a_567_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_591_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_573_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1);
v___x_574_ = l_Lean_indentExpr(v_e_544_);
if (v_isShared_572_ == 0)
{
lean_ctor_set_tag(v___x_571_, 7);
lean_ctor_set(v___x_571_, 1, v___x_574_);
lean_ctor_set(v___x_571_, 0, v___x_573_);
v___x_576_ = v___x_571_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v___x_574_);
v___x_576_ = v_reuseFailAlloc_590_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_577_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3);
v___x_578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_576_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = l_Lean_indentExpr(v_a_545_);
v___x_580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_578_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
v___x_581_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5);
v___x_582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_580_);
lean_ctor_set(v___x_582_, 1, v___x_581_);
v___x_583_ = l_Lean_indentExpr(v_fst_568_);
v___x_584_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_582_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___x_585_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7);
v___x_586_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_584_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
v___x_587_ = l_Lean_indentExpr(v_snd_569_);
v___x_588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_586_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_588_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
return v___x_589_;
}
}
}
else
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_dec_ref(v_a_545_);
lean_dec_ref(v_e_544_);
v_a_592_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_566_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_566_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
else
{
lean_object* v___x_600_; lean_object* v___x_602_; 
lean_dec(v_a_559_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_545_);
lean_dec_ref(v_e_544_);
v___x_600_ = lean_box(0);
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 0, v___x_600_);
v___x_602_ = v___x_563_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_600_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec(v_a_559_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_545_);
lean_dec_ref(v_e_544_);
v_a_605_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_560_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_560_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
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
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec(v_a_557_);
lean_dec_ref(v_a_545_);
lean_dec_ref(v_e_544_);
v_a_613_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_558_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_558_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
lean_dec_ref(v_a_545_);
lean_dec_ref(v_e_544_);
v_a_621_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_556_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_556_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed(lean_object* v_e_648_, lean_object* v_a_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(v_e_648_, v_a_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec(v___y_650_);
return v_res_659_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0(void){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_660_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_661_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0);
v___x_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_662_, 0, v___x_661_);
return v___x_662_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2(void){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_663_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1);
v___x_664_ = lean_unsigned_to_nat(0u);
v___x_665_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v___x_664_);
lean_ctor_set(v___x_665_, 2, v___x_664_);
lean_ctor_set(v___x_665_, 3, v___x_664_);
lean_ctor_set(v___x_665_, 4, v___x_663_);
lean_ctor_set(v___x_665_, 5, v___x_663_);
lean_ctor_set(v___x_665_, 6, v___x_663_);
lean_ctor_set(v___x_665_, 7, v___x_663_);
lean_ctor_set(v___x_665_, 8, v___x_663_);
lean_ctor_set(v___x_665_, 9, v___x_663_);
lean_ctor_set(v___x_665_, 10, v___x_663_);
return v___x_665_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3(void){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_666_ = lean_unsigned_to_nat(32u);
v___x_667_ = lean_mk_empty_array_with_capacity(v___x_666_);
v___x_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
return v___x_668_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4(void){
_start:
{
size_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_669_ = ((size_t)5ULL);
v___x_670_ = lean_unsigned_to_nat(0u);
v___x_671_ = lean_unsigned_to_nat(32u);
v___x_672_ = lean_mk_empty_array_with_capacity(v___x_671_);
v___x_673_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3);
v___x_674_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_674_, 0, v___x_673_);
lean_ctor_set(v___x_674_, 1, v___x_672_);
lean_ctor_set(v___x_674_, 2, v___x_670_);
lean_ctor_set(v___x_674_, 3, v___x_670_);
lean_ctor_set_usize(v___x_674_, 4, v___x_669_);
return v___x_674_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_675_ = lean_box(1);
v___x_676_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4);
v___x_677_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1);
v___x_678_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
lean_ctor_set(v___x_678_, 1, v___x_676_);
lean_ctor_set(v___x_678_, 2, v___x_675_);
return v___x_678_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6));
v___x_681_ = l_Lean_stringToMessageData(v___x_680_);
return v___x_681_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8));
v___x_684_ = l_Lean_stringToMessageData(v___x_683_);
return v___x_684_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10));
v___x_687_ = l_Lean_stringToMessageData(v___x_686_);
return v___x_687_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12));
v___x_690_ = l_Lean_stringToMessageData(v___x_689_);
return v___x_690_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14));
v___x_693_ = l_Lean_stringToMessageData(v___x_692_);
return v___x_693_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16));
v___x_696_ = l_Lean_stringToMessageData(v___x_695_);
return v___x_696_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18));
v___x_699_ = l_Lean_stringToMessageData(v___x_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(lean_object* v_msg_700_, lean_object* v_declHint_701_, lean_object* v___y_702_){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v_env_706_; uint8_t v___x_707_; 
v___x_704_ = lean_box(0);
v___x_705_ = lean_st_ref_get(v___y_702_);
v_env_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc_ref(v_env_706_);
lean_dec(v___x_705_);
v___x_707_ = l_Lean_Name_isAnonymous(v_declHint_701_);
if (v___x_707_ == 0)
{
uint8_t v_isExporting_708_; 
v_isExporting_708_ = lean_ctor_get_uint8(v_env_706_, sizeof(void*)*8);
if (v_isExporting_708_ == 0)
{
lean_object* v___x_709_; 
lean_dec_ref(v_env_706_);
lean_dec(v_declHint_701_);
v___x_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_709_, 0, v_msg_700_);
return v___x_709_;
}
else
{
lean_object* v___x_710_; uint8_t v___x_711_; 
lean_inc_ref(v_env_706_);
v___x_710_ = l_Lean_Environment_setExporting(v_env_706_, v___x_707_);
lean_inc(v_declHint_701_);
lean_inc_ref(v___x_710_);
v___x_711_ = l_Lean_Environment_contains(v___x_710_, v_declHint_701_, v_isExporting_708_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; 
lean_dec_ref(v___x_710_);
lean_dec_ref(v_env_706_);
lean_dec(v_declHint_701_);
v___x_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_712_, 0, v_msg_700_);
return v___x_712_;
}
else
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v_c_718_; lean_object* v___x_719_; 
v___x_713_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2);
v___x_714_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5);
v___x_715_ = l_Lean_Options_empty;
v___x_716_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_716_, 0, v___x_710_);
lean_ctor_set(v___x_716_, 1, v___x_713_);
lean_ctor_set(v___x_716_, 2, v___x_714_);
lean_ctor_set(v___x_716_, 3, v___x_715_);
lean_inc(v_declHint_701_);
v___x_717_ = l_Lean_MessageData_ofConstName(v_declHint_701_, v___x_707_);
v_c_718_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_718_, 0, v___x_716_);
lean_ctor_set(v_c_718_, 1, v___x_717_);
v___x_719_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_706_, v_declHint_701_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
lean_dec_ref(v_env_706_);
lean_dec(v_declHint_701_);
v___x_720_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7);
v___x_721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
lean_ctor_set(v___x_721_, 1, v_c_718_);
v___x_722_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9);
v___x_723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_721_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = l_Lean_MessageData_note(v___x_723_);
v___x_725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_725_, 0, v_msg_700_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
return v___x_726_;
}
else
{
lean_object* v_val_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_761_; 
v_val_727_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_761_ == 0)
{
v___x_729_ = v___x_719_;
v_isShared_730_ = v_isSharedCheck_761_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_val_727_);
lean_dec(v___x_719_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_761_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v_mod_733_; uint8_t v___x_734_; 
v___x_731_ = l_Lean_Environment_header(v_env_706_);
lean_dec_ref(v_env_706_);
v___x_732_ = l_Lean_EnvironmentHeader_moduleNames(v___x_731_);
v_mod_733_ = lean_array_get(v___x_704_, v___x_732_, v_val_727_);
lean_dec(v_val_727_);
lean_dec_ref(v___x_732_);
v___x_734_ = l_Lean_isPrivateName(v_declHint_701_);
lean_dec(v_declHint_701_);
if (v___x_734_ == 0)
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_746_; 
v___x_735_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11);
v___x_736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
lean_ctor_set(v___x_736_, 1, v_c_718_);
v___x_737_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13);
v___x_738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_736_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = l_Lean_MessageData_ofName(v_mod_733_);
v___x_740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_738_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
v___x_741_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15);
v___x_742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_740_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = l_Lean_MessageData_note(v___x_742_);
v___x_744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_744_, 0, v_msg_700_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
if (v_isShared_730_ == 0)
{
lean_ctor_set_tag(v___x_729_, 0);
lean_ctor_set(v___x_729_, 0, v___x_744_);
v___x_746_ = v___x_729_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
else
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_748_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7);
v___x_749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
lean_ctor_set(v___x_749_, 1, v_c_718_);
v___x_750_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17);
v___x_751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_751_, 0, v___x_749_);
lean_ctor_set(v___x_751_, 1, v___x_750_);
v___x_752_ = l_Lean_MessageData_ofName(v_mod_733_);
v___x_753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_751_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
v___x_754_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19);
v___x_755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_755_, 0, v___x_753_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
v___x_756_ = l_Lean_MessageData_note(v___x_755_);
v___x_757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_757_, 0, v_msg_700_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
if (v_isShared_730_ == 0)
{
lean_ctor_set_tag(v___x_729_, 0);
lean_ctor_set(v___x_729_, 0, v___x_757_);
v___x_759_ = v___x_729_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_757_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_762_; 
lean_dec_ref(v_env_706_);
lean_dec(v_declHint_701_);
v___x_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_762_, 0, v_msg_700_);
return v___x_762_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___boxed(lean_object* v_msg_763_, lean_object* v_declHint_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_763_, v_declHint_764_, v___y_765_);
lean_dec(v___y_765_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(lean_object* v_msg_768_, lean_object* v_declHint_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v___x_779_; lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_789_; 
v___x_779_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_768_, v_declHint_769_, v___y_777_);
v_a_780_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_789_ == 0)
{
v___x_782_ = v___x_779_;
v_isShared_783_ = v_isSharedCheck_789_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_779_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_789_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_784_ = l_Lean_unknownIdentifierMessageTag;
v___x_785_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
lean_ctor_set(v___x_785_, 1, v_a_780_);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 0, v___x_785_);
v___x_787_ = v___x_782_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30___boxed(lean_object* v_msg_790_, lean_object* v_declHint_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(v_msg_790_, v_declHint_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_793_);
lean_dec(v___y_792_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(lean_object* v_ref_802_, lean_object* v_msg_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_toCold_813_; lean_object* v_currRecDepth_814_; lean_object* v_ref_815_; uint8_t v_diag_816_; uint8_t v_suppressElabErrors_817_; lean_object* v_ref_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v_toCold_813_ = lean_ctor_get(v___y_810_, 0);
v_currRecDepth_814_ = lean_ctor_get(v___y_810_, 1);
v_ref_815_ = lean_ctor_get(v___y_810_, 2);
v_diag_816_ = lean_ctor_get_uint8(v___y_810_, sizeof(void*)*3);
v_suppressElabErrors_817_ = lean_ctor_get_uint8(v___y_810_, sizeof(void*)*3 + 1);
v_ref_818_ = l_Lean_replaceRef(v_ref_802_, v_ref_815_);
lean_inc(v_currRecDepth_814_);
lean_inc_ref(v_toCold_813_);
v___x_819_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_819_, 0, v_toCold_813_);
lean_ctor_set(v___x_819_, 1, v_currRecDepth_814_);
lean_ctor_set(v___x_819_, 2, v_ref_818_);
lean_ctor_set_uint8(v___x_819_, sizeof(void*)*3, v_diag_816_);
lean_ctor_set_uint8(v___x_819_, sizeof(void*)*3 + 1, v_suppressElabErrors_817_);
v___x_820_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_803_, v___y_808_, v___y_809_, v___x_819_, v___y_811_);
lean_dec_ref_known(v___x_819_, 3);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg___boxed(lean_object* v_ref_821_, lean_object* v_msg_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_821_, v_msg_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec(v___y_824_);
lean_dec(v___y_823_);
lean_dec(v_ref_821_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(lean_object* v_ref_833_, lean_object* v_msg_834_, lean_object* v_declHint_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v___x_845_; lean_object* v_a_846_; lean_object* v___x_847_; 
v___x_845_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(v_msg_834_, v_declHint_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
v_a_846_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_846_);
lean_dec_ref(v___x_845_);
v___x_847_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_833_, v_a_846_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg___boxed(lean_object* v_ref_848_, lean_object* v_msg_849_, lean_object* v_declHint_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_848_, v_msg_849_, v_declHint_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec(v___y_852_);
lean_dec(v___y_851_);
lean_dec(v_ref_848_);
return v_res_860_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0));
v___x_863_ = l_Lean_stringToMessageData(v___x_862_);
return v___x_863_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3(void){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2));
v___x_866_ = l_Lean_stringToMessageData(v___x_865_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(lean_object* v_ref_867_, lean_object* v_constName_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_878_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1);
v___x_879_ = 0;
lean_inc(v_constName_868_);
v___x_880_ = l_Lean_MessageData_ofConstName(v_constName_868_, v___x_879_);
v___x_881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_878_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3);
v___x_883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_881_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_867_, v___x_883_, v_constName_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___boxed(lean_object* v_ref_885_, lean_object* v_constName_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_885_, v_constName_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec(v___y_887_);
lean_dec(v_ref_885_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(lean_object* v_constName_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_ref_907_; lean_object* v___x_908_; 
v_ref_907_ = lean_ctor_get(v___y_904_, 2);
v___x_908_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_907_, v_constName_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg___boxed(lean_object* v_constName_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___y_911_);
lean_dec(v___y_910_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(lean_object* v_constName_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v___x_930_; lean_object* v_env_931_; uint8_t v___x_932_; lean_object* v___x_933_; 
v___x_930_ = lean_st_ref_get(v___y_928_);
v_env_931_ = lean_ctor_get(v___x_930_, 0);
lean_inc_ref(v_env_931_);
lean_dec(v___x_930_);
v___x_932_ = 0;
lean_inc(v_constName_920_);
v___x_933_ = l_Lean_Environment_find_x3f(v_env_931_, v_constName_920_, v___x_932_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v___x_934_; 
v___x_934_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
return v___x_934_;
}
else
{
lean_object* v_val_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
lean_dec(v_constName_920_);
v_val_935_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_933_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_val_935_);
lean_dec(v___x_933_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
lean_ctor_set_tag(v___x_937_, 0);
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_val_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18___boxed(lean_object* v_constName_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_constName_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec(v___y_944_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(lean_object* v_declName_954_, lean_object* v___y_955_){
_start:
{
lean_object* v___x_957_; lean_object* v_env_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_957_ = lean_st_ref_get(v___y_955_);
v_env_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc_ref(v_env_958_);
lean_dec(v___x_957_);
v___x_959_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_958_, v_declName_954_);
v___x_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_960_, 0, v___x_959_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg___boxed(lean_object* v_declName_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_961_, v___y_962_);
lean_dec(v___y_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(lean_object* v_msg_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v___f_987_; lean_object* v___f_988_; lean_object* v___f_989_; lean_object* v___f_990_; lean_object* v___f_991_; lean_object* v___f_992_; lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v_toApplicative_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1092_; 
v___f_987_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0));
v___f_988_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1));
v___f_989_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2));
v___f_990_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3));
v___f_991_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4));
v___f_992_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_992_, 0, v___f_991_);
lean_closure_set(v___f_992_, 1, v___f_990_);
v___f_993_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_993_, 0, v___f_990_);
v___f_994_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5));
v___x_995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_995_, 0, v___f_987_);
lean_ctor_set(v___x_995_, 1, v___f_988_);
v___x_996_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
lean_ctor_set(v___x_996_, 1, v___f_989_);
lean_ctor_set(v___x_996_, 2, v___f_992_);
lean_ctor_set(v___x_996_, 3, v___f_993_);
lean_ctor_set(v___x_996_, 4, v___f_994_);
v___x_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_996_);
lean_ctor_set(v___x_997_, 1, v___f_990_);
v___x_998_ = l_StateRefT_x27_instMonad___redArg(v___x_997_);
v_toApplicative_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1092_ == 0)
{
lean_object* v_unused_1093_; 
v_unused_1093_ = lean_ctor_get(v___x_998_, 1);
lean_dec(v_unused_1093_);
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1092_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_toApplicative_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1092_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v_toFunctor_1003_; lean_object* v_toSeq_1004_; lean_object* v_toSeqLeft_1005_; lean_object* v_toSeqRight_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1090_; 
v_toFunctor_1003_ = lean_ctor_get(v_toApplicative_999_, 0);
v_toSeq_1004_ = lean_ctor_get(v_toApplicative_999_, 2);
v_toSeqLeft_1005_ = lean_ctor_get(v_toApplicative_999_, 3);
v_toSeqRight_1006_ = lean_ctor_get(v_toApplicative_999_, 4);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_toApplicative_999_);
if (v_isSharedCheck_1090_ == 0)
{
lean_object* v_unused_1091_; 
v_unused_1091_ = lean_ctor_get(v_toApplicative_999_, 1);
lean_dec(v_unused_1091_);
v___x_1008_ = v_toApplicative_999_;
v_isShared_1009_ = v_isSharedCheck_1090_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_toSeqRight_1006_);
lean_inc(v_toSeqLeft_1005_);
lean_inc(v_toSeq_1004_);
lean_inc(v_toFunctor_1003_);
lean_dec(v_toApplicative_999_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1090_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___f_1010_; lean_object* v___f_1011_; lean_object* v___f_1012_; lean_object* v___f_1013_; lean_object* v___x_1014_; lean_object* v___f_1015_; lean_object* v___f_1016_; lean_object* v___f_1017_; lean_object* v___x_1019_; 
v___f_1010_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6));
v___f_1011_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__7));
lean_inc_ref(v_toFunctor_1003_);
v___f_1012_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1012_, 0, v_toFunctor_1003_);
v___f_1013_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1013_, 0, v_toFunctor_1003_);
v___x_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___f_1012_);
lean_ctor_set(v___x_1014_, 1, v___f_1013_);
v___f_1015_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1015_, 0, v_toSeqRight_1006_);
v___f_1016_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1016_, 0, v_toSeqLeft_1005_);
v___f_1017_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1017_, 0, v_toSeq_1004_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 4, v___f_1015_);
lean_ctor_set(v___x_1008_, 3, v___f_1016_);
lean_ctor_set(v___x_1008_, 2, v___f_1017_);
lean_ctor_set(v___x_1008_, 1, v___f_1010_);
lean_ctor_set(v___x_1008_, 0, v___x_1014_);
v___x_1019_ = v___x_1008_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1089_, 1, v___f_1010_);
lean_ctor_set(v_reuseFailAlloc_1089_, 2, v___f_1017_);
lean_ctor_set(v_reuseFailAlloc_1089_, 3, v___f_1016_);
lean_ctor_set(v_reuseFailAlloc_1089_, 4, v___f_1015_);
v___x_1019_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
lean_object* v___x_1021_; 
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 1, v___f_1011_);
lean_ctor_set(v___x_1001_, 0, v___x_1019_);
v___x_1021_ = v___x_1001_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1019_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v___f_1011_);
v___x_1021_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
lean_object* v___x_1022_; lean_object* v_toApplicative_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1086_; 
v___x_1022_ = l_StateRefT_x27_instMonad___redArg(v___x_1021_);
v_toApplicative_1023_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1086_ == 0)
{
lean_object* v_unused_1087_; 
v_unused_1087_ = lean_ctor_get(v___x_1022_, 1);
lean_dec(v_unused_1087_);
v___x_1025_ = v___x_1022_;
v_isShared_1026_ = v_isSharedCheck_1086_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_toApplicative_1023_);
lean_dec(v___x_1022_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1086_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v_toFunctor_1027_; lean_object* v_toSeq_1028_; lean_object* v_toSeqLeft_1029_; lean_object* v_toSeqRight_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1084_; 
v_toFunctor_1027_ = lean_ctor_get(v_toApplicative_1023_, 0);
v_toSeq_1028_ = lean_ctor_get(v_toApplicative_1023_, 2);
v_toSeqLeft_1029_ = lean_ctor_get(v_toApplicative_1023_, 3);
v_toSeqRight_1030_ = lean_ctor_get(v_toApplicative_1023_, 4);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_toApplicative_1023_);
if (v_isSharedCheck_1084_ == 0)
{
lean_object* v_unused_1085_; 
v_unused_1085_ = lean_ctor_get(v_toApplicative_1023_, 1);
lean_dec(v_unused_1085_);
v___x_1032_ = v_toApplicative_1023_;
v_isShared_1033_ = v_isSharedCheck_1084_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_toSeqRight_1030_);
lean_inc(v_toSeqLeft_1029_);
lean_inc(v_toSeq_1028_);
lean_inc(v_toFunctor_1027_);
lean_dec(v_toApplicative_1023_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1084_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___f_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___f_1037_; lean_object* v___x_1038_; lean_object* v___f_1039_; lean_object* v___f_1040_; lean_object* v___f_1041_; lean_object* v___x_1043_; 
v___f_1034_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__8));
v___f_1035_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__9));
lean_inc_ref(v_toFunctor_1027_);
v___f_1036_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1036_, 0, v_toFunctor_1027_);
v___f_1037_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1037_, 0, v_toFunctor_1027_);
v___x_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___f_1036_);
lean_ctor_set(v___x_1038_, 1, v___f_1037_);
v___f_1039_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1039_, 0, v_toSeqRight_1030_);
v___f_1040_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1040_, 0, v_toSeqLeft_1029_);
v___f_1041_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1041_, 0, v_toSeq_1028_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 4, v___f_1039_);
lean_ctor_set(v___x_1032_, 3, v___f_1040_);
lean_ctor_set(v___x_1032_, 2, v___f_1041_);
lean_ctor_set(v___x_1032_, 1, v___f_1034_);
lean_ctor_set(v___x_1032_, 0, v___x_1038_);
v___x_1043_ = v___x_1032_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v___f_1034_);
lean_ctor_set(v_reuseFailAlloc_1083_, 2, v___f_1041_);
lean_ctor_set(v_reuseFailAlloc_1083_, 3, v___f_1040_);
lean_ctor_set(v_reuseFailAlloc_1083_, 4, v___f_1039_);
v___x_1043_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1045_; 
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 1, v___f_1035_);
lean_ctor_set(v___x_1025_, 0, v___x_1043_);
v___x_1045_ = v___x_1025_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1082_, 1, v___f_1035_);
v___x_1045_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1046_; lean_object* v_toApplicative_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1080_; 
v___x_1046_ = l_StateRefT_x27_instMonad___redArg(v___x_1045_);
v_toApplicative_1047_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1080_ == 0)
{
lean_object* v_unused_1081_; 
v_unused_1081_ = lean_ctor_get(v___x_1046_, 1);
lean_dec(v_unused_1081_);
v___x_1049_ = v___x_1046_;
v_isShared_1050_ = v_isSharedCheck_1080_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_toApplicative_1047_);
lean_dec(v___x_1046_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1080_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v_toFunctor_1051_; lean_object* v_toSeq_1052_; lean_object* v_toSeqLeft_1053_; lean_object* v_toSeqRight_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1078_; 
v_toFunctor_1051_ = lean_ctor_get(v_toApplicative_1047_, 0);
v_toSeq_1052_ = lean_ctor_get(v_toApplicative_1047_, 2);
v_toSeqLeft_1053_ = lean_ctor_get(v_toApplicative_1047_, 3);
v_toSeqRight_1054_ = lean_ctor_get(v_toApplicative_1047_, 4);
v_isSharedCheck_1078_ = !lean_is_exclusive(v_toApplicative_1047_);
if (v_isSharedCheck_1078_ == 0)
{
lean_object* v_unused_1079_; 
v_unused_1079_ = lean_ctor_get(v_toApplicative_1047_, 1);
lean_dec(v_unused_1079_);
v___x_1056_ = v_toApplicative_1047_;
v_isShared_1057_ = v_isSharedCheck_1078_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_toSeqRight_1054_);
lean_inc(v_toSeqLeft_1053_);
lean_inc(v_toSeq_1052_);
lean_inc(v_toFunctor_1051_);
lean_dec(v_toApplicative_1047_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1078_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___f_1058_; lean_object* v___f_1059_; lean_object* v___f_1060_; lean_object* v___f_1061_; lean_object* v___x_1062_; lean_object* v___f_1063_; lean_object* v___f_1064_; lean_object* v___f_1065_; lean_object* v___x_1067_; 
v___f_1058_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__10));
v___f_1059_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__11));
lean_inc_ref(v_toFunctor_1051_);
v___f_1060_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1060_, 0, v_toFunctor_1051_);
v___f_1061_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1061_, 0, v_toFunctor_1051_);
v___x_1062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___f_1060_);
lean_ctor_set(v___x_1062_, 1, v___f_1061_);
v___f_1063_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1063_, 0, v_toSeqRight_1054_);
v___f_1064_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1064_, 0, v_toSeqLeft_1053_);
v___f_1065_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1065_, 0, v_toSeq_1052_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 4, v___f_1063_);
lean_ctor_set(v___x_1056_, 3, v___f_1064_);
lean_ctor_set(v___x_1056_, 2, v___f_1065_);
lean_ctor_set(v___x_1056_, 1, v___f_1058_);
lean_ctor_set(v___x_1056_, 0, v___x_1062_);
v___x_1067_ = v___x_1056_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1062_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v___f_1058_);
lean_ctor_set(v_reuseFailAlloc_1077_, 2, v___f_1065_);
lean_ctor_set(v_reuseFailAlloc_1077_, 3, v___f_1064_);
lean_ctor_set(v_reuseFailAlloc_1077_, 4, v___f_1063_);
v___x_1067_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
lean_object* v___x_1069_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 1, v___f_1059_);
lean_ctor_set(v___x_1049_, 0, v___x_1067_);
v___x_1069_ = v___x_1049_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1067_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v___f_1059_);
v___x_1069_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_55913__overap_1074_; lean_object* v___x_1075_; 
v___x_1070_ = l_StateRefT_x27_instMonad___redArg(v___x_1069_);
v___x_1071_ = l_StateRefT_x27_instMonad___redArg(v___x_1070_);
v___x_1072_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_1073_ = l_instInhabitedOfMonad___redArg(v___x_1071_, v___x_1072_);
v___x_55913__overap_1074_ = lean_panic_fn_borrowed(v___x_1073_, v_msg_977_);
lean_dec(v___x_1073_);
lean_inc(v___y_985_);
lean_inc_ref(v___y_984_);
lean_inc(v___y_983_);
lean_inc_ref(v___y_982_);
lean_inc(v___y_981_);
lean_inc_ref(v___y_980_);
lean_inc(v___y_979_);
lean_inc(v___y_978_);
v___x_1075_ = lean_apply_9(v___x_55913__overap_1074_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, lean_box(0));
return v___x_1075_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___boxed(lean_object* v_msg_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(v_msg_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec(v___y_1095_);
return v_res_1104_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3(void){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1108_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2));
v___x_1109_ = lean_unsigned_to_nat(53u);
v___x_1110_ = lean_unsigned_to_nat(62u);
v___x_1111_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1));
v___x_1112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0));
v___x_1113_ = l_mkPanicMessageWithDecl(v___x_1112_, v___x_1111_, v___x_1110_, v___x_1109_, v___x_1108_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(size_t v_sz_1114_, size_t v_i_1115_, lean_object* v_bs_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
uint8_t v___x_1126_; 
v___x_1126_ = lean_usize_dec_lt(v_i_1115_, v_sz_1114_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1127_, 0, v_bs_1116_);
return v___x_1127_;
}
else
{
lean_object* v_v_1128_; lean_object* v___x_1129_; lean_object* v_bs_x27_1130_; lean_object* v_a_1132_; lean_object* v___x_1137_; 
v_v_1128_ = lean_array_uget(v_bs_1116_, v_i_1115_);
v___x_1129_ = lean_unsigned_to_nat(0u);
v_bs_x27_1130_ = lean_array_uset(v_bs_1116_, v_i_1115_, v___x_1129_);
v___x_1137_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_v_1128_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
if (lean_obj_tag(v___x_1137_) == 0)
{
lean_object* v_a_1138_; 
v_a_1138_ = lean_ctor_get(v___x_1137_, 0);
lean_inc(v_a_1138_);
lean_dec_ref_known(v___x_1137_, 1);
if (lean_obj_tag(v_a_1138_) == 6)
{
lean_object* v_val_1139_; lean_object* v_numFields_1140_; uint8_t v___x_1141_; lean_object* v___x_1142_; 
v_val_1139_ = lean_ctor_get(v_a_1138_, 0);
lean_inc_ref(v_val_1139_);
lean_dec_ref_known(v_a_1138_, 1);
v_numFields_1140_ = lean_ctor_get(v_val_1139_, 4);
lean_inc(v_numFields_1140_);
lean_dec_ref(v_val_1139_);
v___x_1141_ = 0;
v___x_1142_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1142_, 0, v_numFields_1140_);
lean_ctor_set(v___x_1142_, 1, v___x_1129_);
lean_ctor_set_uint8(v___x_1142_, sizeof(void*)*2, v___x_1141_);
v_a_1132_ = v___x_1142_;
goto v___jp_1131_;
}
else
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
lean_dec(v_a_1138_);
v___x_1143_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3);
v___x_1144_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(v___x_1143_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v_a_1132_ = v_a_1145_;
goto v___jp_1131_;
}
else
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
lean_dec_ref(v_bs_x27_1130_);
v_a_1146_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1144_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1144_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
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
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec_ref(v_bs_x27_1130_);
v_a_1154_ = lean_ctor_get(v___x_1137_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1137_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1137_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
v___jp_1131_:
{
size_t v___x_1133_; size_t v___x_1134_; lean_object* v___x_1135_; 
v___x_1133_ = ((size_t)1ULL);
v___x_1134_ = lean_usize_add(v_i_1115_, v___x_1133_);
v___x_1135_ = lean_array_uset(v_bs_x27_1130_, v_i_1115_, v_a_1132_);
v_i_1115_ = v___x_1134_;
v_bs_1116_ = v___x_1135_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___boxed(lean_object* v_sz_1162_, lean_object* v_i_1163_, lean_object* v_bs_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
size_t v_sz_boxed_1174_; size_t v_i_boxed_1175_; lean_object* v_res_1176_; 
v_sz_boxed_1174_ = lean_unbox_usize(v_sz_1162_);
lean_dec(v_sz_1162_);
v_i_boxed_1175_ = lean_unbox_usize(v_i_1163_);
lean_dec(v_i_1163_);
v_res_1176_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(v_sz_boxed_1174_, v_i_boxed_1175_, v_bs_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec(v___y_1165_);
return v_res_1176_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0(void){
_start:
{
lean_object* v___x_1177_; lean_object* v_dummy_1178_; 
v___x_1177_ = lean_box(0);
v_dummy_1178_ = l_Lean_Expr_sort___override(v___x_1177_);
return v_dummy_1178_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1(void){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1179_ = lean_box(0);
v___x_1180_ = lean_unsigned_to_nat(16u);
v___x_1181_ = lean_mk_array(v___x_1180_, v___x_1179_);
return v___x_1181_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2(void){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1182_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1);
v___x_1183_ = lean_unsigned_to_nat(0u);
v___x_1184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
lean_ctor_set(v___x_1184_, 1, v___x_1182_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(lean_object* v_e_1187_, uint8_t v_alsoCasesOn_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
uint8_t v___x_1201_; 
v___x_1201_ = l_Lean_Expr_isApp(v_e_1187_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
lean_dec_ref(v_e_1187_);
v___x_1202_ = lean_box(0);
v___x_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
return v___x_1203_;
}
else
{
lean_object* v___x_1204_; 
v___x_1204_ = l_Lean_Expr_getAppFn(v_e_1187_);
if (lean_obj_tag(v___x_1204_) == 4)
{
lean_object* v_declName_1205_; lean_object* v_us_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1361_; 
v_declName_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc_n(v_declName_1205_, 2);
v_us_1206_ = lean_ctor_get(v___x_1204_, 1);
lean_inc(v_us_1206_);
lean_dec_ref_known(v___x_1204_, 2);
v___x_1207_ = l_Lean_instInhabitedExpr;
v___x_1208_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_1205_, v___y_1196_);
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1361_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1361_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
if (lean_obj_tag(v_a_1209_) == 1)
{
lean_object* v_val_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1254_; 
v_val_1213_ = lean_ctor_get(v_a_1209_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_a_1209_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1215_ = v_a_1209_;
v_isShared_1216_ = v_isSharedCheck_1254_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_val_1213_);
lean_dec(v_a_1209_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1254_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v_dummy_1217_; lean_object* v_nargs_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v_args_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; uint8_t v___x_1225_; 
v_dummy_1217_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
v_nargs_1218_ = l_Lean_Expr_getAppNumArgs(v_e_1187_);
lean_inc(v_nargs_1218_);
v___x_1219_ = lean_mk_array(v_nargs_1218_, v_dummy_1217_);
v___x_1220_ = lean_unsigned_to_nat(1u);
v___x_1221_ = lean_nat_sub(v_nargs_1218_, v___x_1220_);
lean_dec(v_nargs_1218_);
v_args_1222_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1187_, v___x_1219_, v___x_1221_);
v___x_1223_ = lean_array_get_size(v_args_1222_);
v___x_1224_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_1213_);
v___x_1225_ = lean_nat_dec_lt(v___x_1223_, v___x_1224_);
lean_dec(v___x_1224_);
if (v___x_1225_ == 0)
{
lean_object* v_numParams_1226_; lean_object* v_numDiscrs_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1245_; 
v_numParams_1226_ = lean_ctor_get(v_val_1213_, 0);
v_numDiscrs_1227_ = lean_ctor_get(v_val_1213_, 1);
v___x_1228_ = lean_array_mk(v_us_1206_);
v___x_1229_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1226_);
v___x_1230_ = l_Array_extract___redArg(v_args_1222_, v___x_1229_, v_numParams_1226_);
v___x_1231_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_1213_);
v___x_1232_ = lean_array_get(v___x_1207_, v_args_1222_, v___x_1231_);
lean_dec(v___x_1231_);
v___x_1233_ = lean_nat_add(v_numParams_1226_, v___x_1220_);
v___x_1234_ = lean_nat_add(v___x_1233_, v_numDiscrs_1227_);
lean_inc(v___x_1234_);
lean_inc_ref_n(v_args_1222_, 2);
v___x_1235_ = l_Array_toSubarray___redArg(v_args_1222_, v___x_1233_, v___x_1234_);
v___x_1236_ = l_Subarray_copy___redArg(v___x_1235_);
v___x_1237_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_1213_);
v___x_1238_ = lean_nat_add(v___x_1234_, v___x_1237_);
lean_dec(v___x_1237_);
lean_inc(v___x_1238_);
v___x_1239_ = l_Array_toSubarray___redArg(v_args_1222_, v___x_1234_, v___x_1238_);
v___x_1240_ = l_Subarray_copy___redArg(v___x_1239_);
v___x_1241_ = l_Array_toSubarray___redArg(v_args_1222_, v___x_1238_, v___x_1223_);
v___x_1242_ = l_Subarray_copy___redArg(v___x_1241_);
v___x_1243_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1243_, 0, v_val_1213_);
lean_ctor_set(v___x_1243_, 1, v_declName_1205_);
lean_ctor_set(v___x_1243_, 2, v___x_1228_);
lean_ctor_set(v___x_1243_, 3, v___x_1230_);
lean_ctor_set(v___x_1243_, 4, v___x_1232_);
lean_ctor_set(v___x_1243_, 5, v___x_1236_);
lean_ctor_set(v___x_1243_, 6, v___x_1240_);
lean_ctor_set(v___x_1243_, 7, v___x_1242_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 0, v___x_1243_);
v___x_1245_ = v___x_1215_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1243_);
v___x_1245_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
lean_object* v___x_1247_; 
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v___x_1245_);
v___x_1247_ = v___x_1211_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v___x_1245_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
else
{
lean_object* v___x_1250_; lean_object* v___x_1252_; 
lean_dec_ref(v_args_1222_);
lean_del_object(v___x_1215_);
lean_dec(v_val_1213_);
lean_dec(v_us_1206_);
lean_dec(v_declName_1205_);
v___x_1250_ = lean_box(0);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v___x_1250_);
v___x_1252_ = v___x_1211_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v___x_1250_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
else
{
lean_object* v___x_1255_; 
lean_del_object(v___x_1211_);
lean_dec(v_a_1209_);
v___x_1255_ = lean_st_ref_get(v___y_1196_);
if (v_alsoCasesOn_1188_ == 0)
{
lean_dec(v___x_1255_);
lean_dec(v_us_1206_);
lean_dec(v_declName_1205_);
lean_dec_ref(v_e_1187_);
goto v___jp_1198_;
}
else
{
lean_object* v_env_1256_; uint8_t v___x_1257_; 
v_env_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc_ref(v_env_1256_);
lean_dec(v___x_1255_);
lean_inc(v_declName_1205_);
v___x_1257_ = l_Lean_isCasesOnRecursor(v_env_1256_, v_declName_1205_);
if (v___x_1257_ == 0)
{
lean_dec(v_us_1206_);
lean_dec(v_declName_1205_);
lean_dec_ref(v_e_1187_);
goto v___jp_1198_;
}
else
{
lean_object* v_indName_1258_; lean_object* v___x_1259_; 
v_indName_1258_ = l_Lean_Name_getPrefix(v_declName_1205_);
v___x_1259_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_indName_1258_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_);
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_object* v_a_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1352_; 
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1262_ = v___x_1259_;
v_isShared_1263_ = v_isSharedCheck_1352_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_a_1260_);
lean_dec(v___x_1259_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1352_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
if (lean_obj_tag(v_a_1260_) == 5)
{
lean_object* v_val_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1347_; 
v_val_1264_ = lean_ctor_get(v_a_1260_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v_a_1260_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1266_ = v_a_1260_;
v_isShared_1267_ = v_isSharedCheck_1347_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_val_1264_);
lean_dec(v_a_1260_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1347_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v_toConstantVal_1268_; lean_object* v_numParams_1269_; lean_object* v_numIndices_1270_; lean_object* v_ctors_1271_; lean_object* v_nargs_1272_; lean_object* v_dummy_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v_args_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; uint8_t v___x_1284_; 
v_toConstantVal_1268_ = lean_ctor_get(v_val_1264_, 0);
lean_inc_ref(v_toConstantVal_1268_);
v_numParams_1269_ = lean_ctor_get(v_val_1264_, 1);
lean_inc(v_numParams_1269_);
v_numIndices_1270_ = lean_ctor_get(v_val_1264_, 2);
lean_inc(v_numIndices_1270_);
v_ctors_1271_ = lean_ctor_get(v_val_1264_, 4);
lean_inc(v_ctors_1271_);
v_nargs_1272_ = l_Lean_Expr_getAppNumArgs(v_e_1187_);
v_dummy_1273_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v_nargs_1272_);
v___x_1274_ = lean_mk_array(v_nargs_1272_, v_dummy_1273_);
v___x_1275_ = lean_unsigned_to_nat(1u);
v___x_1276_ = lean_nat_sub(v_nargs_1272_, v___x_1275_);
lean_dec(v_nargs_1272_);
v_args_1277_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1187_, v___x_1274_, v___x_1276_);
v___x_1278_ = lean_nat_add(v_numParams_1269_, v___x_1275_);
v___x_1279_ = lean_nat_add(v___x_1278_, v_numIndices_1270_);
v___x_1280_ = lean_nat_add(v___x_1279_, v___x_1275_);
lean_dec(v___x_1279_);
v___x_1281_ = l_Lean_InductiveVal_numCtors(v_val_1264_);
lean_dec_ref(v_val_1264_);
v___x_1282_ = lean_nat_add(v___x_1280_, v___x_1281_);
lean_dec(v___x_1281_);
v___x_1283_ = lean_array_get_size(v_args_1277_);
v___x_1284_ = lean_nat_dec_le(v___x_1282_, v___x_1283_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; lean_object* v___x_1287_; 
lean_dec(v___x_1282_);
lean_dec(v___x_1280_);
lean_dec(v___x_1278_);
lean_dec_ref(v_args_1277_);
lean_dec(v_ctors_1271_);
lean_dec(v_numIndices_1270_);
lean_dec(v_numParams_1269_);
lean_dec_ref(v_toConstantVal_1268_);
lean_del_object(v___x_1266_);
lean_dec(v_us_1206_);
lean_dec(v_declName_1205_);
v___x_1285_ = lean_box(0);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 0, v___x_1285_);
v___x_1287_ = v___x_1262_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v___x_1285_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
else
{
lean_object* v___x_1289_; lean_object* v_params_1290_; lean_object* v_motive_1291_; lean_object* v_discrs_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v_discrInfos_1295_; lean_object* v_alts_1296_; lean_object* v___y_1298_; lean_object* v___y_1299_; lean_object* v_lower_1338_; lean_object* v_upper_1339_; uint8_t v___x_1346_; 
lean_del_object(v___x_1262_);
v___x_1289_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1269_);
lean_inc_ref_n(v_args_1277_, 3);
v_params_1290_ = l_Array_toSubarray___redArg(v_args_1277_, v___x_1289_, v_numParams_1269_);
v_motive_1291_ = lean_array_get(v___x_1207_, v_args_1277_, v_numParams_1269_);
lean_dec(v_numParams_1269_);
lean_inc(v___x_1280_);
v_discrs_1292_ = l_Array_toSubarray___redArg(v_args_1277_, v___x_1278_, v___x_1280_);
v___x_1293_ = lean_nat_add(v_numIndices_1270_, v___x_1275_);
lean_dec(v_numIndices_1270_);
v___x_1294_ = lean_box(0);
v_discrInfos_1295_ = lean_mk_array(v___x_1293_, v___x_1294_);
lean_inc(v___x_1282_);
v_alts_1296_ = l_Array_toSubarray___redArg(v_args_1277_, v___x_1280_, v___x_1282_);
v___x_1346_ = lean_nat_dec_le(v___x_1282_, v___x_1289_);
if (v___x_1346_ == 0)
{
v_lower_1338_ = v___x_1282_;
v_upper_1339_ = v___x_1283_;
goto v___jp_1337_;
}
else
{
lean_dec(v___x_1282_);
v_lower_1338_ = v___x_1289_;
v_upper_1339_ = v___x_1283_;
goto v___jp_1337_;
}
v___jp_1297_:
{
lean_object* v___x_1300_; size_t v_sz_1301_; size_t v___x_1302_; lean_object* v___x_1303_; 
v___x_1300_ = lean_array_mk(v_ctors_1271_);
v_sz_1301_ = lean_array_size(v___x_1300_);
v___x_1302_ = ((size_t)0ULL);
v___x_1303_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(v_sz_1301_, v___x_1302_, v___x_1300_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1328_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1306_ = v___x_1303_;
v_isShared_1307_ = v_isSharedCheck_1328_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1303_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1328_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v_start_1308_; lean_object* v_stop_1309_; lean_object* v_start_1310_; lean_object* v_stop_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1323_; 
v_start_1308_ = lean_ctor_get(v_params_1290_, 1);
lean_inc(v_start_1308_);
v_stop_1309_ = lean_ctor_get(v_params_1290_, 2);
lean_inc(v_stop_1309_);
v_start_1310_ = lean_ctor_get(v_discrs_1292_, 1);
lean_inc(v_start_1310_);
v_stop_1311_ = lean_ctor_get(v_discrs_1292_, 2);
lean_inc(v_stop_1311_);
v___x_1312_ = lean_nat_sub(v_stop_1309_, v_start_1308_);
lean_dec(v_start_1308_);
lean_dec(v_stop_1309_);
v___x_1313_ = lean_nat_sub(v_stop_1311_, v_start_1310_);
lean_dec(v_start_1310_);
lean_dec(v_stop_1311_);
v___x_1314_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2);
v___x_1315_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1312_);
lean_ctor_set(v___x_1315_, 1, v___x_1313_);
lean_ctor_set(v___x_1315_, 2, v_a_1304_);
lean_ctor_set(v___x_1315_, 3, v___y_1299_);
lean_ctor_set(v___x_1315_, 4, v_discrInfos_1295_);
lean_ctor_set(v___x_1315_, 5, v___x_1314_);
v___x_1316_ = lean_array_mk(v_us_1206_);
v___x_1317_ = l_Subarray_copy___redArg(v_params_1290_);
v___x_1318_ = l_Subarray_copy___redArg(v_discrs_1292_);
v___x_1319_ = l_Subarray_copy___redArg(v_alts_1296_);
v___x_1320_ = l_Subarray_copy___redArg(v___y_1298_);
v___x_1321_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1315_);
lean_ctor_set(v___x_1321_, 1, v_declName_1205_);
lean_ctor_set(v___x_1321_, 2, v___x_1316_);
lean_ctor_set(v___x_1321_, 3, v___x_1317_);
lean_ctor_set(v___x_1321_, 4, v_motive_1291_);
lean_ctor_set(v___x_1321_, 5, v___x_1318_);
lean_ctor_set(v___x_1321_, 6, v___x_1319_);
lean_ctor_set(v___x_1321_, 7, v___x_1320_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set_tag(v___x_1266_, 1);
lean_ctor_set(v___x_1266_, 0, v___x_1321_);
v___x_1323_ = v___x_1266_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
lean_object* v___x_1325_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 0, v___x_1323_);
v___x_1325_ = v___x_1306_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
else
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec_ref(v_alts_1296_);
lean_dec_ref(v_discrInfos_1295_);
lean_dec_ref(v_discrs_1292_);
lean_dec(v_motive_1291_);
lean_dec_ref(v_params_1290_);
lean_del_object(v___x_1266_);
lean_dec(v_us_1206_);
lean_dec(v_declName_1205_);
v_a_1329_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1331_ = v___x_1303_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___x_1303_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1329_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
}
v___jp_1337_:
{
lean_object* v_levelParams_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; uint8_t v___x_1344_; 
v_levelParams_1340_ = lean_ctor_get(v_toConstantVal_1268_, 1);
lean_inc(v_levelParams_1340_);
lean_dec_ref(v_toConstantVal_1268_);
v___x_1341_ = l_Array_toSubarray___redArg(v_args_1277_, v_lower_1338_, v_upper_1339_);
v___x_1342_ = l_List_lengthTR___redArg(v_levelParams_1340_);
lean_dec(v_levelParams_1340_);
v___x_1343_ = l_List_lengthTR___redArg(v_us_1206_);
v___x_1344_ = lean_nat_dec_eq(v___x_1342_, v___x_1343_);
lean_dec(v___x_1343_);
lean_dec(v___x_1342_);
if (v___x_1344_ == 0)
{
lean_object* v___x_1345_; 
v___x_1345_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3));
v___y_1298_ = v___x_1341_;
v___y_1299_ = v___x_1345_;
goto v___jp_1297_;
}
else
{
v___y_1298_ = v___x_1341_;
v___y_1299_ = v___x_1294_;
goto v___jp_1297_;
}
}
}
}
}
else
{
lean_object* v___x_1348_; lean_object* v___x_1350_; 
lean_dec(v_a_1260_);
lean_dec(v_us_1206_);
lean_dec(v_declName_1205_);
lean_dec_ref(v_e_1187_);
v___x_1348_ = lean_box(0);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 0, v___x_1348_);
v___x_1350_ = v___x_1262_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v___x_1348_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
}
else
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1360_; 
lean_dec(v_us_1206_);
lean_dec(v_declName_1205_);
lean_dec_ref(v_e_1187_);
v_a_1353_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1355_ = v___x_1259_;
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1259_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1358_; 
if (v_isShared_1356_ == 0)
{
v___x_1358_ = v___x_1355_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_a_1353_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
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
lean_dec_ref(v___x_1204_);
lean_dec_ref(v_e_1187_);
goto v___jp_1198_;
}
}
v___jp_1198_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = lean_box(0);
v___x_1200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1200_, 0, v___x_1199_);
return v___x_1200_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed(lean_object* v_e_1362_, lean_object* v_alsoCasesOn_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
uint8_t v_alsoCasesOn_boxed_1373_; lean_object* v_res_1374_; 
v_alsoCasesOn_boxed_1373_ = lean_unbox(v_alsoCasesOn_1363_);
v_res_1374_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(v_e_1362_, v_alsoCasesOn_boxed_1373_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec(v___y_1364_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(lean_object* v_k_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v_b_1380_, lean_object* v_c_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v___x_1387_; 
lean_inc(v___y_1385_);
lean_inc_ref(v___y_1384_);
lean_inc(v___y_1383_);
lean_inc_ref(v___y_1382_);
lean_inc(v___y_1379_);
lean_inc_ref(v___y_1378_);
lean_inc(v___y_1377_);
lean_inc(v___y_1376_);
v___x_1387_ = lean_apply_11(v_k_1375_, v_b_1380_, v_c_1381_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, lean_box(0));
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed(lean_object* v_k_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v_b_1393_, lean_object* v_c_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_){
_start:
{
lean_object* v_res_1400_; 
v_res_1400_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(v_k_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v_b_1393_, v_c_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec(v___y_1389_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(lean_object* v_e_1401_, lean_object* v_maxFVars_1402_, lean_object* v_k_1403_, uint8_t v_cleanupAnnotations_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
lean_object* v___f_1414_; uint8_t v___x_1415_; uint8_t v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
lean_inc(v___y_1408_);
lean_inc_ref(v___y_1407_);
lean_inc(v___y_1406_);
lean_inc(v___y_1405_);
v___f_1414_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1414_, 0, v_k_1403_);
lean_closure_set(v___f_1414_, 1, v___y_1405_);
lean_closure_set(v___f_1414_, 2, v___y_1406_);
lean_closure_set(v___f_1414_, 3, v___y_1407_);
lean_closure_set(v___f_1414_, 4, v___y_1408_);
v___x_1415_ = 1;
v___x_1416_ = 0;
v___x_1417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1417_, 0, v_maxFVars_1402_);
v___x_1418_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1401_, v___x_1415_, v___x_1416_, v___x_1415_, v___x_1416_, v___x_1417_, v___f_1414_, v_cleanupAnnotations_1404_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_);
lean_dec_ref_known(v___x_1417_, 1);
if (lean_obj_tag(v___x_1418_) == 0)
{
return v___x_1418_;
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1418_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1418_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___boxed(lean_object* v_e_1427_, lean_object* v_maxFVars_1428_, lean_object* v_k_1429_, lean_object* v_cleanupAnnotations_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1440_; lean_object* v_res_1441_; 
v_cleanupAnnotations_boxed_1440_ = lean_unbox(v_cleanupAnnotations_1430_);
v_res_1441_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_e_1427_, v_maxFVars_1428_, v_k_1429_, v_cleanupAnnotations_boxed_1440_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_);
lean_dec(v___y_1438_);
lean_dec_ref(v___y_1437_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec(v___y_1432_);
lean_dec(v___y_1431_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(lean_object* v_k_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v_b_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v___x_1453_; 
lean_inc(v___y_1451_);
lean_inc_ref(v___y_1450_);
lean_inc(v___y_1449_);
lean_inc_ref(v___y_1448_);
lean_inc(v___y_1446_);
lean_inc_ref(v___y_1445_);
lean_inc(v___y_1444_);
lean_inc(v___y_1443_);
v___x_1453_ = lean_apply_10(v_k_1442_, v_b_1447_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_, lean_box(0));
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed(lean_object* v_k_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v_b_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(v_k_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v_b_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec(v___y_1456_);
lean_dec(v___y_1455_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(lean_object* v_name_1466_, lean_object* v_type_1467_, lean_object* v_val_1468_, lean_object* v_k_1469_, uint8_t v_nondep_1470_, uint8_t v_kind_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v___f_1481_; lean_object* v___x_1482_; 
lean_inc(v___y_1475_);
lean_inc_ref(v___y_1474_);
lean_inc(v___y_1473_);
lean_inc(v___y_1472_);
v___f_1481_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1481_, 0, v_k_1469_);
lean_closure_set(v___f_1481_, 1, v___y_1472_);
lean_closure_set(v___f_1481_, 2, v___y_1473_);
lean_closure_set(v___f_1481_, 3, v___y_1474_);
lean_closure_set(v___f_1481_, 4, v___y_1475_);
v___x_1482_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1466_, v_type_1467_, v_val_1468_, v___f_1481_, v_nondep_1470_, v_kind_1471_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
if (lean_obj_tag(v___x_1482_) == 0)
{
return v___x_1482_;
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1482_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1482_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg___boxed(lean_object* v_name_1491_, lean_object* v_type_1492_, lean_object* v_val_1493_, lean_object* v_k_1494_, lean_object* v_nondep_1495_, lean_object* v_kind_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
uint8_t v_nondep_boxed_1506_; uint8_t v_kind_boxed_1507_; lean_object* v_res_1508_; 
v_nondep_boxed_1506_ = lean_unbox(v_nondep_1495_);
v_kind_boxed_1507_ = lean_unbox(v_kind_1496_);
v_res_1508_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_1491_, v_type_1492_, v_val_1493_, v_k_1494_, v_nondep_boxed_1506_, v_kind_boxed_1507_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec(v___y_1497_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(lean_object* v_k_1509_, uint8_t v_usedLetOnly_1510_, lean_object* v_x_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v___x_1521_; 
lean_inc(v___y_1519_);
lean_inc_ref(v___y_1518_);
lean_inc(v___y_1517_);
lean_inc_ref(v___y_1516_);
lean_inc(v___y_1515_);
lean_inc_ref(v___y_1514_);
lean_inc(v___y_1513_);
lean_inc(v___y_1512_);
lean_inc_ref(v_x_1511_);
v___x_1521_ = lean_apply_10(v_k_1509_, v_x_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, lean_box(0));
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; uint8_t v___x_1526_; uint8_t v___x_1527_; lean_object* v___x_1528_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1521_, 1);
v___x_1523_ = lean_unsigned_to_nat(1u);
v___x_1524_ = lean_mk_empty_array_with_capacity(v___x_1523_);
v___x_1525_ = lean_array_push(v___x_1524_, v_x_1511_);
v___x_1526_ = 0;
v___x_1527_ = 1;
v___x_1528_ = l_Lean_Meta_mkLetFVars(v___x_1525_, v_a_1522_, v_usedLetOnly_1510_, v___x_1526_, v___x_1527_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
lean_dec_ref(v___x_1525_);
return v___x_1528_;
}
else
{
lean_dec_ref(v_x_1511_);
return v___x_1521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed(lean_object* v_k_1529_, lean_object* v_usedLetOnly_1530_, lean_object* v_x_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
uint8_t v_usedLetOnly_boxed_1541_; lean_object* v_res_1542_; 
v_usedLetOnly_boxed_1541_ = lean_unbox(v_usedLetOnly_1530_);
v_res_1542_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(v_k_1529_, v_usedLetOnly_boxed_1541_, v_x_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec(v___y_1532_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(lean_object* v_name_1543_, lean_object* v_type_1544_, lean_object* v_val_1545_, lean_object* v_k_1546_, uint8_t v_nondep_1547_, uint8_t v_kind_1548_, uint8_t v_usedLetOnly_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v___x_1559_; lean_object* v___f_1560_; lean_object* v___x_1561_; 
v___x_1559_ = lean_box(v_usedLetOnly_1549_);
v___f_1560_ = lean_alloc_closure((void*)(l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1560_, 0, v_k_1546_);
lean_closure_set(v___f_1560_, 1, v___x_1559_);
v___x_1561_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_1543_, v_type_1544_, v_val_1545_, v___f_1560_, v_nondep_1547_, v_kind_1548_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___boxed(lean_object* v_name_1562_, lean_object* v_type_1563_, lean_object* v_val_1564_, lean_object* v_k_1565_, lean_object* v_nondep_1566_, lean_object* v_kind_1567_, lean_object* v_usedLetOnly_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
uint8_t v_nondep_boxed_1578_; uint8_t v_kind_boxed_1579_; uint8_t v_usedLetOnly_boxed_1580_; lean_object* v_res_1581_; 
v_nondep_boxed_1578_ = lean_unbox(v_nondep_1566_);
v_kind_boxed_1579_ = lean_unbox(v_kind_1567_);
v_usedLetOnly_boxed_1580_ = lean_unbox(v_usedLetOnly_1568_);
v_res_1581_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(v_name_1562_, v_type_1563_, v_val_1564_, v_k_1565_, v_nondep_boxed_1578_, v_kind_boxed_1579_, v_usedLetOnly_boxed_1580_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_);
lean_dec(v___y_1576_);
lean_dec_ref(v___y_1575_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec(v___y_1569_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(lean_object* v_name_1582_, uint8_t v_bi_1583_, lean_object* v_type_1584_, lean_object* v_k_1585_, uint8_t v_kind_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_){
_start:
{
lean_object* v___f_1596_; lean_object* v___x_1597_; 
lean_inc(v___y_1590_);
lean_inc_ref(v___y_1589_);
lean_inc(v___y_1588_);
lean_inc(v___y_1587_);
v___f_1596_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1596_, 0, v_k_1585_);
lean_closure_set(v___f_1596_, 1, v___y_1587_);
lean_closure_set(v___f_1596_, 2, v___y_1588_);
lean_closure_set(v___f_1596_, 3, v___y_1589_);
lean_closure_set(v___f_1596_, 4, v___y_1590_);
v___x_1597_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1582_, v_bi_1583_, v_type_1584_, v___f_1596_, v_kind_1586_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_);
if (lean_obj_tag(v___x_1597_) == 0)
{
return v___x_1597_;
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1597_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1597_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___boxed(lean_object* v_name_1606_, lean_object* v_bi_1607_, lean_object* v_type_1608_, lean_object* v_k_1609_, lean_object* v_kind_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
uint8_t v_bi_boxed_1620_; uint8_t v_kind_boxed_1621_; lean_object* v_res_1622_; 
v_bi_boxed_1620_ = lean_unbox(v_bi_1607_);
v_kind_boxed_1621_ = lean_unbox(v_kind_1610_);
v_res_1622_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_name_1606_, v_bi_boxed_1620_, v_type_1608_, v_k_1609_, v_kind_boxed_1621_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_dec_ref(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec(v___y_1611_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(lean_object* v_k_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v___x_1633_; 
lean_inc(v___y_1627_);
lean_inc_ref(v___y_1626_);
lean_inc(v___y_1625_);
lean_inc(v___y_1624_);
v___x_1633_ = lean_apply_9(v_k_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, lean_box(0));
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed(lean_object* v_k_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(v_k_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec(v___y_1635_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(lean_object* v_k_1645_, uint8_t v_allowLevelAssignments_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_){
_start:
{
lean_object* v___f_1656_; lean_object* v___x_1657_; 
lean_inc(v___y_1650_);
lean_inc_ref(v___y_1649_);
lean_inc(v___y_1648_);
lean_inc(v___y_1647_);
v___f_1656_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_1656_, 0, v_k_1645_);
lean_closure_set(v___f_1656_, 1, v___y_1647_);
lean_closure_set(v___f_1656_, 2, v___y_1648_);
lean_closure_set(v___f_1656_, 3, v___y_1649_);
lean_closure_set(v___f_1656_, 4, v___y_1650_);
v___x_1657_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1646_, v___f_1656_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
if (lean_obj_tag(v___x_1657_) == 0)
{
return v___x_1657_;
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
v_a_1658_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1657_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1657_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___boxed(lean_object* v_k_1666_, lean_object* v_allowLevelAssignments_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1677_; lean_object* v_res_1678_; 
v_allowLevelAssignments_boxed_1677_ = lean_unbox(v_allowLevelAssignments_1667_);
v_res_1678_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v_k_1666_, v_allowLevelAssignments_boxed_1677_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec(v___y_1668_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(lean_object* v_a_1679_, lean_object* v_x_1680_){
_start:
{
if (lean_obj_tag(v_x_1680_) == 0)
{
lean_object* v___x_1681_; 
v___x_1681_ = lean_box(0);
return v___x_1681_;
}
else
{
lean_object* v_key_1682_; lean_object* v_value_1683_; lean_object* v_tail_1684_; uint8_t v___x_1685_; 
v_key_1682_ = lean_ctor_get(v_x_1680_, 0);
v_value_1683_ = lean_ctor_get(v_x_1680_, 1);
v_tail_1684_ = lean_ctor_get(v_x_1680_, 2);
v___x_1685_ = lean_expr_eqv(v_key_1682_, v_a_1679_);
if (v___x_1685_ == 0)
{
v_x_1680_ = v_tail_1684_;
goto _start;
}
else
{
lean_object* v___x_1687_; 
lean_inc(v_value_1683_);
v___x_1687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1687_, 0, v_value_1683_);
return v___x_1687_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg___boxed(lean_object* v_a_1688_, lean_object* v_x_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_1688_, v_x_1689_);
lean_dec(v_x_1689_);
lean_dec_ref(v_a_1688_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(lean_object* v_m_1691_, lean_object* v_a_1692_){
_start:
{
lean_object* v_buckets_1693_; lean_object* v___x_1694_; uint64_t v___x_1695_; uint64_t v___x_1696_; uint64_t v___x_1697_; uint64_t v_fold_1698_; uint64_t v___x_1699_; uint64_t v___x_1700_; uint64_t v___x_1701_; size_t v___x_1702_; size_t v___x_1703_; size_t v___x_1704_; size_t v___x_1705_; size_t v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v_buckets_1693_ = lean_ctor_get(v_m_1691_, 1);
v___x_1694_ = lean_array_get_size(v_buckets_1693_);
v___x_1695_ = l_Lean_Expr_hash(v_a_1692_);
v___x_1696_ = 32ULL;
v___x_1697_ = lean_uint64_shift_right(v___x_1695_, v___x_1696_);
v_fold_1698_ = lean_uint64_xor(v___x_1695_, v___x_1697_);
v___x_1699_ = 16ULL;
v___x_1700_ = lean_uint64_shift_right(v_fold_1698_, v___x_1699_);
v___x_1701_ = lean_uint64_xor(v_fold_1698_, v___x_1700_);
v___x_1702_ = lean_uint64_to_usize(v___x_1701_);
v___x_1703_ = lean_usize_of_nat(v___x_1694_);
v___x_1704_ = ((size_t)1ULL);
v___x_1705_ = lean_usize_sub(v___x_1703_, v___x_1704_);
v___x_1706_ = lean_usize_land(v___x_1702_, v___x_1705_);
v___x_1707_ = lean_array_uget_borrowed(v_buckets_1693_, v___x_1706_);
v___x_1708_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_1692_, v___x_1707_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg___boxed(lean_object* v_m_1709_, lean_object* v_a_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v_m_1709_, v_a_1710_);
lean_dec_ref(v_a_1710_);
lean_dec_ref(v_m_1709_);
return v_res_1711_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(lean_object* v_opts_1712_, lean_object* v_opt_1713_){
_start:
{
lean_object* v_name_1714_; lean_object* v_defValue_1715_; lean_object* v_map_1716_; lean_object* v___x_1717_; 
v_name_1714_ = lean_ctor_get(v_opt_1713_, 0);
v_defValue_1715_ = lean_ctor_get(v_opt_1713_, 1);
v_map_1716_ = lean_ctor_get(v_opts_1712_, 0);
v___x_1717_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1716_, v_name_1714_);
if (lean_obj_tag(v___x_1717_) == 0)
{
uint8_t v___x_1718_; 
v___x_1718_ = lean_unbox(v_defValue_1715_);
return v___x_1718_;
}
else
{
lean_object* v_val_1719_; 
v_val_1719_ = lean_ctor_get(v___x_1717_, 0);
lean_inc(v_val_1719_);
lean_dec_ref_known(v___x_1717_, 1);
if (lean_obj_tag(v_val_1719_) == 1)
{
uint8_t v_v_1720_; 
v_v_1720_ = lean_ctor_get_uint8(v_val_1719_, 0);
lean_dec_ref_known(v_val_1719_, 0);
return v_v_1720_;
}
else
{
uint8_t v___x_1721_; 
lean_dec(v_val_1719_);
v___x_1721_ = lean_unbox(v_defValue_1715_);
return v___x_1721_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5___boxed(lean_object* v_opts_1722_, lean_object* v_opt_1723_){
_start:
{
uint8_t v_res_1724_; lean_object* v_r_1725_; 
v_res_1724_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v_opts_1722_, v_opt_1723_);
lean_dec_ref(v_opt_1723_);
lean_dec_ref(v_opts_1722_);
v_r_1725_ = lean_box(v_res_1724_);
return v_r_1725_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(lean_object* v_a_1726_, lean_object* v_b_1727_){
_start:
{
lean_object* v_array_1728_; lean_object* v_start_1729_; lean_object* v_stop_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1743_; 
v_array_1728_ = lean_ctor_get(v_a_1726_, 0);
v_start_1729_ = lean_ctor_get(v_a_1726_, 1);
v_stop_1730_ = lean_ctor_get(v_a_1726_, 2);
v_isSharedCheck_1743_ = !lean_is_exclusive(v_a_1726_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1732_ = v_a_1726_;
v_isShared_1733_ = v_isSharedCheck_1743_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_stop_1730_);
lean_inc(v_start_1729_);
lean_inc(v_array_1728_);
lean_dec(v_a_1726_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1743_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
uint8_t v___x_1734_; 
v___x_1734_ = lean_nat_dec_lt(v_start_1729_, v_stop_1730_);
if (v___x_1734_ == 0)
{
lean_del_object(v___x_1732_);
lean_dec(v_stop_1730_);
lean_dec(v_start_1729_);
lean_dec_ref(v_array_1728_);
return v_b_1727_;
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1738_; 
v___x_1735_ = lean_unsigned_to_nat(1u);
v___x_1736_ = lean_nat_add(v_start_1729_, v___x_1735_);
lean_inc_ref(v_array_1728_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 1, v___x_1736_);
v___x_1738_ = v___x_1732_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_array_1728_);
lean_ctor_set(v_reuseFailAlloc_1742_, 1, v___x_1736_);
lean_ctor_set(v_reuseFailAlloc_1742_, 2, v_stop_1730_);
v___x_1738_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1739_ = lean_array_fget(v_array_1728_, v_start_1729_);
lean_dec(v_start_1729_);
lean_dec_ref(v_array_1728_);
v___x_1740_ = lean_array_push(v_b_1727_, v___x_1739_);
v_a_1726_ = v___x_1738_;
v_b_1727_ = v___x_1740_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(lean_object* v_body_1744_, lean_object* v_recFnName_1745_, lean_object* v_fixedPrefixSize_1746_, lean_object* v_F_1747_, lean_object* v_x_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = lean_expr_instantiate1(v_body_1744_, v_x_1748_);
v___x_1759_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1745_, v_fixedPrefixSize_1746_, v_F_1747_, v___x_1758_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; uint8_t v___x_1764_; uint8_t v___x_1765_; uint8_t v___x_1766_; lean_object* v___x_1767_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
lean_inc(v_a_1760_);
lean_dec_ref_known(v___x_1759_, 1);
v___x_1761_ = lean_unsigned_to_nat(1u);
v___x_1762_ = lean_mk_empty_array_with_capacity(v___x_1761_);
v___x_1763_ = lean_array_push(v___x_1762_, v_x_1748_);
v___x_1764_ = 0;
v___x_1765_ = 1;
v___x_1766_ = 1;
v___x_1767_ = l_Lean_Meta_mkLambdaFVars(v___x_1763_, v_a_1760_, v___x_1764_, v___x_1765_, v___x_1764_, v___x_1765_, v___x_1766_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
lean_dec_ref(v___x_1763_);
return v___x_1767_;
}
else
{
lean_dec_ref(v_x_1748_);
return v___x_1759_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed(lean_object* v_body_1768_, lean_object* v_recFnName_1769_, lean_object* v_fixedPrefixSize_1770_, lean_object* v_F_1771_, lean_object* v_x_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v_res_1782_; 
v_res_1782_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(v_body_1768_, v_recFnName_1769_, v_fixedPrefixSize_1770_, v_F_1771_, v_x_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v_body_1768_);
return v_res_1782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(lean_object* v_body_1783_, lean_object* v_recFnName_1784_, lean_object* v_fixedPrefixSize_1785_, lean_object* v_F_1786_, lean_object* v_x_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1797_ = lean_expr_instantiate1(v_body_1783_, v_x_1787_);
v___x_1798_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1784_, v_fixedPrefixSize_1785_, v_F_1786_, v___x_1797_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v_a_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; uint8_t v___x_1803_; uint8_t v___x_1804_; uint8_t v___x_1805_; lean_object* v___x_1806_; 
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_a_1799_);
lean_dec_ref_known(v___x_1798_, 1);
v___x_1800_ = lean_unsigned_to_nat(1u);
v___x_1801_ = lean_mk_empty_array_with_capacity(v___x_1800_);
v___x_1802_ = lean_array_push(v___x_1801_, v_x_1787_);
v___x_1803_ = 0;
v___x_1804_ = 1;
v___x_1805_ = 1;
v___x_1806_ = l_Lean_Meta_mkForallFVars(v___x_1802_, v_a_1799_, v___x_1803_, v___x_1804_, v___x_1804_, v___x_1805_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
lean_dec_ref(v___x_1802_);
return v___x_1806_;
}
else
{
lean_dec_ref(v_x_1787_);
return v___x_1798_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed(lean_object* v_body_1807_, lean_object* v_recFnName_1808_, lean_object* v_fixedPrefixSize_1809_, lean_object* v_F_1810_, lean_object* v_x_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(v_body_1807_, v_recFnName_1808_, v_fixedPrefixSize_1809_, v_F_1810_, v_x_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
lean_dec(v___y_1813_);
lean_dec(v___y_1812_);
lean_dec_ref(v_body_1807_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed(lean_object* v_body_1822_, lean_object* v_recFnName_1823_, lean_object* v_fixedPrefixSize_1824_, lean_object* v_F_1825_, lean_object* v_x_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(v_body_1822_, v_recFnName_1823_, v_fixedPrefixSize_1824_, v_F_1825_, v_x_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec(v___y_1832_);
lean_dec_ref(v___y_1831_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec(v___y_1827_);
lean_dec_ref(v_x_1826_);
lean_dec_ref(v_body_1822_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(lean_object* v_recFnName_1839_, lean_object* v_fixedPrefixSize_1840_, lean_object* v_F_1841_, size_t v_sz_1842_, size_t v_i_1843_, lean_object* v_bs_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
uint8_t v___x_1854_; 
v___x_1854_ = lean_usize_dec_lt(v_i_1843_, v_sz_1842_);
if (v___x_1854_ == 0)
{
lean_object* v___x_1855_; 
lean_dec_ref(v_F_1841_);
lean_dec(v_fixedPrefixSize_1840_);
lean_dec(v_recFnName_1839_);
v___x_1855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1855_, 0, v_bs_1844_);
return v___x_1855_;
}
else
{
lean_object* v_v_1856_; lean_object* v___x_1857_; lean_object* v_bs_x27_1858_; lean_object* v___x_1859_; 
v_v_1856_ = lean_array_uget(v_bs_1844_, v_i_1843_);
v___x_1857_ = lean_unsigned_to_nat(0u);
v_bs_x27_1858_ = lean_array_uset(v_bs_1844_, v_i_1843_, v___x_1857_);
lean_inc_ref(v_F_1841_);
lean_inc(v_fixedPrefixSize_1840_);
lean_inc(v_recFnName_1839_);
v___x_1859_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1839_, v_fixedPrefixSize_1840_, v_F_1841_, v_v_1856_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; size_t v___x_1861_; size_t v___x_1862_; lean_object* v___x_1863_; 
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
lean_inc(v_a_1860_);
lean_dec_ref_known(v___x_1859_, 1);
v___x_1861_ = ((size_t)1ULL);
v___x_1862_ = lean_usize_add(v_i_1843_, v___x_1861_);
v___x_1863_ = lean_array_uset(v_bs_x27_1858_, v_i_1843_, v_a_1860_);
v_i_1843_ = v___x_1862_;
v_bs_1844_ = v___x_1863_;
goto _start;
}
else
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
lean_dec_ref(v_bs_x27_1858_);
lean_dec_ref(v_F_1841_);
lean_dec(v_fixedPrefixSize_1840_);
lean_dec(v_recFnName_1839_);
v_a_1865_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1859_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1859_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4(void){
_start:
{
lean_object* v_cls_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v_cls_1880_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1));
v___x_1881_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3));
v___x_1882_ = l_Lean_Name_append(v___x_1881_, v_cls_1880_);
return v___x_1882_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6(void){
_start:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1884_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5));
v___x_1885_ = l_Lean_stringToMessageData(v___x_1884_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(lean_object* v_recFnName_1886_, lean_object* v_fixedPrefixSize_1887_, lean_object* v_F_1888_, lean_object* v_e_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; uint8_t v___x_1914_; 
v___x_1911_ = l_Lean_Expr_getAppNumArgs(v_e_1889_);
v___x_1912_ = lean_unsigned_to_nat(1u);
v___x_1913_ = lean_nat_add(v_fixedPrefixSize_1887_, v___x_1912_);
v___x_1914_ = lean_nat_dec_lt(v___x_1911_, v___x_1913_);
if (v___x_1914_ == 0)
{
lean_object* v___x_1915_; lean_object* v_dummy_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v_args_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1915_ = l_Lean_instInhabitedExpr;
v_dummy_1916_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v___x_1911_);
v___x_1917_ = lean_mk_array(v___x_1911_, v_dummy_1916_);
v___x_1918_ = lean_nat_sub(v___x_1911_, v___x_1912_);
lean_dec(v___x_1911_);
v_args_1919_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1889_, v___x_1917_, v___x_1918_);
v___x_1920_ = lean_array_get(v___x_1915_, v_args_1919_, v_fixedPrefixSize_1887_);
lean_inc_ref(v_F_1888_);
lean_inc(v_fixedPrefixSize_1887_);
lean_inc(v_recFnName_1886_);
v___x_1921_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1886_, v_fixedPrefixSize_1887_, v_F_1888_, v___x_1920_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
lean_dec_ref_known(v___x_1921_, 1);
lean_inc_ref(v_F_1888_);
v___x_1923_ = l_Lean_Expr_app___override(v_F_1888_, v_a_1922_);
lean_inc(v___y_1897_);
lean_inc_ref(v___y_1896_);
lean_inc(v___y_1895_);
lean_inc_ref(v___y_1894_);
lean_inc_ref(v___x_1923_);
v___x_1924_ = lean_infer_type(v___x_1923_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1926_; 
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
lean_inc(v_a_1925_);
lean_dec_ref_known(v___x_1924_, 1);
lean_inc(v___y_1897_);
lean_inc_ref(v___y_1896_);
lean_inc(v___y_1895_);
lean_inc_ref(v___y_1894_);
v___x_1926_ = lean_whnf(v_a_1925_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_a_1927_);
lean_dec_ref_known(v___x_1926_, 1);
v___x_1928_ = l_Lean_Expr_bindingDomain_x21(v_a_1927_);
lean_dec(v_a_1927_);
v___x_1929_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v___x_1928_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1931_; lean_object* v_lower_1933_; lean_object* v_upper_1934_; lean_object* v___x_1958_; lean_object* v___x_1959_; uint8_t v___x_1960_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_a_1930_);
lean_dec_ref_known(v___x_1929_, 1);
v___x_1931_ = l_Lean_Expr_app___override(v___x_1923_, v_a_1930_);
v___x_1958_ = lean_unsigned_to_nat(0u);
v___x_1959_ = lean_array_get_size(v_args_1919_);
v___x_1960_ = lean_nat_dec_le(v___x_1913_, v___x_1958_);
if (v___x_1960_ == 0)
{
v_lower_1933_ = v___x_1913_;
v_upper_1934_ = v___x_1959_;
goto v___jp_1932_;
}
else
{
lean_dec(v___x_1913_);
v_lower_1933_ = v___x_1958_;
v_upper_1934_ = v___x_1959_;
goto v___jp_1932_;
}
v___jp_1932_:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; size_t v_sz_1938_; size_t v___x_1939_; lean_object* v___x_1940_; 
v___x_1935_ = l_Array_toSubarray___redArg(v_args_1919_, v_lower_1933_, v_upper_1934_);
v___x_1936_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0));
v___x_1937_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(v___x_1935_, v___x_1936_);
v_sz_1938_ = lean_array_size(v___x_1937_);
v___x_1939_ = ((size_t)0ULL);
v___x_1940_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_1886_, v_fixedPrefixSize_1887_, v_F_1888_, v_sz_1938_, v___x_1939_, v___x_1937_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1949_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1943_ = v___x_1940_;
v_isShared_1944_ = v_isSharedCheck_1949_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1940_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1949_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1945_; lean_object* v___x_1947_; 
v___x_1945_ = l_Lean_mkAppN(v___x_1931_, v_a_1941_);
lean_dec(v_a_1941_);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 0, v___x_1945_);
v___x_1947_ = v___x_1943_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v___x_1945_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_dec_ref(v___x_1931_);
v_a_1950_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1940_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1940_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1923_);
lean_dec_ref(v_args_1919_);
lean_dec(v___x_1913_);
lean_dec_ref(v_F_1888_);
lean_dec(v_fixedPrefixSize_1887_);
lean_dec(v_recFnName_1886_);
return v___x_1929_;
}
}
else
{
lean_dec_ref(v___x_1923_);
lean_dec_ref(v_args_1919_);
lean_dec(v___x_1913_);
lean_dec_ref(v_F_1888_);
lean_dec(v_fixedPrefixSize_1887_);
lean_dec(v_recFnName_1886_);
return v___x_1926_;
}
}
else
{
lean_dec_ref(v___x_1923_);
lean_dec_ref(v_args_1919_);
lean_dec(v___x_1913_);
lean_dec_ref(v_F_1888_);
lean_dec(v_fixedPrefixSize_1887_);
lean_dec(v_recFnName_1886_);
return v___x_1924_;
}
}
else
{
lean_dec_ref(v_args_1919_);
lean_dec(v___x_1913_);
lean_dec_ref(v_F_1888_);
lean_dec(v_fixedPrefixSize_1887_);
lean_dec(v_recFnName_1886_);
return v___x_1921_;
}
}
else
{
lean_object* v_toCold_1961_; lean_object* v_options_1962_; uint8_t v_hasTrace_1963_; 
lean_dec(v___x_1913_);
lean_dec(v___x_1911_);
v_toCold_1961_ = lean_ctor_get(v___y_1896_, 0);
v_options_1962_ = lean_ctor_get(v_toCold_1961_, 2);
v_hasTrace_1963_ = lean_ctor_get_uint8(v_options_1962_, sizeof(void*)*1);
if (v_hasTrace_1963_ == 0)
{
v___y_1900_ = v___y_1890_;
v___y_1901_ = v___y_1891_;
v___y_1902_ = v___y_1892_;
v___y_1903_ = v___y_1893_;
v___y_1904_ = v___y_1894_;
v___y_1905_ = v___y_1895_;
v___y_1906_ = v___y_1896_;
v___y_1907_ = v___y_1897_;
goto v___jp_1899_;
}
else
{
lean_object* v_inheritedTraceOptions_1964_; lean_object* v_cls_1965_; lean_object* v___x_1966_; uint8_t v___x_1967_; 
v_inheritedTraceOptions_1964_ = lean_ctor_get(v_toCold_1961_, 11);
v_cls_1965_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1));
v___x_1966_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_1967_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1964_, v_options_1962_, v___x_1966_);
if (v___x_1967_ == 0)
{
v___y_1900_ = v___y_1890_;
v___y_1901_ = v___y_1891_;
v___y_1902_ = v___y_1892_;
v___y_1903_ = v___y_1893_;
v___y_1904_ = v___y_1894_;
v___y_1905_ = v___y_1895_;
v___y_1906_ = v___y_1896_;
v___y_1907_ = v___y_1897_;
goto v___jp_1899_;
}
else
{
lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1968_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6);
lean_inc_ref(v_e_1889_);
v___x_1969_ = l_Lean_indentExpr(v_e_1889_);
v___x_1970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1968_);
lean_ctor_set(v___x_1970_, 1, v___x_1969_);
v___x_1971_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_1965_, v___x_1970_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_dec_ref_known(v___x_1971_, 1);
v___y_1900_ = v___y_1890_;
v___y_1901_ = v___y_1891_;
v___y_1902_ = v___y_1892_;
v___y_1903_ = v___y_1893_;
v___y_1904_ = v___y_1894_;
v___y_1905_ = v___y_1895_;
v___y_1906_ = v___y_1896_;
v___y_1907_ = v___y_1897_;
goto v___jp_1899_;
}
else
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_dec_ref(v_e_1889_);
lean_dec_ref(v_F_1888_);
lean_dec(v_fixedPrefixSize_1887_);
lean_dec(v_recFnName_1886_);
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1971_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1971_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1972_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
}
}
v___jp_1899_:
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lean_Meta_etaExpand(v_e_1889_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1910_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1908_, 1);
v___x_1910_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1886_, v_fixedPrefixSize_1887_, v_F_1888_, v_a_1909_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_);
return v___x_1910_;
}
else
{
lean_dec_ref(v_F_1888_);
lean_dec(v_fixedPrefixSize_1887_);
lean_dec(v_recFnName_1886_);
return v___x_1908_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(lean_object* v_recFnName_1980_, lean_object* v_fixedPrefixSize_1981_, lean_object* v_F_1982_, lean_object* v_x_1983_, lean_object* v_x_1984_, lean_object* v_x_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
if (lean_obj_tag(v_x_1983_) == 5)
{
lean_object* v_fn_1995_; lean_object* v_arg_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; 
v_fn_1995_ = lean_ctor_get(v_x_1983_, 0);
lean_inc_ref(v_fn_1995_);
v_arg_1996_ = lean_ctor_get(v_x_1983_, 1);
lean_inc_ref(v_arg_1996_);
lean_dec_ref_known(v_x_1983_, 2);
v___x_1997_ = lean_array_set(v_x_1984_, v_x_1985_, v_arg_1996_);
v___x_1998_ = lean_unsigned_to_nat(1u);
v___x_1999_ = lean_nat_sub(v_x_1985_, v___x_1998_);
lean_dec(v_x_1985_);
v_x_1983_ = v_fn_1995_;
v_x_1984_ = v___x_1997_;
v_x_1985_ = v___x_1999_;
goto _start;
}
else
{
lean_object* v___x_2001_; 
lean_dec(v_x_1985_);
lean_inc_ref(v_F_1982_);
lean_inc(v_fixedPrefixSize_1981_);
lean_inc(v_recFnName_1980_);
v___x_2001_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1980_, v_fixedPrefixSize_1981_, v_F_1982_, v_x_1983_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; size_t v_sz_2003_; size_t v___x_2004_; lean_object* v___x_2005_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
lean_inc(v_a_2002_);
lean_dec_ref_known(v___x_2001_, 1);
v_sz_2003_ = lean_array_size(v_x_1984_);
v___x_2004_ = ((size_t)0ULL);
v___x_2005_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_1980_, v_fixedPrefixSize_1981_, v_F_1982_, v_sz_2003_, v___x_2004_, v_x_1984_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2014_; 
v_a_2006_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2008_ = v___x_2005_;
v_isShared_2009_ = v_isSharedCheck_2014_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_2005_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2014_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2010_; lean_object* v___x_2012_; 
v___x_2010_ = l_Lean_mkAppN(v_a_2002_, v_a_2006_);
lean_dec(v_a_2006_);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 0, v___x_2010_);
v___x_2012_ = v___x_2008_;
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
else
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2022_; 
lean_dec(v_a_2002_);
v_a_2015_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2017_ = v___x_2005_;
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v___x_2005_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2015_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
}
else
{
lean_dec_ref(v_x_1984_);
lean_dec_ref(v_F_1982_);
lean_dec(v_fixedPrefixSize_1981_);
lean_dec(v_recFnName_1980_);
return v___x_2001_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(lean_object* v_recFnName_2023_, lean_object* v_fixedPrefixSize_2024_, lean_object* v_F_2025_, lean_object* v_e_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_){
_start:
{
uint8_t v___x_2036_; 
v___x_2036_ = l_Lean_Expr_isAppOf(v_e_2026_, v_recFnName_2023_);
if (v___x_2036_ == 0)
{
lean_object* v_dummy_2037_; lean_object* v_nargs_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v_dummy_2037_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
v_nargs_2038_ = l_Lean_Expr_getAppNumArgs(v_e_2026_);
lean_inc(v_nargs_2038_);
v___x_2039_ = lean_mk_array(v_nargs_2038_, v_dummy_2037_);
v___x_2040_ = lean_unsigned_to_nat(1u);
v___x_2041_ = lean_nat_sub(v_nargs_2038_, v___x_2040_);
lean_dec(v_nargs_2038_);
v___x_2042_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(v_recFnName_2023_, v_fixedPrefixSize_2024_, v_F_2025_, v_e_2026_, v___x_2039_, v___x_2041_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_);
return v___x_2042_;
}
else
{
lean_object* v___x_2043_; 
v___x_2043_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2023_, v_fixedPrefixSize_2024_, v_F_2025_, v_e_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_);
return v___x_2043_;
}
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2045_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0));
v___x_2046_ = l_Lean_stringToMessageData(v___x_2045_);
return v___x_2046_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; 
v___x_2048_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2));
v___x_2049_ = l_Lean_stringToMessageData(v___x_2048_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(lean_object* v___x_2050_, lean_object* v_b_2051_, lean_object* v_recFnName_2052_, lean_object* v_fixedPrefixSize_2053_, uint8_t v___x_2054_, lean_object* v___x_2055_, lean_object* v_a_2056_, lean_object* v_e_2057_, lean_object* v_xs_2058_, lean_object* v_altBody_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v___x_2076_; uint8_t v___x_2077_; 
v___x_2076_ = lean_array_get_size(v_xs_2058_);
v___x_2077_ = lean_nat_dec_eq(v___x_2076_, v___x_2055_);
if (v___x_2077_ == 0)
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
lean_dec_ref(v_altBody_2059_);
lean_dec(v_fixedPrefixSize_2053_);
lean_dec(v_recFnName_2052_);
v___x_2078_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1);
v___x_2079_ = l_Lean_indentExpr(v_a_2056_);
v___x_2080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2078_);
lean_ctor_set(v___x_2080_, 1, v___x_2079_);
v___x_2081_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3);
v___x_2082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2080_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
v___x_2083_ = l_Lean_indentExpr(v_e_2057_);
v___x_2084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2082_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___x_2085_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_2084_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2085_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2085_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2085_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
else
{
lean_dec_ref(v_e_2057_);
lean_dec_ref(v_a_2056_);
goto v___jp_2069_;
}
v___jp_2069_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = lean_array_get_borrowed(v___x_2050_, v_xs_2058_, v_b_2051_);
lean_inc(v___x_2070_);
v___x_2071_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2052_, v_fixedPrefixSize_2053_, v___x_2070_, v_altBody_2059_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2072_; uint8_t v___x_2073_; uint8_t v___x_2074_; lean_object* v___x_2075_; 
v_a_2072_ = lean_ctor_get(v___x_2071_, 0);
lean_inc(v_a_2072_);
lean_dec_ref_known(v___x_2071_, 1);
v___x_2073_ = 0;
v___x_2074_ = 1;
v___x_2075_ = l_Lean_Meta_mkLambdaFVars(v_xs_2058_, v_a_2072_, v___x_2073_, v___x_2054_, v___x_2073_, v___x_2054_, v___x_2074_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
return v___x_2075_;
}
else
{
return v___x_2071_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed(lean_object** _args){
lean_object* v___x_2094_ = _args[0];
lean_object* v_b_2095_ = _args[1];
lean_object* v_recFnName_2096_ = _args[2];
lean_object* v_fixedPrefixSize_2097_ = _args[3];
lean_object* v___x_2098_ = _args[4];
lean_object* v___x_2099_ = _args[5];
lean_object* v_a_2100_ = _args[6];
lean_object* v_e_2101_ = _args[7];
lean_object* v_xs_2102_ = _args[8];
lean_object* v_altBody_2103_ = _args[9];
lean_object* v___y_2104_ = _args[10];
lean_object* v___y_2105_ = _args[11];
lean_object* v___y_2106_ = _args[12];
lean_object* v___y_2107_ = _args[13];
lean_object* v___y_2108_ = _args[14];
lean_object* v___y_2109_ = _args[15];
lean_object* v___y_2110_ = _args[16];
lean_object* v___y_2111_ = _args[17];
lean_object* v___y_2112_ = _args[18];
_start:
{
uint8_t v___x_64898__boxed_2113_; lean_object* v_res_2114_; 
v___x_64898__boxed_2113_ = lean_unbox(v___x_2098_);
v_res_2114_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(v___x_2094_, v_b_2095_, v_recFnName_2096_, v_fixedPrefixSize_2097_, v___x_64898__boxed_2113_, v___x_2099_, v_a_2100_, v_e_2101_, v_xs_2102_, v_altBody_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec(v___y_2105_);
lean_dec(v___y_2104_);
lean_dec_ref(v_xs_2102_);
lean_dec(v___x_2099_);
lean_dec(v_b_2095_);
lean_dec_ref(v___x_2094_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(lean_object* v_recFnName_2115_, lean_object* v_fixedPrefixSize_2116_, lean_object* v_e_2117_, lean_object* v_as_2118_, lean_object* v_bs_2119_, lean_object* v_i_2120_, lean_object* v_cs_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
lean_object* v___x_2131_; uint8_t v___x_2132_; 
v___x_2131_ = lean_array_get_size(v_as_2118_);
v___x_2132_ = lean_nat_dec_lt(v_i_2120_, v___x_2131_);
if (v___x_2132_ == 0)
{
lean_object* v___x_2133_; 
lean_dec(v_i_2120_);
lean_dec_ref(v_e_2117_);
lean_dec(v_fixedPrefixSize_2116_);
lean_dec(v_recFnName_2115_);
v___x_2133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2133_, 0, v_cs_2121_);
return v___x_2133_;
}
else
{
lean_object* v___x_2134_; uint8_t v___x_2135_; 
v___x_2134_ = lean_array_get_size(v_bs_2119_);
v___x_2135_ = lean_nat_dec_lt(v_i_2120_, v___x_2134_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; 
lean_dec(v_i_2120_);
lean_dec_ref(v_e_2117_);
lean_dec(v_fixedPrefixSize_2116_);
lean_dec(v_recFnName_2115_);
v___x_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2136_, 0, v_cs_2121_);
return v___x_2136_;
}
else
{
lean_object* v___x_2137_; lean_object* v_a_2138_; lean_object* v_b_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___f_2143_; uint8_t v___x_2144_; lean_object* v___x_2145_; 
v___x_2137_ = l_Lean_instInhabitedExpr;
v_a_2138_ = lean_array_fget_borrowed(v_as_2118_, v_i_2120_);
v_b_2139_ = lean_array_fget_borrowed(v_bs_2119_, v_i_2120_);
v___x_2140_ = lean_unsigned_to_nat(1u);
v___x_2141_ = lean_nat_add(v_b_2139_, v___x_2140_);
v___x_2142_ = lean_box(v___x_2135_);
lean_inc_ref(v_e_2117_);
lean_inc_n(v_a_2138_, 2);
lean_inc(v___x_2141_);
lean_inc(v_fixedPrefixSize_2116_);
lean_inc(v_recFnName_2115_);
lean_inc(v_b_2139_);
v___f_2143_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed), 19, 8);
lean_closure_set(v___f_2143_, 0, v___x_2137_);
lean_closure_set(v___f_2143_, 1, v_b_2139_);
lean_closure_set(v___f_2143_, 2, v_recFnName_2115_);
lean_closure_set(v___f_2143_, 3, v_fixedPrefixSize_2116_);
lean_closure_set(v___f_2143_, 4, v___x_2142_);
lean_closure_set(v___f_2143_, 5, v___x_2141_);
lean_closure_set(v___f_2143_, 6, v_a_2138_);
lean_closure_set(v___f_2143_, 7, v_e_2117_);
v___x_2144_ = 0;
v___x_2145_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_a_2138_, v___x_2141_, v___f_2143_, v___x_2144_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2146_);
lean_dec_ref_known(v___x_2145_, 1);
v___x_2147_ = lean_nat_add(v_i_2120_, v___x_2140_);
lean_dec(v_i_2120_);
v___x_2148_ = lean_array_push(v_cs_2121_, v_a_2146_);
v_i_2120_ = v___x_2147_;
v_cs_2121_ = v___x_2148_;
goto _start;
}
else
{
lean_object* v_a_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2157_; 
lean_dec_ref(v_cs_2121_);
lean_dec(v_i_2120_);
lean_dec_ref(v_e_2117_);
lean_dec(v_fixedPrefixSize_2116_);
lean_dec(v_recFnName_2115_);
v_a_2150_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2152_ = v___x_2145_;
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_a_2150_);
lean_dec(v___x_2145_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2155_; 
if (v_isShared_2153_ == 0)
{
v___x_2155_ = v___x_2152_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v_a_2150_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
return v___x_2155_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(lean_object* v_recFnName_2158_, lean_object* v_fixedPrefixSize_2159_, lean_object* v_F_2160_, lean_object* v_e_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_){
_start:
{
switch(lean_obj_tag(v_e_2161_))
{
case 6:
{
lean_object* v_binderName_2171_; lean_object* v_binderType_2172_; lean_object* v_body_2173_; uint8_t v_binderInfo_2174_; lean_object* v___f_2175_; lean_object* v___x_2176_; 
v_binderName_2171_ = lean_ctor_get(v_e_2161_, 0);
lean_inc(v_binderName_2171_);
v_binderType_2172_ = lean_ctor_get(v_e_2161_, 1);
lean_inc_ref(v_binderType_2172_);
v_body_2173_ = lean_ctor_get(v_e_2161_, 2);
lean_inc_ref(v_body_2173_);
v_binderInfo_2174_ = lean_ctor_get_uint8(v_e_2161_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2161_, 3);
lean_inc_ref(v_F_2160_);
lean_inc(v_fixedPrefixSize_2159_);
lean_inc(v_recFnName_2158_);
v___f_2175_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed), 14, 4);
lean_closure_set(v___f_2175_, 0, v_body_2173_);
lean_closure_set(v___f_2175_, 1, v_recFnName_2158_);
lean_closure_set(v___f_2175_, 2, v_fixedPrefixSize_2159_);
lean_closure_set(v___f_2175_, 3, v_F_2160_);
v___x_2176_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_binderType_2172_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2176_) == 0)
{
lean_object* v_a_2177_; uint8_t v___x_2178_; lean_object* v___x_2179_; 
v_a_2177_ = lean_ctor_get(v___x_2176_, 0);
lean_inc(v_a_2177_);
lean_dec_ref_known(v___x_2176_, 1);
v___x_2178_ = 0;
v___x_2179_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_binderName_2171_, v_binderInfo_2174_, v_a_2177_, v___f_2175_, v___x_2178_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
return v___x_2179_;
}
else
{
lean_dec_ref(v___f_2175_);
lean_dec(v_binderName_2171_);
return v___x_2176_;
}
}
case 7:
{
lean_object* v_binderName_2180_; lean_object* v_binderType_2181_; lean_object* v_body_2182_; uint8_t v_binderInfo_2183_; lean_object* v___f_2184_; lean_object* v___x_2185_; 
v_binderName_2180_ = lean_ctor_get(v_e_2161_, 0);
lean_inc(v_binderName_2180_);
v_binderType_2181_ = lean_ctor_get(v_e_2161_, 1);
lean_inc_ref(v_binderType_2181_);
v_body_2182_ = lean_ctor_get(v_e_2161_, 2);
lean_inc_ref(v_body_2182_);
v_binderInfo_2183_ = lean_ctor_get_uint8(v_e_2161_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2161_, 3);
lean_inc_ref(v_F_2160_);
lean_inc(v_fixedPrefixSize_2159_);
lean_inc(v_recFnName_2158_);
v___f_2184_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed), 14, 4);
lean_closure_set(v___f_2184_, 0, v_body_2182_);
lean_closure_set(v___f_2184_, 1, v_recFnName_2158_);
lean_closure_set(v___f_2184_, 2, v_fixedPrefixSize_2159_);
lean_closure_set(v___f_2184_, 3, v_F_2160_);
v___x_2185_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_binderType_2181_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2185_) == 0)
{
lean_object* v_a_2186_; uint8_t v___x_2187_; lean_object* v___x_2188_; 
v_a_2186_ = lean_ctor_get(v___x_2185_, 0);
lean_inc(v_a_2186_);
lean_dec_ref_known(v___x_2185_, 1);
v___x_2187_ = 0;
v___x_2188_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_binderName_2180_, v_binderInfo_2183_, v_a_2186_, v___f_2184_, v___x_2187_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
return v___x_2188_;
}
else
{
lean_dec_ref(v___f_2184_);
lean_dec(v_binderName_2180_);
return v___x_2185_;
}
}
case 8:
{
lean_object* v_declName_2189_; lean_object* v_type_2190_; lean_object* v_value_2191_; lean_object* v_body_2192_; uint8_t v_nondep_2193_; lean_object* v___f_2194_; lean_object* v___x_2195_; 
v_declName_2189_ = lean_ctor_get(v_e_2161_, 0);
lean_inc(v_declName_2189_);
v_type_2190_ = lean_ctor_get(v_e_2161_, 1);
lean_inc_ref(v_type_2190_);
v_value_2191_ = lean_ctor_get(v_e_2161_, 2);
lean_inc_ref(v_value_2191_);
v_body_2192_ = lean_ctor_get(v_e_2161_, 3);
lean_inc_ref(v_body_2192_);
v_nondep_2193_ = lean_ctor_get_uint8(v_e_2161_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2161_, 4);
lean_inc_ref_n(v_F_2160_, 2);
lean_inc_n(v_fixedPrefixSize_2159_, 2);
lean_inc_n(v_recFnName_2158_, 2);
v___f_2194_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed), 14, 4);
lean_closure_set(v___f_2194_, 0, v_body_2192_);
lean_closure_set(v___f_2194_, 1, v_recFnName_2158_);
lean_closure_set(v___f_2194_, 2, v_fixedPrefixSize_2159_);
lean_closure_set(v___f_2194_, 3, v_F_2160_);
v___x_2195_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_type_2190_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v_a_2196_; lean_object* v___x_2197_; 
v_a_2196_ = lean_ctor_get(v___x_2195_, 0);
lean_inc(v_a_2196_);
lean_dec_ref_known(v___x_2195_, 1);
v___x_2197_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_value_2191_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; uint8_t v___x_2199_; uint8_t v___x_2200_; lean_object* v___x_2201_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2199_ = 0;
v___x_2200_ = 0;
v___x_2201_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(v_declName_2189_, v_a_2196_, v_a_2198_, v___f_2194_, v_nondep_2193_, v___x_2199_, v___x_2200_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
return v___x_2201_;
}
else
{
lean_dec(v_a_2196_);
lean_dec_ref(v___f_2194_);
lean_dec(v_declName_2189_);
return v___x_2197_;
}
}
else
{
lean_dec_ref(v___f_2194_);
lean_dec_ref(v_value_2191_);
lean_dec(v_declName_2189_);
lean_dec_ref(v_F_2160_);
lean_dec(v_fixedPrefixSize_2159_);
lean_dec(v_recFnName_2158_);
return v___x_2195_;
}
}
case 10:
{
lean_object* v_data_2202_; lean_object* v_expr_2203_; lean_object* v___x_2204_; 
v_data_2202_ = lean_ctor_get(v_e_2161_, 0);
lean_inc(v_data_2202_);
v_expr_2203_ = lean_ctor_get(v_e_2161_, 1);
lean_inc_ref(v_expr_2203_);
v___x_2204_ = l_Lean_getRecAppSyntax_x3f(v_e_2161_);
lean_dec_ref_known(v_e_2161_, 2);
if (lean_obj_tag(v___x_2204_) == 1)
{
lean_object* v_val_2205_; lean_object* v_toCold_2206_; lean_object* v_currRecDepth_2207_; lean_object* v_ref_2208_; uint8_t v_diag_2209_; uint8_t v_suppressElabErrors_2210_; lean_object* v_ref_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
lean_dec(v_data_2202_);
v_val_2205_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_val_2205_);
lean_dec_ref_known(v___x_2204_, 1);
v_toCold_2206_ = lean_ctor_get(v___y_2168_, 0);
v_currRecDepth_2207_ = lean_ctor_get(v___y_2168_, 1);
v_ref_2208_ = lean_ctor_get(v___y_2168_, 2);
v_diag_2209_ = lean_ctor_get_uint8(v___y_2168_, sizeof(void*)*3);
v_suppressElabErrors_2210_ = lean_ctor_get_uint8(v___y_2168_, sizeof(void*)*3 + 1);
v_ref_2211_ = l_Lean_replaceRef(v_val_2205_, v_ref_2208_);
lean_dec(v_val_2205_);
lean_inc(v_currRecDepth_2207_);
lean_inc_ref(v_toCold_2206_);
v___x_2212_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2212_, 0, v_toCold_2206_);
lean_ctor_set(v___x_2212_, 1, v_currRecDepth_2207_);
lean_ctor_set(v___x_2212_, 2, v_ref_2211_);
lean_ctor_set_uint8(v___x_2212_, sizeof(void*)*3, v_diag_2209_);
lean_ctor_set_uint8(v___x_2212_, sizeof(void*)*3 + 1, v_suppressElabErrors_2210_);
v___x_2213_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_expr_2203_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___x_2212_, v___y_2169_);
lean_dec_ref_known(v___x_2212_, 3);
return v___x_2213_;
}
else
{
lean_object* v___x_2214_; 
lean_dec(v___x_2204_);
v___x_2214_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_expr_2203_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2223_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2217_ = v___x_2214_;
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2219_; lean_object* v___x_2221_; 
v___x_2219_ = l_Lean_mkMData(v_data_2202_, v_a_2215_);
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 0, v___x_2219_);
v___x_2221_ = v___x_2217_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
else
{
lean_dec(v_data_2202_);
return v___x_2214_;
}
}
}
case 11:
{
lean_object* v_typeName_2224_; lean_object* v_idx_2225_; lean_object* v_struct_2226_; lean_object* v___x_2227_; 
v_typeName_2224_ = lean_ctor_get(v_e_2161_, 0);
lean_inc(v_typeName_2224_);
v_idx_2225_ = lean_ctor_get(v_e_2161_, 1);
lean_inc(v_idx_2225_);
v_struct_2226_ = lean_ctor_get(v_e_2161_, 2);
lean_inc_ref(v_struct_2226_);
lean_dec_ref_known(v_e_2161_, 3);
v___x_2227_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_struct_2226_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2236_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2230_ = v___x_2227_;
v_isShared_2231_ = v_isSharedCheck_2236_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_a_2228_);
lean_dec(v___x_2227_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2236_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2232_; lean_object* v___x_2234_; 
v___x_2232_ = l_Lean_mkProj(v_typeName_2224_, v_idx_2225_, v_a_2228_);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 0, v___x_2232_);
v___x_2234_ = v___x_2230_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v___x_2232_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
else
{
lean_dec(v_idx_2225_);
lean_dec(v_typeName_2224_);
return v___x_2227_;
}
}
case 4:
{
uint8_t v___x_2237_; 
v___x_2237_ = l_Lean_Expr_isConstOf(v_e_2161_, v_recFnName_2158_);
if (v___x_2237_ == 0)
{
lean_object* v___x_2238_; 
lean_dec_ref(v_F_2160_);
lean_dec(v_fixedPrefixSize_2159_);
lean_dec(v_recFnName_2158_);
v___x_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2238_, 0, v_e_2161_);
return v___x_2238_;
}
else
{
lean_object* v___x_2239_; 
v___x_2239_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_e_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
return v___x_2239_;
}
}
case 5:
{
uint8_t v___x_2240_; lean_object* v___x_2241_; 
v___x_2240_ = 1;
lean_inc_ref(v_e_2161_);
v___x_2241_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(v_e_2161_, v___x_2240_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
lean_inc(v_a_2242_);
lean_dec_ref_known(v___x_2241_, 1);
if (lean_obj_tag(v_a_2242_) == 0)
{
lean_object* v___x_2243_; 
v___x_2243_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_e_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
return v___x_2243_;
}
else
{
lean_object* v_val_2244_; lean_object* v___x_2245_; 
v_val_2244_ = lean_ctor_get(v_a_2242_, 0);
lean_inc(v_val_2244_);
lean_dec_ref_known(v_a_2242_, 1);
lean_inc_ref(v_F_2160_);
v___x_2245_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_val_2244_, v_F_2160_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_object* v_a_2246_; 
v_a_2246_ = lean_ctor_get(v___x_2245_, 0);
lean_inc(v_a_2246_);
lean_dec_ref_known(v___x_2245_, 1);
if (lean_obj_tag(v_a_2246_) == 1)
{
lean_object* v_val_2247_; lean_object* v_toMatcherInfo_2248_; lean_object* v_matcherName_2249_; lean_object* v_matcherLevels_2250_; lean_object* v_params_2251_; lean_object* v_motive_2252_; lean_object* v_discrs_2253_; lean_object* v_alts_2254_; lean_object* v_remaining_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v_val_2247_ = lean_ctor_get(v_a_2246_, 0);
lean_inc(v_val_2247_);
lean_dec_ref_known(v_a_2246_, 1);
v_toMatcherInfo_2248_ = lean_ctor_get(v_val_2247_, 0);
lean_inc_ref(v_toMatcherInfo_2248_);
v_matcherName_2249_ = lean_ctor_get(v_val_2247_, 1);
lean_inc(v_matcherName_2249_);
v_matcherLevels_2250_ = lean_ctor_get(v_val_2247_, 2);
lean_inc_ref(v_matcherLevels_2250_);
v_params_2251_ = lean_ctor_get(v_val_2247_, 3);
lean_inc_ref(v_params_2251_);
v_motive_2252_ = lean_ctor_get(v_val_2247_, 4);
lean_inc_ref(v_motive_2252_);
v_discrs_2253_ = lean_ctor_get(v_val_2247_, 5);
lean_inc_ref(v_discrs_2253_);
v_alts_2254_ = lean_ctor_get(v_val_2247_, 6);
lean_inc_ref(v_alts_2254_);
v_remaining_2255_ = lean_ctor_get(v_val_2247_, 7);
lean_inc_ref(v_remaining_2255_);
v___x_2256_ = l_Lean_Meta_MatcherApp_altNumParams(v_val_2247_);
v___x_2257_ = lean_unsigned_to_nat(0u);
v___x_2258_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0));
lean_inc(v_fixedPrefixSize_2159_);
lean_inc(v_recFnName_2158_);
v___x_2259_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_e_2161_, v_alts_2254_, v___x_2256_, v___x_2257_, v___x_2258_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v_alts_2254_);
if (lean_obj_tag(v___x_2259_) == 0)
{
lean_object* v_a_2260_; size_t v_sz_2261_; size_t v___x_2262_; lean_object* v___x_2263_; 
v_a_2260_ = lean_ctor_get(v___x_2259_, 0);
lean_inc(v_a_2260_);
lean_dec_ref_known(v___x_2259_, 1);
v_sz_2261_ = lean_array_size(v_discrs_2253_);
v___x_2262_ = ((size_t)0ULL);
v___x_2263_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_sz_2261_, v___x_2262_, v_discrs_2253_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2273_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2266_ = v___x_2263_;
v_isShared_2267_ = v_isSharedCheck_2273_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2263_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2273_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2271_; 
v___x_2268_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2268_, 0, v_toMatcherInfo_2248_);
lean_ctor_set(v___x_2268_, 1, v_matcherName_2249_);
lean_ctor_set(v___x_2268_, 2, v_matcherLevels_2250_);
lean_ctor_set(v___x_2268_, 3, v_params_2251_);
lean_ctor_set(v___x_2268_, 4, v_motive_2252_);
lean_ctor_set(v___x_2268_, 5, v_a_2264_);
lean_ctor_set(v___x_2268_, 6, v_a_2260_);
lean_ctor_set(v___x_2268_, 7, v_remaining_2255_);
v___x_2269_ = l_Lean_Meta_MatcherApp_toExpr(v___x_2268_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 0, v___x_2269_);
v___x_2271_ = v___x_2266_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v___x_2269_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2281_; 
lean_dec(v_a_2260_);
lean_dec_ref(v_remaining_2255_);
lean_dec_ref(v_motive_2252_);
lean_dec_ref(v_params_2251_);
lean_dec_ref(v_matcherLevels_2250_);
lean_dec(v_matcherName_2249_);
lean_dec_ref(v_toMatcherInfo_2248_);
v_a_2274_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2276_ = v___x_2263_;
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2263_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2279_; 
if (v_isShared_2277_ == 0)
{
v___x_2279_ = v___x_2276_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2274_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
}
else
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2289_; 
lean_dec_ref(v_remaining_2255_);
lean_dec_ref(v_discrs_2253_);
lean_dec_ref(v_motive_2252_);
lean_dec_ref(v_params_2251_);
lean_dec_ref(v_matcherLevels_2250_);
lean_dec(v_matcherName_2249_);
lean_dec_ref(v_toMatcherInfo_2248_);
lean_dec_ref(v_F_2160_);
lean_dec(v_fixedPrefixSize_2159_);
lean_dec(v_recFnName_2158_);
v_a_2282_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2284_ = v___x_2259_;
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2259_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
if (v_isShared_2285_ == 0)
{
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2282_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
else
{
lean_object* v___x_2290_; 
lean_dec(v_a_2246_);
v___x_2290_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2158_, v_fixedPrefixSize_2159_, v_F_2160_, v_e_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
return v___x_2290_;
}
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
lean_dec_ref_known(v_e_2161_, 2);
lean_dec_ref(v_F_2160_);
lean_dec(v_fixedPrefixSize_2159_);
lean_dec(v_recFnName_2158_);
v_a_2291_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2245_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2245_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
}
else
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
lean_dec_ref_known(v_e_2161_, 2);
lean_dec_ref(v_F_2160_);
lean_dec(v_fixedPrefixSize_2159_);
lean_dec(v_recFnName_2158_);
v_a_2299_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v___x_2241_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2241_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_a_2299_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
default: 
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
lean_dec_ref(v_F_2160_);
lean_dec(v_fixedPrefixSize_2159_);
v___x_2307_ = lean_unsigned_to_nat(1u);
v___x_2308_ = lean_mk_empty_array_with_capacity(v___x_2307_);
v___x_2309_ = lean_array_push(v___x_2308_, v_recFnName_2158_);
lean_inc_ref(v_e_2161_);
v___x_2310_ = l_Lean_Elab_ensureNoRecFn(v___x_2309_, v_e_2161_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2317_; 
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2317_ == 0)
{
lean_object* v_unused_2318_; 
v_unused_2318_ = lean_ctor_get(v___x_2310_, 0);
lean_dec(v_unused_2318_);
v___x_2312_ = v___x_2310_;
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
else
{
lean_dec(v___x_2310_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v_e_2161_);
v___x_2315_ = v___x_2312_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_e_2161_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
else
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2326_; 
lean_dec_ref(v_e_2161_);
v_a_2319_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2321_ = v___x_2310_;
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2310_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2324_; 
if (v_isShared_2322_ == 0)
{
v___x_2324_ = v___x_2321_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2319_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(lean_object* v_recFnName_2327_, lean_object* v_fixedPrefixSize_2328_, lean_object* v_F_2329_, lean_object* v_e_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_){
_start:
{
lean_object* v___y_2341_; lean_object* v___y_2342_; lean_object* v___x_2359_; 
lean_inc_ref(v_e_2330_);
lean_inc(v_recFnName_2327_);
v___x_2359_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_2327_, v_e_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2359_) == 0)
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2448_; 
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2362_ = v___x_2359_;
v_isShared_2363_ = v_isSharedCheck_2448_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2359_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2448_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
uint8_t v___x_2364_; 
v___x_2364_ = lean_unbox(v_a_2360_);
lean_dec(v_a_2360_);
if (v___x_2364_ == 0)
{
lean_object* v___x_2366_; 
lean_dec_ref(v_F_2329_);
lean_dec(v_fixedPrefixSize_2328_);
lean_dec(v_recFnName_2327_);
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 0, v_e_2330_);
v___x_2366_ = v___x_2362_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_e_2330_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
else
{
uint8_t v___x_2368_; lean_object* v___y_2370_; lean_object* v___y_2371_; lean_object* v___y_2372_; lean_object* v___y_2373_; lean_object* v___y_2374_; lean_object* v___y_2375_; lean_object* v___y_2376_; lean_object* v___y_2377_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
lean_del_object(v___x_2362_);
v___x_2368_ = 0;
v___x_2425_ = lean_st_ref_get(v___y_2332_);
v___x_2426_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v___x_2425_, v_e_2330_);
lean_dec(v___x_2425_);
if (lean_obj_tag(v___x_2426_) == 1)
{
lean_object* v_val_2427_; lean_object* v_fst_2428_; lean_object* v_snd_2429_; lean_object* v___x_2430_; 
v_val_2427_ = lean_ctor_get(v___x_2426_, 0);
lean_inc(v_val_2427_);
lean_dec_ref_known(v___x_2426_, 1);
v_fst_2428_ = lean_ctor_get(v_val_2427_, 0);
lean_inc(v_fst_2428_);
v_snd_2429_ = lean_ctor_get(v_val_2427_, 1);
lean_inc(v_snd_2429_);
lean_dec(v_val_2427_);
v___x_2430_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_snd_2429_, v___y_2335_);
lean_dec(v_snd_2429_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2439_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2433_ = v___x_2430_;
v_isShared_2434_ = v_isSharedCheck_2439_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2430_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2439_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
uint8_t v___x_2435_; 
v___x_2435_ = lean_unbox(v_a_2431_);
lean_dec(v_a_2431_);
if (v___x_2435_ == 0)
{
lean_del_object(v___x_2433_);
lean_dec(v_fst_2428_);
v___y_2370_ = v___y_2331_;
v___y_2371_ = v___y_2332_;
v___y_2372_ = v___y_2333_;
v___y_2373_ = v___y_2334_;
v___y_2374_ = v___y_2335_;
v___y_2375_ = v___y_2336_;
v___y_2376_ = v___y_2337_;
v___y_2377_ = v___y_2338_;
goto v___jp_2369_;
}
else
{
lean_object* v___x_2437_; 
lean_dec_ref(v_e_2330_);
lean_dec_ref(v_F_2329_);
lean_dec(v_fixedPrefixSize_2328_);
lean_dec(v_recFnName_2327_);
if (v_isShared_2434_ == 0)
{
lean_ctor_set(v___x_2433_, 0, v_fst_2428_);
v___x_2437_ = v___x_2433_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_fst_2428_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
}
else
{
lean_object* v_a_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2447_; 
lean_dec(v_fst_2428_);
lean_dec_ref(v_e_2330_);
lean_dec_ref(v_F_2329_);
lean_dec(v_fixedPrefixSize_2328_);
lean_dec(v_recFnName_2327_);
v_a_2440_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2442_ = v___x_2430_;
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_a_2440_);
lean_dec(v___x_2430_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2445_; 
if (v_isShared_2443_ == 0)
{
v___x_2445_ = v___x_2442_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v_a_2440_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
}
}
else
{
lean_dec(v___x_2426_);
v___y_2370_ = v___y_2331_;
v___y_2371_ = v___y_2332_;
v___y_2372_ = v___y_2333_;
v___y_2373_ = v___y_2334_;
v___y_2374_ = v___y_2335_;
v___y_2375_ = v___y_2336_;
v___y_2376_ = v___y_2337_;
v___y_2377_ = v___y_2338_;
goto v___jp_2369_;
}
v___jp_2369_:
{
lean_object* v___x_2378_; 
lean_inc_ref(v_e_2330_);
v___x_2378_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(v_recFnName_2327_, v_fixedPrefixSize_2328_, v_F_2329_, v_e_2330_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_a_2379_; lean_object* v___f_2380_; lean_object* v___x_2381_; 
v_a_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc_n(v_a_2379_, 2);
lean_dec_ref_known(v___x_2378_, 1);
lean_inc_ref(v_e_2330_);
v___f_2380_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed), 11, 2);
lean_closure_set(v___f_2380_, 0, v_e_2330_);
lean_closure_set(v___f_2380_, 1, v_a_2379_);
v___x_2381_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2416_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2384_ = v___x_2381_;
v_isShared_2385_ = v_isSharedCheck_2416_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2381_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2416_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v_toCold_2390_; lean_object* v_options_2391_; lean_object* v___x_2392_; uint8_t v___x_2393_; 
v___x_2386_ = lean_st_ref_take(v___y_2371_);
lean_inc(v_a_2379_);
v___x_2387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2387_, 0, v_a_2379_);
lean_ctor_set(v___x_2387_, 1, v_a_2382_);
v___x_2388_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(v___x_2386_, v_e_2330_, v___x_2387_);
v___x_2389_ = lean_st_ref_put(v___y_2371_, v___x_2388_);
v_toCold_2390_ = lean_ctor_get(v___y_2376_, 0);
v_options_2391_ = lean_ctor_get(v_toCold_2390_, 2);
v___x_2392_ = l_Lean_Elab_WF_debug_definition_wf_replaceRecApps;
v___x_2393_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v_options_2391_, v___x_2392_);
if (v___x_2393_ == 0)
{
lean_object* v___x_2395_; 
lean_dec_ref(v___f_2380_);
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 0, v_a_2379_);
v___x_2395_ = v___x_2384_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_a_2379_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
else
{
lean_object* v___x_2397_; uint8_t v_transparency_2398_; uint8_t v___x_2399_; uint8_t v___x_2400_; 
lean_del_object(v___x_2384_);
v___x_2397_ = l_Lean_Meta_Context_config(v___y_2374_);
v_transparency_2398_ = lean_ctor_get_uint8(v___x_2397_, 9);
lean_dec_ref(v___x_2397_);
v___x_2399_ = 0;
v___x_2400_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2398_, v___x_2399_);
if (v___x_2400_ == 0)
{
lean_object* v_keyedConfig_2401_; uint8_t v_trackZetaDelta_2402_; lean_object* v_zetaDeltaSet_2403_; lean_object* v_lctx_2404_; lean_object* v_localInstances_2405_; lean_object* v_defEqCtx_x3f_2406_; lean_object* v_synthPendingDepth_2407_; lean_object* v_customCanUnfoldPredicate_x3f_2408_; uint8_t v_univApprox_2409_; uint8_t v_inTypeClassResolution_2410_; uint8_t v_cacheInferType_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; 
v_keyedConfig_2401_ = lean_ctor_get(v___y_2374_, 0);
v_trackZetaDelta_2402_ = lean_ctor_get_uint8(v___y_2374_, sizeof(void*)*7);
v_zetaDeltaSet_2403_ = lean_ctor_get(v___y_2374_, 1);
v_lctx_2404_ = lean_ctor_get(v___y_2374_, 2);
v_localInstances_2405_ = lean_ctor_get(v___y_2374_, 3);
v_defEqCtx_x3f_2406_ = lean_ctor_get(v___y_2374_, 4);
v_synthPendingDepth_2407_ = lean_ctor_get(v___y_2374_, 5);
v_customCanUnfoldPredicate_x3f_2408_ = lean_ctor_get(v___y_2374_, 6);
v_univApprox_2409_ = lean_ctor_get_uint8(v___y_2374_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2410_ = lean_ctor_get_uint8(v___y_2374_, sizeof(void*)*7 + 2);
v_cacheInferType_2411_ = lean_ctor_get_uint8(v___y_2374_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2401_);
v___x_2412_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2399_, v_keyedConfig_2401_);
lean_inc(v_customCanUnfoldPredicate_x3f_2408_);
lean_inc(v_synthPendingDepth_2407_);
lean_inc(v_defEqCtx_x3f_2406_);
lean_inc_ref(v_localInstances_2405_);
lean_inc_ref(v_lctx_2404_);
lean_inc(v_zetaDeltaSet_2403_);
v___x_2413_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2413_, 0, v___x_2412_);
lean_ctor_set(v___x_2413_, 1, v_zetaDeltaSet_2403_);
lean_ctor_set(v___x_2413_, 2, v_lctx_2404_);
lean_ctor_set(v___x_2413_, 3, v_localInstances_2405_);
lean_ctor_set(v___x_2413_, 4, v_defEqCtx_x3f_2406_);
lean_ctor_set(v___x_2413_, 5, v_synthPendingDepth_2407_);
lean_ctor_set(v___x_2413_, 6, v_customCanUnfoldPredicate_x3f_2408_);
lean_ctor_set_uint8(v___x_2413_, sizeof(void*)*7, v_trackZetaDelta_2402_);
lean_ctor_set_uint8(v___x_2413_, sizeof(void*)*7 + 1, v_univApprox_2409_);
lean_ctor_set_uint8(v___x_2413_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2410_);
lean_ctor_set_uint8(v___x_2413_, sizeof(void*)*7 + 3, v_cacheInferType_2411_);
v___x_2414_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v___f_2380_, v___x_2368_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___x_2413_, v___y_2375_, v___y_2376_, v___y_2377_);
lean_dec_ref_known(v___x_2413_, 7);
v___y_2341_ = v_a_2379_;
v___y_2342_ = v___x_2414_;
goto v___jp_2340_;
}
else
{
lean_object* v___x_2415_; 
v___x_2415_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v___f_2380_, v___x_2368_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_);
v___y_2341_ = v_a_2379_;
v___y_2342_ = v___x_2415_;
goto v___jp_2340_;
}
}
}
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
lean_dec_ref(v___f_2380_);
lean_dec(v_a_2379_);
lean_dec_ref(v_e_2330_);
v_a_2417_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2381_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2381_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
else
{
lean_dec_ref(v_e_2330_);
return v___x_2378_;
}
}
}
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
lean_dec_ref(v_e_2330_);
lean_dec_ref(v_F_2329_);
lean_dec(v_fixedPrefixSize_2328_);
lean_dec(v_recFnName_2327_);
v_a_2449_ = lean_ctor_get(v___x_2359_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2451_ = v___x_2359_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2359_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
v___jp_2340_:
{
if (lean_obj_tag(v___y_2342_) == 0)
{
lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2349_; 
v_isSharedCheck_2349_ = !lean_is_exclusive(v___y_2342_);
if (v_isSharedCheck_2349_ == 0)
{
lean_object* v_unused_2350_; 
v_unused_2350_ = lean_ctor_get(v___y_2342_, 0);
lean_dec(v_unused_2350_);
v___x_2344_ = v___y_2342_;
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
else
{
lean_dec(v___y_2342_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2347_; 
if (v_isShared_2345_ == 0)
{
lean_ctor_set(v___x_2344_, 0, v___y_2341_);
v___x_2347_ = v___x_2344_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v___y_2341_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
}
else
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2358_; 
lean_dec_ref(v___y_2341_);
v_a_2351_ = lean_ctor_get(v___y_2342_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___y_2342_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2353_ = v___y_2342_;
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___y_2342_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2356_; 
if (v_isShared_2354_ == 0)
{
v___x_2356_ = v___x_2353_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_a_2351_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(lean_object* v_body_2457_, lean_object* v_recFnName_2458_, lean_object* v_fixedPrefixSize_2459_, lean_object* v_F_2460_, lean_object* v_x_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; 
v___x_2471_ = lean_expr_instantiate1(v_body_2457_, v_x_2461_);
v___x_2472_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2458_, v_fixedPrefixSize_2459_, v_F_2460_, v___x_2471_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_);
return v___x_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp___boxed(lean_object* v_recFnName_2473_, lean_object* v_fixedPrefixSize_2474_, lean_object* v_F_2475_, lean_object* v_e_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
lean_object* v_res_2486_; 
v_res_2486_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2473_, v_fixedPrefixSize_2474_, v_F_2475_, v_e_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_);
lean_dec(v___y_2484_);
lean_dec_ref(v___y_2483_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec(v___y_2478_);
lean_dec(v___y_2477_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed(lean_object* v_recFnName_2487_, lean_object* v_fixedPrefixSize_2488_, lean_object* v_F_2489_, lean_object* v_sz_2490_, lean_object* v_i_2491_, lean_object* v_bs_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_){
_start:
{
size_t v_sz_boxed_2502_; size_t v_i_boxed_2503_; lean_object* v_res_2504_; 
v_sz_boxed_2502_ = lean_unbox_usize(v_sz_2490_);
lean_dec(v_sz_2490_);
v_i_boxed_2503_ = lean_unbox_usize(v_i_2491_);
lean_dec(v_i_2491_);
v_res_2504_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_2487_, v_fixedPrefixSize_2488_, v_F_2489_, v_sz_boxed_2502_, v_i_boxed_2503_, v_bs_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
lean_dec(v___y_2498_);
lean_dec_ref(v___y_2497_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
lean_dec(v___y_2494_);
lean_dec(v___y_2493_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16___boxed(lean_object* v_recFnName_2505_, lean_object* v_fixedPrefixSize_2506_, lean_object* v_F_2507_, lean_object* v_x_2508_, lean_object* v_x_2509_, lean_object* v_x_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_){
_start:
{
lean_object* v_res_2520_; 
v_res_2520_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(v_recFnName_2505_, v_fixedPrefixSize_2506_, v_F_2507_, v_x_2508_, v_x_2509_, v_x_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_);
lean_dec(v___y_2518_);
lean_dec_ref(v___y_2517_);
lean_dec(v___y_2516_);
lean_dec_ref(v___y_2515_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec(v___y_2511_);
return v_res_2520_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___boxed(lean_object* v_recFnName_2521_, lean_object* v_fixedPrefixSize_2522_, lean_object* v_e_2523_, lean_object* v_as_2524_, lean_object* v_bs_2525_, lean_object* v_i_2526_, lean_object* v_cs_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(v_recFnName_2521_, v_fixedPrefixSize_2522_, v_e_2523_, v_as_2524_, v_bs_2525_, v_i_2526_, v_cs_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_);
lean_dec(v___y_2535_);
lean_dec_ref(v___y_2534_);
lean_dec(v___y_2533_);
lean_dec_ref(v___y_2532_);
lean_dec(v___y_2531_);
lean_dec_ref(v___y_2530_);
lean_dec(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v_bs_2525_);
lean_dec_ref(v_as_2524_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___boxed(lean_object* v_recFnName_2538_, lean_object* v_fixedPrefixSize_2539_, lean_object* v_F_2540_, lean_object* v_e_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2538_, v_fixedPrefixSize_2539_, v_F_2540_, v_e_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2543_);
lean_dec(v___y_2542_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___boxed(lean_object* v_recFnName_2552_, lean_object* v_fixedPrefixSize_2553_, lean_object* v_F_2554_, lean_object* v_e_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v_res_2565_; 
v_res_2565_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2552_, v_fixedPrefixSize_2553_, v_F_2554_, v_e_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec_ref(v___y_2560_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec(v___y_2556_);
return v_res_2565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___boxed(lean_object* v_recFnName_2566_, lean_object* v_fixedPrefixSize_2567_, lean_object* v_F_2568_, lean_object* v_e_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v_res_2579_; 
v_res_2579_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(v_recFnName_2566_, v_fixedPrefixSize_2567_, v_F_2568_, v_e_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_);
lean_dec(v___y_2577_);
lean_dec_ref(v___y_2576_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec(v___y_2571_);
lean_dec(v___y_2570_);
return v_res_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(lean_object* v_00_u03b1_2580_, lean_object* v_k_2581_, uint8_t v_allowLevelAssignments_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
lean_object* v___x_2592_; 
v___x_2592_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v_k_2581_, v_allowLevelAssignments_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___boxed(lean_object* v_00_u03b1_2593_, lean_object* v_k_2594_, lean_object* v_allowLevelAssignments_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2605_; lean_object* v_res_2606_; 
v_allowLevelAssignments_boxed_2605_ = lean_unbox(v_allowLevelAssignments_2595_);
v_res_2606_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(v_00_u03b1_2593_, v_k_2594_, v_allowLevelAssignments_boxed_2605_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
lean_dec(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec(v___y_2597_);
lean_dec(v___y_2596_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(lean_object* v_00_u03b1_2607_, lean_object* v_name_2608_, uint8_t v_bi_2609_, lean_object* v_type_2610_, lean_object* v_k_2611_, uint8_t v_kind_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v___x_2622_; 
v___x_2622_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_name_2608_, v_bi_2609_, v_type_2610_, v_k_2611_, v_kind_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___boxed(lean_object* v_00_u03b1_2623_, lean_object* v_name_2624_, lean_object* v_bi_2625_, lean_object* v_type_2626_, lean_object* v_k_2627_, lean_object* v_kind_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
uint8_t v_bi_boxed_2638_; uint8_t v_kind_boxed_2639_; lean_object* v_res_2640_; 
v_bi_boxed_2638_ = lean_unbox(v_bi_2625_);
v_kind_boxed_2639_ = lean_unbox(v_kind_2628_);
v_res_2640_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(v_00_u03b1_2623_, v_name_2624_, v_bi_boxed_2638_, v_type_2626_, v_k_2627_, v_kind_boxed_2639_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2630_);
lean_dec(v___y_2629_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(lean_object* v_00_u03b1_2641_, lean_object* v_e_2642_, lean_object* v_maxFVars_2643_, lean_object* v_k_2644_, uint8_t v_cleanupAnnotations_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v___x_2655_; 
v___x_2655_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_e_2642_, v_maxFVars_2643_, v_k_2644_, v_cleanupAnnotations_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___boxed(lean_object* v_00_u03b1_2656_, lean_object* v_e_2657_, lean_object* v_maxFVars_2658_, lean_object* v_k_2659_, lean_object* v_cleanupAnnotations_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2670_; lean_object* v_res_2671_; 
v_cleanupAnnotations_boxed_2670_ = lean_unbox(v_cleanupAnnotations_2660_);
v_res_2671_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(v_00_u03b1_2656_, v_e_2657_, v_maxFVars_2658_, v_k_2659_, v_cleanupAnnotations_boxed_2670_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
lean_dec(v___y_2662_);
lean_dec(v___y_2661_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(lean_object* v_inst_2672_, lean_object* v_R_2673_, lean_object* v_a_2674_, lean_object* v_b_2675_){
_start:
{
lean_object* v___x_2676_; 
v___x_2676_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(v_a_2674_, v_b_2675_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(lean_object* v_cls_2677_, lean_object* v_msg_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v___x_2688_; 
v___x_2688_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_2677_, v_msg_2678_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___boxed(lean_object* v_cls_2689_, lean_object* v_msg_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_){
_start:
{
lean_object* v_res_2700_; 
v_res_2700_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(v_cls_2689_, v_msg_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
lean_dec(v___y_2698_);
lean_dec_ref(v___y_2697_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
lean_dec(v___y_2692_);
lean_dec(v___y_2691_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4(lean_object* v_00_u03b2_2701_, lean_object* v_m_2702_, lean_object* v_a_2703_, lean_object* v_b_2704_){
_start:
{
lean_object* v___x_2705_; 
v___x_2705_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(v_m_2702_, v_a_2703_, v_b_2704_);
return v___x_2705_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(lean_object* v_00_u03b1_2706_, lean_object* v_msg_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_){
_start:
{
lean_object* v___x_2717_; 
v___x_2717_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_2707_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_);
return v___x_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___boxed(lean_object* v_00_u03b1_2718_, lean_object* v_msg_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(v_00_u03b1_2718_, v_msg_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_);
lean_dec(v___y_2727_);
lean_dec_ref(v___y_2726_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v___y_2721_);
lean_dec(v___y_2720_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(lean_object* v_00_u03b2_2730_, lean_object* v_m_2731_, lean_object* v_a_2732_){
_start:
{
lean_object* v___x_2733_; 
v___x_2733_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v_m_2731_, v_a_2732_);
return v___x_2733_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___boxed(lean_object* v_00_u03b2_2734_, lean_object* v_m_2735_, lean_object* v_a_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(v_00_u03b2_2734_, v_m_2735_, v_a_2736_);
lean_dec_ref(v_a_2736_);
lean_dec_ref(v_m_2735_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(lean_object* v_00_u03b1_2738_, lean_object* v_name_2739_, lean_object* v_type_2740_, lean_object* v_val_2741_, lean_object* v_k_2742_, uint8_t v_nondep_2743_, uint8_t v_kind_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_){
_start:
{
lean_object* v___x_2754_; 
v___x_2754_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_2739_, v_type_2740_, v_val_2741_, v_k_2742_, v_nondep_2743_, v_kind_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_);
return v___x_2754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___boxed(lean_object* v_00_u03b1_2755_, lean_object* v_name_2756_, lean_object* v_type_2757_, lean_object* v_val_2758_, lean_object* v_k_2759_, lean_object* v_nondep_2760_, lean_object* v_kind_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_){
_start:
{
uint8_t v_nondep_boxed_2771_; uint8_t v_kind_boxed_2772_; lean_object* v_res_2773_; 
v_nondep_boxed_2771_ = lean_unbox(v_nondep_2760_);
v_kind_boxed_2772_ = lean_unbox(v_kind_2761_);
v_res_2773_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(v_00_u03b1_2755_, v_name_2756_, v_type_2757_, v_val_2758_, v_k_2759_, v_nondep_boxed_2771_, v_kind_boxed_2772_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_);
lean_dec(v___y_2769_);
lean_dec_ref(v___y_2768_);
lean_dec(v___y_2767_);
lean_dec_ref(v___y_2766_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec(v___y_2763_);
lean_dec(v___y_2762_);
return v_res_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(lean_object* v_declName_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_){
_start:
{
lean_object* v___x_2784_; 
v___x_2784_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_2774_, v___y_2782_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___boxed(lean_object* v_declName_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(v_declName_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec(v___y_2789_);
lean_dec_ref(v___y_2788_);
lean_dec(v___y_2787_);
lean_dec(v___y_2786_);
return v_res_2795_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(lean_object* v_00_u03b2_2796_, lean_object* v_a_2797_, lean_object* v_x_2798_){
_start:
{
uint8_t v___x_2799_; 
v___x_2799_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_2797_, v_x_2798_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object* v_00_u03b2_2800_, lean_object* v_a_2801_, lean_object* v_x_2802_){
_start:
{
uint8_t v_res_2803_; lean_object* v_r_2804_; 
v_res_2803_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(v_00_u03b2_2800_, v_a_2801_, v_x_2802_);
lean_dec(v_x_2802_);
lean_dec_ref(v_a_2801_);
v_r_2804_ = lean_box(v_res_2803_);
return v_r_2804_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5(lean_object* v_00_u03b2_2805_, lean_object* v_data_2806_){
_start:
{
lean_object* v___x_2807_; 
v___x_2807_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(v_data_2806_);
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6(lean_object* v_00_u03b2_2808_, lean_object* v_a_2809_, lean_object* v_b_2810_, lean_object* v_x_2811_){
_start:
{
lean_object* v___x_2812_; 
v___x_2812_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_2809_, v_b_2810_, v_x_2811_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(lean_object* v_00_u03b2_2813_, lean_object* v_a_2814_, lean_object* v_x_2815_){
_start:
{
lean_object* v___x_2816_; 
v___x_2816_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_2814_, v_x_2815_);
return v___x_2816_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2817_, lean_object* v_a_2818_, lean_object* v_x_2819_){
_start:
{
lean_object* v_res_2820_; 
v_res_2820_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(v_00_u03b2_2817_, v_a_2818_, v_x_2819_);
lean_dec(v_x_2819_);
lean_dec_ref(v_a_2818_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12(lean_object* v_00_u03b2_2821_, lean_object* v_i_2822_, lean_object* v_source_2823_, lean_object* v_target_2824_){
_start:
{
lean_object* v___x_2825_; 
v___x_2825_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(v_i_2822_, v_source_2823_, v_target_2824_);
return v___x_2825_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(lean_object* v_00_u03b1_2826_, lean_object* v_constName_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_){
_start:
{
lean_object* v___x_2837_; 
v___x_2837_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_);
return v___x_2837_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___boxed(lean_object* v_00_u03b1_2838_, lean_object* v_constName_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(v_00_u03b1_2838_, v_constName_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2840_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22(lean_object* v_00_u03b2_2850_, lean_object* v_x_2851_, lean_object* v_x_2852_){
_start:
{
lean_object* v___x_2853_; 
v___x_2853_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(v_x_2851_, v_x_2852_);
return v___x_2853_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(lean_object* v_00_u03b1_2854_, lean_object* v_ref_2855_, lean_object* v_constName_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v___x_2866_; 
v___x_2866_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_2855_, v_constName_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___boxed(lean_object* v_00_u03b1_2867_, lean_object* v_ref_2868_, lean_object* v_constName_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(v_00_u03b1_2867_, v_ref_2868_, v_constName_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_);
lean_dec(v___y_2877_);
lean_dec_ref(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_ref_2868_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(lean_object* v_00_u03b1_2880_, lean_object* v_ref_2881_, lean_object* v_msg_2882_, lean_object* v_declHint_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v___x_2893_; 
v___x_2893_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_2881_, v_msg_2882_, v_declHint_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___boxed(lean_object* v_00_u03b1_2894_, lean_object* v_ref_2895_, lean_object* v_msg_2896_, lean_object* v_declHint_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(v_00_u03b1_2894_, v_ref_2895_, v_msg_2896_, v_declHint_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec(v___y_2903_);
lean_dec_ref(v___y_2902_);
lean_dec(v___y_2901_);
lean_dec_ref(v___y_2900_);
lean_dec(v___y_2899_);
lean_dec(v___y_2898_);
lean_dec(v_ref_2895_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(lean_object* v_msg_2908_, lean_object* v_declHint_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_){
_start:
{
lean_object* v___x_2919_; 
v___x_2919_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_2908_, v_declHint_2909_, v___y_2917_);
return v___x_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___boxed(lean_object* v_msg_2920_, lean_object* v_declHint_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(v_msg_2920_, v_declHint_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
lean_dec(v___y_2929_);
lean_dec_ref(v___y_2928_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v___y_2923_);
lean_dec(v___y_2922_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(lean_object* v_00_u03b1_2932_, lean_object* v_ref_2933_, lean_object* v_msg_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
lean_object* v___x_2944_; 
v___x_2944_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_2933_, v_msg_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___boxed(lean_object* v_00_u03b1_2945_, lean_object* v_ref_2946_, lean_object* v_msg_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(v_00_u03b1_2945_, v_ref_2946_, v_msg_2947_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
lean_dec(v___y_2951_);
lean_dec_ref(v___y_2950_);
lean_dec(v___y_2949_);
lean_dec(v___y_2948_);
lean_dec(v_ref_2946_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(lean_object* v_cls_2958_, lean_object* v_msg_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
lean_object* v_ref_2965_; lean_object* v___x_2966_; lean_object* v_a_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_3011_; 
v_ref_2965_ = lean_ctor_get(v___y_2962_, 2);
v___x_2966_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_2969_ = v___x_2966_;
v_isShared_2970_ = v_isSharedCheck_3011_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_a_2967_);
lean_dec(v___x_2966_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_3011_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2971_; lean_object* v_traceState_2972_; lean_object* v_env_2973_; lean_object* v_nextMacroScope_2974_; lean_object* v_ngen_2975_; lean_object* v_auxDeclNGen_2976_; lean_object* v_cache_2977_; lean_object* v_messages_2978_; lean_object* v_infoState_2979_; lean_object* v_snapshotTasks_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_3010_; 
v___x_2971_ = lean_st_ref_take(v___y_2963_);
v_traceState_2972_ = lean_ctor_get(v___x_2971_, 4);
v_env_2973_ = lean_ctor_get(v___x_2971_, 0);
v_nextMacroScope_2974_ = lean_ctor_get(v___x_2971_, 1);
v_ngen_2975_ = lean_ctor_get(v___x_2971_, 2);
v_auxDeclNGen_2976_ = lean_ctor_get(v___x_2971_, 3);
v_cache_2977_ = lean_ctor_get(v___x_2971_, 5);
v_messages_2978_ = lean_ctor_get(v___x_2971_, 6);
v_infoState_2979_ = lean_ctor_get(v___x_2971_, 7);
v_snapshotTasks_2980_ = lean_ctor_get(v___x_2971_, 8);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_2982_ = v___x_2971_;
v_isShared_2983_ = v_isSharedCheck_3010_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_snapshotTasks_2980_);
lean_inc(v_infoState_2979_);
lean_inc(v_messages_2978_);
lean_inc(v_cache_2977_);
lean_inc(v_traceState_2972_);
lean_inc(v_auxDeclNGen_2976_);
lean_inc(v_ngen_2975_);
lean_inc(v_nextMacroScope_2974_);
lean_inc(v_env_2973_);
lean_dec(v___x_2971_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_3010_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
uint64_t v_tid_2984_; lean_object* v_traces_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_3009_; 
v_tid_2984_ = lean_ctor_get_uint64(v_traceState_2972_, sizeof(void*)*1);
v_traces_2985_ = lean_ctor_get(v_traceState_2972_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v_traceState_2972_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_2987_ = v_traceState_2972_;
v_isShared_2988_ = v_isSharedCheck_3009_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_traces_2985_);
lean_dec(v_traceState_2972_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_3009_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; double v___x_2991_; uint8_t v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_3000_; 
v___x_2989_ = lean_box(0);
v___x_2990_ = lean_box(0);
v___x_2991_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0);
v___x_2992_ = 0;
v___x_2993_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1));
v___x_2994_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2994_, 0, v_cls_2958_);
lean_ctor_set(v___x_2994_, 1, v___x_2990_);
lean_ctor_set(v___x_2994_, 2, v___x_2993_);
lean_ctor_set_float(v___x_2994_, sizeof(void*)*3, v___x_2991_);
lean_ctor_set_float(v___x_2994_, sizeof(void*)*3 + 8, v___x_2991_);
lean_ctor_set_uint8(v___x_2994_, sizeof(void*)*3 + 16, v___x_2992_);
v___x_2995_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2));
v___x_2996_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2994_);
lean_ctor_set(v___x_2996_, 1, v_a_2967_);
lean_ctor_set(v___x_2996_, 2, v___x_2995_);
lean_inc(v_ref_2965_);
v___x_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2997_, 0, v_ref_2965_);
lean_ctor_set(v___x_2997_, 1, v___x_2996_);
v___x_2998_ = l_Lean_PersistentArray_push___redArg(v_traces_2985_, v___x_2997_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set(v___x_2987_, 0, v___x_2998_);
v___x_3000_ = v___x_2987_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v___x_2998_);
lean_ctor_set_uint64(v_reuseFailAlloc_3008_, sizeof(void*)*1, v_tid_2984_);
v___x_3000_ = v_reuseFailAlloc_3008_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
lean_object* v___x_3002_; 
if (v_isShared_2983_ == 0)
{
lean_ctor_set(v___x_2982_, 4, v___x_3000_);
v___x_3002_ = v___x_2982_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_env_2973_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v_nextMacroScope_2974_);
lean_ctor_set(v_reuseFailAlloc_3007_, 2, v_ngen_2975_);
lean_ctor_set(v_reuseFailAlloc_3007_, 3, v_auxDeclNGen_2976_);
lean_ctor_set(v_reuseFailAlloc_3007_, 4, v___x_3000_);
lean_ctor_set(v_reuseFailAlloc_3007_, 5, v_cache_2977_);
lean_ctor_set(v_reuseFailAlloc_3007_, 6, v_messages_2978_);
lean_ctor_set(v_reuseFailAlloc_3007_, 7, v_infoState_2979_);
lean_ctor_set(v_reuseFailAlloc_3007_, 8, v_snapshotTasks_2980_);
v___x_3002_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
lean_object* v___x_3003_; lean_object* v___x_3005_; 
v___x_3003_ = lean_st_ref_put(v___y_2963_, v___x_3002_);
if (v_isShared_2970_ == 0)
{
lean_ctor_set(v___x_2969_, 0, v___x_2989_);
v___x_3005_ = v___x_2969_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v___x_2989_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg___boxed(lean_object* v_cls_3012_, lean_object* v_msg_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_){
_start:
{
lean_object* v_res_3019_; 
v_res_3019_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3012_, v_msg_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
lean_dec(v___y_3015_);
lean_dec_ref(v___y_3014_);
return v_res_3019_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0(void){
_start:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3020_ = lean_box(0);
v___x_3021_ = lean_unsigned_to_nat(16u);
v___x_3022_ = lean_mk_array(v___x_3021_, v___x_3020_);
return v___x_3022_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1(void){
_start:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3023_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0);
v___x_3024_ = lean_unsigned_to_nat(0u);
v___x_3025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3024_);
lean_ctor_set(v___x_3025_, 1, v___x_3023_);
return v___x_3025_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3(void){
_start:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3027_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2));
v___x_3028_ = l_Lean_stringToMessageData(v___x_3027_);
return v___x_3028_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5(void){
_start:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4));
v___x_3031_ = l_Lean_stringToMessageData(v___x_3030_);
return v___x_3031_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7(void){
_start:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6));
v___x_3034_ = l_Lean_stringToMessageData(v___x_3033_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(lean_object* v_recFnName_3035_, lean_object* v_fixedPrefixSize_3036_, lean_object* v_F_3037_, lean_object* v_e_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_){
_start:
{
lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v_toCold_3067_; lean_object* v_options_3068_; uint8_t v_hasTrace_3069_; 
v_toCold_3067_ = lean_ctor_get(v___y_3043_, 0);
v_options_3068_ = lean_ctor_get(v_toCold_3067_, 2);
v_hasTrace_3069_ = lean_ctor_get_uint8(v_options_3068_, sizeof(void*)*1);
if (v_hasTrace_3069_ == 0)
{
v___y_3047_ = v___y_3039_;
v___y_3048_ = v___y_3040_;
v___y_3049_ = v___y_3041_;
v___y_3050_ = v___y_3042_;
v___y_3051_ = v___y_3043_;
v___y_3052_ = v___y_3044_;
goto v___jp_3046_;
}
else
{
lean_object* v_inheritedTraceOptions_3070_; lean_object* v_cls_3071_; lean_object* v___y_3073_; lean_object* v___y_3074_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v_options_3078_; lean_object* v_inheritedTraceOptions_3079_; lean_object* v___y_3080_; lean_object* v___x_3101_; uint8_t v___x_3102_; 
v_inheritedTraceOptions_3070_ = lean_ctor_get(v_toCold_3067_, 11);
v_cls_3071_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1));
v___x_3101_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_3102_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3070_, v_options_3068_, v___x_3101_);
if (v___x_3102_ == 0)
{
v___y_3073_ = v___y_3039_;
v___y_3074_ = v___y_3040_;
v___y_3075_ = v___y_3041_;
v___y_3076_ = v___y_3042_;
v___y_3077_ = v___y_3043_;
v_options_3078_ = v_options_3068_;
v_inheritedTraceOptions_3079_ = v_inheritedTraceOptions_3070_;
v___y_3080_ = v___y_3044_;
goto v___jp_3072_;
}
else
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3103_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7);
lean_inc_ref(v_e_3038_);
v___x_3104_ = l_Lean_indentExpr(v_e_3038_);
v___x_3105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3103_);
lean_ctor_set(v___x_3105_, 1, v___x_3104_);
v___x_3106_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3071_, v___x_3105_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_dec_ref_known(v___x_3106_, 1);
v___y_3073_ = v___y_3039_;
v___y_3074_ = v___y_3040_;
v___y_3075_ = v___y_3041_;
v___y_3076_ = v___y_3042_;
v___y_3077_ = v___y_3043_;
v_options_3078_ = v_options_3068_;
v_inheritedTraceOptions_3079_ = v_inheritedTraceOptions_3070_;
v___y_3080_ = v___y_3044_;
goto v___jp_3072_;
}
else
{
lean_object* v_a_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3114_; 
lean_dec_ref(v_e_3038_);
lean_dec_ref(v_F_3037_);
lean_dec(v_fixedPrefixSize_3036_);
lean_dec(v_recFnName_3035_);
v_a_3107_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3109_ = v___x_3106_;
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_a_3107_);
lean_dec(v___x_3106_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3107_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
}
v___jp_3072_:
{
lean_object* v___x_3081_; uint8_t v___x_3082_; 
v___x_3081_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_3082_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3079_, v_options_3078_, v___x_3081_);
if (v___x_3082_ == 0)
{
v___y_3047_ = v___y_3073_;
v___y_3048_ = v___y_3074_;
v___y_3049_ = v___y_3075_;
v___y_3050_ = v___y_3076_;
v___y_3051_ = v___y_3077_;
v___y_3052_ = v___y_3080_;
goto v___jp_3046_;
}
else
{
lean_object* v___x_3083_; 
lean_inc(v___y_3080_);
lean_inc_ref(v___y_3077_);
lean_inc(v___y_3076_);
lean_inc_ref(v___y_3075_);
lean_inc_ref(v_F_3037_);
v___x_3083_ = lean_infer_type(v_F_3037_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3080_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v___x_3083_, 1);
v___x_3085_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3);
lean_inc_ref(v_F_3037_);
v___x_3086_ = l_Lean_MessageData_ofExpr(v_F_3037_);
v___x_3087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3085_);
lean_ctor_set(v___x_3087_, 1, v___x_3086_);
v___x_3088_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5);
v___x_3089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3087_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
v___x_3090_ = l_Lean_indentExpr(v_a_3084_);
v___x_3091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3089_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
v___x_3092_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3071_, v___x_3091_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3080_);
if (lean_obj_tag(v___x_3092_) == 0)
{
lean_dec_ref_known(v___x_3092_, 1);
v___y_3047_ = v___y_3073_;
v___y_3048_ = v___y_3074_;
v___y_3049_ = v___y_3075_;
v___y_3050_ = v___y_3076_;
v___y_3051_ = v___y_3077_;
v___y_3052_ = v___y_3080_;
goto v___jp_3046_;
}
else
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3100_; 
lean_dec_ref(v_e_3038_);
lean_dec_ref(v_F_3037_);
lean_dec(v_fixedPrefixSize_3036_);
lean_dec(v_recFnName_3035_);
v_a_3093_ = lean_ctor_get(v___x_3092_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3095_ = v___x_3092_;
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v___x_3092_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3098_; 
if (v_isShared_3096_ == 0)
{
v___x_3098_ = v___x_3095_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_a_3093_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
return v___x_3098_;
}
}
}
}
else
{
lean_dec_ref(v_e_3038_);
lean_dec_ref(v_F_3037_);
lean_dec(v_fixedPrefixSize_3036_);
lean_dec(v_recFnName_3035_);
return v___x_3083_;
}
}
}
}
v___jp_3046_:
{
lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3053_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1);
v___x_3054_ = lean_st_mk_ref(v___x_3053_);
v___x_3055_ = lean_st_mk_ref(v___x_3053_);
v___x_3056_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_3035_, v_fixedPrefixSize_3036_, v_F_3037_, v_e_3038_, v___x_3055_, v___x_3054_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3066_; 
v_a_3057_ = lean_ctor_get(v___x_3056_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3056_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3059_ = v___x_3056_;
v_isShared_3060_ = v_isSharedCheck_3066_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_3056_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3066_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3064_; 
v___x_3061_ = lean_st_ref_get(v___x_3055_);
lean_dec(v___x_3055_);
lean_dec(v___x_3061_);
v___x_3062_ = lean_st_ref_get(v___x_3054_);
lean_dec(v___x_3054_);
lean_dec(v___x_3062_);
if (v_isShared_3060_ == 0)
{
v___x_3064_ = v___x_3059_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3057_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
else
{
lean_dec(v___x_3055_);
lean_dec(v___x_3054_);
return v___x_3056_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed(lean_object* v_recFnName_3115_, lean_object* v_fixedPrefixSize_3116_, lean_object* v_F_3117_, lean_object* v_e_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v_res_3126_; 
v_res_3126_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(v_recFnName_3115_, v_fixedPrefixSize_3116_, v_F_3117_, v_e_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(lean_object* v_cls_3127_, lean_object* v_msg_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_){
_start:
{
lean_object* v___x_3136_; 
v___x_3136_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3127_, v_msg_3128_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
return v___x_3136_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___boxed(lean_object* v_cls_3137_, lean_object* v_msg_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(v_cls_3137_, v_msg_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_);
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3143_);
lean_dec(v___y_3142_);
lean_dec_ref(v___y_3141_);
lean_dec(v___y_3140_);
lean_dec_ref(v___y_3139_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0(lean_object* v_k_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v_b_3150_, lean_object* v_c_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_){
_start:
{
lean_object* v___x_3157_; 
lean_inc(v___y_3155_);
lean_inc_ref(v___y_3154_);
lean_inc(v___y_3153_);
lean_inc_ref(v___y_3152_);
lean_inc(v___y_3149_);
lean_inc_ref(v___y_3148_);
v___x_3157_ = lean_apply_9(v_k_3147_, v_b_3150_, v_c_3151_, v___y_3148_, v___y_3149_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, lean_box(0));
return v___x_3157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed(lean_object* v_k_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v_b_3161_, lean_object* v_c_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0(v_k_3158_, v___y_3159_, v___y_3160_, v_b_3161_, v_c_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_);
lean_dec(v___y_3166_);
lean_dec_ref(v___y_3165_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec(v___y_3160_);
lean_dec_ref(v___y_3159_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(lean_object* v_e_3169_, lean_object* v_maxFVars_3170_, lean_object* v_k_3171_, uint8_t v_cleanupAnnotations_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_){
_start:
{
lean_object* v___f_3180_; uint8_t v___x_3181_; uint8_t v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
lean_inc(v___y_3174_);
lean_inc_ref(v___y_3173_);
v___f_3180_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3180_, 0, v_k_3171_);
lean_closure_set(v___f_3180_, 1, v___y_3173_);
lean_closure_set(v___f_3180_, 2, v___y_3174_);
v___x_3181_ = 1;
v___x_3182_ = 0;
v___x_3183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3183_, 0, v_maxFVars_3170_);
v___x_3184_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3169_, v___x_3181_, v___x_3182_, v___x_3181_, v___x_3182_, v___x_3183_, v___f_3180_, v_cleanupAnnotations_3172_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_);
lean_dec_ref_known(v___x_3183_, 1);
if (lean_obj_tag(v___x_3184_) == 0)
{
return v___x_3184_;
}
else
{
lean_object* v_a_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3192_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3192_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3187_ = v___x_3184_;
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_a_3185_);
lean_dec(v___x_3184_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v___x_3190_; 
if (v_isShared_3188_ == 0)
{
v___x_3190_ = v___x_3187_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v_a_3185_);
v___x_3190_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
return v___x_3190_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___boxed(lean_object* v_e_3193_, lean_object* v_maxFVars_3194_, lean_object* v_k_3195_, lean_object* v_cleanupAnnotations_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3204_; lean_object* v_res_3205_; 
v_cleanupAnnotations_boxed_3204_ = lean_unbox(v_cleanupAnnotations_3196_);
v_res_3205_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_e_3193_, v_maxFVars_3194_, v_k_3195_, v_cleanupAnnotations_boxed_3204_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec(v___y_3198_);
lean_dec_ref(v___y_3197_);
return v_res_3205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(lean_object* v_00_u03b1_3206_, lean_object* v_e_3207_, lean_object* v_maxFVars_3208_, lean_object* v_k_3209_, uint8_t v_cleanupAnnotations_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_){
_start:
{
lean_object* v___x_3218_; 
v___x_3218_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_e_3207_, v_maxFVars_3208_, v_k_3209_, v_cleanupAnnotations_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_);
return v___x_3218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___boxed(lean_object* v_00_u03b1_3219_, lean_object* v_e_3220_, lean_object* v_maxFVars_3221_, lean_object* v_k_3222_, lean_object* v_cleanupAnnotations_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3231_; lean_object* v_res_3232_; 
v_cleanupAnnotations_boxed_3231_ = lean_unbox(v_cleanupAnnotations_3223_);
v_res_3232_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(v_00_u03b1_3219_, v_e_3220_, v_maxFVars_3221_, v_k_3222_, v_cleanupAnnotations_boxed_3231_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
lean_dec(v___y_3229_);
lean_dec_ref(v___y_3228_);
lean_dec(v___y_3227_);
lean_dec_ref(v___y_3226_);
lean_dec(v___y_3225_);
lean_dec_ref(v___y_3224_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(lean_object* v_e_3233_, lean_object* v_k_3234_, uint8_t v_cleanupAnnotations_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_){
_start:
{
lean_object* v___f_3243_; uint8_t v___x_3244_; uint8_t v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
lean_inc(v___y_3237_);
lean_inc_ref(v___y_3236_);
v___f_3243_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3243_, 0, v_k_3234_);
lean_closure_set(v___f_3243_, 1, v___y_3236_);
lean_closure_set(v___f_3243_, 2, v___y_3237_);
v___x_3244_ = 1;
v___x_3245_ = 0;
v___x_3246_ = lean_box(0);
v___x_3247_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3233_, v___x_3244_, v___x_3245_, v___x_3244_, v___x_3245_, v___x_3246_, v___f_3243_, v_cleanupAnnotations_3235_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_);
if (lean_obj_tag(v___x_3247_) == 0)
{
return v___x_3247_;
}
else
{
lean_object* v_a_3248_; lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3255_; 
v_a_3248_ = lean_ctor_get(v___x_3247_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3247_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3250_ = v___x_3247_;
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
else
{
lean_inc(v_a_3248_);
lean_dec(v___x_3247_);
v___x_3250_ = lean_box(0);
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
v_resetjp_3249_:
{
lean_object* v___x_3253_; 
if (v_isShared_3251_ == 0)
{
v___x_3253_ = v___x_3250_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v_a_3248_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
return v___x_3253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg___boxed(lean_object* v_e_3256_, lean_object* v_k_3257_, lean_object* v_cleanupAnnotations_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3266_; lean_object* v_res_3267_; 
v_cleanupAnnotations_boxed_3266_ = lean_unbox(v_cleanupAnnotations_3258_);
v_res_3267_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v_e_3256_, v_k_3257_, v_cleanupAnnotations_boxed_3266_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_);
lean_dec(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3261_);
lean_dec(v___y_3260_);
lean_dec_ref(v___y_3259_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(lean_object* v_00_u03b1_3268_, lean_object* v_e_3269_, lean_object* v_k_3270_, uint8_t v_cleanupAnnotations_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_){
_start:
{
lean_object* v___x_3279_; 
v___x_3279_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v_e_3269_, v_k_3270_, v_cleanupAnnotations_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
return v___x_3279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___boxed(lean_object* v_00_u03b1_3280_, lean_object* v_e_3281_, lean_object* v_k_3282_, lean_object* v_cleanupAnnotations_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3291_; lean_object* v_res_3292_; 
v_cleanupAnnotations_boxed_3291_ = lean_unbox(v_cleanupAnnotations_3283_);
v_res_3292_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(v_00_u03b1_3280_, v_e_3281_, v_k_3282_, v_cleanupAnnotations_boxed_3291_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec(v___y_3287_);
lean_dec_ref(v___y_3286_);
lean_dec(v___y_3285_);
lean_dec_ref(v___y_3284_);
return v_res_3292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(lean_object* v_a_3293_, lean_object* v___x_3294_, lean_object* v___x_3295_, lean_object* v_x_3296_, uint8_t v___x_3297_, lean_object* v_xs_3298_, lean_object* v_type_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_){
_start:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3307_ = l_Lean_LocalDecl_type(v_a_3293_);
v___x_3308_ = lean_array_get_borrowed(v___x_3294_, v_xs_3298_, v___x_3295_);
v___x_3309_ = l_Lean_Expr_replaceFVar(v___x_3307_, v_x_3296_, v___x_3308_);
lean_dec_ref(v___x_3307_);
v___x_3310_ = l_Lean_mkArrow(v___x_3309_, v_type_3299_, v___y_3304_, v___y_3305_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_object* v_a_3311_; uint8_t v___x_3312_; uint8_t v___x_3313_; lean_object* v___x_3314_; 
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc_n(v_a_3311_, 2);
lean_dec_ref_known(v___x_3310_, 1);
v___x_3312_ = 0;
v___x_3313_ = 1;
v___x_3314_ = l_Lean_Meta_mkLambdaFVars(v_xs_3298_, v_a_3311_, v___x_3312_, v___x_3297_, v___x_3312_, v___x_3297_, v___x_3313_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
if (lean_obj_tag(v___x_3314_) == 0)
{
lean_object* v_a_3315_; lean_object* v___x_3316_; 
v_a_3315_ = lean_ctor_get(v___x_3314_, 0);
lean_inc(v_a_3315_);
lean_dec_ref_known(v___x_3314_, 1);
v___x_3316_ = l_Lean_Meta_getLevel(v_a_3311_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3325_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3319_ = v___x_3316_;
v_isShared_3320_ = v_isSharedCheck_3325_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3316_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3325_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3321_; lean_object* v___x_3323_; 
v___x_3321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3321_, 0, v_a_3315_);
lean_ctor_set(v___x_3321_, 1, v_a_3317_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set(v___x_3319_, 0, v___x_3321_);
v___x_3323_ = v___x_3319_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v___x_3321_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
else
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3333_; 
lean_dec(v_a_3315_);
v_a_3326_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3328_ = v___x_3316_;
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3316_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3331_; 
if (v_isShared_3329_ == 0)
{
v___x_3331_ = v___x_3328_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v_a_3326_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
}
}
}
}
else
{
lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3341_; 
lean_dec(v_a_3311_);
v_a_3334_ = lean_ctor_get(v___x_3314_, 0);
v_isSharedCheck_3341_ = !lean_is_exclusive(v___x_3314_);
if (v_isSharedCheck_3341_ == 0)
{
v___x_3336_ = v___x_3314_;
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v___x_3314_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3339_; 
if (v_isShared_3337_ == 0)
{
v___x_3339_ = v___x_3336_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3334_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
}
}
else
{
lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3349_; 
v_a_3342_ = lean_ctor_get(v___x_3310_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_3310_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3344_ = v___x_3310_;
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v___x_3310_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3347_; 
if (v_isShared_3345_ == 0)
{
v___x_3347_ = v___x_3344_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3342_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed(lean_object* v_a_3350_, lean_object* v___x_3351_, lean_object* v___x_3352_, lean_object* v_x_3353_, lean_object* v___x_3354_, lean_object* v_xs_3355_, lean_object* v_type_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_){
_start:
{
uint8_t v___x_6335__boxed_3364_; lean_object* v_res_3365_; 
v___x_6335__boxed_3364_ = lean_unbox(v___x_3354_);
v_res_3365_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(v_a_3350_, v___x_3351_, v___x_3352_, v_x_3353_, v___x_6335__boxed_3364_, v_xs_3355_, v_type_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_, v___y_3362_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
lean_dec(v___y_3360_);
lean_dec_ref(v___y_3359_);
lean_dec(v___y_3358_);
lean_dec_ref(v___y_3357_);
lean_dec_ref(v_xs_3355_);
lean_dec(v___x_3352_);
lean_dec_ref(v___x_3351_);
lean_dec_ref(v_a_3350_);
return v_res_3365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0(lean_object* v_k_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v_b_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_){
_start:
{
lean_object* v___x_3375_; 
lean_inc(v___y_3373_);
lean_inc_ref(v___y_3372_);
lean_inc(v___y_3371_);
lean_inc_ref(v___y_3370_);
lean_inc(v___y_3368_);
lean_inc_ref(v___y_3367_);
v___x_3375_ = lean_apply_8(v_k_3366_, v_b_3369_, v___y_3367_, v___y_3368_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, lean_box(0));
return v___x_3375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v_b_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
lean_object* v_res_3385_; 
v_res_3385_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0(v_k_3376_, v___y_3377_, v___y_3378_, v_b_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
return v_res_3385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(lean_object* v_name_3386_, uint8_t v_bi_3387_, lean_object* v_type_3388_, lean_object* v_k_3389_, uint8_t v_kind_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_){
_start:
{
lean_object* v___f_3398_; lean_object* v___x_3399_; 
lean_inc(v___y_3392_);
lean_inc_ref(v___y_3391_);
v___f_3398_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_3398_, 0, v_k_3389_);
lean_closure_set(v___f_3398_, 1, v___y_3391_);
lean_closure_set(v___f_3398_, 2, v___y_3392_);
v___x_3399_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3386_, v_bi_3387_, v_type_3388_, v___f_3398_, v_kind_3390_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_);
if (lean_obj_tag(v___x_3399_) == 0)
{
return v___x_3399_;
}
else
{
lean_object* v_a_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3407_; 
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3407_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3407_ == 0)
{
v___x_3402_ = v___x_3399_;
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_a_3400_);
lean_dec(v___x_3399_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
lean_object* v___x_3405_; 
if (v_isShared_3403_ == 0)
{
v___x_3405_ = v___x_3402_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3406_; 
v_reuseFailAlloc_3406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3406_, 0, v_a_3400_);
v___x_3405_ = v_reuseFailAlloc_3406_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
return v___x_3405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___boxed(lean_object* v_name_3408_, lean_object* v_bi_3409_, lean_object* v_type_3410_, lean_object* v_k_3411_, lean_object* v_kind_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_){
_start:
{
uint8_t v_bi_boxed_3420_; uint8_t v_kind_boxed_3421_; lean_object* v_res_3422_; 
v_bi_boxed_3420_ = lean_unbox(v_bi_3409_);
v_kind_boxed_3421_ = lean_unbox(v_kind_3412_);
v_res_3422_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(v_name_3408_, v_bi_boxed_3420_, v_type_3410_, v_k_3411_, v_kind_boxed_3421_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
lean_dec(v___y_3418_);
lean_dec_ref(v___y_3417_);
lean_dec(v___y_3416_);
lean_dec_ref(v___y_3415_);
lean_dec(v___y_3414_);
lean_dec_ref(v___y_3413_);
return v_res_3422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(lean_object* v_name_3423_, lean_object* v_type_3424_, lean_object* v_k_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_){
_start:
{
uint8_t v___x_3433_; uint8_t v___x_3434_; lean_object* v___x_3435_; 
v___x_3433_ = 0;
v___x_3434_ = 0;
v___x_3435_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(v_name_3423_, v___x_3433_, v_type_3424_, v_k_3425_, v___x_3434_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___boxed(lean_object* v_name_3436_, lean_object* v_type_3437_, lean_object* v_k_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v_name_3436_, v_type_3437_, v_k_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3439_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(lean_object* v_x_3460_, lean_object* v_F_3461_, lean_object* v_val_3462_, lean_object* v_k_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_){
_start:
{
lean_object* v___x_3471_; uint8_t v___y_3473_; uint8_t v___x_3587_; 
v___x_3471_ = l_Lean_instInhabitedExpr;
v___x_3587_ = l_Lean_Expr_isFVar(v_x_3460_);
if (v___x_3587_ == 0)
{
v___y_3473_ = v___x_3587_;
goto v___jp_3472_;
}
else
{
lean_object* v___x_3588_; lean_object* v___x_3589_; uint8_t v___x_3590_; 
v___x_3588_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6));
v___x_3589_ = lean_unsigned_to_nat(6u);
v___x_3590_ = l_Lean_Expr_isAppOfArity(v_val_3462_, v___x_3588_, v___x_3589_);
v___y_3473_ = v___x_3590_;
goto v___jp_3472_;
}
v___jp_3472_:
{
if (v___y_3473_ == 0)
{
lean_object* v___x_3474_; 
lean_inc(v___y_3469_);
lean_inc_ref(v___y_3468_);
lean_inc(v___y_3467_);
lean_inc_ref(v___y_3466_);
lean_inc(v___y_3465_);
lean_inc_ref(v___y_3464_);
v___x_3474_ = lean_apply_10(v_k_3463_, v_x_3460_, v_F_3461_, v_val_3462_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_, lean_box(0));
return v___x_3474_;
}
else
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; uint8_t v___x_3481_; 
v___x_3475_ = lean_unsigned_to_nat(3u);
v___x_3476_ = l_Lean_Expr_getAppNumArgs(v_val_3462_);
v___x_3477_ = lean_nat_sub(v___x_3476_, v___x_3475_);
v___x_3478_ = lean_unsigned_to_nat(1u);
v___x_3479_ = lean_nat_sub(v___x_3477_, v___x_3478_);
lean_dec(v___x_3477_);
v___x_3480_ = l_Lean_Expr_getRevArg_x21(v_val_3462_, v___x_3479_);
v___x_3481_ = lean_expr_eqv(v___x_3480_, v_x_3460_);
lean_dec_ref(v___x_3480_);
if (v___x_3481_ == 0)
{
lean_object* v___x_3482_; 
lean_dec(v___x_3476_);
lean_inc(v___y_3469_);
lean_inc_ref(v___y_3468_);
lean_inc(v___y_3467_);
lean_inc_ref(v___y_3466_);
lean_inc(v___y_3465_);
lean_inc_ref(v___y_3464_);
v___x_3482_ = lean_apply_10(v_k_3463_, v_x_3460_, v_F_3461_, v_val_3462_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_, lean_box(0));
return v___x_3482_;
}
else
{
lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; uint8_t v___x_3487_; 
v___x_3483_ = lean_unsigned_to_nat(4u);
v___x_3484_ = lean_nat_sub(v___x_3476_, v___x_3483_);
v___x_3485_ = lean_nat_sub(v___x_3484_, v___x_3478_);
lean_dec(v___x_3484_);
v___x_3486_ = l_Lean_Expr_getRevArg_x21(v_val_3462_, v___x_3485_);
v___x_3487_ = l_Lean_Expr_isLambda(v___x_3486_);
lean_dec_ref(v___x_3486_);
if (v___x_3487_ == 0)
{
lean_object* v___x_3488_; 
lean_dec(v___x_3476_);
lean_inc(v___y_3469_);
lean_inc_ref(v___y_3468_);
lean_inc(v___y_3467_);
lean_inc_ref(v___y_3466_);
lean_inc(v___y_3465_);
lean_inc_ref(v___y_3464_);
v___x_3488_ = lean_apply_10(v_k_3463_, v_x_3460_, v_F_3461_, v_val_3462_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_, lean_box(0));
return v___x_3488_;
}
else
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; uint8_t v___x_3493_; 
v___x_3489_ = lean_unsigned_to_nat(5u);
v___x_3490_ = lean_nat_sub(v___x_3476_, v___x_3489_);
v___x_3491_ = lean_nat_sub(v___x_3490_, v___x_3478_);
lean_dec(v___x_3490_);
v___x_3492_ = l_Lean_Expr_getRevArg_x21(v_val_3462_, v___x_3491_);
v___x_3493_ = l_Lean_Expr_isLambda(v___x_3492_);
lean_dec_ref(v___x_3492_);
if (v___x_3493_ == 0)
{
lean_object* v___x_3494_; 
lean_dec(v___x_3476_);
lean_inc(v___y_3469_);
lean_inc_ref(v___y_3468_);
lean_inc(v___y_3467_);
lean_inc_ref(v___y_3466_);
lean_inc(v___y_3465_);
lean_inc_ref(v___y_3464_);
v___x_3494_ = lean_apply_10(v_k_3463_, v_x_3460_, v_F_3461_, v_val_3462_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_, lean_box(0));
return v___x_3494_;
}
else
{
lean_object* v_dummy_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v_args_3498_; lean_object* v___x_3499_; lean_object* v_00_u03b1_3500_; lean_object* v_00_u03b2_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v_dummy_3495_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v___x_3476_);
v___x_3496_ = lean_mk_array(v___x_3476_, v_dummy_3495_);
v___x_3497_ = lean_nat_sub(v___x_3476_, v___x_3478_);
lean_dec(v___x_3476_);
v_args_3498_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_3462_, v___x_3496_, v___x_3497_);
v___x_3499_ = lean_unsigned_to_nat(0u);
v_00_u03b1_3500_ = lean_array_get(v___x_3471_, v_args_3498_, v___x_3499_);
v_00_u03b2_3501_ = lean_array_get(v___x_3471_, v_args_3498_, v___x_3478_);
v___x_3502_ = l_Lean_Expr_fvarId_x21(v_F_3461_);
v___x_3503_ = l_Lean_FVarId_getDecl___redArg(v___x_3502_, v___y_3466_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; lean_object* v___x_3505_; lean_object* v___f_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; uint8_t v___x_3509_; lean_object* v___x_3510_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc_n(v_a_3504_, 2);
lean_dec_ref_known(v___x_3503_, 1);
v___x_3505_ = lean_box(v___x_3487_);
lean_inc_ref(v_x_3460_);
v___f_3506_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(v___f_3506_, 0, v_a_3504_);
lean_closure_set(v___f_3506_, 1, v___x_3471_);
lean_closure_set(v___f_3506_, 2, v___x_3499_);
lean_closure_set(v___f_3506_, 3, v_x_3460_);
lean_closure_set(v___f_3506_, 4, v___x_3505_);
v___x_3507_ = lean_unsigned_to_nat(2u);
v___x_3508_ = lean_array_get(v___x_3471_, v_args_3498_, v___x_3507_);
v___x_3509_ = 0;
v___x_3510_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v___x_3508_, v___f_3506_, v___x_3509_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; lean_object* v_fst_3512_; lean_object* v_snd_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3570_; 
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3511_);
lean_dec_ref_known(v___x_3510_, 1);
v_fst_3512_ = lean_ctor_get(v_a_3511_, 0);
v_snd_3513_ = lean_ctor_get(v_a_3511_, 1);
v_isSharedCheck_3570_ = !lean_is_exclusive(v_a_3511_);
if (v_isSharedCheck_3570_ == 0)
{
v___x_3515_ = v_a_3511_;
v_isShared_3516_ = v_isSharedCheck_3570_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_snd_3513_);
lean_inc(v_fst_3512_);
lean_dec(v_a_3511_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3570_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3517_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2));
v___x_3518_ = lean_array_get(v___x_3471_, v_args_3498_, v___x_3483_);
lean_inc_ref(v_x_3460_);
lean_inc(v_a_3504_);
lean_inc(v_00_u03b2_3501_);
lean_inc(v_00_u03b1_3500_);
lean_inc_ref(v_k_3463_);
v___x_3519_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3471_, v___x_3499_, v_k_3463_, v___x_3507_, v___x_3509_, v___x_3487_, v_00_u03b1_3500_, v_00_u03b2_3501_, v___x_3475_, v_a_3504_, v_x_3460_, v___x_3478_, v___x_3517_, v___x_3518_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3519_) == 0)
{
lean_object* v_a_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v_a_3520_ = lean_ctor_get(v___x_3519_, 0);
lean_inc(v_a_3520_);
lean_dec_ref_known(v___x_3519_, 1);
v___x_3521_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4));
v___x_3522_ = lean_array_get(v___x_3471_, v_args_3498_, v___x_3489_);
lean_dec_ref(v_args_3498_);
lean_inc_ref(v_x_3460_);
lean_inc(v_00_u03b2_3501_);
lean_inc(v_00_u03b1_3500_);
v___x_3523_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3471_, v___x_3499_, v_k_3463_, v___x_3507_, v___x_3509_, v___x_3487_, v_00_u03b1_3500_, v_00_u03b2_3501_, v___x_3475_, v_a_3504_, v_x_3460_, v___x_3478_, v___x_3521_, v___x_3522_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3523_) == 0)
{
lean_object* v_a_3524_; lean_object* v___x_3525_; 
v_a_3524_ = lean_ctor_get(v___x_3523_, 0);
lean_inc(v_a_3524_);
lean_dec_ref_known(v___x_3523_, 1);
lean_inc(v_00_u03b1_3500_);
v___x_3525_ = l_Lean_Meta_getLevel(v_00_u03b1_3500_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v_a_3526_; lean_object* v___x_3527_; 
v_a_3526_ = lean_ctor_get(v___x_3525_, 0);
lean_inc(v_a_3526_);
lean_dec_ref_known(v___x_3525_, 1);
lean_inc(v_00_u03b2_3501_);
v___x_3527_ = l_Lean_Meta_getLevel(v_00_u03b2_3501_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3527_) == 0)
{
lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3553_; 
v_a_3528_ = lean_ctor_get(v___x_3527_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3530_ = v___x_3527_;
v_isShared_3531_ = v_isSharedCheck_3553_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_dec(v___x_3527_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3553_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3535_; 
v___x_3532_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6));
v___x_3533_ = lean_box(0);
if (v_isShared_3516_ == 0)
{
lean_ctor_set_tag(v___x_3515_, 1);
lean_ctor_set(v___x_3515_, 1, v___x_3533_);
lean_ctor_set(v___x_3515_, 0, v_a_3528_);
v___x_3535_ = v___x_3515_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_a_3528_);
lean_ctor_set(v_reuseFailAlloc_3552_, 1, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3550_; 
v___x_3536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3536_, 0, v_a_3526_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3537_, 0, v_snd_3513_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = l_Lean_mkConst(v___x_3532_, v___x_3537_);
v___x_3539_ = lean_unsigned_to_nat(7u);
v___x_3540_ = lean_mk_empty_array_with_capacity(v___x_3539_);
v___x_3541_ = lean_array_push(v___x_3540_, v_00_u03b1_3500_);
v___x_3542_ = lean_array_push(v___x_3541_, v_00_u03b2_3501_);
v___x_3543_ = lean_array_push(v___x_3542_, v_fst_3512_);
v___x_3544_ = lean_array_push(v___x_3543_, v_x_3460_);
v___x_3545_ = lean_array_push(v___x_3544_, v_a_3520_);
v___x_3546_ = lean_array_push(v___x_3545_, v_a_3524_);
v___x_3547_ = lean_array_push(v___x_3546_, v_F_3461_);
v___x_3548_ = l_Lean_mkAppN(v___x_3538_, v___x_3547_);
lean_dec_ref(v___x_3547_);
if (v_isShared_3531_ == 0)
{
lean_ctor_set(v___x_3530_, 0, v___x_3548_);
v___x_3550_ = v___x_3530_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v___x_3548_);
v___x_3550_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
return v___x_3550_;
}
}
}
}
else
{
lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3561_; 
lean_dec(v_a_3526_);
lean_dec(v_a_3524_);
lean_dec(v_a_3520_);
lean_del_object(v___x_3515_);
lean_dec(v_snd_3513_);
lean_dec(v_fst_3512_);
lean_dec(v_00_u03b2_3501_);
lean_dec(v_00_u03b1_3500_);
lean_dec_ref(v_F_3461_);
lean_dec_ref(v_x_3460_);
v_a_3554_ = lean_ctor_get(v___x_3527_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3556_ = v___x_3527_;
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3527_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3559_; 
if (v_isShared_3557_ == 0)
{
v___x_3559_ = v___x_3556_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v_a_3554_);
v___x_3559_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
return v___x_3559_;
}
}
}
}
else
{
lean_object* v_a_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3569_; 
lean_dec(v_a_3524_);
lean_dec(v_a_3520_);
lean_del_object(v___x_3515_);
lean_dec(v_snd_3513_);
lean_dec(v_fst_3512_);
lean_dec(v_00_u03b2_3501_);
lean_dec(v_00_u03b1_3500_);
lean_dec_ref(v_F_3461_);
lean_dec_ref(v_x_3460_);
v_a_3562_ = lean_ctor_get(v___x_3525_, 0);
v_isSharedCheck_3569_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3569_ == 0)
{
v___x_3564_ = v___x_3525_;
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_a_3562_);
lean_dec(v___x_3525_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3567_; 
if (v_isShared_3565_ == 0)
{
v___x_3567_ = v___x_3564_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v_a_3562_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
return v___x_3567_;
}
}
}
}
else
{
lean_dec(v_a_3520_);
lean_del_object(v___x_3515_);
lean_dec(v_snd_3513_);
lean_dec(v_fst_3512_);
lean_dec(v_00_u03b2_3501_);
lean_dec(v_00_u03b1_3500_);
lean_dec_ref(v_F_3461_);
lean_dec_ref(v_x_3460_);
return v___x_3523_;
}
}
else
{
lean_del_object(v___x_3515_);
lean_dec(v_snd_3513_);
lean_dec(v_fst_3512_);
lean_dec(v_a_3504_);
lean_dec(v_00_u03b2_3501_);
lean_dec(v_00_u03b1_3500_);
lean_dec_ref(v_args_3498_);
lean_dec_ref(v_k_3463_);
lean_dec_ref(v_F_3461_);
lean_dec_ref(v_x_3460_);
return v___x_3519_;
}
}
}
else
{
lean_object* v_a_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3578_; 
lean_dec(v_a_3504_);
lean_dec(v_00_u03b2_3501_);
lean_dec(v_00_u03b1_3500_);
lean_dec_ref(v_args_3498_);
lean_dec_ref(v_k_3463_);
lean_dec_ref(v_F_3461_);
lean_dec_ref(v_x_3460_);
v_a_3571_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3573_ = v___x_3510_;
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_a_3571_);
lean_dec(v___x_3510_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3576_; 
if (v_isShared_3574_ == 0)
{
v___x_3576_ = v___x_3573_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_a_3571_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
return v___x_3576_;
}
}
}
}
else
{
lean_object* v_a_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3586_; 
lean_dec(v_00_u03b2_3501_);
lean_dec(v_00_u03b1_3500_);
lean_dec_ref(v_args_3498_);
lean_dec_ref(v_k_3463_);
lean_dec_ref(v_F_3461_);
lean_dec_ref(v_x_3460_);
v_a_3579_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3586_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3581_ = v___x_3503_;
v_isShared_3582_ = v_isSharedCheck_3586_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_a_3579_);
lean_dec(v___x_3503_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3586_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v___x_3584_; 
if (v_isShared_3582_ == 0)
{
v___x_3584_ = v___x_3581_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v_a_3579_);
v___x_3584_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
return v___x_3584_;
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(lean_object* v___x_3591_, lean_object* v_body_3592_, lean_object* v_k_3593_, lean_object* v___x_3594_, uint8_t v___x_3595_, uint8_t v___x_3596_, lean_object* v_FNew_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_){
_start:
{
lean_object* v___x_3605_; 
lean_inc_ref(v_FNew_3597_);
lean_inc_ref(v___x_3591_);
v___x_3605_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v___x_3591_, v_FNew_3597_, v_body_3592_, v_k_3593_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_);
if (lean_obj_tag(v___x_3605_) == 0)
{
lean_object* v_a_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; uint8_t v___x_3610_; lean_object* v___x_3611_; 
v_a_3606_ = lean_ctor_get(v___x_3605_, 0);
lean_inc(v_a_3606_);
lean_dec_ref_known(v___x_3605_, 1);
v___x_3607_ = lean_mk_empty_array_with_capacity(v___x_3594_);
v___x_3608_ = lean_array_push(v___x_3607_, v___x_3591_);
v___x_3609_ = lean_array_push(v___x_3608_, v_FNew_3597_);
v___x_3610_ = 1;
v___x_3611_ = l_Lean_Meta_mkLambdaFVars(v___x_3609_, v_a_3606_, v___x_3595_, v___x_3596_, v___x_3595_, v___x_3596_, v___x_3610_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_);
lean_dec_ref(v___x_3609_);
return v___x_3611_;
}
else
{
lean_dec_ref(v_FNew_3597_);
lean_dec_ref(v___x_3591_);
return v___x_3605_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed(lean_object* v___x_3612_, lean_object* v_body_3613_, lean_object* v_k_3614_, lean_object* v___x_3615_, lean_object* v___x_3616_, lean_object* v___x_3617_, lean_object* v_FNew_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_){
_start:
{
uint8_t v___x_6581__boxed_3626_; uint8_t v___x_6582__boxed_3627_; lean_object* v_res_3628_; 
v___x_6581__boxed_3626_ = lean_unbox(v___x_3616_);
v___x_6582__boxed_3627_ = lean_unbox(v___x_3617_);
v_res_3628_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(v___x_3612_, v_body_3613_, v_k_3614_, v___x_3615_, v___x_6581__boxed_3626_, v___x_6582__boxed_3627_, v_FNew_3618_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_, v___y_3624_);
lean_dec(v___y_3624_);
lean_dec_ref(v___y_3623_);
lean_dec(v___y_3622_);
lean_dec_ref(v___y_3621_);
lean_dec(v___y_3620_);
lean_dec_ref(v___y_3619_);
lean_dec(v___x_3615_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(lean_object* v___x_3629_, lean_object* v___x_3630_, lean_object* v_k_3631_, lean_object* v___x_3632_, uint8_t v___x_3633_, uint8_t v___x_3634_, lean_object* v_00_u03b1_3635_, lean_object* v_00_u03b2_3636_, lean_object* v___x_3637_, lean_object* v_ctorName_3638_, lean_object* v_a_3639_, lean_object* v_x_3640_, lean_object* v_xs_3641_, lean_object* v_body_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_){
_start:
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___f_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3650_ = lean_array_get_borrowed(v___x_3629_, v_xs_3641_, v___x_3630_);
v___x_3651_ = lean_box(v___x_3633_);
v___x_3652_ = lean_box(v___x_3634_);
lean_inc_n(v___x_3650_, 2);
v___f_3653_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed), 14, 6);
lean_closure_set(v___f_3653_, 0, v___x_3650_);
lean_closure_set(v___f_3653_, 1, v_body_3642_);
lean_closure_set(v___f_3653_, 2, v_k_3631_);
lean_closure_set(v___f_3653_, 3, v___x_3632_);
lean_closure_set(v___f_3653_, 4, v___x_3651_);
lean_closure_set(v___f_3653_, 5, v___x_3652_);
v___x_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3654_, 0, v_00_u03b1_3635_);
v___x_3655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3655_, 0, v_00_u03b2_3636_);
v___x_3656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3656_, 0, v___x_3650_);
v___x_3657_ = lean_mk_empty_array_with_capacity(v___x_3637_);
v___x_3658_ = lean_array_push(v___x_3657_, v___x_3654_);
v___x_3659_ = lean_array_push(v___x_3658_, v___x_3655_);
v___x_3660_ = lean_array_push(v___x_3659_, v___x_3656_);
v___x_3661_ = l_Lean_Meta_mkAppOptM(v_ctorName_3638_, v___x_3660_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
lean_inc(v_a_3662_);
lean_dec_ref_known(v___x_3661_, 1);
v___x_3663_ = l_Lean_LocalDecl_type(v_a_3639_);
v___x_3664_ = l_Lean_Expr_replaceFVar(v___x_3663_, v_x_3640_, v_a_3662_);
lean_dec(v_a_3662_);
lean_dec_ref(v___x_3663_);
v___x_3665_ = l_Lean_LocalDecl_userName(v_a_3639_);
v___x_3666_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v___x_3665_, v___x_3664_, v___f_3653_, v___y_3643_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_);
return v___x_3666_;
}
else
{
lean_dec_ref(v___f_3653_);
lean_dec_ref(v_x_3640_);
return v___x_3661_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed(lean_object** _args){
lean_object* v___x_3667_ = _args[0];
lean_object* v___x_3668_ = _args[1];
lean_object* v_k_3669_ = _args[2];
lean_object* v___x_3670_ = _args[3];
lean_object* v___x_3671_ = _args[4];
lean_object* v___x_3672_ = _args[5];
lean_object* v_00_u03b1_3673_ = _args[6];
lean_object* v_00_u03b2_3674_ = _args[7];
lean_object* v___x_3675_ = _args[8];
lean_object* v_ctorName_3676_ = _args[9];
lean_object* v_a_3677_ = _args[10];
lean_object* v_x_3678_ = _args[11];
lean_object* v_xs_3679_ = _args[12];
lean_object* v_body_3680_ = _args[13];
lean_object* v___y_3681_ = _args[14];
lean_object* v___y_3682_ = _args[15];
lean_object* v___y_3683_ = _args[16];
lean_object* v___y_3684_ = _args[17];
lean_object* v___y_3685_ = _args[18];
lean_object* v___y_3686_ = _args[19];
lean_object* v___y_3687_ = _args[20];
_start:
{
uint8_t v___x_6601__boxed_3688_; uint8_t v___x_6602__boxed_3689_; lean_object* v_res_3690_; 
v___x_6601__boxed_3688_ = lean_unbox(v___x_3671_);
v___x_6602__boxed_3689_ = lean_unbox(v___x_3672_);
v_res_3690_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(v___x_3667_, v___x_3668_, v_k_3669_, v___x_3670_, v___x_6601__boxed_3688_, v___x_6602__boxed_3689_, v_00_u03b1_3673_, v_00_u03b2_3674_, v___x_3675_, v_ctorName_3676_, v_a_3677_, v_x_3678_, v_xs_3679_, v_body_3680_, v___y_3681_, v___y_3682_, v___y_3683_, v___y_3684_, v___y_3685_, v___y_3686_);
lean_dec(v___y_3686_);
lean_dec_ref(v___y_3685_);
lean_dec(v___y_3684_);
lean_dec_ref(v___y_3683_);
lean_dec(v___y_3682_);
lean_dec_ref(v___y_3681_);
lean_dec_ref(v_xs_3679_);
lean_dec_ref(v_a_3677_);
lean_dec(v___x_3675_);
lean_dec(v___x_3668_);
lean_dec_ref(v___x_3667_);
return v_res_3690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(lean_object* v___x_3691_, lean_object* v___x_3692_, lean_object* v_k_3693_, lean_object* v___x_3694_, uint8_t v___x_3695_, uint8_t v___x_3696_, lean_object* v_00_u03b1_3697_, lean_object* v_00_u03b2_3698_, lean_object* v___x_3699_, lean_object* v_a_3700_, lean_object* v_x_3701_, lean_object* v___x_3702_, lean_object* v_ctorName_3703_, lean_object* v_minor_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_){
_start:
{
lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___f_3714_; lean_object* v___x_3715_; 
v___x_3712_ = lean_box(v___x_3695_);
v___x_3713_ = lean_box(v___x_3696_);
v___f_3714_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed), 21, 12);
lean_closure_set(v___f_3714_, 0, v___x_3691_);
lean_closure_set(v___f_3714_, 1, v___x_3692_);
lean_closure_set(v___f_3714_, 2, v_k_3693_);
lean_closure_set(v___f_3714_, 3, v___x_3694_);
lean_closure_set(v___f_3714_, 4, v___x_3712_);
lean_closure_set(v___f_3714_, 5, v___x_3713_);
lean_closure_set(v___f_3714_, 6, v_00_u03b1_3697_);
lean_closure_set(v___f_3714_, 7, v_00_u03b2_3698_);
lean_closure_set(v___f_3714_, 8, v___x_3699_);
lean_closure_set(v___f_3714_, 9, v_ctorName_3703_);
lean_closure_set(v___f_3714_, 10, v_a_3700_);
lean_closure_set(v___f_3714_, 11, v_x_3701_);
v___x_3715_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_minor_3704_, v___x_3702_, v___f_3714_, v___x_3695_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_);
return v___x_3715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3___boxed(lean_object** _args){
lean_object* v___x_3716_ = _args[0];
lean_object* v___x_3717_ = _args[1];
lean_object* v_k_3718_ = _args[2];
lean_object* v___x_3719_ = _args[3];
lean_object* v___x_3720_ = _args[4];
lean_object* v___x_3721_ = _args[5];
lean_object* v_00_u03b1_3722_ = _args[6];
lean_object* v_00_u03b2_3723_ = _args[7];
lean_object* v___x_3724_ = _args[8];
lean_object* v_a_3725_ = _args[9];
lean_object* v_x_3726_ = _args[10];
lean_object* v___x_3727_ = _args[11];
lean_object* v_ctorName_3728_ = _args[12];
lean_object* v_minor_3729_ = _args[13];
lean_object* v___y_3730_ = _args[14];
lean_object* v___y_3731_ = _args[15];
lean_object* v___y_3732_ = _args[16];
lean_object* v___y_3733_ = _args[17];
lean_object* v___y_3734_ = _args[18];
lean_object* v___y_3735_ = _args[19];
lean_object* v___y_3736_ = _args[20];
_start:
{
uint8_t v___x_6565__boxed_3737_; uint8_t v___x_6566__boxed_3738_; lean_object* v_res_3739_; 
v___x_6565__boxed_3737_ = lean_unbox(v___x_3720_);
v___x_6566__boxed_3738_ = lean_unbox(v___x_3721_);
v_res_3739_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3716_, v___x_3717_, v_k_3718_, v___x_3719_, v___x_6565__boxed_3737_, v___x_6566__boxed_3738_, v_00_u03b1_3722_, v_00_u03b2_3723_, v___x_3724_, v_a_3725_, v_x_3726_, v___x_3727_, v_ctorName_3728_, v_minor_3729_, v___y_3730_, v___y_3731_, v___y_3732_, v___y_3733_, v___y_3734_, v___y_3735_);
lean_dec(v___y_3735_);
lean_dec_ref(v___y_3734_);
lean_dec(v___y_3733_);
lean_dec_ref(v___y_3732_);
lean_dec(v___y_3731_);
lean_dec_ref(v___y_3730_);
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___boxed(lean_object* v_x_3740_, lean_object* v_F_3741_, lean_object* v_val_3742_, lean_object* v_k_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
lean_object* v_res_3751_; 
v_res_3751_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v_x_3740_, v_F_3741_, v_val_3742_, v_k_3743_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_);
lean_dec(v___y_3749_);
lean_dec_ref(v___y_3748_);
lean_dec(v___y_3747_);
lean_dec_ref(v___y_3746_);
lean_dec(v___y_3745_);
lean_dec_ref(v___y_3744_);
return v_res_3751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0(lean_object* v_00_u03b1_3752_, lean_object* v_name_3753_, uint8_t v_bi_3754_, lean_object* v_type_3755_, lean_object* v_k_3756_, uint8_t v_kind_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_){
_start:
{
lean_object* v___x_3765_; 
v___x_3765_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(v_name_3753_, v_bi_3754_, v_type_3755_, v_k_3756_, v_kind_3757_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_, v___y_3762_, v___y_3763_);
return v___x_3765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3766_, lean_object* v_name_3767_, lean_object* v_bi_3768_, lean_object* v_type_3769_, lean_object* v_k_3770_, lean_object* v_kind_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_){
_start:
{
uint8_t v_bi_boxed_3779_; uint8_t v_kind_boxed_3780_; lean_object* v_res_3781_; 
v_bi_boxed_3779_ = lean_unbox(v_bi_3768_);
v_kind_boxed_3780_ = lean_unbox(v_kind_3771_);
v_res_3781_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0(v_00_u03b1_3766_, v_name_3767_, v_bi_boxed_3779_, v_type_3769_, v_k_3770_, v_kind_boxed_3780_, v___y_3772_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_, v___y_3777_);
lean_dec(v___y_3777_);
lean_dec_ref(v___y_3776_);
lean_dec(v___y_3775_);
lean_dec_ref(v___y_3774_);
lean_dec(v___y_3773_);
lean_dec_ref(v___y_3772_);
return v_res_3781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(lean_object* v_00_u03b1_3782_, lean_object* v_name_3783_, lean_object* v_type_3784_, lean_object* v_k_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v_name_3783_, v_type_3784_, v_k_3785_, v___y_3786_, v___y_3787_, v___y_3788_, v___y_3789_, v___y_3790_, v___y_3791_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___boxed(lean_object* v_00_u03b1_3794_, lean_object* v_name_3795_, lean_object* v_type_3796_, lean_object* v_k_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_){
_start:
{
lean_object* v_res_3805_; 
v_res_3805_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(v_00_u03b1_3794_, v_name_3795_, v_type_3796_, v_k_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_);
lean_dec(v___y_3803_);
lean_dec_ref(v___y_3802_);
lean_dec(v___y_3801_);
lean_dec_ref(v___y_3800_);
lean_dec(v___y_3799_);
lean_dec_ref(v___y_3798_);
return v_res_3805_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3806_; 
v___x_3806_ = l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
return v___x_3806_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(lean_object* v_msg_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_){
_start:
{
lean_object* v___x_3815_; lean_object* v___x_3262__overap_3816_; lean_object* v___x_3817_; 
v___x_3815_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0, &l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0);
v___x_3262__overap_3816_ = lean_panic_fn_borrowed(v___x_3815_, v_msg_3807_);
lean_inc(v___y_3813_);
lean_inc_ref(v___y_3812_);
lean_inc(v___y_3811_);
lean_inc_ref(v___y_3810_);
lean_inc(v___y_3809_);
lean_inc_ref(v___y_3808_);
v___x_3817_ = lean_apply_7(v___x_3262__overap_3816_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_, v___y_3813_, lean_box(0));
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___boxed(lean_object* v_msg_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_){
_start:
{
lean_object* v_res_3826_; 
v_res_3826_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(v_msg_3818_, v___y_3819_, v___y_3820_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_);
lean_dec(v___y_3824_);
lean_dec_ref(v___y_3823_);
lean_dec(v___y_3822_);
lean_dec_ref(v___y_3821_);
lean_dec(v___y_3820_);
lean_dec_ref(v___y_3819_);
return v_res_3826_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3(void){
_start:
{
lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3830_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2));
v___x_3831_ = lean_unsigned_to_nat(49u);
v___x_3832_ = lean_unsigned_to_nat(186u);
v___x_3833_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1));
v___x_3834_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0));
v___x_3835_ = l_mkPanicMessageWithDecl(v___x_3834_, v___x_3833_, v___x_3832_, v___x_3831_, v___x_3830_);
return v___x_3835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed(lean_object* v___x_3836_, lean_object* v_a_3837_, lean_object* v_k_3838_, lean_object* v___x_3839_, lean_object* v___x_3840_, lean_object* v___x_3841_, lean_object* v___x_3842_, lean_object* v___x_3843_, lean_object* v_FNew_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_){
_start:
{
uint8_t v___x_3437__boxed_3852_; uint8_t v___x_3438__boxed_3853_; uint8_t v___x_3439__boxed_3854_; lean_object* v_res_3855_; 
v___x_3437__boxed_3852_ = lean_unbox(v___x_3841_);
v___x_3438__boxed_3853_ = lean_unbox(v___x_3842_);
v___x_3439__boxed_3854_ = lean_unbox(v___x_3843_);
v_res_3855_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(v___x_3836_, v_a_3837_, v_k_3838_, v___x_3839_, v___x_3840_, v___x_3437__boxed_3852_, v___x_3438__boxed_3853_, v___x_3439__boxed_3854_, v_FNew_3844_, v___y_3845_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec(v___y_3848_);
lean_dec_ref(v___y_3847_);
lean_dec(v___y_3846_);
lean_dec_ref(v___y_3845_);
lean_dec(v___x_3839_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(lean_object* v___x_3861_, lean_object* v___x_3862_, lean_object* v___x_3863_, lean_object* v___x_3864_, uint8_t v___x_3865_, uint8_t v___x_3866_, lean_object* v_k_3867_, lean_object* v___x_3868_, lean_object* v_00_u03b1_3869_, lean_object* v_00_u03b2_3870_, lean_object* v___x_3871_, lean_object* v_a_3872_, lean_object* v_x_3873_, lean_object* v_xs_3874_, lean_object* v_body_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_){
_start:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; uint8_t v___x_3888_; lean_object* v___x_3889_; 
v___x_3883_ = lean_array_get(v___x_3861_, v_xs_3874_, v___x_3862_);
v___x_3884_ = lean_array_get(v___x_3861_, v_xs_3874_, v___x_3863_);
v___x_3885_ = lean_array_get_size(v_xs_3874_);
v___x_3886_ = l_Array_toSubarray___redArg(v_xs_3874_, v___x_3864_, v___x_3885_);
v___x_3887_ = l_Subarray_copy___redArg(v___x_3886_);
v___x_3888_ = 1;
v___x_3889_ = l_Lean_Meta_mkLambdaFVars(v___x_3887_, v_body_3875_, v___x_3865_, v___x_3866_, v___x_3865_, v___x_3866_, v___x_3888_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
lean_dec_ref(v___x_3887_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3916_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3916_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3916_ == 0)
{
v___x_3892_ = v___x_3889_;
v_isShared_3893_ = v_isSharedCheck_3916_;
goto v_resetjp_3891_;
}
else
{
lean_inc(v_a_3890_);
lean_dec(v___x_3889_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3916_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___f_3897_; lean_object* v___x_3898_; lean_object* v___x_3900_; 
v___x_3894_ = lean_box(v___x_3865_);
v___x_3895_ = lean_box(v___x_3866_);
v___x_3896_ = lean_box(v___x_3888_);
lean_inc(v___x_3883_);
lean_inc(v___x_3884_);
v___f_3897_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed), 16, 8);
lean_closure_set(v___f_3897_, 0, v___x_3884_);
lean_closure_set(v___f_3897_, 1, v_a_3890_);
lean_closure_set(v___f_3897_, 2, v_k_3867_);
lean_closure_set(v___f_3897_, 3, v___x_3868_);
lean_closure_set(v___f_3897_, 4, v___x_3883_);
lean_closure_set(v___f_3897_, 5, v___x_3894_);
lean_closure_set(v___f_3897_, 6, v___x_3895_);
lean_closure_set(v___f_3897_, 7, v___x_3896_);
v___x_3898_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2));
if (v_isShared_3893_ == 0)
{
lean_ctor_set_tag(v___x_3892_, 1);
lean_ctor_set(v___x_3892_, 0, v_00_u03b1_3869_);
v___x_3900_ = v___x_3892_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v_00_u03b1_3869_);
v___x_3900_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___x_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3901_, 0, v_00_u03b2_3870_);
v___x_3902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3883_);
v___x_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3884_);
v___x_3904_ = lean_mk_empty_array_with_capacity(v___x_3871_);
v___x_3905_ = lean_array_push(v___x_3904_, v___x_3900_);
v___x_3906_ = lean_array_push(v___x_3905_, v___x_3901_);
v___x_3907_ = lean_array_push(v___x_3906_, v___x_3902_);
v___x_3908_ = lean_array_push(v___x_3907_, v___x_3903_);
v___x_3909_ = l_Lean_Meta_mkAppOptM(v___x_3898_, v___x_3908_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
if (lean_obj_tag(v___x_3909_) == 0)
{
lean_object* v_a_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; 
v_a_3910_ = lean_ctor_get(v___x_3909_, 0);
lean_inc(v_a_3910_);
lean_dec_ref_known(v___x_3909_, 1);
v___x_3911_ = l_Lean_LocalDecl_type(v_a_3872_);
v___x_3912_ = l_Lean_Expr_replaceFVar(v___x_3911_, v_x_3873_, v_a_3910_);
lean_dec(v_a_3910_);
lean_dec_ref(v___x_3911_);
v___x_3913_ = l_Lean_LocalDecl_userName(v_a_3872_);
v___x_3914_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v___x_3913_, v___x_3912_, v___f_3897_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
return v___x_3914_;
}
else
{
lean_dec_ref(v___f_3897_);
lean_dec_ref(v_x_3873_);
return v___x_3909_;
}
}
}
}
else
{
lean_dec(v___x_3884_);
lean_dec(v___x_3883_);
lean_dec_ref(v_x_3873_);
lean_dec_ref(v_00_u03b2_3870_);
lean_dec_ref(v_00_u03b1_3869_);
lean_dec(v___x_3868_);
lean_dec_ref(v_k_3867_);
return v___x_3889_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed(lean_object** _args){
lean_object* v___x_3917_ = _args[0];
lean_object* v___x_3918_ = _args[1];
lean_object* v___x_3919_ = _args[2];
lean_object* v___x_3920_ = _args[3];
lean_object* v___x_3921_ = _args[4];
lean_object* v___x_3922_ = _args[5];
lean_object* v_k_3923_ = _args[6];
lean_object* v___x_3924_ = _args[7];
lean_object* v_00_u03b1_3925_ = _args[8];
lean_object* v_00_u03b2_3926_ = _args[9];
lean_object* v___x_3927_ = _args[10];
lean_object* v_a_3928_ = _args[11];
lean_object* v_x_3929_ = _args[12];
lean_object* v_xs_3930_ = _args[13];
lean_object* v_body_3931_ = _args[14];
lean_object* v___y_3932_ = _args[15];
lean_object* v___y_3933_ = _args[16];
lean_object* v___y_3934_ = _args[17];
lean_object* v___y_3935_ = _args[18];
lean_object* v___y_3936_ = _args[19];
lean_object* v___y_3937_ = _args[20];
lean_object* v___y_3938_ = _args[21];
_start:
{
uint8_t v___x_3464__boxed_3939_; uint8_t v___x_3465__boxed_3940_; lean_object* v_res_3941_; 
v___x_3464__boxed_3939_ = lean_unbox(v___x_3921_);
v___x_3465__boxed_3940_ = lean_unbox(v___x_3922_);
v_res_3941_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(v___x_3917_, v___x_3918_, v___x_3919_, v___x_3920_, v___x_3464__boxed_3939_, v___x_3465__boxed_3940_, v_k_3923_, v___x_3924_, v_00_u03b1_3925_, v_00_u03b2_3926_, v___x_3927_, v_a_3928_, v_x_3929_, v_xs_3930_, v_body_3931_, v___y_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_);
lean_dec(v___y_3937_);
lean_dec_ref(v___y_3936_);
lean_dec(v___y_3935_);
lean_dec_ref(v___y_3934_);
lean_dec(v___y_3933_);
lean_dec_ref(v___y_3932_);
lean_dec_ref(v_a_3928_);
lean_dec(v___x_3927_);
lean_dec(v___x_3919_);
lean_dec(v___x_3918_);
lean_dec_ref(v___x_3917_);
return v_res_3941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(lean_object* v_x_3945_, lean_object* v_F_3946_, lean_object* v_val_3947_, lean_object* v_k_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_){
_start:
{
lean_object* v___y_3957_; lean_object* v___y_3958_; lean_object* v___y_3959_; lean_object* v___y_3960_; lean_object* v___y_3961_; lean_object* v___y_3962_; lean_object* v___x_3965_; uint8_t v___y_3967_; uint8_t v___x_4058_; 
v___x_3965_ = l_Lean_instInhabitedExpr;
v___x_4058_ = l_Lean_Expr_isFVar(v_x_3945_);
if (v___x_4058_ == 0)
{
v___y_3967_ = v___x_4058_;
goto v___jp_3966_;
}
else
{
lean_object* v___x_4059_; lean_object* v___x_4060_; uint8_t v___x_4061_; 
v___x_4059_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4));
v___x_4060_ = lean_unsigned_to_nat(5u);
v___x_4061_ = l_Lean_Expr_isAppOfArity(v_val_3947_, v___x_4059_, v___x_4060_);
v___y_3967_ = v___x_4061_;
goto v___jp_3966_;
}
v___jp_3956_:
{
lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3963_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3);
v___x_3964_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(v___x_3963_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
return v___x_3964_;
}
v___jp_3966_:
{
if (v___y_3967_ == 0)
{
lean_object* v___x_3968_; 
lean_dec_ref(v_x_3945_);
lean_inc(v___y_3954_);
lean_inc_ref(v___y_3953_);
lean_inc(v___y_3952_);
lean_inc_ref(v___y_3951_);
lean_inc(v___y_3950_);
lean_inc_ref(v___y_3949_);
v___x_3968_ = lean_apply_9(v_k_3948_, v_F_3946_, v_val_3947_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, lean_box(0));
return v___x_3968_;
}
else
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; uint8_t v___x_3975_; 
v___x_3969_ = lean_unsigned_to_nat(3u);
v___x_3970_ = l_Lean_Expr_getAppNumArgs(v_val_3947_);
v___x_3971_ = lean_nat_sub(v___x_3970_, v___x_3969_);
v___x_3972_ = lean_unsigned_to_nat(1u);
v___x_3973_ = lean_nat_sub(v___x_3971_, v___x_3972_);
lean_dec(v___x_3971_);
v___x_3974_ = l_Lean_Expr_getRevArg_x21(v_val_3947_, v___x_3973_);
v___x_3975_ = lean_expr_eqv(v___x_3974_, v_x_3945_);
lean_dec_ref(v___x_3974_);
if (v___x_3975_ == 0)
{
lean_object* v___x_3976_; 
lean_dec(v___x_3970_);
lean_dec_ref(v_x_3945_);
lean_inc(v___y_3954_);
lean_inc_ref(v___y_3953_);
lean_inc(v___y_3952_);
lean_inc_ref(v___y_3951_);
lean_inc(v___y_3950_);
lean_inc_ref(v___y_3949_);
v___x_3976_ = lean_apply_9(v_k_3948_, v_F_3946_, v_val_3947_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, lean_box(0));
return v___x_3976_;
}
else
{
lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; uint8_t v___x_3981_; 
v___x_3977_ = lean_unsigned_to_nat(4u);
v___x_3978_ = lean_nat_sub(v___x_3970_, v___x_3977_);
v___x_3979_ = lean_nat_sub(v___x_3978_, v___x_3972_);
lean_dec(v___x_3978_);
v___x_3980_ = l_Lean_Expr_getRevArg_x21(v_val_3947_, v___x_3979_);
v___x_3981_ = l_Lean_Expr_isLambda(v___x_3980_);
if (v___x_3981_ == 0)
{
lean_object* v___x_3982_; 
lean_dec_ref(v___x_3980_);
lean_dec(v___x_3970_);
lean_dec_ref(v_x_3945_);
lean_inc(v___y_3954_);
lean_inc_ref(v___y_3953_);
lean_inc(v___y_3952_);
lean_inc_ref(v___y_3951_);
lean_inc(v___y_3950_);
lean_inc_ref(v___y_3949_);
v___x_3982_ = lean_apply_9(v_k_3948_, v_F_3946_, v_val_3947_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, lean_box(0));
return v___x_3982_;
}
else
{
lean_object* v___x_3983_; uint8_t v___x_3984_; 
v___x_3983_ = l_Lean_Expr_bindingBody_x21(v___x_3980_);
lean_dec_ref(v___x_3980_);
v___x_3984_ = l_Lean_Expr_isLambda(v___x_3983_);
lean_dec_ref(v___x_3983_);
if (v___x_3984_ == 0)
{
lean_object* v___x_3985_; 
lean_dec(v___x_3970_);
lean_dec_ref(v_x_3945_);
lean_inc(v___y_3954_);
lean_inc_ref(v___y_3953_);
lean_inc(v___y_3952_);
lean_inc_ref(v___y_3951_);
lean_inc(v___y_3950_);
lean_inc_ref(v___y_3949_);
v___x_3985_ = lean_apply_9(v_k_3948_, v_F_3946_, v_val_3947_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, lean_box(0));
return v___x_3985_;
}
else
{
lean_object* v___x_3986_; lean_object* v___x_3987_; 
v___x_3986_ = l_Lean_Expr_getAppFn(v_val_3947_);
v___x_3987_ = l_Lean_Expr_constLevels_x21(v___x_3986_);
lean_dec_ref(v___x_3986_);
if (lean_obj_tag(v___x_3987_) == 1)
{
lean_object* v_tail_3988_; 
v_tail_3988_ = lean_ctor_get(v___x_3987_, 1);
lean_inc(v_tail_3988_);
lean_dec_ref_known(v___x_3987_, 2);
if (lean_obj_tag(v_tail_3988_) == 1)
{
lean_object* v_tail_3989_; 
v_tail_3989_ = lean_ctor_get(v_tail_3988_, 1);
lean_inc(v_tail_3989_);
if (lean_obj_tag(v_tail_3989_) == 1)
{
lean_object* v_tail_3990_; lean_object* v___x_3992_; uint8_t v_isShared_3993_; uint8_t v_isSharedCheck_4056_; 
v_tail_3990_ = lean_ctor_get(v_tail_3989_, 1);
v_isSharedCheck_4056_ = !lean_is_exclusive(v_tail_3989_);
if (v_isSharedCheck_4056_ == 0)
{
lean_object* v_unused_4057_; 
v_unused_4057_ = lean_ctor_get(v_tail_3989_, 0);
lean_dec(v_unused_4057_);
v___x_3992_ = v_tail_3989_;
v_isShared_3993_ = v_isSharedCheck_4056_;
goto v_resetjp_3991_;
}
else
{
lean_inc(v_tail_3990_);
lean_dec(v_tail_3989_);
v___x_3992_ = lean_box(0);
v_isShared_3993_ = v_isSharedCheck_4056_;
goto v_resetjp_3991_;
}
v_resetjp_3991_:
{
if (lean_obj_tag(v_tail_3990_) == 0)
{
lean_object* v_dummy_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v_args_3997_; lean_object* v___x_3998_; lean_object* v_00_u03b1_3999_; lean_object* v_00_u03b2_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v_dummy_3994_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v___x_3970_);
v___x_3995_ = lean_mk_array(v___x_3970_, v_dummy_3994_);
v___x_3996_ = lean_nat_sub(v___x_3970_, v___x_3972_);
lean_dec(v___x_3970_);
v_args_3997_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_3947_, v___x_3995_, v___x_3996_);
v___x_3998_ = lean_unsigned_to_nat(0u);
v_00_u03b1_3999_ = lean_array_get(v___x_3965_, v_args_3997_, v___x_3998_);
v_00_u03b2_4000_ = lean_array_get(v___x_3965_, v_args_3997_, v___x_3972_);
v___x_4001_ = l_Lean_Expr_fvarId_x21(v_F_3946_);
v___x_4002_ = l_Lean_FVarId_getDecl___redArg(v___x_4001_, v___y_3951_, v___y_3953_, v___y_3954_);
if (lean_obj_tag(v___x_4002_) == 0)
{
lean_object* v_a_4003_; lean_object* v___x_4004_; lean_object* v___f_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; uint8_t v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___f_4011_; lean_object* v___x_4012_; 
v_a_4003_ = lean_ctor_get(v___x_4002_, 0);
lean_inc_n(v_a_4003_, 2);
lean_dec_ref_known(v___x_4002_, 1);
v___x_4004_ = lean_box(v___x_3981_);
lean_inc_ref_n(v_x_3945_, 2);
v___f_4005_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(v___f_4005_, 0, v_a_4003_);
lean_closure_set(v___f_4005_, 1, v___x_3965_);
lean_closure_set(v___f_4005_, 2, v___x_3998_);
lean_closure_set(v___f_4005_, 3, v_x_3945_);
lean_closure_set(v___f_4005_, 4, v___x_4004_);
v___x_4006_ = lean_unsigned_to_nat(2u);
v___x_4007_ = lean_array_get(v___x_3965_, v_args_3997_, v___x_4006_);
v___x_4008_ = 0;
v___x_4009_ = lean_box(v___x_4008_);
v___x_4010_ = lean_box(v___x_3981_);
lean_inc(v_00_u03b2_4000_);
lean_inc(v_00_u03b1_3999_);
v___f_4011_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed), 22, 13);
lean_closure_set(v___f_4011_, 0, v___x_3965_);
lean_closure_set(v___f_4011_, 1, v___x_3998_);
lean_closure_set(v___f_4011_, 2, v___x_3972_);
lean_closure_set(v___f_4011_, 3, v___x_4006_);
lean_closure_set(v___f_4011_, 4, v___x_4009_);
lean_closure_set(v___f_4011_, 5, v___x_4010_);
lean_closure_set(v___f_4011_, 6, v_k_3948_);
lean_closure_set(v___f_4011_, 7, v___x_3969_);
lean_closure_set(v___f_4011_, 8, v_00_u03b1_3999_);
lean_closure_set(v___f_4011_, 9, v_00_u03b2_4000_);
lean_closure_set(v___f_4011_, 10, v___x_3977_);
lean_closure_set(v___f_4011_, 11, v_a_4003_);
lean_closure_set(v___f_4011_, 12, v_x_3945_);
v___x_4012_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v___x_4007_, v___f_4005_, v___x_4008_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v_fst_4014_; lean_object* v_snd_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_a_4013_);
lean_dec_ref_known(v___x_4012_, 1);
v_fst_4014_ = lean_ctor_get(v_a_4013_, 0);
lean_inc(v_fst_4014_);
v_snd_4015_ = lean_ctor_get(v_a_4013_, 1);
lean_inc(v_snd_4015_);
lean_dec(v_a_4013_);
v___x_4016_ = lean_array_get(v___x_3965_, v_args_3997_, v___x_3977_);
lean_dec_ref(v_args_3997_);
v___x_4017_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v___x_4016_, v___f_4011_, v___x_4008_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4039_; 
v_a_4018_ = lean_ctor_get(v___x_4017_, 0);
v_isSharedCheck_4039_ = !lean_is_exclusive(v___x_4017_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_4020_ = v___x_4017_;
v_isShared_4021_ = v_isSharedCheck_4039_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_4017_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4039_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4022_; lean_object* v___x_4024_; 
v___x_4022_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4));
if (v_isShared_3993_ == 0)
{
lean_ctor_set(v___x_3992_, 1, v_tail_3988_);
lean_ctor_set(v___x_3992_, 0, v_snd_4015_);
v___x_4024_ = v___x_3992_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v_snd_4015_);
lean_ctor_set(v_reuseFailAlloc_4038_, 1, v_tail_3988_);
v___x_4024_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4036_; 
v___x_4025_ = l_Lean_mkConst(v___x_4022_, v___x_4024_);
v___x_4026_ = lean_unsigned_to_nat(6u);
v___x_4027_ = lean_mk_empty_array_with_capacity(v___x_4026_);
v___x_4028_ = lean_array_push(v___x_4027_, v_00_u03b1_3999_);
v___x_4029_ = lean_array_push(v___x_4028_, v_00_u03b2_4000_);
v___x_4030_ = lean_array_push(v___x_4029_, v_fst_4014_);
v___x_4031_ = lean_array_push(v___x_4030_, v_x_3945_);
v___x_4032_ = lean_array_push(v___x_4031_, v_a_4018_);
v___x_4033_ = lean_array_push(v___x_4032_, v_F_3946_);
v___x_4034_ = l_Lean_mkAppN(v___x_4025_, v___x_4033_);
lean_dec_ref(v___x_4033_);
if (v_isShared_4021_ == 0)
{
lean_ctor_set(v___x_4020_, 0, v___x_4034_);
v___x_4036_ = v___x_4020_;
goto v_reusejp_4035_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v___x_4034_);
v___x_4036_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4035_;
}
v_reusejp_4035_:
{
return v___x_4036_;
}
}
}
}
else
{
lean_dec(v_snd_4015_);
lean_dec(v_fst_4014_);
lean_dec(v_00_u03b2_4000_);
lean_dec(v_00_u03b1_3999_);
lean_del_object(v___x_3992_);
lean_dec_ref_known(v_tail_3988_, 2);
lean_dec_ref(v_F_3946_);
lean_dec_ref(v_x_3945_);
return v___x_4017_;
}
}
else
{
lean_object* v_a_4040_; lean_object* v___x_4042_; uint8_t v_isShared_4043_; uint8_t v_isSharedCheck_4047_; 
lean_dec_ref(v___f_4011_);
lean_dec(v_00_u03b2_4000_);
lean_dec(v_00_u03b1_3999_);
lean_dec_ref(v_args_3997_);
lean_del_object(v___x_3992_);
lean_dec_ref_known(v_tail_3988_, 2);
lean_dec_ref(v_F_3946_);
lean_dec_ref(v_x_3945_);
v_a_4040_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4042_ = v___x_4012_;
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
else
{
lean_inc(v_a_4040_);
lean_dec(v___x_4012_);
v___x_4042_ = lean_box(0);
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
v_resetjp_4041_:
{
lean_object* v___x_4045_; 
if (v_isShared_4043_ == 0)
{
v___x_4045_ = v___x_4042_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_a_4040_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
}
}
else
{
lean_object* v_a_4048_; lean_object* v___x_4050_; uint8_t v_isShared_4051_; uint8_t v_isSharedCheck_4055_; 
lean_dec(v_00_u03b2_4000_);
lean_dec(v_00_u03b1_3999_);
lean_dec_ref(v_args_3997_);
lean_del_object(v___x_3992_);
lean_dec_ref_known(v_tail_3988_, 2);
lean_dec_ref(v_k_3948_);
lean_dec_ref(v_F_3946_);
lean_dec_ref(v_x_3945_);
v_a_4048_ = lean_ctor_get(v___x_4002_, 0);
v_isSharedCheck_4055_ = !lean_is_exclusive(v___x_4002_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_4050_ = v___x_4002_;
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
else
{
lean_inc(v_a_4048_);
lean_dec(v___x_4002_);
v___x_4050_ = lean_box(0);
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
v_resetjp_4049_:
{
lean_object* v___x_4053_; 
if (v_isShared_4051_ == 0)
{
v___x_4053_ = v___x_4050_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v_a_4048_);
v___x_4053_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
return v___x_4053_;
}
}
}
}
else
{
lean_del_object(v___x_3992_);
lean_dec(v_tail_3990_);
lean_dec_ref_known(v_tail_3988_, 2);
lean_dec(v___x_3970_);
lean_dec_ref(v_k_3948_);
lean_dec_ref(v_val_3947_);
lean_dec_ref(v_F_3946_);
lean_dec_ref(v_x_3945_);
v___y_3957_ = v___y_3949_;
v___y_3958_ = v___y_3950_;
v___y_3959_ = v___y_3951_;
v___y_3960_ = v___y_3952_;
v___y_3961_ = v___y_3953_;
v___y_3962_ = v___y_3954_;
goto v___jp_3956_;
}
}
}
else
{
lean_dec(v_tail_3989_);
lean_dec_ref_known(v_tail_3988_, 2);
lean_dec(v___x_3970_);
lean_dec_ref(v_k_3948_);
lean_dec_ref(v_val_3947_);
lean_dec_ref(v_F_3946_);
lean_dec_ref(v_x_3945_);
v___y_3957_ = v___y_3949_;
v___y_3958_ = v___y_3950_;
v___y_3959_ = v___y_3951_;
v___y_3960_ = v___y_3952_;
v___y_3961_ = v___y_3953_;
v___y_3962_ = v___y_3954_;
goto v___jp_3956_;
}
}
else
{
lean_dec(v_tail_3988_);
lean_dec(v___x_3970_);
lean_dec_ref(v_k_3948_);
lean_dec_ref(v_val_3947_);
lean_dec_ref(v_F_3946_);
lean_dec_ref(v_x_3945_);
v___y_3957_ = v___y_3949_;
v___y_3958_ = v___y_3950_;
v___y_3959_ = v___y_3951_;
v___y_3960_ = v___y_3952_;
v___y_3961_ = v___y_3953_;
v___y_3962_ = v___y_3954_;
goto v___jp_3956_;
}
}
else
{
lean_dec(v___x_3987_);
lean_dec(v___x_3970_);
lean_dec_ref(v_k_3948_);
lean_dec_ref(v_val_3947_);
lean_dec_ref(v_F_3946_);
lean_dec_ref(v_x_3945_);
v___y_3957_ = v___y_3949_;
v___y_3958_ = v___y_3950_;
v___y_3959_ = v___y_3951_;
v___y_3960_ = v___y_3952_;
v___y_3961_ = v___y_3953_;
v___y_3962_ = v___y_3954_;
goto v___jp_3956_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(lean_object* v___x_4062_, lean_object* v_a_4063_, lean_object* v_k_4064_, lean_object* v___x_4065_, lean_object* v___x_4066_, uint8_t v___x_4067_, uint8_t v___x_4068_, uint8_t v___x_4069_, lean_object* v_FNew_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_){
_start:
{
lean_object* v___x_4078_; 
lean_inc_ref(v_FNew_4070_);
lean_inc_ref(v___x_4062_);
v___x_4078_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v___x_4062_, v_FNew_4070_, v_a_4063_, v_k_4064_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
if (lean_obj_tag(v___x_4078_) == 0)
{
lean_object* v_a_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
v_a_4079_ = lean_ctor_get(v___x_4078_, 0);
lean_inc(v_a_4079_);
lean_dec_ref_known(v___x_4078_, 1);
v___x_4080_ = lean_mk_empty_array_with_capacity(v___x_4065_);
v___x_4081_ = lean_array_push(v___x_4080_, v___x_4066_);
v___x_4082_ = lean_array_push(v___x_4081_, v___x_4062_);
v___x_4083_ = lean_array_push(v___x_4082_, v_FNew_4070_);
v___x_4084_ = l_Lean_Meta_mkLambdaFVars(v___x_4083_, v_a_4079_, v___x_4067_, v___x_4068_, v___x_4067_, v___x_4068_, v___x_4069_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
lean_dec_ref(v___x_4083_);
return v___x_4084_;
}
else
{
lean_dec_ref(v_FNew_4070_);
lean_dec_ref(v___x_4066_);
lean_dec_ref(v___x_4062_);
return v___x_4078_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___boxed(lean_object* v_x_4085_, lean_object* v_F_4086_, lean_object* v_val_4087_, lean_object* v_k_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_){
_start:
{
lean_object* v_res_4096_; 
v_res_4096_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v_x_4085_, v_F_4086_, v_val_4087_, v_k_4088_, v___y_4089_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_, v___y_4094_);
lean_dec(v___y_4094_);
lean_dec_ref(v___y_4093_);
lean_dec(v___y_4092_);
lean_dec_ref(v___y_4091_);
lean_dec(v___y_4090_);
lean_dec_ref(v___y_4089_);
return v_res_4096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v___x_4110_; 
v___x_4110_ = l_Lean_Elab_WF_applyCleanWfTactic(v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
if (lean_obj_tag(v___x_4110_) == 0)
{
lean_object* v_ref_4111_; uint8_t v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
lean_dec_ref_known(v___x_4110_, 1);
v_ref_4111_ = lean_ctor_get(v___y_4107_, 2);
v___x_4112_ = 0;
v___x_4113_ = l_Lean_SourceInfo_fromRef(v_ref_4111_, v___x_4112_);
v___x_4114_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1));
v___x_4115_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2));
lean_inc(v___x_4113_);
v___x_4116_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4113_);
lean_ctor_set(v___x_4116_, 1, v___x_4115_);
v___x_4117_ = l_Lean_Syntax_node1(v___x_4113_, v___x_4114_, v___x_4116_);
v___x_4118_ = l_Lean_Elab_Tactic_evalTactic(v___x_4117_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
return v___x_4118_;
}
else
{
return v___x_4110_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed(lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_){
_start:
{
lean_object* v_res_4128_; 
v_res_4128_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
lean_dec(v___y_4126_);
lean_dec_ref(v___y_4125_);
lean_dec(v___y_4124_);
lean_dec_ref(v___y_4123_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
return v_res_4128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(lean_object* v_mvarId_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_){
_start:
{
lean_object* v___f_4138_; lean_object* v___x_4139_; 
v___f_4138_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0));
v___x_4139_ = l_Lean_Elab_Tactic_run(v_mvarId_4130_, v___f_4138_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_);
if (lean_obj_tag(v___x_4139_) == 0)
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4150_; 
v_a_4140_ = lean_ctor_get(v___x_4139_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4142_ = v___x_4139_;
v_isShared_4143_ = v_isSharedCheck_4150_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v___x_4139_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4150_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
uint8_t v___x_4144_; 
v___x_4144_ = l_List_isEmpty___redArg(v_a_4140_);
if (v___x_4144_ == 0)
{
lean_object* v___x_4145_; 
lean_del_object(v___x_4142_);
v___x_4145_ = l_Lean_Elab_Term_reportUnsolvedGoals(v_a_4140_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_);
return v___x_4145_;
}
else
{
lean_object* v___x_4146_; lean_object* v___x_4148_; 
lean_dec(v_a_4140_);
v___x_4146_ = lean_box(0);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v___x_4146_);
v___x_4148_ = v___x_4142_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v___x_4146_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
return v___x_4148_;
}
}
}
}
else
{
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4158_; 
v_a_4151_ = lean_ctor_get(v___x_4139_, 0);
v_isSharedCheck_4158_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4158_ == 0)
{
v___x_4153_ = v___x_4139_;
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v___x_4139_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4156_; 
if (v_isShared_4154_ == 0)
{
v___x_4156_ = v___x_4153_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4157_; 
v_reuseFailAlloc_4157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4157_, 0, v_a_4151_);
v___x_4156_ = v_reuseFailAlloc_4157_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
return v___x_4156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___boxed(lean_object* v_mvarId_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_){
_start:
{
lean_object* v_res_4167_; 
v_res_4167_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(v_mvarId_4159_, v___y_4160_, v___y_4161_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_);
lean_dec(v___y_4165_);
lean_dec_ref(v___y_4164_);
lean_dec(v___y_4163_);
lean_dec_ref(v___y_4162_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4160_);
return v_res_4167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object* v_x_4168_, lean_object* v_x_4169_, lean_object* v_x_4170_, lean_object* v_x_4171_){
_start:
{
lean_object* v_ks_4172_; lean_object* v_vs_4173_; lean_object* v___x_4175_; uint8_t v_isShared_4176_; uint8_t v_isSharedCheck_4197_; 
v_ks_4172_ = lean_ctor_get(v_x_4168_, 0);
v_vs_4173_ = lean_ctor_get(v_x_4168_, 1);
v_isSharedCheck_4197_ = !lean_is_exclusive(v_x_4168_);
if (v_isSharedCheck_4197_ == 0)
{
v___x_4175_ = v_x_4168_;
v_isShared_4176_ = v_isSharedCheck_4197_;
goto v_resetjp_4174_;
}
else
{
lean_inc(v_vs_4173_);
lean_inc(v_ks_4172_);
lean_dec(v_x_4168_);
v___x_4175_ = lean_box(0);
v_isShared_4176_ = v_isSharedCheck_4197_;
goto v_resetjp_4174_;
}
v_resetjp_4174_:
{
lean_object* v___x_4177_; uint8_t v___x_4178_; 
v___x_4177_ = lean_array_get_size(v_ks_4172_);
v___x_4178_ = lean_nat_dec_lt(v_x_4169_, v___x_4177_);
if (v___x_4178_ == 0)
{
lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4182_; 
lean_dec(v_x_4169_);
v___x_4179_ = lean_array_push(v_ks_4172_, v_x_4170_);
v___x_4180_ = lean_array_push(v_vs_4173_, v_x_4171_);
if (v_isShared_4176_ == 0)
{
lean_ctor_set(v___x_4175_, 1, v___x_4180_);
lean_ctor_set(v___x_4175_, 0, v___x_4179_);
v___x_4182_ = v___x_4175_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v___x_4179_);
lean_ctor_set(v_reuseFailAlloc_4183_, 1, v___x_4180_);
v___x_4182_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
return v___x_4182_;
}
}
else
{
lean_object* v_k_x27_4184_; uint8_t v___x_4185_; 
v_k_x27_4184_ = lean_array_fget_borrowed(v_ks_4172_, v_x_4169_);
v___x_4185_ = l_Lean_instBEqMVarId_beq(v_x_4170_, v_k_x27_4184_);
if (v___x_4185_ == 0)
{
lean_object* v___x_4187_; 
if (v_isShared_4176_ == 0)
{
v___x_4187_ = v___x_4175_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_ks_4172_);
lean_ctor_set(v_reuseFailAlloc_4191_, 1, v_vs_4173_);
v___x_4187_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
lean_object* v___x_4188_; lean_object* v___x_4189_; 
v___x_4188_ = lean_unsigned_to_nat(1u);
v___x_4189_ = lean_nat_add(v_x_4169_, v___x_4188_);
lean_dec(v_x_4169_);
v_x_4168_ = v___x_4187_;
v_x_4169_ = v___x_4189_;
goto _start;
}
}
else
{
lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4195_; 
v___x_4192_ = lean_array_fset(v_ks_4172_, v_x_4169_, v_x_4170_);
v___x_4193_ = lean_array_fset(v_vs_4173_, v_x_4169_, v_x_4171_);
lean_dec(v_x_4169_);
if (v_isShared_4176_ == 0)
{
lean_ctor_set(v___x_4175_, 1, v___x_4193_);
lean_ctor_set(v___x_4175_, 0, v___x_4192_);
v___x_4195_ = v___x_4175_;
goto v_reusejp_4194_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v___x_4192_);
lean_ctor_set(v_reuseFailAlloc_4196_, 1, v___x_4193_);
v___x_4195_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4194_;
}
v_reusejp_4194_:
{
return v___x_4195_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_n_4198_, lean_object* v_k_4199_, lean_object* v_v_4200_){
_start:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4201_ = lean_unsigned_to_nat(0u);
v___x_4202_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_n_4198_, v___x_4201_, v_k_4199_, v_v_4200_);
return v___x_4202_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_4203_; 
v___x_4203_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_4203_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(lean_object* v_x_4204_, size_t v_x_4205_, size_t v_x_4206_, lean_object* v_x_4207_, lean_object* v_x_4208_){
_start:
{
if (lean_obj_tag(v_x_4204_) == 0)
{
lean_object* v_es_4209_; size_t v___x_4210_; size_t v___x_4211_; lean_object* v_j_4212_; lean_object* v___x_4213_; uint8_t v___x_4214_; 
v_es_4209_ = lean_ctor_get(v_x_4204_, 0);
v___x_4210_ = ((size_t)31ULL);
v___x_4211_ = lean_usize_land(v_x_4205_, v___x_4210_);
v_j_4212_ = lean_usize_to_nat(v___x_4211_);
v___x_4213_ = lean_array_get_size(v_es_4209_);
v___x_4214_ = lean_nat_dec_lt(v_j_4212_, v___x_4213_);
if (v___x_4214_ == 0)
{
lean_dec(v_j_4212_);
lean_dec(v_x_4208_);
lean_dec(v_x_4207_);
return v_x_4204_;
}
else
{
lean_object* v___x_4216_; uint8_t v_isShared_4217_; uint8_t v_isSharedCheck_4253_; 
lean_inc_ref(v_es_4209_);
v_isSharedCheck_4253_ = !lean_is_exclusive(v_x_4204_);
if (v_isSharedCheck_4253_ == 0)
{
lean_object* v_unused_4254_; 
v_unused_4254_ = lean_ctor_get(v_x_4204_, 0);
lean_dec(v_unused_4254_);
v___x_4216_ = v_x_4204_;
v_isShared_4217_ = v_isSharedCheck_4253_;
goto v_resetjp_4215_;
}
else
{
lean_dec(v_x_4204_);
v___x_4216_ = lean_box(0);
v_isShared_4217_ = v_isSharedCheck_4253_;
goto v_resetjp_4215_;
}
v_resetjp_4215_:
{
lean_object* v_v_4218_; lean_object* v___x_4219_; lean_object* v_xs_x27_4220_; lean_object* v___y_4222_; 
v_v_4218_ = lean_array_fget(v_es_4209_, v_j_4212_);
v___x_4219_ = lean_box(0);
v_xs_x27_4220_ = lean_array_fset(v_es_4209_, v_j_4212_, v___x_4219_);
switch(lean_obj_tag(v_v_4218_))
{
case 0:
{
lean_object* v_key_4227_; lean_object* v_val_4228_; lean_object* v___x_4230_; uint8_t v_isShared_4231_; uint8_t v_isSharedCheck_4238_; 
v_key_4227_ = lean_ctor_get(v_v_4218_, 0);
v_val_4228_ = lean_ctor_get(v_v_4218_, 1);
v_isSharedCheck_4238_ = !lean_is_exclusive(v_v_4218_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4230_ = v_v_4218_;
v_isShared_4231_ = v_isSharedCheck_4238_;
goto v_resetjp_4229_;
}
else
{
lean_inc(v_val_4228_);
lean_inc(v_key_4227_);
lean_dec(v_v_4218_);
v___x_4230_ = lean_box(0);
v_isShared_4231_ = v_isSharedCheck_4238_;
goto v_resetjp_4229_;
}
v_resetjp_4229_:
{
uint8_t v___x_4232_; 
v___x_4232_ = l_Lean_instBEqMVarId_beq(v_x_4207_, v_key_4227_);
if (v___x_4232_ == 0)
{
lean_object* v___x_4233_; lean_object* v___x_4234_; 
lean_del_object(v___x_4230_);
v___x_4233_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_4227_, v_val_4228_, v_x_4207_, v_x_4208_);
v___x_4234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4234_, 0, v___x_4233_);
v___y_4222_ = v___x_4234_;
goto v___jp_4221_;
}
else
{
lean_object* v___x_4236_; 
lean_dec(v_val_4228_);
lean_dec(v_key_4227_);
if (v_isShared_4231_ == 0)
{
lean_ctor_set(v___x_4230_, 1, v_x_4208_);
lean_ctor_set(v___x_4230_, 0, v_x_4207_);
v___x_4236_ = v___x_4230_;
goto v_reusejp_4235_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v_x_4207_);
lean_ctor_set(v_reuseFailAlloc_4237_, 1, v_x_4208_);
v___x_4236_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4235_;
}
v_reusejp_4235_:
{
v___y_4222_ = v___x_4236_;
goto v___jp_4221_;
}
}
}
}
case 1:
{
lean_object* v_node_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4251_; 
v_node_4239_ = lean_ctor_get(v_v_4218_, 0);
v_isSharedCheck_4251_ = !lean_is_exclusive(v_v_4218_);
if (v_isSharedCheck_4251_ == 0)
{
v___x_4241_ = v_v_4218_;
v_isShared_4242_ = v_isSharedCheck_4251_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_node_4239_);
lean_dec(v_v_4218_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4251_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
size_t v___x_4243_; size_t v___x_4244_; size_t v___x_4245_; size_t v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4249_; 
v___x_4243_ = ((size_t)5ULL);
v___x_4244_ = lean_usize_shift_right(v_x_4205_, v___x_4243_);
v___x_4245_ = ((size_t)1ULL);
v___x_4246_ = lean_usize_add(v_x_4206_, v___x_4245_);
v___x_4247_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_node_4239_, v___x_4244_, v___x_4246_, v_x_4207_, v_x_4208_);
if (v_isShared_4242_ == 0)
{
lean_ctor_set(v___x_4241_, 0, v___x_4247_);
v___x_4249_ = v___x_4241_;
goto v_reusejp_4248_;
}
else
{
lean_object* v_reuseFailAlloc_4250_; 
v_reuseFailAlloc_4250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4250_, 0, v___x_4247_);
v___x_4249_ = v_reuseFailAlloc_4250_;
goto v_reusejp_4248_;
}
v_reusejp_4248_:
{
v___y_4222_ = v___x_4249_;
goto v___jp_4221_;
}
}
}
default: 
{
lean_object* v___x_4252_; 
v___x_4252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4252_, 0, v_x_4207_);
lean_ctor_set(v___x_4252_, 1, v_x_4208_);
v___y_4222_ = v___x_4252_;
goto v___jp_4221_;
}
}
v___jp_4221_:
{
lean_object* v___x_4223_; lean_object* v___x_4225_; 
v___x_4223_ = lean_array_fset(v_xs_x27_4220_, v_j_4212_, v___y_4222_);
lean_dec(v_j_4212_);
if (v_isShared_4217_ == 0)
{
lean_ctor_set(v___x_4216_, 0, v___x_4223_);
v___x_4225_ = v___x_4216_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4226_; 
v_reuseFailAlloc_4226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4226_, 0, v___x_4223_);
v___x_4225_ = v_reuseFailAlloc_4226_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
return v___x_4225_;
}
}
}
}
}
else
{
lean_object* v_ks_4255_; lean_object* v_vs_4256_; lean_object* v___x_4258_; uint8_t v_isShared_4259_; uint8_t v_isSharedCheck_4274_; 
v_ks_4255_ = lean_ctor_get(v_x_4204_, 0);
v_vs_4256_ = lean_ctor_get(v_x_4204_, 1);
v_isSharedCheck_4274_ = !lean_is_exclusive(v_x_4204_);
if (v_isSharedCheck_4274_ == 0)
{
v___x_4258_ = v_x_4204_;
v_isShared_4259_ = v_isSharedCheck_4274_;
goto v_resetjp_4257_;
}
else
{
lean_inc(v_vs_4256_);
lean_inc(v_ks_4255_);
lean_dec(v_x_4204_);
v___x_4258_ = lean_box(0);
v_isShared_4259_ = v_isSharedCheck_4274_;
goto v_resetjp_4257_;
}
v_resetjp_4257_:
{
lean_object* v___x_4261_; 
if (v_isShared_4259_ == 0)
{
v___x_4261_ = v___x_4258_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v_ks_4255_);
lean_ctor_set(v_reuseFailAlloc_4273_, 1, v_vs_4256_);
v___x_4261_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
lean_object* v_newNode_4262_; size_t v___x_4263_; uint8_t v___x_4264_; 
v_newNode_4262_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(v___x_4261_, v_x_4207_, v_x_4208_);
v___x_4263_ = ((size_t)7ULL);
v___x_4264_ = lean_usize_dec_le(v___x_4263_, v_x_4206_);
if (v___x_4264_ == 0)
{
lean_object* v___x_4265_; lean_object* v___x_4266_; uint8_t v___x_4267_; 
v___x_4265_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_4262_);
v___x_4266_ = lean_unsigned_to_nat(4u);
v___x_4267_ = lean_nat_dec_lt(v___x_4265_, v___x_4266_);
lean_dec(v___x_4265_);
if (v___x_4267_ == 0)
{
lean_object* v_ks_4268_; lean_object* v_vs_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; 
v_ks_4268_ = lean_ctor_get(v_newNode_4262_, 0);
lean_inc_ref(v_ks_4268_);
v_vs_4269_ = lean_ctor_get(v_newNode_4262_, 1);
lean_inc_ref(v_vs_4269_);
lean_dec_ref(v_newNode_4262_);
v___x_4270_ = lean_unsigned_to_nat(0u);
v___x_4271_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_4272_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_x_4206_, v_ks_4268_, v_vs_4269_, v___x_4270_, v___x_4271_);
lean_dec_ref(v_vs_4269_);
lean_dec_ref(v_ks_4268_);
return v___x_4272_;
}
else
{
return v_newNode_4262_;
}
}
else
{
return v_newNode_4262_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(size_t v_depth_4275_, lean_object* v_keys_4276_, lean_object* v_vals_4277_, lean_object* v_i_4278_, lean_object* v_entries_4279_){
_start:
{
lean_object* v___x_4280_; uint8_t v___x_4281_; 
v___x_4280_ = lean_array_get_size(v_keys_4276_);
v___x_4281_ = lean_nat_dec_lt(v_i_4278_, v___x_4280_);
if (v___x_4281_ == 0)
{
lean_dec(v_i_4278_);
return v_entries_4279_;
}
else
{
lean_object* v_k_4282_; lean_object* v_v_4283_; uint64_t v___x_4284_; size_t v_h_4285_; size_t v___x_4286_; lean_object* v___x_4287_; size_t v___x_4288_; size_t v___x_4289_; size_t v___x_4290_; size_t v_h_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; 
v_k_4282_ = lean_array_fget_borrowed(v_keys_4276_, v_i_4278_);
v_v_4283_ = lean_array_fget_borrowed(v_vals_4277_, v_i_4278_);
v___x_4284_ = l_Lean_instHashableMVarId_hash(v_k_4282_);
v_h_4285_ = lean_uint64_to_usize(v___x_4284_);
v___x_4286_ = ((size_t)5ULL);
v___x_4287_ = lean_unsigned_to_nat(1u);
v___x_4288_ = ((size_t)1ULL);
v___x_4289_ = lean_usize_sub(v_depth_4275_, v___x_4288_);
v___x_4290_ = lean_usize_mul(v___x_4286_, v___x_4289_);
v_h_4291_ = lean_usize_shift_right(v_h_4285_, v___x_4290_);
v___x_4292_ = lean_nat_add(v_i_4278_, v___x_4287_);
lean_dec(v_i_4278_);
lean_inc(v_v_4283_);
lean_inc(v_k_4282_);
v___x_4293_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_entries_4279_, v_h_4291_, v_depth_4275_, v_k_4282_, v_v_4283_);
v_i_4278_ = v___x_4292_;
v_entries_4279_ = v___x_4293_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_depth_4295_, lean_object* v_keys_4296_, lean_object* v_vals_4297_, lean_object* v_i_4298_, lean_object* v_entries_4299_){
_start:
{
size_t v_depth_boxed_4300_; lean_object* v_res_4301_; 
v_depth_boxed_4300_ = lean_unbox_usize(v_depth_4295_);
lean_dec(v_depth_4295_);
v_res_4301_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_boxed_4300_, v_keys_4296_, v_vals_4297_, v_i_4298_, v_entries_4299_);
lean_dec_ref(v_vals_4297_);
lean_dec_ref(v_keys_4296_);
return v_res_4301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_4302_, lean_object* v_x_4303_, lean_object* v_x_4304_, lean_object* v_x_4305_, lean_object* v_x_4306_){
_start:
{
size_t v_x_4140__boxed_4307_; size_t v_x_4141__boxed_4308_; lean_object* v_res_4309_; 
v_x_4140__boxed_4307_ = lean_unbox_usize(v_x_4303_);
lean_dec(v_x_4303_);
v_x_4141__boxed_4308_ = lean_unbox_usize(v_x_4304_);
lean_dec(v_x_4304_);
v_res_4309_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4302_, v_x_4140__boxed_4307_, v_x_4141__boxed_4308_, v_x_4305_, v_x_4306_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(lean_object* v_x_4310_, lean_object* v_x_4311_, lean_object* v_x_4312_){
_start:
{
uint64_t v___x_4313_; size_t v___x_4314_; size_t v___x_4315_; lean_object* v___x_4316_; 
v___x_4313_ = l_Lean_instHashableMVarId_hash(v_x_4311_);
v___x_4314_ = lean_uint64_to_usize(v___x_4313_);
v___x_4315_ = ((size_t)1ULL);
v___x_4316_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4310_, v___x_4314_, v___x_4315_, v_x_4311_, v_x_4312_);
return v___x_4316_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(lean_object* v_mvarId_4317_, lean_object* v_val_4318_, lean_object* v___y_4319_){
_start:
{
lean_object* v___x_4321_; lean_object* v_mctx_4322_; lean_object* v_cache_4323_; lean_object* v_zetaDeltaFVarIds_4324_; lean_object* v_postponed_4325_; lean_object* v_diag_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4355_; 
v___x_4321_ = lean_st_ref_take(v___y_4319_);
v_mctx_4322_ = lean_ctor_get(v___x_4321_, 0);
v_cache_4323_ = lean_ctor_get(v___x_4321_, 1);
v_zetaDeltaFVarIds_4324_ = lean_ctor_get(v___x_4321_, 2);
v_postponed_4325_ = lean_ctor_get(v___x_4321_, 3);
v_diag_4326_ = lean_ctor_get(v___x_4321_, 4);
v_isSharedCheck_4355_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4355_ == 0)
{
v___x_4328_ = v___x_4321_;
v_isShared_4329_ = v_isSharedCheck_4355_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_diag_4326_);
lean_inc(v_postponed_4325_);
lean_inc(v_zetaDeltaFVarIds_4324_);
lean_inc(v_cache_4323_);
lean_inc(v_mctx_4322_);
lean_dec(v___x_4321_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4355_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v_depth_4330_; lean_object* v_levelAssignDepth_4331_; lean_object* v_lmvarCounter_4332_; lean_object* v_mvarCounter_4333_; lean_object* v_lDecls_4334_; lean_object* v_decls_4335_; lean_object* v_userNames_4336_; lean_object* v_lAssignment_4337_; lean_object* v_eAssignment_4338_; lean_object* v_dAssignment_4339_; lean_object* v_instanceTypedMVars_4340_; lean_object* v___x_4342_; uint8_t v_isShared_4343_; uint8_t v_isSharedCheck_4354_; 
v_depth_4330_ = lean_ctor_get(v_mctx_4322_, 0);
v_levelAssignDepth_4331_ = lean_ctor_get(v_mctx_4322_, 1);
v_lmvarCounter_4332_ = lean_ctor_get(v_mctx_4322_, 2);
v_mvarCounter_4333_ = lean_ctor_get(v_mctx_4322_, 3);
v_lDecls_4334_ = lean_ctor_get(v_mctx_4322_, 4);
v_decls_4335_ = lean_ctor_get(v_mctx_4322_, 5);
v_userNames_4336_ = lean_ctor_get(v_mctx_4322_, 6);
v_lAssignment_4337_ = lean_ctor_get(v_mctx_4322_, 7);
v_eAssignment_4338_ = lean_ctor_get(v_mctx_4322_, 8);
v_dAssignment_4339_ = lean_ctor_get(v_mctx_4322_, 9);
v_instanceTypedMVars_4340_ = lean_ctor_get(v_mctx_4322_, 10);
v_isSharedCheck_4354_ = !lean_is_exclusive(v_mctx_4322_);
if (v_isSharedCheck_4354_ == 0)
{
v___x_4342_ = v_mctx_4322_;
v_isShared_4343_ = v_isSharedCheck_4354_;
goto v_resetjp_4341_;
}
else
{
lean_inc(v_instanceTypedMVars_4340_);
lean_inc(v_dAssignment_4339_);
lean_inc(v_eAssignment_4338_);
lean_inc(v_lAssignment_4337_);
lean_inc(v_userNames_4336_);
lean_inc(v_decls_4335_);
lean_inc(v_lDecls_4334_);
lean_inc(v_mvarCounter_4333_);
lean_inc(v_lmvarCounter_4332_);
lean_inc(v_levelAssignDepth_4331_);
lean_inc(v_depth_4330_);
lean_dec(v_mctx_4322_);
v___x_4342_ = lean_box(0);
v_isShared_4343_ = v_isSharedCheck_4354_;
goto v_resetjp_4341_;
}
v_resetjp_4341_:
{
lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4347_; 
v___x_4344_ = lean_box(0);
v___x_4345_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(v_eAssignment_4338_, v_mvarId_4317_, v_val_4318_);
if (v_isShared_4343_ == 0)
{
lean_ctor_set(v___x_4342_, 8, v___x_4345_);
v___x_4347_ = v___x_4342_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v_depth_4330_);
lean_ctor_set(v_reuseFailAlloc_4353_, 1, v_levelAssignDepth_4331_);
lean_ctor_set(v_reuseFailAlloc_4353_, 2, v_lmvarCounter_4332_);
lean_ctor_set(v_reuseFailAlloc_4353_, 3, v_mvarCounter_4333_);
lean_ctor_set(v_reuseFailAlloc_4353_, 4, v_lDecls_4334_);
lean_ctor_set(v_reuseFailAlloc_4353_, 5, v_decls_4335_);
lean_ctor_set(v_reuseFailAlloc_4353_, 6, v_userNames_4336_);
lean_ctor_set(v_reuseFailAlloc_4353_, 7, v_lAssignment_4337_);
lean_ctor_set(v_reuseFailAlloc_4353_, 8, v___x_4345_);
lean_ctor_set(v_reuseFailAlloc_4353_, 9, v_dAssignment_4339_);
lean_ctor_set(v_reuseFailAlloc_4353_, 10, v_instanceTypedMVars_4340_);
v___x_4347_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
lean_object* v___x_4349_; 
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 0, v___x_4347_);
v___x_4349_ = v___x_4328_;
goto v_reusejp_4348_;
}
else
{
lean_object* v_reuseFailAlloc_4352_; 
v_reuseFailAlloc_4352_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4352_, 0, v___x_4347_);
lean_ctor_set(v_reuseFailAlloc_4352_, 1, v_cache_4323_);
lean_ctor_set(v_reuseFailAlloc_4352_, 2, v_zetaDeltaFVarIds_4324_);
lean_ctor_set(v_reuseFailAlloc_4352_, 3, v_postponed_4325_);
lean_ctor_set(v_reuseFailAlloc_4352_, 4, v_diag_4326_);
v___x_4349_ = v_reuseFailAlloc_4352_;
goto v_reusejp_4348_;
}
v_reusejp_4348_:
{
lean_object* v___x_4350_; lean_object* v___x_4351_; 
v___x_4350_ = lean_st_ref_put(v___y_4319_, v___x_4349_);
v___x_4351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4351_, 0, v___x_4344_);
return v___x_4351_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg___boxed(lean_object* v_mvarId_4356_, lean_object* v_val_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_){
_start:
{
lean_object* v_res_4360_; 
v_res_4360_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mvarId_4356_, v_val_4357_, v___y_4358_);
lean_dec(v___y_4358_);
return v_res_4360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0(lean_object* v_mv_u2081_4365_, lean_object* v_mv_u2082_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_){
_start:
{
lean_object* v___x_4375_; 
lean_inc(v_mv_u2081_4365_);
v___x_4375_ = l_Lean_MVarId_getDecl(v_mv_u2081_4365_, v___y_4367_, v___y_4368_, v___y_4369_, v___y_4370_);
if (lean_obj_tag(v___x_4375_) == 0)
{
lean_object* v_a_4376_; lean_object* v___x_4377_; 
v_a_4376_ = lean_ctor_get(v___x_4375_, 0);
lean_inc(v_a_4376_);
lean_dec_ref_known(v___x_4375_, 1);
lean_inc(v_mv_u2082_4366_);
v___x_4377_ = l_Lean_MVarId_getDecl(v_mv_u2082_4366_, v___y_4367_, v___y_4368_, v___y_4369_, v___y_4370_);
if (lean_obj_tag(v___x_4377_) == 0)
{
lean_object* v_a_4378_; lean_object* v_lctx_4379_; lean_object* v_type_4380_; lean_object* v_lctx_4381_; lean_object* v_type_4382_; uint8_t v___x_4383_; 
v_a_4378_ = lean_ctor_get(v___x_4377_, 0);
lean_inc(v_a_4378_);
lean_dec_ref_known(v___x_4377_, 1);
v_lctx_4379_ = lean_ctor_get(v_a_4376_, 1);
lean_inc_ref(v_lctx_4379_);
v_type_4380_ = lean_ctor_get(v_a_4376_, 2);
lean_inc_ref(v_type_4380_);
lean_dec(v_a_4376_);
v_lctx_4381_ = lean_ctor_get(v_a_4378_, 1);
lean_inc_ref(v_lctx_4381_);
v_type_4382_ = lean_ctor_get(v_a_4378_, 2);
lean_inc_ref(v_type_4382_);
lean_dec(v_a_4378_);
v___x_4383_ = lean_expr_eqv(v_type_4380_, v_type_4382_);
lean_dec_ref(v_type_4382_);
lean_dec_ref(v_type_4380_);
if (v___x_4383_ == 0)
{
lean_dec_ref(v_lctx_4381_);
lean_dec_ref(v_lctx_4379_);
lean_dec(v_mv_u2082_4366_);
lean_dec(v_mv_u2081_4365_);
goto v___jp_4372_;
}
else
{
lean_object* v___x_4384_; uint8_t v___x_4385_; 
v___x_4384_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0));
v___x_4385_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_4379_, v_lctx_4381_, v___x_4384_);
if (v___x_4385_ == 0)
{
uint8_t v___x_4386_; 
v___x_4386_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_4381_, v_lctx_4379_, v___x_4384_);
lean_dec_ref(v_lctx_4379_);
lean_dec_ref(v_lctx_4381_);
if (v___x_4386_ == 0)
{
lean_dec(v_mv_u2082_4366_);
lean_dec(v_mv_u2081_4365_);
goto v___jp_4372_;
}
else
{
lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4390_; uint8_t v_isShared_4391_; uint8_t v_isSharedCheck_4398_; 
v___x_4387_ = l_Lean_Expr_mvar___override(v_mv_u2082_4366_);
v___x_4388_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mv_u2081_4365_, v___x_4387_, v___y_4368_);
v_isSharedCheck_4398_ = !lean_is_exclusive(v___x_4388_);
if (v_isSharedCheck_4398_ == 0)
{
lean_object* v_unused_4399_; 
v_unused_4399_ = lean_ctor_get(v___x_4388_, 0);
lean_dec(v_unused_4399_);
v___x_4390_ = v___x_4388_;
v_isShared_4391_ = v_isSharedCheck_4398_;
goto v_resetjp_4389_;
}
else
{
lean_dec(v___x_4388_);
v___x_4390_ = lean_box(0);
v_isShared_4391_ = v_isSharedCheck_4398_;
goto v_resetjp_4389_;
}
v_resetjp_4389_:
{
lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4396_; 
v___x_4392_ = lean_box(v___x_4385_);
v___x_4393_ = lean_box(v___x_4383_);
v___x_4394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4394_, 0, v___x_4392_);
lean_ctor_set(v___x_4394_, 1, v___x_4393_);
if (v_isShared_4391_ == 0)
{
lean_ctor_set(v___x_4390_, 0, v___x_4394_);
v___x_4396_ = v___x_4390_;
goto v_reusejp_4395_;
}
else
{
lean_object* v_reuseFailAlloc_4397_; 
v_reuseFailAlloc_4397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4397_, 0, v___x_4394_);
v___x_4396_ = v_reuseFailAlloc_4397_;
goto v_reusejp_4395_;
}
v_reusejp_4395_:
{
return v___x_4396_;
}
}
}
}
else
{
lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4412_; 
lean_dec_ref(v_lctx_4381_);
lean_dec_ref(v_lctx_4379_);
v___x_4400_ = l_Lean_Expr_mvar___override(v_mv_u2081_4365_);
v___x_4401_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mv_u2082_4366_, v___x_4400_, v___y_4368_);
v_isSharedCheck_4412_ = !lean_is_exclusive(v___x_4401_);
if (v_isSharedCheck_4412_ == 0)
{
lean_object* v_unused_4413_; 
v_unused_4413_ = lean_ctor_get(v___x_4401_, 0);
lean_dec(v_unused_4413_);
v___x_4403_ = v___x_4401_;
v_isShared_4404_ = v_isSharedCheck_4412_;
goto v_resetjp_4402_;
}
else
{
lean_dec(v___x_4401_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4412_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
uint8_t v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4410_; 
v___x_4405_ = 0;
v___x_4406_ = lean_box(v___x_4383_);
v___x_4407_ = lean_box(v___x_4405_);
v___x_4408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4408_, 0, v___x_4406_);
lean_ctor_set(v___x_4408_, 1, v___x_4407_);
if (v_isShared_4404_ == 0)
{
lean_ctor_set(v___x_4403_, 0, v___x_4408_);
v___x_4410_ = v___x_4403_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4411_; 
v_reuseFailAlloc_4411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4411_, 0, v___x_4408_);
v___x_4410_ = v_reuseFailAlloc_4411_;
goto v_reusejp_4409_;
}
v_reusejp_4409_:
{
return v___x_4410_;
}
}
}
}
}
else
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4421_; 
lean_dec(v_a_4376_);
lean_dec(v_mv_u2082_4366_);
lean_dec(v_mv_u2081_4365_);
v_a_4414_ = lean_ctor_get(v___x_4377_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4377_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4416_ = v___x_4377_;
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4377_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v___x_4419_; 
if (v_isShared_4417_ == 0)
{
v___x_4419_ = v___x_4416_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v_a_4414_);
v___x_4419_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
return v___x_4419_;
}
}
}
}
else
{
lean_object* v_a_4422_; lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4429_; 
lean_dec(v_mv_u2082_4366_);
lean_dec(v_mv_u2081_4365_);
v_a_4422_ = lean_ctor_get(v___x_4375_, 0);
v_isSharedCheck_4429_ = !lean_is_exclusive(v___x_4375_);
if (v_isSharedCheck_4429_ == 0)
{
v___x_4424_ = v___x_4375_;
v_isShared_4425_ = v_isSharedCheck_4429_;
goto v_resetjp_4423_;
}
else
{
lean_inc(v_a_4422_);
lean_dec(v___x_4375_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4429_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
lean_object* v___x_4427_; 
if (v_isShared_4425_ == 0)
{
v___x_4427_ = v___x_4424_;
goto v_reusejp_4426_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v_a_4422_);
v___x_4427_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4426_;
}
v_reusejp_4426_:
{
return v___x_4427_;
}
}
}
v___jp_4372_:
{
lean_object* v___x_4373_; lean_object* v___x_4374_; 
v___x_4373_ = ((lean_object*)(l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0));
v___x_4374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4373_);
return v___x_4374_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___boxed(lean_object* v_mv_u2081_4430_, lean_object* v_mv_u2082_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_){
_start:
{
lean_object* v_res_4437_; 
v_res_4437_ = l_Lean_Elab_WF_assignSubsumed___lam__0(v_mv_u2081_4430_, v_mv_u2082_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
lean_dec(v___y_4435_);
lean_dec_ref(v___y_4434_);
lean_dec(v___y_4433_);
lean_dec_ref(v___y_4432_);
return v_res_4437_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(lean_object* v___x_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_){
_start:
{
lean_object* v___x_4444_; 
v___x_4444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4444_, 0, v___x_4438_);
return v___x_4444_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed(lean_object* v___x_4445_, lean_object* v___y_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_){
_start:
{
lean_object* v_res_4451_; 
v_res_4451_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(v___x_4445_, v___y_4446_, v___y_4447_, v___y_4448_, v___y_4449_);
lean_dec(v___y_4449_);
lean_dec_ref(v___y_4448_);
lean_dec(v___y_4447_);
lean_dec_ref(v___y_4446_);
return v_res_4451_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(lean_object* v_f_4452_, lean_object* v___x_4453_, lean_object* v___x_4454_, lean_object* v___x_4455_, lean_object* v_a_4456_, uint8_t v___x_4457_, lean_object* v_snd_4458_, lean_object* v_fst_4459_, lean_object* v_next_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_){
_start:
{
lean_object* v___x_4466_; 
v___x_4466_ = lean_apply_7(v_f_4452_, v___x_4453_, v___x_4454_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_, lean_box(0));
if (lean_obj_tag(v___x_4466_) == 0)
{
lean_object* v_a_4467_; lean_object* v___x_4469_; uint8_t v_isShared_4470_; uint8_t v_isSharedCheck_4502_; 
v_a_4467_ = lean_ctor_get(v___x_4466_, 0);
v_isSharedCheck_4502_ = !lean_is_exclusive(v___x_4466_);
if (v_isSharedCheck_4502_ == 0)
{
v___x_4469_ = v___x_4466_;
v_isShared_4470_ = v_isSharedCheck_4502_;
goto v_resetjp_4468_;
}
else
{
lean_inc(v_a_4467_);
lean_dec(v___x_4466_);
v___x_4469_ = lean_box(0);
v_isShared_4470_ = v_isSharedCheck_4502_;
goto v_resetjp_4468_;
}
v_resetjp_4468_:
{
lean_object* v_fst_4471_; lean_object* v_snd_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4501_; 
v_fst_4471_ = lean_ctor_get(v_a_4467_, 0);
v_snd_4472_ = lean_ctor_get(v_a_4467_, 1);
v_isSharedCheck_4501_ = !lean_is_exclusive(v_a_4467_);
if (v_isSharedCheck_4501_ == 0)
{
v___x_4474_ = v_a_4467_;
v_isShared_4475_ = v_isSharedCheck_4501_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_snd_4472_);
lean_inc(v_fst_4471_);
lean_dec(v_a_4467_);
v___x_4474_ = lean_box(0);
v_isShared_4475_ = v_isSharedCheck_4501_;
goto v_resetjp_4473_;
}
v_resetjp_4473_:
{
lean_object* v_removed_4477_; lean_object* v_numRemoved_4478_; uint8_t v___x_4497_; 
v___x_4497_ = lean_unbox(v_fst_4471_);
lean_dec(v_fst_4471_);
if (v___x_4497_ == 0)
{
lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; 
v___x_4498_ = lean_nat_add(v_snd_4458_, v___x_4455_);
lean_dec(v_snd_4458_);
v___x_4499_ = lean_box(v___x_4457_);
v___x_4500_ = lean_array_set(v_fst_4459_, v_next_4460_, v___x_4499_);
v_removed_4477_ = v___x_4500_;
v_numRemoved_4478_ = v___x_4498_;
goto v___jp_4476_;
}
else
{
v_removed_4477_ = v_fst_4459_;
v_numRemoved_4478_ = v_snd_4458_;
goto v___jp_4476_;
}
v___jp_4476_:
{
uint8_t v___x_4479_; 
v___x_4479_ = lean_unbox(v_snd_4472_);
lean_dec(v_snd_4472_);
if (v___x_4479_ == 0)
{
lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4484_; 
v___x_4480_ = lean_nat_add(v_numRemoved_4478_, v___x_4455_);
lean_dec(v_numRemoved_4478_);
v___x_4481_ = lean_box(v___x_4457_);
v___x_4482_ = lean_array_set(v_removed_4477_, v_a_4456_, v___x_4481_);
if (v_isShared_4475_ == 0)
{
lean_ctor_set(v___x_4474_, 1, v___x_4480_);
lean_ctor_set(v___x_4474_, 0, v___x_4482_);
v___x_4484_ = v___x_4474_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4489_; 
v_reuseFailAlloc_4489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4489_, 0, v___x_4482_);
lean_ctor_set(v_reuseFailAlloc_4489_, 1, v___x_4480_);
v___x_4484_ = v_reuseFailAlloc_4489_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
lean_object* v___x_4485_; lean_object* v___x_4487_; 
v___x_4485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4485_, 0, v___x_4484_);
if (v_isShared_4470_ == 0)
{
lean_ctor_set(v___x_4469_, 0, v___x_4485_);
v___x_4487_ = v___x_4469_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v___x_4485_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
else
{
lean_object* v___x_4491_; 
if (v_isShared_4475_ == 0)
{
lean_ctor_set(v___x_4474_, 1, v_numRemoved_4478_);
lean_ctor_set(v___x_4474_, 0, v_removed_4477_);
v___x_4491_ = v___x_4474_;
goto v_reusejp_4490_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v_removed_4477_);
lean_ctor_set(v_reuseFailAlloc_4496_, 1, v_numRemoved_4478_);
v___x_4491_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4490_;
}
v_reusejp_4490_:
{
lean_object* v___x_4492_; lean_object* v___x_4494_; 
v___x_4492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4492_, 0, v___x_4491_);
if (v_isShared_4470_ == 0)
{
lean_ctor_set(v___x_4469_, 0, v___x_4492_);
v___x_4494_ = v___x_4469_;
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
}
}
}
}
else
{
lean_object* v_a_4503_; lean_object* v___x_4505_; uint8_t v_isShared_4506_; uint8_t v_isSharedCheck_4510_; 
lean_dec(v_fst_4459_);
lean_dec(v_snd_4458_);
v_a_4503_ = lean_ctor_get(v___x_4466_, 0);
v_isSharedCheck_4510_ = !lean_is_exclusive(v___x_4466_);
if (v_isSharedCheck_4510_ == 0)
{
v___x_4505_ = v___x_4466_;
v_isShared_4506_ = v_isSharedCheck_4510_;
goto v_resetjp_4504_;
}
else
{
lean_inc(v_a_4503_);
lean_dec(v___x_4466_);
v___x_4505_ = lean_box(0);
v_isShared_4506_ = v_isSharedCheck_4510_;
goto v_resetjp_4504_;
}
v_resetjp_4504_:
{
lean_object* v___x_4508_; 
if (v_isShared_4506_ == 0)
{
v___x_4508_ = v___x_4505_;
goto v_reusejp_4507_;
}
else
{
lean_object* v_reuseFailAlloc_4509_; 
v_reuseFailAlloc_4509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4509_, 0, v_a_4503_);
v___x_4508_ = v_reuseFailAlloc_4509_;
goto v_reusejp_4507_;
}
v_reusejp_4507_:
{
return v___x_4508_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_f_4511_, lean_object* v___x_4512_, lean_object* v___x_4513_, lean_object* v___x_4514_, lean_object* v_a_4515_, lean_object* v___x_4516_, lean_object* v_snd_4517_, lean_object* v_fst_4518_, lean_object* v_next_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_){
_start:
{
uint8_t v___x_4513__boxed_4525_; lean_object* v_res_4526_; 
v___x_4513__boxed_4525_ = lean_unbox(v___x_4516_);
v_res_4526_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(v_f_4511_, v___x_4512_, v___x_4513_, v___x_4514_, v_a_4515_, v___x_4513__boxed_4525_, v_snd_4517_, v_fst_4518_, v_next_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_);
lean_dec(v_next_4519_);
lean_dec(v_a_4515_);
lean_dec(v___x_4514_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(lean_object* v_upperBound_4527_, lean_object* v_a_4528_, lean_object* v_next_4529_, lean_object* v_f_4530_, lean_object* v_a_4531_, lean_object* v_b_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_){
_start:
{
uint8_t v___x_4538_; 
v___x_4538_ = lean_nat_dec_lt(v_a_4531_, v_upperBound_4527_);
if (v___x_4538_ == 0)
{
lean_object* v___x_4539_; 
lean_dec(v_a_4531_);
lean_dec_ref(v_f_4530_);
lean_dec(v_next_4529_);
v___x_4539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4539_, 0, v_b_4532_);
return v___x_4539_;
}
else
{
lean_object* v_fst_4540_; lean_object* v_snd_4541_; lean_object* v___x_4543_; uint8_t v_isShared_4544_; uint8_t v_isSharedCheck_4588_; 
v_fst_4540_ = lean_ctor_get(v_b_4532_, 0);
v_snd_4541_ = lean_ctor_get(v_b_4532_, 1);
v_isSharedCheck_4588_ = !lean_is_exclusive(v_b_4532_);
if (v_isSharedCheck_4588_ == 0)
{
v___x_4543_ = v_b_4532_;
v_isShared_4544_ = v_isSharedCheck_4588_;
goto v_resetjp_4542_;
}
else
{
lean_inc(v_snd_4541_);
lean_inc(v_fst_4540_);
lean_dec(v_b_4532_);
v___x_4543_ = lean_box(0);
v_isShared_4544_ = v_isSharedCheck_4588_;
goto v_resetjp_4542_;
}
v_resetjp_4542_:
{
lean_object* v___x_4545_; lean_object* v___y_4547_; uint8_t v___y_4570_; uint8_t v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; uint8_t v___x_4583_; 
v___x_4545_ = lean_unsigned_to_nat(1u);
v___x_4580_ = 0;
v___x_4581_ = lean_box(v___x_4580_);
v___x_4582_ = lean_array_get(v___x_4581_, v_fst_4540_, v_next_4529_);
lean_dec(v___x_4581_);
v___x_4583_ = lean_unbox(v___x_4582_);
if (v___x_4583_ == 0)
{
lean_object* v___x_4584_; lean_object* v___x_4585_; uint8_t v___x_4586_; 
lean_dec(v___x_4582_);
v___x_4584_ = lean_box(v___x_4580_);
v___x_4585_ = lean_array_get(v___x_4584_, v_fst_4540_, v_a_4531_);
lean_dec(v___x_4584_);
v___x_4586_ = lean_unbox(v___x_4585_);
lean_dec(v___x_4585_);
v___y_4570_ = v___x_4586_;
goto v___jp_4569_;
}
else
{
uint8_t v___x_4587_; 
v___x_4587_ = lean_unbox(v___x_4582_);
lean_dec(v___x_4582_);
v___y_4570_ = v___x_4587_;
goto v___jp_4569_;
}
v___jp_4546_:
{
lean_object* v___x_4548_; 
lean_inc(v___y_4536_);
lean_inc_ref(v___y_4535_);
lean_inc(v___y_4534_);
lean_inc_ref(v___y_4533_);
v___x_4548_ = lean_apply_5(v___y_4547_, v___y_4533_, v___y_4534_, v___y_4535_, v___y_4536_, lean_box(0));
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_object* v_a_4549_; lean_object* v___x_4551_; uint8_t v_isShared_4552_; uint8_t v_isSharedCheck_4560_; 
v_a_4549_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4560_ == 0)
{
v___x_4551_ = v___x_4548_;
v_isShared_4552_ = v_isSharedCheck_4560_;
goto v_resetjp_4550_;
}
else
{
lean_inc(v_a_4549_);
lean_dec(v___x_4548_);
v___x_4551_ = lean_box(0);
v_isShared_4552_ = v_isSharedCheck_4560_;
goto v_resetjp_4550_;
}
v_resetjp_4550_:
{
if (lean_obj_tag(v_a_4549_) == 0)
{
lean_object* v_a_4553_; lean_object* v___x_4555_; 
lean_dec(v_a_4531_);
lean_dec_ref(v_f_4530_);
lean_dec(v_next_4529_);
v_a_4553_ = lean_ctor_get(v_a_4549_, 0);
lean_inc(v_a_4553_);
lean_dec_ref_known(v_a_4549_, 1);
if (v_isShared_4552_ == 0)
{
lean_ctor_set(v___x_4551_, 0, v_a_4553_);
v___x_4555_ = v___x_4551_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v_a_4553_);
v___x_4555_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
return v___x_4555_;
}
}
else
{
lean_object* v_a_4557_; lean_object* v___x_4558_; 
lean_del_object(v___x_4551_);
v_a_4557_ = lean_ctor_get(v_a_4549_, 0);
lean_inc(v_a_4557_);
lean_dec_ref_known(v_a_4549_, 1);
v___x_4558_ = lean_nat_add(v_a_4531_, v___x_4545_);
lean_dec(v_a_4531_);
v_a_4531_ = v___x_4558_;
v_b_4532_ = v_a_4557_;
goto _start;
}
}
}
else
{
lean_object* v_a_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4568_; 
lean_dec(v_a_4531_);
lean_dec_ref(v_f_4530_);
lean_dec(v_next_4529_);
v_a_4561_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4568_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4568_ == 0)
{
v___x_4563_ = v___x_4548_;
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_a_4561_);
lean_dec(v___x_4548_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4566_; 
if (v_isShared_4564_ == 0)
{
v___x_4566_ = v___x_4563_;
goto v_reusejp_4565_;
}
else
{
lean_object* v_reuseFailAlloc_4567_; 
v_reuseFailAlloc_4567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4567_, 0, v_a_4561_);
v___x_4566_ = v_reuseFailAlloc_4567_;
goto v_reusejp_4565_;
}
v_reusejp_4565_:
{
return v___x_4566_;
}
}
}
}
v___jp_4569_:
{
if (v___y_4570_ == 0)
{
lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___f_4574_; 
lean_del_object(v___x_4543_);
v___x_4571_ = lean_array_fget_borrowed(v_a_4528_, v_next_4529_);
v___x_4572_ = lean_array_fget_borrowed(v_a_4528_, v_a_4531_);
v___x_4573_ = lean_box(v___x_4538_);
lean_inc(v_next_4529_);
lean_inc(v_a_4531_);
lean_inc(v___x_4572_);
lean_inc(v___x_4571_);
lean_inc_ref(v_f_4530_);
v___f_4574_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_4574_, 0, v_f_4530_);
lean_closure_set(v___f_4574_, 1, v___x_4571_);
lean_closure_set(v___f_4574_, 2, v___x_4572_);
lean_closure_set(v___f_4574_, 3, v___x_4545_);
lean_closure_set(v___f_4574_, 4, v_a_4531_);
lean_closure_set(v___f_4574_, 5, v___x_4573_);
lean_closure_set(v___f_4574_, 6, v_snd_4541_);
lean_closure_set(v___f_4574_, 7, v_fst_4540_);
lean_closure_set(v___f_4574_, 8, v_next_4529_);
v___y_4547_ = v___f_4574_;
goto v___jp_4546_;
}
else
{
lean_object* v___x_4576_; 
if (v_isShared_4544_ == 0)
{
v___x_4576_ = v___x_4543_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4579_; 
v_reuseFailAlloc_4579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4579_, 0, v_fst_4540_);
lean_ctor_set(v_reuseFailAlloc_4579_, 1, v_snd_4541_);
v___x_4576_ = v_reuseFailAlloc_4579_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
lean_object* v___x_4577_; lean_object* v___f_4578_; 
v___x_4577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4576_);
v___f_4578_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4578_, 0, v___x_4577_);
v___y_4547_ = v___f_4578_;
goto v___jp_4546_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___boxed(lean_object* v_upperBound_4589_, lean_object* v_a_4590_, lean_object* v_next_4591_, lean_object* v_f_4592_, lean_object* v_a_4593_, lean_object* v_b_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_){
_start:
{
lean_object* v_res_4600_; 
v_res_4600_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v_upperBound_4589_, v_a_4590_, v_next_4591_, v_f_4592_, v_a_4593_, v_b_4594_, v___y_4595_, v___y_4596_, v___y_4597_, v___y_4598_);
lean_dec(v___y_4598_);
lean_dec_ref(v___y_4597_);
lean_dec(v___y_4596_);
lean_dec_ref(v___y_4595_);
lean_dec_ref(v_a_4590_);
lean_dec(v_upperBound_4589_);
return v_res_4600_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(lean_object* v_upperBound_4601_, lean_object* v___x_4602_, lean_object* v_a_4603_, lean_object* v_f_4604_, lean_object* v_a_4605_, lean_object* v_b_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
uint8_t v___x_4612_; 
v___x_4612_ = lean_nat_dec_lt(v_a_4605_, v_upperBound_4601_);
if (v___x_4612_ == 0)
{
lean_object* v___x_4613_; 
lean_dec(v_a_4605_);
lean_dec_ref(v_f_4604_);
v___x_4613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4613_, 0, v_b_4606_);
return v___x_4613_;
}
else
{
lean_object* v_fst_4614_; lean_object* v_snd_4615_; lean_object* v___x_4617_; uint8_t v_isShared_4618_; uint8_t v_isSharedCheck_4636_; 
v_fst_4614_ = lean_ctor_get(v_b_4606_, 0);
v_snd_4615_ = lean_ctor_get(v_b_4606_, 1);
v_isSharedCheck_4636_ = !lean_is_exclusive(v_b_4606_);
if (v_isSharedCheck_4636_ == 0)
{
v___x_4617_ = v_b_4606_;
v_isShared_4618_ = v_isSharedCheck_4636_;
goto v_resetjp_4616_;
}
else
{
lean_inc(v_snd_4615_);
lean_inc(v_fst_4614_);
lean_dec(v_b_4606_);
v___x_4617_ = lean_box(0);
v_isShared_4618_ = v_isSharedCheck_4636_;
goto v_resetjp_4616_;
}
v_resetjp_4616_:
{
lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4622_; 
v___x_4619_ = lean_unsigned_to_nat(1u);
v___x_4620_ = lean_nat_add(v_a_4605_, v___x_4619_);
if (v_isShared_4618_ == 0)
{
v___x_4622_ = v___x_4617_;
goto v_reusejp_4621_;
}
else
{
lean_object* v_reuseFailAlloc_4635_; 
v_reuseFailAlloc_4635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4635_, 0, v_fst_4614_);
lean_ctor_set(v_reuseFailAlloc_4635_, 1, v_snd_4615_);
v___x_4622_ = v_reuseFailAlloc_4635_;
goto v_reusejp_4621_;
}
v_reusejp_4621_:
{
lean_object* v___x_4623_; 
lean_inc(v___x_4620_);
lean_inc_ref(v_f_4604_);
v___x_4623_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v___x_4602_, v_a_4603_, v_a_4605_, v_f_4604_, v___x_4620_, v___x_4622_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_);
if (lean_obj_tag(v___x_4623_) == 0)
{
lean_object* v_a_4624_; lean_object* v_fst_4625_; lean_object* v_snd_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4634_; 
v_a_4624_ = lean_ctor_get(v___x_4623_, 0);
lean_inc(v_a_4624_);
lean_dec_ref_known(v___x_4623_, 1);
v_fst_4625_ = lean_ctor_get(v_a_4624_, 0);
v_snd_4626_ = lean_ctor_get(v_a_4624_, 1);
v_isSharedCheck_4634_ = !lean_is_exclusive(v_a_4624_);
if (v_isSharedCheck_4634_ == 0)
{
v___x_4628_ = v_a_4624_;
v_isShared_4629_ = v_isSharedCheck_4634_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_snd_4626_);
lean_inc(v_fst_4625_);
lean_dec(v_a_4624_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4634_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4631_; 
if (v_isShared_4629_ == 0)
{
v___x_4631_ = v___x_4628_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4633_; 
v_reuseFailAlloc_4633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4633_, 0, v_fst_4625_);
lean_ctor_set(v_reuseFailAlloc_4633_, 1, v_snd_4626_);
v___x_4631_ = v_reuseFailAlloc_4633_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
v_a_4605_ = v___x_4620_;
v_b_4606_ = v___x_4631_;
goto _start;
}
}
}
else
{
lean_dec(v___x_4620_);
lean_dec_ref(v_f_4604_);
return v___x_4623_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_4637_, lean_object* v___x_4638_, lean_object* v_a_4639_, lean_object* v_f_4640_, lean_object* v_a_4641_, lean_object* v_b_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_){
_start:
{
lean_object* v_res_4648_; 
v_res_4648_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v_upperBound_4637_, v___x_4638_, v_a_4639_, v_f_4640_, v_a_4641_, v_b_4642_, v___y_4643_, v___y_4644_, v___y_4645_, v___y_4646_);
lean_dec(v___y_4646_);
lean_dec_ref(v___y_4645_);
lean_dec(v___y_4644_);
lean_dec_ref(v___y_4643_);
lean_dec_ref(v_a_4639_);
lean_dec(v___x_4638_);
lean_dec(v_upperBound_4637_);
return v_res_4648_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(lean_object* v___x_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_){
_start:
{
lean_object* v___x_4655_; 
v___x_4655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4655_, 0, v___x_4649_);
return v___x_4655_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v___x_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v_res_4662_; 
v_res_4662_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(v___x_4656_, v___y_4657_, v___y_4658_, v___y_4659_, v___y_4660_);
lean_dec(v___y_4660_);
lean_dec_ref(v___y_4659_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
return v_res_4662_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(lean_object* v_upperBound_4663_, lean_object* v_removed_4664_, lean_object* v_a_4665_, lean_object* v_a_4666_, lean_object* v_b_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_){
_start:
{
lean_object* v___y_4674_; uint8_t v___x_4697_; 
v___x_4697_ = lean_nat_dec_lt(v_a_4666_, v_upperBound_4663_);
if (v___x_4697_ == 0)
{
lean_object* v___x_4698_; 
lean_dec(v_a_4666_);
v___x_4698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4698_, 0, v_b_4667_);
return v___x_4698_;
}
else
{
uint8_t v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; uint8_t v___x_4702_; 
v___x_4699_ = 0;
v___x_4700_ = lean_box(v___x_4699_);
v___x_4701_ = lean_array_get(v___x_4700_, v_removed_4664_, v_a_4666_);
lean_dec(v___x_4700_);
v___x_4702_ = lean_unbox(v___x_4701_);
lean_dec(v___x_4701_);
if (v___x_4702_ == 0)
{
lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___f_4706_; 
v___x_4703_ = lean_array_fget_borrowed(v_a_4665_, v_a_4666_);
lean_inc(v___x_4703_);
v___x_4704_ = lean_array_push(v_b_4667_, v___x_4703_);
v___x_4705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4705_, 0, v___x_4704_);
v___f_4706_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4706_, 0, v___x_4705_);
v___y_4674_ = v___f_4706_;
goto v___jp_4673_;
}
else
{
lean_object* v___x_4707_; lean_object* v___f_4708_; 
v___x_4707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4707_, 0, v_b_4667_);
v___f_4708_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4708_, 0, v___x_4707_);
v___y_4674_ = v___f_4708_;
goto v___jp_4673_;
}
}
v___jp_4673_:
{
lean_object* v___x_4675_; 
lean_inc(v___y_4671_);
lean_inc_ref(v___y_4670_);
lean_inc(v___y_4669_);
lean_inc_ref(v___y_4668_);
v___x_4675_ = lean_apply_5(v___y_4674_, v___y_4668_, v___y_4669_, v___y_4670_, v___y_4671_, lean_box(0));
if (lean_obj_tag(v___x_4675_) == 0)
{
lean_object* v_a_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4688_; 
v_a_4676_ = lean_ctor_get(v___x_4675_, 0);
v_isSharedCheck_4688_ = !lean_is_exclusive(v___x_4675_);
if (v_isSharedCheck_4688_ == 0)
{
v___x_4678_ = v___x_4675_;
v_isShared_4679_ = v_isSharedCheck_4688_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_a_4676_);
lean_dec(v___x_4675_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4688_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
if (lean_obj_tag(v_a_4676_) == 0)
{
lean_object* v_a_4680_; lean_object* v___x_4682_; 
lean_dec(v_a_4666_);
v_a_4680_ = lean_ctor_get(v_a_4676_, 0);
lean_inc(v_a_4680_);
lean_dec_ref_known(v_a_4676_, 1);
if (v_isShared_4679_ == 0)
{
lean_ctor_set(v___x_4678_, 0, v_a_4680_);
v___x_4682_ = v___x_4678_;
goto v_reusejp_4681_;
}
else
{
lean_object* v_reuseFailAlloc_4683_; 
v_reuseFailAlloc_4683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4683_, 0, v_a_4680_);
v___x_4682_ = v_reuseFailAlloc_4683_;
goto v_reusejp_4681_;
}
v_reusejp_4681_:
{
return v___x_4682_;
}
}
else
{
lean_object* v_a_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; 
lean_del_object(v___x_4678_);
v_a_4684_ = lean_ctor_get(v_a_4676_, 0);
lean_inc(v_a_4684_);
lean_dec_ref_known(v_a_4676_, 1);
v___x_4685_ = lean_unsigned_to_nat(1u);
v___x_4686_ = lean_nat_add(v_a_4666_, v___x_4685_);
lean_dec(v_a_4666_);
v_a_4666_ = v___x_4686_;
v_b_4667_ = v_a_4684_;
goto _start;
}
}
}
else
{
lean_object* v_a_4689_; lean_object* v___x_4691_; uint8_t v_isShared_4692_; uint8_t v_isSharedCheck_4696_; 
lean_dec(v_a_4666_);
v_a_4689_ = lean_ctor_get(v___x_4675_, 0);
v_isSharedCheck_4696_ = !lean_is_exclusive(v___x_4675_);
if (v_isSharedCheck_4696_ == 0)
{
v___x_4691_ = v___x_4675_;
v_isShared_4692_ = v_isSharedCheck_4696_;
goto v_resetjp_4690_;
}
else
{
lean_inc(v_a_4689_);
lean_dec(v___x_4675_);
v___x_4691_ = lean_box(0);
v_isShared_4692_ = v_isSharedCheck_4696_;
goto v_resetjp_4690_;
}
v_resetjp_4690_:
{
lean_object* v___x_4694_; 
if (v_isShared_4692_ == 0)
{
v___x_4694_ = v___x_4691_;
goto v_reusejp_4693_;
}
else
{
lean_object* v_reuseFailAlloc_4695_; 
v_reuseFailAlloc_4695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4695_, 0, v_a_4689_);
v___x_4694_ = v_reuseFailAlloc_4695_;
goto v_reusejp_4693_;
}
v_reusejp_4693_:
{
return v___x_4694_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___boxed(lean_object* v_upperBound_4709_, lean_object* v_removed_4710_, lean_object* v_a_4711_, lean_object* v_a_4712_, lean_object* v_b_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_){
_start:
{
lean_object* v_res_4719_; 
v_res_4719_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v_upperBound_4709_, v_removed_4710_, v_a_4711_, v_a_4712_, v_b_4713_, v___y_4714_, v___y_4715_, v___y_4716_, v___y_4717_);
lean_dec(v___y_4717_);
lean_dec_ref(v___y_4716_);
lean_dec(v___y_4715_);
lean_dec_ref(v___y_4714_);
lean_dec_ref(v_a_4711_);
lean_dec_ref(v_removed_4710_);
lean_dec(v_upperBound_4709_);
return v_res_4719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(lean_object* v_a_4720_, lean_object* v_f_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_){
_start:
{
lean_object* v___x_4727_; uint8_t v___x_4728_; lean_object* v___x_4729_; lean_object* v_removed_4730_; lean_object* v_numRemoved_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; 
v___x_4727_ = lean_array_get_size(v_a_4720_);
v___x_4728_ = 0;
v___x_4729_ = lean_box(v___x_4728_);
v_removed_4730_ = lean_mk_array(v___x_4727_, v___x_4729_);
v_numRemoved_4731_ = lean_unsigned_to_nat(0u);
v___x_4732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4732_, 0, v_removed_4730_);
lean_ctor_set(v___x_4732_, 1, v_numRemoved_4731_);
v___x_4733_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v___x_4727_, v___x_4727_, v_a_4720_, v_f_4721_, v_numRemoved_4731_, v___x_4732_, v___y_4722_, v___y_4723_, v___y_4724_, v___y_4725_);
if (lean_obj_tag(v___x_4733_) == 0)
{
lean_object* v_a_4734_; lean_object* v_fst_4735_; lean_object* v_snd_4736_; lean_object* v_a_x27_4737_; lean_object* v___x_4738_; 
v_a_4734_ = lean_ctor_get(v___x_4733_, 0);
lean_inc(v_a_4734_);
lean_dec_ref_known(v___x_4733_, 1);
v_fst_4735_ = lean_ctor_get(v_a_4734_, 0);
lean_inc(v_fst_4735_);
v_snd_4736_ = lean_ctor_get(v_a_4734_, 1);
lean_inc(v_snd_4736_);
lean_dec(v_a_4734_);
v_a_x27_4737_ = lean_mk_empty_array_with_capacity(v_snd_4736_);
lean_dec(v_snd_4736_);
v___x_4738_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v___x_4727_, v_fst_4735_, v_a_4720_, v_numRemoved_4731_, v_a_x27_4737_, v___y_4722_, v___y_4723_, v___y_4724_, v___y_4725_);
lean_dec(v_fst_4735_);
return v___x_4738_;
}
else
{
lean_object* v_a_4739_; lean_object* v___x_4741_; uint8_t v_isShared_4742_; uint8_t v_isSharedCheck_4746_; 
v_a_4739_ = lean_ctor_get(v___x_4733_, 0);
v_isSharedCheck_4746_ = !lean_is_exclusive(v___x_4733_);
if (v_isSharedCheck_4746_ == 0)
{
v___x_4741_ = v___x_4733_;
v_isShared_4742_ = v_isSharedCheck_4746_;
goto v_resetjp_4740_;
}
else
{
lean_inc(v_a_4739_);
lean_dec(v___x_4733_);
v___x_4741_ = lean_box(0);
v_isShared_4742_ = v_isSharedCheck_4746_;
goto v_resetjp_4740_;
}
v_resetjp_4740_:
{
lean_object* v___x_4744_; 
if (v_isShared_4742_ == 0)
{
v___x_4744_ = v___x_4741_;
goto v_reusejp_4743_;
}
else
{
lean_object* v_reuseFailAlloc_4745_; 
v_reuseFailAlloc_4745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4745_, 0, v_a_4739_);
v___x_4744_ = v_reuseFailAlloc_4745_;
goto v_reusejp_4743_;
}
v_reusejp_4743_:
{
return v___x_4744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg___boxed(lean_object* v_a_4747_, lean_object* v_f_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_){
_start:
{
lean_object* v_res_4754_; 
v_res_4754_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_a_4747_, v_f_4748_, v___y_4749_, v___y_4750_, v___y_4751_, v___y_4752_);
lean_dec(v___y_4752_);
lean_dec_ref(v___y_4751_);
lean_dec(v___y_4750_);
lean_dec_ref(v___y_4749_);
lean_dec_ref(v_a_4747_);
return v_res_4754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed(lean_object* v_mvars_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_){
_start:
{
lean_object* v___f_4762_; lean_object* v___x_4763_; 
v___f_4762_ = ((lean_object*)(l_Lean_Elab_WF_assignSubsumed___closed__0));
v___x_4763_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_mvars_4756_, v___f_4762_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_);
return v___x_4763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___boxed(lean_object* v_mvars_4764_, lean_object* v___y_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_){
_start:
{
lean_object* v_res_4770_; 
v_res_4770_ = l_Lean_Elab_WF_assignSubsumed(v_mvars_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
lean_dec(v___y_4768_);
lean_dec_ref(v___y_4767_);
lean_dec(v___y_4766_);
lean_dec_ref(v___y_4765_);
lean_dec_ref(v_mvars_4764_);
return v_res_4770_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(lean_object* v_mvarId_4771_, lean_object* v_val_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_){
_start:
{
lean_object* v___x_4778_; 
v___x_4778_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mvarId_4771_, v_val_4772_, v___y_4774_);
return v___x_4778_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___boxed(lean_object* v_mvarId_4779_, lean_object* v_val_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_, lean_object* v___y_4785_){
_start:
{
lean_object* v_res_4786_; 
v_res_4786_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(v_mvarId_4779_, v_val_4780_, v___y_4781_, v___y_4782_, v___y_4783_, v___y_4784_);
lean_dec(v___y_4784_);
lean_dec_ref(v___y_4783_);
lean_dec(v___y_4782_);
lean_dec_ref(v___y_4781_);
return v_res_4786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(lean_object* v_00_u03b1_4787_, lean_object* v_a_4788_, lean_object* v_f_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_){
_start:
{
lean_object* v___x_4795_; 
v___x_4795_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_a_4788_, v_f_4789_, v___y_4790_, v___y_4791_, v___y_4792_, v___y_4793_);
return v___x_4795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___boxed(lean_object* v_00_u03b1_4796_, lean_object* v_a_4797_, lean_object* v_f_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_){
_start:
{
lean_object* v_res_4804_; 
v_res_4804_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(v_00_u03b1_4796_, v_a_4797_, v_f_4798_, v___y_4799_, v___y_4800_, v___y_4801_, v___y_4802_);
lean_dec(v___y_4802_);
lean_dec_ref(v___y_4801_);
lean_dec(v___y_4800_);
lean_dec_ref(v___y_4799_);
lean_dec_ref(v_a_4797_);
return v_res_4804_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0(lean_object* v_00_u03b2_4805_, lean_object* v_x_4806_, lean_object* v_x_4807_, lean_object* v_x_4808_){
_start:
{
lean_object* v___x_4809_; 
v___x_4809_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(v_x_4806_, v_x_4807_, v_x_4808_);
return v___x_4809_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(lean_object* v_upperBound_4810_, lean_object* v_00_u03b1_4811_, lean_object* v_a_4812_, lean_object* v_next_4813_, lean_object* v_f_4814_, lean_object* v_inst_4815_, lean_object* v_R_4816_, lean_object* v_a_4817_, lean_object* v_b_4818_, lean_object* v_c_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_){
_start:
{
lean_object* v___x_4825_; 
v___x_4825_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v_upperBound_4810_, v_a_4812_, v_next_4813_, v_f_4814_, v_a_4817_, v_b_4818_, v___y_4820_, v___y_4821_, v___y_4822_, v___y_4823_);
return v___x_4825_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___boxed(lean_object* v_upperBound_4826_, lean_object* v_00_u03b1_4827_, lean_object* v_a_4828_, lean_object* v_next_4829_, lean_object* v_f_4830_, lean_object* v_inst_4831_, lean_object* v_R_4832_, lean_object* v_a_4833_, lean_object* v_b_4834_, lean_object* v_c_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_){
_start:
{
lean_object* v_res_4841_; 
v_res_4841_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(v_upperBound_4826_, v_00_u03b1_4827_, v_a_4828_, v_next_4829_, v_f_4830_, v_inst_4831_, v_R_4832_, v_a_4833_, v_b_4834_, v_c_4835_, v___y_4836_, v___y_4837_, v___y_4838_, v___y_4839_);
lean_dec(v___y_4839_);
lean_dec_ref(v___y_4838_);
lean_dec(v___y_4837_);
lean_dec_ref(v___y_4836_);
lean_dec_ref(v_a_4828_);
lean_dec(v_upperBound_4826_);
return v_res_4841_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(lean_object* v_00_u03b1_4842_, lean_object* v_upperBound_4843_, lean_object* v_removed_4844_, lean_object* v_a_4845_, lean_object* v_inst_4846_, lean_object* v_R_4847_, lean_object* v_a_4848_, lean_object* v_b_4849_, lean_object* v_c_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_){
_start:
{
lean_object* v___x_4856_; 
v___x_4856_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v_upperBound_4843_, v_removed_4844_, v_a_4845_, v_a_4848_, v_b_4849_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_);
return v___x_4856_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___boxed(lean_object* v_00_u03b1_4857_, lean_object* v_upperBound_4858_, lean_object* v_removed_4859_, lean_object* v_a_4860_, lean_object* v_inst_4861_, lean_object* v_R_4862_, lean_object* v_a_4863_, lean_object* v_b_4864_, lean_object* v_c_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_){
_start:
{
lean_object* v_res_4871_; 
v_res_4871_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(v_00_u03b1_4857_, v_upperBound_4858_, v_removed_4859_, v_a_4860_, v_inst_4861_, v_R_4862_, v_a_4863_, v_b_4864_, v_c_4865_, v___y_4866_, v___y_4867_, v___y_4868_, v___y_4869_);
lean_dec(v___y_4869_);
lean_dec_ref(v___y_4868_);
lean_dec(v___y_4867_);
lean_dec_ref(v___y_4866_);
lean_dec_ref(v_a_4860_);
lean_dec_ref(v_removed_4859_);
lean_dec(v_upperBound_4858_);
return v_res_4871_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(lean_object* v_upperBound_4872_, lean_object* v___x_4873_, lean_object* v_00_u03b1_4874_, lean_object* v_a_4875_, lean_object* v_f_4876_, lean_object* v_inst_4877_, lean_object* v_R_4878_, lean_object* v_a_4879_, lean_object* v_b_4880_, lean_object* v_c_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_, lean_object* v___y_4884_, lean_object* v___y_4885_){
_start:
{
lean_object* v___x_4887_; 
v___x_4887_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v_upperBound_4872_, v___x_4873_, v_a_4875_, v_f_4876_, v_a_4879_, v_b_4880_, v___y_4882_, v___y_4883_, v___y_4884_, v___y_4885_);
return v___x_4887_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___boxed(lean_object* v_upperBound_4888_, lean_object* v___x_4889_, lean_object* v_00_u03b1_4890_, lean_object* v_a_4891_, lean_object* v_f_4892_, lean_object* v_inst_4893_, lean_object* v_R_4894_, lean_object* v_a_4895_, lean_object* v_b_4896_, lean_object* v_c_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_, lean_object* v___y_4901_, lean_object* v___y_4902_){
_start:
{
lean_object* v_res_4903_; 
v_res_4903_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(v_upperBound_4888_, v___x_4889_, v_00_u03b1_4890_, v_a_4891_, v_f_4892_, v_inst_4893_, v_R_4894_, v_a_4895_, v_b_4896_, v_c_4897_, v___y_4898_, v___y_4899_, v___y_4900_, v___y_4901_);
lean_dec(v___y_4901_);
lean_dec_ref(v___y_4900_);
lean_dec(v___y_4899_);
lean_dec_ref(v___y_4898_);
lean_dec_ref(v_a_4891_);
lean_dec(v___x_4889_);
lean_dec(v_upperBound_4888_);
return v_res_4903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4904_, lean_object* v_x_4905_, size_t v_x_4906_, size_t v_x_4907_, lean_object* v_x_4908_, lean_object* v_x_4909_){
_start:
{
lean_object* v___x_4910_; 
v___x_4910_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4905_, v_x_4906_, v_x_4907_, v_x_4908_, v_x_4909_);
return v___x_4910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4911_, lean_object* v_x_4912_, lean_object* v_x_4913_, lean_object* v_x_4914_, lean_object* v_x_4915_, lean_object* v_x_4916_){
_start:
{
size_t v_x_5095__boxed_4917_; size_t v_x_5096__boxed_4918_; lean_object* v_res_4919_; 
v_x_5095__boxed_4917_ = lean_unbox_usize(v_x_4913_);
lean_dec(v_x_4913_);
v_x_5096__boxed_4918_ = lean_unbox_usize(v_x_4914_);
lean_dec(v_x_4914_);
v_res_4919_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(v_00_u03b2_4911_, v_x_4912_, v_x_5095__boxed_4917_, v_x_5096__boxed_4918_, v_x_4915_, v_x_4916_);
return v_res_4919_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_4920_, lean_object* v_n_4921_, lean_object* v_k_4922_, lean_object* v_v_4923_){
_start:
{
lean_object* v___x_4924_; 
v___x_4924_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(v_n_4921_, v_k_4922_, v_v_4923_);
return v___x_4924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_4925_, size_t v_depth_4926_, lean_object* v_keys_4927_, lean_object* v_vals_4928_, lean_object* v_heq_4929_, lean_object* v_i_4930_, lean_object* v_entries_4931_){
_start:
{
lean_object* v___x_4932_; 
v___x_4932_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_4926_, v_keys_4927_, v_vals_4928_, v_i_4930_, v_entries_4931_);
return v___x_4932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_4933_, lean_object* v_depth_4934_, lean_object* v_keys_4935_, lean_object* v_vals_4936_, lean_object* v_heq_4937_, lean_object* v_i_4938_, lean_object* v_entries_4939_){
_start:
{
size_t v_depth_boxed_4940_; lean_object* v_res_4941_; 
v_depth_boxed_4940_ = lean_unbox_usize(v_depth_4934_);
lean_dec(v_depth_4934_);
v_res_4941_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_4933_, v_depth_boxed_4940_, v_keys_4935_, v_vals_4936_, v_heq_4937_, v_i_4938_, v_entries_4939_);
lean_dec_ref(v_vals_4936_);
lean_dec_ref(v_keys_4935_);
return v_res_4941_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_4942_, lean_object* v_x_4943_, lean_object* v_x_4944_, lean_object* v_x_4945_, lean_object* v_x_4946_){
_start:
{
lean_object* v___x_4947_; 
v___x_4947_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_x_4943_, v_x_4944_, v_x_4945_, v_x_4946_);
return v___x_4947_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4949_; lean_object* v___x_4950_; 
v___x_4949_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0));
v___x_4950_ = l_Lean_stringToMessageData(v___x_4949_);
return v___x_4950_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4952_; lean_object* v___x_4953_; 
v___x_4952_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2));
v___x_4953_ = l_Lean_stringToMessageData(v___x_4952_);
return v___x_4953_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(lean_object* v_argsPacker_4954_, lean_object* v_as_4955_, size_t v_sz_4956_, size_t v_i_4957_, lean_object* v_b_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_){
_start:
{
lean_object* v_a_4965_; uint8_t v___x_4969_; 
v___x_4969_ = lean_usize_dec_lt(v_i_4957_, v_sz_4956_);
if (v___x_4969_ == 0)
{
lean_object* v___x_4970_; 
v___x_4970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4970_, 0, v_b_4958_);
return v___x_4970_;
}
else
{
lean_object* v_a_4971_; lean_object* v___x_4972_; 
v_a_4971_ = lean_array_uget_borrowed(v_as_4955_, v_i_4957_);
lean_inc(v_a_4971_);
v___x_4972_ = l_Lean_MVarId_getType(v_a_4971_, v___y_4959_, v___y_4960_, v___y_4961_, v___y_4962_);
if (lean_obj_tag(v___x_4972_) == 0)
{
lean_object* v_a_4973_; lean_object* v___y_4975_; lean_object* v___y_4976_; lean_object* v___y_4977_; lean_object* v___y_4978_; 
v_a_4973_ = lean_ctor_get(v___x_4972_, 0);
lean_inc(v_a_4973_);
lean_dec_ref_known(v___x_4972_, 1);
if (lean_obj_tag(v_a_4973_) == 10)
{
lean_object* v_expr_4991_; 
v_expr_4991_ = lean_ctor_get(v_a_4973_, 1);
if (lean_obj_tag(v_expr_4991_) == 5)
{
lean_object* v_arg_4992_; lean_object* v___x_4993_; 
lean_inc_ref(v_expr_4991_);
lean_dec_ref_known(v_a_4973_, 2);
v_arg_4992_ = lean_ctor_get(v_expr_4991_, 1);
lean_inc_ref_n(v_arg_4992_, 2);
lean_dec_ref_known(v_expr_4991_, 2);
v___x_4993_ = l_Lean_Meta_ArgsPacker_unpack(v_argsPacker_4954_, v_arg_4992_);
if (lean_obj_tag(v___x_4993_) == 1)
{
lean_object* v_val_4994_; lean_object* v_fst_4995_; lean_object* v___x_4996_; uint8_t v___x_4997_; 
lean_dec_ref(v_arg_4992_);
v_val_4994_ = lean_ctor_get(v___x_4993_, 0);
lean_inc(v_val_4994_);
lean_dec_ref_known(v___x_4993_, 1);
v_fst_4995_ = lean_ctor_get(v_val_4994_, 0);
lean_inc(v_fst_4995_);
lean_dec(v_val_4994_);
v___x_4996_ = lean_array_get_size(v_b_4958_);
v___x_4997_ = lean_nat_dec_lt(v_fst_4995_, v___x_4996_);
if (v___x_4997_ == 0)
{
lean_dec(v_fst_4995_);
v_a_4965_ = v_b_4958_;
goto v___jp_4964_;
}
else
{
lean_object* v_v_4998_; lean_object* v___x_4999_; lean_object* v_xs_x27_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; 
v_v_4998_ = lean_array_fget(v_b_4958_, v_fst_4995_);
v___x_4999_ = lean_box(0);
v_xs_x27_5000_ = lean_array_fset(v_b_4958_, v_fst_4995_, v___x_4999_);
lean_inc(v_a_4971_);
v___x_5001_ = lean_array_push(v_v_4998_, v_a_4971_);
v___x_5002_ = lean_array_fset(v_xs_x27_5000_, v_fst_4995_, v___x_5001_);
lean_dec(v_fst_4995_);
v_a_4965_ = v___x_5002_;
goto v___jp_4964_;
}
}
else
{
lean_object* v___x_5003_; lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; 
lean_dec(v___x_4993_);
v___x_5003_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3);
v___x_5004_ = l_Lean_indentExpr(v_arg_4992_);
v___x_5005_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5005_, 0, v___x_5003_);
lean_ctor_set(v___x_5005_, 1, v___x_5004_);
v___x_5006_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_5005_, v___y_4959_, v___y_4960_, v___y_4961_, v___y_4962_);
if (lean_obj_tag(v___x_5006_) == 0)
{
lean_dec_ref_known(v___x_5006_, 1);
v_a_4965_ = v_b_4958_;
goto v___jp_4964_;
}
else
{
lean_object* v_a_5007_; lean_object* v___x_5009_; uint8_t v_isShared_5010_; uint8_t v_isSharedCheck_5014_; 
lean_dec_ref(v_b_4958_);
v_a_5007_ = lean_ctor_get(v___x_5006_, 0);
v_isSharedCheck_5014_ = !lean_is_exclusive(v___x_5006_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_5009_ = v___x_5006_;
v_isShared_5010_ = v_isSharedCheck_5014_;
goto v_resetjp_5008_;
}
else
{
lean_inc(v_a_5007_);
lean_dec(v___x_5006_);
v___x_5009_ = lean_box(0);
v_isShared_5010_ = v_isSharedCheck_5014_;
goto v_resetjp_5008_;
}
v_resetjp_5008_:
{
lean_object* v___x_5012_; 
if (v_isShared_5010_ == 0)
{
v___x_5012_ = v___x_5009_;
goto v_reusejp_5011_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v_a_5007_);
v___x_5012_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5011_;
}
v_reusejp_5011_:
{
return v___x_5012_;
}
}
}
}
}
else
{
v___y_4975_ = v___y_4959_;
v___y_4976_ = v___y_4960_;
v___y_4977_ = v___y_4961_;
v___y_4978_ = v___y_4962_;
goto v___jp_4974_;
}
}
else
{
v___y_4975_ = v___y_4959_;
v___y_4976_ = v___y_4960_;
v___y_4977_ = v___y_4961_;
v___y_4978_ = v___y_4962_;
goto v___jp_4974_;
}
v___jp_4974_:
{
lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; 
v___x_4979_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1);
v___x_4980_ = l_Lean_indentExpr(v_a_4973_);
v___x_4981_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4981_, 0, v___x_4979_);
lean_ctor_set(v___x_4981_, 1, v___x_4980_);
v___x_4982_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_4981_, v___y_4975_, v___y_4976_, v___y_4977_, v___y_4978_);
if (lean_obj_tag(v___x_4982_) == 0)
{
lean_dec_ref_known(v___x_4982_, 1);
v_a_4965_ = v_b_4958_;
goto v___jp_4964_;
}
else
{
lean_object* v_a_4983_; lean_object* v___x_4985_; uint8_t v_isShared_4986_; uint8_t v_isSharedCheck_4990_; 
lean_dec_ref(v_b_4958_);
v_a_4983_ = lean_ctor_get(v___x_4982_, 0);
v_isSharedCheck_4990_ = !lean_is_exclusive(v___x_4982_);
if (v_isSharedCheck_4990_ == 0)
{
v___x_4985_ = v___x_4982_;
v_isShared_4986_ = v_isSharedCheck_4990_;
goto v_resetjp_4984_;
}
else
{
lean_inc(v_a_4983_);
lean_dec(v___x_4982_);
v___x_4985_ = lean_box(0);
v_isShared_4986_ = v_isSharedCheck_4990_;
goto v_resetjp_4984_;
}
v_resetjp_4984_:
{
lean_object* v___x_4988_; 
if (v_isShared_4986_ == 0)
{
v___x_4988_ = v___x_4985_;
goto v_reusejp_4987_;
}
else
{
lean_object* v_reuseFailAlloc_4989_; 
v_reuseFailAlloc_4989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4989_, 0, v_a_4983_);
v___x_4988_ = v_reuseFailAlloc_4989_;
goto v_reusejp_4987_;
}
v_reusejp_4987_:
{
return v___x_4988_;
}
}
}
}
}
else
{
lean_object* v_a_5015_; lean_object* v___x_5017_; uint8_t v_isShared_5018_; uint8_t v_isSharedCheck_5022_; 
lean_dec_ref(v_b_4958_);
v_a_5015_ = lean_ctor_get(v___x_4972_, 0);
v_isSharedCheck_5022_ = !lean_is_exclusive(v___x_4972_);
if (v_isSharedCheck_5022_ == 0)
{
v___x_5017_ = v___x_4972_;
v_isShared_5018_ = v_isSharedCheck_5022_;
goto v_resetjp_5016_;
}
else
{
lean_inc(v_a_5015_);
lean_dec(v___x_4972_);
v___x_5017_ = lean_box(0);
v_isShared_5018_ = v_isSharedCheck_5022_;
goto v_resetjp_5016_;
}
v_resetjp_5016_:
{
lean_object* v___x_5020_; 
if (v_isShared_5018_ == 0)
{
v___x_5020_ = v___x_5017_;
goto v_reusejp_5019_;
}
else
{
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5021_, 0, v_a_5015_);
v___x_5020_ = v_reuseFailAlloc_5021_;
goto v_reusejp_5019_;
}
v_reusejp_5019_:
{
return v___x_5020_;
}
}
}
}
v___jp_4964_:
{
size_t v___x_4966_; size_t v___x_4967_; 
v___x_4966_ = ((size_t)1ULL);
v___x_4967_ = lean_usize_add(v_i_4957_, v___x_4966_);
v_i_4957_ = v___x_4967_;
v_b_4958_ = v_a_4965_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___boxed(lean_object* v_argsPacker_5023_, lean_object* v_as_5024_, lean_object* v_sz_5025_, lean_object* v_i_5026_, lean_object* v_b_5027_, lean_object* v___y_5028_, lean_object* v___y_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_){
_start:
{
size_t v_sz_boxed_5033_; size_t v_i_boxed_5034_; lean_object* v_res_5035_; 
v_sz_boxed_5033_ = lean_unbox_usize(v_sz_5025_);
lean_dec(v_sz_5025_);
v_i_boxed_5034_ = lean_unbox_usize(v_i_5026_);
lean_dec(v_i_5026_);
v_res_5035_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(v_argsPacker_5023_, v_as_5024_, v_sz_boxed_5033_, v_i_boxed_5034_, v_b_5027_, v___y_5028_, v___y_5029_, v___y_5030_, v___y_5031_);
lean_dec(v___y_5031_);
lean_dec_ref(v___y_5030_);
lean_dec(v___y_5029_);
lean_dec_ref(v___y_5028_);
lean_dec_ref(v_as_5024_);
lean_dec_ref(v_argsPacker_5023_);
return v_res_5035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction(lean_object* v_argsPacker_5036_, lean_object* v_numFuncs_5037_, lean_object* v_goals_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_, lean_object* v___y_5042_){
_start:
{
lean_object* v___x_5044_; lean_object* v_r_5045_; size_t v_sz_5046_; size_t v___x_5047_; lean_object* v___x_5048_; 
v___x_5044_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0));
v_r_5045_ = lean_mk_array(v_numFuncs_5037_, v___x_5044_);
v_sz_5046_ = lean_array_size(v_goals_5038_);
v___x_5047_ = ((size_t)0ULL);
v___x_5048_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(v_argsPacker_5036_, v_goals_5038_, v_sz_5046_, v___x_5047_, v_r_5045_, v___y_5039_, v___y_5040_, v___y_5041_, v___y_5042_);
return v___x_5048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction___boxed(lean_object* v_argsPacker_5049_, lean_object* v_numFuncs_5050_, lean_object* v_goals_5051_, lean_object* v___y_5052_, lean_object* v___y_5053_, lean_object* v___y_5054_, lean_object* v___y_5055_, lean_object* v___y_5056_){
_start:
{
lean_object* v_res_5057_; 
v_res_5057_ = l_Lean_Elab_WF_groupGoalsByFunction(v_argsPacker_5049_, v_numFuncs_5050_, v_goals_5051_, v___y_5052_, v___y_5053_, v___y_5054_, v___y_5055_);
lean_dec(v___y_5055_);
lean_dec_ref(v___y_5054_);
lean_dec(v___y_5053_);
lean_dec_ref(v___y_5052_);
lean_dec_ref(v_goals_5051_);
lean_dec_ref(v_argsPacker_5049_);
return v_res_5057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(lean_object* v_t_5058_, lean_object* v___y_5059_){
_start:
{
lean_object* v___x_5061_; lean_object* v_infoState_5062_; uint8_t v_enabled_5063_; 
v___x_5061_ = lean_st_ref_get(v___y_5059_);
v_infoState_5062_ = lean_ctor_get(v___x_5061_, 7);
lean_inc_ref(v_infoState_5062_);
lean_dec(v___x_5061_);
v_enabled_5063_ = lean_ctor_get_uint8(v_infoState_5062_, sizeof(void*)*3);
lean_dec_ref(v_infoState_5062_);
if (v_enabled_5063_ == 0)
{
lean_object* v___x_5064_; lean_object* v___x_5065_; 
lean_dec_ref(v_t_5058_);
v___x_5064_ = lean_box(0);
v___x_5065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5065_, 0, v___x_5064_);
return v___x_5065_;
}
else
{
lean_object* v___x_5066_; lean_object* v_infoState_5067_; lean_object* v_env_5068_; lean_object* v_nextMacroScope_5069_; lean_object* v_ngen_5070_; lean_object* v_auxDeclNGen_5071_; lean_object* v_traceState_5072_; lean_object* v_cache_5073_; lean_object* v_messages_5074_; lean_object* v_snapshotTasks_5075_; lean_object* v___x_5077_; uint8_t v_isShared_5078_; uint8_t v_isSharedCheck_5097_; 
v___x_5066_ = lean_st_ref_take(v___y_5059_);
v_infoState_5067_ = lean_ctor_get(v___x_5066_, 7);
v_env_5068_ = lean_ctor_get(v___x_5066_, 0);
v_nextMacroScope_5069_ = lean_ctor_get(v___x_5066_, 1);
v_ngen_5070_ = lean_ctor_get(v___x_5066_, 2);
v_auxDeclNGen_5071_ = lean_ctor_get(v___x_5066_, 3);
v_traceState_5072_ = lean_ctor_get(v___x_5066_, 4);
v_cache_5073_ = lean_ctor_get(v___x_5066_, 5);
v_messages_5074_ = lean_ctor_get(v___x_5066_, 6);
v_snapshotTasks_5075_ = lean_ctor_get(v___x_5066_, 8);
v_isSharedCheck_5097_ = !lean_is_exclusive(v___x_5066_);
if (v_isSharedCheck_5097_ == 0)
{
v___x_5077_ = v___x_5066_;
v_isShared_5078_ = v_isSharedCheck_5097_;
goto v_resetjp_5076_;
}
else
{
lean_inc(v_snapshotTasks_5075_);
lean_inc(v_infoState_5067_);
lean_inc(v_messages_5074_);
lean_inc(v_cache_5073_);
lean_inc(v_traceState_5072_);
lean_inc(v_auxDeclNGen_5071_);
lean_inc(v_ngen_5070_);
lean_inc(v_nextMacroScope_5069_);
lean_inc(v_env_5068_);
lean_dec(v___x_5066_);
v___x_5077_ = lean_box(0);
v_isShared_5078_ = v_isSharedCheck_5097_;
goto v_resetjp_5076_;
}
v_resetjp_5076_:
{
uint8_t v_enabled_5079_; lean_object* v_assignment_5080_; lean_object* v_lazyAssignment_5081_; lean_object* v_trees_5082_; lean_object* v___x_5084_; uint8_t v_isShared_5085_; uint8_t v_isSharedCheck_5096_; 
v_enabled_5079_ = lean_ctor_get_uint8(v_infoState_5067_, sizeof(void*)*3);
v_assignment_5080_ = lean_ctor_get(v_infoState_5067_, 0);
v_lazyAssignment_5081_ = lean_ctor_get(v_infoState_5067_, 1);
v_trees_5082_ = lean_ctor_get(v_infoState_5067_, 2);
v_isSharedCheck_5096_ = !lean_is_exclusive(v_infoState_5067_);
if (v_isSharedCheck_5096_ == 0)
{
v___x_5084_ = v_infoState_5067_;
v_isShared_5085_ = v_isSharedCheck_5096_;
goto v_resetjp_5083_;
}
else
{
lean_inc(v_trees_5082_);
lean_inc(v_lazyAssignment_5081_);
lean_inc(v_assignment_5080_);
lean_dec(v_infoState_5067_);
v___x_5084_ = lean_box(0);
v_isShared_5085_ = v_isSharedCheck_5096_;
goto v_resetjp_5083_;
}
v_resetjp_5083_:
{
lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5089_; 
v___x_5086_ = lean_box(0);
v___x_5087_ = l_Lean_PersistentArray_push___redArg(v_trees_5082_, v_t_5058_);
if (v_isShared_5085_ == 0)
{
lean_ctor_set(v___x_5084_, 2, v___x_5087_);
v___x_5089_ = v___x_5084_;
goto v_reusejp_5088_;
}
else
{
lean_object* v_reuseFailAlloc_5095_; 
v_reuseFailAlloc_5095_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5095_, 0, v_assignment_5080_);
lean_ctor_set(v_reuseFailAlloc_5095_, 1, v_lazyAssignment_5081_);
lean_ctor_set(v_reuseFailAlloc_5095_, 2, v___x_5087_);
lean_ctor_set_uint8(v_reuseFailAlloc_5095_, sizeof(void*)*3, v_enabled_5079_);
v___x_5089_ = v_reuseFailAlloc_5095_;
goto v_reusejp_5088_;
}
v_reusejp_5088_:
{
lean_object* v___x_5091_; 
if (v_isShared_5078_ == 0)
{
lean_ctor_set(v___x_5077_, 7, v___x_5089_);
v___x_5091_ = v___x_5077_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5094_; 
v_reuseFailAlloc_5094_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5094_, 0, v_env_5068_);
lean_ctor_set(v_reuseFailAlloc_5094_, 1, v_nextMacroScope_5069_);
lean_ctor_set(v_reuseFailAlloc_5094_, 2, v_ngen_5070_);
lean_ctor_set(v_reuseFailAlloc_5094_, 3, v_auxDeclNGen_5071_);
lean_ctor_set(v_reuseFailAlloc_5094_, 4, v_traceState_5072_);
lean_ctor_set(v_reuseFailAlloc_5094_, 5, v_cache_5073_);
lean_ctor_set(v_reuseFailAlloc_5094_, 6, v_messages_5074_);
lean_ctor_set(v_reuseFailAlloc_5094_, 7, v___x_5089_);
lean_ctor_set(v_reuseFailAlloc_5094_, 8, v_snapshotTasks_5075_);
v___x_5091_ = v_reuseFailAlloc_5094_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
lean_object* v___x_5092_; lean_object* v___x_5093_; 
v___x_5092_ = lean_st_ref_put(v___y_5059_, v___x_5091_);
v___x_5093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5093_, 0, v___x_5086_);
return v___x_5093_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg___boxed(lean_object* v_t_5098_, lean_object* v___y_5099_, lean_object* v___y_5100_){
_start:
{
lean_object* v_res_5101_; 
v_res_5101_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v_t_5098_, v___y_5099_);
lean_dec(v___y_5099_);
return v_res_5101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(lean_object* v_t_5102_, lean_object* v___y_5103_, lean_object* v___y_5104_, lean_object* v___y_5105_, lean_object* v___y_5106_, lean_object* v___y_5107_, lean_object* v___y_5108_){
_start:
{
lean_object* v___x_5110_; 
v___x_5110_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v_t_5102_, v___y_5108_);
return v___x_5110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___boxed(lean_object* v_t_5111_, lean_object* v___y_5112_, lean_object* v___y_5113_, lean_object* v___y_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_){
_start:
{
lean_object* v_res_5119_; 
v_res_5119_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(v_t_5111_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_, v___y_5116_, v___y_5117_);
lean_dec(v___y_5117_);
lean_dec_ref(v___y_5116_);
lean_dec(v___y_5115_);
lean_dec_ref(v___y_5114_);
lean_dec(v___y_5113_);
lean_dec_ref(v___y_5112_);
return v_res_5119_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(lean_object* v_e_5120_, lean_object* v___y_5121_){
_start:
{
uint8_t v___x_5123_; 
v___x_5123_ = l_Lean_Expr_hasMVar(v_e_5120_);
if (v___x_5123_ == 0)
{
lean_object* v___x_5124_; 
v___x_5124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5124_, 0, v_e_5120_);
return v___x_5124_;
}
else
{
lean_object* v___x_5125_; lean_object* v_mctx_5126_; lean_object* v___x_5127_; lean_object* v_fst_5128_; lean_object* v_snd_5129_; lean_object* v___x_5130_; lean_object* v_cache_5131_; lean_object* v_zetaDeltaFVarIds_5132_; lean_object* v_postponed_5133_; lean_object* v_diag_5134_; lean_object* v___x_5136_; uint8_t v_isShared_5137_; uint8_t v_isSharedCheck_5143_; 
v___x_5125_ = lean_st_ref_get(v___y_5121_);
v_mctx_5126_ = lean_ctor_get(v___x_5125_, 0);
lean_inc_ref(v_mctx_5126_);
lean_dec(v___x_5125_);
v___x_5127_ = l_Lean_instantiateMVarsCore(v_mctx_5126_, v_e_5120_);
v_fst_5128_ = lean_ctor_get(v___x_5127_, 0);
lean_inc(v_fst_5128_);
v_snd_5129_ = lean_ctor_get(v___x_5127_, 1);
lean_inc(v_snd_5129_);
lean_dec_ref(v___x_5127_);
v___x_5130_ = lean_st_ref_take(v___y_5121_);
v_cache_5131_ = lean_ctor_get(v___x_5130_, 1);
v_zetaDeltaFVarIds_5132_ = lean_ctor_get(v___x_5130_, 2);
v_postponed_5133_ = lean_ctor_get(v___x_5130_, 3);
v_diag_5134_ = lean_ctor_get(v___x_5130_, 4);
v_isSharedCheck_5143_ = !lean_is_exclusive(v___x_5130_);
if (v_isSharedCheck_5143_ == 0)
{
lean_object* v_unused_5144_; 
v_unused_5144_ = lean_ctor_get(v___x_5130_, 0);
lean_dec(v_unused_5144_);
v___x_5136_ = v___x_5130_;
v_isShared_5137_ = v_isSharedCheck_5143_;
goto v_resetjp_5135_;
}
else
{
lean_inc(v_diag_5134_);
lean_inc(v_postponed_5133_);
lean_inc(v_zetaDeltaFVarIds_5132_);
lean_inc(v_cache_5131_);
lean_dec(v___x_5130_);
v___x_5136_ = lean_box(0);
v_isShared_5137_ = v_isSharedCheck_5143_;
goto v_resetjp_5135_;
}
v_resetjp_5135_:
{
lean_object* v___x_5139_; 
if (v_isShared_5137_ == 0)
{
lean_ctor_set(v___x_5136_, 0, v_snd_5129_);
v___x_5139_ = v___x_5136_;
goto v_reusejp_5138_;
}
else
{
lean_object* v_reuseFailAlloc_5142_; 
v_reuseFailAlloc_5142_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5142_, 0, v_snd_5129_);
lean_ctor_set(v_reuseFailAlloc_5142_, 1, v_cache_5131_);
lean_ctor_set(v_reuseFailAlloc_5142_, 2, v_zetaDeltaFVarIds_5132_);
lean_ctor_set(v_reuseFailAlloc_5142_, 3, v_postponed_5133_);
lean_ctor_set(v_reuseFailAlloc_5142_, 4, v_diag_5134_);
v___x_5139_ = v_reuseFailAlloc_5142_;
goto v_reusejp_5138_;
}
v_reusejp_5138_:
{
lean_object* v___x_5140_; lean_object* v___x_5141_; 
v___x_5140_ = lean_st_ref_put(v___y_5121_, v___x_5139_);
v___x_5141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5141_, 0, v_fst_5128_);
return v___x_5141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg___boxed(lean_object* v_e_5145_, lean_object* v___y_5146_, lean_object* v___y_5147_){
_start:
{
lean_object* v_res_5148_; 
v_res_5148_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_e_5145_, v___y_5146_);
lean_dec(v___y_5146_);
return v_res_5148_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(lean_object* v_e_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_){
_start:
{
lean_object* v___x_5155_; 
v___x_5155_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_e_5149_, v___y_5151_);
return v___x_5155_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___boxed(lean_object* v_e_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_){
_start:
{
lean_object* v_res_5162_; 
v_res_5162_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(v_e_5156_, v___y_5157_, v___y_5158_, v___y_5159_, v___y_5160_);
lean_dec(v___y_5160_);
lean_dec_ref(v___y_5159_);
lean_dec(v___y_5158_);
lean_dec_ref(v___y_5157_);
return v_res_5162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(lean_object* v_as_5163_, size_t v_i_5164_, size_t v_stop_5165_, lean_object* v_b_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_){
_start:
{
uint8_t v___x_5174_; 
v___x_5174_ = lean_usize_dec_eq(v_i_5164_, v_stop_5165_);
if (v___x_5174_ == 0)
{
lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; 
v___x_5175_ = lean_array_uget_borrowed(v_as_5163_, v_i_5164_);
lean_inc(v___x_5175_);
v___x_5176_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5176_, 0, v___x_5175_);
v___x_5177_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v___x_5176_, v___y_5172_);
if (lean_obj_tag(v___x_5177_) == 0)
{
lean_object* v_a_5178_; size_t v___x_5179_; size_t v___x_5180_; 
v_a_5178_ = lean_ctor_get(v___x_5177_, 0);
lean_inc(v_a_5178_);
lean_dec_ref_known(v___x_5177_, 1);
v___x_5179_ = ((size_t)1ULL);
v___x_5180_ = lean_usize_add(v_i_5164_, v___x_5179_);
v_i_5164_ = v___x_5180_;
v_b_5166_ = v_a_5178_;
goto _start;
}
else
{
return v___x_5177_;
}
}
else
{
lean_object* v___x_5182_; 
v___x_5182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5182_, 0, v_b_5166_);
return v___x_5182_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4___boxed(lean_object* v_as_5183_, lean_object* v_i_5184_, lean_object* v_stop_5185_, lean_object* v_b_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_){
_start:
{
size_t v_i_boxed_5194_; size_t v_stop_boxed_5195_; lean_object* v_res_5196_; 
v_i_boxed_5194_ = lean_unbox_usize(v_i_5184_);
lean_dec(v_i_5184_);
v_stop_boxed_5195_ = lean_unbox_usize(v_stop_5185_);
lean_dec(v_stop_5185_);
v_res_5196_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v_as_5183_, v_i_boxed_5194_, v_stop_boxed_5195_, v_b_5186_, v___y_5187_, v___y_5188_, v___y_5189_, v___y_5190_, v___y_5191_, v___y_5192_);
lean_dec(v___y_5192_);
lean_dec_ref(v___y_5191_);
lean_dec(v___y_5190_);
lean_dec_ref(v___y_5189_);
lean_dec(v___y_5188_);
lean_dec_ref(v___y_5187_);
lean_dec_ref(v_as_5183_);
return v_res_5196_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; 
v___x_5197_ = lean_unsigned_to_nat(32u);
v___x_5198_ = lean_mk_empty_array_with_capacity(v___x_5197_);
v___x_5199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5199_, 0, v___x_5198_);
return v___x_5199_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; 
v___x_5200_ = ((size_t)5ULL);
v___x_5201_ = lean_unsigned_to_nat(0u);
v___x_5202_ = lean_unsigned_to_nat(32u);
v___x_5203_ = lean_mk_empty_array_with_capacity(v___x_5202_);
v___x_5204_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0);
v___x_5205_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5205_, 0, v___x_5204_);
lean_ctor_set(v___x_5205_, 1, v___x_5203_);
lean_ctor_set(v___x_5205_, 2, v___x_5201_);
lean_ctor_set(v___x_5205_, 3, v___x_5201_);
lean_ctor_set_usize(v___x_5205_, 4, v___x_5200_);
return v___x_5205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(lean_object* v___y_5206_){
_start:
{
lean_object* v___x_5208_; lean_object* v_infoState_5209_; lean_object* v_trees_5210_; lean_object* v___x_5211_; lean_object* v_infoState_5212_; lean_object* v_env_5213_; lean_object* v_nextMacroScope_5214_; lean_object* v_ngen_5215_; lean_object* v_auxDeclNGen_5216_; lean_object* v_traceState_5217_; lean_object* v_cache_5218_; lean_object* v_messages_5219_; lean_object* v_snapshotTasks_5220_; lean_object* v___x_5222_; uint8_t v_isShared_5223_; uint8_t v_isSharedCheck_5241_; 
v___x_5208_ = lean_st_ref_get(v___y_5206_);
v_infoState_5209_ = lean_ctor_get(v___x_5208_, 7);
lean_inc_ref(v_infoState_5209_);
lean_dec(v___x_5208_);
v_trees_5210_ = lean_ctor_get(v_infoState_5209_, 2);
lean_inc_ref(v_trees_5210_);
lean_dec_ref(v_infoState_5209_);
v___x_5211_ = lean_st_ref_take(v___y_5206_);
v_infoState_5212_ = lean_ctor_get(v___x_5211_, 7);
v_env_5213_ = lean_ctor_get(v___x_5211_, 0);
v_nextMacroScope_5214_ = lean_ctor_get(v___x_5211_, 1);
v_ngen_5215_ = lean_ctor_get(v___x_5211_, 2);
v_auxDeclNGen_5216_ = lean_ctor_get(v___x_5211_, 3);
v_traceState_5217_ = lean_ctor_get(v___x_5211_, 4);
v_cache_5218_ = lean_ctor_get(v___x_5211_, 5);
v_messages_5219_ = lean_ctor_get(v___x_5211_, 6);
v_snapshotTasks_5220_ = lean_ctor_get(v___x_5211_, 8);
v_isSharedCheck_5241_ = !lean_is_exclusive(v___x_5211_);
if (v_isSharedCheck_5241_ == 0)
{
v___x_5222_ = v___x_5211_;
v_isShared_5223_ = v_isSharedCheck_5241_;
goto v_resetjp_5221_;
}
else
{
lean_inc(v_snapshotTasks_5220_);
lean_inc(v_infoState_5212_);
lean_inc(v_messages_5219_);
lean_inc(v_cache_5218_);
lean_inc(v_traceState_5217_);
lean_inc(v_auxDeclNGen_5216_);
lean_inc(v_ngen_5215_);
lean_inc(v_nextMacroScope_5214_);
lean_inc(v_env_5213_);
lean_dec(v___x_5211_);
v___x_5222_ = lean_box(0);
v_isShared_5223_ = v_isSharedCheck_5241_;
goto v_resetjp_5221_;
}
v_resetjp_5221_:
{
uint8_t v_enabled_5224_; lean_object* v_assignment_5225_; lean_object* v_lazyAssignment_5226_; lean_object* v___x_5228_; uint8_t v_isShared_5229_; uint8_t v_isSharedCheck_5239_; 
v_enabled_5224_ = lean_ctor_get_uint8(v_infoState_5212_, sizeof(void*)*3);
v_assignment_5225_ = lean_ctor_get(v_infoState_5212_, 0);
v_lazyAssignment_5226_ = lean_ctor_get(v_infoState_5212_, 1);
v_isSharedCheck_5239_ = !lean_is_exclusive(v_infoState_5212_);
if (v_isSharedCheck_5239_ == 0)
{
lean_object* v_unused_5240_; 
v_unused_5240_ = lean_ctor_get(v_infoState_5212_, 2);
lean_dec(v_unused_5240_);
v___x_5228_ = v_infoState_5212_;
v_isShared_5229_ = v_isSharedCheck_5239_;
goto v_resetjp_5227_;
}
else
{
lean_inc(v_lazyAssignment_5226_);
lean_inc(v_assignment_5225_);
lean_dec(v_infoState_5212_);
v___x_5228_ = lean_box(0);
v_isShared_5229_ = v_isSharedCheck_5239_;
goto v_resetjp_5227_;
}
v_resetjp_5227_:
{
lean_object* v___x_5230_; lean_object* v___x_5232_; 
v___x_5230_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1);
if (v_isShared_5229_ == 0)
{
lean_ctor_set(v___x_5228_, 2, v___x_5230_);
v___x_5232_ = v___x_5228_;
goto v_reusejp_5231_;
}
else
{
lean_object* v_reuseFailAlloc_5238_; 
v_reuseFailAlloc_5238_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5238_, 0, v_assignment_5225_);
lean_ctor_set(v_reuseFailAlloc_5238_, 1, v_lazyAssignment_5226_);
lean_ctor_set(v_reuseFailAlloc_5238_, 2, v___x_5230_);
lean_ctor_set_uint8(v_reuseFailAlloc_5238_, sizeof(void*)*3, v_enabled_5224_);
v___x_5232_ = v_reuseFailAlloc_5238_;
goto v_reusejp_5231_;
}
v_reusejp_5231_:
{
lean_object* v___x_5234_; 
if (v_isShared_5223_ == 0)
{
lean_ctor_set(v___x_5222_, 7, v___x_5232_);
v___x_5234_ = v___x_5222_;
goto v_reusejp_5233_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v_env_5213_);
lean_ctor_set(v_reuseFailAlloc_5237_, 1, v_nextMacroScope_5214_);
lean_ctor_set(v_reuseFailAlloc_5237_, 2, v_ngen_5215_);
lean_ctor_set(v_reuseFailAlloc_5237_, 3, v_auxDeclNGen_5216_);
lean_ctor_set(v_reuseFailAlloc_5237_, 4, v_traceState_5217_);
lean_ctor_set(v_reuseFailAlloc_5237_, 5, v_cache_5218_);
lean_ctor_set(v_reuseFailAlloc_5237_, 6, v_messages_5219_);
lean_ctor_set(v_reuseFailAlloc_5237_, 7, v___x_5232_);
lean_ctor_set(v_reuseFailAlloc_5237_, 8, v_snapshotTasks_5220_);
v___x_5234_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5233_;
}
v_reusejp_5233_:
{
lean_object* v___x_5235_; lean_object* v___x_5236_; 
v___x_5235_ = lean_st_ref_put(v___y_5206_, v___x_5234_);
v___x_5236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5236_, 0, v_trees_5210_);
return v___x_5236_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___boxed(lean_object* v___y_5242_, lean_object* v___y_5243_){
_start:
{
lean_object* v_res_5244_; 
v_res_5244_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_5242_);
lean_dec(v___y_5242_);
return v_res_5244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(lean_object* v___y_5245_, lean_object* v_mkInfoTree_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_, lean_object* v_a_5254_, lean_object* v_a_x3f_5255_){
_start:
{
lean_object* v___x_5257_; lean_object* v_infoState_5258_; lean_object* v_trees_5259_; lean_object* v___x_5260_; 
v___x_5257_ = lean_st_ref_get(v___y_5245_);
v_infoState_5258_ = lean_ctor_get(v___x_5257_, 7);
lean_inc_ref(v_infoState_5258_);
lean_dec(v___x_5257_);
v_trees_5259_ = lean_ctor_get(v_infoState_5258_, 2);
lean_inc_ref(v_trees_5259_);
lean_dec_ref(v_infoState_5258_);
lean_inc(v___y_5245_);
lean_inc_ref(v___y_5253_);
lean_inc(v___y_5252_);
lean_inc_ref(v___y_5251_);
lean_inc(v___y_5250_);
lean_inc_ref(v___y_5249_);
lean_inc(v___y_5248_);
lean_inc_ref(v___y_5247_);
v___x_5260_ = lean_apply_10(v_mkInfoTree_5246_, v_trees_5259_, v___y_5247_, v___y_5248_, v___y_5249_, v___y_5250_, v___y_5251_, v___y_5252_, v___y_5253_, v___y_5245_, lean_box(0));
if (lean_obj_tag(v___x_5260_) == 0)
{
lean_object* v_a_5261_; lean_object* v___x_5263_; uint8_t v_isShared_5264_; uint8_t v_isSharedCheck_5299_; 
v_a_5261_ = lean_ctor_get(v___x_5260_, 0);
v_isSharedCheck_5299_ = !lean_is_exclusive(v___x_5260_);
if (v_isSharedCheck_5299_ == 0)
{
v___x_5263_ = v___x_5260_;
v_isShared_5264_ = v_isSharedCheck_5299_;
goto v_resetjp_5262_;
}
else
{
lean_inc(v_a_5261_);
lean_dec(v___x_5260_);
v___x_5263_ = lean_box(0);
v_isShared_5264_ = v_isSharedCheck_5299_;
goto v_resetjp_5262_;
}
v_resetjp_5262_:
{
lean_object* v___x_5265_; lean_object* v_infoState_5266_; lean_object* v_env_5267_; lean_object* v_nextMacroScope_5268_; lean_object* v_ngen_5269_; lean_object* v_auxDeclNGen_5270_; lean_object* v_traceState_5271_; lean_object* v_cache_5272_; lean_object* v_messages_5273_; lean_object* v_snapshotTasks_5274_; lean_object* v___x_5276_; uint8_t v_isShared_5277_; uint8_t v_isSharedCheck_5298_; 
v___x_5265_ = lean_st_ref_take(v___y_5245_);
v_infoState_5266_ = lean_ctor_get(v___x_5265_, 7);
v_env_5267_ = lean_ctor_get(v___x_5265_, 0);
v_nextMacroScope_5268_ = lean_ctor_get(v___x_5265_, 1);
v_ngen_5269_ = lean_ctor_get(v___x_5265_, 2);
v_auxDeclNGen_5270_ = lean_ctor_get(v___x_5265_, 3);
v_traceState_5271_ = lean_ctor_get(v___x_5265_, 4);
v_cache_5272_ = lean_ctor_get(v___x_5265_, 5);
v_messages_5273_ = lean_ctor_get(v___x_5265_, 6);
v_snapshotTasks_5274_ = lean_ctor_get(v___x_5265_, 8);
v_isSharedCheck_5298_ = !lean_is_exclusive(v___x_5265_);
if (v_isSharedCheck_5298_ == 0)
{
v___x_5276_ = v___x_5265_;
v_isShared_5277_ = v_isSharedCheck_5298_;
goto v_resetjp_5275_;
}
else
{
lean_inc(v_snapshotTasks_5274_);
lean_inc(v_infoState_5266_);
lean_inc(v_messages_5273_);
lean_inc(v_cache_5272_);
lean_inc(v_traceState_5271_);
lean_inc(v_auxDeclNGen_5270_);
lean_inc(v_ngen_5269_);
lean_inc(v_nextMacroScope_5268_);
lean_inc(v_env_5267_);
lean_dec(v___x_5265_);
v___x_5276_ = lean_box(0);
v_isShared_5277_ = v_isSharedCheck_5298_;
goto v_resetjp_5275_;
}
v_resetjp_5275_:
{
uint8_t v_enabled_5278_; lean_object* v_assignment_5279_; lean_object* v_lazyAssignment_5280_; lean_object* v___x_5282_; uint8_t v_isShared_5283_; uint8_t v_isSharedCheck_5296_; 
v_enabled_5278_ = lean_ctor_get_uint8(v_infoState_5266_, sizeof(void*)*3);
v_assignment_5279_ = lean_ctor_get(v_infoState_5266_, 0);
v_lazyAssignment_5280_ = lean_ctor_get(v_infoState_5266_, 1);
v_isSharedCheck_5296_ = !lean_is_exclusive(v_infoState_5266_);
if (v_isSharedCheck_5296_ == 0)
{
lean_object* v_unused_5297_; 
v_unused_5297_ = lean_ctor_get(v_infoState_5266_, 2);
lean_dec(v_unused_5297_);
v___x_5282_ = v_infoState_5266_;
v_isShared_5283_ = v_isSharedCheck_5296_;
goto v_resetjp_5281_;
}
else
{
lean_inc(v_lazyAssignment_5280_);
lean_inc(v_assignment_5279_);
lean_dec(v_infoState_5266_);
v___x_5282_ = lean_box(0);
v_isShared_5283_ = v_isSharedCheck_5296_;
goto v_resetjp_5281_;
}
v_resetjp_5281_:
{
lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5287_; 
v___x_5284_ = lean_box(0);
v___x_5285_ = l_Lean_PersistentArray_push___redArg(v_a_5254_, v_a_5261_);
if (v_isShared_5283_ == 0)
{
lean_ctor_set(v___x_5282_, 2, v___x_5285_);
v___x_5287_ = v___x_5282_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5295_; 
v_reuseFailAlloc_5295_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5295_, 0, v_assignment_5279_);
lean_ctor_set(v_reuseFailAlloc_5295_, 1, v_lazyAssignment_5280_);
lean_ctor_set(v_reuseFailAlloc_5295_, 2, v___x_5285_);
lean_ctor_set_uint8(v_reuseFailAlloc_5295_, sizeof(void*)*3, v_enabled_5278_);
v___x_5287_ = v_reuseFailAlloc_5295_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
lean_object* v___x_5289_; 
if (v_isShared_5277_ == 0)
{
lean_ctor_set(v___x_5276_, 7, v___x_5287_);
v___x_5289_ = v___x_5276_;
goto v_reusejp_5288_;
}
else
{
lean_object* v_reuseFailAlloc_5294_; 
v_reuseFailAlloc_5294_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5294_, 0, v_env_5267_);
lean_ctor_set(v_reuseFailAlloc_5294_, 1, v_nextMacroScope_5268_);
lean_ctor_set(v_reuseFailAlloc_5294_, 2, v_ngen_5269_);
lean_ctor_set(v_reuseFailAlloc_5294_, 3, v_auxDeclNGen_5270_);
lean_ctor_set(v_reuseFailAlloc_5294_, 4, v_traceState_5271_);
lean_ctor_set(v_reuseFailAlloc_5294_, 5, v_cache_5272_);
lean_ctor_set(v_reuseFailAlloc_5294_, 6, v_messages_5273_);
lean_ctor_set(v_reuseFailAlloc_5294_, 7, v___x_5287_);
lean_ctor_set(v_reuseFailAlloc_5294_, 8, v_snapshotTasks_5274_);
v___x_5289_ = v_reuseFailAlloc_5294_;
goto v_reusejp_5288_;
}
v_reusejp_5288_:
{
lean_object* v___x_5290_; lean_object* v___x_5292_; 
v___x_5290_ = lean_st_ref_put(v___y_5245_, v___x_5289_);
if (v_isShared_5264_ == 0)
{
lean_ctor_set(v___x_5263_, 0, v___x_5284_);
v___x_5292_ = v___x_5263_;
goto v_reusejp_5291_;
}
else
{
lean_object* v_reuseFailAlloc_5293_; 
v_reuseFailAlloc_5293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5293_, 0, v___x_5284_);
v___x_5292_ = v_reuseFailAlloc_5293_;
goto v_reusejp_5291_;
}
v_reusejp_5291_:
{
return v___x_5292_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5300_; lean_object* v___x_5302_; uint8_t v_isShared_5303_; uint8_t v_isSharedCheck_5307_; 
lean_dec_ref(v_a_5254_);
v_a_5300_ = lean_ctor_get(v___x_5260_, 0);
v_isSharedCheck_5307_ = !lean_is_exclusive(v___x_5260_);
if (v_isSharedCheck_5307_ == 0)
{
v___x_5302_ = v___x_5260_;
v_isShared_5303_ = v_isSharedCheck_5307_;
goto v_resetjp_5301_;
}
else
{
lean_inc(v_a_5300_);
lean_dec(v___x_5260_);
v___x_5302_ = lean_box(0);
v_isShared_5303_ = v_isSharedCheck_5307_;
goto v_resetjp_5301_;
}
v_resetjp_5301_:
{
lean_object* v___x_5305_; 
if (v_isShared_5303_ == 0)
{
v___x_5305_ = v___x_5302_;
goto v_reusejp_5304_;
}
else
{
lean_object* v_reuseFailAlloc_5306_; 
v_reuseFailAlloc_5306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5306_, 0, v_a_5300_);
v___x_5305_ = v_reuseFailAlloc_5306_;
goto v_reusejp_5304_;
}
v_reusejp_5304_:
{
return v___x_5305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0___boxed(lean_object* v___y_5308_, lean_object* v_mkInfoTree_5309_, lean_object* v___y_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_, lean_object* v___y_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_, lean_object* v_a_5317_, lean_object* v_a_x3f_5318_, lean_object* v___y_5319_){
_start:
{
lean_object* v_res_5320_; 
v_res_5320_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5308_, v_mkInfoTree_5309_, v___y_5310_, v___y_5311_, v___y_5312_, v___y_5313_, v___y_5314_, v___y_5315_, v___y_5316_, v_a_5317_, v_a_x3f_5318_);
lean_dec(v_a_x3f_5318_);
lean_dec_ref(v___y_5316_);
lean_dec(v___y_5315_);
lean_dec_ref(v___y_5314_);
lean_dec(v___y_5313_);
lean_dec_ref(v___y_5312_);
lean_dec(v___y_5311_);
lean_dec_ref(v___y_5310_);
lean_dec(v___y_5308_);
return v_res_5320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(lean_object* v_x_5321_, lean_object* v_mkInfoTree_5322_, lean_object* v___y_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_){
_start:
{
lean_object* v___x_5332_; lean_object* v_infoState_5333_; uint8_t v_enabled_5334_; 
v___x_5332_ = lean_st_ref_get(v___y_5330_);
v_infoState_5333_ = lean_ctor_get(v___x_5332_, 7);
lean_inc_ref(v_infoState_5333_);
lean_dec(v___x_5332_);
v_enabled_5334_ = lean_ctor_get_uint8(v_infoState_5333_, sizeof(void*)*3);
lean_dec_ref(v_infoState_5333_);
if (v_enabled_5334_ == 0)
{
lean_object* v___x_5335_; 
lean_dec_ref(v_mkInfoTree_5322_);
lean_inc(v___y_5330_);
lean_inc_ref(v___y_5329_);
lean_inc(v___y_5328_);
lean_inc_ref(v___y_5327_);
lean_inc(v___y_5326_);
lean_inc_ref(v___y_5325_);
lean_inc(v___y_5324_);
lean_inc_ref(v___y_5323_);
v___x_5335_ = lean_apply_9(v_x_5321_, v___y_5323_, v___y_5324_, v___y_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v___y_5330_, lean_box(0));
return v___x_5335_;
}
else
{
lean_object* v___x_5336_; lean_object* v_a_5337_; lean_object* v___x_5338_; 
v___x_5336_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_5330_);
v_a_5337_ = lean_ctor_get(v___x_5336_, 0);
lean_inc(v_a_5337_);
lean_dec_ref(v___x_5336_);
lean_inc(v___y_5330_);
lean_inc_ref(v___y_5329_);
lean_inc(v___y_5328_);
lean_inc_ref(v___y_5327_);
lean_inc(v___y_5326_);
lean_inc_ref(v___y_5325_);
lean_inc(v___y_5324_);
lean_inc_ref(v___y_5323_);
v___x_5338_ = lean_apply_9(v_x_5321_, v___y_5323_, v___y_5324_, v___y_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v___y_5330_, lean_box(0));
if (lean_obj_tag(v___x_5338_) == 0)
{
lean_object* v_a_5339_; lean_object* v___x_5341_; uint8_t v_isShared_5342_; uint8_t v_isSharedCheck_5363_; 
v_a_5339_ = lean_ctor_get(v___x_5338_, 0);
v_isSharedCheck_5363_ = !lean_is_exclusive(v___x_5338_);
if (v_isSharedCheck_5363_ == 0)
{
v___x_5341_ = v___x_5338_;
v_isShared_5342_ = v_isSharedCheck_5363_;
goto v_resetjp_5340_;
}
else
{
lean_inc(v_a_5339_);
lean_dec(v___x_5338_);
v___x_5341_ = lean_box(0);
v_isShared_5342_ = v_isSharedCheck_5363_;
goto v_resetjp_5340_;
}
v_resetjp_5340_:
{
lean_object* v___x_5344_; 
lean_inc(v_a_5339_);
if (v_isShared_5342_ == 0)
{
lean_ctor_set_tag(v___x_5341_, 1);
v___x_5344_ = v___x_5341_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5362_; 
v_reuseFailAlloc_5362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5362_, 0, v_a_5339_);
v___x_5344_ = v_reuseFailAlloc_5362_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
lean_object* v___x_5345_; 
v___x_5345_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5330_, v_mkInfoTree_5322_, v___y_5323_, v___y_5324_, v___y_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v_a_5337_, v___x_5344_);
lean_dec_ref(v___x_5344_);
if (lean_obj_tag(v___x_5345_) == 0)
{
lean_object* v___x_5347_; uint8_t v_isShared_5348_; uint8_t v_isSharedCheck_5352_; 
v_isSharedCheck_5352_ = !lean_is_exclusive(v___x_5345_);
if (v_isSharedCheck_5352_ == 0)
{
lean_object* v_unused_5353_; 
v_unused_5353_ = lean_ctor_get(v___x_5345_, 0);
lean_dec(v_unused_5353_);
v___x_5347_ = v___x_5345_;
v_isShared_5348_ = v_isSharedCheck_5352_;
goto v_resetjp_5346_;
}
else
{
lean_dec(v___x_5345_);
v___x_5347_ = lean_box(0);
v_isShared_5348_ = v_isSharedCheck_5352_;
goto v_resetjp_5346_;
}
v_resetjp_5346_:
{
lean_object* v___x_5350_; 
if (v_isShared_5348_ == 0)
{
lean_ctor_set(v___x_5347_, 0, v_a_5339_);
v___x_5350_ = v___x_5347_;
goto v_reusejp_5349_;
}
else
{
lean_object* v_reuseFailAlloc_5351_; 
v_reuseFailAlloc_5351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5351_, 0, v_a_5339_);
v___x_5350_ = v_reuseFailAlloc_5351_;
goto v_reusejp_5349_;
}
v_reusejp_5349_:
{
return v___x_5350_;
}
}
}
else
{
lean_object* v_a_5354_; lean_object* v___x_5356_; uint8_t v_isShared_5357_; uint8_t v_isSharedCheck_5361_; 
lean_dec(v_a_5339_);
v_a_5354_ = lean_ctor_get(v___x_5345_, 0);
v_isSharedCheck_5361_ = !lean_is_exclusive(v___x_5345_);
if (v_isSharedCheck_5361_ == 0)
{
v___x_5356_ = v___x_5345_;
v_isShared_5357_ = v_isSharedCheck_5361_;
goto v_resetjp_5355_;
}
else
{
lean_inc(v_a_5354_);
lean_dec(v___x_5345_);
v___x_5356_ = lean_box(0);
v_isShared_5357_ = v_isSharedCheck_5361_;
goto v_resetjp_5355_;
}
v_resetjp_5355_:
{
lean_object* v___x_5359_; 
if (v_isShared_5357_ == 0)
{
v___x_5359_ = v___x_5356_;
goto v_reusejp_5358_;
}
else
{
lean_object* v_reuseFailAlloc_5360_; 
v_reuseFailAlloc_5360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5360_, 0, v_a_5354_);
v___x_5359_ = v_reuseFailAlloc_5360_;
goto v_reusejp_5358_;
}
v_reusejp_5358_:
{
return v___x_5359_;
}
}
}
}
}
}
else
{
lean_object* v_a_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; 
v_a_5364_ = lean_ctor_get(v___x_5338_, 0);
lean_inc(v_a_5364_);
lean_dec_ref_known(v___x_5338_, 1);
v___x_5365_ = lean_box(0);
v___x_5366_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5330_, v_mkInfoTree_5322_, v___y_5323_, v___y_5324_, v___y_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v_a_5337_, v___x_5365_);
if (lean_obj_tag(v___x_5366_) == 0)
{
lean_object* v___x_5368_; uint8_t v_isShared_5369_; uint8_t v_isSharedCheck_5373_; 
v_isSharedCheck_5373_ = !lean_is_exclusive(v___x_5366_);
if (v_isSharedCheck_5373_ == 0)
{
lean_object* v_unused_5374_; 
v_unused_5374_ = lean_ctor_get(v___x_5366_, 0);
lean_dec(v_unused_5374_);
v___x_5368_ = v___x_5366_;
v_isShared_5369_ = v_isSharedCheck_5373_;
goto v_resetjp_5367_;
}
else
{
lean_dec(v___x_5366_);
v___x_5368_ = lean_box(0);
v_isShared_5369_ = v_isSharedCheck_5373_;
goto v_resetjp_5367_;
}
v_resetjp_5367_:
{
lean_object* v___x_5371_; 
if (v_isShared_5369_ == 0)
{
lean_ctor_set_tag(v___x_5368_, 1);
lean_ctor_set(v___x_5368_, 0, v_a_5364_);
v___x_5371_ = v___x_5368_;
goto v_reusejp_5370_;
}
else
{
lean_object* v_reuseFailAlloc_5372_; 
v_reuseFailAlloc_5372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5372_, 0, v_a_5364_);
v___x_5371_ = v_reuseFailAlloc_5372_;
goto v_reusejp_5370_;
}
v_reusejp_5370_:
{
return v___x_5371_;
}
}
}
else
{
lean_object* v_a_5375_; lean_object* v___x_5377_; uint8_t v_isShared_5378_; uint8_t v_isSharedCheck_5382_; 
lean_dec(v_a_5364_);
v_a_5375_ = lean_ctor_get(v___x_5366_, 0);
v_isSharedCheck_5382_ = !lean_is_exclusive(v___x_5366_);
if (v_isSharedCheck_5382_ == 0)
{
v___x_5377_ = v___x_5366_;
v_isShared_5378_ = v_isSharedCheck_5382_;
goto v_resetjp_5376_;
}
else
{
lean_inc(v_a_5375_);
lean_dec(v___x_5366_);
v___x_5377_ = lean_box(0);
v_isShared_5378_ = v_isSharedCheck_5382_;
goto v_resetjp_5376_;
}
v_resetjp_5376_:
{
lean_object* v___x_5380_; 
if (v_isShared_5378_ == 0)
{
v___x_5380_ = v___x_5377_;
goto v_reusejp_5379_;
}
else
{
lean_object* v_reuseFailAlloc_5381_; 
v_reuseFailAlloc_5381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5381_, 0, v_a_5375_);
v___x_5380_ = v_reuseFailAlloc_5381_;
goto v_reusejp_5379_;
}
v_reusejp_5379_:
{
return v___x_5380_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___boxed(lean_object* v_x_5383_, lean_object* v_mkInfoTree_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_){
_start:
{
lean_object* v_res_5394_; 
v_res_5394_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v_x_5383_, v_mkInfoTree_5384_, v___y_5385_, v___y_5386_, v___y_5387_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_, v___y_5392_);
lean_dec(v___y_5392_);
lean_dec_ref(v___y_5391_);
lean_dec(v___y_5390_);
lean_dec_ref(v___y_5389_);
lean_dec(v___y_5388_);
lean_dec_ref(v___y_5387_);
lean_dec(v___y_5386_);
lean_dec_ref(v___y_5385_);
return v_res_5394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(lean_object* v_a_5395_, lean_object* v_trees_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_, lean_object* v___y_5401_, lean_object* v___y_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_){
_start:
{
lean_object* v___x_5406_; 
lean_inc(v___y_5404_);
lean_inc_ref(v___y_5403_);
lean_inc(v___y_5402_);
lean_inc_ref(v___y_5401_);
lean_inc(v___y_5400_);
lean_inc_ref(v___y_5399_);
lean_inc(v___y_5398_);
lean_inc_ref(v___y_5397_);
v___x_5406_ = lean_apply_9(v_a_5395_, v___y_5397_, v___y_5398_, v___y_5399_, v___y_5400_, v___y_5401_, v___y_5402_, v___y_5403_, v___y_5404_, lean_box(0));
if (lean_obj_tag(v___x_5406_) == 0)
{
lean_object* v_a_5407_; lean_object* v___x_5409_; uint8_t v_isShared_5410_; uint8_t v_isSharedCheck_5415_; 
v_a_5407_ = lean_ctor_get(v___x_5406_, 0);
v_isSharedCheck_5415_ = !lean_is_exclusive(v___x_5406_);
if (v_isSharedCheck_5415_ == 0)
{
v___x_5409_ = v___x_5406_;
v_isShared_5410_ = v_isSharedCheck_5415_;
goto v_resetjp_5408_;
}
else
{
lean_inc(v_a_5407_);
lean_dec(v___x_5406_);
v___x_5409_ = lean_box(0);
v_isShared_5410_ = v_isSharedCheck_5415_;
goto v_resetjp_5408_;
}
v_resetjp_5408_:
{
lean_object* v___x_5411_; lean_object* v___x_5413_; 
v___x_5411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5411_, 0, v_a_5407_);
lean_ctor_set(v___x_5411_, 1, v_trees_5396_);
if (v_isShared_5410_ == 0)
{
lean_ctor_set(v___x_5409_, 0, v___x_5411_);
v___x_5413_ = v___x_5409_;
goto v_reusejp_5412_;
}
else
{
lean_object* v_reuseFailAlloc_5414_; 
v_reuseFailAlloc_5414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5414_, 0, v___x_5411_);
v___x_5413_ = v_reuseFailAlloc_5414_;
goto v_reusejp_5412_;
}
v_reusejp_5412_:
{
return v___x_5413_;
}
}
}
else
{
lean_object* v_a_5416_; lean_object* v___x_5418_; uint8_t v_isShared_5419_; uint8_t v_isSharedCheck_5423_; 
lean_dec_ref(v_trees_5396_);
v_a_5416_ = lean_ctor_get(v___x_5406_, 0);
v_isSharedCheck_5423_ = !lean_is_exclusive(v___x_5406_);
if (v_isSharedCheck_5423_ == 0)
{
v___x_5418_ = v___x_5406_;
v_isShared_5419_ = v_isSharedCheck_5423_;
goto v_resetjp_5417_;
}
else
{
lean_inc(v_a_5416_);
lean_dec(v___x_5406_);
v___x_5418_ = lean_box(0);
v_isShared_5419_ = v_isSharedCheck_5423_;
goto v_resetjp_5417_;
}
v_resetjp_5417_:
{
lean_object* v___x_5421_; 
if (v_isShared_5419_ == 0)
{
v___x_5421_ = v___x_5418_;
goto v_reusejp_5420_;
}
else
{
lean_object* v_reuseFailAlloc_5422_; 
v_reuseFailAlloc_5422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5422_, 0, v_a_5416_);
v___x_5421_ = v_reuseFailAlloc_5422_;
goto v_reusejp_5420_;
}
v_reusejp_5420_:
{
return v___x_5421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed(lean_object* v_a_5424_, lean_object* v_trees_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_, lean_object* v___y_5434_){
_start:
{
lean_object* v_res_5435_; 
v_res_5435_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(v_a_5424_, v_trees_5425_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_);
lean_dec(v___y_5433_);
lean_dec_ref(v___y_5432_);
lean_dec(v___y_5431_);
lean_dec_ref(v___y_5430_);
lean_dec(v___y_5429_);
lean_dec_ref(v___y_5428_);
lean_dec(v___y_5427_);
lean_dec_ref(v___y_5426_);
return v_res_5435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(lean_object* v___x_5436_, lean_object* v_tactic_5437_, lean_object* v_ref_5438_, lean_object* v___y_5439_, lean_object* v___y_5440_, lean_object* v___y_5441_, lean_object* v___y_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_, lean_object* v___y_5445_, lean_object* v___y_5446_){
_start:
{
lean_object* v___x_5448_; 
v___x_5448_ = l_Lean_Elab_Tactic_setGoals___redArg(v___x_5436_, v___y_5440_);
if (lean_obj_tag(v___x_5448_) == 0)
{
lean_object* v___x_5449_; 
lean_dec_ref_known(v___x_5448_, 1);
v___x_5449_ = l_Lean_Elab_WF_applyCleanWfTactic(v___y_5439_, v___y_5440_, v___y_5441_, v___y_5442_, v___y_5443_, v___y_5444_, v___y_5445_, v___y_5446_);
if (lean_obj_tag(v___x_5449_) == 0)
{
lean_object* v___x_5450_; lean_object* v___x_5451_; 
lean_dec_ref_known(v___x_5449_, 1);
v___x_5450_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_5450_, 0, v_tactic_5437_);
v___x_5451_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v_ref_5438_, v___y_5439_, v___y_5440_, v___y_5441_, v___y_5442_, v___y_5443_, v___y_5444_, v___y_5445_, v___y_5446_);
if (lean_obj_tag(v___x_5451_) == 0)
{
lean_object* v_a_5452_; lean_object* v___f_5453_; lean_object* v___x_5454_; 
v_a_5452_ = lean_ctor_get(v___x_5451_, 0);
lean_inc(v_a_5452_);
lean_dec_ref_known(v___x_5451_, 1);
v___f_5453_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed), 11, 1);
lean_closure_set(v___f_5453_, 0, v_a_5452_);
v___x_5454_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v___x_5450_, v___f_5453_, v___y_5439_, v___y_5440_, v___y_5441_, v___y_5442_, v___y_5443_, v___y_5444_, v___y_5445_, v___y_5446_);
return v___x_5454_;
}
else
{
lean_object* v_a_5455_; lean_object* v___x_5457_; uint8_t v_isShared_5458_; uint8_t v_isSharedCheck_5462_; 
lean_dec_ref(v___x_5450_);
v_a_5455_ = lean_ctor_get(v___x_5451_, 0);
v_isSharedCheck_5462_ = !lean_is_exclusive(v___x_5451_);
if (v_isSharedCheck_5462_ == 0)
{
v___x_5457_ = v___x_5451_;
v_isShared_5458_ = v_isSharedCheck_5462_;
goto v_resetjp_5456_;
}
else
{
lean_inc(v_a_5455_);
lean_dec(v___x_5451_);
v___x_5457_ = lean_box(0);
v_isShared_5458_ = v_isSharedCheck_5462_;
goto v_resetjp_5456_;
}
v_resetjp_5456_:
{
lean_object* v___x_5460_; 
if (v_isShared_5458_ == 0)
{
v___x_5460_ = v___x_5457_;
goto v_reusejp_5459_;
}
else
{
lean_object* v_reuseFailAlloc_5461_; 
v_reuseFailAlloc_5461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5461_, 0, v_a_5455_);
v___x_5460_ = v_reuseFailAlloc_5461_;
goto v_reusejp_5459_;
}
v_reusejp_5459_:
{
return v___x_5460_;
}
}
}
}
else
{
lean_dec(v_ref_5438_);
lean_dec(v_tactic_5437_);
return v___x_5449_;
}
}
else
{
lean_dec(v_ref_5438_);
lean_dec(v_tactic_5437_);
return v___x_5448_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed(lean_object* v___x_5463_, lean_object* v_tactic_5464_, lean_object* v_ref_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_, lean_object* v___y_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_){
_start:
{
lean_object* v_res_5475_; 
v_res_5475_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(v___x_5463_, v_tactic_5464_, v_ref_5465_, v___y_5466_, v___y_5467_, v___y_5468_, v___y_5469_, v___y_5470_, v___y_5471_, v___y_5472_, v___y_5473_);
lean_dec(v___y_5473_);
lean_dec_ref(v___y_5472_);
lean_dec(v___y_5471_);
lean_dec_ref(v___y_5470_);
lean_dec(v___y_5469_);
lean_dec_ref(v___y_5468_);
lean_dec(v___y_5467_);
lean_dec_ref(v___y_5466_);
return v_res_5475_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5476_; lean_object* v___x_5477_; 
v___x_5476_ = lean_box(1);
v___x_5477_ = l_Lean_MessageData_ofFormat(v___x_5476_);
return v___x_5477_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_5481_; lean_object* v___x_5482_; 
v___x_5481_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2));
v___x_5482_ = l_Lean_MessageData_ofFormat(v___x_5481_);
return v___x_5482_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(lean_object* v_x_5483_, lean_object* v_x_5484_){
_start:
{
if (lean_obj_tag(v_x_5484_) == 0)
{
return v_x_5483_;
}
else
{
lean_object* v_head_5485_; lean_object* v_tail_5486_; lean_object* v___x_5488_; uint8_t v_isShared_5489_; uint8_t v_isSharedCheck_5508_; 
v_head_5485_ = lean_ctor_get(v_x_5484_, 0);
v_tail_5486_ = lean_ctor_get(v_x_5484_, 1);
v_isSharedCheck_5508_ = !lean_is_exclusive(v_x_5484_);
if (v_isSharedCheck_5508_ == 0)
{
v___x_5488_ = v_x_5484_;
v_isShared_5489_ = v_isSharedCheck_5508_;
goto v_resetjp_5487_;
}
else
{
lean_inc(v_tail_5486_);
lean_inc(v_head_5485_);
lean_dec(v_x_5484_);
v___x_5488_ = lean_box(0);
v_isShared_5489_ = v_isSharedCheck_5508_;
goto v_resetjp_5487_;
}
v_resetjp_5487_:
{
lean_object* v_before_5490_; lean_object* v___x_5492_; uint8_t v_isShared_5493_; uint8_t v_isSharedCheck_5506_; 
v_before_5490_ = lean_ctor_get(v_head_5485_, 0);
v_isSharedCheck_5506_ = !lean_is_exclusive(v_head_5485_);
if (v_isSharedCheck_5506_ == 0)
{
lean_object* v_unused_5507_; 
v_unused_5507_ = lean_ctor_get(v_head_5485_, 1);
lean_dec(v_unused_5507_);
v___x_5492_ = v_head_5485_;
v_isShared_5493_ = v_isSharedCheck_5506_;
goto v_resetjp_5491_;
}
else
{
lean_inc(v_before_5490_);
lean_dec(v_head_5485_);
v___x_5492_ = lean_box(0);
v_isShared_5493_ = v_isSharedCheck_5506_;
goto v_resetjp_5491_;
}
v_resetjp_5491_:
{
lean_object* v___x_5494_; lean_object* v___x_5496_; 
v___x_5494_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0);
if (v_isShared_5493_ == 0)
{
lean_ctor_set_tag(v___x_5492_, 7);
lean_ctor_set(v___x_5492_, 1, v___x_5494_);
lean_ctor_set(v___x_5492_, 0, v_x_5483_);
v___x_5496_ = v___x_5492_;
goto v_reusejp_5495_;
}
else
{
lean_object* v_reuseFailAlloc_5505_; 
v_reuseFailAlloc_5505_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5505_, 0, v_x_5483_);
lean_ctor_set(v_reuseFailAlloc_5505_, 1, v___x_5494_);
v___x_5496_ = v_reuseFailAlloc_5505_;
goto v_reusejp_5495_;
}
v_reusejp_5495_:
{
lean_object* v___x_5497_; lean_object* v___x_5499_; 
v___x_5497_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3);
if (v_isShared_5489_ == 0)
{
lean_ctor_set_tag(v___x_5488_, 7);
lean_ctor_set(v___x_5488_, 1, v___x_5497_);
lean_ctor_set(v___x_5488_, 0, v___x_5496_);
v___x_5499_ = v___x_5488_;
goto v_reusejp_5498_;
}
else
{
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v___x_5496_);
lean_ctor_set(v_reuseFailAlloc_5504_, 1, v___x_5497_);
v___x_5499_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5498_;
}
v_reusejp_5498_:
{
lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; 
v___x_5500_ = l_Lean_MessageData_ofSyntax(v_before_5490_);
v___x_5501_ = l_Lean_indentD(v___x_5500_);
v___x_5502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5502_, 0, v___x_5499_);
lean_ctor_set(v___x_5502_, 1, v___x_5501_);
v_x_5483_ = v___x_5502_;
v_x_5484_ = v_tail_5486_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_5512_; lean_object* v___x_5513_; 
v___x_5512_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1));
v___x_5513_ = l_Lean_MessageData_ofFormat(v___x_5512_);
return v___x_5513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(lean_object* v_msgData_5514_, lean_object* v_macroStack_5515_, lean_object* v___y_5516_){
_start:
{
lean_object* v_toCold_5518_; lean_object* v_options_5519_; lean_object* v___x_5520_; uint8_t v___x_5521_; 
v_toCold_5518_ = lean_ctor_get(v___y_5516_, 0);
v_options_5519_ = lean_ctor_get(v_toCold_5518_, 2);
v___x_5520_ = l_Lean_Elab_pp_macroStack;
v___x_5521_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v_options_5519_, v___x_5520_);
if (v___x_5521_ == 0)
{
lean_object* v___x_5522_; 
lean_dec(v_macroStack_5515_);
v___x_5522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5522_, 0, v_msgData_5514_);
return v___x_5522_;
}
else
{
if (lean_obj_tag(v_macroStack_5515_) == 0)
{
lean_object* v___x_5523_; 
v___x_5523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5523_, 0, v_msgData_5514_);
return v___x_5523_;
}
else
{
lean_object* v_head_5524_; lean_object* v_after_5525_; lean_object* v___x_5527_; uint8_t v_isShared_5528_; uint8_t v_isSharedCheck_5540_; 
v_head_5524_ = lean_ctor_get(v_macroStack_5515_, 0);
lean_inc(v_head_5524_);
v_after_5525_ = lean_ctor_get(v_head_5524_, 1);
v_isSharedCheck_5540_ = !lean_is_exclusive(v_head_5524_);
if (v_isSharedCheck_5540_ == 0)
{
lean_object* v_unused_5541_; 
v_unused_5541_ = lean_ctor_get(v_head_5524_, 0);
lean_dec(v_unused_5541_);
v___x_5527_ = v_head_5524_;
v_isShared_5528_ = v_isSharedCheck_5540_;
goto v_resetjp_5526_;
}
else
{
lean_inc(v_after_5525_);
lean_dec(v_head_5524_);
v___x_5527_ = lean_box(0);
v_isShared_5528_ = v_isSharedCheck_5540_;
goto v_resetjp_5526_;
}
v_resetjp_5526_:
{
lean_object* v___x_5529_; lean_object* v___x_5531_; 
v___x_5529_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0);
if (v_isShared_5528_ == 0)
{
lean_ctor_set_tag(v___x_5527_, 7);
lean_ctor_set(v___x_5527_, 1, v___x_5529_);
lean_ctor_set(v___x_5527_, 0, v_msgData_5514_);
v___x_5531_ = v___x_5527_;
goto v_reusejp_5530_;
}
else
{
lean_object* v_reuseFailAlloc_5539_; 
v_reuseFailAlloc_5539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5539_, 0, v_msgData_5514_);
lean_ctor_set(v_reuseFailAlloc_5539_, 1, v___x_5529_);
v___x_5531_ = v_reuseFailAlloc_5539_;
goto v_reusejp_5530_;
}
v_reusejp_5530_:
{
lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v_msgData_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; 
v___x_5532_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2);
v___x_5533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5533_, 0, v___x_5531_);
lean_ctor_set(v___x_5533_, 1, v___x_5532_);
v___x_5534_ = l_Lean_MessageData_ofSyntax(v_after_5525_);
v___x_5535_ = l_Lean_indentD(v___x_5534_);
v_msgData_5536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_5536_, 0, v___x_5533_);
lean_ctor_set(v_msgData_5536_, 1, v___x_5535_);
v___x_5537_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(v_msgData_5536_, v_macroStack_5515_);
v___x_5538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5538_, 0, v___x_5537_);
return v___x_5538_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___boxed(lean_object* v_msgData_5542_, lean_object* v_macroStack_5543_, lean_object* v___y_5544_, lean_object* v___y_5545_){
_start:
{
lean_object* v_res_5546_; 
v_res_5546_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_msgData_5542_, v_macroStack_5543_, v___y_5544_);
lean_dec_ref(v___y_5544_);
return v_res_5546_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(lean_object* v_msg_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_){
_start:
{
lean_object* v_ref_5555_; lean_object* v_macroStack_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v_a_5559_; lean_object* v___x_5560_; lean_object* v_a_5561_; lean_object* v___x_5563_; uint8_t v_isShared_5564_; uint8_t v_isSharedCheck_5569_; 
v_ref_5555_ = lean_ctor_get(v___y_5552_, 2);
v_macroStack_5556_ = lean_ctor_get(v___y_5548_, 1);
v___x_5557_ = l_Lean_Elab_getBetterRef(v_ref_5555_, v_macroStack_5556_);
v___x_5558_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_5547_, v___y_5550_, v___y_5551_, v___y_5552_, v___y_5553_);
v_a_5559_ = lean_ctor_get(v___x_5558_, 0);
lean_inc(v_a_5559_);
lean_dec_ref(v___x_5558_);
lean_inc(v_macroStack_5556_);
v___x_5560_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_a_5559_, v_macroStack_5556_, v___y_5552_);
v_a_5561_ = lean_ctor_get(v___x_5560_, 0);
v_isSharedCheck_5569_ = !lean_is_exclusive(v___x_5560_);
if (v_isSharedCheck_5569_ == 0)
{
v___x_5563_ = v___x_5560_;
v_isShared_5564_ = v_isSharedCheck_5569_;
goto v_resetjp_5562_;
}
else
{
lean_inc(v_a_5561_);
lean_dec(v___x_5560_);
v___x_5563_ = lean_box(0);
v_isShared_5564_ = v_isSharedCheck_5569_;
goto v_resetjp_5562_;
}
v_resetjp_5562_:
{
lean_object* v___x_5565_; lean_object* v___x_5567_; 
v___x_5565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5565_, 0, v___x_5557_);
lean_ctor_set(v___x_5565_, 1, v_a_5561_);
if (v_isShared_5564_ == 0)
{
lean_ctor_set_tag(v___x_5563_, 1);
lean_ctor_set(v___x_5563_, 0, v___x_5565_);
v___x_5567_ = v___x_5563_;
goto v_reusejp_5566_;
}
else
{
lean_object* v_reuseFailAlloc_5568_; 
v_reuseFailAlloc_5568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5568_, 0, v___x_5565_);
v___x_5567_ = v_reuseFailAlloc_5568_;
goto v_reusejp_5566_;
}
v_reusejp_5566_:
{
return v___x_5567_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg___boxed(lean_object* v_msg_5570_, lean_object* v___y_5571_, lean_object* v___y_5572_, lean_object* v___y_5573_, lean_object* v___y_5574_, lean_object* v___y_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_){
_start:
{
lean_object* v_res_5578_; 
v_res_5578_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v_msg_5570_, v___y_5571_, v___y_5572_, v___y_5573_, v___y_5574_, v___y_5575_, v___y_5576_);
lean_dec(v___y_5576_);
lean_dec_ref(v___y_5575_);
lean_dec(v___y_5574_);
lean_dec_ref(v___y_5573_);
lean_dec(v___y_5572_);
lean_dec_ref(v___y_5571_);
return v_res_5578_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1(void){
_start:
{
lean_object* v___x_5580_; lean_object* v___x_5581_; 
v___x_5580_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0));
v___x_5581_ = l_Lean_stringToMessageData(v___x_5580_);
return v___x_5581_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(lean_object* v_as_5582_, size_t v_sz_5583_, size_t v_i_5584_, lean_object* v_b_5585_, lean_object* v___y_5586_, lean_object* v___y_5587_, lean_object* v___y_5588_, lean_object* v___y_5589_, lean_object* v___y_5590_, lean_object* v___y_5591_){
_start:
{
lean_object* v_a_5594_; uint8_t v___x_5598_; 
v___x_5598_ = lean_usize_dec_lt(v_i_5584_, v_sz_5583_);
if (v___x_5598_ == 0)
{
lean_object* v___x_5599_; 
v___x_5599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5599_, 0, v_b_5585_);
return v___x_5599_;
}
else
{
lean_object* v___x_5600_; lean_object* v_a_5601_; lean_object* v___x_5602_; 
v___x_5600_ = lean_box(0);
v_a_5601_ = lean_array_uget_borrowed(v_as_5582_, v_i_5584_);
lean_inc(v_a_5601_);
v___x_5602_ = l_Lean_MVarId_getType(v_a_5601_, v___y_5588_, v___y_5589_, v___y_5590_, v___y_5591_);
if (lean_obj_tag(v___x_5602_) == 0)
{
lean_object* v_a_5603_; lean_object* v___x_5604_; 
v_a_5603_ = lean_ctor_get(v___x_5602_, 0);
lean_inc(v_a_5603_);
lean_dec_ref_known(v___x_5602_, 1);
lean_inc(v_a_5601_);
v___x_5604_ = l_Lean_MVarId_getType(v_a_5601_, v___y_5588_, v___y_5589_, v___y_5590_, v___y_5591_);
if (lean_obj_tag(v___x_5604_) == 0)
{
lean_object* v_a_5605_; lean_object* v___x_5606_; 
v_a_5605_ = lean_ctor_get(v___x_5604_, 0);
lean_inc(v_a_5605_);
lean_dec_ref_known(v___x_5604_, 1);
v___x_5606_ = l_Lean_getRecAppSyntax_x3f(v_a_5605_);
lean_dec(v_a_5605_);
if (lean_obj_tag(v___x_5606_) == 1)
{
lean_object* v_val_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; 
v_val_5607_ = lean_ctor_get(v___x_5606_, 0);
lean_inc(v_val_5607_);
lean_dec_ref_known(v___x_5606_, 1);
v___x_5608_ = l_Lean_Expr_mdataExpr_x21(v_a_5603_);
lean_dec(v_a_5603_);
lean_inc(v_a_5601_);
v___x_5609_ = l_Lean_MVarId_setType___redArg(v_a_5601_, v___x_5608_, v___y_5589_);
if (lean_obj_tag(v___x_5609_) == 0)
{
lean_object* v_toCold_5610_; lean_object* v_currRecDepth_5611_; lean_object* v_ref_5612_; uint8_t v_diag_5613_; uint8_t v_suppressElabErrors_5614_; lean_object* v_ref_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; 
lean_dec_ref_known(v___x_5609_, 1);
v_toCold_5610_ = lean_ctor_get(v___y_5590_, 0);
v_currRecDepth_5611_ = lean_ctor_get(v___y_5590_, 1);
v_ref_5612_ = lean_ctor_get(v___y_5590_, 2);
v_diag_5613_ = lean_ctor_get_uint8(v___y_5590_, sizeof(void*)*3);
v_suppressElabErrors_5614_ = lean_ctor_get_uint8(v___y_5590_, sizeof(void*)*3 + 1);
v_ref_5615_ = l_Lean_replaceRef(v_val_5607_, v_ref_5612_);
lean_dec(v_val_5607_);
lean_inc(v_currRecDepth_5611_);
lean_inc_ref(v_toCold_5610_);
v___x_5616_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5616_, 0, v_toCold_5610_);
lean_ctor_set(v___x_5616_, 1, v_currRecDepth_5611_);
lean_ctor_set(v___x_5616_, 2, v_ref_5615_);
lean_ctor_set_uint8(v___x_5616_, sizeof(void*)*3, v_diag_5613_);
lean_ctor_set_uint8(v___x_5616_, sizeof(void*)*3 + 1, v_suppressElabErrors_5614_);
lean_inc(v_a_5601_);
v___x_5617_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(v_a_5601_, v___y_5586_, v___y_5587_, v___y_5588_, v___y_5589_, v___x_5616_, v___y_5591_);
lean_dec_ref_known(v___x_5616_, 3);
if (lean_obj_tag(v___x_5617_) == 0)
{
lean_dec_ref_known(v___x_5617_, 1);
v_a_5594_ = v___x_5600_;
goto v___jp_5593_;
}
else
{
return v___x_5617_;
}
}
else
{
lean_dec(v_val_5607_);
return v___x_5609_;
}
}
else
{
lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; 
lean_dec(v___x_5606_);
v___x_5618_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1);
v___x_5619_ = l_Lean_indentExpr(v_a_5603_);
v___x_5620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5620_, 0, v___x_5618_);
lean_ctor_set(v___x_5620_, 1, v___x_5619_);
v___x_5621_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v___x_5620_, v___y_5586_, v___y_5587_, v___y_5588_, v___y_5589_, v___y_5590_, v___y_5591_);
if (lean_obj_tag(v___x_5621_) == 0)
{
lean_dec_ref_known(v___x_5621_, 1);
v_a_5594_ = v___x_5600_;
goto v___jp_5593_;
}
else
{
return v___x_5621_;
}
}
}
else
{
lean_object* v_a_5622_; lean_object* v___x_5624_; uint8_t v_isShared_5625_; uint8_t v_isSharedCheck_5629_; 
lean_dec(v_a_5603_);
v_a_5622_ = lean_ctor_get(v___x_5604_, 0);
v_isSharedCheck_5629_ = !lean_is_exclusive(v___x_5604_);
if (v_isSharedCheck_5629_ == 0)
{
v___x_5624_ = v___x_5604_;
v_isShared_5625_ = v_isSharedCheck_5629_;
goto v_resetjp_5623_;
}
else
{
lean_inc(v_a_5622_);
lean_dec(v___x_5604_);
v___x_5624_ = lean_box(0);
v_isShared_5625_ = v_isSharedCheck_5629_;
goto v_resetjp_5623_;
}
v_resetjp_5623_:
{
lean_object* v___x_5627_; 
if (v_isShared_5625_ == 0)
{
v___x_5627_ = v___x_5624_;
goto v_reusejp_5626_;
}
else
{
lean_object* v_reuseFailAlloc_5628_; 
v_reuseFailAlloc_5628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5628_, 0, v_a_5622_);
v___x_5627_ = v_reuseFailAlloc_5628_;
goto v_reusejp_5626_;
}
v_reusejp_5626_:
{
return v___x_5627_;
}
}
}
}
else
{
lean_object* v_a_5630_; lean_object* v___x_5632_; uint8_t v_isShared_5633_; uint8_t v_isSharedCheck_5637_; 
v_a_5630_ = lean_ctor_get(v___x_5602_, 0);
v_isSharedCheck_5637_ = !lean_is_exclusive(v___x_5602_);
if (v_isSharedCheck_5637_ == 0)
{
v___x_5632_ = v___x_5602_;
v_isShared_5633_ = v_isSharedCheck_5637_;
goto v_resetjp_5631_;
}
else
{
lean_inc(v_a_5630_);
lean_dec(v___x_5602_);
v___x_5632_ = lean_box(0);
v_isShared_5633_ = v_isSharedCheck_5637_;
goto v_resetjp_5631_;
}
v_resetjp_5631_:
{
lean_object* v___x_5635_; 
if (v_isShared_5633_ == 0)
{
v___x_5635_ = v___x_5632_;
goto v_reusejp_5634_;
}
else
{
lean_object* v_reuseFailAlloc_5636_; 
v_reuseFailAlloc_5636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5636_, 0, v_a_5630_);
v___x_5635_ = v_reuseFailAlloc_5636_;
goto v_reusejp_5634_;
}
v_reusejp_5634_:
{
return v___x_5635_;
}
}
}
}
v___jp_5593_:
{
size_t v___x_5595_; size_t v___x_5596_; 
v___x_5595_ = ((size_t)1ULL);
v___x_5596_ = lean_usize_add(v_i_5584_, v___x_5595_);
v_i_5584_ = v___x_5596_;
v_b_5585_ = v_a_5594_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___boxed(lean_object* v_as_5638_, lean_object* v_sz_5639_, lean_object* v_i_5640_, lean_object* v_b_5641_, lean_object* v___y_5642_, lean_object* v___y_5643_, lean_object* v___y_5644_, lean_object* v___y_5645_, lean_object* v___y_5646_, lean_object* v___y_5647_, lean_object* v___y_5648_){
_start:
{
size_t v_sz_boxed_5649_; size_t v_i_boxed_5650_; lean_object* v_res_5651_; 
v_sz_boxed_5649_ = lean_unbox_usize(v_sz_5639_);
lean_dec(v_sz_5639_);
v_i_boxed_5650_ = lean_unbox_usize(v_i_5640_);
lean_dec(v_i_5640_);
v_res_5651_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(v_as_5638_, v_sz_boxed_5649_, v_i_boxed_5650_, v_b_5641_, v___y_5642_, v___y_5643_, v___y_5644_, v___y_5645_, v___y_5646_, v___y_5647_);
lean_dec(v___y_5647_);
lean_dec_ref(v___y_5646_);
lean_dec(v___y_5645_);
lean_dec_ref(v___y_5644_);
lean_dec(v___y_5643_);
lean_dec_ref(v___y_5642_);
lean_dec_ref(v_as_5638_);
return v_res_5651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(lean_object* v_as_5652_, size_t v_i_5653_, size_t v_stop_5654_, lean_object* v_b_5655_, lean_object* v___y_5656_, lean_object* v___y_5657_, lean_object* v___y_5658_, lean_object* v___y_5659_){
_start:
{
uint8_t v___x_5661_; 
v___x_5661_ = lean_usize_dec_eq(v_i_5653_, v_stop_5654_);
if (v___x_5661_ == 0)
{
lean_object* v___x_5662_; lean_object* v___x_5663_; 
v___x_5662_ = lean_array_uget_borrowed(v_as_5652_, v_i_5653_);
lean_inc(v___x_5662_);
v___x_5663_ = l_Lean_MVarId_getType(v___x_5662_, v___y_5656_, v___y_5657_, v___y_5658_, v___y_5659_);
if (lean_obj_tag(v___x_5663_) == 0)
{
lean_object* v_a_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; 
v_a_5664_ = lean_ctor_get(v___x_5663_, 0);
lean_inc(v_a_5664_);
lean_dec_ref_known(v___x_5663_, 1);
v___x_5665_ = l_Lean_Expr_mdataExpr_x21(v_a_5664_);
lean_dec(v_a_5664_);
lean_inc(v___x_5662_);
v___x_5666_ = l_Lean_MVarId_setType___redArg(v___x_5662_, v___x_5665_, v___y_5657_);
if (lean_obj_tag(v___x_5666_) == 0)
{
lean_object* v_a_5667_; size_t v___x_5668_; size_t v___x_5669_; 
v_a_5667_ = lean_ctor_get(v___x_5666_, 0);
lean_inc(v_a_5667_);
lean_dec_ref_known(v___x_5666_, 1);
v___x_5668_ = ((size_t)1ULL);
v___x_5669_ = lean_usize_add(v_i_5653_, v___x_5668_);
v_i_5653_ = v___x_5669_;
v_b_5655_ = v_a_5667_;
goto _start;
}
else
{
return v___x_5666_;
}
}
else
{
lean_object* v_a_5671_; lean_object* v___x_5673_; uint8_t v_isShared_5674_; uint8_t v_isSharedCheck_5678_; 
v_a_5671_ = lean_ctor_get(v___x_5663_, 0);
v_isSharedCheck_5678_ = !lean_is_exclusive(v___x_5663_);
if (v_isSharedCheck_5678_ == 0)
{
v___x_5673_ = v___x_5663_;
v_isShared_5674_ = v_isSharedCheck_5678_;
goto v_resetjp_5672_;
}
else
{
lean_inc(v_a_5671_);
lean_dec(v___x_5663_);
v___x_5673_ = lean_box(0);
v_isShared_5674_ = v_isSharedCheck_5678_;
goto v_resetjp_5672_;
}
v_resetjp_5672_:
{
lean_object* v___x_5676_; 
if (v_isShared_5674_ == 0)
{
v___x_5676_ = v___x_5673_;
goto v_reusejp_5675_;
}
else
{
lean_object* v_reuseFailAlloc_5677_; 
v_reuseFailAlloc_5677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5677_, 0, v_a_5671_);
v___x_5676_ = v_reuseFailAlloc_5677_;
goto v_reusejp_5675_;
}
v_reusejp_5675_:
{
return v___x_5676_;
}
}
}
}
else
{
lean_object* v___x_5679_; 
v___x_5679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5679_, 0, v_b_5655_);
return v___x_5679_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg___boxed(lean_object* v_as_5680_, lean_object* v_i_5681_, lean_object* v_stop_5682_, lean_object* v_b_5683_, lean_object* v___y_5684_, lean_object* v___y_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_){
_start:
{
size_t v_i_boxed_5689_; size_t v_stop_boxed_5690_; lean_object* v_res_5691_; 
v_i_boxed_5689_ = lean_unbox_usize(v_i_5681_);
lean_dec(v_i_5681_);
v_stop_boxed_5690_ = lean_unbox_usize(v_stop_5682_);
lean_dec(v_stop_5682_);
v_res_5691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v_as_5680_, v_i_boxed_5689_, v_stop_boxed_5690_, v_b_5683_, v___y_5684_, v___y_5685_, v___y_5686_, v___y_5687_);
lean_dec(v___y_5687_);
lean_dec_ref(v___y_5686_);
lean_dec(v___y_5685_);
lean_dec_ref(v___y_5684_);
lean_dec_ref(v_as_5680_);
return v_res_5691_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(lean_object* v___x_5692_, lean_object* v___x_5693_, lean_object* v___x_5694_, lean_object* v___y_5695_, lean_object* v___y_5696_, lean_object* v___y_5697_, lean_object* v___y_5698_, lean_object* v___y_5699_, lean_object* v___y_5700_){
_start:
{
if (lean_obj_tag(v___x_5692_) == 0)
{
lean_object* v___x_5702_; size_t v_sz_5703_; size_t v___x_5704_; lean_object* v___x_5705_; 
v___x_5702_ = lean_box(0);
v_sz_5703_ = lean_array_size(v___x_5693_);
v___x_5704_ = ((size_t)0ULL);
v___x_5705_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(v___x_5693_, v_sz_5703_, v___x_5704_, v___x_5702_, v___y_5695_, v___y_5696_, v___y_5697_, v___y_5698_, v___y_5699_, v___y_5700_);
lean_dec_ref(v___x_5693_);
if (lean_obj_tag(v___x_5705_) == 0)
{
lean_object* v___x_5707_; uint8_t v_isShared_5708_; uint8_t v_isSharedCheck_5712_; 
v_isSharedCheck_5712_ = !lean_is_exclusive(v___x_5705_);
if (v_isSharedCheck_5712_ == 0)
{
lean_object* v_unused_5713_; 
v_unused_5713_ = lean_ctor_get(v___x_5705_, 0);
lean_dec(v_unused_5713_);
v___x_5707_ = v___x_5705_;
v_isShared_5708_ = v_isSharedCheck_5712_;
goto v_resetjp_5706_;
}
else
{
lean_dec(v___x_5705_);
v___x_5707_ = lean_box(0);
v_isShared_5708_ = v_isSharedCheck_5712_;
goto v_resetjp_5706_;
}
v_resetjp_5706_:
{
lean_object* v___x_5710_; 
if (v_isShared_5708_ == 0)
{
lean_ctor_set(v___x_5707_, 0, v___x_5702_);
v___x_5710_ = v___x_5707_;
goto v_reusejp_5709_;
}
else
{
lean_object* v_reuseFailAlloc_5711_; 
v_reuseFailAlloc_5711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5711_, 0, v___x_5702_);
v___x_5710_ = v_reuseFailAlloc_5711_;
goto v_reusejp_5709_;
}
v_reusejp_5709_:
{
return v___x_5710_;
}
}
}
else
{
return v___x_5705_;
}
}
else
{
lean_object* v_val_5714_; lean_object* v___x_5716_; uint8_t v_isShared_5717_; uint8_t v_isSharedCheck_5781_; 
v_val_5714_ = lean_ctor_get(v___x_5692_, 0);
v_isSharedCheck_5781_ = !lean_is_exclusive(v___x_5692_);
if (v_isSharedCheck_5781_ == 0)
{
v___x_5716_ = v___x_5692_;
v_isShared_5717_ = v_isSharedCheck_5781_;
goto v_resetjp_5715_;
}
else
{
lean_inc(v_val_5714_);
lean_dec(v___x_5692_);
v___x_5716_ = lean_box(0);
v_isShared_5717_ = v_isSharedCheck_5781_;
goto v_resetjp_5715_;
}
v_resetjp_5715_:
{
lean_object* v_ref_5718_; lean_object* v_tactic_5719_; lean_object* v_toCold_5720_; lean_object* v_currRecDepth_5721_; lean_object* v_ref_5722_; uint8_t v_diag_5723_; uint8_t v_suppressElabErrors_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v_ref_5727_; lean_object* v___x_5728_; lean_object* v___y_5754_; lean_object* v___y_5771_; uint8_t v___x_5772_; 
v_ref_5718_ = lean_ctor_get(v_val_5714_, 0);
lean_inc(v_ref_5718_);
v_tactic_5719_ = lean_ctor_get(v_val_5714_, 1);
lean_inc(v_tactic_5719_);
lean_dec(v_val_5714_);
v_toCold_5720_ = lean_ctor_get(v___y_5699_, 0);
v_currRecDepth_5721_ = lean_ctor_get(v___y_5699_, 1);
v_ref_5722_ = lean_ctor_get(v___y_5699_, 2);
v_diag_5723_ = lean_ctor_get_uint8(v___y_5699_, sizeof(void*)*3);
v_suppressElabErrors_5724_ = lean_ctor_get_uint8(v___y_5699_, sizeof(void*)*3 + 1);
v___x_5725_ = lean_unsigned_to_nat(0u);
v___x_5726_ = lean_array_get_size(v___x_5693_);
v_ref_5727_ = l_Lean_replaceRef(v_ref_5718_, v_ref_5722_);
lean_inc(v_currRecDepth_5721_);
lean_inc_ref(v_toCold_5720_);
v___x_5728_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5728_, 0, v_toCold_5720_);
lean_ctor_set(v___x_5728_, 1, v_currRecDepth_5721_);
lean_ctor_set(v___x_5728_, 2, v_ref_5727_);
lean_ctor_set_uint8(v___x_5728_, sizeof(void*)*3, v_diag_5723_);
lean_ctor_set_uint8(v___x_5728_, sizeof(void*)*3 + 1, v_suppressElabErrors_5724_);
v___x_5772_ = lean_nat_dec_lt(v___x_5725_, v___x_5726_);
if (v___x_5772_ == 0)
{
goto v___jp_5755_;
}
else
{
lean_object* v___x_5773_; uint8_t v___x_5774_; 
v___x_5773_ = lean_box(0);
v___x_5774_ = lean_nat_dec_le(v___x_5726_, v___x_5726_);
if (v___x_5774_ == 0)
{
if (v___x_5772_ == 0)
{
goto v___jp_5755_;
}
else
{
size_t v___x_5775_; size_t v___x_5776_; lean_object* v___x_5777_; 
v___x_5775_ = ((size_t)0ULL);
v___x_5776_ = lean_usize_of_nat(v___x_5726_);
v___x_5777_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v___x_5693_, v___x_5775_, v___x_5776_, v___x_5773_, v___y_5697_, v___y_5698_, v___x_5728_, v___y_5700_);
v___y_5771_ = v___x_5777_;
goto v___jp_5770_;
}
}
else
{
size_t v___x_5778_; size_t v___x_5779_; lean_object* v___x_5780_; 
v___x_5778_ = ((size_t)0ULL);
v___x_5779_ = lean_usize_of_nat(v___x_5726_);
v___x_5780_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v___x_5693_, v___x_5778_, v___x_5779_, v___x_5773_, v___y_5697_, v___y_5698_, v___x_5728_, v___y_5700_);
v___y_5771_ = v___x_5780_;
goto v___jp_5770_;
}
}
v___jp_5729_:
{
lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___f_5732_; lean_object* v___x_5733_; 
v___x_5730_ = lean_array_get(v___x_5694_, v___x_5693_, v___x_5725_);
v___x_5731_ = lean_array_to_list(v___x_5693_);
v___f_5732_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed), 12, 3);
lean_closure_set(v___f_5732_, 0, v___x_5731_);
lean_closure_set(v___f_5732_, 1, v_tactic_5719_);
lean_closure_set(v___f_5732_, 2, v_ref_5718_);
v___x_5733_ = l_Lean_Elab_Tactic_run(v___x_5730_, v___f_5732_, v___y_5695_, v___y_5696_, v___y_5697_, v___y_5698_, v___x_5728_, v___y_5700_);
if (lean_obj_tag(v___x_5733_) == 0)
{
lean_object* v_a_5734_; lean_object* v___x_5736_; uint8_t v_isShared_5737_; uint8_t v_isSharedCheck_5744_; 
v_a_5734_ = lean_ctor_get(v___x_5733_, 0);
v_isSharedCheck_5744_ = !lean_is_exclusive(v___x_5733_);
if (v_isSharedCheck_5744_ == 0)
{
v___x_5736_ = v___x_5733_;
v_isShared_5737_ = v_isSharedCheck_5744_;
goto v_resetjp_5735_;
}
else
{
lean_inc(v_a_5734_);
lean_dec(v___x_5733_);
v___x_5736_ = lean_box(0);
v_isShared_5737_ = v_isSharedCheck_5744_;
goto v_resetjp_5735_;
}
v_resetjp_5735_:
{
uint8_t v___x_5738_; 
v___x_5738_ = l_List_isEmpty___redArg(v_a_5734_);
if (v___x_5738_ == 0)
{
lean_object* v___x_5739_; 
lean_del_object(v___x_5736_);
v___x_5739_ = l_Lean_Elab_Term_reportUnsolvedGoals(v_a_5734_, v___y_5697_, v___y_5698_, v___x_5728_, v___y_5700_);
lean_dec_ref_known(v___x_5728_, 3);
return v___x_5739_;
}
else
{
lean_object* v___x_5740_; lean_object* v___x_5742_; 
lean_dec(v_a_5734_);
lean_dec_ref_known(v___x_5728_, 3);
v___x_5740_ = lean_box(0);
if (v_isShared_5737_ == 0)
{
lean_ctor_set(v___x_5736_, 0, v___x_5740_);
v___x_5742_ = v___x_5736_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5743_; 
v_reuseFailAlloc_5743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5743_, 0, v___x_5740_);
v___x_5742_ = v_reuseFailAlloc_5743_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
return v___x_5742_;
}
}
}
}
else
{
lean_object* v_a_5745_; lean_object* v___x_5747_; uint8_t v_isShared_5748_; uint8_t v_isSharedCheck_5752_; 
lean_dec_ref_known(v___x_5728_, 3);
v_a_5745_ = lean_ctor_get(v___x_5733_, 0);
v_isSharedCheck_5752_ = !lean_is_exclusive(v___x_5733_);
if (v_isSharedCheck_5752_ == 0)
{
v___x_5747_ = v___x_5733_;
v_isShared_5748_ = v_isSharedCheck_5752_;
goto v_resetjp_5746_;
}
else
{
lean_inc(v_a_5745_);
lean_dec(v___x_5733_);
v___x_5747_ = lean_box(0);
v_isShared_5748_ = v_isSharedCheck_5752_;
goto v_resetjp_5746_;
}
v_resetjp_5746_:
{
lean_object* v___x_5750_; 
if (v_isShared_5748_ == 0)
{
v___x_5750_ = v___x_5747_;
goto v_reusejp_5749_;
}
else
{
lean_object* v_reuseFailAlloc_5751_; 
v_reuseFailAlloc_5751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5751_, 0, v_a_5745_);
v___x_5750_ = v_reuseFailAlloc_5751_;
goto v_reusejp_5749_;
}
v_reusejp_5749_:
{
return v___x_5750_;
}
}
}
}
v___jp_5753_:
{
if (lean_obj_tag(v___y_5754_) == 0)
{
lean_dec_ref_known(v___y_5754_, 1);
goto v___jp_5729_;
}
else
{
lean_dec_ref_known(v___x_5728_, 3);
lean_dec(v_tactic_5719_);
lean_dec(v_ref_5718_);
lean_dec_ref(v___x_5693_);
return v___y_5754_;
}
}
v___jp_5755_:
{
uint8_t v___x_5756_; 
v___x_5756_ = lean_nat_dec_eq(v___x_5726_, v___x_5725_);
if (v___x_5756_ == 0)
{
uint8_t v___x_5757_; 
lean_del_object(v___x_5716_);
v___x_5757_ = lean_nat_dec_lt(v___x_5725_, v___x_5726_);
if (v___x_5757_ == 0)
{
goto v___jp_5729_;
}
else
{
lean_object* v___x_5758_; uint8_t v___x_5759_; 
v___x_5758_ = lean_box(0);
v___x_5759_ = lean_nat_dec_le(v___x_5726_, v___x_5726_);
if (v___x_5759_ == 0)
{
if (v___x_5757_ == 0)
{
goto v___jp_5729_;
}
else
{
size_t v___x_5760_; size_t v___x_5761_; lean_object* v___x_5762_; 
v___x_5760_ = ((size_t)0ULL);
v___x_5761_ = lean_usize_of_nat(v___x_5726_);
v___x_5762_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v___x_5693_, v___x_5760_, v___x_5761_, v___x_5758_, v___y_5695_, v___y_5696_, v___y_5697_, v___y_5698_, v___x_5728_, v___y_5700_);
v___y_5754_ = v___x_5762_;
goto v___jp_5753_;
}
}
else
{
size_t v___x_5763_; size_t v___x_5764_; lean_object* v___x_5765_; 
v___x_5763_ = ((size_t)0ULL);
v___x_5764_ = lean_usize_of_nat(v___x_5726_);
v___x_5765_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v___x_5693_, v___x_5763_, v___x_5764_, v___x_5758_, v___y_5695_, v___y_5696_, v___y_5697_, v___y_5698_, v___x_5728_, v___y_5700_);
v___y_5754_ = v___x_5765_;
goto v___jp_5753_;
}
}
}
else
{
lean_object* v___x_5766_; lean_object* v___x_5768_; 
lean_dec_ref_known(v___x_5728_, 3);
lean_dec(v_tactic_5719_);
lean_dec(v_ref_5718_);
lean_dec_ref(v___x_5693_);
v___x_5766_ = lean_box(0);
if (v_isShared_5717_ == 0)
{
lean_ctor_set_tag(v___x_5716_, 0);
lean_ctor_set(v___x_5716_, 0, v___x_5766_);
v___x_5768_ = v___x_5716_;
goto v_reusejp_5767_;
}
else
{
lean_object* v_reuseFailAlloc_5769_; 
v_reuseFailAlloc_5769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5769_, 0, v___x_5766_);
v___x_5768_ = v_reuseFailAlloc_5769_;
goto v_reusejp_5767_;
}
v_reusejp_5767_:
{
return v___x_5768_;
}
}
}
v___jp_5770_:
{
if (lean_obj_tag(v___y_5771_) == 0)
{
lean_dec_ref_known(v___y_5771_, 1);
goto v___jp_5755_;
}
else
{
lean_dec_ref_known(v___x_5728_, 3);
lean_dec(v_tactic_5719_);
lean_dec(v_ref_5718_);
lean_del_object(v___x_5716_);
lean_dec_ref(v___x_5693_);
return v___y_5771_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed(lean_object* v___x_5782_, lean_object* v___x_5783_, lean_object* v___x_5784_, lean_object* v___y_5785_, lean_object* v___y_5786_, lean_object* v___y_5787_, lean_object* v___y_5788_, lean_object* v___y_5789_, lean_object* v___y_5790_, lean_object* v___y_5791_){
_start:
{
lean_object* v_res_5792_; 
v_res_5792_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(v___x_5782_, v___x_5783_, v___x_5784_, v___y_5785_, v___y_5786_, v___y_5787_, v___y_5788_, v___y_5789_, v___y_5790_);
lean_dec(v___y_5790_);
lean_dec_ref(v___y_5789_);
lean_dec(v___y_5788_);
lean_dec_ref(v___y_5787_);
lean_dec(v___y_5786_);
lean_dec_ref(v___y_5785_);
lean_dec(v___x_5784_);
return v_res_5792_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(lean_object* v_x_5793_){
_start:
{
uint8_t v___x_5794_; 
v___x_5794_ = 0;
return v___x_5794_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed(lean_object* v_x_5795_){
_start:
{
uint8_t v_res_5796_; lean_object* v_r_5797_; 
v_res_5796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(v_x_5795_);
lean_dec(v_x_5795_);
v_r_5797_ = lean_box(v_res_5796_);
return v_r_5797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(lean_object* v_as_5804_, size_t v_sz_5805_, size_t v_i_5806_, lean_object* v_b_5807_, lean_object* v___y_5808_, lean_object* v___y_5809_, lean_object* v___y_5810_, lean_object* v___y_5811_){
_start:
{
uint8_t v___x_5813_; 
v___x_5813_ = lean_usize_dec_lt(v_i_5806_, v_sz_5805_);
if (v___x_5813_ == 0)
{
lean_object* v___x_5814_; 
v___x_5814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5814_, 0, v_b_5807_);
return v___x_5814_;
}
else
{
lean_object* v_snd_5815_; lean_object* v_fst_5816_; lean_object* v___x_5818_; uint8_t v_isShared_5819_; uint8_t v_isSharedCheck_5888_; 
v_snd_5815_ = lean_ctor_get(v_b_5807_, 1);
v_fst_5816_ = lean_ctor_get(v_b_5807_, 0);
v_isSharedCheck_5888_ = !lean_is_exclusive(v_b_5807_);
if (v_isSharedCheck_5888_ == 0)
{
v___x_5818_ = v_b_5807_;
v_isShared_5819_ = v_isSharedCheck_5888_;
goto v_resetjp_5817_;
}
else
{
lean_inc(v_snd_5815_);
lean_inc(v_fst_5816_);
lean_dec(v_b_5807_);
v___x_5818_ = lean_box(0);
v_isShared_5819_ = v_isSharedCheck_5888_;
goto v_resetjp_5817_;
}
v_resetjp_5817_:
{
lean_object* v_array_5820_; lean_object* v_start_5821_; lean_object* v_stop_5822_; uint8_t v___x_5823_; 
v_array_5820_ = lean_ctor_get(v_snd_5815_, 0);
v_start_5821_ = lean_ctor_get(v_snd_5815_, 1);
v_stop_5822_ = lean_ctor_get(v_snd_5815_, 2);
v___x_5823_ = lean_nat_dec_lt(v_start_5821_, v_stop_5822_);
if (v___x_5823_ == 0)
{
lean_object* v___x_5825_; 
if (v_isShared_5819_ == 0)
{
v___x_5825_ = v___x_5818_;
goto v_reusejp_5824_;
}
else
{
lean_object* v_reuseFailAlloc_5827_; 
v_reuseFailAlloc_5827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5827_, 0, v_fst_5816_);
lean_ctor_set(v_reuseFailAlloc_5827_, 1, v_snd_5815_);
v___x_5825_ = v_reuseFailAlloc_5827_;
goto v_reusejp_5824_;
}
v_reusejp_5824_:
{
lean_object* v___x_5826_; 
v___x_5826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5826_, 0, v___x_5825_);
return v___x_5826_;
}
}
else
{
lean_object* v___x_5829_; uint8_t v_isShared_5830_; uint8_t v_isSharedCheck_5884_; 
lean_inc(v_stop_5822_);
lean_inc(v_start_5821_);
lean_inc_ref(v_array_5820_);
v_isSharedCheck_5884_ = !lean_is_exclusive(v_snd_5815_);
if (v_isSharedCheck_5884_ == 0)
{
lean_object* v_unused_5885_; lean_object* v_unused_5886_; lean_object* v_unused_5887_; 
v_unused_5885_ = lean_ctor_get(v_snd_5815_, 2);
lean_dec(v_unused_5885_);
v_unused_5886_ = lean_ctor_get(v_snd_5815_, 1);
lean_dec(v_unused_5886_);
v_unused_5887_ = lean_ctor_get(v_snd_5815_, 0);
lean_dec(v_unused_5887_);
v___x_5829_ = v_snd_5815_;
v_isShared_5830_ = v_isSharedCheck_5884_;
goto v_resetjp_5828_;
}
else
{
lean_dec(v_snd_5815_);
v___x_5829_ = lean_box(0);
v_isShared_5830_ = v_isSharedCheck_5884_;
goto v_resetjp_5828_;
}
v_resetjp_5828_:
{
lean_object* v_array_5831_; lean_object* v_start_5832_; lean_object* v_stop_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5838_; 
v_array_5831_ = lean_ctor_get(v_fst_5816_, 0);
v_start_5832_ = lean_ctor_get(v_fst_5816_, 1);
v_stop_5833_ = lean_ctor_get(v_fst_5816_, 2);
v___x_5834_ = lean_array_fget(v_array_5820_, v_start_5821_);
v___x_5835_ = lean_unsigned_to_nat(1u);
v___x_5836_ = lean_nat_add(v_start_5821_, v___x_5835_);
lean_dec(v_start_5821_);
if (v_isShared_5830_ == 0)
{
lean_ctor_set(v___x_5829_, 1, v___x_5836_);
v___x_5838_ = v___x_5829_;
goto v_reusejp_5837_;
}
else
{
lean_object* v_reuseFailAlloc_5883_; 
v_reuseFailAlloc_5883_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5883_, 0, v_array_5820_);
lean_ctor_set(v_reuseFailAlloc_5883_, 1, v___x_5836_);
lean_ctor_set(v_reuseFailAlloc_5883_, 2, v_stop_5822_);
v___x_5838_ = v_reuseFailAlloc_5883_;
goto v_reusejp_5837_;
}
v_reusejp_5837_:
{
uint8_t v___x_5839_; 
v___x_5839_ = lean_nat_dec_lt(v_start_5832_, v_stop_5833_);
if (v___x_5839_ == 0)
{
lean_object* v___x_5841_; 
lean_dec(v___x_5834_);
if (v_isShared_5819_ == 0)
{
lean_ctor_set(v___x_5818_, 1, v___x_5838_);
v___x_5841_ = v___x_5818_;
goto v_reusejp_5840_;
}
else
{
lean_object* v_reuseFailAlloc_5843_; 
v_reuseFailAlloc_5843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5843_, 0, v_fst_5816_);
lean_ctor_set(v_reuseFailAlloc_5843_, 1, v___x_5838_);
v___x_5841_ = v_reuseFailAlloc_5843_;
goto v_reusejp_5840_;
}
v_reusejp_5840_:
{
lean_object* v___x_5842_; 
v___x_5842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5842_, 0, v___x_5841_);
return v___x_5842_;
}
}
else
{
lean_object* v___x_5845_; uint8_t v_isShared_5846_; uint8_t v_isSharedCheck_5879_; 
lean_inc(v_stop_5833_);
lean_inc(v_start_5832_);
lean_inc_ref(v_array_5831_);
v_isSharedCheck_5879_ = !lean_is_exclusive(v_fst_5816_);
if (v_isSharedCheck_5879_ == 0)
{
lean_object* v_unused_5880_; lean_object* v_unused_5881_; lean_object* v_unused_5882_; 
v_unused_5880_ = lean_ctor_get(v_fst_5816_, 2);
lean_dec(v_unused_5880_);
v_unused_5881_ = lean_ctor_get(v_fst_5816_, 1);
lean_dec(v_unused_5881_);
v_unused_5882_ = lean_ctor_get(v_fst_5816_, 0);
lean_dec(v_unused_5882_);
v___x_5845_ = v_fst_5816_;
v_isShared_5846_ = v_isSharedCheck_5879_;
goto v_resetjp_5844_;
}
else
{
lean_dec(v_fst_5816_);
v___x_5845_ = lean_box(0);
v_isShared_5846_ = v_isSharedCheck_5879_;
goto v_resetjp_5844_;
}
v_resetjp_5844_:
{
lean_object* v___f_5847_; lean_object* v___x_5848_; lean_object* v_a_5849_; lean_object* v___x_5850_; lean_object* v___y_5851_; lean_object* v___x_5852_; lean_object* v___x_5854_; 
v___f_5847_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0));
v___x_5848_ = lean_box(0);
v_a_5849_ = lean_array_uget_borrowed(v_as_5804_, v_i_5806_);
v___x_5850_ = lean_array_fget_borrowed(v_array_5831_, v_start_5832_);
lean_inc(v___x_5850_);
v___y_5851_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed), 10, 3);
lean_closure_set(v___y_5851_, 0, v___x_5834_);
lean_closure_set(v___y_5851_, 1, v___x_5850_);
lean_closure_set(v___y_5851_, 2, v___x_5848_);
v___x_5852_ = lean_nat_add(v_start_5832_, v___x_5835_);
lean_dec(v_start_5832_);
if (v_isShared_5846_ == 0)
{
lean_ctor_set(v___x_5845_, 1, v___x_5852_);
v___x_5854_ = v___x_5845_;
goto v_reusejp_5853_;
}
else
{
lean_object* v_reuseFailAlloc_5878_; 
v_reuseFailAlloc_5878_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5878_, 0, v_array_5831_);
lean_ctor_set(v_reuseFailAlloc_5878_, 1, v___x_5852_);
lean_ctor_set(v_reuseFailAlloc_5878_, 2, v_stop_5833_);
v___x_5854_ = v_reuseFailAlloc_5878_;
goto v_reusejp_5853_;
}
v_reusejp_5853_:
{
lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; uint8_t v___x_5859_; lean_object* v___x_5860_; lean_object* v___x_5861_; lean_object* v___x_5862_; lean_object* v___x_5863_; 
lean_inc(v_a_5849_);
v___x_5855_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName___boxed), 10, 3);
lean_closure_set(v___x_5855_, 0, lean_box(0));
lean_closure_set(v___x_5855_, 1, v_a_5849_);
lean_closure_set(v___x_5855_, 2, v___y_5851_);
v___x_5856_ = lean_box(0);
v___x_5857_ = lean_box(0);
v___x_5858_ = lean_box(1);
v___x_5859_ = 0;
v___x_5860_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1));
v___x_5861_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_5861_, 0, v___x_5856_);
lean_ctor_set(v___x_5861_, 1, v___x_5857_);
lean_ctor_set(v___x_5861_, 2, v___x_5856_);
lean_ctor_set(v___x_5861_, 3, v___f_5847_);
lean_ctor_set(v___x_5861_, 4, v___x_5858_);
lean_ctor_set(v___x_5861_, 5, v___x_5858_);
lean_ctor_set(v___x_5861_, 6, v___x_5856_);
lean_ctor_set(v___x_5861_, 7, v___x_5860_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8, v___x_5839_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8 + 1, v___x_5839_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8 + 2, v___x_5839_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8 + 3, v___x_5839_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8 + 4, v___x_5859_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8 + 5, v___x_5859_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8 + 6, v___x_5859_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8 + 7, v___x_5859_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8 + 8, v___x_5839_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8 + 9, v___x_5859_);
lean_ctor_set_uint8(v___x_5861_, sizeof(void*)*8 + 10, v___x_5839_);
v___x_5862_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2));
v___x_5863_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___x_5855_, v___x_5861_, v___x_5862_, v___y_5808_, v___y_5809_, v___y_5810_, v___y_5811_);
if (lean_obj_tag(v___x_5863_) == 0)
{
lean_object* v___x_5865_; 
lean_dec_ref_known(v___x_5863_, 1);
if (v_isShared_5819_ == 0)
{
lean_ctor_set(v___x_5818_, 1, v___x_5838_);
lean_ctor_set(v___x_5818_, 0, v___x_5854_);
v___x_5865_ = v___x_5818_;
goto v_reusejp_5864_;
}
else
{
lean_object* v_reuseFailAlloc_5869_; 
v_reuseFailAlloc_5869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5869_, 0, v___x_5854_);
lean_ctor_set(v_reuseFailAlloc_5869_, 1, v___x_5838_);
v___x_5865_ = v_reuseFailAlloc_5869_;
goto v_reusejp_5864_;
}
v_reusejp_5864_:
{
size_t v___x_5866_; size_t v___x_5867_; 
v___x_5866_ = ((size_t)1ULL);
v___x_5867_ = lean_usize_add(v_i_5806_, v___x_5866_);
v_i_5806_ = v___x_5867_;
v_b_5807_ = v___x_5865_;
goto _start;
}
}
else
{
lean_object* v_a_5870_; lean_object* v___x_5872_; uint8_t v_isShared_5873_; uint8_t v_isSharedCheck_5877_; 
lean_dec_ref(v___x_5854_);
lean_dec_ref(v___x_5838_);
lean_del_object(v___x_5818_);
v_a_5870_ = lean_ctor_get(v___x_5863_, 0);
v_isSharedCheck_5877_ = !lean_is_exclusive(v___x_5863_);
if (v_isSharedCheck_5877_ == 0)
{
v___x_5872_ = v___x_5863_;
v_isShared_5873_ = v_isSharedCheck_5877_;
goto v_resetjp_5871_;
}
else
{
lean_inc(v_a_5870_);
lean_dec(v___x_5863_);
v___x_5872_ = lean_box(0);
v_isShared_5873_ = v_isSharedCheck_5877_;
goto v_resetjp_5871_;
}
v_resetjp_5871_:
{
lean_object* v___x_5875_; 
if (v_isShared_5873_ == 0)
{
v___x_5875_ = v___x_5872_;
goto v_reusejp_5874_;
}
else
{
lean_object* v_reuseFailAlloc_5876_; 
v_reuseFailAlloc_5876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5876_, 0, v_a_5870_);
v___x_5875_ = v_reuseFailAlloc_5876_;
goto v_reusejp_5874_;
}
v_reusejp_5874_:
{
return v___x_5875_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___boxed(lean_object* v_as_5889_, lean_object* v_sz_5890_, lean_object* v_i_5891_, lean_object* v_b_5892_, lean_object* v___y_5893_, lean_object* v___y_5894_, lean_object* v___y_5895_, lean_object* v___y_5896_, lean_object* v___y_5897_){
_start:
{
size_t v_sz_boxed_5898_; size_t v_i_boxed_5899_; lean_object* v_res_5900_; 
v_sz_boxed_5898_ = lean_unbox_usize(v_sz_5890_);
lean_dec(v_sz_5890_);
v_i_boxed_5899_ = lean_unbox_usize(v_i_5891_);
lean_dec(v_i_5891_);
v_res_5900_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(v_as_5889_, v_sz_boxed_5898_, v_i_boxed_5899_, v_b_5892_, v___y_5893_, v___y_5894_, v___y_5895_, v___y_5896_);
lean_dec(v___y_5896_);
lean_dec_ref(v___y_5895_);
lean_dec(v___y_5894_);
lean_dec_ref(v___y_5893_);
lean_dec_ref(v_as_5889_);
return v_res_5900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0(lean_object* v_value_5901_, lean_object* v_decrTactics_5902_, lean_object* v_argsPacker_5903_, lean_object* v_funNames_5904_, lean_object* v___y_5905_, lean_object* v___y_5906_, lean_object* v___y_5907_, lean_object* v___y_5908_){
_start:
{
lean_object* v___x_5910_; 
lean_inc_ref(v_value_5901_);
v___x_5910_ = l_Lean_Meta_getMVarsNoDelayed(v_value_5901_, v___y_5905_, v___y_5906_, v___y_5907_, v___y_5908_);
if (lean_obj_tag(v___x_5910_) == 0)
{
lean_object* v_a_5911_; lean_object* v___x_5912_; 
v_a_5911_ = lean_ctor_get(v___x_5910_, 0);
lean_inc(v_a_5911_);
lean_dec_ref_known(v___x_5910_, 1);
v___x_5912_ = l_Lean_Elab_WF_assignSubsumed(v_a_5911_, v___y_5905_, v___y_5906_, v___y_5907_, v___y_5908_);
lean_dec(v_a_5911_);
if (lean_obj_tag(v___x_5912_) == 0)
{
lean_object* v_a_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; 
v_a_5913_ = lean_ctor_get(v___x_5912_, 0);
lean_inc(v_a_5913_);
lean_dec_ref_known(v___x_5912_, 1);
v___x_5914_ = lean_array_get_size(v_decrTactics_5902_);
v___x_5915_ = l_Lean_Elab_WF_groupGoalsByFunction(v_argsPacker_5903_, v___x_5914_, v_a_5913_, v___y_5905_, v___y_5906_, v___y_5907_, v___y_5908_);
lean_dec(v_a_5913_);
if (lean_obj_tag(v___x_5915_) == 0)
{
lean_object* v_a_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; size_t v_sz_5922_; size_t v___x_5923_; lean_object* v___x_5924_; 
v_a_5916_ = lean_ctor_get(v___x_5915_, 0);
lean_inc(v_a_5916_);
lean_dec_ref_known(v___x_5915_, 1);
v___x_5917_ = lean_unsigned_to_nat(0u);
v___x_5918_ = lean_array_get_size(v_a_5916_);
v___x_5919_ = l_Array_toSubarray___redArg(v_a_5916_, v___x_5917_, v___x_5918_);
v___x_5920_ = l_Array_toSubarray___redArg(v_decrTactics_5902_, v___x_5917_, v___x_5914_);
v___x_5921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5921_, 0, v___x_5919_);
lean_ctor_set(v___x_5921_, 1, v___x_5920_);
v_sz_5922_ = lean_array_size(v_funNames_5904_);
v___x_5923_ = ((size_t)0ULL);
v___x_5924_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(v_funNames_5904_, v_sz_5922_, v___x_5923_, v___x_5921_, v___y_5905_, v___y_5906_, v___y_5907_, v___y_5908_);
if (lean_obj_tag(v___x_5924_) == 0)
{
lean_object* v___x_5925_; 
lean_dec_ref_known(v___x_5924_, 1);
v___x_5925_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_value_5901_, v___y_5906_);
return v___x_5925_;
}
else
{
lean_object* v_a_5926_; lean_object* v___x_5928_; uint8_t v_isShared_5929_; uint8_t v_isSharedCheck_5933_; 
lean_dec_ref(v_value_5901_);
v_a_5926_ = lean_ctor_get(v___x_5924_, 0);
v_isSharedCheck_5933_ = !lean_is_exclusive(v___x_5924_);
if (v_isSharedCheck_5933_ == 0)
{
v___x_5928_ = v___x_5924_;
v_isShared_5929_ = v_isSharedCheck_5933_;
goto v_resetjp_5927_;
}
else
{
lean_inc(v_a_5926_);
lean_dec(v___x_5924_);
v___x_5928_ = lean_box(0);
v_isShared_5929_ = v_isSharedCheck_5933_;
goto v_resetjp_5927_;
}
v_resetjp_5927_:
{
lean_object* v___x_5931_; 
if (v_isShared_5929_ == 0)
{
v___x_5931_ = v___x_5928_;
goto v_reusejp_5930_;
}
else
{
lean_object* v_reuseFailAlloc_5932_; 
v_reuseFailAlloc_5932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5932_, 0, v_a_5926_);
v___x_5931_ = v_reuseFailAlloc_5932_;
goto v_reusejp_5930_;
}
v_reusejp_5930_:
{
return v___x_5931_;
}
}
}
}
else
{
lean_object* v_a_5934_; lean_object* v___x_5936_; uint8_t v_isShared_5937_; uint8_t v_isSharedCheck_5941_; 
lean_dec_ref(v_decrTactics_5902_);
lean_dec_ref(v_value_5901_);
v_a_5934_ = lean_ctor_get(v___x_5915_, 0);
v_isSharedCheck_5941_ = !lean_is_exclusive(v___x_5915_);
if (v_isSharedCheck_5941_ == 0)
{
v___x_5936_ = v___x_5915_;
v_isShared_5937_ = v_isSharedCheck_5941_;
goto v_resetjp_5935_;
}
else
{
lean_inc(v_a_5934_);
lean_dec(v___x_5915_);
v___x_5936_ = lean_box(0);
v_isShared_5937_ = v_isSharedCheck_5941_;
goto v_resetjp_5935_;
}
v_resetjp_5935_:
{
lean_object* v___x_5939_; 
if (v_isShared_5937_ == 0)
{
v___x_5939_ = v___x_5936_;
goto v_reusejp_5938_;
}
else
{
lean_object* v_reuseFailAlloc_5940_; 
v_reuseFailAlloc_5940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5940_, 0, v_a_5934_);
v___x_5939_ = v_reuseFailAlloc_5940_;
goto v_reusejp_5938_;
}
v_reusejp_5938_:
{
return v___x_5939_;
}
}
}
}
else
{
lean_object* v_a_5942_; lean_object* v___x_5944_; uint8_t v_isShared_5945_; uint8_t v_isSharedCheck_5949_; 
lean_dec_ref(v_decrTactics_5902_);
lean_dec_ref(v_value_5901_);
v_a_5942_ = lean_ctor_get(v___x_5912_, 0);
v_isSharedCheck_5949_ = !lean_is_exclusive(v___x_5912_);
if (v_isSharedCheck_5949_ == 0)
{
v___x_5944_ = v___x_5912_;
v_isShared_5945_ = v_isSharedCheck_5949_;
goto v_resetjp_5943_;
}
else
{
lean_inc(v_a_5942_);
lean_dec(v___x_5912_);
v___x_5944_ = lean_box(0);
v_isShared_5945_ = v_isSharedCheck_5949_;
goto v_resetjp_5943_;
}
v_resetjp_5943_:
{
lean_object* v___x_5947_; 
if (v_isShared_5945_ == 0)
{
v___x_5947_ = v___x_5944_;
goto v_reusejp_5946_;
}
else
{
lean_object* v_reuseFailAlloc_5948_; 
v_reuseFailAlloc_5948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5948_, 0, v_a_5942_);
v___x_5947_ = v_reuseFailAlloc_5948_;
goto v_reusejp_5946_;
}
v_reusejp_5946_:
{
return v___x_5947_;
}
}
}
}
else
{
lean_object* v_a_5950_; lean_object* v___x_5952_; uint8_t v_isShared_5953_; uint8_t v_isSharedCheck_5957_; 
lean_dec_ref(v_decrTactics_5902_);
lean_dec_ref(v_value_5901_);
v_a_5950_ = lean_ctor_get(v___x_5910_, 0);
v_isSharedCheck_5957_ = !lean_is_exclusive(v___x_5910_);
if (v_isSharedCheck_5957_ == 0)
{
v___x_5952_ = v___x_5910_;
v_isShared_5953_ = v_isSharedCheck_5957_;
goto v_resetjp_5951_;
}
else
{
lean_inc(v_a_5950_);
lean_dec(v___x_5910_);
v___x_5952_ = lean_box(0);
v_isShared_5953_ = v_isSharedCheck_5957_;
goto v_resetjp_5951_;
}
v_resetjp_5951_:
{
lean_object* v___x_5955_; 
if (v_isShared_5953_ == 0)
{
v___x_5955_ = v___x_5952_;
goto v_reusejp_5954_;
}
else
{
lean_object* v_reuseFailAlloc_5956_; 
v_reuseFailAlloc_5956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5956_, 0, v_a_5950_);
v___x_5955_ = v_reuseFailAlloc_5956_;
goto v_reusejp_5954_;
}
v_reusejp_5954_:
{
return v___x_5955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed(lean_object* v_value_5958_, lean_object* v_decrTactics_5959_, lean_object* v_argsPacker_5960_, lean_object* v_funNames_5961_, lean_object* v___y_5962_, lean_object* v___y_5963_, lean_object* v___y_5964_, lean_object* v___y_5965_, lean_object* v___y_5966_){
_start:
{
lean_object* v_res_5967_; 
v_res_5967_ = l_Lean_Elab_WF_solveDecreasingGoals___lam__0(v_value_5958_, v_decrTactics_5959_, v_argsPacker_5960_, v_funNames_5961_, v___y_5962_, v___y_5963_, v___y_5964_, v___y_5965_);
lean_dec(v___y_5965_);
lean_dec_ref(v___y_5964_);
lean_dec(v___y_5963_);
lean_dec_ref(v___y_5962_);
lean_dec_ref(v_funNames_5961_);
lean_dec_ref(v_argsPacker_5960_);
return v_res_5967_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(lean_object* v___y_5968_, uint8_t v_isExporting_5969_, lean_object* v___x_5970_, lean_object* v___y_5971_, lean_object* v___x_5972_, lean_object* v_a_x3f_5973_){
_start:
{
lean_object* v___x_5975_; lean_object* v_env_5976_; lean_object* v_nextMacroScope_5977_; lean_object* v_ngen_5978_; lean_object* v_auxDeclNGen_5979_; lean_object* v_traceState_5980_; lean_object* v_messages_5981_; lean_object* v_infoState_5982_; lean_object* v_snapshotTasks_5983_; lean_object* v___x_5985_; uint8_t v_isShared_5986_; uint8_t v_isSharedCheck_6008_; 
v___x_5975_ = lean_st_ref_take(v___y_5968_);
v_env_5976_ = lean_ctor_get(v___x_5975_, 0);
v_nextMacroScope_5977_ = lean_ctor_get(v___x_5975_, 1);
v_ngen_5978_ = lean_ctor_get(v___x_5975_, 2);
v_auxDeclNGen_5979_ = lean_ctor_get(v___x_5975_, 3);
v_traceState_5980_ = lean_ctor_get(v___x_5975_, 4);
v_messages_5981_ = lean_ctor_get(v___x_5975_, 6);
v_infoState_5982_ = lean_ctor_get(v___x_5975_, 7);
v_snapshotTasks_5983_ = lean_ctor_get(v___x_5975_, 8);
v_isSharedCheck_6008_ = !lean_is_exclusive(v___x_5975_);
if (v_isSharedCheck_6008_ == 0)
{
lean_object* v_unused_6009_; 
v_unused_6009_ = lean_ctor_get(v___x_5975_, 5);
lean_dec(v_unused_6009_);
v___x_5985_ = v___x_5975_;
v_isShared_5986_ = v_isSharedCheck_6008_;
goto v_resetjp_5984_;
}
else
{
lean_inc(v_snapshotTasks_5983_);
lean_inc(v_infoState_5982_);
lean_inc(v_messages_5981_);
lean_inc(v_traceState_5980_);
lean_inc(v_auxDeclNGen_5979_);
lean_inc(v_ngen_5978_);
lean_inc(v_nextMacroScope_5977_);
lean_inc(v_env_5976_);
lean_dec(v___x_5975_);
v___x_5985_ = lean_box(0);
v_isShared_5986_ = v_isSharedCheck_6008_;
goto v_resetjp_5984_;
}
v_resetjp_5984_:
{
lean_object* v___x_5987_; lean_object* v___x_5989_; 
v___x_5987_ = l_Lean_Environment_setExporting(v_env_5976_, v_isExporting_5969_);
if (v_isShared_5986_ == 0)
{
lean_ctor_set(v___x_5985_, 5, v___x_5970_);
lean_ctor_set(v___x_5985_, 0, v___x_5987_);
v___x_5989_ = v___x_5985_;
goto v_reusejp_5988_;
}
else
{
lean_object* v_reuseFailAlloc_6007_; 
v_reuseFailAlloc_6007_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6007_, 0, v___x_5987_);
lean_ctor_set(v_reuseFailAlloc_6007_, 1, v_nextMacroScope_5977_);
lean_ctor_set(v_reuseFailAlloc_6007_, 2, v_ngen_5978_);
lean_ctor_set(v_reuseFailAlloc_6007_, 3, v_auxDeclNGen_5979_);
lean_ctor_set(v_reuseFailAlloc_6007_, 4, v_traceState_5980_);
lean_ctor_set(v_reuseFailAlloc_6007_, 5, v___x_5970_);
lean_ctor_set(v_reuseFailAlloc_6007_, 6, v_messages_5981_);
lean_ctor_set(v_reuseFailAlloc_6007_, 7, v_infoState_5982_);
lean_ctor_set(v_reuseFailAlloc_6007_, 8, v_snapshotTasks_5983_);
v___x_5989_ = v_reuseFailAlloc_6007_;
goto v_reusejp_5988_;
}
v_reusejp_5988_:
{
lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v_mctx_5992_; lean_object* v_zetaDeltaFVarIds_5993_; lean_object* v_postponed_5994_; lean_object* v_diag_5995_; lean_object* v___x_5997_; uint8_t v_isShared_5998_; uint8_t v_isSharedCheck_6005_; 
v___x_5990_ = lean_st_ref_put(v___y_5968_, v___x_5989_);
v___x_5991_ = lean_st_ref_take(v___y_5971_);
v_mctx_5992_ = lean_ctor_get(v___x_5991_, 0);
v_zetaDeltaFVarIds_5993_ = lean_ctor_get(v___x_5991_, 2);
v_postponed_5994_ = lean_ctor_get(v___x_5991_, 3);
v_diag_5995_ = lean_ctor_get(v___x_5991_, 4);
v_isSharedCheck_6005_ = !lean_is_exclusive(v___x_5991_);
if (v_isSharedCheck_6005_ == 0)
{
lean_object* v_unused_6006_; 
v_unused_6006_ = lean_ctor_get(v___x_5991_, 1);
lean_dec(v_unused_6006_);
v___x_5997_ = v___x_5991_;
v_isShared_5998_ = v_isSharedCheck_6005_;
goto v_resetjp_5996_;
}
else
{
lean_inc(v_diag_5995_);
lean_inc(v_postponed_5994_);
lean_inc(v_zetaDeltaFVarIds_5993_);
lean_inc(v_mctx_5992_);
lean_dec(v___x_5991_);
v___x_5997_ = lean_box(0);
v_isShared_5998_ = v_isSharedCheck_6005_;
goto v_resetjp_5996_;
}
v_resetjp_5996_:
{
lean_object* v___x_5999_; lean_object* v___x_6001_; 
v___x_5999_ = lean_box(0);
if (v_isShared_5998_ == 0)
{
lean_ctor_set(v___x_5997_, 1, v___x_5972_);
v___x_6001_ = v___x_5997_;
goto v_reusejp_6000_;
}
else
{
lean_object* v_reuseFailAlloc_6004_; 
v_reuseFailAlloc_6004_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6004_, 0, v_mctx_5992_);
lean_ctor_set(v_reuseFailAlloc_6004_, 1, v___x_5972_);
lean_ctor_set(v_reuseFailAlloc_6004_, 2, v_zetaDeltaFVarIds_5993_);
lean_ctor_set(v_reuseFailAlloc_6004_, 3, v_postponed_5994_);
lean_ctor_set(v_reuseFailAlloc_6004_, 4, v_diag_5995_);
v___x_6001_ = v_reuseFailAlloc_6004_;
goto v_reusejp_6000_;
}
v_reusejp_6000_:
{
lean_object* v___x_6002_; lean_object* v___x_6003_; 
v___x_6002_ = lean_st_ref_put(v___y_5971_, v___x_6001_);
v___x_6003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6003_, 0, v___x_5999_);
return v___x_6003_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0___boxed(lean_object* v___y_6010_, lean_object* v_isExporting_6011_, lean_object* v___x_6012_, lean_object* v___y_6013_, lean_object* v___x_6014_, lean_object* v_a_x3f_6015_, lean_object* v___y_6016_){
_start:
{
uint8_t v_isExporting_boxed_6017_; lean_object* v_res_6018_; 
v_isExporting_boxed_6017_ = lean_unbox(v_isExporting_6011_);
v_res_6018_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6010_, v_isExporting_boxed_6017_, v___x_6012_, v___y_6013_, v___x_6014_, v_a_x3f_6015_);
lean_dec(v_a_x3f_6015_);
lean_dec(v___y_6013_);
lean_dec(v___y_6010_);
return v_res_6018_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_6019_; lean_object* v___x_6020_; 
v___x_6019_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0);
v___x_6020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6020_, 0, v___x_6019_);
return v___x_6020_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_6021_; lean_object* v___x_6022_; 
v___x_6021_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0);
v___x_6022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6022_, 0, v___x_6021_);
lean_ctor_set(v___x_6022_, 1, v___x_6021_);
return v___x_6022_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_6023_; lean_object* v___x_6024_; 
v___x_6023_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0);
v___x_6024_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_6024_, 0, v___x_6023_);
lean_ctor_set(v___x_6024_, 1, v___x_6023_);
lean_ctor_set(v___x_6024_, 2, v___x_6023_);
lean_ctor_set(v___x_6024_, 3, v___x_6023_);
lean_ctor_set(v___x_6024_, 4, v___x_6023_);
lean_ctor_set(v___x_6024_, 5, v___x_6023_);
return v___x_6024_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(lean_object* v_x_6025_, uint8_t v_isExporting_6026_, lean_object* v___y_6027_, lean_object* v___y_6028_, lean_object* v___y_6029_, lean_object* v___y_6030_){
_start:
{
lean_object* v___x_6032_; lean_object* v_env_6033_; lean_object* v___x_6034_; uint8_t v_isModule_6035_; 
v___x_6032_ = lean_st_ref_get(v___y_6030_);
v_env_6033_ = lean_ctor_get(v___x_6032_, 0);
lean_inc_ref(v_env_6033_);
lean_dec(v___x_6032_);
v___x_6034_ = l_Lean_Environment_header(v_env_6033_);
v_isModule_6035_ = lean_ctor_get_uint8(v___x_6034_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_6034_);
if (v_isModule_6035_ == 0)
{
lean_object* v___x_6036_; 
lean_dec_ref(v_env_6033_);
lean_inc(v___y_6030_);
lean_inc_ref(v___y_6029_);
lean_inc(v___y_6028_);
lean_inc_ref(v___y_6027_);
v___x_6036_ = lean_apply_5(v_x_6025_, v___y_6027_, v___y_6028_, v___y_6029_, v___y_6030_, lean_box(0));
return v___x_6036_;
}
else
{
uint8_t v_isExporting_6037_; 
v_isExporting_6037_ = lean_ctor_get_uint8(v_env_6033_, sizeof(void*)*8);
lean_dec_ref(v_env_6033_);
if (v_isExporting_6026_ == 0)
{
if (v_isExporting_6037_ == 0)
{
lean_object* v___x_6103_; 
lean_inc(v___y_6030_);
lean_inc_ref(v___y_6029_);
lean_inc(v___y_6028_);
lean_inc_ref(v___y_6027_);
v___x_6103_ = lean_apply_5(v_x_6025_, v___y_6027_, v___y_6028_, v___y_6029_, v___y_6030_, lean_box(0));
return v___x_6103_;
}
else
{
goto v___jp_6038_;
}
}
else
{
if (v_isExporting_6037_ == 0)
{
goto v___jp_6038_;
}
else
{
lean_object* v___x_6104_; 
lean_inc(v___y_6030_);
lean_inc_ref(v___y_6029_);
lean_inc(v___y_6028_);
lean_inc_ref(v___y_6027_);
v___x_6104_ = lean_apply_5(v_x_6025_, v___y_6027_, v___y_6028_, v___y_6029_, v___y_6030_, lean_box(0));
return v___x_6104_;
}
}
v___jp_6038_:
{
lean_object* v___x_6039_; lean_object* v_env_6040_; lean_object* v_nextMacroScope_6041_; lean_object* v_ngen_6042_; lean_object* v_auxDeclNGen_6043_; lean_object* v_traceState_6044_; lean_object* v_messages_6045_; lean_object* v_infoState_6046_; lean_object* v_snapshotTasks_6047_; lean_object* v___x_6049_; uint8_t v_isShared_6050_; uint8_t v_isSharedCheck_6101_; 
v___x_6039_ = lean_st_ref_take(v___y_6030_);
v_env_6040_ = lean_ctor_get(v___x_6039_, 0);
v_nextMacroScope_6041_ = lean_ctor_get(v___x_6039_, 1);
v_ngen_6042_ = lean_ctor_get(v___x_6039_, 2);
v_auxDeclNGen_6043_ = lean_ctor_get(v___x_6039_, 3);
v_traceState_6044_ = lean_ctor_get(v___x_6039_, 4);
v_messages_6045_ = lean_ctor_get(v___x_6039_, 6);
v_infoState_6046_ = lean_ctor_get(v___x_6039_, 7);
v_snapshotTasks_6047_ = lean_ctor_get(v___x_6039_, 8);
v_isSharedCheck_6101_ = !lean_is_exclusive(v___x_6039_);
if (v_isSharedCheck_6101_ == 0)
{
lean_object* v_unused_6102_; 
v_unused_6102_ = lean_ctor_get(v___x_6039_, 5);
lean_dec(v_unused_6102_);
v___x_6049_ = v___x_6039_;
v_isShared_6050_ = v_isSharedCheck_6101_;
goto v_resetjp_6048_;
}
else
{
lean_inc(v_snapshotTasks_6047_);
lean_inc(v_infoState_6046_);
lean_inc(v_messages_6045_);
lean_inc(v_traceState_6044_);
lean_inc(v_auxDeclNGen_6043_);
lean_inc(v_ngen_6042_);
lean_inc(v_nextMacroScope_6041_);
lean_inc(v_env_6040_);
lean_dec(v___x_6039_);
v___x_6049_ = lean_box(0);
v_isShared_6050_ = v_isSharedCheck_6101_;
goto v_resetjp_6048_;
}
v_resetjp_6048_:
{
lean_object* v___x_6051_; lean_object* v___x_6052_; lean_object* v___x_6054_; 
v___x_6051_ = l_Lean_Environment_setExporting(v_env_6040_, v_isExporting_6026_);
v___x_6052_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1);
if (v_isShared_6050_ == 0)
{
lean_ctor_set(v___x_6049_, 5, v___x_6052_);
lean_ctor_set(v___x_6049_, 0, v___x_6051_);
v___x_6054_ = v___x_6049_;
goto v_reusejp_6053_;
}
else
{
lean_object* v_reuseFailAlloc_6100_; 
v_reuseFailAlloc_6100_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6100_, 0, v___x_6051_);
lean_ctor_set(v_reuseFailAlloc_6100_, 1, v_nextMacroScope_6041_);
lean_ctor_set(v_reuseFailAlloc_6100_, 2, v_ngen_6042_);
lean_ctor_set(v_reuseFailAlloc_6100_, 3, v_auxDeclNGen_6043_);
lean_ctor_set(v_reuseFailAlloc_6100_, 4, v_traceState_6044_);
lean_ctor_set(v_reuseFailAlloc_6100_, 5, v___x_6052_);
lean_ctor_set(v_reuseFailAlloc_6100_, 6, v_messages_6045_);
lean_ctor_set(v_reuseFailAlloc_6100_, 7, v_infoState_6046_);
lean_ctor_set(v_reuseFailAlloc_6100_, 8, v_snapshotTasks_6047_);
v___x_6054_ = v_reuseFailAlloc_6100_;
goto v_reusejp_6053_;
}
v_reusejp_6053_:
{
lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v_mctx_6057_; lean_object* v_zetaDeltaFVarIds_6058_; lean_object* v_postponed_6059_; lean_object* v_diag_6060_; lean_object* v___x_6062_; uint8_t v_isShared_6063_; uint8_t v_isSharedCheck_6098_; 
v___x_6055_ = lean_st_ref_put(v___y_6030_, v___x_6054_);
v___x_6056_ = lean_st_ref_take(v___y_6028_);
v_mctx_6057_ = lean_ctor_get(v___x_6056_, 0);
v_zetaDeltaFVarIds_6058_ = lean_ctor_get(v___x_6056_, 2);
v_postponed_6059_ = lean_ctor_get(v___x_6056_, 3);
v_diag_6060_ = lean_ctor_get(v___x_6056_, 4);
v_isSharedCheck_6098_ = !lean_is_exclusive(v___x_6056_);
if (v_isSharedCheck_6098_ == 0)
{
lean_object* v_unused_6099_; 
v_unused_6099_ = lean_ctor_get(v___x_6056_, 1);
lean_dec(v_unused_6099_);
v___x_6062_ = v___x_6056_;
v_isShared_6063_ = v_isSharedCheck_6098_;
goto v_resetjp_6061_;
}
else
{
lean_inc(v_diag_6060_);
lean_inc(v_postponed_6059_);
lean_inc(v_zetaDeltaFVarIds_6058_);
lean_inc(v_mctx_6057_);
lean_dec(v___x_6056_);
v___x_6062_ = lean_box(0);
v_isShared_6063_ = v_isSharedCheck_6098_;
goto v_resetjp_6061_;
}
v_resetjp_6061_:
{
lean_object* v___x_6064_; lean_object* v___x_6066_; 
v___x_6064_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2);
if (v_isShared_6063_ == 0)
{
lean_ctor_set(v___x_6062_, 1, v___x_6064_);
v___x_6066_ = v___x_6062_;
goto v_reusejp_6065_;
}
else
{
lean_object* v_reuseFailAlloc_6097_; 
v_reuseFailAlloc_6097_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6097_, 0, v_mctx_6057_);
lean_ctor_set(v_reuseFailAlloc_6097_, 1, v___x_6064_);
lean_ctor_set(v_reuseFailAlloc_6097_, 2, v_zetaDeltaFVarIds_6058_);
lean_ctor_set(v_reuseFailAlloc_6097_, 3, v_postponed_6059_);
lean_ctor_set(v_reuseFailAlloc_6097_, 4, v_diag_6060_);
v___x_6066_ = v_reuseFailAlloc_6097_;
goto v_reusejp_6065_;
}
v_reusejp_6065_:
{
lean_object* v___x_6067_; lean_object* v___x_6068_; 
v___x_6067_ = lean_st_ref_put(v___y_6028_, v___x_6066_);
lean_inc(v___y_6030_);
lean_inc_ref(v___y_6029_);
lean_inc(v___y_6028_);
lean_inc_ref(v___y_6027_);
v___x_6068_ = lean_apply_5(v_x_6025_, v___y_6027_, v___y_6028_, v___y_6029_, v___y_6030_, lean_box(0));
if (lean_obj_tag(v___x_6068_) == 0)
{
lean_object* v_a_6069_; lean_object* v___x_6071_; uint8_t v_isShared_6072_; uint8_t v_isSharedCheck_6085_; 
v_a_6069_ = lean_ctor_get(v___x_6068_, 0);
v_isSharedCheck_6085_ = !lean_is_exclusive(v___x_6068_);
if (v_isSharedCheck_6085_ == 0)
{
v___x_6071_ = v___x_6068_;
v_isShared_6072_ = v_isSharedCheck_6085_;
goto v_resetjp_6070_;
}
else
{
lean_inc(v_a_6069_);
lean_dec(v___x_6068_);
v___x_6071_ = lean_box(0);
v_isShared_6072_ = v_isSharedCheck_6085_;
goto v_resetjp_6070_;
}
v_resetjp_6070_:
{
lean_object* v___x_6074_; 
lean_inc(v_a_6069_);
if (v_isShared_6072_ == 0)
{
lean_ctor_set_tag(v___x_6071_, 1);
v___x_6074_ = v___x_6071_;
goto v_reusejp_6073_;
}
else
{
lean_object* v_reuseFailAlloc_6084_; 
v_reuseFailAlloc_6084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6084_, 0, v_a_6069_);
v___x_6074_ = v_reuseFailAlloc_6084_;
goto v_reusejp_6073_;
}
v_reusejp_6073_:
{
lean_object* v___x_6075_; lean_object* v___x_6077_; uint8_t v_isShared_6078_; uint8_t v_isSharedCheck_6082_; 
v___x_6075_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6030_, v_isExporting_6037_, v___x_6052_, v___y_6028_, v___x_6064_, v___x_6074_);
lean_dec_ref(v___x_6074_);
v_isSharedCheck_6082_ = !lean_is_exclusive(v___x_6075_);
if (v_isSharedCheck_6082_ == 0)
{
lean_object* v_unused_6083_; 
v_unused_6083_ = lean_ctor_get(v___x_6075_, 0);
lean_dec(v_unused_6083_);
v___x_6077_ = v___x_6075_;
v_isShared_6078_ = v_isSharedCheck_6082_;
goto v_resetjp_6076_;
}
else
{
lean_dec(v___x_6075_);
v___x_6077_ = lean_box(0);
v_isShared_6078_ = v_isSharedCheck_6082_;
goto v_resetjp_6076_;
}
v_resetjp_6076_:
{
lean_object* v___x_6080_; 
if (v_isShared_6078_ == 0)
{
lean_ctor_set(v___x_6077_, 0, v_a_6069_);
v___x_6080_ = v___x_6077_;
goto v_reusejp_6079_;
}
else
{
lean_object* v_reuseFailAlloc_6081_; 
v_reuseFailAlloc_6081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6081_, 0, v_a_6069_);
v___x_6080_ = v_reuseFailAlloc_6081_;
goto v_reusejp_6079_;
}
v_reusejp_6079_:
{
return v___x_6080_;
}
}
}
}
}
else
{
lean_object* v_a_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6090_; uint8_t v_isShared_6091_; uint8_t v_isSharedCheck_6095_; 
v_a_6086_ = lean_ctor_get(v___x_6068_, 0);
lean_inc(v_a_6086_);
lean_dec_ref_known(v___x_6068_, 1);
v___x_6087_ = lean_box(0);
v___x_6088_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6030_, v_isExporting_6037_, v___x_6052_, v___y_6028_, v___x_6064_, v___x_6087_);
v_isSharedCheck_6095_ = !lean_is_exclusive(v___x_6088_);
if (v_isSharedCheck_6095_ == 0)
{
lean_object* v_unused_6096_; 
v_unused_6096_ = lean_ctor_get(v___x_6088_, 0);
lean_dec(v_unused_6096_);
v___x_6090_ = v___x_6088_;
v_isShared_6091_ = v_isSharedCheck_6095_;
goto v_resetjp_6089_;
}
else
{
lean_dec(v___x_6088_);
v___x_6090_ = lean_box(0);
v_isShared_6091_ = v_isSharedCheck_6095_;
goto v_resetjp_6089_;
}
v_resetjp_6089_:
{
lean_object* v___x_6093_; 
if (v_isShared_6091_ == 0)
{
lean_ctor_set_tag(v___x_6090_, 1);
lean_ctor_set(v___x_6090_, 0, v_a_6086_);
v___x_6093_ = v___x_6090_;
goto v_reusejp_6092_;
}
else
{
lean_object* v_reuseFailAlloc_6094_; 
v_reuseFailAlloc_6094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6094_, 0, v_a_6086_);
v___x_6093_ = v_reuseFailAlloc_6094_;
goto v_reusejp_6092_;
}
v_reusejp_6092_:
{
return v___x_6093_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___boxed(lean_object* v_x_6105_, lean_object* v_isExporting_6106_, lean_object* v___y_6107_, lean_object* v___y_6108_, lean_object* v___y_6109_, lean_object* v___y_6110_, lean_object* v___y_6111_){
_start:
{
uint8_t v_isExporting_boxed_6112_; lean_object* v_res_6113_; 
v_isExporting_boxed_6112_ = lean_unbox(v_isExporting_6106_);
v_res_6113_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6105_, v_isExporting_boxed_6112_, v___y_6107_, v___y_6108_, v___y_6109_, v___y_6110_);
lean_dec(v___y_6110_);
lean_dec_ref(v___y_6109_);
lean_dec(v___y_6108_);
lean_dec_ref(v___y_6107_);
return v_res_6113_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(lean_object* v_x_6114_, uint8_t v_when_6115_, lean_object* v___y_6116_, lean_object* v___y_6117_, lean_object* v___y_6118_, lean_object* v___y_6119_){
_start:
{
if (v_when_6115_ == 0)
{
lean_object* v___x_6121_; 
lean_inc(v___y_6119_);
lean_inc_ref(v___y_6118_);
lean_inc(v___y_6117_);
lean_inc_ref(v___y_6116_);
v___x_6121_ = lean_apply_5(v_x_6114_, v___y_6116_, v___y_6117_, v___y_6118_, v___y_6119_, lean_box(0));
return v___x_6121_;
}
else
{
uint8_t v___x_6122_; lean_object* v___x_6123_; 
v___x_6122_ = 0;
v___x_6123_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6114_, v___x_6122_, v___y_6116_, v___y_6117_, v___y_6118_, v___y_6119_);
return v___x_6123_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg___boxed(lean_object* v_x_6124_, lean_object* v_when_6125_, lean_object* v___y_6126_, lean_object* v___y_6127_, lean_object* v___y_6128_, lean_object* v___y_6129_, lean_object* v___y_6130_){
_start:
{
uint8_t v_when_boxed_6131_; lean_object* v_res_6132_; 
v_when_boxed_6131_ = lean_unbox(v_when_6125_);
v_res_6132_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v_x_6124_, v_when_boxed_6131_, v___y_6126_, v___y_6127_, v___y_6128_, v___y_6129_);
lean_dec(v___y_6129_);
lean_dec_ref(v___y_6128_);
lean_dec(v___y_6127_);
lean_dec_ref(v___y_6126_);
return v_res_6132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals(lean_object* v_funNames_6133_, lean_object* v_argsPacker_6134_, lean_object* v_decrTactics_6135_, lean_object* v_value_6136_, lean_object* v___y_6137_, lean_object* v___y_6138_, lean_object* v___y_6139_, lean_object* v___y_6140_){
_start:
{
lean_object* v___f_6142_; uint8_t v___x_6143_; lean_object* v___x_6144_; 
v___f_6142_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed), 9, 4);
lean_closure_set(v___f_6142_, 0, v_value_6136_);
lean_closure_set(v___f_6142_, 1, v_decrTactics_6135_);
lean_closure_set(v___f_6142_, 2, v_argsPacker_6134_);
lean_closure_set(v___f_6142_, 3, v_funNames_6133_);
v___x_6143_ = 1;
v___x_6144_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v___f_6142_, v___x_6143_, v___y_6137_, v___y_6138_, v___y_6139_, v___y_6140_);
return v___x_6144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___boxed(lean_object* v_funNames_6145_, lean_object* v_argsPacker_6146_, lean_object* v_decrTactics_6147_, lean_object* v_value_6148_, lean_object* v___y_6149_, lean_object* v___y_6150_, lean_object* v___y_6151_, lean_object* v___y_6152_, lean_object* v___y_6153_){
_start:
{
lean_object* v_res_6154_; 
v_res_6154_ = l_Lean_Elab_WF_solveDecreasingGoals(v_funNames_6145_, v_argsPacker_6146_, v_decrTactics_6147_, v_value_6148_, v___y_6149_, v___y_6150_, v___y_6151_, v___y_6152_);
lean_dec(v___y_6152_);
lean_dec_ref(v___y_6151_);
lean_dec(v___y_6150_);
lean_dec_ref(v___y_6149_);
return v_res_6154_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(lean_object* v_00_u03b1_6155_, lean_object* v_msg_6156_, lean_object* v___y_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_, lean_object* v___y_6160_, lean_object* v___y_6161_, lean_object* v___y_6162_){
_start:
{
lean_object* v___x_6164_; 
v___x_6164_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v_msg_6156_, v___y_6157_, v___y_6158_, v___y_6159_, v___y_6160_, v___y_6161_, v___y_6162_);
return v___x_6164_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___boxed(lean_object* v_00_u03b1_6165_, lean_object* v_msg_6166_, lean_object* v___y_6167_, lean_object* v___y_6168_, lean_object* v___y_6169_, lean_object* v___y_6170_, lean_object* v___y_6171_, lean_object* v___y_6172_, lean_object* v___y_6173_){
_start:
{
lean_object* v_res_6174_; 
v_res_6174_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(v_00_u03b1_6165_, v_msg_6166_, v___y_6167_, v___y_6168_, v___y_6169_, v___y_6170_, v___y_6171_, v___y_6172_);
lean_dec(v___y_6172_);
lean_dec_ref(v___y_6171_);
lean_dec(v___y_6170_);
lean_dec_ref(v___y_6169_);
lean_dec(v___y_6168_);
lean_dec_ref(v___y_6167_);
return v_res_6174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(lean_object* v___y_6175_, lean_object* v___y_6176_, lean_object* v___y_6177_, lean_object* v___y_6178_, lean_object* v___y_6179_, lean_object* v___y_6180_, lean_object* v___y_6181_, lean_object* v___y_6182_){
_start:
{
lean_object* v___x_6184_; 
v___x_6184_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_6182_);
return v___x_6184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___boxed(lean_object* v___y_6185_, lean_object* v___y_6186_, lean_object* v___y_6187_, lean_object* v___y_6188_, lean_object* v___y_6189_, lean_object* v___y_6190_, lean_object* v___y_6191_, lean_object* v___y_6192_, lean_object* v___y_6193_){
_start:
{
lean_object* v_res_6194_; 
v_res_6194_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(v___y_6185_, v___y_6186_, v___y_6187_, v___y_6188_, v___y_6189_, v___y_6190_, v___y_6191_, v___y_6192_);
lean_dec(v___y_6192_);
lean_dec_ref(v___y_6191_);
lean_dec(v___y_6190_);
lean_dec_ref(v___y_6189_);
lean_dec(v___y_6188_);
lean_dec_ref(v___y_6187_);
lean_dec(v___y_6186_);
lean_dec_ref(v___y_6185_);
return v_res_6194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(lean_object* v_00_u03b1_6195_, lean_object* v_x_6196_, lean_object* v_mkInfoTree_6197_, lean_object* v___y_6198_, lean_object* v___y_6199_, lean_object* v___y_6200_, lean_object* v___y_6201_, lean_object* v___y_6202_, lean_object* v___y_6203_, lean_object* v___y_6204_, lean_object* v___y_6205_){
_start:
{
lean_object* v___x_6207_; 
v___x_6207_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v_x_6196_, v_mkInfoTree_6197_, v___y_6198_, v___y_6199_, v___y_6200_, v___y_6201_, v___y_6202_, v___y_6203_, v___y_6204_, v___y_6205_);
return v___x_6207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___boxed(lean_object* v_00_u03b1_6208_, lean_object* v_x_6209_, lean_object* v_mkInfoTree_6210_, lean_object* v___y_6211_, lean_object* v___y_6212_, lean_object* v___y_6213_, lean_object* v___y_6214_, lean_object* v___y_6215_, lean_object* v___y_6216_, lean_object* v___y_6217_, lean_object* v___y_6218_, lean_object* v___y_6219_){
_start:
{
lean_object* v_res_6220_; 
v_res_6220_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(v_00_u03b1_6208_, v_x_6209_, v_mkInfoTree_6210_, v___y_6211_, v___y_6212_, v___y_6213_, v___y_6214_, v___y_6215_, v___y_6216_, v___y_6217_, v___y_6218_);
lean_dec(v___y_6218_);
lean_dec_ref(v___y_6217_);
lean_dec(v___y_6216_);
lean_dec_ref(v___y_6215_);
lean_dec(v___y_6214_);
lean_dec_ref(v___y_6213_);
lean_dec(v___y_6212_);
lean_dec_ref(v___y_6211_);
return v_res_6220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(lean_object* v_as_6221_, size_t v_i_6222_, size_t v_stop_6223_, lean_object* v_b_6224_, lean_object* v___y_6225_, lean_object* v___y_6226_, lean_object* v___y_6227_, lean_object* v___y_6228_, lean_object* v___y_6229_, lean_object* v___y_6230_){
_start:
{
lean_object* v___x_6232_; 
v___x_6232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v_as_6221_, v_i_6222_, v_stop_6223_, v_b_6224_, v___y_6227_, v___y_6228_, v___y_6229_, v___y_6230_);
return v___x_6232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___boxed(lean_object* v_as_6233_, lean_object* v_i_6234_, lean_object* v_stop_6235_, lean_object* v_b_6236_, lean_object* v___y_6237_, lean_object* v___y_6238_, lean_object* v___y_6239_, lean_object* v___y_6240_, lean_object* v___y_6241_, lean_object* v___y_6242_, lean_object* v___y_6243_){
_start:
{
size_t v_i_boxed_6244_; size_t v_stop_boxed_6245_; lean_object* v_res_6246_; 
v_i_boxed_6244_ = lean_unbox_usize(v_i_6234_);
lean_dec(v_i_6234_);
v_stop_boxed_6245_ = lean_unbox_usize(v_stop_6235_);
lean_dec(v_stop_6235_);
v_res_6246_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(v_as_6233_, v_i_boxed_6244_, v_stop_boxed_6245_, v_b_6236_, v___y_6237_, v___y_6238_, v___y_6239_, v___y_6240_, v___y_6241_, v___y_6242_);
lean_dec(v___y_6242_);
lean_dec_ref(v___y_6241_);
lean_dec(v___y_6240_);
lean_dec_ref(v___y_6239_);
lean_dec(v___y_6238_);
lean_dec_ref(v___y_6237_);
lean_dec_ref(v_as_6233_);
return v_res_6246_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(lean_object* v_00_u03b1_6247_, lean_object* v_x_6248_, uint8_t v_isExporting_6249_, lean_object* v___y_6250_, lean_object* v___y_6251_, lean_object* v___y_6252_, lean_object* v___y_6253_){
_start:
{
lean_object* v___x_6255_; 
v___x_6255_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6248_, v_isExporting_6249_, v___y_6250_, v___y_6251_, v___y_6252_, v___y_6253_);
return v___x_6255_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___boxed(lean_object* v_00_u03b1_6256_, lean_object* v_x_6257_, lean_object* v_isExporting_6258_, lean_object* v___y_6259_, lean_object* v___y_6260_, lean_object* v___y_6261_, lean_object* v___y_6262_, lean_object* v___y_6263_){
_start:
{
uint8_t v_isExporting_boxed_6264_; lean_object* v_res_6265_; 
v_isExporting_boxed_6264_ = lean_unbox(v_isExporting_6258_);
v_res_6265_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(v_00_u03b1_6256_, v_x_6257_, v_isExporting_boxed_6264_, v___y_6259_, v___y_6260_, v___y_6261_, v___y_6262_);
lean_dec(v___y_6262_);
lean_dec_ref(v___y_6261_);
lean_dec(v___y_6260_);
lean_dec_ref(v___y_6259_);
return v_res_6265_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(lean_object* v_00_u03b1_6266_, lean_object* v_x_6267_, uint8_t v_when_6268_, lean_object* v___y_6269_, lean_object* v___y_6270_, lean_object* v___y_6271_, lean_object* v___y_6272_){
_start:
{
lean_object* v___x_6274_; 
v___x_6274_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v_x_6267_, v_when_6268_, v___y_6269_, v___y_6270_, v___y_6271_, v___y_6272_);
return v___x_6274_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___boxed(lean_object* v_00_u03b1_6275_, lean_object* v_x_6276_, lean_object* v_when_6277_, lean_object* v___y_6278_, lean_object* v___y_6279_, lean_object* v___y_6280_, lean_object* v___y_6281_, lean_object* v___y_6282_){
_start:
{
uint8_t v_when_boxed_6283_; lean_object* v_res_6284_; 
v_when_boxed_6283_ = lean_unbox(v_when_6277_);
v_res_6284_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(v_00_u03b1_6275_, v_x_6276_, v_when_boxed_6283_, v___y_6278_, v___y_6279_, v___y_6280_, v___y_6281_);
lean_dec(v___y_6281_);
lean_dec_ref(v___y_6280_);
lean_dec(v___y_6279_);
lean_dec_ref(v___y_6278_);
return v_res_6284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(lean_object* v_msgData_6285_, lean_object* v_macroStack_6286_, lean_object* v___y_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_, lean_object* v___y_6290_, lean_object* v___y_6291_, lean_object* v___y_6292_){
_start:
{
lean_object* v___x_6294_; 
v___x_6294_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_msgData_6285_, v_macroStack_6286_, v___y_6291_);
return v___x_6294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___boxed(lean_object* v_msgData_6295_, lean_object* v_macroStack_6296_, lean_object* v___y_6297_, lean_object* v___y_6298_, lean_object* v___y_6299_, lean_object* v___y_6300_, lean_object* v___y_6301_, lean_object* v___y_6302_, lean_object* v___y_6303_){
_start:
{
lean_object* v_res_6304_; 
v_res_6304_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(v_msgData_6295_, v_macroStack_6296_, v___y_6297_, v___y_6298_, v___y_6299_, v___y_6300_, v___y_6301_, v___y_6302_);
lean_dec(v___y_6302_);
lean_dec_ref(v___y_6301_);
lean_dec(v___y_6300_);
lean_dec_ref(v___y_6299_);
lean_dec(v___y_6298_);
lean_dec_ref(v___y_6297_);
return v_res_6304_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__4(void){
_start:
{
lean_object* v___x_6311_; lean_object* v___x_6312_; lean_object* v___x_6313_; 
v___x_6311_ = lean_box(0);
v___x_6312_ = ((lean_object*)(l_Lean_Elab_WF_isNatLtWF___closed__3));
v___x_6313_ = l_Lean_mkConst(v___x_6312_, v___x_6311_);
return v___x_6313_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__7(void){
_start:
{
lean_object* v___x_6318_; lean_object* v___x_6319_; lean_object* v___x_6320_; 
v___x_6318_ = lean_box(0);
v___x_6319_ = ((lean_object*)(l_Lean_Elab_WF_isNatLtWF___closed__6));
v___x_6320_ = l_Lean_mkConst(v___x_6319_, v___x_6318_);
return v___x_6320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object* v_wfRel_6321_, lean_object* v___y_6322_, lean_object* v___y_6323_, lean_object* v___y_6324_, lean_object* v___y_6325_){
_start:
{
lean_object* v___x_6330_; 
v___x_6330_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_wfRel_6321_, v___y_6323_);
if (lean_obj_tag(v___x_6330_) == 0)
{
lean_object* v_a_6331_; lean_object* v___x_6332_; uint8_t v___x_6333_; 
v_a_6331_ = lean_ctor_get(v___x_6330_, 0);
lean_inc(v_a_6331_);
lean_dec_ref_known(v___x_6330_, 1);
v___x_6332_ = l_Lean_Expr_cleanupAnnotations(v_a_6331_);
v___x_6333_ = l_Lean_Expr_isApp(v___x_6332_);
if (v___x_6333_ == 0)
{
lean_dec_ref(v___x_6332_);
goto v___jp_6327_;
}
else
{
lean_object* v_arg_6334_; lean_object* v___x_6335_; uint8_t v___x_6336_; 
v_arg_6334_ = lean_ctor_get(v___x_6332_, 1);
lean_inc_ref(v_arg_6334_);
v___x_6335_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6332_);
v___x_6336_ = l_Lean_Expr_isApp(v___x_6335_);
if (v___x_6336_ == 0)
{
lean_dec_ref(v___x_6335_);
lean_dec_ref(v_arg_6334_);
goto v___jp_6327_;
}
else
{
lean_object* v_arg_6337_; lean_object* v___x_6338_; uint8_t v___x_6339_; 
v_arg_6337_ = lean_ctor_get(v___x_6335_, 1);
lean_inc_ref(v_arg_6337_);
v___x_6338_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6335_);
v___x_6339_ = l_Lean_Expr_isApp(v___x_6338_);
if (v___x_6339_ == 0)
{
lean_dec_ref(v___x_6338_);
lean_dec_ref(v_arg_6337_);
lean_dec_ref(v_arg_6334_);
goto v___jp_6327_;
}
else
{
lean_object* v_arg_6340_; lean_object* v___x_6341_; uint8_t v___x_6342_; 
v_arg_6340_ = lean_ctor_get(v___x_6338_, 1);
lean_inc_ref(v_arg_6340_);
v___x_6341_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6338_);
v___x_6342_ = l_Lean_Expr_isApp(v___x_6341_);
if (v___x_6342_ == 0)
{
lean_dec_ref(v___x_6341_);
lean_dec_ref(v_arg_6340_);
lean_dec_ref(v_arg_6337_);
lean_dec_ref(v_arg_6334_);
goto v___jp_6327_;
}
else
{
lean_object* v___x_6343_; lean_object* v___x_6344_; uint8_t v___x_6345_; 
v___x_6343_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6341_);
v___x_6344_ = ((lean_object*)(l_Lean_Elab_WF_isNatLtWF___closed__1));
v___x_6345_ = l_Lean_Expr_isConstOf(v___x_6343_, v___x_6344_);
lean_dec_ref(v___x_6343_);
if (v___x_6345_ == 0)
{
lean_dec_ref(v_arg_6340_);
lean_dec_ref(v_arg_6337_);
lean_dec_ref(v_arg_6334_);
goto v___jp_6327_;
}
else
{
lean_object* v___x_6346_; lean_object* v___x_6347_; 
v___x_6346_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__4, &l_Lean_Elab_WF_isNatLtWF___closed__4_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__4);
v___x_6347_ = l_Lean_Meta_isExprDefEq(v_arg_6340_, v___x_6346_, v___y_6322_, v___y_6323_, v___y_6324_, v___y_6325_);
if (lean_obj_tag(v___x_6347_) == 0)
{
lean_object* v_a_6348_; lean_object* v___x_6350_; uint8_t v_isShared_6351_; uint8_t v_isSharedCheck_6381_; 
v_a_6348_ = lean_ctor_get(v___x_6347_, 0);
v_isSharedCheck_6381_ = !lean_is_exclusive(v___x_6347_);
if (v_isSharedCheck_6381_ == 0)
{
v___x_6350_ = v___x_6347_;
v_isShared_6351_ = v_isSharedCheck_6381_;
goto v_resetjp_6349_;
}
else
{
lean_inc(v_a_6348_);
lean_dec(v___x_6347_);
v___x_6350_ = lean_box(0);
v_isShared_6351_ = v_isSharedCheck_6381_;
goto v_resetjp_6349_;
}
v_resetjp_6349_:
{
uint8_t v___x_6352_; 
v___x_6352_ = lean_unbox(v_a_6348_);
lean_dec(v_a_6348_);
if (v___x_6352_ == 0)
{
lean_object* v___x_6353_; lean_object* v___x_6355_; 
lean_dec_ref(v_arg_6337_);
lean_dec_ref(v_arg_6334_);
v___x_6353_ = lean_box(0);
if (v_isShared_6351_ == 0)
{
lean_ctor_set(v___x_6350_, 0, v___x_6353_);
v___x_6355_ = v___x_6350_;
goto v_reusejp_6354_;
}
else
{
lean_object* v_reuseFailAlloc_6356_; 
v_reuseFailAlloc_6356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6356_, 0, v___x_6353_);
v___x_6355_ = v_reuseFailAlloc_6356_;
goto v_reusejp_6354_;
}
v_reusejp_6354_:
{
return v___x_6355_;
}
}
else
{
lean_object* v___x_6357_; lean_object* v___x_6358_; 
lean_del_object(v___x_6350_);
v___x_6357_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__7, &l_Lean_Elab_WF_isNatLtWF___closed__7_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__7);
v___x_6358_ = l_Lean_Meta_isExprDefEq(v_arg_6334_, v___x_6357_, v___y_6322_, v___y_6323_, v___y_6324_, v___y_6325_);
if (lean_obj_tag(v___x_6358_) == 0)
{
lean_object* v_a_6359_; lean_object* v___x_6361_; uint8_t v_isShared_6362_; uint8_t v_isSharedCheck_6372_; 
v_a_6359_ = lean_ctor_get(v___x_6358_, 0);
v_isSharedCheck_6372_ = !lean_is_exclusive(v___x_6358_);
if (v_isSharedCheck_6372_ == 0)
{
v___x_6361_ = v___x_6358_;
v_isShared_6362_ = v_isSharedCheck_6372_;
goto v_resetjp_6360_;
}
else
{
lean_inc(v_a_6359_);
lean_dec(v___x_6358_);
v___x_6361_ = lean_box(0);
v_isShared_6362_ = v_isSharedCheck_6372_;
goto v_resetjp_6360_;
}
v_resetjp_6360_:
{
uint8_t v___x_6363_; 
v___x_6363_ = lean_unbox(v_a_6359_);
lean_dec(v_a_6359_);
if (v___x_6363_ == 0)
{
lean_object* v___x_6364_; lean_object* v___x_6366_; 
lean_dec_ref(v_arg_6337_);
v___x_6364_ = lean_box(0);
if (v_isShared_6362_ == 0)
{
lean_ctor_set(v___x_6361_, 0, v___x_6364_);
v___x_6366_ = v___x_6361_;
goto v_reusejp_6365_;
}
else
{
lean_object* v_reuseFailAlloc_6367_; 
v_reuseFailAlloc_6367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6367_, 0, v___x_6364_);
v___x_6366_ = v_reuseFailAlloc_6367_;
goto v_reusejp_6365_;
}
v_reusejp_6365_:
{
return v___x_6366_;
}
}
else
{
lean_object* v___x_6368_; lean_object* v___x_6370_; 
v___x_6368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6368_, 0, v_arg_6337_);
if (v_isShared_6362_ == 0)
{
lean_ctor_set(v___x_6361_, 0, v___x_6368_);
v___x_6370_ = v___x_6361_;
goto v_reusejp_6369_;
}
else
{
lean_object* v_reuseFailAlloc_6371_; 
v_reuseFailAlloc_6371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6371_, 0, v___x_6368_);
v___x_6370_ = v_reuseFailAlloc_6371_;
goto v_reusejp_6369_;
}
v_reusejp_6369_:
{
return v___x_6370_;
}
}
}
}
else
{
lean_object* v_a_6373_; lean_object* v___x_6375_; uint8_t v_isShared_6376_; uint8_t v_isSharedCheck_6380_; 
lean_dec_ref(v_arg_6337_);
v_a_6373_ = lean_ctor_get(v___x_6358_, 0);
v_isSharedCheck_6380_ = !lean_is_exclusive(v___x_6358_);
if (v_isSharedCheck_6380_ == 0)
{
v___x_6375_ = v___x_6358_;
v_isShared_6376_ = v_isSharedCheck_6380_;
goto v_resetjp_6374_;
}
else
{
lean_inc(v_a_6373_);
lean_dec(v___x_6358_);
v___x_6375_ = lean_box(0);
v_isShared_6376_ = v_isSharedCheck_6380_;
goto v_resetjp_6374_;
}
v_resetjp_6374_:
{
lean_object* v___x_6378_; 
if (v_isShared_6376_ == 0)
{
v___x_6378_ = v___x_6375_;
goto v_reusejp_6377_;
}
else
{
lean_object* v_reuseFailAlloc_6379_; 
v_reuseFailAlloc_6379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6379_, 0, v_a_6373_);
v___x_6378_ = v_reuseFailAlloc_6379_;
goto v_reusejp_6377_;
}
v_reusejp_6377_:
{
return v___x_6378_;
}
}
}
}
}
}
else
{
lean_object* v_a_6382_; lean_object* v___x_6384_; uint8_t v_isShared_6385_; uint8_t v_isSharedCheck_6389_; 
lean_dec_ref(v_arg_6337_);
lean_dec_ref(v_arg_6334_);
v_a_6382_ = lean_ctor_get(v___x_6347_, 0);
v_isSharedCheck_6389_ = !lean_is_exclusive(v___x_6347_);
if (v_isSharedCheck_6389_ == 0)
{
v___x_6384_ = v___x_6347_;
v_isShared_6385_ = v_isSharedCheck_6389_;
goto v_resetjp_6383_;
}
else
{
lean_inc(v_a_6382_);
lean_dec(v___x_6347_);
v___x_6384_ = lean_box(0);
v_isShared_6385_ = v_isSharedCheck_6389_;
goto v_resetjp_6383_;
}
v_resetjp_6383_:
{
lean_object* v___x_6387_; 
if (v_isShared_6385_ == 0)
{
v___x_6387_ = v___x_6384_;
goto v_reusejp_6386_;
}
else
{
lean_object* v_reuseFailAlloc_6388_; 
v_reuseFailAlloc_6388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6388_, 0, v_a_6382_);
v___x_6387_ = v_reuseFailAlloc_6388_;
goto v_reusejp_6386_;
}
v_reusejp_6386_:
{
return v___x_6387_;
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
lean_object* v_a_6390_; lean_object* v___x_6392_; uint8_t v_isShared_6393_; uint8_t v_isSharedCheck_6397_; 
v_a_6390_ = lean_ctor_get(v___x_6330_, 0);
v_isSharedCheck_6397_ = !lean_is_exclusive(v___x_6330_);
if (v_isSharedCheck_6397_ == 0)
{
v___x_6392_ = v___x_6330_;
v_isShared_6393_ = v_isSharedCheck_6397_;
goto v_resetjp_6391_;
}
else
{
lean_inc(v_a_6390_);
lean_dec(v___x_6330_);
v___x_6392_ = lean_box(0);
v_isShared_6393_ = v_isSharedCheck_6397_;
goto v_resetjp_6391_;
}
v_resetjp_6391_:
{
lean_object* v___x_6395_; 
if (v_isShared_6393_ == 0)
{
v___x_6395_ = v___x_6392_;
goto v_reusejp_6394_;
}
else
{
lean_object* v_reuseFailAlloc_6396_; 
v_reuseFailAlloc_6396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6396_, 0, v_a_6390_);
v___x_6395_ = v_reuseFailAlloc_6396_;
goto v_reusejp_6394_;
}
v_reusejp_6394_:
{
return v___x_6395_;
}
}
}
v___jp_6327_:
{
lean_object* v___x_6328_; lean_object* v___x_6329_; 
v___x_6328_ = lean_box(0);
v___x_6329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6329_, 0, v___x_6328_);
return v___x_6329_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF___boxed(lean_object* v_wfRel_6398_, lean_object* v___y_6399_, lean_object* v___y_6400_, lean_object* v___y_6401_, lean_object* v___y_6402_, lean_object* v___y_6403_){
_start:
{
lean_object* v_res_6404_; 
v_res_6404_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_6398_, v___y_6399_, v___y_6400_, v___y_6401_, v___y_6402_);
lean_dec(v___y_6402_);
lean_dec_ref(v___y_6401_);
lean_dec(v___y_6400_);
lean_dec_ref(v___y_6399_);
return v_res_6404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(lean_object* v_type_6405_, lean_object* v_maxFVars_x3f_6406_, lean_object* v_k_6407_, uint8_t v_cleanupAnnotations_6408_, uint8_t v_whnfType_6409_, lean_object* v___y_6410_, lean_object* v___y_6411_, lean_object* v___y_6412_, lean_object* v___y_6413_, lean_object* v___y_6414_, lean_object* v___y_6415_){
_start:
{
lean_object* v___f_6417_; lean_object* v___x_6418_; 
lean_inc(v___y_6411_);
lean_inc_ref(v___y_6410_);
v___f_6417_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_6417_, 0, v_k_6407_);
lean_closure_set(v___f_6417_, 1, v___y_6410_);
lean_closure_set(v___f_6417_, 2, v___y_6411_);
v___x_6418_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_6405_, v_maxFVars_x3f_6406_, v___f_6417_, v_cleanupAnnotations_6408_, v_whnfType_6409_, v___y_6412_, v___y_6413_, v___y_6414_, v___y_6415_);
if (lean_obj_tag(v___x_6418_) == 0)
{
return v___x_6418_;
}
else
{
lean_object* v_a_6419_; lean_object* v___x_6421_; uint8_t v_isShared_6422_; uint8_t v_isSharedCheck_6426_; 
v_a_6419_ = lean_ctor_get(v___x_6418_, 0);
v_isSharedCheck_6426_ = !lean_is_exclusive(v___x_6418_);
if (v_isSharedCheck_6426_ == 0)
{
v___x_6421_ = v___x_6418_;
v_isShared_6422_ = v_isSharedCheck_6426_;
goto v_resetjp_6420_;
}
else
{
lean_inc(v_a_6419_);
lean_dec(v___x_6418_);
v___x_6421_ = lean_box(0);
v_isShared_6422_ = v_isSharedCheck_6426_;
goto v_resetjp_6420_;
}
v_resetjp_6420_:
{
lean_object* v___x_6424_; 
if (v_isShared_6422_ == 0)
{
v___x_6424_ = v___x_6421_;
goto v_reusejp_6423_;
}
else
{
lean_object* v_reuseFailAlloc_6425_; 
v_reuseFailAlloc_6425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6425_, 0, v_a_6419_);
v___x_6424_ = v_reuseFailAlloc_6425_;
goto v_reusejp_6423_;
}
v_reusejp_6423_:
{
return v___x_6424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg___boxed(lean_object* v_type_6427_, lean_object* v_maxFVars_x3f_6428_, lean_object* v_k_6429_, lean_object* v_cleanupAnnotations_6430_, lean_object* v_whnfType_6431_, lean_object* v___y_6432_, lean_object* v___y_6433_, lean_object* v___y_6434_, lean_object* v___y_6435_, lean_object* v___y_6436_, lean_object* v___y_6437_, lean_object* v___y_6438_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_6439_; uint8_t v_whnfType_boxed_6440_; lean_object* v_res_6441_; 
v_cleanupAnnotations_boxed_6439_ = lean_unbox(v_cleanupAnnotations_6430_);
v_whnfType_boxed_6440_ = lean_unbox(v_whnfType_6431_);
v_res_6441_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_type_6427_, v_maxFVars_x3f_6428_, v_k_6429_, v_cleanupAnnotations_boxed_6439_, v_whnfType_boxed_6440_, v___y_6432_, v___y_6433_, v___y_6434_, v___y_6435_, v___y_6436_, v___y_6437_);
lean_dec(v___y_6437_);
lean_dec_ref(v___y_6436_);
lean_dec(v___y_6435_);
lean_dec_ref(v___y_6434_);
lean_dec(v___y_6433_);
lean_dec_ref(v___y_6432_);
return v_res_6441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(lean_object* v_00_u03b1_6442_, lean_object* v_type_6443_, lean_object* v_maxFVars_x3f_6444_, lean_object* v_k_6445_, uint8_t v_cleanupAnnotations_6446_, uint8_t v_whnfType_6447_, lean_object* v___y_6448_, lean_object* v___y_6449_, lean_object* v___y_6450_, lean_object* v___y_6451_, lean_object* v___y_6452_, lean_object* v___y_6453_){
_start:
{
lean_object* v___x_6455_; 
v___x_6455_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_type_6443_, v_maxFVars_x3f_6444_, v_k_6445_, v_cleanupAnnotations_6446_, v_whnfType_6447_, v___y_6448_, v___y_6449_, v___y_6450_, v___y_6451_, v___y_6452_, v___y_6453_);
return v___x_6455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___boxed(lean_object* v_00_u03b1_6456_, lean_object* v_type_6457_, lean_object* v_maxFVars_x3f_6458_, lean_object* v_k_6459_, lean_object* v_cleanupAnnotations_6460_, lean_object* v_whnfType_6461_, lean_object* v___y_6462_, lean_object* v___y_6463_, lean_object* v___y_6464_, lean_object* v___y_6465_, lean_object* v___y_6466_, lean_object* v___y_6467_, lean_object* v___y_6468_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_6469_; uint8_t v_whnfType_boxed_6470_; lean_object* v_res_6471_; 
v_cleanupAnnotations_boxed_6469_ = lean_unbox(v_cleanupAnnotations_6460_);
v_whnfType_boxed_6470_ = lean_unbox(v_whnfType_6461_);
v_res_6471_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(v_00_u03b1_6456_, v_type_6457_, v_maxFVars_x3f_6458_, v_k_6459_, v_cleanupAnnotations_boxed_6469_, v_whnfType_boxed_6470_, v___y_6462_, v___y_6463_, v___y_6464_, v___y_6465_, v___y_6466_, v___y_6467_);
lean_dec(v___y_6467_);
lean_dec_ref(v___y_6466_);
lean_dec(v___y_6465_);
lean_dec_ref(v___y_6464_);
lean_dec(v___y_6463_);
lean_dec_ref(v___y_6462_);
return v_res_6471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(lean_object* v_lctx_6472_, lean_object* v_x_6473_, lean_object* v___y_6474_, lean_object* v___y_6475_, lean_object* v___y_6476_, lean_object* v___y_6477_, lean_object* v___y_6478_, lean_object* v___y_6479_){
_start:
{
lean_object* v_keyedConfig_6481_; uint8_t v_trackZetaDelta_6482_; lean_object* v_zetaDeltaSet_6483_; lean_object* v_localInstances_6484_; lean_object* v_defEqCtx_x3f_6485_; lean_object* v_synthPendingDepth_6486_; lean_object* v_customCanUnfoldPredicate_x3f_6487_; uint8_t v_univApprox_6488_; uint8_t v_inTypeClassResolution_6489_; uint8_t v_cacheInferType_6490_; lean_object* v___x_6491_; lean_object* v___x_6492_; 
v_keyedConfig_6481_ = lean_ctor_get(v___y_6476_, 0);
v_trackZetaDelta_6482_ = lean_ctor_get_uint8(v___y_6476_, sizeof(void*)*7);
v_zetaDeltaSet_6483_ = lean_ctor_get(v___y_6476_, 1);
v_localInstances_6484_ = lean_ctor_get(v___y_6476_, 3);
v_defEqCtx_x3f_6485_ = lean_ctor_get(v___y_6476_, 4);
v_synthPendingDepth_6486_ = lean_ctor_get(v___y_6476_, 5);
v_customCanUnfoldPredicate_x3f_6487_ = lean_ctor_get(v___y_6476_, 6);
v_univApprox_6488_ = lean_ctor_get_uint8(v___y_6476_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_6489_ = lean_ctor_get_uint8(v___y_6476_, sizeof(void*)*7 + 2);
v_cacheInferType_6490_ = lean_ctor_get_uint8(v___y_6476_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_6487_);
lean_inc(v_synthPendingDepth_6486_);
lean_inc(v_defEqCtx_x3f_6485_);
lean_inc_ref(v_localInstances_6484_);
lean_inc(v_zetaDeltaSet_6483_);
lean_inc_ref(v_keyedConfig_6481_);
v___x_6491_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6491_, 0, v_keyedConfig_6481_);
lean_ctor_set(v___x_6491_, 1, v_zetaDeltaSet_6483_);
lean_ctor_set(v___x_6491_, 2, v_lctx_6472_);
lean_ctor_set(v___x_6491_, 3, v_localInstances_6484_);
lean_ctor_set(v___x_6491_, 4, v_defEqCtx_x3f_6485_);
lean_ctor_set(v___x_6491_, 5, v_synthPendingDepth_6486_);
lean_ctor_set(v___x_6491_, 6, v_customCanUnfoldPredicate_x3f_6487_);
lean_ctor_set_uint8(v___x_6491_, sizeof(void*)*7, v_trackZetaDelta_6482_);
lean_ctor_set_uint8(v___x_6491_, sizeof(void*)*7 + 1, v_univApprox_6488_);
lean_ctor_set_uint8(v___x_6491_, sizeof(void*)*7 + 2, v_inTypeClassResolution_6489_);
lean_ctor_set_uint8(v___x_6491_, sizeof(void*)*7 + 3, v_cacheInferType_6490_);
lean_inc(v___y_6479_);
lean_inc_ref(v___y_6478_);
lean_inc(v___y_6477_);
lean_inc(v___y_6475_);
lean_inc_ref(v___y_6474_);
v___x_6492_ = lean_apply_7(v_x_6473_, v___y_6474_, v___y_6475_, v___x_6491_, v___y_6477_, v___y_6478_, v___y_6479_, lean_box(0));
if (lean_obj_tag(v___x_6492_) == 0)
{
lean_object* v_a_6493_; lean_object* v___x_6495_; uint8_t v_isShared_6496_; uint8_t v_isSharedCheck_6500_; 
v_a_6493_ = lean_ctor_get(v___x_6492_, 0);
v_isSharedCheck_6500_ = !lean_is_exclusive(v___x_6492_);
if (v_isSharedCheck_6500_ == 0)
{
v___x_6495_ = v___x_6492_;
v_isShared_6496_ = v_isSharedCheck_6500_;
goto v_resetjp_6494_;
}
else
{
lean_inc(v_a_6493_);
lean_dec(v___x_6492_);
v___x_6495_ = lean_box(0);
v_isShared_6496_ = v_isSharedCheck_6500_;
goto v_resetjp_6494_;
}
v_resetjp_6494_:
{
lean_object* v___x_6498_; 
if (v_isShared_6496_ == 0)
{
v___x_6498_ = v___x_6495_;
goto v_reusejp_6497_;
}
else
{
lean_object* v_reuseFailAlloc_6499_; 
v_reuseFailAlloc_6499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6499_, 0, v_a_6493_);
v___x_6498_ = v_reuseFailAlloc_6499_;
goto v_reusejp_6497_;
}
v_reusejp_6497_:
{
return v___x_6498_;
}
}
}
else
{
return v___x_6492_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg___boxed(lean_object* v_lctx_6501_, lean_object* v_x_6502_, lean_object* v___y_6503_, lean_object* v___y_6504_, lean_object* v___y_6505_, lean_object* v___y_6506_, lean_object* v___y_6507_, lean_object* v___y_6508_, lean_object* v___y_6509_){
_start:
{
lean_object* v_res_6510_; 
v_res_6510_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v_lctx_6501_, v_x_6502_, v___y_6503_, v___y_6504_, v___y_6505_, v___y_6506_, v___y_6507_, v___y_6508_);
lean_dec(v___y_6508_);
lean_dec_ref(v___y_6507_);
lean_dec(v___y_6506_);
lean_dec_ref(v___y_6505_);
lean_dec(v___y_6504_);
lean_dec_ref(v___y_6503_);
return v_res_6510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(lean_object* v_00_u03b1_6511_, lean_object* v_lctx_6512_, lean_object* v_x_6513_, lean_object* v___y_6514_, lean_object* v___y_6515_, lean_object* v___y_6516_, lean_object* v___y_6517_, lean_object* v___y_6518_, lean_object* v___y_6519_){
_start:
{
lean_object* v___x_6521_; 
v___x_6521_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v_lctx_6512_, v_x_6513_, v___y_6514_, v___y_6515_, v___y_6516_, v___y_6517_, v___y_6518_, v___y_6519_);
return v___x_6521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___boxed(lean_object* v_00_u03b1_6522_, lean_object* v_lctx_6523_, lean_object* v_x_6524_, lean_object* v___y_6525_, lean_object* v___y_6526_, lean_object* v___y_6527_, lean_object* v___y_6528_, lean_object* v___y_6529_, lean_object* v___y_6530_, lean_object* v___y_6531_){
_start:
{
lean_object* v_res_6532_; 
v_res_6532_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(v_00_u03b1_6522_, v_lctx_6523_, v_x_6524_, v___y_6525_, v___y_6526_, v___y_6527_, v___y_6528_, v___y_6529_, v___y_6530_);
lean_dec(v___y_6530_);
lean_dec_ref(v___y_6529_);
lean_dec(v___y_6528_);
lean_dec_ref(v___y_6527_);
lean_dec(v___y_6526_);
lean_dec_ref(v___y_6525_);
return v_res_6532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0(lean_object* v_prefixArgs_6533_, lean_object* v_declName_6534_, lean_object* v_x_6535_, lean_object* v_F_6536_, lean_object* v_val_6537_, lean_object* v___y_6538_, lean_object* v___y_6539_, lean_object* v___y_6540_, lean_object* v___y_6541_, lean_object* v___y_6542_, lean_object* v___y_6543_){
_start:
{
lean_object* v___x_6545_; lean_object* v___x_6546_; lean_object* v___x_6547_; 
v___x_6545_ = lean_array_get_size(v_prefixArgs_6533_);
v___x_6546_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed), 11, 2);
lean_closure_set(v___x_6546_, 0, v_declName_6534_);
lean_closure_set(v___x_6546_, 1, v___x_6545_);
v___x_6547_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v_x_6535_, v_F_6536_, v_val_6537_, v___x_6546_, v___y_6538_, v___y_6539_, v___y_6540_, v___y_6541_, v___y_6542_, v___y_6543_);
return v___x_6547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0___boxed(lean_object* v_prefixArgs_6548_, lean_object* v_declName_6549_, lean_object* v_x_6550_, lean_object* v_F_6551_, lean_object* v_val_6552_, lean_object* v___y_6553_, lean_object* v___y_6554_, lean_object* v___y_6555_, lean_object* v___y_6556_, lean_object* v___y_6557_, lean_object* v___y_6558_, lean_object* v___y_6559_){
_start:
{
lean_object* v_res_6560_; 
v_res_6560_ = l_Lean_Elab_WF_mkFix___lam__0(v_prefixArgs_6548_, v_declName_6549_, v_x_6550_, v_F_6551_, v_val_6552_, v___y_6553_, v___y_6554_, v___y_6555_, v___y_6556_, v___y_6557_, v___y_6558_);
lean_dec(v___y_6558_);
lean_dec_ref(v___y_6557_);
lean_dec(v___y_6556_);
lean_dec_ref(v___y_6555_);
lean_dec(v___y_6554_);
lean_dec_ref(v___y_6553_);
lean_dec_ref(v_prefixArgs_6548_);
return v_res_6560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1(lean_object* v___x_6577_, lean_object* v___x_6578_, lean_object* v_wfRel_6579_, lean_object* v_x_6580_, lean_object* v_type_6581_, lean_object* v___y_6582_, lean_object* v___y_6583_, lean_object* v___y_6584_, lean_object* v___y_6585_, lean_object* v___y_6586_, lean_object* v___y_6587_){
_start:
{
lean_object* v___x_6589_; lean_object* v___x_6590_; lean_object* v___x_6591_; lean_object* v___x_6592_; 
v___x_6589_ = lean_unsigned_to_nat(0u);
v___x_6590_ = lean_array_get_borrowed(v___x_6577_, v_x_6580_, v___x_6589_);
v___x_6591_ = l_Lean_Expr_fvarId_x21(v___x_6590_);
v___x_6592_ = l_Lean_FVarId_getUserName___redArg(v___x_6591_, v___y_6584_, v___y_6586_, v___y_6587_);
if (lean_obj_tag(v___x_6592_) == 0)
{
lean_object* v_a_6593_; lean_object* v___x_6594_; 
v_a_6593_ = lean_ctor_get(v___x_6592_, 0);
lean_inc(v_a_6593_);
lean_dec_ref_known(v___x_6592_, 1);
lean_inc(v___y_6587_);
lean_inc_ref(v___y_6586_);
lean_inc(v___y_6585_);
lean_inc_ref(v___y_6584_);
lean_inc(v___x_6590_);
v___x_6594_ = lean_infer_type(v___x_6590_, v___y_6584_, v___y_6585_, v___y_6586_, v___y_6587_);
if (lean_obj_tag(v___x_6594_) == 0)
{
lean_object* v_a_6595_; lean_object* v___x_6596_; 
v_a_6595_ = lean_ctor_get(v___x_6594_, 0);
lean_inc_n(v_a_6595_, 2);
lean_dec_ref_known(v___x_6594_, 1);
v___x_6596_ = l_Lean_Meta_getLevel(v_a_6595_, v___y_6584_, v___y_6585_, v___y_6586_, v___y_6587_);
if (lean_obj_tag(v___x_6596_) == 0)
{
lean_object* v_a_6597_; lean_object* v___x_6598_; 
v_a_6597_ = lean_ctor_get(v___x_6596_, 0);
lean_inc(v_a_6597_);
lean_dec_ref_known(v___x_6596_, 1);
lean_inc_ref(v_type_6581_);
v___x_6598_ = l_Lean_Meta_getLevel(v_type_6581_, v___y_6584_, v___y_6585_, v___y_6586_, v___y_6587_);
if (lean_obj_tag(v___x_6598_) == 0)
{
lean_object* v_a_6599_; lean_object* v___x_6600_; lean_object* v___x_6601_; uint8_t v___x_6602_; uint8_t v___x_6603_; uint8_t v___x_6604_; lean_object* v___x_6605_; 
v_a_6599_ = lean_ctor_get(v___x_6598_, 0);
lean_inc(v_a_6599_);
lean_dec_ref_known(v___x_6598_, 1);
v___x_6600_ = lean_mk_empty_array_with_capacity(v___x_6578_);
lean_inc(v___x_6590_);
lean_inc_ref(v___x_6600_);
v___x_6601_ = lean_array_push(v___x_6600_, v___x_6590_);
v___x_6602_ = 0;
v___x_6603_ = 1;
v___x_6604_ = 1;
v___x_6605_ = l_Lean_Meta_mkLambdaFVars(v___x_6601_, v_type_6581_, v___x_6602_, v___x_6603_, v___x_6602_, v___x_6603_, v___x_6604_, v___y_6584_, v___y_6585_, v___y_6586_, v___y_6587_);
lean_dec_ref(v___x_6601_);
if (lean_obj_tag(v___x_6605_) == 0)
{
lean_object* v_a_6606_; lean_object* v___x_6607_; 
v_a_6606_ = lean_ctor_get(v___x_6605_, 0);
lean_inc(v_a_6606_);
lean_dec_ref_known(v___x_6605_, 1);
lean_inc_ref(v_wfRel_6579_);
v___x_6607_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_6579_, v___y_6584_, v___y_6585_, v___y_6586_, v___y_6587_);
if (lean_obj_tag(v___x_6607_) == 0)
{
lean_object* v_a_6608_; lean_object* v___x_6610_; uint8_t v_isShared_6611_; uint8_t v_isSharedCheck_6652_; 
v_a_6608_ = lean_ctor_get(v___x_6607_, 0);
v_isSharedCheck_6652_ = !lean_is_exclusive(v___x_6607_);
if (v_isSharedCheck_6652_ == 0)
{
v___x_6610_ = v___x_6607_;
v_isShared_6611_ = v_isSharedCheck_6652_;
goto v_resetjp_6609_;
}
else
{
lean_inc(v_a_6608_);
lean_dec(v___x_6607_);
v___x_6610_ = lean_box(0);
v_isShared_6611_ = v_isSharedCheck_6652_;
goto v_resetjp_6609_;
}
v_resetjp_6609_:
{
if (lean_obj_tag(v_a_6608_) == 1)
{
lean_object* v_val_6612_; lean_object* v___x_6613_; lean_object* v___x_6614_; lean_object* v___x_6615_; lean_object* v___x_6616_; lean_object* v___x_6617_; lean_object* v___x_6618_; lean_object* v___x_6619_; lean_object* v___x_6621_; 
lean_dec_ref(v___x_6600_);
lean_dec_ref(v_wfRel_6579_);
lean_dec(v___x_6578_);
v_val_6612_ = lean_ctor_get(v_a_6608_, 0);
lean_inc(v_val_6612_);
lean_dec_ref_known(v_a_6608_, 1);
v___x_6613_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__2));
v___x_6614_ = lean_box(0);
v___x_6615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6615_, 0, v_a_6599_);
lean_ctor_set(v___x_6615_, 1, v___x_6614_);
v___x_6616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6616_, 0, v_a_6597_);
lean_ctor_set(v___x_6616_, 1, v___x_6615_);
v___x_6617_ = l_Lean_mkConst(v___x_6613_, v___x_6616_);
v___x_6618_ = l_Lean_mkApp3(v___x_6617_, v_a_6595_, v_a_6606_, v_val_6612_);
v___x_6619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6619_, 0, v___x_6618_);
lean_ctor_set(v___x_6619_, 1, v_a_6593_);
if (v_isShared_6611_ == 0)
{
lean_ctor_set(v___x_6610_, 0, v___x_6619_);
v___x_6621_ = v___x_6610_;
goto v_reusejp_6620_;
}
else
{
lean_object* v_reuseFailAlloc_6622_; 
v_reuseFailAlloc_6622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6622_, 0, v___x_6619_);
v___x_6621_ = v_reuseFailAlloc_6622_;
goto v_reusejp_6620_;
}
v_reusejp_6620_:
{
return v___x_6621_;
}
}
else
{
lean_object* v___x_6623_; lean_object* v___x_6624_; lean_object* v___x_6625_; lean_object* v___x_6626_; lean_object* v___x_6627_; lean_object* v___x_6628_; 
lean_del_object(v___x_6610_);
lean_dec(v_a_6608_);
v___x_6623_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__4));
lean_inc_ref(v_wfRel_6579_);
v___x_6624_ = l_Lean_mkProj(v___x_6623_, v___x_6589_, v_wfRel_6579_);
v___x_6625_ = l_Lean_mkProj(v___x_6623_, v___x_6578_, v_wfRel_6579_);
v___x_6626_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__6));
v___x_6627_ = lean_array_push(v___x_6600_, v___x_6625_);
v___x_6628_ = l_Lean_Meta_mkAppM(v___x_6626_, v___x_6627_, v___y_6584_, v___y_6585_, v___y_6586_, v___y_6587_);
if (lean_obj_tag(v___x_6628_) == 0)
{
lean_object* v_a_6629_; lean_object* v___x_6631_; uint8_t v_isShared_6632_; uint8_t v_isSharedCheck_6643_; 
v_a_6629_ = lean_ctor_get(v___x_6628_, 0);
v_isSharedCheck_6643_ = !lean_is_exclusive(v___x_6628_);
if (v_isSharedCheck_6643_ == 0)
{
v___x_6631_ = v___x_6628_;
v_isShared_6632_ = v_isSharedCheck_6643_;
goto v_resetjp_6630_;
}
else
{
lean_inc(v_a_6629_);
lean_dec(v___x_6628_);
v___x_6631_ = lean_box(0);
v_isShared_6632_ = v_isSharedCheck_6643_;
goto v_resetjp_6630_;
}
v_resetjp_6630_:
{
lean_object* v___x_6633_; lean_object* v___x_6634_; lean_object* v___x_6635_; lean_object* v___x_6636_; lean_object* v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6639_; lean_object* v___x_6641_; 
v___x_6633_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__7));
v___x_6634_ = lean_box(0);
v___x_6635_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6635_, 0, v_a_6599_);
lean_ctor_set(v___x_6635_, 1, v___x_6634_);
v___x_6636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6636_, 0, v_a_6597_);
lean_ctor_set(v___x_6636_, 1, v___x_6635_);
v___x_6637_ = l_Lean_mkConst(v___x_6633_, v___x_6636_);
v___x_6638_ = l_Lean_mkApp4(v___x_6637_, v_a_6595_, v_a_6606_, v___x_6624_, v_a_6629_);
v___x_6639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6639_, 0, v___x_6638_);
lean_ctor_set(v___x_6639_, 1, v_a_6593_);
if (v_isShared_6632_ == 0)
{
lean_ctor_set(v___x_6631_, 0, v___x_6639_);
v___x_6641_ = v___x_6631_;
goto v_reusejp_6640_;
}
else
{
lean_object* v_reuseFailAlloc_6642_; 
v_reuseFailAlloc_6642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6642_, 0, v___x_6639_);
v___x_6641_ = v_reuseFailAlloc_6642_;
goto v_reusejp_6640_;
}
v_reusejp_6640_:
{
return v___x_6641_;
}
}
}
else
{
lean_object* v_a_6644_; lean_object* v___x_6646_; uint8_t v_isShared_6647_; uint8_t v_isSharedCheck_6651_; 
lean_dec_ref(v___x_6624_);
lean_dec(v_a_6606_);
lean_dec(v_a_6599_);
lean_dec(v_a_6597_);
lean_dec(v_a_6595_);
lean_dec(v_a_6593_);
v_a_6644_ = lean_ctor_get(v___x_6628_, 0);
v_isSharedCheck_6651_ = !lean_is_exclusive(v___x_6628_);
if (v_isSharedCheck_6651_ == 0)
{
v___x_6646_ = v___x_6628_;
v_isShared_6647_ = v_isSharedCheck_6651_;
goto v_resetjp_6645_;
}
else
{
lean_inc(v_a_6644_);
lean_dec(v___x_6628_);
v___x_6646_ = lean_box(0);
v_isShared_6647_ = v_isSharedCheck_6651_;
goto v_resetjp_6645_;
}
v_resetjp_6645_:
{
lean_object* v___x_6649_; 
if (v_isShared_6647_ == 0)
{
v___x_6649_ = v___x_6646_;
goto v_reusejp_6648_;
}
else
{
lean_object* v_reuseFailAlloc_6650_; 
v_reuseFailAlloc_6650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6650_, 0, v_a_6644_);
v___x_6649_ = v_reuseFailAlloc_6650_;
goto v_reusejp_6648_;
}
v_reusejp_6648_:
{
return v___x_6649_;
}
}
}
}
}
}
else
{
lean_object* v_a_6653_; lean_object* v___x_6655_; uint8_t v_isShared_6656_; uint8_t v_isSharedCheck_6660_; 
lean_dec(v_a_6606_);
lean_dec_ref(v___x_6600_);
lean_dec(v_a_6599_);
lean_dec(v_a_6597_);
lean_dec(v_a_6595_);
lean_dec(v_a_6593_);
lean_dec_ref(v_wfRel_6579_);
lean_dec(v___x_6578_);
v_a_6653_ = lean_ctor_get(v___x_6607_, 0);
v_isSharedCheck_6660_ = !lean_is_exclusive(v___x_6607_);
if (v_isSharedCheck_6660_ == 0)
{
v___x_6655_ = v___x_6607_;
v_isShared_6656_ = v_isSharedCheck_6660_;
goto v_resetjp_6654_;
}
else
{
lean_inc(v_a_6653_);
lean_dec(v___x_6607_);
v___x_6655_ = lean_box(0);
v_isShared_6656_ = v_isSharedCheck_6660_;
goto v_resetjp_6654_;
}
v_resetjp_6654_:
{
lean_object* v___x_6658_; 
if (v_isShared_6656_ == 0)
{
v___x_6658_ = v___x_6655_;
goto v_reusejp_6657_;
}
else
{
lean_object* v_reuseFailAlloc_6659_; 
v_reuseFailAlloc_6659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6659_, 0, v_a_6653_);
v___x_6658_ = v_reuseFailAlloc_6659_;
goto v_reusejp_6657_;
}
v_reusejp_6657_:
{
return v___x_6658_;
}
}
}
}
else
{
lean_object* v_a_6661_; lean_object* v___x_6663_; uint8_t v_isShared_6664_; uint8_t v_isSharedCheck_6668_; 
lean_dec_ref(v___x_6600_);
lean_dec(v_a_6599_);
lean_dec(v_a_6597_);
lean_dec(v_a_6595_);
lean_dec(v_a_6593_);
lean_dec_ref(v_wfRel_6579_);
lean_dec(v___x_6578_);
v_a_6661_ = lean_ctor_get(v___x_6605_, 0);
v_isSharedCheck_6668_ = !lean_is_exclusive(v___x_6605_);
if (v_isSharedCheck_6668_ == 0)
{
v___x_6663_ = v___x_6605_;
v_isShared_6664_ = v_isSharedCheck_6668_;
goto v_resetjp_6662_;
}
else
{
lean_inc(v_a_6661_);
lean_dec(v___x_6605_);
v___x_6663_ = lean_box(0);
v_isShared_6664_ = v_isSharedCheck_6668_;
goto v_resetjp_6662_;
}
v_resetjp_6662_:
{
lean_object* v___x_6666_; 
if (v_isShared_6664_ == 0)
{
v___x_6666_ = v___x_6663_;
goto v_reusejp_6665_;
}
else
{
lean_object* v_reuseFailAlloc_6667_; 
v_reuseFailAlloc_6667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6667_, 0, v_a_6661_);
v___x_6666_ = v_reuseFailAlloc_6667_;
goto v_reusejp_6665_;
}
v_reusejp_6665_:
{
return v___x_6666_;
}
}
}
}
else
{
lean_object* v_a_6669_; lean_object* v___x_6671_; uint8_t v_isShared_6672_; uint8_t v_isSharedCheck_6676_; 
lean_dec(v_a_6597_);
lean_dec(v_a_6595_);
lean_dec(v_a_6593_);
lean_dec_ref(v_type_6581_);
lean_dec_ref(v_wfRel_6579_);
lean_dec(v___x_6578_);
v_a_6669_ = lean_ctor_get(v___x_6598_, 0);
v_isSharedCheck_6676_ = !lean_is_exclusive(v___x_6598_);
if (v_isSharedCheck_6676_ == 0)
{
v___x_6671_ = v___x_6598_;
v_isShared_6672_ = v_isSharedCheck_6676_;
goto v_resetjp_6670_;
}
else
{
lean_inc(v_a_6669_);
lean_dec(v___x_6598_);
v___x_6671_ = lean_box(0);
v_isShared_6672_ = v_isSharedCheck_6676_;
goto v_resetjp_6670_;
}
v_resetjp_6670_:
{
lean_object* v___x_6674_; 
if (v_isShared_6672_ == 0)
{
v___x_6674_ = v___x_6671_;
goto v_reusejp_6673_;
}
else
{
lean_object* v_reuseFailAlloc_6675_; 
v_reuseFailAlloc_6675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6675_, 0, v_a_6669_);
v___x_6674_ = v_reuseFailAlloc_6675_;
goto v_reusejp_6673_;
}
v_reusejp_6673_:
{
return v___x_6674_;
}
}
}
}
else
{
lean_object* v_a_6677_; lean_object* v___x_6679_; uint8_t v_isShared_6680_; uint8_t v_isSharedCheck_6684_; 
lean_dec(v_a_6595_);
lean_dec(v_a_6593_);
lean_dec_ref(v_type_6581_);
lean_dec_ref(v_wfRel_6579_);
lean_dec(v___x_6578_);
v_a_6677_ = lean_ctor_get(v___x_6596_, 0);
v_isSharedCheck_6684_ = !lean_is_exclusive(v___x_6596_);
if (v_isSharedCheck_6684_ == 0)
{
v___x_6679_ = v___x_6596_;
v_isShared_6680_ = v_isSharedCheck_6684_;
goto v_resetjp_6678_;
}
else
{
lean_inc(v_a_6677_);
lean_dec(v___x_6596_);
v___x_6679_ = lean_box(0);
v_isShared_6680_ = v_isSharedCheck_6684_;
goto v_resetjp_6678_;
}
v_resetjp_6678_:
{
lean_object* v___x_6682_; 
if (v_isShared_6680_ == 0)
{
v___x_6682_ = v___x_6679_;
goto v_reusejp_6681_;
}
else
{
lean_object* v_reuseFailAlloc_6683_; 
v_reuseFailAlloc_6683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6683_, 0, v_a_6677_);
v___x_6682_ = v_reuseFailAlloc_6683_;
goto v_reusejp_6681_;
}
v_reusejp_6681_:
{
return v___x_6682_;
}
}
}
}
else
{
lean_object* v_a_6685_; lean_object* v___x_6687_; uint8_t v_isShared_6688_; uint8_t v_isSharedCheck_6692_; 
lean_dec(v_a_6593_);
lean_dec_ref(v_type_6581_);
lean_dec_ref(v_wfRel_6579_);
lean_dec(v___x_6578_);
v_a_6685_ = lean_ctor_get(v___x_6594_, 0);
v_isSharedCheck_6692_ = !lean_is_exclusive(v___x_6594_);
if (v_isSharedCheck_6692_ == 0)
{
v___x_6687_ = v___x_6594_;
v_isShared_6688_ = v_isSharedCheck_6692_;
goto v_resetjp_6686_;
}
else
{
lean_inc(v_a_6685_);
lean_dec(v___x_6594_);
v___x_6687_ = lean_box(0);
v_isShared_6688_ = v_isSharedCheck_6692_;
goto v_resetjp_6686_;
}
v_resetjp_6686_:
{
lean_object* v___x_6690_; 
if (v_isShared_6688_ == 0)
{
v___x_6690_ = v___x_6687_;
goto v_reusejp_6689_;
}
else
{
lean_object* v_reuseFailAlloc_6691_; 
v_reuseFailAlloc_6691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6691_, 0, v_a_6685_);
v___x_6690_ = v_reuseFailAlloc_6691_;
goto v_reusejp_6689_;
}
v_reusejp_6689_:
{
return v___x_6690_;
}
}
}
}
else
{
lean_object* v_a_6693_; lean_object* v___x_6695_; uint8_t v_isShared_6696_; uint8_t v_isSharedCheck_6700_; 
lean_dec_ref(v_type_6581_);
lean_dec_ref(v_wfRel_6579_);
lean_dec(v___x_6578_);
v_a_6693_ = lean_ctor_get(v___x_6592_, 0);
v_isSharedCheck_6700_ = !lean_is_exclusive(v___x_6592_);
if (v_isSharedCheck_6700_ == 0)
{
v___x_6695_ = v___x_6592_;
v_isShared_6696_ = v_isSharedCheck_6700_;
goto v_resetjp_6694_;
}
else
{
lean_inc(v_a_6693_);
lean_dec(v___x_6592_);
v___x_6695_ = lean_box(0);
v_isShared_6696_ = v_isSharedCheck_6700_;
goto v_resetjp_6694_;
}
v_resetjp_6694_:
{
lean_object* v___x_6698_; 
if (v_isShared_6696_ == 0)
{
v___x_6698_ = v___x_6695_;
goto v_reusejp_6697_;
}
else
{
lean_object* v_reuseFailAlloc_6699_; 
v_reuseFailAlloc_6699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6699_, 0, v_a_6693_);
v___x_6698_ = v_reuseFailAlloc_6699_;
goto v_reusejp_6697_;
}
v_reusejp_6697_:
{
return v___x_6698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1___boxed(lean_object* v___x_6701_, lean_object* v___x_6702_, lean_object* v_wfRel_6703_, lean_object* v_x_6704_, lean_object* v_type_6705_, lean_object* v___y_6706_, lean_object* v___y_6707_, lean_object* v___y_6708_, lean_object* v___y_6709_, lean_object* v___y_6710_, lean_object* v___y_6711_, lean_object* v___y_6712_){
_start:
{
lean_object* v_res_6713_; 
v_res_6713_ = l_Lean_Elab_WF_mkFix___lam__1(v___x_6701_, v___x_6702_, v_wfRel_6703_, v_x_6704_, v_type_6705_, v___y_6706_, v___y_6707_, v___y_6708_, v___y_6709_, v___y_6710_, v___y_6711_);
lean_dec(v___y_6711_);
lean_dec_ref(v___y_6710_);
lean_dec(v___y_6709_);
lean_dec_ref(v___y_6708_);
lean_dec(v___y_6707_);
lean_dec_ref(v___y_6706_);
lean_dec_ref(v_x_6704_);
lean_dec_ref(v___x_6701_);
return v_res_6713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2(lean_object* v___x_6714_, lean_object* v___x_6715_, lean_object* v___x_6716_, lean_object* v___f_6717_, lean_object* v_funNames_6718_, lean_object* v_argsPacker_6719_, lean_object* v_decrTactics_6720_, uint8_t v___x_6721_, lean_object* v_fst_6722_, lean_object* v_prefixArgs_6723_, lean_object* v___y_6724_, lean_object* v___y_6725_, lean_object* v___y_6726_, lean_object* v___y_6727_, lean_object* v___y_6728_, lean_object* v___y_6729_){
_start:
{
lean_object* v___x_6731_; 
lean_inc_ref(v___x_6715_);
lean_inc_ref(v___x_6714_);
v___x_6731_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v___x_6714_, v___x_6715_, v___x_6716_, v___f_6717_, v___y_6724_, v___y_6725_, v___y_6726_, v___y_6727_, v___y_6728_, v___y_6729_);
if (lean_obj_tag(v___x_6731_) == 0)
{
lean_object* v_a_6732_; lean_object* v___x_6733_; 
v_a_6732_ = lean_ctor_get(v___x_6731_, 0);
lean_inc(v_a_6732_);
lean_dec_ref_known(v___x_6731_, 1);
v___x_6733_ = l_Lean_Elab_WF_solveDecreasingGoals(v_funNames_6718_, v_argsPacker_6719_, v_decrTactics_6720_, v_a_6732_, v___y_6726_, v___y_6727_, v___y_6728_, v___y_6729_);
if (lean_obj_tag(v___x_6733_) == 0)
{
lean_object* v_a_6734_; lean_object* v___x_6735_; lean_object* v___x_6736_; lean_object* v___x_6737_; lean_object* v___x_6738_; uint8_t v___x_6739_; uint8_t v___x_6740_; lean_object* v___x_6741_; 
v_a_6734_ = lean_ctor_get(v___x_6733_, 0);
lean_inc(v_a_6734_);
lean_dec_ref_known(v___x_6733_, 1);
v___x_6735_ = lean_unsigned_to_nat(2u);
v___x_6736_ = lean_mk_empty_array_with_capacity(v___x_6735_);
v___x_6737_ = lean_array_push(v___x_6736_, v___x_6714_);
v___x_6738_ = lean_array_push(v___x_6737_, v___x_6715_);
v___x_6739_ = 1;
v___x_6740_ = 1;
v___x_6741_ = l_Lean_Meta_mkLambdaFVars(v___x_6738_, v_a_6734_, v___x_6721_, v___x_6739_, v___x_6721_, v___x_6739_, v___x_6740_, v___y_6726_, v___y_6727_, v___y_6728_, v___y_6729_);
lean_dec_ref(v___x_6738_);
if (lean_obj_tag(v___x_6741_) == 0)
{
lean_object* v_a_6742_; lean_object* v___x_6743_; lean_object* v___x_6744_; 
v_a_6742_ = lean_ctor_get(v___x_6741_, 0);
lean_inc(v_a_6742_);
lean_dec_ref_known(v___x_6741_, 1);
v___x_6743_ = l_Lean_Expr_app___override(v_fst_6722_, v_a_6742_);
v___x_6744_ = l_Lean_Meta_mkLambdaFVars(v_prefixArgs_6723_, v___x_6743_, v___x_6721_, v___x_6739_, v___x_6721_, v___x_6739_, v___x_6740_, v___y_6726_, v___y_6727_, v___y_6728_, v___y_6729_);
return v___x_6744_;
}
else
{
lean_dec_ref(v_fst_6722_);
return v___x_6741_;
}
}
else
{
lean_dec_ref(v_fst_6722_);
lean_dec_ref(v___x_6715_);
lean_dec_ref(v___x_6714_);
return v___x_6733_;
}
}
else
{
lean_dec_ref(v_fst_6722_);
lean_dec_ref(v_decrTactics_6720_);
lean_dec_ref(v_argsPacker_6719_);
lean_dec_ref(v_funNames_6718_);
lean_dec_ref(v___x_6715_);
lean_dec_ref(v___x_6714_);
return v___x_6731_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2___boxed(lean_object** _args){
lean_object* v___x_6745_ = _args[0];
lean_object* v___x_6746_ = _args[1];
lean_object* v___x_6747_ = _args[2];
lean_object* v___f_6748_ = _args[3];
lean_object* v_funNames_6749_ = _args[4];
lean_object* v_argsPacker_6750_ = _args[5];
lean_object* v_decrTactics_6751_ = _args[6];
lean_object* v___x_6752_ = _args[7];
lean_object* v_fst_6753_ = _args[8];
lean_object* v_prefixArgs_6754_ = _args[9];
lean_object* v___y_6755_ = _args[10];
lean_object* v___y_6756_ = _args[11];
lean_object* v___y_6757_ = _args[12];
lean_object* v___y_6758_ = _args[13];
lean_object* v___y_6759_ = _args[14];
lean_object* v___y_6760_ = _args[15];
lean_object* v___y_6761_ = _args[16];
_start:
{
uint8_t v___x_6324__boxed_6762_; lean_object* v_res_6763_; 
v___x_6324__boxed_6762_ = lean_unbox(v___x_6752_);
v_res_6763_ = l_Lean_Elab_WF_mkFix___lam__2(v___x_6745_, v___x_6746_, v___x_6747_, v___f_6748_, v_funNames_6749_, v_argsPacker_6750_, v_decrTactics_6751_, v___x_6324__boxed_6762_, v_fst_6753_, v_prefixArgs_6754_, v___y_6755_, v___y_6756_, v___y_6757_, v___y_6758_, v___y_6759_, v___y_6760_);
lean_dec(v___y_6760_);
lean_dec_ref(v___y_6759_);
lean_dec(v___y_6758_);
lean_dec_ref(v___y_6757_);
lean_dec(v___y_6756_);
lean_dec_ref(v___y_6755_);
lean_dec_ref(v_prefixArgs_6754_);
return v_res_6763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3(lean_object* v___x_6764_, lean_object* v_snd_6765_, lean_object* v___x_6766_, lean_object* v_prefixArgs_6767_, lean_object* v_value_6768_, lean_object* v___f_6769_, lean_object* v_funNames_6770_, lean_object* v_argsPacker_6771_, lean_object* v_decrTactics_6772_, uint8_t v___x_6773_, lean_object* v_fst_6774_, lean_object* v_xs_6775_, lean_object* v_x_6776_, lean_object* v___y_6777_, lean_object* v___y_6778_, lean_object* v___y_6779_, lean_object* v___y_6780_, lean_object* v___y_6781_, lean_object* v___y_6782_){
_start:
{
lean_object* v_lctx_6784_; lean_object* v___x_6785_; lean_object* v___x_6786_; lean_object* v___x_6787_; lean_object* v___x_6788_; lean_object* v___x_6789_; lean_object* v___x_6790_; lean_object* v___x_6791_; lean_object* v___x_6792_; lean_object* v___f_6793_; lean_object* v___x_6794_; 
v_lctx_6784_ = lean_ctor_get(v___y_6779_, 2);
v___x_6785_ = lean_unsigned_to_nat(0u);
v___x_6786_ = lean_array_get_borrowed(v___x_6764_, v_xs_6775_, v___x_6785_);
v___x_6787_ = l_Lean_Expr_fvarId_x21(v___x_6786_);
lean_inc_ref(v_lctx_6784_);
v___x_6788_ = l_Lean_LocalContext_setUserName(v_lctx_6784_, v___x_6787_, v_snd_6765_);
v___x_6789_ = lean_array_get_borrowed(v___x_6764_, v_xs_6775_, v___x_6766_);
lean_inc_n(v___x_6786_, 2);
lean_inc_ref(v_prefixArgs_6767_);
v___x_6790_ = lean_array_push(v_prefixArgs_6767_, v___x_6786_);
v___x_6791_ = l_Lean_Expr_beta(v_value_6768_, v___x_6790_);
v___x_6792_ = lean_box(v___x_6773_);
lean_inc(v___x_6789_);
v___f_6793_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__2___boxed), 17, 10);
lean_closure_set(v___f_6793_, 0, v___x_6786_);
lean_closure_set(v___f_6793_, 1, v___x_6789_);
lean_closure_set(v___f_6793_, 2, v___x_6791_);
lean_closure_set(v___f_6793_, 3, v___f_6769_);
lean_closure_set(v___f_6793_, 4, v_funNames_6770_);
lean_closure_set(v___f_6793_, 5, v_argsPacker_6771_);
lean_closure_set(v___f_6793_, 6, v_decrTactics_6772_);
lean_closure_set(v___f_6793_, 7, v___x_6792_);
lean_closure_set(v___f_6793_, 8, v_fst_6774_);
lean_closure_set(v___f_6793_, 9, v_prefixArgs_6767_);
v___x_6794_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v___x_6788_, v___f_6793_, v___y_6777_, v___y_6778_, v___y_6779_, v___y_6780_, v___y_6781_, v___y_6782_);
return v___x_6794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3___boxed(lean_object** _args){
lean_object* v___x_6795_ = _args[0];
lean_object* v_snd_6796_ = _args[1];
lean_object* v___x_6797_ = _args[2];
lean_object* v_prefixArgs_6798_ = _args[3];
lean_object* v_value_6799_ = _args[4];
lean_object* v___f_6800_ = _args[5];
lean_object* v_funNames_6801_ = _args[6];
lean_object* v_argsPacker_6802_ = _args[7];
lean_object* v_decrTactics_6803_ = _args[8];
lean_object* v___x_6804_ = _args[9];
lean_object* v_fst_6805_ = _args[10];
lean_object* v_xs_6806_ = _args[11];
lean_object* v_x_6807_ = _args[12];
lean_object* v___y_6808_ = _args[13];
lean_object* v___y_6809_ = _args[14];
lean_object* v___y_6810_ = _args[15];
lean_object* v___y_6811_ = _args[16];
lean_object* v___y_6812_ = _args[17];
lean_object* v___y_6813_ = _args[18];
lean_object* v___y_6814_ = _args[19];
_start:
{
uint8_t v___x_6394__boxed_6815_; lean_object* v_res_6816_; 
v___x_6394__boxed_6815_ = lean_unbox(v___x_6804_);
v_res_6816_ = l_Lean_Elab_WF_mkFix___lam__3(v___x_6795_, v_snd_6796_, v___x_6797_, v_prefixArgs_6798_, v_value_6799_, v___f_6800_, v_funNames_6801_, v_argsPacker_6802_, v_decrTactics_6803_, v___x_6394__boxed_6815_, v_fst_6805_, v_xs_6806_, v_x_6807_, v___y_6808_, v___y_6809_, v___y_6810_, v___y_6811_, v___y_6812_, v___y_6813_);
lean_dec(v___y_6813_);
lean_dec_ref(v___y_6812_);
lean_dec(v___y_6811_);
lean_dec_ref(v___y_6810_);
lean_dec(v___y_6809_);
lean_dec_ref(v___y_6808_);
lean_dec_ref(v_x_6807_);
lean_dec_ref(v_xs_6806_);
lean_dec(v___x_6797_);
lean_dec_ref(v___x_6795_);
return v_res_6816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix(lean_object* v_preDef_6821_, lean_object* v_prefixArgs_6822_, lean_object* v_argsPacker_6823_, lean_object* v_wfRel_6824_, lean_object* v_funNames_6825_, lean_object* v_decrTactics_6826_, lean_object* v___y_6827_, lean_object* v___y_6828_, lean_object* v___y_6829_, lean_object* v___y_6830_, lean_object* v___y_6831_, lean_object* v___y_6832_){
_start:
{
lean_object* v_declName_6834_; lean_object* v_type_6835_; lean_object* v_value_6836_; lean_object* v___f_6837_; lean_object* v___x_6838_; lean_object* v___x_6839_; 
v_declName_6834_ = lean_ctor_get(v_preDef_6821_, 3);
lean_inc(v_declName_6834_);
v_type_6835_ = lean_ctor_get(v_preDef_6821_, 6);
lean_inc_ref(v_type_6835_);
v_value_6836_ = lean_ctor_get(v_preDef_6821_, 7);
lean_inc_ref(v_value_6836_);
lean_dec_ref(v_preDef_6821_);
lean_inc_ref(v_prefixArgs_6822_);
v___f_6837_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__0___boxed), 12, 2);
lean_closure_set(v___f_6837_, 0, v_prefixArgs_6822_);
lean_closure_set(v___f_6837_, 1, v_declName_6834_);
v___x_6838_ = l_Lean_instInhabitedExpr;
v___x_6839_ = l_Lean_Meta_instantiateForall(v_type_6835_, v_prefixArgs_6822_, v___y_6829_, v___y_6830_, v___y_6831_, v___y_6832_);
if (lean_obj_tag(v___x_6839_) == 0)
{
lean_object* v_a_6840_; lean_object* v___x_6841_; lean_object* v___f_6842_; lean_object* v___x_6843_; uint8_t v___x_6844_; lean_object* v___x_6845_; 
v_a_6840_ = lean_ctor_get(v___x_6839_, 0);
lean_inc(v_a_6840_);
lean_dec_ref_known(v___x_6839_, 1);
v___x_6841_ = lean_unsigned_to_nat(1u);
v___f_6842_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__1___boxed), 12, 3);
lean_closure_set(v___f_6842_, 0, v___x_6838_);
lean_closure_set(v___f_6842_, 1, v___x_6841_);
lean_closure_set(v___f_6842_, 2, v_wfRel_6824_);
v___x_6843_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___closed__0));
v___x_6844_ = 0;
v___x_6845_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_a_6840_, v___x_6843_, v___f_6842_, v___x_6844_, v___x_6844_, v___y_6827_, v___y_6828_, v___y_6829_, v___y_6830_, v___y_6831_, v___y_6832_);
if (lean_obj_tag(v___x_6845_) == 0)
{
lean_object* v_a_6846_; lean_object* v_fst_6847_; lean_object* v_snd_6848_; lean_object* v___x_6849_; lean_object* v___f_6850_; lean_object* v___x_6851_; 
v_a_6846_ = lean_ctor_get(v___x_6845_, 0);
lean_inc(v_a_6846_);
lean_dec_ref_known(v___x_6845_, 1);
v_fst_6847_ = lean_ctor_get(v_a_6846_, 0);
lean_inc_n(v_fst_6847_, 2);
v_snd_6848_ = lean_ctor_get(v_a_6846_, 1);
lean_inc(v_snd_6848_);
lean_dec(v_a_6846_);
v___x_6849_ = lean_box(v___x_6844_);
v___f_6850_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__3___boxed), 20, 11);
lean_closure_set(v___f_6850_, 0, v___x_6838_);
lean_closure_set(v___f_6850_, 1, v_snd_6848_);
lean_closure_set(v___f_6850_, 2, v___x_6841_);
lean_closure_set(v___f_6850_, 3, v_prefixArgs_6822_);
lean_closure_set(v___f_6850_, 4, v_value_6836_);
lean_closure_set(v___f_6850_, 5, v___f_6837_);
lean_closure_set(v___f_6850_, 6, v_funNames_6825_);
lean_closure_set(v___f_6850_, 7, v_argsPacker_6823_);
lean_closure_set(v___f_6850_, 8, v_decrTactics_6826_);
lean_closure_set(v___f_6850_, 9, v___x_6849_);
lean_closure_set(v___f_6850_, 10, v_fst_6847_);
lean_inc(v___y_6832_);
lean_inc_ref(v___y_6831_);
lean_inc(v___y_6830_);
lean_inc_ref(v___y_6829_);
v___x_6851_ = lean_infer_type(v_fst_6847_, v___y_6829_, v___y_6830_, v___y_6831_, v___y_6832_);
if (lean_obj_tag(v___x_6851_) == 0)
{
lean_object* v_a_6852_; lean_object* v___x_6853_; 
v_a_6852_ = lean_ctor_get(v___x_6851_, 0);
lean_inc(v_a_6852_);
lean_dec_ref_known(v___x_6851_, 1);
lean_inc(v___y_6832_);
lean_inc_ref(v___y_6831_);
lean_inc(v___y_6830_);
lean_inc_ref(v___y_6829_);
v___x_6853_ = lean_whnf(v_a_6852_, v___y_6829_, v___y_6830_, v___y_6831_, v___y_6832_);
if (lean_obj_tag(v___x_6853_) == 0)
{
lean_object* v_a_6854_; lean_object* v___x_6855_; lean_object* v___x_6856_; lean_object* v___x_6857_; 
v_a_6854_ = lean_ctor_get(v___x_6853_, 0);
lean_inc(v_a_6854_);
lean_dec_ref_known(v___x_6853_, 1);
v___x_6855_ = l_Lean_Expr_bindingDomain_x21(v_a_6854_);
lean_dec(v_a_6854_);
v___x_6856_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___closed__1));
v___x_6857_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v___x_6855_, v___x_6856_, v___f_6850_, v___x_6844_, v___x_6844_, v___y_6827_, v___y_6828_, v___y_6829_, v___y_6830_, v___y_6831_, v___y_6832_);
return v___x_6857_;
}
else
{
lean_dec_ref(v___f_6850_);
return v___x_6853_;
}
}
else
{
lean_dec_ref(v___f_6850_);
return v___x_6851_;
}
}
else
{
lean_object* v_a_6858_; lean_object* v___x_6860_; uint8_t v_isShared_6861_; uint8_t v_isSharedCheck_6865_; 
lean_dec_ref(v___f_6837_);
lean_dec_ref(v_value_6836_);
lean_dec_ref(v_decrTactics_6826_);
lean_dec_ref(v_funNames_6825_);
lean_dec_ref(v_argsPacker_6823_);
lean_dec_ref(v_prefixArgs_6822_);
v_a_6858_ = lean_ctor_get(v___x_6845_, 0);
v_isSharedCheck_6865_ = !lean_is_exclusive(v___x_6845_);
if (v_isSharedCheck_6865_ == 0)
{
v___x_6860_ = v___x_6845_;
v_isShared_6861_ = v_isSharedCheck_6865_;
goto v_resetjp_6859_;
}
else
{
lean_inc(v_a_6858_);
lean_dec(v___x_6845_);
v___x_6860_ = lean_box(0);
v_isShared_6861_ = v_isSharedCheck_6865_;
goto v_resetjp_6859_;
}
v_resetjp_6859_:
{
lean_object* v___x_6863_; 
if (v_isShared_6861_ == 0)
{
v___x_6863_ = v___x_6860_;
goto v_reusejp_6862_;
}
else
{
lean_object* v_reuseFailAlloc_6864_; 
v_reuseFailAlloc_6864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6864_, 0, v_a_6858_);
v___x_6863_ = v_reuseFailAlloc_6864_;
goto v_reusejp_6862_;
}
v_reusejp_6862_:
{
return v___x_6863_;
}
}
}
}
else
{
lean_dec_ref(v___f_6837_);
lean_dec_ref(v_value_6836_);
lean_dec_ref(v_decrTactics_6826_);
lean_dec_ref(v_funNames_6825_);
lean_dec_ref(v_wfRel_6824_);
lean_dec_ref(v_argsPacker_6823_);
lean_dec_ref(v_prefixArgs_6822_);
return v___x_6839_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___boxed(lean_object* v_preDef_6866_, lean_object* v_prefixArgs_6867_, lean_object* v_argsPacker_6868_, lean_object* v_wfRel_6869_, lean_object* v_funNames_6870_, lean_object* v_decrTactics_6871_, lean_object* v___y_6872_, lean_object* v___y_6873_, lean_object* v___y_6874_, lean_object* v___y_6875_, lean_object* v___y_6876_, lean_object* v___y_6877_, lean_object* v___y_6878_){
_start:
{
lean_object* v_res_6879_; 
v_res_6879_ = l_Lean_Elab_WF_mkFix(v_preDef_6866_, v_prefixArgs_6867_, v_argsPacker_6868_, v_wfRel_6869_, v_funNames_6870_, v_decrTactics_6871_, v___y_6872_, v___y_6873_, v___y_6874_, v___y_6875_, v___y_6876_, v___y_6877_);
lean_dec(v___y_6877_);
lean_dec_ref(v___y_6876_);
lean_dec(v___y_6875_);
lean_dec_ref(v___y_6874_);
lean_dec(v___y_6873_);
lean_dec_ref(v___y_6872_);
return v_res_6879_;
}
}
lean_object* runtime_initialize_Lean_Data_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_HasConstCache(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_WF_debug_definition_wf_replaceRecApps = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_WF_debug_definition_wf_replaceRecApps);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Array(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* initialize_Lean_Util_HasConstCache(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
}
#ifdef __cplusplus
}
#endif
