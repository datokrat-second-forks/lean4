// Lean compiler output
// Module: Lean.Elab.Coinductive
// Imports: public import Lean.Elab.PreDefinition.PartialFixpoint public import Lean.Elab.Tactic.Rewrite public import Lean.Meta.Tactic.Simp public import Lean.Linter.UnusedVariables
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal_default;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getAttributeImpl(lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeApplicationTime_beq(uint8_t, uint8_t);
uint8_t l_Lean_Expr_isApp(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_replace_expr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_get_x21(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_mkEqMP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_applyAttributes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedModifiers_default;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Elab_partialFixpoint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "coinductive"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(224, 250, 83, 200, 24, 179, 82, 22)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Coinductive"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(66, 151, 120, 159, 3, 29, 155, 48)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(35, 130, 159, 181, 44, 62, 204, 36)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 111, 66, 57, 94, 45, 50, 171)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 175, 17, 102, 142, 128, 198, 201)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(9, 209, 191, 44, 117, 223, 160, 247)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(144, 237, 174, 240, 153, 126, 239, 5)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 27, 51, 192, 193, 175, 235, 144)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 221, 168, 89, 68, 150, 234, 156)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 103, 123, 222, 186, 196, 147, 100)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(188, 247, 171, 212, 36, 152, 75, 212)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)(((size_t)(793488904) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(116, 33, 50, 188, 4, 44, 82, 154)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__24_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(123, 218, 6, 79, 1, 64, 32, 132)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__24_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__24_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__25_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__25_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__25_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__26_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__24_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__25_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(91, 217, 196, 13, 214, 247, 225, 210)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__26_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__26_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__27_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__26_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(174, 151, 118, 109, 52, 19, 96, 242)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__27_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__27_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2____boxed(lean_object*);
static const lean_array_object l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__0 = (const lean_object*)&l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_instInhabitedCoinductiveElabData;
static const lean_string_object l_Lean_Elab_Command_addFunctorPostfix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_functor"};
static const lean_object* l_Lean_Elab_Command_addFunctorPostfix___closed__0 = (const lean_object*)&l_Lean_Elab_Command_addFunctorPostfix___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_addFunctorPostfix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_addFunctorPostfix___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 229, 169, 91, 229, 240, 88, 134)}};
static const lean_object* l_Lean_Elab_Command_addFunctorPostfix___closed__1 = (const lean_object*)&l_Lean_Elab_Command_addFunctorPostfix___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addFunctorPostfix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeFunctorPostfix(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Command_removeFunctorPostfixInCtor_spec__0(lean_object*);
static const lean_string_object l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Elab.Coinductive"};
static const lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__0 = (const lean_object*)&l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lean.Elab.Command.removeFunctorPostfixInCtor"};
static const lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__1 = (const lean_object*)&l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "UnexpectedName"};
static const lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__2 = (const lean_object*)&l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(2, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___closed__0 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "did not generate unfolding theorem"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "existential_equiv"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(3, 65, 32, 87, 61, 118, 240, 105)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "functor_unfold"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 202, 245, 227, 23, 206, 217, 112)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "res: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "The conclusion of the constructor "};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__2;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " is "};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "The elaborated constructor is of the type: "};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__0 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Generating constructor: "};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__1 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2;
static const lean_ctor_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Expected one argument"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "cases_eliminator"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(244, 14, 239, 189, 147, 54, 173, 250)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elab_as_elim"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(82, 49, 111, 107, 153, 28, 187, 88)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__7_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__4_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__7_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "expected to be quantifier"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5___boxed(lean_object**);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___closed__0 = (const lean_object*)&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "existential"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 178, 56, 87, 59, 132, 244, 77)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___lam__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Command_elabCoinductive_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabCoinductive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Elaborating: "};
static const lean_object* l_Lean_Elab_Command_elabCoinductive___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabCoinductive___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Command_elabCoinductive___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCoinductive___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_66_; uint8_t v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_67_ = 0;
v___x_68_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__27_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_69_ = l_Lean_registerTraceClass(v___x_66_, v___x_67_, v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2____boxed(lean_object* v_a_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_();
return v_res_71_;
}
}
static lean_object* _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1(void){
_start:
{
lean_object* v___x_74_; uint8_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_74_ = lean_box(0);
v___x_75_ = 0;
v___x_76_ = ((lean_object*)(l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__0));
v___x_77_ = l_Lean_Elab_instInhabitedModifiers_default;
v___x_78_ = lean_box(0);
v___x_79_ = lean_box(0);
v___x_80_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_78_);
lean_ctor_set(v___x_80_, 2, v___x_79_);
lean_ctor_set(v___x_80_, 3, v___x_77_);
lean_ctor_set(v___x_80_, 4, v___x_76_);
lean_ctor_set(v___x_80_, 5, v___x_74_);
lean_ctor_set_uint8(v___x_80_, sizeof(void*)*6, v___x_75_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1, &l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1_once, _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default___closed__1);
return v___x_81_;
}
}
static lean_object* _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData(void){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default;
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addFunctorPostfix(lean_object* v_x_86_){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = ((lean_object*)(l_Lean_Elab_Command_addFunctorPostfix___closed__1));
v___x_88_ = l_Lean_Name_append(v_x_86_, v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeFunctorPostfix(lean_object* v_x_89_){
_start:
{
uint8_t v___x_90_; 
v___x_90_ = l_Lean_Name_hasMacroScopes(v_x_89_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_Name_getPrefix(v_x_89_);
lean_dec(v_x_89_);
return v___x_91_;
}
else
{
lean_object* v_view_92_; lean_object* v_name_93_; lean_object* v_imported_94_; lean_object* v_ctx_95_; lean_object* v_scopes_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_105_; 
v_view_92_ = l_Lean_extractMacroScopes(v_x_89_);
v_name_93_ = lean_ctor_get(v_view_92_, 0);
v_imported_94_ = lean_ctor_get(v_view_92_, 1);
v_ctx_95_ = lean_ctor_get(v_view_92_, 2);
v_scopes_96_ = lean_ctor_get(v_view_92_, 3);
v_isSharedCheck_105_ = !lean_is_exclusive(v_view_92_);
if (v_isSharedCheck_105_ == 0)
{
v___x_98_ = v_view_92_;
v_isShared_99_ = v_isSharedCheck_105_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_scopes_96_);
lean_inc(v_ctx_95_);
lean_inc(v_imported_94_);
lean_inc(v_name_93_);
lean_dec(v_view_92_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_105_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_100_ = l_Lean_Name_getPrefix(v_name_93_);
lean_dec(v_name_93_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 0, v___x_100_);
v___x_102_ = v___x_98_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v_imported_94_);
lean_ctor_set(v_reuseFailAlloc_104_, 2, v_ctx_95_);
lean_ctor_set(v_reuseFailAlloc_104_, 3, v_scopes_96_);
v___x_102_ = v_reuseFailAlloc_104_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
lean_object* v___x_103_; 
v___x_103_ = l_Lean_MacroScopesView_review(v___x_102_);
return v___x_103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Command_removeFunctorPostfixInCtor_spec__0(lean_object* v_msg_106_){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_box(0);
v___x_108_ = lean_panic_fn_borrowed(v___x_107_, v_msg_106_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_112_ = ((lean_object*)(l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__2));
v___x_113_ = lean_unsigned_to_nat(13u);
v___x_114_ = lean_unsigned_to_nat(126u);
v___x_115_ = ((lean_object*)(l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__1));
v___x_116_ = ((lean_object*)(l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__0));
v___x_117_ = l_mkPanicMessageWithDecl(v___x_116_, v___x_115_, v___x_114_, v___x_113_, v___x_112_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeFunctorPostfixInCtor(lean_object* v_x_118_){
_start:
{
if (lean_obj_tag(v_x_118_) == 1)
{
lean_object* v_pre_119_; lean_object* v_str_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v_pre_119_ = lean_ctor_get(v_x_118_, 0);
lean_inc(v_pre_119_);
v_str_120_ = lean_ctor_get(v_x_118_, 1);
lean_inc_ref(v_str_120_);
lean_dec_ref_known(v_x_118_, 2);
v___x_121_ = l_Lean_Elab_Command_removeFunctorPostfix(v_pre_119_);
v___x_122_ = l_Lean_Name_str___override(v___x_121_, v_str_120_);
return v___x_122_;
}
else
{
lean_object* v___x_123_; lean_object* v___x_124_; 
lean_dec(v_x_118_);
v___x_123_ = lean_obj_once(&l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3, &l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3_once, _init_l_Lean_Elab_Command_removeFunctorPostfixInCtor___closed__3);
v___x_124_ = l_panic___at___00Lean_Elab_Command_removeFunctorPostfixInCtor_spec__0(v___x_123_);
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq(lean_object* v_goal_130_, lean_object* v_eq_131_, uint8_t v_symm_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v___x_138_; 
lean_inc(v_goal_130_);
v___x_138_ = l_Lean_MVarId_getType(v_goal_130_, v_a_133_, v_a_134_, v_a_135_, v_a_136_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v_a_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_a_139_ = lean_ctor_get(v___x_138_, 0);
lean_inc(v_a_139_);
lean_dec_ref_known(v___x_138_, 1);
v___x_140_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___closed__0));
lean_inc(v_goal_130_);
v___x_141_ = l_Lean_MVarId_rewrite(v_goal_130_, v_a_139_, v_eq_131_, v_symm_132_, v___x_140_, v_a_133_, v_a_134_, v_a_135_, v_a_136_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; lean_object* v_eNew_143_; lean_object* v_eqProof_144_; lean_object* v___x_145_; 
v_a_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc(v_a_142_);
lean_dec_ref_known(v___x_141_, 1);
v_eNew_143_ = lean_ctor_get(v_a_142_, 0);
lean_inc_ref(v_eNew_143_);
v_eqProof_144_ = lean_ctor_get(v_a_142_, 1);
lean_inc_ref(v_eqProof_144_);
lean_dec(v_a_142_);
v___x_145_ = l_Lean_MVarId_replaceTargetEq(v_goal_130_, v_eNew_143_, v_eqProof_144_, v_a_133_, v_a_134_, v_a_135_, v_a_136_);
return v___x_145_;
}
else
{
lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_153_; 
lean_dec(v_goal_130_);
v_a_146_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_153_ == 0)
{
v___x_148_ = v___x_141_;
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_dec(v___x_141_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_a_146_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
}
else
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
lean_dec_ref(v_eq_131_);
lean_dec(v_goal_130_);
v_a_154_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_161_ == 0)
{
v___x_156_ = v___x_138_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_138_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___boxed(lean_object* v_goal_162_, lean_object* v_eq_163_, lean_object* v_symm_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_){
_start:
{
uint8_t v_symm_boxed_170_; lean_object* v_res_171_; 
v_symm_boxed_170_ = lean_unbox(v_symm_164_);
v_res_171_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq(v_goal_162_, v_eq_163_, v_symm_boxed_170_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
lean_dec(v_a_168_);
lean_dec_ref(v_a_167_);
lean_dec(v_a_166_);
lean_dec_ref(v_a_165_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(lean_object* v_e_172_, lean_object* v___y_173_){
_start:
{
uint8_t v___x_175_; 
v___x_175_ = l_Lean_Expr_hasMVar(v_e_172_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; 
v___x_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_176_, 0, v_e_172_);
return v___x_176_;
}
else
{
lean_object* v___x_177_; lean_object* v_mctx_178_; lean_object* v___x_179_; lean_object* v_fst_180_; lean_object* v_snd_181_; lean_object* v___x_182_; lean_object* v_cache_183_; lean_object* v_zetaDeltaFVarIds_184_; lean_object* v_postponed_185_; lean_object* v_diag_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_195_; 
v___x_177_ = lean_st_ref_get(v___y_173_);
v_mctx_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc_ref(v_mctx_178_);
lean_dec(v___x_177_);
v___x_179_ = l_Lean_instantiateMVarsCore(v_mctx_178_, v_e_172_);
v_fst_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc(v_fst_180_);
v_snd_181_ = lean_ctor_get(v___x_179_, 1);
lean_inc(v_snd_181_);
lean_dec_ref(v___x_179_);
v___x_182_ = lean_st_ref_take(v___y_173_);
v_cache_183_ = lean_ctor_get(v___x_182_, 1);
v_zetaDeltaFVarIds_184_ = lean_ctor_get(v___x_182_, 2);
v_postponed_185_ = lean_ctor_get(v___x_182_, 3);
v_diag_186_ = lean_ctor_get(v___x_182_, 4);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_195_ == 0)
{
lean_object* v_unused_196_; 
v_unused_196_ = lean_ctor_get(v___x_182_, 0);
lean_dec(v_unused_196_);
v___x_188_ = v___x_182_;
v_isShared_189_ = v_isSharedCheck_195_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_diag_186_);
lean_inc(v_postponed_185_);
lean_inc(v_zetaDeltaFVarIds_184_);
lean_inc(v_cache_183_);
lean_dec(v___x_182_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_195_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 0, v_snd_181_);
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_snd_181_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v_cache_183_);
lean_ctor_set(v_reuseFailAlloc_194_, 2, v_zetaDeltaFVarIds_184_);
lean_ctor_set(v_reuseFailAlloc_194_, 3, v_postponed_185_);
lean_ctor_set(v_reuseFailAlloc_194_, 4, v_diag_186_);
v___x_191_ = v_reuseFailAlloc_194_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = lean_st_ref_put(v___y_173_, v___x_191_);
v___x_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_193_, 0, v_fst_180_);
return v___x_193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg___boxed(lean_object* v_e_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(v_e_197_, v___y_198_);
lean_dec(v___y_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5(lean_object* v_e_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(v_e_201_, v___y_203_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___boxed(lean_object* v_e_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5(v_e_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
lean_dec(v___y_210_);
lean_dec_ref(v___y_209_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0(lean_object* v_k_215_, lean_object* v_b_216_, lean_object* v_c_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v___x_223_; 
lean_inc(v___y_221_);
lean_inc_ref(v___y_220_);
lean_inc(v___y_219_);
lean_inc_ref(v___y_218_);
v___x_223_ = lean_apply_7(v_k_215_, v_b_216_, v_c_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, lean_box(0));
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0___boxed(lean_object* v_k_224_, lean_object* v_b_225_, lean_object* v_c_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0(v_k_224_, v_b_225_, v_c_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg(lean_object* v_type_233_, lean_object* v_k_234_, uint8_t v_cleanupAnnotations_235_, uint8_t v_whnfType_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
lean_object* v___f_242_; lean_object* v___x_243_; 
v___f_242_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_242_, 0, v_k_234_);
v___x_243_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_233_, v___f_242_, v_cleanupAnnotations_235_, v_whnfType_236_, v___y_237_, v___y_238_, v___y_239_, v___y_240_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_251_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_251_ == 0)
{
v___x_246_ = v___x_243_;
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_249_; 
if (v_isShared_247_ == 0)
{
v___x_249_ = v___x_246_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_a_244_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
else
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
v_a_252_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v___x_243_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_243_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_a_252_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___boxed(lean_object* v_type_260_, lean_object* v_k_261_, lean_object* v_cleanupAnnotations_262_, lean_object* v_whnfType_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_269_; uint8_t v_whnfType_boxed_270_; lean_object* v_res_271_; 
v_cleanupAnnotations_boxed_269_ = lean_unbox(v_cleanupAnnotations_262_);
v_whnfType_boxed_270_ = lean_unbox(v_whnfType_263_);
v_res_271_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg(v_type_260_, v_k_261_, v_cleanupAnnotations_boxed_269_, v_whnfType_boxed_270_, v___y_264_, v___y_265_, v___y_266_, v___y_267_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6(lean_object* v_00_u03b1_272_, lean_object* v_type_273_, lean_object* v_k_274_, uint8_t v_cleanupAnnotations_275_, uint8_t v_whnfType_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg(v_type_273_, v_k_274_, v_cleanupAnnotations_275_, v_whnfType_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___boxed(lean_object* v_00_u03b1_283_, lean_object* v_type_284_, lean_object* v_k_285_, lean_object* v_cleanupAnnotations_286_, lean_object* v_whnfType_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_293_; uint8_t v_whnfType_boxed_294_; lean_object* v_res_295_; 
v_cleanupAnnotations_boxed_293_ = lean_unbox(v_cleanupAnnotations_286_);
v_whnfType_boxed_294_ = lean_unbox(v_whnfType_287_);
v_res_295_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6(v_00_u03b1_283_, v_type_284_, v_k_285_, v_cleanupAnnotations_boxed_293_, v_whnfType_boxed_294_, v___y_288_, v___y_289_, v___y_290_, v___y_291_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
lean_dec(v___y_289_);
lean_dec_ref(v___y_288_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(lean_object* v_name_296_, lean_object* v_levelParams_297_, lean_object* v_type_298_, lean_object* v_value_299_, lean_object* v_hints_300_, lean_object* v___y_301_){
_start:
{
lean_object* v___x_303_; uint8_t v___y_305_; lean_object* v_env_313_; uint8_t v___x_314_; 
v___x_303_ = lean_st_ref_get(v___y_301_);
v_env_313_ = lean_ctor_get(v___x_303_, 0);
lean_inc_ref_n(v_env_313_, 2);
lean_dec(v___x_303_);
v___x_314_ = l_Lean_Environment_hasUnsafe(v_env_313_, v_type_298_);
if (v___x_314_ == 0)
{
uint8_t v___x_315_; 
v___x_315_ = l_Lean_Environment_hasUnsafe(v_env_313_, v_value_299_);
if (v___x_315_ == 0)
{
uint8_t v___x_316_; 
v___x_316_ = 1;
v___y_305_ = v___x_316_;
goto v___jp_304_;
}
else
{
goto v___jp_311_;
}
}
else
{
lean_dec_ref(v_env_313_);
goto v___jp_311_;
}
v___jp_304_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
lean_inc(v_name_296_);
v___x_306_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_306_, 0, v_name_296_);
lean_ctor_set(v___x_306_, 1, v_levelParams_297_);
lean_ctor_set(v___x_306_, 2, v_type_298_);
v___x_307_ = lean_box(0);
v___x_308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_308_, 0, v_name_296_);
lean_ctor_set(v___x_308_, 1, v___x_307_);
v___x_309_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_309_, 0, v___x_306_);
lean_ctor_set(v___x_309_, 1, v_value_299_);
lean_ctor_set(v___x_309_, 2, v_hints_300_);
lean_ctor_set(v___x_309_, 3, v___x_308_);
lean_ctor_set_uint8(v___x_309_, sizeof(void*)*4, v___y_305_);
v___x_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
return v___x_310_;
}
v___jp_311_:
{
uint8_t v___x_312_; 
v___x_312_ = 0;
v___y_305_ = v___x_312_;
goto v___jp_304_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg___boxed(lean_object* v_name_317_, lean_object* v_levelParams_318_, lean_object* v_type_319_, lean_object* v_value_320_, lean_object* v_hints_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(v_name_317_, v_levelParams_318_, v_type_319_, v_value_320_, v_hints_321_, v___y_322_);
lean_dec(v___y_322_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7(lean_object* v_name_325_, lean_object* v_levelParams_326_, lean_object* v_type_327_, lean_object* v_value_328_, lean_object* v_hints_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(v_name_325_, v_levelParams_326_, v_type_327_, v_value_328_, v_hints_329_, v___y_333_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___boxed(lean_object* v_name_336_, lean_object* v_levelParams_337_, lean_object* v_type_338_, lean_object* v_value_339_, lean_object* v_hints_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7(v_name_336_, v_levelParams_337_, v_type_338_, v_value_339_, v_hints_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(lean_object* v_a_347_, lean_object* v_a_348_){
_start:
{
if (lean_obj_tag(v_a_347_) == 0)
{
lean_object* v___x_349_; 
v___x_349_ = l_List_reverse___redArg(v_a_348_);
return v___x_349_;
}
else
{
lean_object* v_head_350_; lean_object* v_tail_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_360_; 
v_head_350_ = lean_ctor_get(v_a_347_, 0);
v_tail_351_ = lean_ctor_get(v_a_347_, 1);
v_isSharedCheck_360_ = !lean_is_exclusive(v_a_347_);
if (v_isSharedCheck_360_ == 0)
{
v___x_353_ = v_a_347_;
v_isShared_354_ = v_isSharedCheck_360_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_tail_351_);
lean_inc(v_head_350_);
lean_dec(v_a_347_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_360_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_355_ = l_Lean_mkLevelParam(v_head_350_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 1, v_a_348_);
lean_ctor_set(v___x_353_, 0, v___x_355_);
v___x_357_ = v___x_353_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v___x_355_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_a_348_);
v___x_357_ = v_reuseFailAlloc_359_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
v_a_347_ = v_tail_351_;
v_a_348_ = v___x_357_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13___redArg(lean_object* v_x_361_, lean_object* v_x_362_, lean_object* v_x_363_, lean_object* v_x_364_){
_start:
{
lean_object* v_ks_365_; lean_object* v_vs_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_390_; 
v_ks_365_ = lean_ctor_get(v_x_361_, 0);
v_vs_366_ = lean_ctor_get(v_x_361_, 1);
v_isSharedCheck_390_ = !lean_is_exclusive(v_x_361_);
if (v_isSharedCheck_390_ == 0)
{
v___x_368_ = v_x_361_;
v_isShared_369_ = v_isSharedCheck_390_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_vs_366_);
lean_inc(v_ks_365_);
lean_dec(v_x_361_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_390_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = lean_array_get_size(v_ks_365_);
v___x_371_ = lean_nat_dec_lt(v_x_362_, v___x_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
lean_dec(v_x_362_);
v___x_372_ = lean_array_push(v_ks_365_, v_x_363_);
v___x_373_ = lean_array_push(v_vs_366_, v_x_364_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v___x_373_);
lean_ctor_set(v___x_368_, 0, v___x_372_);
v___x_375_ = v___x_368_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_372_);
lean_ctor_set(v_reuseFailAlloc_376_, 1, v___x_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
else
{
lean_object* v_k_x27_377_; uint8_t v___x_378_; 
v_k_x27_377_ = lean_array_fget_borrowed(v_ks_365_, v_x_362_);
v___x_378_ = l_Lean_instBEqMVarId_beq(v_x_363_, v_k_x27_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_380_; 
if (v_isShared_369_ == 0)
{
v___x_380_ = v___x_368_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_ks_365_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_vs_366_);
v___x_380_ = v_reuseFailAlloc_384_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = lean_unsigned_to_nat(1u);
v___x_382_ = lean_nat_add(v_x_362_, v___x_381_);
lean_dec(v_x_362_);
v_x_361_ = v___x_380_;
v_x_362_ = v___x_382_;
goto _start;
}
}
else
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_385_ = lean_array_fset(v_ks_365_, v_x_362_, v_x_363_);
v___x_386_ = lean_array_fset(v_vs_366_, v_x_362_, v_x_364_);
lean_dec(v_x_362_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v___x_386_);
lean_ctor_set(v___x_368_, 0, v___x_385_);
v___x_388_ = v___x_368_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12___redArg(lean_object* v_n_391_, lean_object* v_k_392_, lean_object* v_v_393_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13___redArg(v_n_391_, v___x_394_, v_k_392_, v_v_393_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(lean_object* v_x_397_, size_t v_x_398_, size_t v_x_399_, lean_object* v_x_400_, lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_397_) == 0)
{
lean_object* v_es_402_; size_t v___x_403_; size_t v___x_404_; lean_object* v_j_405_; lean_object* v___x_406_; uint8_t v___x_407_; 
v_es_402_ = lean_ctor_get(v_x_397_, 0);
v___x_403_ = ((size_t)31ULL);
v___x_404_ = lean_usize_land(v_x_398_, v___x_403_);
v_j_405_ = lean_usize_to_nat(v___x_404_);
v___x_406_ = lean_array_get_size(v_es_402_);
v___x_407_ = lean_nat_dec_lt(v_j_405_, v___x_406_);
if (v___x_407_ == 0)
{
lean_dec(v_j_405_);
lean_dec(v_x_401_);
lean_dec(v_x_400_);
return v_x_397_;
}
else
{
lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_446_; 
lean_inc_ref(v_es_402_);
v_isSharedCheck_446_ = !lean_is_exclusive(v_x_397_);
if (v_isSharedCheck_446_ == 0)
{
lean_object* v_unused_447_; 
v_unused_447_ = lean_ctor_get(v_x_397_, 0);
lean_dec(v_unused_447_);
v___x_409_ = v_x_397_;
v_isShared_410_ = v_isSharedCheck_446_;
goto v_resetjp_408_;
}
else
{
lean_dec(v_x_397_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_446_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_v_411_; lean_object* v___x_412_; lean_object* v_xs_x27_413_; lean_object* v___y_415_; 
v_v_411_ = lean_array_fget(v_es_402_, v_j_405_);
v___x_412_ = lean_box(0);
v_xs_x27_413_ = lean_array_fset(v_es_402_, v_j_405_, v___x_412_);
switch(lean_obj_tag(v_v_411_))
{
case 0:
{
lean_object* v_key_420_; lean_object* v_val_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_431_; 
v_key_420_ = lean_ctor_get(v_v_411_, 0);
v_val_421_ = lean_ctor_get(v_v_411_, 1);
v_isSharedCheck_431_ = !lean_is_exclusive(v_v_411_);
if (v_isSharedCheck_431_ == 0)
{
v___x_423_ = v_v_411_;
v_isShared_424_ = v_isSharedCheck_431_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_val_421_);
lean_inc(v_key_420_);
lean_dec(v_v_411_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_431_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
uint8_t v___x_425_; 
v___x_425_ = l_Lean_instBEqMVarId_beq(v_x_400_, v_key_420_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; lean_object* v___x_427_; 
lean_del_object(v___x_423_);
v___x_426_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_420_, v_val_421_, v_x_400_, v_x_401_);
v___x_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
v___y_415_ = v___x_427_;
goto v___jp_414_;
}
else
{
lean_object* v___x_429_; 
lean_dec(v_val_421_);
lean_dec(v_key_420_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 1, v_x_401_);
lean_ctor_set(v___x_423_, 0, v_x_400_);
v___x_429_ = v___x_423_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_x_400_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_x_401_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
v___y_415_ = v___x_429_;
goto v___jp_414_;
}
}
}
}
case 1:
{
lean_object* v_node_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_444_; 
v_node_432_ = lean_ctor_get(v_v_411_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v_v_411_);
if (v_isSharedCheck_444_ == 0)
{
v___x_434_ = v_v_411_;
v_isShared_435_ = v_isSharedCheck_444_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_node_432_);
lean_dec(v_v_411_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_444_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
size_t v___x_436_; size_t v___x_437_; size_t v___x_438_; size_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_436_ = ((size_t)5ULL);
v___x_437_ = lean_usize_shift_right(v_x_398_, v___x_436_);
v___x_438_ = ((size_t)1ULL);
v___x_439_ = lean_usize_add(v_x_399_, v___x_438_);
v___x_440_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(v_node_432_, v___x_437_, v___x_439_, v_x_400_, v_x_401_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v___x_440_);
v___x_442_ = v___x_434_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_440_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
v___y_415_ = v___x_442_;
goto v___jp_414_;
}
}
}
default: 
{
lean_object* v___x_445_; 
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v_x_400_);
lean_ctor_set(v___x_445_, 1, v_x_401_);
v___y_415_ = v___x_445_;
goto v___jp_414_;
}
}
v___jp_414_:
{
lean_object* v___x_416_; lean_object* v___x_418_; 
v___x_416_ = lean_array_fset(v_xs_x27_413_, v_j_405_, v___y_415_);
lean_dec(v_j_405_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_416_);
v___x_418_ = v___x_409_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v___x_416_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
}
else
{
lean_object* v_ks_448_; lean_object* v_vs_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_467_; 
v_ks_448_ = lean_ctor_get(v_x_397_, 0);
v_vs_449_ = lean_ctor_get(v_x_397_, 1);
v_isSharedCheck_467_ = !lean_is_exclusive(v_x_397_);
if (v_isSharedCheck_467_ == 0)
{
v___x_451_ = v_x_397_;
v_isShared_452_ = v_isSharedCheck_467_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_vs_449_);
lean_inc(v_ks_448_);
lean_dec(v_x_397_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_467_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_ks_448_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_vs_449_);
v___x_454_ = v_reuseFailAlloc_466_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
lean_object* v_newNode_455_; size_t v___x_456_; uint8_t v___x_457_; 
v_newNode_455_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12___redArg(v___x_454_, v_x_400_, v_x_401_);
v___x_456_ = ((size_t)7ULL);
v___x_457_ = lean_usize_dec_le(v___x_456_, v_x_399_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_458_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_455_);
v___x_459_ = lean_unsigned_to_nat(4u);
v___x_460_ = lean_nat_dec_lt(v___x_458_, v___x_459_);
lean_dec(v___x_458_);
if (v___x_460_ == 0)
{
lean_object* v_ks_461_; lean_object* v_vs_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_ks_461_ = lean_ctor_get(v_newNode_455_, 0);
lean_inc_ref(v_ks_461_);
v_vs_462_ = lean_ctor_get(v_newNode_455_, 1);
lean_inc_ref(v_vs_462_);
lean_dec_ref(v_newNode_455_);
v___x_463_ = lean_unsigned_to_nat(0u);
v___x_464_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___closed__0);
v___x_465_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg(v_x_399_, v_ks_461_, v_vs_462_, v___x_463_, v___x_464_);
lean_dec_ref(v_vs_462_);
lean_dec_ref(v_ks_461_);
return v___x_465_;
}
else
{
return v_newNode_455_;
}
}
else
{
return v_newNode_455_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg(size_t v_depth_468_, lean_object* v_keys_469_, lean_object* v_vals_470_, lean_object* v_i_471_, lean_object* v_entries_472_){
_start:
{
lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_473_ = lean_array_get_size(v_keys_469_);
v___x_474_ = lean_nat_dec_lt(v_i_471_, v___x_473_);
if (v___x_474_ == 0)
{
lean_dec(v_i_471_);
return v_entries_472_;
}
else
{
lean_object* v_k_475_; lean_object* v_v_476_; uint64_t v___x_477_; size_t v_h_478_; size_t v___x_479_; lean_object* v___x_480_; size_t v___x_481_; size_t v___x_482_; size_t v___x_483_; size_t v_h_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v_k_475_ = lean_array_fget_borrowed(v_keys_469_, v_i_471_);
v_v_476_ = lean_array_fget_borrowed(v_vals_470_, v_i_471_);
v___x_477_ = l_Lean_instHashableMVarId_hash(v_k_475_);
v_h_478_ = lean_uint64_to_usize(v___x_477_);
v___x_479_ = ((size_t)5ULL);
v___x_480_ = lean_unsigned_to_nat(1u);
v___x_481_ = ((size_t)1ULL);
v___x_482_ = lean_usize_sub(v_depth_468_, v___x_481_);
v___x_483_ = lean_usize_mul(v___x_479_, v___x_482_);
v_h_484_ = lean_usize_shift_right(v_h_478_, v___x_483_);
v___x_485_ = lean_nat_add(v_i_471_, v___x_480_);
lean_dec(v_i_471_);
lean_inc(v_v_476_);
lean_inc(v_k_475_);
v___x_486_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(v_entries_472_, v_h_484_, v_depth_468_, v_k_475_, v_v_476_);
v_i_471_ = v___x_485_;
v_entries_472_ = v___x_486_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg___boxed(lean_object* v_depth_488_, lean_object* v_keys_489_, lean_object* v_vals_490_, lean_object* v_i_491_, lean_object* v_entries_492_){
_start:
{
size_t v_depth_boxed_493_; lean_object* v_res_494_; 
v_depth_boxed_493_ = lean_unbox_usize(v_depth_488_);
lean_dec(v_depth_488_);
v_res_494_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg(v_depth_boxed_493_, v_keys_489_, v_vals_490_, v_i_491_, v_entries_492_);
lean_dec_ref(v_vals_490_);
lean_dec_ref(v_keys_489_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg___boxed(lean_object* v_x_495_, lean_object* v_x_496_, lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_){
_start:
{
size_t v_x_8861__boxed_500_; size_t v_x_8862__boxed_501_; lean_object* v_res_502_; 
v_x_8861__boxed_500_ = lean_unbox_usize(v_x_496_);
lean_dec(v_x_496_);
v_x_8862__boxed_501_ = lean_unbox_usize(v_x_497_);
lean_dec(v_x_497_);
v_res_502_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(v_x_495_, v_x_8861__boxed_500_, v_x_8862__boxed_501_, v_x_498_, v_x_499_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5___redArg(lean_object* v_x_503_, lean_object* v_x_504_, lean_object* v_x_505_){
_start:
{
uint64_t v___x_506_; size_t v___x_507_; size_t v___x_508_; lean_object* v___x_509_; 
v___x_506_ = l_Lean_instHashableMVarId_hash(v_x_504_);
v___x_507_ = lean_uint64_to_usize(v___x_506_);
v___x_508_ = ((size_t)1ULL);
v___x_509_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(v_x_503_, v___x_507_, v___x_508_, v_x_504_, v_x_505_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(lean_object* v_mvarId_510_, lean_object* v_val_511_, lean_object* v___y_512_){
_start:
{
lean_object* v___x_514_; lean_object* v_mctx_515_; lean_object* v_cache_516_; lean_object* v_zetaDeltaFVarIds_517_; lean_object* v_postponed_518_; lean_object* v_diag_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_547_; 
v___x_514_ = lean_st_ref_take(v___y_512_);
v_mctx_515_ = lean_ctor_get(v___x_514_, 0);
v_cache_516_ = lean_ctor_get(v___x_514_, 1);
v_zetaDeltaFVarIds_517_ = lean_ctor_get(v___x_514_, 2);
v_postponed_518_ = lean_ctor_get(v___x_514_, 3);
v_diag_519_ = lean_ctor_get(v___x_514_, 4);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_547_ == 0)
{
v___x_521_ = v___x_514_;
v_isShared_522_ = v_isSharedCheck_547_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_diag_519_);
lean_inc(v_postponed_518_);
lean_inc(v_zetaDeltaFVarIds_517_);
lean_inc(v_cache_516_);
lean_inc(v_mctx_515_);
lean_dec(v___x_514_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_547_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v_depth_523_; lean_object* v_levelAssignDepth_524_; lean_object* v_lmvarCounter_525_; lean_object* v_mvarCounter_526_; lean_object* v_lDecls_527_; lean_object* v_decls_528_; lean_object* v_userNames_529_; lean_object* v_lAssignment_530_; lean_object* v_eAssignment_531_; lean_object* v_dAssignment_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_546_; 
v_depth_523_ = lean_ctor_get(v_mctx_515_, 0);
v_levelAssignDepth_524_ = lean_ctor_get(v_mctx_515_, 1);
v_lmvarCounter_525_ = lean_ctor_get(v_mctx_515_, 2);
v_mvarCounter_526_ = lean_ctor_get(v_mctx_515_, 3);
v_lDecls_527_ = lean_ctor_get(v_mctx_515_, 4);
v_decls_528_ = lean_ctor_get(v_mctx_515_, 5);
v_userNames_529_ = lean_ctor_get(v_mctx_515_, 6);
v_lAssignment_530_ = lean_ctor_get(v_mctx_515_, 7);
v_eAssignment_531_ = lean_ctor_get(v_mctx_515_, 8);
v_dAssignment_532_ = lean_ctor_get(v_mctx_515_, 9);
v_isSharedCheck_546_ = !lean_is_exclusive(v_mctx_515_);
if (v_isSharedCheck_546_ == 0)
{
v___x_534_ = v_mctx_515_;
v_isShared_535_ = v_isSharedCheck_546_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_dAssignment_532_);
lean_inc(v_eAssignment_531_);
lean_inc(v_lAssignment_530_);
lean_inc(v_userNames_529_);
lean_inc(v_decls_528_);
lean_inc(v_lDecls_527_);
lean_inc(v_mvarCounter_526_);
lean_inc(v_lmvarCounter_525_);
lean_inc(v_levelAssignDepth_524_);
lean_inc(v_depth_523_);
lean_dec(v_mctx_515_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_546_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_536_ = lean_box(0);
v___x_537_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5___redArg(v_eAssignment_531_, v_mvarId_510_, v_val_511_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 8, v___x_537_);
v___x_539_ = v___x_534_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_depth_523_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_levelAssignDepth_524_);
lean_ctor_set(v_reuseFailAlloc_545_, 2, v_lmvarCounter_525_);
lean_ctor_set(v_reuseFailAlloc_545_, 3, v_mvarCounter_526_);
lean_ctor_set(v_reuseFailAlloc_545_, 4, v_lDecls_527_);
lean_ctor_set(v_reuseFailAlloc_545_, 5, v_decls_528_);
lean_ctor_set(v_reuseFailAlloc_545_, 6, v_userNames_529_);
lean_ctor_set(v_reuseFailAlloc_545_, 7, v_lAssignment_530_);
lean_ctor_set(v_reuseFailAlloc_545_, 8, v___x_537_);
lean_ctor_set(v_reuseFailAlloc_545_, 9, v_dAssignment_532_);
v___x_539_ = v_reuseFailAlloc_545_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_541_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_539_);
v___x_541_ = v___x_521_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_cache_516_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v_zetaDeltaFVarIds_517_);
lean_ctor_set(v_reuseFailAlloc_544_, 3, v_postponed_518_);
lean_ctor_set(v_reuseFailAlloc_544_, 4, v_diag_519_);
v___x_541_ = v_reuseFailAlloc_544_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_st_ref_put(v___y_512_, v___x_541_);
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_536_);
return v___x_543_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg___boxed(lean_object* v_mvarId_548_, lean_object* v_val_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(v_mvarId_548_, v_val_549_, v___y_550_);
lean_dec(v___y_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(lean_object* v_msgData_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v___x_559_; lean_object* v_env_560_; uint8_t v___x_561_; lean_object* v_env_562_; lean_object* v___x_563_; lean_object* v_toCold_564_; lean_object* v_mctx_565_; lean_object* v_lctx_566_; lean_object* v_options_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_559_ = lean_st_ref_get(v___y_557_);
v_env_560_ = lean_ctor_get(v___x_559_, 0);
lean_inc_ref(v_env_560_);
lean_dec(v___x_559_);
v___x_561_ = 0;
v_env_562_ = l_Lean_Environment_setRecordingDeps(v_env_560_, v___x_561_);
v___x_563_ = lean_st_ref_get(v___y_555_);
v_toCold_564_ = lean_ctor_get(v___y_556_, 0);
v_mctx_565_ = lean_ctor_get(v___x_563_, 0);
lean_inc_ref(v_mctx_565_);
lean_dec(v___x_563_);
v_lctx_566_ = lean_ctor_get(v___y_554_, 2);
v_options_567_ = lean_ctor_get(v_toCold_564_, 2);
lean_inc_ref(v_options_567_);
lean_inc_ref(v_lctx_566_);
v___x_568_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_568_, 0, v_env_562_);
lean_ctor_set(v___x_568_, 1, v_mctx_565_);
lean_ctor_set(v___x_568_, 2, v_lctx_566_);
lean_ctor_set(v___x_568_, 3, v_options_567_);
v___x_569_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
lean_ctor_set(v___x_569_, 1, v_msgData_553_);
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1___boxed(lean_object* v_msgData_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(v_msgData_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(lean_object* v_msg_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_ref_584_; lean_object* v___x_585_; lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_594_; 
v_ref_584_ = lean_ctor_get(v___y_581_, 2);
v___x_585_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(v_msg_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_);
v_a_586_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_594_ == 0)
{
v___x_588_ = v___x_585_;
v_isShared_589_ = v_isSharedCheck_594_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_585_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_594_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_590_; lean_object* v___x_592_; 
lean_inc(v_ref_584_);
v___x_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_590_, 0, v_ref_584_);
lean_ctor_set(v___x_590_, 1, v_a_586_);
if (v_isShared_589_ == 0)
{
lean_ctor_set_tag(v___x_588_, 1);
lean_ctor_set(v___x_588_, 0, v___x_590_);
v___x_592_ = v___x_588_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_590_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg___boxed(lean_object* v_msg_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v_msg_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg(lean_object* v_a_602_, lean_object* v_b_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v_array_609_; lean_object* v_start_610_; lean_object* v_stop_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_626_; 
v_array_609_ = lean_ctor_get(v_a_602_, 0);
v_start_610_ = lean_ctor_get(v_a_602_, 1);
v_stop_611_ = lean_ctor_get(v_a_602_, 2);
v_isSharedCheck_626_ = !lean_is_exclusive(v_a_602_);
if (v_isSharedCheck_626_ == 0)
{
v___x_613_ = v_a_602_;
v_isShared_614_ = v_isSharedCheck_626_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_stop_611_);
lean_inc(v_start_610_);
lean_inc(v_array_609_);
lean_dec(v_a_602_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_626_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
uint8_t v___x_615_; 
v___x_615_ = lean_nat_dec_lt(v_start_610_, v_stop_611_);
if (v___x_615_ == 0)
{
lean_object* v___x_616_; 
lean_del_object(v___x_613_);
lean_dec(v_stop_611_);
lean_dec(v_start_610_);
lean_dec_ref(v_array_609_);
v___x_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_616_, 0, v_b_603_);
return v___x_616_;
}
else
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_617_ = lean_unsigned_to_nat(1u);
v___x_618_ = lean_nat_add(v_start_610_, v___x_617_);
lean_inc_ref(v_array_609_);
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 1, v___x_618_);
v___x_620_ = v___x_613_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_array_609_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v___x_618_);
lean_ctor_set(v_reuseFailAlloc_625_, 2, v_stop_611_);
v___x_620_ = v_reuseFailAlloc_625_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_array_fget(v_array_609_, v_start_610_);
lean_dec(v_start_610_);
lean_dec_ref(v_array_609_);
v___x_622_ = l_Lean_Meta_mkCongrFun(v_b_603_, v___x_621_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_a_623_);
lean_dec_ref_known(v___x_622_, 1);
v_a_602_ = v___x_620_;
v_b_603_ = v_a_623_;
goto _start;
}
else
{
lean_dec_ref(v___x_620_);
return v___x_622_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg___boxed(lean_object* v_a_627_, lean_object* v_b_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg(v_a_627_, v_b_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2(lean_object* v_levels_635_, lean_object* v___x_636_, size_t v_sz_637_, size_t v_i_638_, lean_object* v_bs_639_){
_start:
{
uint8_t v___x_640_; 
v___x_640_ = lean_usize_dec_lt(v_i_638_, v_sz_637_);
if (v___x_640_ == 0)
{
lean_dec(v_levels_635_);
return v_bs_639_;
}
else
{
lean_object* v_v_641_; lean_object* v_toConstantVal_642_; lean_object* v_name_643_; lean_object* v___x_644_; lean_object* v_bs_x27_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; size_t v___x_649_; size_t v___x_650_; lean_object* v___x_651_; 
v_v_641_ = lean_array_uget_borrowed(v_bs_639_, v_i_638_);
v_toConstantVal_642_ = lean_ctor_get(v_v_641_, 0);
v_name_643_ = lean_ctor_get(v_toConstantVal_642_, 0);
lean_inc(v_name_643_);
v___x_644_ = lean_unsigned_to_nat(0u);
v_bs_x27_645_ = lean_array_uset(v_bs_639_, v_i_638_, v___x_644_);
v___x_646_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_643_);
lean_inc(v_levels_635_);
v___x_647_ = l_Lean_mkConst(v___x_646_, v_levels_635_);
v___x_648_ = l_Lean_mkAppN(v___x_647_, v___x_636_);
v___x_649_ = ((size_t)1ULL);
v___x_650_ = lean_usize_add(v_i_638_, v___x_649_);
v___x_651_ = lean_array_uset(v_bs_x27_645_, v_i_638_, v___x_648_);
v_i_638_ = v___x_650_;
v_bs_639_ = v___x_651_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2___boxed(lean_object* v_levels_653_, lean_object* v___x_654_, lean_object* v_sz_655_, lean_object* v_i_656_, lean_object* v_bs_657_){
_start:
{
size_t v_sz_boxed_658_; size_t v_i_boxed_659_; lean_object* v_res_660_; 
v_sz_boxed_658_ = lean_unbox_usize(v_sz_655_);
lean_dec(v_sz_655_);
v_i_boxed_659_ = lean_unbox_usize(v_i_656_);
lean_dec(v_i_656_);
v_res_660_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2(v_levels_653_, v___x_654_, v_sz_boxed_658_, v_i_boxed_659_, v_bs_657_);
lean_dec_ref(v___x_654_);
return v_res_660_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__0));
v___x_663_ = l_Lean_stringToMessageData(v___x_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0(lean_object* v_infos_667_, lean_object* v_numParams_668_, lean_object* v___x_669_, lean_object* v_name_670_, lean_object* v_levels_671_, lean_object* v_args_672_, lean_object* v_x_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v___y_682_; lean_object* v___y_683_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; size_t v_sz_697_; size_t v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_686_ = lean_array_get_size(v_infos_667_);
v___x_687_ = lean_nat_sub(v_numParams_668_, v___x_686_);
lean_inc(v___x_669_);
lean_inc_ref(v_args_672_);
v___x_688_ = l_Array_toSubarray___redArg(v_args_672_, v___x_669_, v___x_687_);
v___x_689_ = lean_array_get_size(v_args_672_);
v___x_690_ = l_Array_toSubarray___redArg(v_args_672_, v_numParams_668_, v___x_689_);
lean_inc_n(v_name_670_, 2);
v___x_691_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_670_);
lean_inc_n(v_levels_671_, 3);
lean_inc(v___x_691_);
v___x_692_ = l_Lean_mkConst(v___x_691_, v_levels_671_);
v___x_693_ = l_Subarray_copy___redArg(v___x_688_);
v___x_694_ = l_Lean_mkAppN(v___x_692_, v___x_693_);
lean_inc_ref(v___x_690_);
v___x_695_ = l_Subarray_copy___redArg(v___x_690_);
v___x_696_ = l_Lean_mkAppN(v___x_694_, v___x_695_);
v_sz_697_ = lean_array_size(v_infos_667_);
v___x_698_ = ((size_t)0ULL);
v___x_699_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__2(v_levels_671_, v___x_693_, v_sz_697_, v___x_698_, v_infos_667_);
v___x_700_ = l_Lean_mkConst(v_name_670_, v_levels_671_);
lean_inc_ref(v___x_693_);
v___x_701_ = l_Array_append___redArg(v___x_693_, v___x_699_);
lean_dec_ref(v___x_699_);
v___x_702_ = l_Array_append___redArg(v___x_701_, v___x_695_);
v___x_703_ = l_Lean_mkAppN(v___x_700_, v___x_702_);
lean_dec_ref(v___x_702_);
v___x_704_ = l_Lean_Meta_mkEq(v___x_696_, v___x_703_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_764_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_764_ == 0)
{
v___x_707_ = v___x_704_;
v_isShared_708_ = v_isSharedCheck_764_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_704_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_764_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
lean_ctor_set_tag(v___x_707_, 1);
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_763_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
uint8_t v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = 0;
v___x_712_ = lean_box(0);
v___x_713_ = l_Lean_Meta_mkFreshExprMVar(v___x_710_, v___x_711_, v___x_712_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v_a_714_ = lean_ctor_get(v___x_713_, 0);
lean_inc(v_a_714_);
lean_dec_ref_known(v___x_713_, 1);
v___x_715_ = l_Lean_Expr_mvarId_x21(v_a_714_);
v___x_716_ = l_Lean_Meta_getEqnsFor_x3f(v___x_691_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
if (lean_obj_tag(v___x_716_) == 0)
{
lean_object* v_a_717_; 
v_a_717_ = lean_ctor_get(v___x_716_, 0);
lean_inc(v_a_717_);
lean_dec_ref_known(v___x_716_, 1);
if (lean_obj_tag(v_a_717_) == 1)
{
lean_object* v_val_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v_val_718_ = lean_ctor_get(v_a_717_, 0);
lean_inc(v_val_718_);
lean_dec_ref_known(v_a_717_, 1);
v___x_719_ = lean_array_get_size(v_val_718_);
v___x_720_ = lean_unsigned_to_nat(1u);
v___x_721_ = lean_nat_dec_eq(v___x_719_, v___x_720_);
if (v___x_721_ == 0)
{
lean_dec(v_val_718_);
lean_dec(v___x_715_);
lean_dec(v_a_714_);
lean_dec_ref(v___x_695_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_690_);
lean_dec(v_levels_671_);
lean_dec(v_name_670_);
lean_dec(v___x_669_);
v___y_680_ = v___y_674_;
v___y_681_ = v___y_675_;
v___y_682_ = v___y_676_;
v___y_683_ = v___y_677_;
goto v___jp_679_;
}
else
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_722_ = lean_array_fget(v_val_718_, v___x_669_);
lean_dec(v___x_669_);
lean_dec(v_val_718_);
v___x_723_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__3));
v___x_724_ = l_Lean_Name_append(v_name_670_, v___x_723_);
lean_inc(v_levels_671_);
v___x_725_ = l_Lean_mkConst(v___x_724_, v_levels_671_);
v___x_726_ = l_Lean_mkConst(v___x_722_, v_levels_671_);
v___x_727_ = l_Lean_mkAppN(v___x_726_, v___x_693_);
v___x_728_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg(v___x_690_, v___x_727_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; uint8_t v___x_730_; lean_object* v___x_731_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_729_);
lean_dec_ref_known(v___x_728_, 1);
v___x_730_ = 0;
v___x_731_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq(v___x_715_, v___x_725_, v___x_730_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_733_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___x_731_, 1);
v___x_733_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(v_a_732_, v_a_729_, v___y_675_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v___x_734_; 
lean_dec_ref_known(v___x_733_, 1);
v___x_734_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(v_a_714_, v___y_675_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_736_; uint8_t v___x_737_; lean_object* v___x_738_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_735_);
lean_dec_ref_known(v___x_734_, 1);
v___x_736_ = l_Array_append___redArg(v___x_693_, v___x_695_);
lean_dec_ref(v___x_695_);
v___x_737_ = 1;
v___x_738_ = l_Lean_Meta_mkLambdaFVars(v___x_736_, v_a_735_, v___x_730_, v___x_721_, v___x_730_, v___x_721_, v___x_737_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
lean_dec_ref(v___x_736_);
return v___x_738_;
}
else
{
lean_dec_ref(v___x_695_);
lean_dec_ref(v___x_693_);
return v___x_734_;
}
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_dec(v_a_714_);
lean_dec_ref(v___x_695_);
lean_dec_ref(v___x_693_);
v_a_739_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_733_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_733_);
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
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec(v_a_729_);
lean_dec(v_a_714_);
lean_dec_ref(v___x_695_);
lean_dec_ref(v___x_693_);
v_a_747_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_731_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_731_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
else
{
lean_dec_ref(v___x_725_);
lean_dec(v___x_715_);
lean_dec(v_a_714_);
lean_dec_ref(v___x_695_);
lean_dec_ref(v___x_693_);
return v___x_728_;
}
}
}
else
{
lean_dec(v_a_717_);
lean_dec(v___x_715_);
lean_dec(v_a_714_);
lean_dec_ref(v___x_695_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_690_);
lean_dec(v_levels_671_);
lean_dec(v_name_670_);
lean_dec(v___x_669_);
v___y_680_ = v___y_674_;
v___y_681_ = v___y_675_;
v___y_682_ = v___y_676_;
v___y_683_ = v___y_677_;
goto v___jp_679_;
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec(v___x_715_);
lean_dec(v_a_714_);
lean_dec_ref(v___x_695_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_690_);
lean_dec(v_levels_671_);
lean_dec(v_name_670_);
lean_dec(v___x_669_);
v_a_755_ = lean_ctor_get(v___x_716_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_716_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_716_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_716_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
else
{
lean_dec_ref(v___x_695_);
lean_dec_ref(v___x_693_);
lean_dec(v___x_691_);
lean_dec_ref(v___x_690_);
lean_dec(v_levels_671_);
lean_dec(v_name_670_);
lean_dec(v___x_669_);
return v___x_713_;
}
}
}
}
else
{
lean_dec_ref(v___x_695_);
lean_dec_ref(v___x_693_);
lean_dec(v___x_691_);
lean_dec_ref(v___x_690_);
lean_dec(v_levels_671_);
lean_dec(v_name_670_);
lean_dec(v___x_669_);
return v___x_704_;
}
v___jp_679_:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___closed__1);
v___x_685_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v___x_684_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
return v___x_685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___boxed(lean_object* v_infos_765_, lean_object* v_numParams_766_, lean_object* v___x_767_, lean_object* v_name_768_, lean_object* v_levels_769_, lean_object* v_args_770_, lean_object* v_x_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0(v_infos_765_, v_numParams_766_, v___x_767_, v_name_768_, v_levels_769_, v_args_770_, v_x_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec_ref(v_x_771_);
return v_res_777_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0(void){
_start:
{
lean_object* v___x_778_; double v___x_779_; 
v___x_778_ = lean_unsigned_to_nat(0u);
v___x_779_ = lean_float_of_nat(v___x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8(lean_object* v_cls_783_, lean_object* v_msg_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
lean_object* v_ref_790_; lean_object* v___x_791_; lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_837_; 
v_ref_790_ = lean_ctor_get(v___y_787_, 2);
v___x_791_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(v_msg_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
v_a_792_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_837_ == 0)
{
v___x_794_ = v___x_791_;
v_isShared_795_ = v_isSharedCheck_837_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_791_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_837_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v_traceState_797_; lean_object* v_env_798_; lean_object* v_nextMacroScope_799_; lean_object* v_ngen_800_; lean_object* v_auxDeclNGen_801_; lean_object* v_cache_802_; lean_object* v_recordedDeps_803_; lean_object* v_messages_804_; lean_object* v_infoState_805_; lean_object* v_snapshotTasks_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_836_; 
v___x_796_ = lean_st_ref_take(v___y_788_);
v_traceState_797_ = lean_ctor_get(v___x_796_, 4);
v_env_798_ = lean_ctor_get(v___x_796_, 0);
v_nextMacroScope_799_ = lean_ctor_get(v___x_796_, 1);
v_ngen_800_ = lean_ctor_get(v___x_796_, 2);
v_auxDeclNGen_801_ = lean_ctor_get(v___x_796_, 3);
v_cache_802_ = lean_ctor_get(v___x_796_, 5);
v_recordedDeps_803_ = lean_ctor_get(v___x_796_, 6);
v_messages_804_ = lean_ctor_get(v___x_796_, 7);
v_infoState_805_ = lean_ctor_get(v___x_796_, 8);
v_snapshotTasks_806_ = lean_ctor_get(v___x_796_, 9);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_836_ == 0)
{
v___x_808_ = v___x_796_;
v_isShared_809_ = v_isSharedCheck_836_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_snapshotTasks_806_);
lean_inc(v_infoState_805_);
lean_inc(v_messages_804_);
lean_inc(v_recordedDeps_803_);
lean_inc(v_cache_802_);
lean_inc(v_traceState_797_);
lean_inc(v_auxDeclNGen_801_);
lean_inc(v_ngen_800_);
lean_inc(v_nextMacroScope_799_);
lean_inc(v_env_798_);
lean_dec(v___x_796_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_836_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
uint64_t v_tid_810_; lean_object* v_traces_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_835_; 
v_tid_810_ = lean_ctor_get_uint64(v_traceState_797_, sizeof(void*)*1);
v_traces_811_ = lean_ctor_get(v_traceState_797_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v_traceState_797_);
if (v_isSharedCheck_835_ == 0)
{
v___x_813_ = v_traceState_797_;
v_isShared_814_ = v_isSharedCheck_835_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_traces_811_);
lean_dec(v_traceState_797_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_835_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_815_; lean_object* v___x_816_; double v___x_817_; uint8_t v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_815_ = lean_box(0);
v___x_816_ = lean_box(0);
v___x_817_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0);
v___x_818_ = 0;
v___x_819_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__1));
v___x_820_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_820_, 0, v_cls_783_);
lean_ctor_set(v___x_820_, 1, v___x_816_);
lean_ctor_set(v___x_820_, 2, v___x_819_);
lean_ctor_set_float(v___x_820_, sizeof(void*)*3, v___x_817_);
lean_ctor_set_float(v___x_820_, sizeof(void*)*3 + 8, v___x_817_);
lean_ctor_set_uint8(v___x_820_, sizeof(void*)*3 + 16, v___x_818_);
v___x_821_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__2));
v___x_822_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_822_, 0, v___x_820_);
lean_ctor_set(v___x_822_, 1, v_a_792_);
lean_ctor_set(v___x_822_, 2, v___x_821_);
lean_inc(v_ref_790_);
v___x_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_823_, 0, v_ref_790_);
lean_ctor_set(v___x_823_, 1, v___x_822_);
v___x_824_ = l_Lean_PersistentArray_push___redArg(v_traces_811_, v___x_823_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v___x_824_);
v___x_826_ = v___x_813_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_824_);
lean_ctor_set_uint64(v_reuseFailAlloc_834_, sizeof(void*)*1, v_tid_810_);
v___x_826_ = v_reuseFailAlloc_834_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
lean_object* v___x_828_; 
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 4, v___x_826_);
v___x_828_ = v___x_808_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_env_798_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v_nextMacroScope_799_);
lean_ctor_set(v_reuseFailAlloc_833_, 2, v_ngen_800_);
lean_ctor_set(v_reuseFailAlloc_833_, 3, v_auxDeclNGen_801_);
lean_ctor_set(v_reuseFailAlloc_833_, 4, v___x_826_);
lean_ctor_set(v_reuseFailAlloc_833_, 5, v_cache_802_);
lean_ctor_set(v_reuseFailAlloc_833_, 6, v_recordedDeps_803_);
lean_ctor_set(v_reuseFailAlloc_833_, 7, v_messages_804_);
lean_ctor_set(v_reuseFailAlloc_833_, 8, v_infoState_805_);
lean_ctor_set(v_reuseFailAlloc_833_, 9, v_snapshotTasks_806_);
v___x_828_ = v_reuseFailAlloc_833_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_829_ = lean_st_ref_put(v___y_788_, v___x_828_);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_815_);
v___x_831_ = v___x_794_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_815_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___boxed(lean_object* v_cls_838_, lean_object* v_msg_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8(v_cls_838_, v_msg_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
return v_res_845_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_852_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_853_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3));
v___x_854_ = l_Lean_Name_append(v___x_853_, v___x_852_);
return v___x_854_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__5));
v___x_857_ = l_Lean_stringToMessageData(v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9(lean_object* v_infos_858_, lean_object* v_levels_859_, lean_object* v_as_860_, size_t v_sz_861_, size_t v_i_862_, lean_object* v_b_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
uint8_t v___x_869_; 
v___x_869_ = lean_usize_dec_lt(v_i_862_, v_sz_861_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; 
lean_dec(v_levels_859_);
lean_dec_ref(v_infos_858_);
v___x_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_870_, 0, v_b_863_);
return v___x_870_;
}
else
{
lean_object* v_a_871_; lean_object* v_toConstantVal_872_; lean_object* v_numParams_873_; lean_object* v_name_874_; lean_object* v_levelParams_875_; lean_object* v_type_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___f_879_; uint8_t v___x_880_; lean_object* v___x_881_; 
v_a_871_ = lean_array_uget_borrowed(v_as_860_, v_i_862_);
v_toConstantVal_872_ = lean_ctor_get(v_a_871_, 0);
v_numParams_873_ = lean_ctor_get(v_a_871_, 1);
v_name_874_ = lean_ctor_get(v_toConstantVal_872_, 0);
v_levelParams_875_ = lean_ctor_get(v_toConstantVal_872_, 1);
v_type_876_ = lean_ctor_get(v_toConstantVal_872_, 2);
v___x_877_ = lean_unsigned_to_nat(0u);
v___x_878_ = lean_box(0);
lean_inc(v_levels_859_);
lean_inc(v_name_874_);
lean_inc(v_numParams_873_);
lean_inc_ref(v_infos_858_);
v___f_879_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___lam__0___boxed), 12, 5);
lean_closure_set(v___f_879_, 0, v_infos_858_);
lean_closure_set(v___f_879_, 1, v_numParams_873_);
lean_closure_set(v___f_879_, 2, v___x_877_);
lean_closure_set(v___f_879_, 3, v_name_874_);
lean_closure_set(v___f_879_, 4, v_levels_859_);
v___x_880_ = 0;
lean_inc_ref(v_type_876_);
v___x_881_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg(v_type_876_, v___f_879_, v___x_880_, v___x_880_, v___y_864_, v___y_865_, v___y_866_, v___y_867_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v_toCold_917_; lean_object* v_options_918_; uint8_t v_hasTrace_919_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
lean_dec_ref_known(v___x_881_, 1);
v_toCold_917_ = lean_ctor_get(v___y_866_, 0);
v_options_918_ = lean_ctor_get(v_toCold_917_, 2);
v_hasTrace_919_ = lean_ctor_get_uint8(v_options_918_, sizeof(void*)*1);
if (v_hasTrace_919_ == 0)
{
v___y_884_ = v___y_864_;
v___y_885_ = v___y_865_;
v___y_886_ = v___y_866_;
v___y_887_ = v___y_867_;
goto v___jp_883_;
}
else
{
lean_object* v_inheritedTraceOptions_920_; lean_object* v___x_921_; lean_object* v___x_922_; uint8_t v___x_923_; 
v_inheritedTraceOptions_920_ = lean_ctor_get(v_toCold_917_, 11);
v___x_921_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_922_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4);
v___x_923_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_920_, v_options_918_, v___x_922_);
if (v___x_923_ == 0)
{
v___y_884_ = v___y_864_;
v___y_885_ = v___y_865_;
v___y_886_ = v___y_866_;
v___y_887_ = v___y_867_;
goto v___jp_883_;
}
else
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_924_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__6);
lean_inc(v_a_882_);
v___x_925_ = l_Lean_MessageData_ofExpr(v_a_882_);
v___x_926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_924_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8(v___x_921_, v___x_926_, v___y_864_, v___y_865_, v___y_866_, v___y_867_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_dec_ref_known(v___x_927_, 1);
v___y_884_ = v___y_864_;
v___y_885_ = v___y_865_;
v___y_886_ = v___y_866_;
v___y_887_ = v___y_867_;
goto v___jp_883_;
}
else
{
lean_dec(v_a_882_);
lean_dec(v_levels_859_);
lean_dec_ref(v_infos_858_);
return v___x_927_;
}
}
}
v___jp_883_:
{
lean_object* v___x_888_; 
lean_inc(v___y_887_);
lean_inc_ref(v___y_886_);
lean_inc(v___y_885_);
lean_inc_ref(v___y_884_);
lean_inc(v_a_882_);
v___x_888_ = lean_infer_type(v_a_882_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_888_, 1);
lean_inc(v_name_874_);
v___x_890_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_874_);
v___x_891_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1));
v___x_892_ = l_Lean_Name_append(v___x_890_, v___x_891_);
v___x_893_ = lean_box(0);
lean_inc(v_levelParams_875_);
v___x_894_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(v___x_892_, v_levelParams_875_, v_a_889_, v_a_882_, v___x_893_, v___y_887_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_a_895_);
lean_dec_ref_known(v___x_894_, 1);
v___x_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_896_, 0, v_a_895_);
v___x_897_ = l_Lean_addDecl(v___x_896_, v___x_880_, v___y_886_, v___y_887_);
if (lean_obj_tag(v___x_897_) == 0)
{
size_t v___x_898_; size_t v___x_899_; 
lean_dec_ref_known(v___x_897_, 1);
v___x_898_ = ((size_t)1ULL);
v___x_899_ = lean_usize_add(v_i_862_, v___x_898_);
v_i_862_ = v___x_899_;
v_b_863_ = v___x_878_;
goto _start;
}
else
{
lean_dec(v_levels_859_);
lean_dec_ref(v_infos_858_);
return v___x_897_;
}
}
else
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_908_; 
lean_dec(v_levels_859_);
lean_dec_ref(v_infos_858_);
v_a_901_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_908_ == 0)
{
v___x_903_ = v___x_894_;
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_894_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_906_; 
if (v_isShared_904_ == 0)
{
v___x_906_ = v___x_903_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_901_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec(v_a_882_);
lean_dec(v_levels_859_);
lean_dec_ref(v_infos_858_);
v_a_909_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_888_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_888_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
}
else
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
lean_dec(v_levels_859_);
lean_dec_ref(v_infos_858_);
v_a_928_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_881_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_881_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___boxed(lean_object* v_infos_936_, lean_object* v_levels_937_, lean_object* v_as_938_, lean_object* v_sz_939_, lean_object* v_i_940_, lean_object* v_b_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
size_t v_sz_boxed_947_; size_t v_i_boxed_948_; lean_object* v_res_949_; 
v_sz_boxed_947_ = lean_unbox_usize(v_sz_939_);
lean_dec(v_sz_939_);
v_i_boxed_948_ = lean_unbox_usize(v_i_940_);
lean_dec(v_i_940_);
v_res_949_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9(v_infos_936_, v_levels_937_, v_as_938_, v_sz_boxed_947_, v_i_boxed_948_, v_b_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
lean_dec_ref(v_as_938_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas(lean_object* v_infos_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v_toConstantVal_959_; lean_object* v_levelParams_960_; lean_object* v___x_961_; lean_object* v_levels_962_; lean_object* v___x_963_; size_t v_sz_964_; size_t v___x_965_; lean_object* v___x_966_; 
v___x_956_ = l_Lean_instInhabitedInductiveVal_default;
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = lean_array_get_borrowed(v___x_956_, v_infos_950_, v___x_957_);
v_toConstantVal_959_ = lean_ctor_get(v___x_958_, 0);
v_levelParams_960_ = lean_ctor_get(v_toConstantVal_959_, 1);
v___x_961_ = lean_box(0);
lean_inc(v_levelParams_960_);
v_levels_962_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(v_levelParams_960_, v___x_961_);
v___x_963_ = lean_box(0);
v_sz_964_ = lean_array_size(v_infos_950_);
v___x_965_ = ((size_t)0ULL);
lean_inc_ref(v_infos_950_);
v___x_966_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9(v_infos_950_, v_levels_962_, v_infos_950_, v_sz_964_, v___x_965_, v___x_963_, v_a_951_, v_a_952_, v_a_953_, v_a_954_);
lean_dec_ref(v_infos_950_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_973_ == 0)
{
lean_object* v_unused_974_; 
v_unused_974_ = lean_ctor_get(v___x_966_, 0);
lean_dec(v_unused_974_);
v___x_968_ = v___x_966_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_dec(v___x_966_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v___x_963_);
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_963_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
else
{
return v___x_966_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas___boxed(lean_object* v_infos_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas(v_infos_975_, v_a_976_, v_a_977_, v_a_978_, v_a_979_);
lean_dec(v_a_979_);
lean_dec_ref(v_a_978_);
lean_dec(v_a_977_);
lean_dec_ref(v_a_976_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1(lean_object* v_00_u03b1_982_, lean_object* v_msg_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v___x_989_; 
v___x_989_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v_msg_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___boxed(lean_object* v_00_u03b1_990_, lean_object* v_msg_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1(v_00_u03b1_990_, v_msg_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3(lean_object* v_inst_998_, lean_object* v_R_999_, lean_object* v_a_1000_, lean_object* v_b_1001_, lean_object* v_c_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___redArg(v_a_1000_, v_b_1001_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3___boxed(lean_object* v_inst_1009_, lean_object* v_R_1010_, lean_object* v_a_1011_, lean_object* v_b_1012_, lean_object* v_c_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__3(v_inst_1009_, v_R_1010_, v_a_1011_, v_b_1012_, v_c_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4(lean_object* v_mvarId_1020_, lean_object* v_val_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(v_mvarId_1020_, v_val_1021_, v___y_1023_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___boxed(lean_object* v_mvarId_1028_, lean_object* v_val_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4(v_mvarId_1028_, v_val_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5(lean_object* v_00_u03b2_1036_, lean_object* v_x_1037_, lean_object* v_x_1038_, lean_object* v_x_1039_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5___redArg(v_x_1037_, v_x_1038_, v_x_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9(lean_object* v_00_u03b2_1041_, lean_object* v_x_1042_, size_t v_x_1043_, size_t v_x_1044_, lean_object* v_x_1045_, lean_object* v_x_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___redArg(v_x_1042_, v_x_1043_, v_x_1044_, v_x_1045_, v_x_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1048_, lean_object* v_x_1049_, lean_object* v_x_1050_, lean_object* v_x_1051_, lean_object* v_x_1052_, lean_object* v_x_1053_){
_start:
{
size_t v_x_9787__boxed_1054_; size_t v_x_9788__boxed_1055_; lean_object* v_res_1056_; 
v_x_9787__boxed_1054_ = lean_unbox_usize(v_x_1050_);
lean_dec(v_x_1050_);
v_x_9788__boxed_1055_ = lean_unbox_usize(v_x_1051_);
lean_dec(v_x_1051_);
v_res_1056_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9(v_00_u03b2_1048_, v_x_1049_, v_x_9787__boxed_1054_, v_x_9788__boxed_1055_, v_x_1052_, v_x_1053_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12(lean_object* v_00_u03b2_1057_, lean_object* v_n_1058_, lean_object* v_k_1059_, lean_object* v_v_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12___redArg(v_n_1058_, v_k_1059_, v_v_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13(lean_object* v_00_u03b2_1062_, size_t v_depth_1063_, lean_object* v_keys_1064_, lean_object* v_vals_1065_, lean_object* v_heq_1066_, lean_object* v_i_1067_, lean_object* v_entries_1068_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___redArg(v_depth_1063_, v_keys_1064_, v_vals_1065_, v_i_1067_, v_entries_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13___boxed(lean_object* v_00_u03b2_1070_, lean_object* v_depth_1071_, lean_object* v_keys_1072_, lean_object* v_vals_1073_, lean_object* v_heq_1074_, lean_object* v_i_1075_, lean_object* v_entries_1076_){
_start:
{
size_t v_depth_boxed_1077_; lean_object* v_res_1078_; 
v_depth_boxed_1077_ = lean_unbox_usize(v_depth_1071_);
lean_dec(v_depth_1071_);
v_res_1078_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__13(v_00_u03b2_1070_, v_depth_boxed_1077_, v_keys_1072_, v_vals_1073_, v_heq_1074_, v_i_1075_, v_entries_1076_);
lean_dec_ref(v_vals_1073_);
lean_dec_ref(v_keys_1072_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13(lean_object* v_00_u03b2_1079_, lean_object* v_x_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_, lean_object* v_x_1083_){
_start:
{
lean_object* v___x_1084_; 
v___x_1084_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5_spec__9_spec__12_spec__13___redArg(v_x_1080_, v_x_1081_, v_x_1082_, v_x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg(lean_object* v_e_1085_, lean_object* v___y_1086_){
_start:
{
uint8_t v___x_1088_; 
v___x_1088_ = l_Lean_Expr_hasMVar(v_e_1085_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v_e_1085_);
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; lean_object* v_mctx_1091_; lean_object* v___x_1092_; lean_object* v_fst_1093_; lean_object* v_snd_1094_; lean_object* v___x_1095_; lean_object* v_cache_1096_; lean_object* v_zetaDeltaFVarIds_1097_; lean_object* v_postponed_1098_; lean_object* v_diag_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1108_; 
v___x_1090_ = lean_st_ref_get(v___y_1086_);
v_mctx_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc_ref(v_mctx_1091_);
lean_dec(v___x_1090_);
v___x_1092_ = l_Lean_instantiateMVarsCore(v_mctx_1091_, v_e_1085_);
v_fst_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_fst_1093_);
v_snd_1094_ = lean_ctor_get(v___x_1092_, 1);
lean_inc(v_snd_1094_);
lean_dec_ref(v___x_1092_);
v___x_1095_ = lean_st_ref_take(v___y_1086_);
v_cache_1096_ = lean_ctor_get(v___x_1095_, 1);
v_zetaDeltaFVarIds_1097_ = lean_ctor_get(v___x_1095_, 2);
v_postponed_1098_ = lean_ctor_get(v___x_1095_, 3);
v_diag_1099_ = lean_ctor_get(v___x_1095_, 4);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1108_ == 0)
{
lean_object* v_unused_1109_; 
v_unused_1109_ = lean_ctor_get(v___x_1095_, 0);
lean_dec(v_unused_1109_);
v___x_1101_ = v___x_1095_;
v_isShared_1102_ = v_isSharedCheck_1108_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_diag_1099_);
lean_inc(v_postponed_1098_);
lean_inc(v_zetaDeltaFVarIds_1097_);
lean_inc(v_cache_1096_);
lean_dec(v___x_1095_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1108_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v_snd_1094_);
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_snd_1094_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v_cache_1096_);
lean_ctor_set(v_reuseFailAlloc_1107_, 2, v_zetaDeltaFVarIds_1097_);
lean_ctor_set(v_reuseFailAlloc_1107_, 3, v_postponed_1098_);
lean_ctor_set(v_reuseFailAlloc_1107_, 4, v_diag_1099_);
v___x_1104_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = lean_st_ref_put(v___y_1086_, v___x_1104_);
v___x_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1106_, 0, v_fst_1093_);
return v___x_1106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg___boxed(lean_object* v_e_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg(v_e_1110_, v___y_1111_);
lean_dec(v___y_1111_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4(lean_object* v_e_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg(v_e_1114_, v___y_1118_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___boxed(lean_object* v_e_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4(v_e_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0(lean_object* v_k_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v_b_1135_, lean_object* v_c_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v___x_1142_; 
lean_inc(v___y_1140_);
lean_inc_ref(v___y_1139_);
lean_inc(v___y_1138_);
lean_inc_ref(v___y_1137_);
lean_inc(v___y_1134_);
lean_inc_ref(v___y_1133_);
v___x_1142_ = lean_apply_9(v_k_1132_, v_b_1135_, v_c_1136_, v___y_1133_, v___y_1134_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, lean_box(0));
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0___boxed(lean_object* v_k_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v_b_1146_, lean_object* v_c_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0(v_k_1143_, v___y_1144_, v___y_1145_, v_b_1146_, v_c_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(lean_object* v_type_1154_, lean_object* v_k_1155_, uint8_t v_cleanupAnnotations_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v___f_1164_; uint8_t v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
lean_inc(v___y_1158_);
lean_inc_ref(v___y_1157_);
v___f_1164_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1164_, 0, v_k_1155_);
lean_closure_set(v___f_1164_, 1, v___y_1157_);
lean_closure_set(v___f_1164_, 2, v___y_1158_);
v___x_1165_ = 0;
v___x_1166_ = lean_box(0);
v___x_1167_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1165_, v___x_1166_, v_type_1154_, v___f_1164_, v_cleanupAnnotations_1156_, v___x_1165_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
if (lean_obj_tag(v___x_1167_) == 0)
{
return v___x_1167_;
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1175_; 
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1170_ = v___x_1167_;
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1167_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1168_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___boxed(lean_object* v_type_1176_, lean_object* v_k_1177_, lean_object* v_cleanupAnnotations_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1186_; lean_object* v_res_1187_; 
v_cleanupAnnotations_boxed_1186_ = lean_unbox(v_cleanupAnnotations_1178_);
v_res_1187_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(v_type_1176_, v_k_1177_, v_cleanupAnnotations_boxed_1186_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec_ref(v___y_1181_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6(lean_object* v_00_u03b1_1188_, lean_object* v_type_1189_, lean_object* v_k_1190_, uint8_t v_cleanupAnnotations_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(v_type_1189_, v_k_1190_, v_cleanupAnnotations_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___boxed(lean_object* v_00_u03b1_1200_, lean_object* v_type_1201_, lean_object* v_k_1202_, lean_object* v_cleanupAnnotations_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1211_; lean_object* v_res_1212_; 
v_cleanupAnnotations_boxed_1211_ = lean_unbox(v_cleanupAnnotations_1203_);
v_res_1212_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6(v_00_u03b1_1200_, v_type_1201_, v_k_1202_, v_cleanupAnnotations_boxed_1211_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg(lean_object* v_name_1213_, lean_object* v_levelParams_1214_, lean_object* v_type_1215_, lean_object* v_value_1216_, lean_object* v_hints_1217_, lean_object* v___y_1218_){
_start:
{
lean_object* v___x_1220_; uint8_t v___y_1222_; lean_object* v_env_1230_; uint8_t v___x_1231_; 
v___x_1220_ = lean_st_ref_get(v___y_1218_);
v_env_1230_ = lean_ctor_get(v___x_1220_, 0);
lean_inc_ref_n(v_env_1230_, 2);
lean_dec(v___x_1220_);
v___x_1231_ = l_Lean_Environment_hasUnsafe(v_env_1230_, v_type_1215_);
if (v___x_1231_ == 0)
{
uint8_t v___x_1232_; 
v___x_1232_ = l_Lean_Environment_hasUnsafe(v_env_1230_, v_value_1216_);
if (v___x_1232_ == 0)
{
uint8_t v___x_1233_; 
v___x_1233_ = 1;
v___y_1222_ = v___x_1233_;
goto v___jp_1221_;
}
else
{
goto v___jp_1228_;
}
}
else
{
lean_dec_ref(v_env_1230_);
goto v___jp_1228_;
}
v___jp_1221_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
lean_inc(v_name_1213_);
v___x_1223_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1223_, 0, v_name_1213_);
lean_ctor_set(v___x_1223_, 1, v_levelParams_1214_);
lean_ctor_set(v___x_1223_, 2, v_type_1215_);
v___x_1224_ = lean_box(0);
v___x_1225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1225_, 0, v_name_1213_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1226_, 0, v___x_1223_);
lean_ctor_set(v___x_1226_, 1, v_value_1216_);
lean_ctor_set(v___x_1226_, 2, v_hints_1217_);
lean_ctor_set(v___x_1226_, 3, v___x_1225_);
lean_ctor_set_uint8(v___x_1226_, sizeof(void*)*4, v___y_1222_);
v___x_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
return v___x_1227_;
}
v___jp_1228_:
{
uint8_t v___x_1229_; 
v___x_1229_ = 0;
v___y_1222_ = v___x_1229_;
goto v___jp_1221_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg___boxed(lean_object* v_name_1234_, lean_object* v_levelParams_1235_, lean_object* v_type_1236_, lean_object* v_value_1237_, lean_object* v_hints_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg(v_name_1234_, v_levelParams_1235_, v_type_1236_, v_value_1237_, v_hints_1238_, v___y_1239_);
lean_dec(v___y_1239_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7(lean_object* v_name_1242_, lean_object* v_levelParams_1243_, lean_object* v_type_1244_, lean_object* v_value_1245_, lean_object* v_hints_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v___x_1254_; 
v___x_1254_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg(v_name_1242_, v_levelParams_1243_, v_type_1244_, v_value_1245_, v_hints_1246_, v___y_1252_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___boxed(lean_object* v_name_1255_, lean_object* v_levelParams_1256_, lean_object* v_type_1257_, lean_object* v_value_1258_, lean_object* v_hints_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7(v_name_1255_, v_levelParams_1256_, v_type_1257_, v_value_1258_, v_hints_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
lean_dec(v___y_1263_);
lean_dec_ref(v___y_1262_);
lean_dec(v___y_1261_);
lean_dec_ref(v___y_1260_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(lean_object* v_type_1268_, lean_object* v_maxFVars_x3f_1269_, lean_object* v_k_1270_, uint8_t v_cleanupAnnotations_1271_, uint8_t v_whnfType_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_){
_start:
{
lean_object* v___f_1280_; lean_object* v___x_1281_; 
lean_inc(v___y_1274_);
lean_inc_ref(v___y_1273_);
v___f_1280_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1280_, 0, v_k_1270_);
lean_closure_set(v___f_1280_, 1, v___y_1273_);
lean_closure_set(v___f_1280_, 2, v___y_1274_);
v___x_1281_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_1268_, v_maxFVars_x3f_1269_, v___f_1280_, v_cleanupAnnotations_1271_, v_whnfType_1272_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
if (lean_obj_tag(v___x_1281_) == 0)
{
return v___x_1281_;
}
else
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1284_ = v___x_1281_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1281_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg___boxed(lean_object* v_type_1290_, lean_object* v_maxFVars_x3f_1291_, lean_object* v_k_1292_, lean_object* v_cleanupAnnotations_1293_, lean_object* v_whnfType_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1302_; uint8_t v_whnfType_boxed_1303_; lean_object* v_res_1304_; 
v_cleanupAnnotations_boxed_1302_ = lean_unbox(v_cleanupAnnotations_1293_);
v_whnfType_boxed_1303_ = lean_unbox(v_whnfType_1294_);
v_res_1304_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(v_type_1290_, v_maxFVars_x3f_1291_, v_k_1292_, v_cleanupAnnotations_boxed_1302_, v_whnfType_boxed_1303_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8(lean_object* v_00_u03b1_1305_, lean_object* v_type_1306_, lean_object* v_maxFVars_x3f_1307_, lean_object* v_k_1308_, uint8_t v_cleanupAnnotations_1309_, uint8_t v_whnfType_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v___x_1318_; 
v___x_1318_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(v_type_1306_, v_maxFVars_x3f_1307_, v_k_1308_, v_cleanupAnnotations_1309_, v_whnfType_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___boxed(lean_object* v_00_u03b1_1319_, lean_object* v_type_1320_, lean_object* v_maxFVars_x3f_1321_, lean_object* v_k_1322_, lean_object* v_cleanupAnnotations_1323_, lean_object* v_whnfType_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1332_; uint8_t v_whnfType_boxed_1333_; lean_object* v_res_1334_; 
v_cleanupAnnotations_boxed_1332_ = lean_unbox(v_cleanupAnnotations_1323_);
v_whnfType_boxed_1333_ = lean_unbox(v_whnfType_1324_);
v_res_1334_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8(v_00_u03b1_1319_, v_type_1320_, v_maxFVars_x3f_1321_, v_k_1322_, v_cleanupAnnotations_boxed_1332_, v_whnfType_boxed_1333_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0(lean_object* v_cls_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_){
_start:
{
lean_object* v_toCold_1343_; lean_object* v_options_1344_; uint8_t v_hasTrace_1345_; 
v_toCold_1343_ = lean_ctor_get(v___y_1340_, 0);
v_options_1344_ = lean_ctor_get(v_toCold_1343_, 2);
v_hasTrace_1345_ = lean_ctor_get_uint8(v_options_1344_, sizeof(void*)*1);
if (v_hasTrace_1345_ == 0)
{
lean_object* v___x_1346_; lean_object* v___x_1347_; 
lean_dec(v_cls_1335_);
v___x_1346_ = lean_box(v_hasTrace_1345_);
v___x_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
return v___x_1347_;
}
else
{
lean_object* v_inheritedTraceOptions_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; uint8_t v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v_inheritedTraceOptions_1348_ = lean_ctor_get(v_toCold_1343_, 11);
v___x_1349_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3));
v___x_1350_ = l_Lean_Name_append(v___x_1349_, v_cls_1335_);
v___x_1351_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1348_, v_options_1344_, v___x_1350_);
lean_dec(v___x_1350_);
v___x_1352_ = lean_box(v___x_1351_);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
return v___x_1353_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0___boxed(lean_object* v_cls_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0(v_cls_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg(lean_object* v_mvarId_1363_, lean_object* v_val_1364_, lean_object* v___y_1365_){
_start:
{
lean_object* v___x_1367_; lean_object* v_mctx_1368_; lean_object* v_cache_1369_; lean_object* v_zetaDeltaFVarIds_1370_; lean_object* v_postponed_1371_; lean_object* v_diag_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1400_; 
v___x_1367_ = lean_st_ref_take(v___y_1365_);
v_mctx_1368_ = lean_ctor_get(v___x_1367_, 0);
v_cache_1369_ = lean_ctor_get(v___x_1367_, 1);
v_zetaDeltaFVarIds_1370_ = lean_ctor_get(v___x_1367_, 2);
v_postponed_1371_ = lean_ctor_get(v___x_1367_, 3);
v_diag_1372_ = lean_ctor_get(v___x_1367_, 4);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1374_ = v___x_1367_;
v_isShared_1375_ = v_isSharedCheck_1400_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_diag_1372_);
lean_inc(v_postponed_1371_);
lean_inc(v_zetaDeltaFVarIds_1370_);
lean_inc(v_cache_1369_);
lean_inc(v_mctx_1368_);
lean_dec(v___x_1367_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1400_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v_depth_1376_; lean_object* v_levelAssignDepth_1377_; lean_object* v_lmvarCounter_1378_; lean_object* v_mvarCounter_1379_; lean_object* v_lDecls_1380_; lean_object* v_decls_1381_; lean_object* v_userNames_1382_; lean_object* v_lAssignment_1383_; lean_object* v_eAssignment_1384_; lean_object* v_dAssignment_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1399_; 
v_depth_1376_ = lean_ctor_get(v_mctx_1368_, 0);
v_levelAssignDepth_1377_ = lean_ctor_get(v_mctx_1368_, 1);
v_lmvarCounter_1378_ = lean_ctor_get(v_mctx_1368_, 2);
v_mvarCounter_1379_ = lean_ctor_get(v_mctx_1368_, 3);
v_lDecls_1380_ = lean_ctor_get(v_mctx_1368_, 4);
v_decls_1381_ = lean_ctor_get(v_mctx_1368_, 5);
v_userNames_1382_ = lean_ctor_get(v_mctx_1368_, 6);
v_lAssignment_1383_ = lean_ctor_get(v_mctx_1368_, 7);
v_eAssignment_1384_ = lean_ctor_get(v_mctx_1368_, 8);
v_dAssignment_1385_ = lean_ctor_get(v_mctx_1368_, 9);
v_isSharedCheck_1399_ = !lean_is_exclusive(v_mctx_1368_);
if (v_isSharedCheck_1399_ == 0)
{
v___x_1387_ = v_mctx_1368_;
v_isShared_1388_ = v_isSharedCheck_1399_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_dAssignment_1385_);
lean_inc(v_eAssignment_1384_);
lean_inc(v_lAssignment_1383_);
lean_inc(v_userNames_1382_);
lean_inc(v_decls_1381_);
lean_inc(v_lDecls_1380_);
lean_inc(v_mvarCounter_1379_);
lean_inc(v_lmvarCounter_1378_);
lean_inc(v_levelAssignDepth_1377_);
lean_inc(v_depth_1376_);
lean_dec(v_mctx_1368_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1399_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1392_; 
v___x_1389_ = lean_box(0);
v___x_1390_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4_spec__5___redArg(v_eAssignment_1384_, v_mvarId_1363_, v_val_1364_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 8, v___x_1390_);
v___x_1392_ = v___x_1387_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v_depth_1376_);
lean_ctor_set(v_reuseFailAlloc_1398_, 1, v_levelAssignDepth_1377_);
lean_ctor_set(v_reuseFailAlloc_1398_, 2, v_lmvarCounter_1378_);
lean_ctor_set(v_reuseFailAlloc_1398_, 3, v_mvarCounter_1379_);
lean_ctor_set(v_reuseFailAlloc_1398_, 4, v_lDecls_1380_);
lean_ctor_set(v_reuseFailAlloc_1398_, 5, v_decls_1381_);
lean_ctor_set(v_reuseFailAlloc_1398_, 6, v_userNames_1382_);
lean_ctor_set(v_reuseFailAlloc_1398_, 7, v_lAssignment_1383_);
lean_ctor_set(v_reuseFailAlloc_1398_, 8, v___x_1390_);
lean_ctor_set(v_reuseFailAlloc_1398_, 9, v_dAssignment_1385_);
v___x_1392_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
lean_object* v___x_1394_; 
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 0, v___x_1392_);
v___x_1394_ = v___x_1374_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1392_);
lean_ctor_set(v_reuseFailAlloc_1397_, 1, v_cache_1369_);
lean_ctor_set(v_reuseFailAlloc_1397_, 2, v_zetaDeltaFVarIds_1370_);
lean_ctor_set(v_reuseFailAlloc_1397_, 3, v_postponed_1371_);
lean_ctor_set(v_reuseFailAlloc_1397_, 4, v_diag_1372_);
v___x_1394_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1395_ = lean_st_ref_put(v___y_1365_, v___x_1394_);
v___x_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1389_);
return v___x_1396_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg___boxed(lean_object* v_mvarId_1401_, lean_object* v_val_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg(v_mvarId_1401_, v_val_1402_, v___y_1403_);
lean_dec(v___y_1403_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(lean_object* v_cls_1406_, lean_object* v_msg_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v_ref_1413_; lean_object* v___x_1414_; lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1460_; 
v_ref_1413_ = lean_ctor_get(v___y_1410_, 2);
v___x_1414_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(v_msg_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1417_ = v___x_1414_;
v_isShared_1418_ = v_isSharedCheck_1460_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1414_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1460_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1419_; lean_object* v_traceState_1420_; lean_object* v_env_1421_; lean_object* v_nextMacroScope_1422_; lean_object* v_ngen_1423_; lean_object* v_auxDeclNGen_1424_; lean_object* v_cache_1425_; lean_object* v_recordedDeps_1426_; lean_object* v_messages_1427_; lean_object* v_infoState_1428_; lean_object* v_snapshotTasks_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1459_; 
v___x_1419_ = lean_st_ref_take(v___y_1411_);
v_traceState_1420_ = lean_ctor_get(v___x_1419_, 4);
v_env_1421_ = lean_ctor_get(v___x_1419_, 0);
v_nextMacroScope_1422_ = lean_ctor_get(v___x_1419_, 1);
v_ngen_1423_ = lean_ctor_get(v___x_1419_, 2);
v_auxDeclNGen_1424_ = lean_ctor_get(v___x_1419_, 3);
v_cache_1425_ = lean_ctor_get(v___x_1419_, 5);
v_recordedDeps_1426_ = lean_ctor_get(v___x_1419_, 6);
v_messages_1427_ = lean_ctor_get(v___x_1419_, 7);
v_infoState_1428_ = lean_ctor_get(v___x_1419_, 8);
v_snapshotTasks_1429_ = lean_ctor_get(v___x_1419_, 9);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1431_ = v___x_1419_;
v_isShared_1432_ = v_isSharedCheck_1459_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_snapshotTasks_1429_);
lean_inc(v_infoState_1428_);
lean_inc(v_messages_1427_);
lean_inc(v_recordedDeps_1426_);
lean_inc(v_cache_1425_);
lean_inc(v_traceState_1420_);
lean_inc(v_auxDeclNGen_1424_);
lean_inc(v_ngen_1423_);
lean_inc(v_nextMacroScope_1422_);
lean_inc(v_env_1421_);
lean_dec(v___x_1419_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1459_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
uint64_t v_tid_1433_; lean_object* v_traces_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1458_; 
v_tid_1433_ = lean_ctor_get_uint64(v_traceState_1420_, sizeof(void*)*1);
v_traces_1434_ = lean_ctor_get(v_traceState_1420_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v_traceState_1420_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1436_ = v_traceState_1420_;
v_isShared_1437_ = v_isSharedCheck_1458_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_traces_1434_);
lean_dec(v_traceState_1420_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1458_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; double v___x_1440_; uint8_t v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1438_ = lean_box(0);
v___x_1439_ = lean_box(0);
v___x_1440_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__0);
v___x_1441_ = 0;
v___x_1442_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__1));
v___x_1443_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1443_, 0, v_cls_1406_);
lean_ctor_set(v___x_1443_, 1, v___x_1439_);
lean_ctor_set(v___x_1443_, 2, v___x_1442_);
lean_ctor_set_float(v___x_1443_, sizeof(void*)*3, v___x_1440_);
lean_ctor_set_float(v___x_1443_, sizeof(void*)*3 + 8, v___x_1440_);
lean_ctor_set_uint8(v___x_1443_, sizeof(void*)*3 + 16, v___x_1441_);
v___x_1444_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__8___closed__2));
v___x_1445_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1443_);
lean_ctor_set(v___x_1445_, 1, v_a_1415_);
lean_ctor_set(v___x_1445_, 2, v___x_1444_);
lean_inc(v_ref_1413_);
v___x_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1446_, 0, v_ref_1413_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = l_Lean_PersistentArray_push___redArg(v_traces_1434_, v___x_1446_);
if (v_isShared_1437_ == 0)
{
lean_ctor_set(v___x_1436_, 0, v___x_1447_);
v___x_1449_ = v___x_1436_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v___x_1447_);
lean_ctor_set_uint64(v_reuseFailAlloc_1457_, sizeof(void*)*1, v_tid_1433_);
v___x_1449_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_object* v___x_1451_; 
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 4, v___x_1449_);
v___x_1451_ = v___x_1431_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_env_1421_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v_nextMacroScope_1422_);
lean_ctor_set(v_reuseFailAlloc_1456_, 2, v_ngen_1423_);
lean_ctor_set(v_reuseFailAlloc_1456_, 3, v_auxDeclNGen_1424_);
lean_ctor_set(v_reuseFailAlloc_1456_, 4, v___x_1449_);
lean_ctor_set(v_reuseFailAlloc_1456_, 5, v_cache_1425_);
lean_ctor_set(v_reuseFailAlloc_1456_, 6, v_recordedDeps_1426_);
lean_ctor_set(v_reuseFailAlloc_1456_, 7, v_messages_1427_);
lean_ctor_set(v_reuseFailAlloc_1456_, 8, v_infoState_1428_);
lean_ctor_set(v_reuseFailAlloc_1456_, 9, v_snapshotTasks_1429_);
v___x_1451_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
lean_object* v___x_1452_; lean_object* v___x_1454_; 
v___x_1452_ = lean_st_ref_put(v___y_1411_, v___x_1451_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1438_);
v___x_1454_ = v___x_1417_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1438_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg___boxed(lean_object* v_cls_1461_, lean_object* v_msg_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_1461_, v_msg_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
return v_res_1468_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1469_; lean_object* v_dummy_1470_; 
v___x_1469_ = lean_box(0);
v_dummy_1470_ = l_Lean_Expr_sort___override(v___x_1469_);
return v_dummy_1470_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1472_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__1));
v___x_1473_ = l_Lean_stringToMessageData(v___x_1472_);
return v___x_1473_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1475_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__3));
v___x_1476_ = l_Lean_stringToMessageData(v___x_1475_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1(lean_object* v_numParams_1477_, lean_object* v___x_1478_, lean_object* v_name_1479_, lean_object* v___x_1480_, lean_object* v___x_1481_, lean_object* v_name_1482_, lean_object* v___x_1483_, lean_object* v_cls_1484_, lean_object* v_fields_1485_, lean_object* v_bodyExpr_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_toCold_1494_; lean_object* v_options_1495_; lean_object* v_inheritedTraceOptions_1496_; uint8_t v_hasTrace_1497_; lean_object* v_nargs_1498_; lean_object* v_dummy_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___y_1513_; lean_object* v___y_1514_; lean_object* v___y_1515_; lean_object* v___y_1516_; lean_object* v___y_1517_; lean_object* v___y_1518_; 
v_toCold_1494_ = lean_ctor_get(v___y_1491_, 0);
v_options_1495_ = lean_ctor_get(v_toCold_1494_, 2);
v_inheritedTraceOptions_1496_ = lean_ctor_get(v_toCold_1494_, 11);
v_hasTrace_1497_ = lean_ctor_get_uint8(v_options_1495_, sizeof(void*)*1);
v_nargs_1498_ = l_Lean_Expr_getAppNumArgs(v_bodyExpr_1486_);
v_dummy_1499_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0);
lean_inc(v_nargs_1498_);
v___x_1500_ = lean_mk_array(v_nargs_1498_, v_dummy_1499_);
v___x_1501_ = lean_unsigned_to_nat(1u);
v___x_1502_ = lean_nat_sub(v_nargs_1498_, v___x_1501_);
lean_dec(v_nargs_1498_);
v___x_1503_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_bodyExpr_1486_, v___x_1500_, v___x_1502_);
v___x_1504_ = lean_array_get_size(v___x_1503_);
v___x_1505_ = lean_nat_add(v_numParams_1477_, v___x_1478_);
v___x_1506_ = l_Array_toSubarray___redArg(v___x_1503_, v___x_1505_, v___x_1504_);
v___x_1507_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_1479_);
lean_inc(v___x_1480_);
lean_inc(v___x_1507_);
v___x_1508_ = l_Lean_mkConst(v___x_1507_, v___x_1480_);
v___x_1509_ = l_Lean_mkAppN(v___x_1508_, v___x_1481_);
v___x_1510_ = l_Subarray_copy___redArg(v___x_1506_);
v___x_1511_ = l_Lean_mkAppN(v___x_1509_, v___x_1510_);
lean_dec_ref(v___x_1510_);
if (v_hasTrace_1497_ == 0)
{
lean_dec(v_cls_1484_);
v___y_1513_ = v___y_1487_;
v___y_1514_ = v___y_1488_;
v___y_1515_ = v___y_1489_;
v___y_1516_ = v___y_1490_;
v___y_1517_ = v___y_1491_;
v___y_1518_ = v___y_1492_;
goto v___jp_1512_;
}
else
{
lean_object* v___x_1567_; lean_object* v___x_1568_; uint8_t v___x_1569_; 
v___x_1567_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__3));
lean_inc(v_cls_1484_);
v___x_1568_ = l_Lean_Name_append(v___x_1567_, v_cls_1484_);
v___x_1569_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1496_, v_options_1495_, v___x_1568_);
lean_dec(v___x_1568_);
if (v___x_1569_ == 0)
{
lean_dec(v_cls_1484_);
v___y_1513_ = v___y_1487_;
v___y_1514_ = v___y_1488_;
v___y_1515_ = v___y_1489_;
v___y_1516_ = v___y_1490_;
v___y_1517_ = v___y_1491_;
v___y_1518_ = v___y_1492_;
goto v___jp_1512_;
}
else
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1570_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__2, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__2_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__2);
lean_inc(v_name_1482_);
v___x_1571_ = l_Lean_MessageData_ofName(v_name_1482_);
v___x_1572_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1570_);
lean_ctor_set(v___x_1572_, 1, v___x_1571_);
v___x_1573_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__4, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__4_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__4);
v___x_1574_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1572_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
lean_inc_ref(v___x_1511_);
v___x_1575_ = l_Lean_MessageData_ofExpr(v___x_1511_);
v___x_1576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1574_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
v___x_1577_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_1484_, v___x_1576_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_dec_ref_known(v___x_1577_, 1);
v___y_1513_ = v___y_1487_;
v___y_1514_ = v___y_1488_;
v___y_1515_ = v___y_1489_;
v___y_1516_ = v___y_1490_;
v___y_1517_ = v___y_1491_;
v___y_1518_ = v___y_1492_;
goto v___jp_1512_;
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
lean_dec_ref(v___x_1511_);
lean_dec(v___x_1507_);
lean_dec(v_name_1482_);
lean_dec(v___x_1480_);
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1577_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1577_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
}
v___jp_1512_:
{
lean_object* v___x_1519_; uint8_t v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1511_);
v___x_1520_ = 0;
v___x_1521_ = lean_box(0);
v___x_1522_ = l_Lean_Meta_mkFreshExprMVar(v___x_1519_, v___x_1520_, v___x_1521_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_a_1523_);
lean_dec_ref_known(v___x_1522_, 1);
v___x_1524_ = l_Lean_Expr_mvarId_x21(v_a_1523_);
v___x_1525_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1));
v___x_1526_ = l_Lean_Name_append(v___x_1507_, v___x_1525_);
lean_inc(v___x_1480_);
v___x_1527_ = l_Lean_mkConst(v___x_1526_, v___x_1480_);
v___x_1528_ = l_Lean_mkAppN(v___x_1527_, v___x_1481_);
lean_inc(v___x_1524_);
v___x_1529_ = l_Lean_MVarId_getType(v___x_1524_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; uint8_t v___x_1531_; uint8_t v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc(v_a_1530_);
lean_dec_ref_known(v___x_1529_, 1);
v___x_1531_ = 0;
v___x_1532_ = 1;
v___x_1533_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq___closed__0));
lean_inc(v___x_1524_);
v___x_1534_ = l_Lean_MVarId_rewrite(v___x_1524_, v_a_1530_, v___x_1528_, v___x_1531_, v___x_1533_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; lean_object* v_eNew_1536_; lean_object* v_eqProof_1537_; lean_object* v___x_1538_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
lean_dec_ref_known(v___x_1534_, 1);
v_eNew_1536_ = lean_ctor_get(v_a_1535_, 0);
lean_inc_ref(v_eNew_1536_);
v_eqProof_1537_ = lean_ctor_get(v_a_1535_, 1);
lean_inc_ref(v_eqProof_1537_);
lean_dec(v_a_1535_);
v___x_1538_ = l_Lean_MVarId_replaceTargetEq(v___x_1524_, v_eNew_1536_, v_eqProof_1537_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v_a_1546_; uint8_t v___x_1547_; lean_object* v___x_1548_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
lean_inc(v_a_1539_);
lean_dec_ref_known(v___x_1538_, 1);
v___x_1540_ = l_Lean_mkConst(v_name_1482_, v___x_1480_);
v___x_1541_ = l_Lean_mkAppN(v___x_1540_, v___x_1481_);
v___x_1542_ = l_Lean_mkAppN(v___x_1541_, v___x_1483_);
v___x_1543_ = l_Lean_mkAppN(v___x_1542_, v_fields_1485_);
v___x_1544_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg(v_a_1539_, v___x_1543_, v___y_1516_);
lean_dec_ref(v___x_1544_);
v___x_1545_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__4___redArg(v_a_1523_, v___y_1516_);
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
lean_inc(v_a_1546_);
lean_dec_ref(v___x_1545_);
v___x_1547_ = 1;
v___x_1548_ = l_Lean_Meta_mkLambdaFVars(v_fields_1485_, v_a_1546_, v___x_1531_, v___x_1532_, v___x_1531_, v___x_1532_, v___x_1547_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v_a_1549_; lean_object* v___x_1550_; 
v_a_1549_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_a_1549_);
lean_dec_ref_known(v___x_1548_, 1);
v___x_1550_ = l_Lean_Meta_mkLambdaFVars(v___x_1481_, v_a_1549_, v___x_1531_, v___x_1532_, v___x_1531_, v___x_1532_, v___x_1547_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
return v___x_1550_;
}
else
{
return v___x_1548_;
}
}
else
{
lean_object* v_a_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1558_; 
lean_dec(v_a_1523_);
lean_dec(v_name_1482_);
lean_dec(v___x_1480_);
v_a_1551_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1553_ = v___x_1538_;
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_a_1551_);
lean_dec(v___x_1538_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1556_; 
if (v_isShared_1554_ == 0)
{
v___x_1556_ = v___x_1553_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v_a_1551_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
}
else
{
lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1566_; 
lean_dec(v___x_1524_);
lean_dec(v_a_1523_);
lean_dec(v_name_1482_);
lean_dec(v___x_1480_);
v_a_1559_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1561_ = v___x_1534_;
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v___x_1534_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1564_; 
if (v_isShared_1562_ == 0)
{
v___x_1564_ = v___x_1561_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_a_1559_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
}
}
else
{
lean_dec_ref(v___x_1528_);
lean_dec(v___x_1524_);
lean_dec(v_a_1523_);
lean_dec(v_name_1482_);
lean_dec(v___x_1480_);
return v___x_1529_;
}
}
else
{
lean_dec(v___x_1507_);
lean_dec(v_name_1482_);
lean_dec(v___x_1480_);
return v___x_1522_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___boxed(lean_object** _args){
lean_object* v_numParams_1586_ = _args[0];
lean_object* v___x_1587_ = _args[1];
lean_object* v_name_1588_ = _args[2];
lean_object* v___x_1589_ = _args[3];
lean_object* v___x_1590_ = _args[4];
lean_object* v_name_1591_ = _args[5];
lean_object* v___x_1592_ = _args[6];
lean_object* v_cls_1593_ = _args[7];
lean_object* v_fields_1594_ = _args[8];
lean_object* v_bodyExpr_1595_ = _args[9];
lean_object* v___y_1596_ = _args[10];
lean_object* v___y_1597_ = _args[11];
lean_object* v___y_1598_ = _args[12];
lean_object* v___y_1599_ = _args[13];
lean_object* v___y_1600_ = _args[14];
lean_object* v___y_1601_ = _args[15];
lean_object* v___y_1602_ = _args[16];
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1(v_numParams_1586_, v___x_1587_, v_name_1588_, v___x_1589_, v___x_1590_, v_name_1591_, v___x_1592_, v_cls_1593_, v_fields_1594_, v_bodyExpr_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v_fields_1594_);
lean_dec_ref(v___x_1592_);
lean_dec_ref(v___x_1590_);
lean_dec(v___x_1587_);
lean_dec(v_numParams_1586_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(lean_object* v___x_1604_, size_t v_sz_1605_, size_t v_i_1606_, lean_object* v_bs_1607_){
_start:
{
uint8_t v___x_1608_; 
v___x_1608_ = lean_usize_dec_lt(v_i_1606_, v_sz_1605_);
if (v___x_1608_ == 0)
{
return v_bs_1607_;
}
else
{
lean_object* v_v_1609_; lean_object* v___x_1610_; lean_object* v_bs_x27_1611_; lean_object* v___x_1612_; size_t v___x_1613_; size_t v___x_1614_; lean_object* v___x_1615_; 
v_v_1609_ = lean_array_uget(v_bs_1607_, v_i_1606_);
v___x_1610_ = lean_unsigned_to_nat(0u);
v_bs_x27_1611_ = lean_array_uset(v_bs_1607_, v_i_1606_, v___x_1610_);
v___x_1612_ = l_Lean_mkAppN(v_v_1609_, v___x_1604_);
v___x_1613_ = ((size_t)1ULL);
v___x_1614_ = lean_usize_add(v_i_1606_, v___x_1613_);
v___x_1615_ = lean_array_uset(v_bs_x27_1611_, v_i_1606_, v___x_1612_);
v_i_1606_ = v___x_1614_;
v_bs_1607_ = v___x_1615_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2___boxed(lean_object* v___x_1617_, lean_object* v_sz_1618_, lean_object* v_i_1619_, lean_object* v_bs_1620_){
_start:
{
size_t v_sz_boxed_1621_; size_t v_i_boxed_1622_; lean_object* v_res_1623_; 
v_sz_boxed_1621_ = lean_unbox_usize(v_sz_1618_);
lean_dec(v_sz_1618_);
v_i_boxed_1622_ = lean_unbox_usize(v_i_1619_);
lean_dec(v_i_1619_);
v_res_1623_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(v___x_1617_, v_sz_boxed_1621_, v_i_boxed_1622_, v_bs_1620_);
lean_dec_ref(v___x_1617_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1(lean_object* v___x_1624_, size_t v_sz_1625_, size_t v_i_1626_, lean_object* v_bs_1627_){
_start:
{
uint8_t v___x_1628_; 
v___x_1628_ = lean_usize_dec_lt(v_i_1626_, v_sz_1625_);
if (v___x_1628_ == 0)
{
lean_dec(v___x_1624_);
return v_bs_1627_;
}
else
{
lean_object* v_v_1629_; lean_object* v___x_1630_; lean_object* v_bs_x27_1631_; lean_object* v___x_1632_; size_t v___x_1633_; size_t v___x_1634_; lean_object* v___x_1635_; 
v_v_1629_ = lean_array_uget(v_bs_1627_, v_i_1626_);
v___x_1630_ = lean_unsigned_to_nat(0u);
v_bs_x27_1631_ = lean_array_uset(v_bs_1627_, v_i_1626_, v___x_1630_);
lean_inc(v___x_1624_);
v___x_1632_ = l_Lean_mkConst(v_v_1629_, v___x_1624_);
v___x_1633_ = ((size_t)1ULL);
v___x_1634_ = lean_usize_add(v_i_1626_, v___x_1633_);
v___x_1635_ = lean_array_uset(v_bs_x27_1631_, v_i_1626_, v___x_1632_);
v_i_1626_ = v___x_1634_;
v_bs_1627_ = v___x_1635_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1___boxed(lean_object* v___x_1637_, lean_object* v_sz_1638_, lean_object* v_i_1639_, lean_object* v_bs_1640_){
_start:
{
size_t v_sz_boxed_1641_; size_t v_i_boxed_1642_; lean_object* v_res_1643_; 
v_sz_boxed_1641_ = lean_unbox_usize(v_sz_1638_);
lean_dec(v_sz_1638_);
v_i_boxed_1642_ = lean_unbox_usize(v_i_1639_);
lean_dec(v_i_1639_);
v_res_1643_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1(v___x_1637_, v_sz_boxed_1641_, v_i_boxed_1642_, v_bs_1640_);
return v_res_1643_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1645_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__0));
v___x_1646_ = l_Lean_stringToMessageData(v___x_1645_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2(lean_object* v___x_1647_, lean_object* v_numParams_1648_, lean_object* v___x_1649_, lean_object* v___x_1650_, size_t v___x_1651_, lean_object* v___x_1652_, lean_object* v_name_1653_, lean_object* v_name_1654_, lean_object* v_cls_1655_, lean_object* v_levelParams_1656_, lean_object* v_ctorSyntax_1657_, lean_object* v___f_1658_, lean_object* v_args_1659_, lean_object* v_body_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; size_t v_sz_1671_; lean_object* v___x_1672_; size_t v_sz_1673_; lean_object* v___x_1674_; lean_object* v___f_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; uint8_t v___x_1678_; lean_object* v___x_1679_; 
lean_inc_n(v_numParams_1648_, 2);
v___x_1668_ = l_Array_extract___redArg(v_args_1659_, v___x_1647_, v_numParams_1648_);
v___x_1669_ = lean_array_get_size(v_args_1659_);
v___x_1670_ = l_Array_toSubarray___redArg(v_args_1659_, v_numParams_1648_, v___x_1669_);
v_sz_1671_ = lean_array_size(v___x_1649_);
lean_inc(v___x_1650_);
v___x_1672_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__1(v___x_1650_, v_sz_1671_, v___x_1651_, v___x_1649_);
v_sz_1673_ = lean_array_size(v___x_1672_);
v___x_1674_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(v___x_1668_, v_sz_1673_, v___x_1651_, v___x_1672_);
lean_inc(v_cls_1655_);
lean_inc_ref(v___x_1674_);
lean_inc(v_name_1654_);
v___f_1675_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___boxed), 17, 8);
lean_closure_set(v___f_1675_, 0, v_numParams_1648_);
lean_closure_set(v___f_1675_, 1, v___x_1652_);
lean_closure_set(v___f_1675_, 2, v_name_1653_);
lean_closure_set(v___f_1675_, 3, v___x_1650_);
lean_closure_set(v___f_1675_, 4, v___x_1668_);
lean_closure_set(v___f_1675_, 5, v_name_1654_);
lean_closure_set(v___f_1675_, 6, v___x_1674_);
lean_closure_set(v___f_1675_, 7, v_cls_1655_);
v___x_1676_ = l_Subarray_copy___redArg(v___x_1670_);
v___x_1677_ = l_Lean_Expr_replaceFVars(v_body_1660_, v___x_1676_, v___x_1674_);
lean_dec_ref(v___x_1674_);
lean_dec_ref(v___x_1676_);
v___x_1678_ = 0;
v___x_1679_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(v___x_1677_, v___f_1675_, v___x_1678_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v_a_1680_; lean_object* v___x_1681_; 
v_a_1680_ = lean_ctor_get(v___x_1679_, 0);
lean_inc_n(v_a_1680_, 2);
lean_dec_ref_known(v___x_1679_, 1);
lean_inc(v___y_1666_);
lean_inc_ref(v___y_1665_);
lean_inc(v___y_1664_);
lean_inc_ref(v___y_1663_);
v___x_1681_ = lean_infer_type(v_a_1680_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v_a_1682_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___x_1706_; 
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_a_1682_);
lean_dec_ref_known(v___x_1681_, 1);
lean_inc(v___y_1666_);
lean_inc_ref(v___y_1665_);
lean_inc(v___y_1664_);
lean_inc_ref(v___y_1663_);
lean_inc(v___y_1662_);
lean_inc_ref(v___y_1661_);
v___x_1706_ = lean_apply_7(v___f_1658_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, lean_box(0));
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; uint8_t v___x_1708_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
lean_inc(v_a_1707_);
lean_dec_ref_known(v___x_1706_, 1);
v___x_1708_ = lean_unbox(v_a_1707_);
lean_dec(v_a_1707_);
if (v___x_1708_ == 0)
{
lean_dec(v_cls_1655_);
v___y_1684_ = v___y_1661_;
v___y_1685_ = v___y_1662_;
v___y_1686_ = v___y_1663_;
v___y_1687_ = v___y_1664_;
v___y_1688_ = v___y_1665_;
v___y_1689_ = v___y_1666_;
goto v___jp_1683_;
}
else
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1709_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___closed__1);
lean_inc(v_a_1682_);
v___x_1710_ = l_Lean_MessageData_ofExpr(v_a_1682_);
v___x_1711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1709_);
lean_ctor_set(v___x_1711_, 1, v___x_1710_);
v___x_1712_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_1655_, v___x_1711_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_dec_ref_known(v___x_1712_, 1);
v___y_1684_ = v___y_1661_;
v___y_1685_ = v___y_1662_;
v___y_1686_ = v___y_1663_;
v___y_1687_ = v___y_1664_;
v___y_1688_ = v___y_1665_;
v___y_1689_ = v___y_1666_;
goto v___jp_1683_;
}
else
{
lean_dec(v_a_1682_);
lean_dec(v_a_1680_);
lean_dec(v_ctorSyntax_1657_);
lean_dec(v_levelParams_1656_);
lean_dec(v_name_1654_);
return v___x_1712_;
}
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
lean_dec(v_a_1682_);
lean_dec(v_a_1680_);
lean_dec(v_ctorSyntax_1657_);
lean_dec(v_levelParams_1656_);
lean_dec(v_cls_1655_);
lean_dec(v_name_1654_);
v_a_1713_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1706_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1706_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
v___jp_1683_:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1705_; 
v___x_1690_ = l_Lean_Elab_Command_removeFunctorPostfixInCtor(v_name_1654_);
v___x_1691_ = lean_box(0);
lean_inc(v_a_1680_);
v___x_1692_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__7___redArg(v___x_1690_, v_levelParams_1656_, v_a_1682_, v_a_1680_, v___x_1691_, v___y_1689_);
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1705_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1705_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set_tag(v___x_1695_, 1);
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
lean_object* v___x_1699_; 
v___x_1699_ = l_Lean_addDecl(v___x_1698_, v___x_1678_, v___y_1688_, v___y_1689_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v___x_1700_; lean_object* v___x_1701_; uint8_t v___x_1702_; lean_object* v___x_1703_; 
lean_dec_ref_known(v___x_1699_, 1);
v___x_1700_ = lean_box(0);
v___x_1701_ = lean_box(0);
v___x_1702_ = 1;
v___x_1703_ = l_Lean_Elab_Term_addTermInfo_x27(v_ctorSyntax_1657_, v_a_1680_, v___x_1700_, v___x_1700_, v___x_1701_, v___x_1702_, v___x_1678_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_);
return v___x_1703_;
}
else
{
lean_dec(v_a_1680_);
lean_dec(v_ctorSyntax_1657_);
return v___x_1699_;
}
}
}
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec(v_a_1680_);
lean_dec_ref(v___f_1658_);
lean_dec(v_ctorSyntax_1657_);
lean_dec(v_levelParams_1656_);
lean_dec(v_cls_1655_);
lean_dec(v_name_1654_);
v_a_1721_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1681_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1681_);
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
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
lean_dec_ref(v___f_1658_);
lean_dec(v_ctorSyntax_1657_);
lean_dec(v_levelParams_1656_);
lean_dec(v_cls_1655_);
lean_dec(v_name_1654_);
v_a_1729_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1679_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1679_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___boxed(lean_object** _args){
lean_object* v___x_1737_ = _args[0];
lean_object* v_numParams_1738_ = _args[1];
lean_object* v___x_1739_ = _args[2];
lean_object* v___x_1740_ = _args[3];
lean_object* v___x_1741_ = _args[4];
lean_object* v___x_1742_ = _args[5];
lean_object* v_name_1743_ = _args[6];
lean_object* v_name_1744_ = _args[7];
lean_object* v_cls_1745_ = _args[8];
lean_object* v_levelParams_1746_ = _args[9];
lean_object* v_ctorSyntax_1747_ = _args[10];
lean_object* v___f_1748_ = _args[11];
lean_object* v_args_1749_ = _args[12];
lean_object* v_body_1750_ = _args[13];
lean_object* v___y_1751_ = _args[14];
lean_object* v___y_1752_ = _args[15];
lean_object* v___y_1753_ = _args[16];
lean_object* v___y_1754_ = _args[17];
lean_object* v___y_1755_ = _args[18];
lean_object* v___y_1756_ = _args[19];
lean_object* v___y_1757_ = _args[20];
_start:
{
size_t v___x_8891__boxed_1758_; lean_object* v_res_1759_; 
v___x_8891__boxed_1758_ = lean_unbox_usize(v___x_1741_);
lean_dec(v___x_1741_);
v_res_1759_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2(v___x_1737_, v_numParams_1738_, v___x_1739_, v___x_1740_, v___x_8891__boxed_1758_, v___x_1742_, v_name_1743_, v_name_1744_, v_cls_1745_, v_levelParams_1746_, v_ctorSyntax_1747_, v___f_1748_, v_args_1749_, v_body_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
lean_dec(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec_ref(v_body_1750_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0(size_t v_sz_1760_, size_t v_i_1761_, lean_object* v_bs_1762_){
_start:
{
uint8_t v___x_1763_; 
v___x_1763_ = lean_usize_dec_lt(v_i_1761_, v_sz_1760_);
if (v___x_1763_ == 0)
{
return v_bs_1762_;
}
else
{
lean_object* v_v_1764_; lean_object* v_toConstantVal_1765_; lean_object* v_name_1766_; lean_object* v___x_1767_; lean_object* v_bs_x27_1768_; lean_object* v___x_1769_; size_t v___x_1770_; size_t v___x_1771_; lean_object* v___x_1772_; 
v_v_1764_ = lean_array_uget_borrowed(v_bs_1762_, v_i_1761_);
v_toConstantVal_1765_ = lean_ctor_get(v_v_1764_, 0);
v_name_1766_ = lean_ctor_get(v_toConstantVal_1765_, 0);
lean_inc(v_name_1766_);
v___x_1767_ = lean_unsigned_to_nat(0u);
v_bs_x27_1768_ = lean_array_uset(v_bs_1762_, v_i_1761_, v___x_1767_);
v___x_1769_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_1766_);
v___x_1770_ = ((size_t)1ULL);
v___x_1771_ = lean_usize_add(v_i_1761_, v___x_1770_);
v___x_1772_ = lean_array_uset(v_bs_x27_1768_, v_i_1761_, v___x_1769_);
v_i_1761_ = v___x_1771_;
v_bs_1762_ = v___x_1772_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0___boxed(lean_object* v_sz_1774_, lean_object* v_i_1775_, lean_object* v_bs_1776_){
_start:
{
size_t v_sz_boxed_1777_; size_t v_i_boxed_1778_; lean_object* v_res_1779_; 
v_sz_boxed_1777_ = lean_unbox_usize(v_sz_1774_);
lean_dec(v_sz_1774_);
v_i_boxed_1778_ = lean_unbox_usize(v_i_1775_);
lean_dec(v_i_1775_);
v_res_1779_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0(v_sz_boxed_1777_, v_i_boxed_1778_, v_bs_1776_);
return v_res_1779_;
}
}
static lean_object* _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2(void){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1783_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__1));
v___x_1784_ = l_Lean_stringToMessageData(v___x_1783_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor(lean_object* v_infos_1787_, lean_object* v_ctorSyntax_1788_, lean_object* v_numParams_1789_, lean_object* v_name_1790_, lean_object* v_ctor_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v___x_1799_; lean_object* v_cls_1800_; lean_object* v___f_1801_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v___y_1805_; lean_object* v___y_1806_; lean_object* v___y_1807_; lean_object* v___y_1808_; lean_object* v___x_1829_; lean_object* v_a_1830_; uint8_t v___x_1831_; 
v___x_1799_ = l_Lean_instInhabitedInductiveVal_default;
v_cls_1800_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___f_1801_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__0));
v___x_1829_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__0(v_cls_1800_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_);
v_a_1830_ = lean_ctor_get(v___x_1829_, 0);
lean_inc(v_a_1830_);
lean_dec_ref(v___x_1829_);
v___x_1831_ = lean_unbox(v_a_1830_);
lean_dec(v_a_1830_);
if (v___x_1831_ == 0)
{
v___y_1803_ = v_a_1792_;
v___y_1804_ = v_a_1793_;
v___y_1805_ = v_a_1794_;
v___y_1806_ = v_a_1795_;
v___y_1807_ = v_a_1796_;
v___y_1808_ = v_a_1797_;
goto v___jp_1802_;
}
else
{
lean_object* v_toConstantVal_1832_; lean_object* v_name_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v_toConstantVal_1832_ = lean_ctor_get(v_ctor_1791_, 0);
v_name_1833_ = lean_ctor_get(v_toConstantVal_1832_, 0);
v___x_1834_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___closed__2);
lean_inc(v_name_1833_);
v___x_1835_ = l_Lean_Elab_Command_removeFunctorPostfixInCtor(v_name_1833_);
v___x_1836_ = l_Lean_MessageData_ofName(v___x_1835_);
v___x_1837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1834_);
lean_ctor_set(v___x_1837_, 1, v___x_1836_);
v___x_1838_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_1800_, v___x_1837_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_dec_ref_known(v___x_1838_, 1);
v___y_1803_ = v_a_1792_;
v___y_1804_ = v_a_1793_;
v___y_1805_ = v_a_1794_;
v___y_1806_ = v_a_1795_;
v___y_1807_ = v_a_1796_;
v___y_1808_ = v_a_1797_;
goto v___jp_1802_;
}
else
{
lean_dec_ref(v_ctor_1791_);
lean_dec(v_name_1790_);
lean_dec(v_numParams_1789_);
lean_dec(v_ctorSyntax_1788_);
lean_dec_ref(v_infos_1787_);
return v___x_1838_;
}
}
v___jp_1802_:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v_toConstantVal_1811_; lean_object* v_toConstantVal_1812_; lean_object* v_levelParams_1813_; lean_object* v_name_1814_; lean_object* v_levelParams_1815_; lean_object* v_type_1816_; lean_object* v___x_1817_; size_t v_sz_1818_; size_t v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___f_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; uint8_t v___x_1827_; lean_object* v___x_1828_; 
v___x_1809_ = lean_unsigned_to_nat(0u);
v___x_1810_ = lean_array_get_borrowed(v___x_1799_, v_infos_1787_, v___x_1809_);
v_toConstantVal_1811_ = lean_ctor_get(v___x_1810_, 0);
v_toConstantVal_1812_ = lean_ctor_get(v_ctor_1791_, 0);
lean_inc_ref(v_toConstantVal_1812_);
lean_dec_ref(v_ctor_1791_);
v_levelParams_1813_ = lean_ctor_get(v_toConstantVal_1811_, 1);
lean_inc(v_levelParams_1813_);
v_name_1814_ = lean_ctor_get(v_toConstantVal_1812_, 0);
lean_inc(v_name_1814_);
v_levelParams_1815_ = lean_ctor_get(v_toConstantVal_1812_, 1);
lean_inc(v_levelParams_1815_);
v_type_1816_ = lean_ctor_get(v_toConstantVal_1812_, 2);
lean_inc_ref(v_type_1816_);
lean_dec_ref(v_toConstantVal_1812_);
v___x_1817_ = lean_array_get_size(v_infos_1787_);
v_sz_1818_ = lean_array_size(v_infos_1787_);
v___x_1819_ = ((size_t)0ULL);
v___x_1820_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__0(v_sz_1818_, v___x_1819_, v_infos_1787_);
v___x_1821_ = lean_box(0);
v___x_1822_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(v_levelParams_1813_, v___x_1821_);
v___x_1823_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1));
lean_inc(v_numParams_1789_);
v___f_1824_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__2___boxed), 21, 12);
lean_closure_set(v___f_1824_, 0, v___x_1809_);
lean_closure_set(v___f_1824_, 1, v_numParams_1789_);
lean_closure_set(v___f_1824_, 2, v___x_1820_);
lean_closure_set(v___f_1824_, 3, v___x_1822_);
lean_closure_set(v___f_1824_, 4, v___x_1823_);
lean_closure_set(v___f_1824_, 5, v___x_1817_);
lean_closure_set(v___f_1824_, 6, v_name_1790_);
lean_closure_set(v___f_1824_, 7, v_name_1814_);
lean_closure_set(v___f_1824_, 8, v_cls_1800_);
lean_closure_set(v___f_1824_, 9, v_levelParams_1815_);
lean_closure_set(v___f_1824_, 10, v_ctorSyntax_1788_);
lean_closure_set(v___f_1824_, 11, v___f_1801_);
v___x_1825_ = lean_nat_add(v_numParams_1789_, v___x_1817_);
lean_dec(v_numParams_1789_);
v___x_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
v___x_1827_ = 0;
v___x_1828_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(v_type_1816_, v___x_1826_, v___f_1824_, v___x_1827_, v___x_1827_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_);
return v___x_1828_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed(lean_object* v_infos_1839_, lean_object* v_ctorSyntax_1840_, lean_object* v_numParams_1841_, lean_object* v_name_1842_, lean_object* v_ctor_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_){
_start:
{
lean_object* v_res_1851_; 
v_res_1851_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor(v_infos_1839_, v_ctorSyntax_1840_, v_numParams_1841_, v_name_1842_, v_ctor_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_);
lean_dec(v_a_1849_);
lean_dec_ref(v_a_1848_);
lean_dec(v_a_1847_);
lean_dec_ref(v_a_1846_);
lean_dec(v_a_1845_);
lean_dec_ref(v_a_1844_);
return v_res_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3(lean_object* v_mvarId_1852_, lean_object* v_val_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
lean_object* v___x_1861_; 
v___x_1861_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___redArg(v_mvarId_1852_, v_val_1853_, v___y_1857_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3___boxed(lean_object* v_mvarId_1862_, lean_object* v_val_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__3(v_mvarId_1862_, v_val_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
lean_dec(v___y_1867_);
lean_dec_ref(v___y_1866_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5(lean_object* v_cls_1872_, lean_object* v_msg_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_1872_, v_msg_1873_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___boxed(lean_object* v_cls_1882_, lean_object* v_msg_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_){
_start:
{
lean_object* v_res_1891_; 
v_res_1891_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5(v_cls_1882_, v_msg_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
return v_res_1891_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1892_; 
v___x_1892_ = l_instMonadEIO___redArg();
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1(lean_object* v_msg_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_){
_start:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v_toApplicative_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_2000_; 
v___x_1907_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__0);
v___x_1908_ = l_StateRefT_x27_instMonad___redArg(v___x_1907_);
v_toApplicative_1909_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_2000_ == 0)
{
lean_object* v_unused_2001_; 
v_unused_2001_ = lean_ctor_get(v___x_1908_, 1);
lean_dec(v_unused_2001_);
v___x_1911_ = v___x_1908_;
v_isShared_1912_ = v_isSharedCheck_2000_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_toApplicative_1909_);
lean_dec(v___x_1908_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_2000_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v_toFunctor_1913_; lean_object* v_toSeq_1914_; lean_object* v_toSeqLeft_1915_; lean_object* v_toSeqRight_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1998_; 
v_toFunctor_1913_ = lean_ctor_get(v_toApplicative_1909_, 0);
v_toSeq_1914_ = lean_ctor_get(v_toApplicative_1909_, 2);
v_toSeqLeft_1915_ = lean_ctor_get(v_toApplicative_1909_, 3);
v_toSeqRight_1916_ = lean_ctor_get(v_toApplicative_1909_, 4);
v_isSharedCheck_1998_ = !lean_is_exclusive(v_toApplicative_1909_);
if (v_isSharedCheck_1998_ == 0)
{
lean_object* v_unused_1999_; 
v_unused_1999_ = lean_ctor_get(v_toApplicative_1909_, 1);
lean_dec(v_unused_1999_);
v___x_1918_ = v_toApplicative_1909_;
v_isShared_1919_ = v_isSharedCheck_1998_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_toSeqRight_1916_);
lean_inc(v_toSeqLeft_1915_);
lean_inc(v_toSeq_1914_);
lean_inc(v_toFunctor_1913_);
lean_dec(v_toApplicative_1909_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1998_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___f_1920_; lean_object* v___f_1921_; lean_object* v___f_1922_; lean_object* v___f_1923_; lean_object* v___x_1924_; lean_object* v___f_1925_; lean_object* v___f_1926_; lean_object* v___f_1927_; lean_object* v___x_1929_; 
v___f_1920_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__1));
v___f_1921_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_1913_);
v___f_1922_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1922_, 0, v_toFunctor_1913_);
v___f_1923_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1923_, 0, v_toFunctor_1913_);
v___x_1924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___f_1922_);
lean_ctor_set(v___x_1924_, 1, v___f_1923_);
v___f_1925_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1925_, 0, v_toSeqRight_1916_);
v___f_1926_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1926_, 0, v_toSeqLeft_1915_);
v___f_1927_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1927_, 0, v_toSeq_1914_);
if (v_isShared_1919_ == 0)
{
lean_ctor_set(v___x_1918_, 4, v___f_1925_);
lean_ctor_set(v___x_1918_, 3, v___f_1926_);
lean_ctor_set(v___x_1918_, 2, v___f_1927_);
lean_ctor_set(v___x_1918_, 1, v___f_1920_);
lean_ctor_set(v___x_1918_, 0, v___x_1924_);
v___x_1929_ = v___x_1918_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v___x_1924_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v___f_1920_);
lean_ctor_set(v_reuseFailAlloc_1997_, 2, v___f_1927_);
lean_ctor_set(v_reuseFailAlloc_1997_, 3, v___f_1926_);
lean_ctor_set(v_reuseFailAlloc_1997_, 4, v___f_1925_);
v___x_1929_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1931_; 
if (v_isShared_1912_ == 0)
{
lean_ctor_set(v___x_1911_, 1, v___f_1921_);
lean_ctor_set(v___x_1911_, 0, v___x_1929_);
v___x_1931_ = v___x_1911_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v___x_1929_);
lean_ctor_set(v_reuseFailAlloc_1996_, 1, v___f_1921_);
v___x_1931_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
lean_object* v___x_1932_; lean_object* v_toApplicative_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1994_; 
v___x_1932_ = l_StateRefT_x27_instMonad___redArg(v___x_1931_);
v_toApplicative_1933_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1994_ == 0)
{
lean_object* v_unused_1995_; 
v_unused_1995_ = lean_ctor_get(v___x_1932_, 1);
lean_dec(v_unused_1995_);
v___x_1935_ = v___x_1932_;
v_isShared_1936_ = v_isSharedCheck_1994_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_toApplicative_1933_);
lean_dec(v___x_1932_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1994_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v_toFunctor_1937_; lean_object* v_toSeq_1938_; lean_object* v_toSeqLeft_1939_; lean_object* v_toSeqRight_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1992_; 
v_toFunctor_1937_ = lean_ctor_get(v_toApplicative_1933_, 0);
v_toSeq_1938_ = lean_ctor_get(v_toApplicative_1933_, 2);
v_toSeqLeft_1939_ = lean_ctor_get(v_toApplicative_1933_, 3);
v_toSeqRight_1940_ = lean_ctor_get(v_toApplicative_1933_, 4);
v_isSharedCheck_1992_ = !lean_is_exclusive(v_toApplicative_1933_);
if (v_isSharedCheck_1992_ == 0)
{
lean_object* v_unused_1993_; 
v_unused_1993_ = lean_ctor_get(v_toApplicative_1933_, 1);
lean_dec(v_unused_1993_);
v___x_1942_ = v_toApplicative_1933_;
v_isShared_1943_ = v_isSharedCheck_1992_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_toSeqRight_1940_);
lean_inc(v_toSeqLeft_1939_);
lean_inc(v_toSeq_1938_);
lean_inc(v_toFunctor_1937_);
lean_dec(v_toApplicative_1933_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1992_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___f_1944_; lean_object* v___f_1945_; lean_object* v___f_1946_; lean_object* v___f_1947_; lean_object* v___x_1948_; lean_object* v___f_1949_; lean_object* v___f_1950_; lean_object* v___f_1951_; lean_object* v___x_1953_; 
v___f_1944_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__3));
v___f_1945_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_1937_);
v___f_1946_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1946_, 0, v_toFunctor_1937_);
v___f_1947_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1947_, 0, v_toFunctor_1937_);
v___x_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___f_1946_);
lean_ctor_set(v___x_1948_, 1, v___f_1947_);
v___f_1949_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1949_, 0, v_toSeqRight_1940_);
v___f_1950_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1950_, 0, v_toSeqLeft_1939_);
v___f_1951_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1951_, 0, v_toSeq_1938_);
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 4, v___f_1949_);
lean_ctor_set(v___x_1942_, 3, v___f_1950_);
lean_ctor_set(v___x_1942_, 2, v___f_1951_);
lean_ctor_set(v___x_1942_, 1, v___f_1944_);
lean_ctor_set(v___x_1942_, 0, v___x_1948_);
v___x_1953_ = v___x_1942_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1948_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v___f_1944_);
lean_ctor_set(v_reuseFailAlloc_1991_, 2, v___f_1951_);
lean_ctor_set(v_reuseFailAlloc_1991_, 3, v___f_1950_);
lean_ctor_set(v_reuseFailAlloc_1991_, 4, v___f_1949_);
v___x_1953_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
lean_object* v___x_1955_; 
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 1, v___f_1945_);
lean_ctor_set(v___x_1935_, 0, v___x_1953_);
v___x_1955_ = v___x_1935_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1953_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v___f_1945_);
v___x_1955_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1956_; lean_object* v_toApplicative_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1988_; 
v___x_1956_ = l_StateRefT_x27_instMonad___redArg(v___x_1955_);
v_toApplicative_1957_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_1988_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1988_ == 0)
{
lean_object* v_unused_1989_; 
v_unused_1989_ = lean_ctor_get(v___x_1956_, 1);
lean_dec(v_unused_1989_);
v___x_1959_ = v___x_1956_;
v_isShared_1960_ = v_isSharedCheck_1988_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_toApplicative_1957_);
lean_dec(v___x_1956_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1988_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v_toFunctor_1961_; lean_object* v_toSeq_1962_; lean_object* v_toSeqLeft_1963_; lean_object* v_toSeqRight_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1986_; 
v_toFunctor_1961_ = lean_ctor_get(v_toApplicative_1957_, 0);
v_toSeq_1962_ = lean_ctor_get(v_toApplicative_1957_, 2);
v_toSeqLeft_1963_ = lean_ctor_get(v_toApplicative_1957_, 3);
v_toSeqRight_1964_ = lean_ctor_get(v_toApplicative_1957_, 4);
v_isSharedCheck_1986_ = !lean_is_exclusive(v_toApplicative_1957_);
if (v_isSharedCheck_1986_ == 0)
{
lean_object* v_unused_1987_; 
v_unused_1987_ = lean_ctor_get(v_toApplicative_1957_, 1);
lean_dec(v_unused_1987_);
v___x_1966_ = v_toApplicative_1957_;
v_isShared_1967_ = v_isSharedCheck_1986_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_toSeqRight_1964_);
lean_inc(v_toSeqLeft_1963_);
lean_inc(v_toSeq_1962_);
lean_inc(v_toFunctor_1961_);
lean_dec(v_toApplicative_1957_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1986_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___f_1968_; lean_object* v___f_1969_; lean_object* v___f_1970_; lean_object* v___f_1971_; lean_object* v___x_1972_; lean_object* v___f_1973_; lean_object* v___f_1974_; lean_object* v___f_1975_; lean_object* v___x_1977_; 
v___f_1968_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__5));
v___f_1969_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___closed__6));
lean_inc_ref(v_toFunctor_1961_);
v___f_1970_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1970_, 0, v_toFunctor_1961_);
v___f_1971_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1971_, 0, v_toFunctor_1961_);
v___x_1972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1972_, 0, v___f_1970_);
lean_ctor_set(v___x_1972_, 1, v___f_1971_);
v___f_1973_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1973_, 0, v_toSeqRight_1964_);
v___f_1974_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1974_, 0, v_toSeqLeft_1963_);
v___f_1975_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1975_, 0, v_toSeq_1962_);
if (v_isShared_1967_ == 0)
{
lean_ctor_set(v___x_1966_, 4, v___f_1973_);
lean_ctor_set(v___x_1966_, 3, v___f_1974_);
lean_ctor_set(v___x_1966_, 2, v___f_1975_);
lean_ctor_set(v___x_1966_, 1, v___f_1968_);
lean_ctor_set(v___x_1966_, 0, v___x_1972_);
v___x_1977_ = v___x_1966_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v___x_1972_);
lean_ctor_set(v_reuseFailAlloc_1985_, 1, v___f_1968_);
lean_ctor_set(v_reuseFailAlloc_1985_, 2, v___f_1975_);
lean_ctor_set(v_reuseFailAlloc_1985_, 3, v___f_1974_);
lean_ctor_set(v_reuseFailAlloc_1985_, 4, v___f_1973_);
v___x_1977_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
lean_object* v___x_1979_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v___f_1969_);
lean_ctor_set(v___x_1959_, 0, v___x_1977_);
v___x_1979_ = v___x_1959_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v___x_1977_);
lean_ctor_set(v_reuseFailAlloc_1984_, 1, v___f_1969_);
v___x_1979_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_3775__overap_1982_; lean_object* v___x_1983_; 
v___x_1980_ = lean_box(0);
v___x_1981_ = l_instInhabitedOfMonad___redArg(v___x_1979_, v___x_1980_);
v___x_3775__overap_1982_ = lean_panic_fn_borrowed(v___x_1981_, v_msg_1899_);
lean_dec(v___x_1981_);
lean_inc(v___y_1905_);
lean_inc_ref(v___y_1904_);
lean_inc(v___y_1903_);
lean_inc_ref(v___y_1902_);
lean_inc(v___y_1901_);
lean_inc_ref(v___y_1900_);
v___x_1983_ = lean_apply_7(v___x_3775__overap_1982_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, lean_box(0));
return v___x_1983_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1___boxed(lean_object* v_msg_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1(v_msg_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
lean_dec(v___y_2004_);
lean_dec_ref(v___y_2003_);
return v_res_2010_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5(lean_object* v_opts_2011_, lean_object* v_opt_2012_){
_start:
{
lean_object* v_name_2013_; lean_object* v_defValue_2014_; lean_object* v_map_2015_; lean_object* v___x_2016_; 
v_name_2013_ = lean_ctor_get(v_opt_2012_, 0);
v_defValue_2014_ = lean_ctor_get(v_opt_2012_, 1);
v_map_2015_ = lean_ctor_get(v_opts_2011_, 0);
v___x_2016_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2015_, v_name_2013_);
if (lean_obj_tag(v___x_2016_) == 0)
{
uint8_t v___x_2017_; 
v___x_2017_ = lean_unbox(v_defValue_2014_);
return v___x_2017_;
}
else
{
lean_object* v_val_2018_; 
v_val_2018_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_val_2018_);
lean_dec_ref_known(v___x_2016_, 1);
if (lean_obj_tag(v_val_2018_) == 1)
{
uint8_t v_v_2019_; 
v_v_2019_ = lean_ctor_get_uint8(v_val_2018_, 0);
lean_dec_ref_known(v_val_2018_, 0);
return v_v_2019_;
}
else
{
uint8_t v___x_2020_; 
lean_dec(v_val_2018_);
v___x_2020_ = lean_unbox(v_defValue_2014_);
return v___x_2020_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_opts_2021_, lean_object* v_opt_2022_){
_start:
{
uint8_t v_res_2023_; lean_object* v_r_2024_; 
v_res_2023_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5(v_opts_2021_, v_opt_2022_);
lean_dec_ref(v_opt_2022_);
lean_dec_ref(v_opts_2021_);
v_r_2024_ = lean_box(v_res_2023_);
return v_r_2024_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2025_ = lean_box(1);
v___x_2026_ = l_Lean_MessageData_ofFormat(v___x_2025_);
return v___x_2026_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__2));
v___x_2031_ = l_Lean_MessageData_ofFormat(v___x_2030_);
return v___x_2031_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6(lean_object* v_x_2032_, lean_object* v_x_2033_){
_start:
{
if (lean_obj_tag(v_x_2033_) == 0)
{
return v_x_2032_;
}
else
{
lean_object* v_head_2034_; lean_object* v_tail_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2057_; 
v_head_2034_ = lean_ctor_get(v_x_2033_, 0);
v_tail_2035_ = lean_ctor_get(v_x_2033_, 1);
v_isSharedCheck_2057_ = !lean_is_exclusive(v_x_2033_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2037_ = v_x_2033_;
v_isShared_2038_ = v_isSharedCheck_2057_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_tail_2035_);
lean_inc(v_head_2034_);
lean_dec(v_x_2033_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2057_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v_before_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2055_; 
v_before_2039_ = lean_ctor_get(v_head_2034_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v_head_2034_);
if (v_isSharedCheck_2055_ == 0)
{
lean_object* v_unused_2056_; 
v_unused_2056_ = lean_ctor_get(v_head_2034_, 1);
lean_dec(v_unused_2056_);
v___x_2041_ = v_head_2034_;
v_isShared_2042_ = v_isSharedCheck_2055_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_before_2039_);
lean_dec(v_head_2034_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2055_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2043_; lean_object* v___x_2045_; 
v___x_2043_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0);
if (v_isShared_2042_ == 0)
{
lean_ctor_set_tag(v___x_2041_, 7);
lean_ctor_set(v___x_2041_, 1, v___x_2043_);
lean_ctor_set(v___x_2041_, 0, v_x_2032_);
v___x_2045_ = v___x_2041_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_x_2032_);
lean_ctor_set(v_reuseFailAlloc_2054_, 1, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
lean_object* v___x_2046_; lean_object* v___x_2048_; 
v___x_2046_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__3);
if (v_isShared_2038_ == 0)
{
lean_ctor_set_tag(v___x_2037_, 7);
lean_ctor_set(v___x_2037_, 1, v___x_2046_);
lean_ctor_set(v___x_2037_, 0, v___x_2045_);
v___x_2048_ = v___x_2037_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2045_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v___x_2046_);
v___x_2048_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2049_ = l_Lean_MessageData_ofSyntax(v_before_2039_);
v___x_2050_ = l_Lean_indentD(v___x_2049_);
v___x_2051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2048_);
lean_ctor_set(v___x_2051_, 1, v___x_2050_);
v_x_2032_ = v___x_2051_;
v_x_2033_ = v_tail_2035_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__1));
v___x_2062_ = l_Lean_MessageData_ofFormat(v___x_2061_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg(lean_object* v_msgData_2063_, lean_object* v_macroStack_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; uint8_t v___x_2069_; 
v___x_2067_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2065_);
v___x_2068_ = l_Lean_Elab_pp_macroStack;
v___x_2069_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__5(v___x_2067_, v___x_2068_);
lean_dec_ref(v___x_2067_);
if (v___x_2069_ == 0)
{
lean_object* v___x_2070_; 
lean_dec(v_macroStack_2064_);
v___x_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2070_, 0, v_msgData_2063_);
return v___x_2070_;
}
else
{
if (lean_obj_tag(v_macroStack_2064_) == 0)
{
lean_object* v___x_2071_; 
v___x_2071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2071_, 0, v_msgData_2063_);
return v___x_2071_;
}
else
{
lean_object* v_head_2072_; lean_object* v_after_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2088_; 
v_head_2072_ = lean_ctor_get(v_macroStack_2064_, 0);
lean_inc(v_head_2072_);
v_after_2073_ = lean_ctor_get(v_head_2072_, 1);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_head_2072_);
if (v_isSharedCheck_2088_ == 0)
{
lean_object* v_unused_2089_; 
v_unused_2089_ = lean_ctor_get(v_head_2072_, 0);
lean_dec(v_unused_2089_);
v___x_2075_ = v_head_2072_;
v_isShared_2076_ = v_isSharedCheck_2088_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_after_2073_);
lean_dec(v_head_2072_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2088_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2077_; lean_object* v___x_2079_; 
v___x_2077_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6___closed__0);
if (v_isShared_2076_ == 0)
{
lean_ctor_set_tag(v___x_2075_, 7);
lean_ctor_set(v___x_2075_, 1, v___x_2077_);
lean_ctor_set(v___x_2075_, 0, v_msgData_2063_);
v___x_2079_ = v___x_2075_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_msgData_2063_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v___x_2077_);
v___x_2079_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v_msgData_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2080_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_2081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2079_);
lean_ctor_set(v___x_2081_, 1, v___x_2080_);
v___x_2082_ = l_Lean_MessageData_ofSyntax(v_after_2073_);
v___x_2083_ = l_Lean_indentD(v___x_2082_);
v_msgData_2084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2084_, 0, v___x_2081_);
lean_ctor_set(v_msgData_2084_, 1, v___x_2083_);
v___x_2085_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1_spec__6(v_msgData_2084_, v_macroStack_2064_);
v___x_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2085_);
return v___x_2086_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_2090_, lean_object* v_macroStack_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_){
_start:
{
lean_object* v_res_2094_; 
v_res_2094_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg(v_msgData_2090_, v_macroStack_2091_, v___y_2092_);
lean_dec_ref(v___y_2092_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(lean_object* v_msg_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v_ref_2103_; lean_object* v_macroStack_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v_a_2107_; lean_object* v___x_2108_; lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2117_; 
v_ref_2103_ = lean_ctor_get(v___y_2100_, 2);
v_macroStack_2104_ = lean_ctor_get(v___y_2096_, 1);
v___x_2105_ = l_Lean_Elab_getBetterRef(v_ref_2103_, v_macroStack_2104_);
v___x_2106_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1_spec__1(v_msg_2095_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_);
v_a_2107_ = lean_ctor_get(v___x_2106_, 0);
lean_inc(v_a_2107_);
lean_dec_ref(v___x_2106_);
lean_inc(v_macroStack_2104_);
v___x_2108_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg(v_a_2107_, v_macroStack_2104_, v___y_2100_);
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2111_ = v___x_2108_;
v_isShared_2112_ = v_isSharedCheck_2117_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2108_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2117_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2113_; lean_object* v___x_2115_; 
v___x_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2105_);
lean_ctor_set(v___x_2113_, 1, v_a_2109_);
if (v_isShared_2112_ == 0)
{
lean_ctor_set_tag(v___x_2111_, 1);
lean_ctor_set(v___x_2111_, 0, v___x_2113_);
v___x_2115_ = v___x_2111_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2113_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg___boxed(lean_object* v_msg_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(v_msg_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
lean_dec(v___y_2120_);
lean_dec_ref(v___y_2119_);
return v_res_2126_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2128_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__0));
v___x_2129_ = l_Lean_stringToMessageData(v___x_2128_);
return v___x_2129_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2131_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__2));
v___x_2132_ = l_Lean_stringToMessageData(v___x_2131_);
return v___x_2132_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7(void){
_start:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2136_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__6));
v___x_2137_ = lean_unsigned_to_nat(11u);
v___x_2138_ = lean_unsigned_to_nat(122u);
v___x_2139_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__5));
v___x_2140_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__4));
v___x_2141_ = l_mkPanicMessageWithDecl(v___x_2140_, v___x_2139_, v___x_2138_, v___x_2137_, v___x_2136_);
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0(lean_object* v_constName_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_){
_start:
{
lean_object* v___x_2158_; lean_object* v_env_2159_; uint8_t v___x_2160_; lean_object* v___x_2161_; 
v___x_2158_ = lean_st_ref_get(v___y_2148_);
v_env_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc_ref(v_env_2159_);
lean_dec(v___x_2158_);
v___x_2160_ = 0;
lean_inc(v_constName_2142_);
v___x_2161_ = l_Lean_Environment_findAsync_x3f(v_env_2159_, v_constName_2142_, v___x_2160_);
if (lean_obj_tag(v___x_2161_) == 1)
{
lean_object* v_val_2162_; uint8_t v_kind_2163_; 
v_val_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_val_2162_);
lean_dec_ref_known(v___x_2161_, 1);
v_kind_2163_ = lean_ctor_get_uint8(v_val_2162_, sizeof(void*)*3);
if (v_kind_2163_ == 6)
{
lean_object* v___x_2164_; 
v___x_2164_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2162_);
if (lean_obj_tag(v___x_2164_) == 6)
{
lean_object* v_val_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_dec(v_constName_2142_);
v_val_2165_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2164_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_val_2165_);
lean_dec(v___x_2164_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
lean_ctor_set_tag(v___x_2167_, 0);
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_val_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
else
{
lean_object* v___x_2173_; lean_object* v___x_2174_; 
lean_dec_ref(v___x_2164_);
v___x_2173_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__7);
v___x_2174_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__1(v___x_2173_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2183_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2177_ = v___x_2174_;
v_isShared_2178_ = v_isSharedCheck_2183_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2174_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2183_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
if (lean_obj_tag(v_a_2175_) == 0)
{
lean_del_object(v___x_2177_);
goto v___jp_2150_;
}
else
{
lean_object* v_val_2179_; lean_object* v___x_2181_; 
lean_dec(v_constName_2142_);
v_val_2179_ = lean_ctor_get(v_a_2175_, 0);
lean_inc(v_val_2179_);
lean_dec_ref_known(v_a_2175_, 1);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 0, v_val_2179_);
v___x_2181_ = v___x_2177_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_val_2179_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec(v_constName_2142_);
v_a_2184_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2174_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2174_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
}
else
{
lean_dec(v_val_2162_);
goto v___jp_2150_;
}
}
else
{
lean_dec(v___x_2161_);
goto v___jp_2150_;
}
v___jp_2150_:
{
lean_object* v___x_2151_; uint8_t v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2151_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1);
v___x_2152_ = 0;
v___x_2153_ = l_Lean_MessageData_ofConstName(v_constName_2142_, v___x_2152_);
v___x_2154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2151_);
lean_ctor_set(v___x_2154_, 1, v___x_2153_);
v___x_2155_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__3);
v___x_2156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2156_, 0, v___x_2154_);
lean_ctor_set(v___x_2156_, 1, v___x_2155_);
v___x_2157_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(v___x_2156_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
return v___x_2157_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___boxed(lean_object* v_constName_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
lean_object* v_res_2200_; 
v_res_2200_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0(v_constName_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec(v___y_2196_);
lean_dec_ref(v___y_2195_);
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg(lean_object* v_a_2201_, lean_object* v_infos_2202_, lean_object* v_numParams_2203_, lean_object* v_as_x27_2204_, lean_object* v_b_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
if (lean_obj_tag(v_as_x27_2204_) == 0)
{
lean_object* v___x_2213_; 
lean_dec(v_numParams_2203_);
lean_dec_ref(v_infos_2202_);
lean_dec_ref(v_a_2201_);
v___x_2213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2213_, 0, v_b_2205_);
return v___x_2213_;
}
else
{
lean_object* v_head_2214_; lean_object* v_tail_2215_; lean_object* v_array_2216_; lean_object* v_start_2217_; lean_object* v_stop_2218_; uint8_t v___x_2219_; 
v_head_2214_ = lean_ctor_get(v_as_x27_2204_, 0);
v_tail_2215_ = lean_ctor_get(v_as_x27_2204_, 1);
v_array_2216_ = lean_ctor_get(v_b_2205_, 0);
v_start_2217_ = lean_ctor_get(v_b_2205_, 1);
v_stop_2218_ = lean_ctor_get(v_b_2205_, 2);
v___x_2219_ = lean_nat_dec_lt(v_start_2217_, v_stop_2218_);
if (v___x_2219_ == 0)
{
lean_object* v___x_2220_; 
lean_dec(v_numParams_2203_);
lean_dec_ref(v_infos_2202_);
lean_dec_ref(v_a_2201_);
v___x_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2220_, 0, v_b_2205_);
return v___x_2220_;
}
else
{
lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2252_; 
lean_inc(v_stop_2218_);
lean_inc(v_start_2217_);
lean_inc_ref(v_array_2216_);
v_isSharedCheck_2252_ = !lean_is_exclusive(v_b_2205_);
if (v_isSharedCheck_2252_ == 0)
{
lean_object* v_unused_2253_; lean_object* v_unused_2254_; lean_object* v_unused_2255_; 
v_unused_2253_ = lean_ctor_get(v_b_2205_, 2);
lean_dec(v_unused_2253_);
v_unused_2254_ = lean_ctor_get(v_b_2205_, 1);
lean_dec(v_unused_2254_);
v_unused_2255_ = lean_ctor_get(v_b_2205_, 0);
lean_dec(v_unused_2255_);
v___x_2222_ = v_b_2205_;
v_isShared_2223_ = v_isSharedCheck_2252_;
goto v_resetjp_2221_;
}
else
{
lean_dec(v_b_2205_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2252_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2228_; 
v___x_2224_ = lean_array_fget(v_array_2216_, v_start_2217_);
v___x_2225_ = lean_unsigned_to_nat(1u);
v___x_2226_ = lean_nat_add(v_start_2217_, v___x_2225_);
lean_dec(v_start_2217_);
if (v_isShared_2223_ == 0)
{
lean_ctor_set(v___x_2222_, 1, v___x_2226_);
v___x_2228_ = v___x_2222_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_array_2216_);
lean_ctor_set(v_reuseFailAlloc_2251_, 1, v___x_2226_);
lean_ctor_set(v_reuseFailAlloc_2251_, 2, v_stop_2218_);
v___x_2228_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
lean_object* v___x_2229_; 
lean_inc(v_head_2214_);
v___x_2229_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0(v_head_2214_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_toConstantVal_2230_; lean_object* v_a_2231_; lean_object* v_name_2232_; lean_object* v___x_2233_; 
v_toConstantVal_2230_ = lean_ctor_get(v_a_2201_, 0);
v_a_2231_ = lean_ctor_get(v___x_2229_, 0);
lean_inc(v_a_2231_);
lean_dec_ref_known(v___x_2229_, 1);
v_name_2232_ = lean_ctor_get(v_toConstantVal_2230_, 0);
lean_inc(v_name_2232_);
lean_inc(v_numParams_2203_);
lean_inc_ref(v_infos_2202_);
v___x_2233_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor(v_infos_2202_, v___x_2224_, v_numParams_2203_, v_name_2232_, v_a_2231_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
if (lean_obj_tag(v___x_2233_) == 0)
{
lean_dec_ref_known(v___x_2233_, 1);
v_as_x27_2204_ = v_tail_2215_;
v_b_2205_ = v___x_2228_;
goto _start;
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_dec_ref(v___x_2228_);
lean_dec(v_numParams_2203_);
lean_dec_ref(v_infos_2202_);
lean_dec_ref(v_a_2201_);
v_a_2235_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2233_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2233_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
else
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
lean_dec_ref(v___x_2228_);
lean_dec(v___x_2224_);
lean_dec(v_numParams_2203_);
lean_dec_ref(v_infos_2202_);
lean_dec_ref(v_a_2201_);
v_a_2243_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2229_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2229_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg___boxed(lean_object* v_a_2256_, lean_object* v_infos_2257_, lean_object* v_numParams_2258_, lean_object* v_as_x27_2259_, lean_object* v_b_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg(v_a_2256_, v_infos_2257_, v_numParams_2258_, v_as_x27_2259_, v_b_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_);
lean_dec(v___y_2266_);
lean_dec_ref(v___y_2265_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
lean_dec(v___y_2262_);
lean_dec_ref(v___y_2261_);
lean_dec(v_as_x27_2259_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2(lean_object* v_infos_2269_, lean_object* v_numParams_2270_, lean_object* v_as_2271_, size_t v_sz_2272_, size_t v_i_2273_, lean_object* v_b_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_){
_start:
{
uint8_t v___x_2282_; 
v___x_2282_ = lean_usize_dec_lt(v_i_2273_, v_sz_2272_);
if (v___x_2282_ == 0)
{
lean_object* v___x_2283_; 
lean_dec(v_numParams_2270_);
lean_dec_ref(v_infos_2269_);
v___x_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2283_, 0, v_b_2274_);
return v___x_2283_;
}
else
{
lean_object* v_array_2284_; lean_object* v_start_2285_; lean_object* v_stop_2286_; uint8_t v___x_2287_; 
v_array_2284_ = lean_ctor_get(v_b_2274_, 0);
v_start_2285_ = lean_ctor_get(v_b_2274_, 1);
v_stop_2286_ = lean_ctor_get(v_b_2274_, 2);
v___x_2287_ = lean_nat_dec_lt(v_start_2285_, v_stop_2286_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; 
lean_dec(v_numParams_2270_);
lean_dec_ref(v_infos_2269_);
v___x_2288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2288_, 0, v_b_2274_);
return v___x_2288_;
}
else
{
lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2316_; 
lean_inc(v_stop_2286_);
lean_inc(v_start_2285_);
lean_inc_ref(v_array_2284_);
v_isSharedCheck_2316_ = !lean_is_exclusive(v_b_2274_);
if (v_isSharedCheck_2316_ == 0)
{
lean_object* v_unused_2317_; lean_object* v_unused_2318_; lean_object* v_unused_2319_; 
v_unused_2317_ = lean_ctor_get(v_b_2274_, 2);
lean_dec(v_unused_2317_);
v_unused_2318_ = lean_ctor_get(v_b_2274_, 1);
lean_dec(v_unused_2318_);
v_unused_2319_ = lean_ctor_get(v_b_2274_, 0);
lean_dec(v_unused_2319_);
v___x_2290_ = v_b_2274_;
v_isShared_2291_ = v_isSharedCheck_2316_;
goto v_resetjp_2289_;
}
else
{
lean_dec(v_b_2274_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2316_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2292_; lean_object* v_ctorSyntax_2293_; lean_object* v_a_2294_; lean_object* v_ctors_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2300_; 
v___x_2292_ = lean_array_fget_borrowed(v_array_2284_, v_start_2285_);
v_ctorSyntax_2293_ = lean_ctor_get(v___x_2292_, 4);
lean_inc_ref(v_ctorSyntax_2293_);
v_a_2294_ = lean_array_uget_borrowed(v_as_2271_, v_i_2273_);
v_ctors_2295_ = lean_ctor_get(v_a_2294_, 4);
v___x_2296_ = lean_array_get_size(v_ctorSyntax_2293_);
v___x_2297_ = lean_unsigned_to_nat(1u);
v___x_2298_ = lean_nat_add(v_start_2285_, v___x_2297_);
lean_dec(v_start_2285_);
if (v_isShared_2291_ == 0)
{
lean_ctor_set(v___x_2290_, 1, v___x_2298_);
v___x_2300_ = v___x_2290_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_array_2284_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v___x_2298_);
lean_ctor_set(v_reuseFailAlloc_2315_, 2, v_stop_2286_);
v___x_2300_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2301_ = lean_unsigned_to_nat(0u);
v___x_2302_ = l_Array_toSubarray___redArg(v_ctorSyntax_2293_, v___x_2301_, v___x_2296_);
lean_inc(v_numParams_2270_);
lean_inc_ref(v_infos_2269_);
lean_inc(v_a_2294_);
v___x_2303_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg(v_a_2294_, v_infos_2269_, v_numParams_2270_, v_ctors_2295_, v___x_2302_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2303_) == 0)
{
size_t v___x_2304_; size_t v___x_2305_; 
lean_dec_ref_known(v___x_2303_, 1);
v___x_2304_ = ((size_t)1ULL);
v___x_2305_ = lean_usize_add(v_i_2273_, v___x_2304_);
v_i_2273_ = v___x_2305_;
v_b_2274_ = v___x_2300_;
goto _start;
}
else
{
lean_object* v_a_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2314_; 
lean_dec_ref(v___x_2300_);
lean_dec(v_numParams_2270_);
lean_dec_ref(v_infos_2269_);
v_a_2307_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2309_ = v___x_2303_;
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_a_2307_);
lean_dec(v___x_2303_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_a_2307_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2___boxed(lean_object* v_infos_2320_, lean_object* v_numParams_2321_, lean_object* v_as_2322_, lean_object* v_sz_2323_, lean_object* v_i_2324_, lean_object* v_b_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_){
_start:
{
size_t v_sz_boxed_2333_; size_t v_i_boxed_2334_; lean_object* v_res_2335_; 
v_sz_boxed_2333_ = lean_unbox_usize(v_sz_2323_);
lean_dec(v_sz_2323_);
v_i_boxed_2334_ = lean_unbox_usize(v_i_2324_);
lean_dec(v_i_2324_);
v_res_2335_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2(v_infos_2320_, v_numParams_2321_, v_as_2322_, v_sz_boxed_2333_, v_i_boxed_2334_, v_b_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
lean_dec_ref(v_as_2322_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors(lean_object* v_numParams_2336_, lean_object* v_infos_2337_, lean_object* v_coinductiveElabData_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; size_t v_sz_2349_; size_t v___x_2350_; lean_object* v___x_2351_; 
v___x_2346_ = lean_unsigned_to_nat(0u);
v___x_2347_ = lean_array_get_size(v_coinductiveElabData_2338_);
v___x_2348_ = l_Array_toSubarray___redArg(v_coinductiveElabData_2338_, v___x_2346_, v___x_2347_);
v_sz_2349_ = lean_array_size(v_infos_2337_);
v___x_2350_ = ((size_t)0ULL);
lean_inc_ref(v_infos_2337_);
v___x_2351_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__2(v_infos_2337_, v_numParams_2336_, v_infos_2337_, v_sz_2349_, v___x_2350_, v___x_2348_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
lean_dec_ref(v_infos_2337_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2359_; 
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2359_ == 0)
{
lean_object* v_unused_2360_; 
v_unused_2360_ = lean_ctor_get(v___x_2351_, 0);
lean_dec(v_unused_2360_);
v___x_2353_ = v___x_2351_;
v_isShared_2354_ = v_isSharedCheck_2359_;
goto v_resetjp_2352_;
}
else
{
lean_dec(v___x_2351_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2359_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2355_; lean_object* v___x_2357_; 
v___x_2355_ = lean_box(0);
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 0, v___x_2355_);
v___x_2357_ = v___x_2353_;
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
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
v_a_2361_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2363_ = v___x_2351_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2351_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_a_2361_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors___boxed(lean_object* v_numParams_2369_, lean_object* v_infos_2370_, lean_object* v_coinductiveElabData_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors(v_numParams_2369_, v_infos_2370_, v_coinductiveElabData_2371_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_);
lean_dec(v_a_2377_);
lean_dec_ref(v_a_2376_);
lean_dec(v_a_2375_);
lean_dec_ref(v_a_2374_);
lean_dec(v_a_2373_);
lean_dec_ref(v_a_2372_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1(lean_object* v_a_2380_, lean_object* v_infos_2381_, lean_object* v_numParams_2382_, lean_object* v_as_2383_, lean_object* v_as_x27_2384_, lean_object* v_b_2385_, lean_object* v_a_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___redArg(v_a_2380_, v_infos_2381_, v_numParams_2382_, v_as_x27_2384_, v_b_2385_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1___boxed(lean_object* v_a_2395_, lean_object* v_infos_2396_, lean_object* v_numParams_2397_, lean_object* v_as_2398_, lean_object* v_as_x27_2399_, lean_object* v_b_2400_, lean_object* v_a_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__1(v_a_2395_, v_infos_2396_, v_numParams_2397_, v_as_2398_, v_as_x27_2399_, v_b_2400_, v_a_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v___y_2405_);
lean_dec_ref(v___y_2404_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v_as_x27_2399_);
lean_dec(v_as_2398_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0(lean_object* v_00_u03b1_2410_, lean_object* v_msg_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
lean_object* v___x_2419_; 
v___x_2419_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(v_msg_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2420_, lean_object* v_msg_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0(v_00_u03b1_2420_, v_msg_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
lean_dec(v___y_2423_);
lean_dec_ref(v___y_2422_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1(lean_object* v_msgData_2430_, lean_object* v_macroStack_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___redArg(v_msgData_2430_, v_macroStack_2431_, v___y_2436_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_2440_, lean_object* v_macroStack_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_){
_start:
{
lean_object* v_res_2449_; 
v_res_2449_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0_spec__1(v_msgData_2440_, v_macroStack_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
lean_dec(v___y_2447_);
lean_dec_ref(v___y_2446_);
lean_dec(v___y_2445_);
lean_dec_ref(v___y_2444_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(lean_object* v_mvarId_2450_, lean_object* v_x_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
lean_object* v___x_2457_; 
v___x_2457_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2450_, v_x_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2457_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2457_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
v_a_2466_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2457_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2457_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg___boxed(lean_object* v_mvarId_2474_, lean_object* v_x_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
lean_object* v_res_2481_; 
v_res_2481_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(v_mvarId_2474_, v_x_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4(lean_object* v_00_u03b1_2482_, lean_object* v_mvarId_2483_, lean_object* v_x_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_){
_start:
{
lean_object* v___x_2490_; 
v___x_2490_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(v_mvarId_2483_, v_x_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___boxed(lean_object* v_00_u03b1_2491_, lean_object* v_mvarId_2492_, lean_object* v_x_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4(v_00_u03b1_2491_, v_mvarId_2492_, v_x_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(lean_object* v_type_2500_, lean_object* v_maxFVars_x3f_2501_, lean_object* v_k_2502_, uint8_t v_cleanupAnnotations_2503_, uint8_t v_whnfType_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v___f_2510_; lean_object* v___x_2511_; 
v___f_2510_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__6___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2510_, 0, v_k_2502_);
v___x_2511_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_2500_, v_maxFVars_x3f_2501_, v___f_2510_, v_cleanupAnnotations_2503_, v_whnfType_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2519_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2514_ = v___x_2511_;
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v___x_2517_; 
if (v_isShared_2515_ == 0)
{
v___x_2517_ = v___x_2514_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_a_2512_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
v_a_2520_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2511_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2511_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg___boxed(lean_object* v_type_2528_, lean_object* v_maxFVars_x3f_2529_, lean_object* v_k_2530_, lean_object* v_cleanupAnnotations_2531_, lean_object* v_whnfType_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2538_; uint8_t v_whnfType_boxed_2539_; lean_object* v_res_2540_; 
v_cleanupAnnotations_boxed_2538_ = lean_unbox(v_cleanupAnnotations_2531_);
v_whnfType_boxed_2539_ = lean_unbox(v_whnfType_2532_);
v_res_2540_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v_type_2528_, v_maxFVars_x3f_2529_, v_k_2530_, v_cleanupAnnotations_boxed_2538_, v_whnfType_boxed_2539_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5(lean_object* v_00_u03b1_2541_, lean_object* v_type_2542_, lean_object* v_maxFVars_x3f_2543_, lean_object* v_k_2544_, uint8_t v_cleanupAnnotations_2545_, uint8_t v_whnfType_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_){
_start:
{
lean_object* v___x_2552_; 
v___x_2552_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v_type_2542_, v_maxFVars_x3f_2543_, v_k_2544_, v_cleanupAnnotations_2545_, v_whnfType_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___boxed(lean_object* v_00_u03b1_2553_, lean_object* v_type_2554_, lean_object* v_maxFVars_x3f_2555_, lean_object* v_k_2556_, lean_object* v_cleanupAnnotations_2557_, lean_object* v_whnfType_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2564_; uint8_t v_whnfType_boxed_2565_; lean_object* v_res_2566_; 
v_cleanupAnnotations_boxed_2564_ = lean_unbox(v_cleanupAnnotations_2557_);
v_whnfType_boxed_2565_ = lean_unbox(v_whnfType_2558_);
v_res_2566_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5(v_00_u03b1_2553_, v_type_2554_, v_maxFVars_x3f_2555_, v_k_2556_, v_cleanupAnnotations_boxed_2564_, v_whnfType_boxed_2565_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_);
lean_dec(v___y_2562_);
lean_dec_ref(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec_ref(v___y_2559_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg(lean_object* v_ref_2567_, lean_object* v_msg_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_){
_start:
{
lean_object* v_toCold_2574_; lean_object* v_currRecDepth_2575_; lean_object* v_ref_2576_; uint16_t v_optionFlags_2577_; uint8_t v_suppressElabErrors_2578_; uint8_t v_checkDeprecated_2579_; uint8_t v_isRecordingDeps_2580_; lean_object* v_ref_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v_toCold_2574_ = lean_ctor_get(v___y_2571_, 0);
v_currRecDepth_2575_ = lean_ctor_get(v___y_2571_, 1);
v_ref_2576_ = lean_ctor_get(v___y_2571_, 2);
v_optionFlags_2577_ = lean_ctor_get_uint16(v___y_2571_, sizeof(void*)*3);
v_suppressElabErrors_2578_ = lean_ctor_get_uint8(v___y_2571_, sizeof(void*)*3 + 2);
v_checkDeprecated_2579_ = lean_ctor_get_uint8(v___y_2571_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2580_ = lean_ctor_get_uint8(v___y_2571_, sizeof(void*)*3 + 4);
v_ref_2581_ = l_Lean_replaceRef(v_ref_2567_, v_ref_2576_);
lean_inc(v_currRecDepth_2575_);
lean_inc_ref(v_toCold_2574_);
v___x_2582_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2582_, 0, v_toCold_2574_);
lean_ctor_set(v___x_2582_, 1, v_currRecDepth_2575_);
lean_ctor_set(v___x_2582_, 2, v_ref_2581_);
lean_ctor_set_uint16(v___x_2582_, sizeof(void*)*3, v_optionFlags_2577_);
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*3 + 2, v_suppressElabErrors_2578_);
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*3 + 3, v_checkDeprecated_2579_);
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*3 + 4, v_isRecordingDeps_2580_);
v___x_2583_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v_msg_2568_, v___y_2569_, v___y_2570_, v___x_2582_, v___y_2572_);
lean_dec_ref_known(v___x_2582_, 3);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg___boxed(lean_object* v_ref_2584_, lean_object* v_msg_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg(v_ref_2584_, v_msg_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
lean_dec(v_ref_2584_);
return v_res_2591_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_2592_; 
v___x_2592_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2592_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__0);
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
return v___x_2594_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2595_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1);
v___x_2596_ = lean_unsigned_to_nat(0u);
v___x_2597_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
lean_ctor_set(v___x_2597_, 2, v___x_2596_);
lean_ctor_set(v___x_2597_, 3, v___x_2596_);
lean_ctor_set(v___x_2597_, 4, v___x_2595_);
lean_ctor_set(v___x_2597_, 5, v___x_2595_);
lean_ctor_set(v___x_2597_, 6, v___x_2595_);
lean_ctor_set(v___x_2597_, 7, v___x_2595_);
lean_ctor_set(v___x_2597_, 8, v___x_2595_);
lean_ctor_set(v___x_2597_, 9, v___x_2595_);
return v___x_2597_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3(void){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2598_ = lean_unsigned_to_nat(32u);
v___x_2599_ = lean_mk_empty_array_with_capacity(v___x_2598_);
v___x_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
return v___x_2600_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4(void){
_start:
{
size_t v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v___x_2601_ = ((size_t)5ULL);
v___x_2602_ = lean_unsigned_to_nat(0u);
v___x_2603_ = lean_unsigned_to_nat(32u);
v___x_2604_ = lean_mk_empty_array_with_capacity(v___x_2603_);
v___x_2605_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__3);
v___x_2606_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2606_, 0, v___x_2605_);
lean_ctor_set(v___x_2606_, 1, v___x_2604_);
lean_ctor_set(v___x_2606_, 2, v___x_2602_);
lean_ctor_set(v___x_2606_, 3, v___x_2602_);
lean_ctor_set_usize(v___x_2606_, 4, v___x_2601_);
return v___x_2606_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5(void){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2607_ = lean_box(1);
v___x_2608_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__4);
v___x_2609_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__1);
v___x_2610_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2609_);
lean_ctor_set(v___x_2610_, 1, v___x_2608_);
lean_ctor_set(v___x_2610_, 2, v___x_2607_);
return v___x_2610_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7(void){
_start:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2612_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__6));
v___x_2613_ = l_Lean_stringToMessageData(v___x_2612_);
return v___x_2613_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9(void){
_start:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2615_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__8));
v___x_2616_ = l_Lean_stringToMessageData(v___x_2615_);
return v___x_2616_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11(void){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2618_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__10));
v___x_2619_ = l_Lean_stringToMessageData(v___x_2618_);
return v___x_2619_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13(void){
_start:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2621_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__12));
v___x_2622_ = l_Lean_stringToMessageData(v___x_2621_);
return v___x_2622_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15(void){
_start:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2624_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__14));
v___x_2625_ = l_Lean_stringToMessageData(v___x_2624_);
return v___x_2625_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17(void){
_start:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2627_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__16));
v___x_2628_ = l_Lean_stringToMessageData(v___x_2627_);
return v___x_2628_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19(void){
_start:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2630_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__18));
v___x_2631_ = l_Lean_stringToMessageData(v___x_2630_);
return v___x_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg(lean_object* v_msg_2632_, lean_object* v_declHint_2633_, lean_object* v___y_2634_){
_start:
{
lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v_env_2638_; uint8_t v___x_2639_; 
v___x_2636_ = lean_box(0);
v___x_2637_ = lean_st_ref_get(v___y_2634_);
v_env_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc_ref(v_env_2638_);
lean_dec(v___x_2637_);
v___x_2639_ = l_Lean_Name_isAnonymous(v_declHint_2633_);
if (v___x_2639_ == 0)
{
uint8_t v_isExporting_2640_; 
v_isExporting_2640_ = lean_ctor_get_uint8(v_env_2638_, sizeof(void*)*13);
if (v_isExporting_2640_ == 0)
{
lean_object* v___x_2641_; 
lean_dec_ref(v_env_2638_);
lean_dec(v_declHint_2633_);
v___x_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2641_, 0, v_msg_2632_);
return v___x_2641_;
}
else
{
lean_object* v___x_2642_; uint8_t v___x_2643_; 
lean_inc_ref(v_env_2638_);
v___x_2642_ = l_Lean_Environment_setExporting(v_env_2638_, v___x_2639_);
lean_inc(v_declHint_2633_);
lean_inc_ref(v___x_2642_);
v___x_2643_ = l_Lean_Environment_contains(v___x_2642_, v_declHint_2633_, v_isExporting_2640_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; 
lean_dec_ref(v___x_2642_);
lean_dec_ref(v_env_2638_);
lean_dec(v_declHint_2633_);
v___x_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2644_, 0, v_msg_2632_);
return v___x_2644_;
}
else
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v_c_2650_; lean_object* v___x_2651_; 
v___x_2645_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__2);
v___x_2646_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__5);
v___x_2647_ = l_Lean_Options_empty;
lean_inc_ref(v___x_2642_);
v___x_2648_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2642_);
lean_ctor_set(v___x_2648_, 1, v___x_2645_);
lean_ctor_set(v___x_2648_, 2, v___x_2646_);
lean_ctor_set(v___x_2648_, 3, v___x_2647_);
lean_inc(v_declHint_2633_);
v___x_2649_ = l_Lean_MessageData_ofConstName(v_declHint_2633_, v___x_2639_);
v_c_2650_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2650_, 0, v___x_2648_);
lean_ctor_set(v_c_2650_, 1, v___x_2649_);
v___x_2651_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_2642_, v_declHint_2633_);
lean_dec_ref(v___x_2642_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
lean_dec_ref(v_env_2638_);
lean_dec(v_declHint_2633_);
v___x_2652_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7);
v___x_2653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2652_);
lean_ctor_set(v___x_2653_, 1, v_c_2650_);
v___x_2654_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__9);
v___x_2655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2653_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
v___x_2656_ = l_Lean_MessageData_note(v___x_2655_);
v___x_2657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2657_, 0, v_msg_2632_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___x_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2657_);
return v___x_2658_;
}
else
{
lean_object* v_val_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2693_; 
v_val_2659_ = lean_ctor_get(v___x_2651_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2661_ = v___x_2651_;
v_isShared_2662_ = v_isSharedCheck_2693_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_val_2659_);
lean_dec(v___x_2651_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2693_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2663_; lean_object* v_moduleNames_2664_; lean_object* v_mod_2665_; uint8_t v___x_2666_; 
v___x_2663_ = l_Lean_Environment_header(v_env_2638_);
lean_dec_ref(v_env_2638_);
v_moduleNames_2664_ = lean_ctor_get(v___x_2663_, 4);
lean_inc_ref(v_moduleNames_2664_);
lean_dec_ref(v___x_2663_);
v_mod_2665_ = lean_array_get(v___x_2636_, v_moduleNames_2664_, v_val_2659_);
lean_dec(v_val_2659_);
lean_dec_ref(v_moduleNames_2664_);
v___x_2666_ = l_Lean_isPrivateName(v_declHint_2633_);
lean_dec(v_declHint_2633_);
if (v___x_2666_ == 0)
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2678_; 
v___x_2667_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__11);
v___x_2668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
lean_ctor_set(v___x_2668_, 1, v_c_2650_);
v___x_2669_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__13);
v___x_2670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2668_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
v___x_2671_ = l_Lean_MessageData_ofName(v_mod_2665_);
v___x_2672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2670_);
lean_ctor_set(v___x_2672_, 1, v___x_2671_);
v___x_2673_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__15);
v___x_2674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2672_);
lean_ctor_set(v___x_2674_, 1, v___x_2673_);
v___x_2675_ = l_Lean_MessageData_note(v___x_2674_);
v___x_2676_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2676_, 0, v_msg_2632_);
lean_ctor_set(v___x_2676_, 1, v___x_2675_);
if (v_isShared_2662_ == 0)
{
lean_ctor_set_tag(v___x_2661_, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2676_);
v___x_2678_ = v___x_2661_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v___x_2676_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
return v___x_2678_;
}
}
else
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2691_; 
v___x_2680_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__7);
v___x_2681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2680_);
lean_ctor_set(v___x_2681_, 1, v_c_2650_);
v___x_2682_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__17);
v___x_2683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2681_);
lean_ctor_set(v___x_2683_, 1, v___x_2682_);
v___x_2684_ = l_Lean_MessageData_ofName(v_mod_2665_);
v___x_2685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2683_);
lean_ctor_set(v___x_2685_, 1, v___x_2684_);
v___x_2686_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___closed__19);
v___x_2687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2685_);
lean_ctor_set(v___x_2687_, 1, v___x_2686_);
v___x_2688_ = l_Lean_MessageData_note(v___x_2687_);
v___x_2689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2689_, 0, v_msg_2632_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
if (v_isShared_2662_ == 0)
{
lean_ctor_set_tag(v___x_2661_, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2689_);
v___x_2691_ = v___x_2661_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v___x_2689_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2694_; 
lean_dec_ref(v_env_2638_);
lean_dec(v_declHint_2633_);
v___x_2694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2694_, 0, v_msg_2632_);
return v___x_2694_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg___boxed(lean_object* v_msg_2695_, lean_object* v_declHint_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg(v_msg_2695_, v_declHint_2696_, v___y_2697_);
lean_dec(v___y_2697_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11(lean_object* v_msg_2700_, lean_object* v_declHint_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_){
_start:
{
lean_object* v___x_2707_; lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2717_; 
v___x_2707_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg(v_msg_2700_, v_declHint_2701_, v___y_2705_);
v_a_2708_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2710_ = v___x_2707_;
v_isShared_2711_ = v_isSharedCheck_2717_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2707_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2717_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2715_; 
v___x_2712_ = l_Lean_unknownIdentifierMessageTag;
v___x_2713_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2712_);
lean_ctor_set(v___x_2713_, 1, v_a_2708_);
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 0, v___x_2713_);
v___x_2715_ = v___x_2710_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v___x_2713_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11___boxed(lean_object* v_msg_2718_, lean_object* v_declHint_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11(v_msg_2718_, v_declHint_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg(lean_object* v_ref_2726_, lean_object* v_msg_2727_, lean_object* v_declHint_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_){
_start:
{
lean_object* v___x_2734_; lean_object* v_a_2735_; lean_object* v___x_2736_; 
v___x_2734_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11(v_msg_2727_, v_declHint_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref(v___x_2734_);
v___x_2736_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg(v_ref_2726_, v_a_2735_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
return v___x_2736_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg___boxed(lean_object* v_ref_2737_, lean_object* v_msg_2738_, lean_object* v_declHint_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg(v_ref_2737_, v_msg_2738_, v_declHint_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec(v_ref_2737_);
return v_res_2745_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2747_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__0));
v___x_2748_ = l_Lean_stringToMessageData(v___x_2747_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg(lean_object* v_ref_2749_, lean_object* v_constName_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_){
_start:
{
lean_object* v___x_2756_; uint8_t v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; 
v___x_2756_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___closed__1);
v___x_2757_ = 0;
lean_inc(v_constName_2750_);
v___x_2758_ = l_Lean_MessageData_ofConstName(v_constName_2750_, v___x_2757_);
v___x_2759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2756_);
lean_ctor_set(v___x_2759_, 1, v___x_2758_);
v___x_2760_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1);
v___x_2761_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2759_);
lean_ctor_set(v___x_2761_, 1, v___x_2760_);
v___x_2762_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg(v_ref_2749_, v___x_2761_, v_constName_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
return v___x_2762_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg___boxed(lean_object* v_ref_2763_, lean_object* v_constName_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_){
_start:
{
lean_object* v_res_2770_; 
v_res_2770_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg(v_ref_2763_, v_constName_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v_ref_2763_);
return v_res_2770_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(lean_object* v_constName_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
lean_object* v_ref_2777_; lean_object* v___x_2778_; 
v_ref_2777_ = lean_ctor_get(v___y_2774_, 2);
v___x_2778_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg(v_ref_2777_, v_constName_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_);
return v___x_2778_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg___boxed(lean_object* v_constName_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(v_constName_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
return v_res_2785_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2(lean_object* v_constName_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_){
_start:
{
lean_object* v___x_2792_; lean_object* v_env_2793_; uint8_t v___x_2794_; lean_object* v___x_2795_; 
v___x_2792_ = lean_st_ref_get(v___y_2790_);
v_env_2793_ = lean_ctor_get(v___x_2792_, 0);
lean_inc_ref(v_env_2793_);
lean_dec(v___x_2792_);
v___x_2794_ = 0;
lean_inc(v_constName_2786_);
v___x_2795_ = l_Lean_Environment_find_x3f(v_env_2793_, v_constName_2786_, v___x_2794_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v___x_2796_; 
v___x_2796_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(v_constName_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
return v___x_2796_;
}
else
{
lean_object* v_val_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2804_; 
lean_dec(v_constName_2786_);
v_val_2797_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2799_ = v___x_2795_;
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_val_2797_);
lean_dec(v___x_2795_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2802_; 
if (v_isShared_2800_ == 0)
{
lean_ctor_set_tag(v___x_2799_, 0);
v___x_2802_ = v___x_2799_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v_val_2797_);
v___x_2802_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
return v___x_2802_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2___boxed(lean_object* v_constName_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2(v_constName_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
return v_res_2811_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1(lean_object* v_e_2812_, lean_object* v_as_2813_, size_t v_i_2814_, size_t v_stop_2815_){
_start:
{
uint8_t v___x_2816_; 
v___x_2816_ = lean_usize_dec_eq(v_i_2814_, v_stop_2815_);
if (v___x_2816_ == 0)
{
lean_object* v___x_2817_; uint8_t v___x_2818_; 
v___x_2817_ = lean_array_uget_borrowed(v_as_2813_, v_i_2814_);
v___x_2818_ = l_Lean_Expr_isAppOf(v_e_2812_, v___x_2817_);
if (v___x_2818_ == 0)
{
size_t v___x_2819_; size_t v___x_2820_; 
v___x_2819_ = ((size_t)1ULL);
v___x_2820_ = lean_usize_add(v_i_2814_, v___x_2819_);
v_i_2814_ = v___x_2820_;
goto _start;
}
else
{
return v___x_2818_;
}
}
else
{
uint8_t v___x_2822_; 
v___x_2822_ = 0;
return v___x_2822_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1___boxed(lean_object* v_e_2823_, lean_object* v_as_2824_, lean_object* v_i_2825_, lean_object* v_stop_2826_){
_start:
{
size_t v_i_boxed_2827_; size_t v_stop_boxed_2828_; uint8_t v_res_2829_; lean_object* v_r_2830_; 
v_i_boxed_2827_ = lean_unbox_usize(v_i_2825_);
lean_dec(v_i_2825_);
v_stop_boxed_2828_ = lean_unbox_usize(v_stop_2826_);
lean_dec(v_stop_2826_);
v_res_2829_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1(v_e_2823_, v_as_2824_, v_i_boxed_2827_, v_stop_boxed_2828_);
lean_dec_ref(v_as_2824_);
lean_dec_ref(v_e_2823_);
v_r_2830_ = lean_box(v_res_2829_);
return v_r_2830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0(lean_object* v_numParams_2831_, lean_object* v_name_2832_, lean_object* v___y_2833_, lean_object* v___x_2834_, lean_object* v_levels_2835_, lean_object* v_params_2836_, lean_object* v_e_2837_){
_start:
{
uint8_t v___x_2838_; 
v___x_2838_ = l_Lean_Expr_isApp(v_e_2837_);
if (v___x_2838_ == 0)
{
lean_object* v___x_2839_; 
lean_dec_ref(v_e_2837_);
lean_dec_ref(v_params_2836_);
lean_dec(v_levels_2835_);
lean_dec(v_name_2832_);
lean_dec(v_numParams_2831_);
v___x_2839_ = lean_box(0);
return v___x_2839_;
}
else
{
lean_object* v_dummy_2840_; lean_object* v_nargs_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; uint8_t v___x_2848_; 
v_dummy_2840_ = lean_obj_once(&l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0, &l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0_once, _init_l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___lam__1___closed__0);
v_nargs_2841_ = l_Lean_Expr_getAppNumArgs(v_e_2837_);
lean_inc(v_nargs_2841_);
v___x_2842_ = lean_mk_array(v_nargs_2841_, v_dummy_2840_);
v___x_2843_ = lean_unsigned_to_nat(1u);
v___x_2844_ = lean_nat_sub(v_nargs_2841_, v___x_2843_);
lean_dec(v_nargs_2841_);
lean_inc_ref(v_e_2837_);
v___x_2845_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2837_, v___x_2842_, v___x_2844_);
v___x_2846_ = lean_array_get_size(v___x_2845_);
v___x_2847_ = l_Array_toSubarray___redArg(v___x_2845_, v_numParams_2831_, v___x_2846_);
v___x_2848_ = l_Lean_Expr_isAppOf(v_e_2837_, v_name_2832_);
if (v___x_2848_ == 0)
{
lean_object* v___x_2849_; uint8_t v___x_2850_; 
lean_dec(v_name_2832_);
v___x_2849_ = lean_array_get_size(v___y_2833_);
v___x_2850_ = lean_nat_dec_lt(v___x_2834_, v___x_2849_);
if (v___x_2850_ == 0)
{
lean_object* v___x_2851_; 
lean_dec_ref(v___x_2847_);
lean_dec_ref(v_e_2837_);
lean_dec_ref(v_params_2836_);
lean_dec(v_levels_2835_);
v___x_2851_ = lean_box(0);
return v___x_2851_;
}
else
{
if (v___x_2850_ == 0)
{
lean_object* v___x_2852_; 
lean_dec_ref(v___x_2847_);
lean_dec_ref(v_e_2837_);
lean_dec_ref(v_params_2836_);
lean_dec(v_levels_2835_);
v___x_2852_ = lean_box(0);
return v___x_2852_;
}
else
{
size_t v___x_2853_; size_t v___x_2854_; uint8_t v___x_2855_; 
v___x_2853_ = ((size_t)0ULL);
v___x_2854_ = lean_usize_of_nat(v___x_2849_);
v___x_2855_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__1(v_e_2837_, v___y_2833_, v___x_2853_, v___x_2854_);
if (v___x_2855_ == 0)
{
lean_object* v___x_2856_; 
lean_dec_ref(v___x_2847_);
lean_dec_ref(v_e_2837_);
lean_dec_ref(v_params_2836_);
lean_dec(v_levels_2835_);
v___x_2856_ = lean_box(0);
return v___x_2856_;
}
else
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2857_ = l_Lean_Expr_getAppFn(v_e_2837_);
lean_dec_ref(v_e_2837_);
v___x_2858_ = l_Lean_Expr_constName(v___x_2857_);
lean_dec_ref(v___x_2857_);
v___x_2859_ = l_Lean_Elab_Command_removeFunctorPostfixInCtor(v___x_2858_);
v___x_2860_ = l_Lean_mkConst(v___x_2859_, v_levels_2835_);
v___x_2861_ = l_Subarray_copy___redArg(v___x_2847_);
v___x_2862_ = l_Array_append___redArg(v_params_2836_, v___x_2861_);
lean_dec_ref(v___x_2861_);
v___x_2863_ = l_Lean_mkAppN(v___x_2860_, v___x_2862_);
lean_dec_ref(v___x_2862_);
v___x_2864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2863_);
return v___x_2864_;
}
}
}
}
else
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; 
lean_dec_ref(v_e_2837_);
v___x_2865_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_2832_);
v___x_2866_ = l_Lean_mkConst(v___x_2865_, v_levels_2835_);
v___x_2867_ = l_Subarray_copy___redArg(v___x_2847_);
v___x_2868_ = l_Array_append___redArg(v_params_2836_, v___x_2867_);
lean_dec_ref(v___x_2867_);
v___x_2869_ = l_Lean_mkAppN(v___x_2866_, v___x_2868_);
lean_dec_ref(v___x_2868_);
v___x_2870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2870_, 0, v___x_2869_);
return v___x_2870_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0___boxed(lean_object* v_numParams_2871_, lean_object* v_name_2872_, lean_object* v___y_2873_, lean_object* v___x_2874_, lean_object* v_levels_2875_, lean_object* v_params_2876_, lean_object* v_e_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0(v_numParams_2871_, v_name_2872_, v___y_2873_, v___x_2874_, v_levels_2875_, v_params_2876_, v_e_2877_);
lean_dec(v___x_2874_);
lean_dec_ref(v___y_2873_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2(lean_object* v_eqProof_2879_, lean_object* v___x_2880_, lean_object* v_eNew_2881_, lean_object* v_snd_2882_, lean_object* v___x_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_){
_start:
{
lean_object* v___x_2889_; 
v___x_2889_ = l_Lean_Meta_mkEqMP(v_eqProof_2879_, v___x_2880_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2889_) == 0)
{
lean_object* v_a_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; 
v_a_2890_ = lean_ctor_get(v___x_2889_, 0);
lean_inc(v_a_2890_);
lean_dec_ref_known(v___x_2889_, 1);
v___x_2891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2891_, 0, v_eNew_2881_);
v___x_2892_ = lean_box(0);
v___x_2893_ = l_Lean_MVarId_replace(v_snd_2882_, v___x_2883_, v_a_2890_, v___x_2891_, v___x_2892_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
return v___x_2893_;
}
else
{
lean_object* v_a_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2901_; 
lean_dec(v___x_2883_);
lean_dec(v_snd_2882_);
lean_dec_ref(v_eNew_2881_);
v_a_2894_ = lean_ctor_get(v___x_2889_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v___x_2889_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2896_ = v___x_2889_;
v_isShared_2897_ = v_isSharedCheck_2901_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_a_2894_);
lean_dec(v___x_2889_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2901_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v___x_2899_; 
if (v_isShared_2897_ == 0)
{
v___x_2899_ = v___x_2896_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v_a_2894_);
v___x_2899_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
return v___x_2899_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2___boxed(lean_object* v_eqProof_2902_, lean_object* v___x_2903_, lean_object* v_eNew_2904_, lean_object* v_snd_2905_, lean_object* v___x_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
lean_object* v_res_2912_; 
v_res_2912_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2(v_eqProof_2902_, v___x_2903_, v_eNew_2904_, v_snd_2905_, v___x_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
return v_res_2912_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2914_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__0));
v___x_2915_ = l_Lean_stringToMessageData(v___x_2914_);
return v___x_2915_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10(void){
_start:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2937_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__9));
v___x_2938_ = l_Lean_stringToMessageData(v___x_2937_);
return v___x_2938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3(lean_object* v___x_2939_, lean_object* v___x_2940_, lean_object* v___x_2941_, uint8_t v___x_2942_, lean_object* v___x_2943_, lean_object* v___x_2944_, uint8_t v___x_2945_, lean_object* v_params_2946_, lean_object* v_args_2947_, lean_object* v_indices_2948_, uint8_t v___x_2949_, lean_object* v_a_2950_, lean_object* v___x_2951_, lean_object* v___x_2952_, lean_object* v___f_2953_, lean_object* v___x_2954_, lean_object* v_targetArgs_2955_, lean_object* v_x_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_){
_start:
{
lean_object* v___x_2962_; uint8_t v___x_2963_; 
v___x_2962_ = lean_array_get_size(v_targetArgs_2955_);
v___x_2963_ = lean_nat_dec_eq(v___x_2962_, v___x_2939_);
if (v___x_2963_ == 0)
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
lean_dec_ref(v___x_2952_);
lean_dec(v___x_2951_);
lean_dec_ref(v_params_2946_);
lean_dec_ref(v___x_2944_);
lean_dec(v___x_2943_);
lean_dec_ref(v___x_2941_);
v___x_2964_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1);
v___x_2965_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v___x_2964_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_);
return v___x_2965_;
}
else
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2966_ = lean_array_fget_borrowed(v_targetArgs_2955_, v___x_2940_);
lean_inc(v___y_2960_);
lean_inc_ref(v___y_2959_);
lean_inc(v___y_2958_);
lean_inc_ref(v___y_2957_);
lean_inc_ref(v___x_2941_);
v___x_2967_ = lean_infer_type(v___x_2941_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v_a_2968_; 
v_a_2968_ = lean_ctor_get(v___x_2967_, 0);
lean_inc(v_a_2968_);
lean_dec_ref_known(v___x_2967_, 1);
if (lean_obj_tag(v_a_2968_) == 7)
{
lean_object* v_binderType_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v_binderType_2969_ = lean_ctor_get(v_a_2968_, 1);
lean_inc_ref(v_binderType_2969_);
lean_dec_ref_known(v_a_2968_, 3);
v___x_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2970_, 0, v_binderType_2969_);
v___x_2971_ = l_Lean_Meta_mkFreshExprMVar(v___x_2970_, v___x_2942_, v___x_2943_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v_a_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v_a_2972_ = lean_ctor_get(v___x_2971_, 0);
lean_inc(v_a_2972_);
lean_dec_ref_known(v___x_2971_, 1);
v___x_2973_ = l_Lean_Expr_mvarId_x21(v_a_2972_);
v___x_2974_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_rewriteGoalUsingEq(v___x_2973_, v___x_2944_, v___x_2945_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v_a_2975_; lean_object* v___x_2976_; 
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
lean_inc(v_a_2975_);
lean_dec_ref_known(v___x_2974_, 1);
lean_inc(v___x_2966_);
v___x_2976_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(v_a_2975_, v___x_2966_, v___y_2958_);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_3058_; 
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_3058_ == 0)
{
lean_object* v_unused_3059_; 
v_unused_3059_ = lean_ctor_get(v___x_2976_, 0);
lean_dec(v_unused_3059_);
v___x_2978_ = v___x_2976_;
v_isShared_2979_ = v_isSharedCheck_3058_;
goto v_resetjp_2977_;
}
else
{
lean_dec(v___x_2976_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_3058_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; uint8_t v___x_2984_; lean_object* v___x_2985_; 
v___x_2980_ = l_Lean_Expr_app___override(v___x_2941_, v_a_2972_);
lean_inc_ref(v_params_2946_);
v___x_2981_ = l_Array_append___redArg(v_params_2946_, v_args_2947_);
v___x_2982_ = l_Array_append___redArg(v___x_2981_, v_indices_2948_);
v___x_2983_ = l_Array_append___redArg(v___x_2982_, v_targetArgs_2955_);
v___x_2984_ = 1;
v___x_2985_ = l_Lean_Meta_mkLambdaFVars(v___x_2983_, v___x_2980_, v___x_2949_, v___x_2945_, v___x_2949_, v___x_2945_, v___x_2984_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_);
lean_dec_ref(v___x_2983_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_object* v_a_2986_; lean_object* v___x_2987_; 
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
lean_inc(v_a_2986_);
lean_dec_ref_known(v___x_2985_, 1);
v___x_2987_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__5___redArg(v_a_2986_, v___y_2958_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_a_2988_);
lean_dec_ref_known(v___x_2987_, 1);
v___x_2989_ = l_Lean_ConstantInfo_levelParams(v_a_2950_);
v___x_2990_ = l_Lean_mkCasesOnName(v___x_2951_);
v___x_2991_ = l_Lean_Meta_mkForallFVars(v_params_2946_, v___x_2952_, v___x_2949_, v___x_2945_, v___x_2945_, v___x_2984_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_);
lean_dec_ref(v_params_2946_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref_known(v___x_2991_, 1);
v___x_2993_ = lean_box(0);
lean_inc(v___x_2990_);
v___x_2994_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__7___redArg(v___x_2990_, v___x_2989_, v_a_2992_, v_a_2988_, v___x_2993_, v___y_2960_);
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2997_; 
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
lean_inc(v_a_2995_);
lean_dec_ref_known(v___x_2994_, 1);
if (v_isShared_2979_ == 0)
{
lean_ctor_set_tag(v___x_2978_, 1);
lean_ctor_set(v___x_2978_, 0, v_a_2995_);
v___x_2997_ = v___x_2978_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_2995_);
v___x_2997_ = v_reuseFailAlloc_3025_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
lean_object* v___x_2998_; 
v___x_2998_ = l_Lean_addDecl(v___x_2997_, v___x_2949_, v___y_2959_, v___y_2960_);
if (lean_obj_tag(v___x_2998_) == 0)
{
lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
lean_dec_ref_known(v___x_2998_, 1);
v___x_2999_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__8));
v___x_3000_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_applyAttributes___boxed), 9, 2);
lean_closure_set(v___x_3000_, 0, v___x_2990_);
lean_closure_set(v___x_3000_, 1, v___x_2999_);
v___x_3001_ = lean_box(0);
v___x_3002_ = lean_box(0);
v___x_3003_ = lean_box(1);
v___x_3004_ = lean_mk_empty_array_with_capacity(v___x_2940_);
v___x_3005_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_3005_, 0, v___x_3001_);
lean_ctor_set(v___x_3005_, 1, v___x_3002_);
lean_ctor_set(v___x_3005_, 2, v___x_3001_);
lean_ctor_set(v___x_3005_, 3, v___f_2953_);
lean_ctor_set(v___x_3005_, 4, v___x_3003_);
lean_ctor_set(v___x_3005_, 5, v___x_3003_);
lean_ctor_set(v___x_3005_, 6, v___x_3001_);
lean_ctor_set(v___x_3005_, 7, v___x_3004_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*8, v___x_2945_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*8 + 1, v___x_2945_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*8 + 2, v___x_2945_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*8 + 3, v___x_2945_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*8 + 4, v___x_2949_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*8 + 5, v___x_2949_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*8 + 6, v___x_2949_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*8 + 7, v___x_2949_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*8 + 8, v___x_2945_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*8 + 9, v___x_2949_);
v___x_3006_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3006_, 0, v___x_2954_);
lean_ctor_set(v___x_3006_, 1, v___x_3003_);
lean_ctor_set(v___x_3006_, 2, v___x_3002_);
lean_ctor_set(v___x_3006_, 3, v___x_3002_);
lean_ctor_set(v___x_3006_, 4, v___x_3002_);
lean_ctor_set(v___x_3006_, 5, v___x_3003_);
lean_ctor_set(v___x_3006_, 6, v___x_3002_);
lean_ctor_set(v___x_3006_, 7, v___x_3003_);
v___x_3007_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___x_3000_, v___x_3005_, v___x_3006_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3016_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3010_ = v___x_3007_;
v_isShared_3011_ = v_isSharedCheck_3016_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_3007_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3016_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v_fst_3012_; lean_object* v___x_3014_; 
v_fst_3012_ = lean_ctor_get(v_a_3008_, 0);
lean_inc(v_fst_3012_);
lean_dec(v_a_3008_);
if (v_isShared_3011_ == 0)
{
lean_ctor_set(v___x_3010_, 0, v_fst_3012_);
v___x_3014_ = v___x_3010_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_fst_3012_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
}
else
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3024_; 
v_a_3017_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3019_ = v___x_3007_;
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v___x_3007_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
lean_object* v___x_3022_; 
if (v_isShared_3020_ == 0)
{
v___x_3022_ = v___x_3019_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_a_3017_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
}
else
{
lean_dec(v___x_2990_);
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
return v___x_2998_;
}
}
}
else
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3033_; 
lean_dec(v___x_2990_);
lean_del_object(v___x_2978_);
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
v_a_3026_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3028_ = v___x_2994_;
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v___x_2994_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3031_; 
if (v_isShared_3029_ == 0)
{
v___x_3031_ = v___x_3028_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_a_3026_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
}
else
{
lean_object* v_a_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3041_; 
lean_dec(v___x_2990_);
lean_dec(v___x_2989_);
lean_dec(v_a_2988_);
lean_del_object(v___x_2978_);
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
v_a_3034_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3036_ = v___x_2991_;
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_a_3034_);
lean_dec(v___x_2991_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
lean_object* v___x_3039_; 
if (v_isShared_3037_ == 0)
{
v___x_3039_ = v___x_3036_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v_a_3034_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
return v___x_3039_;
}
}
}
}
else
{
lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
lean_del_object(v___x_2978_);
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
lean_dec_ref(v___x_2952_);
lean_dec(v___x_2951_);
lean_dec_ref(v_params_2946_);
v_a_3042_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___x_2987_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v___x_2987_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
}
else
{
lean_object* v_a_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3057_; 
lean_del_object(v___x_2978_);
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
lean_dec_ref(v___x_2952_);
lean_dec(v___x_2951_);
lean_dec_ref(v_params_2946_);
v_a_3050_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3052_ = v___x_2985_;
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_a_3050_);
lean_dec(v___x_2985_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3055_; 
if (v_isShared_3053_ == 0)
{
v___x_3055_ = v___x_3052_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_a_3050_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
}
else
{
lean_dec(v_a_2972_);
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
lean_dec_ref(v___x_2952_);
lean_dec(v___x_2951_);
lean_dec_ref(v_params_2946_);
lean_dec_ref(v___x_2941_);
return v___x_2976_;
}
}
else
{
lean_object* v_a_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3067_; 
lean_dec(v_a_2972_);
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
lean_dec_ref(v___x_2952_);
lean_dec(v___x_2951_);
lean_dec_ref(v_params_2946_);
lean_dec_ref(v___x_2941_);
v_a_3060_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3062_ = v___x_2974_;
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_a_3060_);
lean_dec(v___x_2974_);
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
else
{
lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3075_; 
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
lean_dec_ref(v___x_2952_);
lean_dec(v___x_2951_);
lean_dec_ref(v_params_2946_);
lean_dec_ref(v___x_2944_);
lean_dec_ref(v___x_2941_);
v_a_3068_ = lean_ctor_get(v___x_2971_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3070_ = v___x_2971_;
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_dec(v___x_2971_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3073_; 
if (v_isShared_3071_ == 0)
{
v___x_3073_ = v___x_3070_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_a_3068_);
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
else
{
lean_object* v___x_3076_; lean_object* v___x_3077_; 
lean_dec(v_a_2968_);
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
lean_dec_ref(v___x_2952_);
lean_dec(v___x_2951_);
lean_dec_ref(v_params_2946_);
lean_dec_ref(v___x_2944_);
lean_dec(v___x_2943_);
lean_dec_ref(v___x_2941_);
v___x_3076_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10);
v___x_3077_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v___x_3076_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_);
return v___x_3077_;
}
}
else
{
lean_object* v_a_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3085_; 
lean_dec(v___x_2954_);
lean_dec_ref(v___f_2953_);
lean_dec_ref(v___x_2952_);
lean_dec(v___x_2951_);
lean_dec_ref(v_params_2946_);
lean_dec_ref(v___x_2944_);
lean_dec(v___x_2943_);
lean_dec_ref(v___x_2941_);
v_a_3078_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3080_ = v___x_2967_;
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_a_3078_);
lean_dec(v___x_2967_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3083_; 
if (v_isShared_3081_ == 0)
{
v___x_3083_ = v___x_3080_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v_a_3078_);
v___x_3083_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
return v___x_3083_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___boxed(lean_object** _args){
lean_object* v___x_3086_ = _args[0];
lean_object* v___x_3087_ = _args[1];
lean_object* v___x_3088_ = _args[2];
lean_object* v___x_3089_ = _args[3];
lean_object* v___x_3090_ = _args[4];
lean_object* v___x_3091_ = _args[5];
lean_object* v___x_3092_ = _args[6];
lean_object* v_params_3093_ = _args[7];
lean_object* v_args_3094_ = _args[8];
lean_object* v_indices_3095_ = _args[9];
lean_object* v___x_3096_ = _args[10];
lean_object* v_a_3097_ = _args[11];
lean_object* v___x_3098_ = _args[12];
lean_object* v___x_3099_ = _args[13];
lean_object* v___f_3100_ = _args[14];
lean_object* v___x_3101_ = _args[15];
lean_object* v_targetArgs_3102_ = _args[16];
lean_object* v_x_3103_ = _args[17];
lean_object* v___y_3104_ = _args[18];
lean_object* v___y_3105_ = _args[19];
lean_object* v___y_3106_ = _args[20];
lean_object* v___y_3107_ = _args[21];
lean_object* v___y_3108_ = _args[22];
_start:
{
uint8_t v___x_16799__boxed_3109_; uint8_t v___x_16802__boxed_3110_; uint8_t v___x_16803__boxed_3111_; lean_object* v_res_3112_; 
v___x_16799__boxed_3109_ = lean_unbox(v___x_3089_);
v___x_16802__boxed_3110_ = lean_unbox(v___x_3092_);
v___x_16803__boxed_3111_ = lean_unbox(v___x_3096_);
v_res_3112_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3(v___x_3086_, v___x_3087_, v___x_3088_, v___x_16799__boxed_3109_, v___x_3090_, v___x_3091_, v___x_16802__boxed_3110_, v_params_3093_, v_args_3094_, v_indices_3095_, v___x_16803__boxed_3111_, v_a_3097_, v___x_3098_, v___x_3099_, v___f_3100_, v___x_3101_, v_targetArgs_3102_, v_x_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
lean_dec(v___y_3105_);
lean_dec_ref(v___y_3104_);
lean_dec_ref(v_x_3103_);
lean_dec_ref(v_targetArgs_3102_);
lean_dec_ref(v_a_3097_);
lean_dec_ref(v_indices_3095_);
lean_dec_ref(v_args_3094_);
lean_dec(v___x_3087_);
lean_dec(v___x_3086_);
return v_res_3112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4(lean_object* v___x_3113_, lean_object* v___x_3114_, lean_object* v___x_3115_, uint8_t v___x_3116_, lean_object* v___x_3117_, lean_object* v___x_3118_, uint8_t v___x_3119_, lean_object* v_params_3120_, lean_object* v_args_3121_, uint8_t v___x_3122_, lean_object* v_a_3123_, lean_object* v___x_3124_, lean_object* v___x_3125_, lean_object* v___f_3126_, lean_object* v___x_3127_, lean_object* v___x_3128_, lean_object* v_indices_3129_, lean_object* v_goalType_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_){
_start:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___f_3140_; lean_object* v___x_3141_; 
v___x_3136_ = l_Lean_mkAppN(v___x_3113_, v_indices_3129_);
v___x_3137_ = lean_box(v___x_3116_);
v___x_3138_ = lean_box(v___x_3119_);
v___x_3139_ = lean_box(v___x_3122_);
v___f_3140_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___boxed), 23, 16);
lean_closure_set(v___f_3140_, 0, v___x_3114_);
lean_closure_set(v___f_3140_, 1, v___x_3115_);
lean_closure_set(v___f_3140_, 2, v___x_3136_);
lean_closure_set(v___f_3140_, 3, v___x_3137_);
lean_closure_set(v___f_3140_, 4, v___x_3117_);
lean_closure_set(v___f_3140_, 5, v___x_3118_);
lean_closure_set(v___f_3140_, 6, v___x_3138_);
lean_closure_set(v___f_3140_, 7, v_params_3120_);
lean_closure_set(v___f_3140_, 8, v_args_3121_);
lean_closure_set(v___f_3140_, 9, v_indices_3129_);
lean_closure_set(v___f_3140_, 10, v___x_3139_);
lean_closure_set(v___f_3140_, 11, v_a_3123_);
lean_closure_set(v___f_3140_, 12, v___x_3124_);
lean_closure_set(v___f_3140_, 13, v___x_3125_);
lean_closure_set(v___f_3140_, 14, v___f_3126_);
lean_closure_set(v___f_3140_, 15, v___x_3127_);
v___x_3141_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v_goalType_3130_, v___x_3128_, v___f_3140_, v___x_3122_, v___x_3122_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4___boxed(lean_object** _args){
lean_object* v___x_3142_ = _args[0];
lean_object* v___x_3143_ = _args[1];
lean_object* v___x_3144_ = _args[2];
lean_object* v___x_3145_ = _args[3];
lean_object* v___x_3146_ = _args[4];
lean_object* v___x_3147_ = _args[5];
lean_object* v___x_3148_ = _args[6];
lean_object* v_params_3149_ = _args[7];
lean_object* v_args_3150_ = _args[8];
lean_object* v___x_3151_ = _args[9];
lean_object* v_a_3152_ = _args[10];
lean_object* v___x_3153_ = _args[11];
lean_object* v___x_3154_ = _args[12];
lean_object* v___f_3155_ = _args[13];
lean_object* v___x_3156_ = _args[14];
lean_object* v___x_3157_ = _args[15];
lean_object* v_indices_3158_ = _args[16];
lean_object* v_goalType_3159_ = _args[17];
lean_object* v___y_3160_ = _args[18];
lean_object* v___y_3161_ = _args[19];
lean_object* v___y_3162_ = _args[20];
lean_object* v___y_3163_ = _args[21];
lean_object* v___y_3164_ = _args[22];
_start:
{
uint8_t v___x_17135__boxed_3165_; uint8_t v___x_17138__boxed_3166_; uint8_t v___x_17139__boxed_3167_; lean_object* v_res_3168_; 
v___x_17135__boxed_3165_ = lean_unbox(v___x_3145_);
v___x_17138__boxed_3166_ = lean_unbox(v___x_3148_);
v___x_17139__boxed_3167_ = lean_unbox(v___x_3151_);
v_res_3168_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4(v___x_3142_, v___x_3143_, v___x_3144_, v___x_17135__boxed_3165_, v___x_3146_, v___x_3147_, v___x_17138__boxed_3166_, v_params_3149_, v_args_3150_, v___x_17139__boxed_3167_, v_a_3152_, v___x_3153_, v___x_3154_, v___f_3155_, v___x_3156_, v___x_3157_, v_indices_3158_, v_goalType_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5(lean_object* v___x_3169_, uint8_t v___x_3170_, lean_object* v_snd_3171_, lean_object* v___x_3172_, uint8_t v___x_3173_, lean_object* v___x_3174_, lean_object* v___x_3175_, lean_object* v_a_3176_, lean_object* v___x_3177_, lean_object* v___x_3178_, uint8_t v___x_3179_, lean_object* v___x_3180_, lean_object* v_params_3181_, lean_object* v_args_3182_, lean_object* v_a_3183_, lean_object* v___x_3184_, lean_object* v___x_3185_, lean_object* v___f_3186_, lean_object* v___x_3187_, lean_object* v___x_3188_, lean_object* v_numIndices_3189_, lean_object* v_goalType_3190_, lean_object* v___x_3191_, lean_object* v___x_3192_, lean_object* v_fst_3193_, lean_object* v___x_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_){
_start:
{
lean_object* v_lctx_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; uint8_t v___x_3203_; lean_object* v___x_3204_; uint8_t v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v_lctx_3200_ = lean_ctor_get(v___y_3195_, 2);
lean_inc(v___x_3169_);
lean_inc_ref(v_lctx_3200_);
v___x_3201_ = l_Lean_LocalContext_get_x21(v_lctx_3200_, v___x_3169_);
v___x_3202_ = l_Lean_LocalDecl_type(v___x_3201_);
lean_dec_ref(v___x_3201_);
v___x_3203_ = 2;
v___x_3204_ = lean_box(0);
v___x_3205_ = 0;
v___x_3206_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3206_, 0, v___x_3204_);
lean_ctor_set_uint8(v___x_3206_, sizeof(void*)*1, v___x_3203_);
lean_ctor_set_uint8(v___x_3206_, sizeof(void*)*1 + 1, v___x_3170_);
lean_ctor_set_uint8(v___x_3206_, sizeof(void*)*1 + 2, v___x_3205_);
lean_inc_ref(v___x_3172_);
lean_inc(v_snd_3171_);
v___x_3207_ = l_Lean_MVarId_rewrite(v_snd_3171_, v___x_3202_, v___x_3172_, v___x_3170_, v___x_3206_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v_a_3208_; lean_object* v_eNew_3209_; lean_object* v_eqProof_3210_; lean_object* v___x_3211_; lean_object* v___f_3212_; lean_object* v___x_3213_; 
v_a_3208_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_a_3208_);
lean_dec_ref_known(v___x_3207_, 1);
v_eNew_3209_ = lean_ctor_get(v_a_3208_, 0);
lean_inc_ref(v_eNew_3209_);
v_eqProof_3210_ = lean_ctor_get(v_a_3208_, 1);
lean_inc_ref(v_eqProof_3210_);
lean_dec(v_a_3208_);
lean_inc(v___x_3169_);
v___x_3211_ = l_Lean_mkFVar(v___x_3169_);
lean_inc(v_snd_3171_);
v___f_3212_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__2___boxed), 10, 5);
lean_closure_set(v___f_3212_, 0, v_eqProof_3210_);
lean_closure_set(v___f_3212_, 1, v___x_3211_);
lean_closure_set(v___f_3212_, 2, v_eNew_3209_);
lean_closure_set(v___f_3212_, 3, v_snd_3171_);
lean_closure_set(v___f_3212_, 4, v___x_3169_);
v___x_3213_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(v_snd_3171_, v___f_3212_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
if (lean_obj_tag(v___x_3213_) == 0)
{
lean_object* v_a_3214_; lean_object* v___y_3216_; uint8_t v___x_3244_; 
v_a_3214_ = lean_ctor_get(v___x_3213_, 0);
lean_inc(v_a_3214_);
lean_dec_ref_known(v___x_3213_, 1);
v___x_3244_ = lean_nat_dec_lt(v___x_3191_, v___x_3192_);
if (v___x_3244_ == 0)
{
v___y_3216_ = v_fst_3193_;
goto v___jp_3215_;
}
else
{
lean_object* v_fvarId_3245_; lean_object* v_xs_x27_3246_; lean_object* v___x_3247_; 
v_fvarId_3245_ = lean_ctor_get(v_a_3214_, 0);
v_xs_x27_3246_ = lean_array_fset(v_fst_3193_, v___x_3191_, v___x_3194_);
lean_inc(v_fvarId_3245_);
v___x_3247_ = lean_array_fset(v_xs_x27_3246_, v___x_3191_, v_fvarId_3245_);
v___y_3216_ = v___x_3247_;
goto v___jp_3215_;
}
v___jp_3215_:
{
lean_object* v_mvarId_3217_; lean_object* v___x_3218_; 
v_mvarId_3217_ = lean_ctor_get(v_a_3214_, 1);
lean_inc(v_mvarId_3217_);
lean_dec(v_a_3214_);
v___x_3218_ = l_Lean_MVarId_revert(v_mvarId_3217_, v___y_3216_, v___x_3173_, v___x_3173_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v_a_3219_; lean_object* v_snd_3220_; lean_object* v___x_3221_; 
v_a_3219_ = lean_ctor_get(v___x_3218_, 0);
lean_inc(v_a_3219_);
lean_dec_ref_known(v___x_3218_, 1);
v_snd_3220_ = lean_ctor_get(v_a_3219_, 1);
lean_inc(v_snd_3220_);
lean_dec(v_a_3219_);
v___x_3221_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__4___redArg(v_snd_3220_, v___x_3174_, v___y_3196_);
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3234_; 
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3234_ == 0)
{
lean_object* v_unused_3235_; 
v_unused_3235_ = lean_ctor_get(v___x_3221_, 0);
lean_dec(v_unused_3235_);
v___x_3223_ = v___x_3221_;
v_isShared_3224_ = v_isSharedCheck_3234_;
goto v_resetjp_3222_;
}
else
{
lean_dec(v___x_3221_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3234_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___f_3229_; lean_object* v___x_3231_; 
v___x_3225_ = l_Lean_Expr_app___override(v___x_3175_, v_a_3176_);
v___x_3226_ = lean_box(v___x_3179_);
v___x_3227_ = lean_box(v___x_3170_);
v___x_3228_ = lean_box(v___x_3173_);
v___f_3229_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__4___boxed), 23, 16);
lean_closure_set(v___f_3229_, 0, v___x_3225_);
lean_closure_set(v___f_3229_, 1, v___x_3177_);
lean_closure_set(v___f_3229_, 2, v___x_3178_);
lean_closure_set(v___f_3229_, 3, v___x_3226_);
lean_closure_set(v___f_3229_, 4, v___x_3180_);
lean_closure_set(v___f_3229_, 5, v___x_3172_);
lean_closure_set(v___f_3229_, 6, v___x_3227_);
lean_closure_set(v___f_3229_, 7, v_params_3181_);
lean_closure_set(v___f_3229_, 8, v_args_3182_);
lean_closure_set(v___f_3229_, 9, v___x_3228_);
lean_closure_set(v___f_3229_, 10, v_a_3183_);
lean_closure_set(v___f_3229_, 11, v___x_3184_);
lean_closure_set(v___f_3229_, 12, v___x_3185_);
lean_closure_set(v___f_3229_, 13, v___f_3186_);
lean_closure_set(v___f_3229_, 14, v___x_3187_);
lean_closure_set(v___f_3229_, 15, v___x_3188_);
if (v_isShared_3224_ == 0)
{
lean_ctor_set_tag(v___x_3223_, 1);
lean_ctor_set(v___x_3223_, 0, v_numIndices_3189_);
v___x_3231_ = v___x_3223_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_numIndices_3189_);
v___x_3231_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
lean_object* v___x_3232_; 
v___x_3232_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v_goalType_3190_, v___x_3231_, v___f_3229_, v___x_3173_, v___x_3173_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
lean_dec_ref(v___y_3195_);
return v___x_3232_;
}
}
}
else
{
lean_dec_ref(v___y_3195_);
lean_dec_ref(v_goalType_3190_);
lean_dec(v_numIndices_3189_);
lean_dec(v___x_3188_);
lean_dec(v___x_3187_);
lean_dec_ref(v___f_3186_);
lean_dec_ref(v___x_3185_);
lean_dec(v___x_3184_);
lean_dec_ref(v_a_3183_);
lean_dec_ref(v_args_3182_);
lean_dec_ref(v_params_3181_);
lean_dec(v___x_3180_);
lean_dec(v___x_3178_);
lean_dec(v___x_3177_);
lean_dec_ref(v_a_3176_);
lean_dec_ref(v___x_3175_);
lean_dec_ref(v___x_3172_);
return v___x_3221_;
}
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
lean_dec_ref(v___y_3195_);
lean_dec_ref(v_goalType_3190_);
lean_dec(v_numIndices_3189_);
lean_dec(v___x_3188_);
lean_dec(v___x_3187_);
lean_dec_ref(v___f_3186_);
lean_dec_ref(v___x_3185_);
lean_dec(v___x_3184_);
lean_dec_ref(v_a_3183_);
lean_dec_ref(v_args_3182_);
lean_dec_ref(v_params_3181_);
lean_dec(v___x_3180_);
lean_dec(v___x_3178_);
lean_dec(v___x_3177_);
lean_dec_ref(v_a_3176_);
lean_dec_ref(v___x_3175_);
lean_dec_ref(v___x_3174_);
lean_dec_ref(v___x_3172_);
v_a_3236_ = lean_ctor_get(v___x_3218_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3218_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3218_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v___x_3218_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
}
else
{
lean_object* v_a_3248_; lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3255_; 
lean_dec_ref(v___y_3195_);
lean_dec_ref(v_fst_3193_);
lean_dec_ref(v_goalType_3190_);
lean_dec(v_numIndices_3189_);
lean_dec(v___x_3188_);
lean_dec(v___x_3187_);
lean_dec_ref(v___f_3186_);
lean_dec_ref(v___x_3185_);
lean_dec(v___x_3184_);
lean_dec_ref(v_a_3183_);
lean_dec_ref(v_args_3182_);
lean_dec_ref(v_params_3181_);
lean_dec(v___x_3180_);
lean_dec(v___x_3178_);
lean_dec(v___x_3177_);
lean_dec_ref(v_a_3176_);
lean_dec_ref(v___x_3175_);
lean_dec_ref(v___x_3174_);
lean_dec_ref(v___x_3172_);
v_a_3248_ = lean_ctor_get(v___x_3213_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3213_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3250_ = v___x_3213_;
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
else
{
lean_inc(v_a_3248_);
lean_dec(v___x_3213_);
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
else
{
lean_object* v_a_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3263_; 
lean_dec_ref(v___y_3195_);
lean_dec_ref(v_fst_3193_);
lean_dec_ref(v_goalType_3190_);
lean_dec(v_numIndices_3189_);
lean_dec(v___x_3188_);
lean_dec(v___x_3187_);
lean_dec_ref(v___f_3186_);
lean_dec_ref(v___x_3185_);
lean_dec(v___x_3184_);
lean_dec_ref(v_a_3183_);
lean_dec_ref(v_args_3182_);
lean_dec_ref(v_params_3181_);
lean_dec(v___x_3180_);
lean_dec(v___x_3178_);
lean_dec(v___x_3177_);
lean_dec_ref(v_a_3176_);
lean_dec_ref(v___x_3175_);
lean_dec_ref(v___x_3174_);
lean_dec_ref(v___x_3172_);
lean_dec(v_snd_3171_);
lean_dec(v___x_3169_);
v_a_3256_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3258_ = v___x_3207_;
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_a_3256_);
lean_dec(v___x_3207_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3261_; 
if (v_isShared_3259_ == 0)
{
v___x_3261_ = v___x_3258_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v_a_3256_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
return v___x_3261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5___boxed(lean_object** _args){
lean_object* v___x_3264_ = _args[0];
lean_object* v___x_3265_ = _args[1];
lean_object* v_snd_3266_ = _args[2];
lean_object* v___x_3267_ = _args[3];
lean_object* v___x_3268_ = _args[4];
lean_object* v___x_3269_ = _args[5];
lean_object* v___x_3270_ = _args[6];
lean_object* v_a_3271_ = _args[7];
lean_object* v___x_3272_ = _args[8];
lean_object* v___x_3273_ = _args[9];
lean_object* v___x_3274_ = _args[10];
lean_object* v___x_3275_ = _args[11];
lean_object* v_params_3276_ = _args[12];
lean_object* v_args_3277_ = _args[13];
lean_object* v_a_3278_ = _args[14];
lean_object* v___x_3279_ = _args[15];
lean_object* v___x_3280_ = _args[16];
lean_object* v___f_3281_ = _args[17];
lean_object* v___x_3282_ = _args[18];
lean_object* v___x_3283_ = _args[19];
lean_object* v_numIndices_3284_ = _args[20];
lean_object* v_goalType_3285_ = _args[21];
lean_object* v___x_3286_ = _args[22];
lean_object* v___x_3287_ = _args[23];
lean_object* v_fst_3288_ = _args[24];
lean_object* v___x_3289_ = _args[25];
lean_object* v___y_3290_ = _args[26];
lean_object* v___y_3291_ = _args[27];
lean_object* v___y_3292_ = _args[28];
lean_object* v___y_3293_ = _args[29];
lean_object* v___y_3294_ = _args[30];
_start:
{
uint8_t v___x_17202__boxed_3295_; uint8_t v___x_17205__boxed_3296_; uint8_t v___x_17211__boxed_3297_; lean_object* v_res_3298_; 
v___x_17202__boxed_3295_ = lean_unbox(v___x_3265_);
v___x_17205__boxed_3296_ = lean_unbox(v___x_3268_);
v___x_17211__boxed_3297_ = lean_unbox(v___x_3274_);
v_res_3298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5(v___x_3264_, v___x_17202__boxed_3295_, v_snd_3266_, v___x_3267_, v___x_17205__boxed_3296_, v___x_3269_, v___x_3270_, v_a_3271_, v___x_3272_, v___x_3273_, v___x_17211__boxed_3297_, v___x_3275_, v_params_3276_, v_args_3277_, v_a_3278_, v___x_3279_, v___x_3280_, v___f_3281_, v___x_3282_, v___x_3283_, v_numIndices_3284_, v_goalType_3285_, v___x_3286_, v___x_3287_, v_fst_3288_, v___x_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
lean_dec(v___y_3291_);
lean_dec(v___x_3287_);
lean_dec(v___x_3286_);
return v_res_3298_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1(uint8_t v___x_3299_, lean_object* v_x_3300_){
_start:
{
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1___boxed(lean_object* v___x_3301_, lean_object* v_x_3302_){
_start:
{
uint8_t v___x_17401__boxed_3303_; uint8_t v_res_3304_; lean_object* v_r_3305_; 
v___x_17401__boxed_3303_ = lean_unbox(v___x_3301_);
v_res_3304_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__1(v___x_17401__boxed_3303_, v_x_3302_);
lean_dec(v_x_3302_);
v_r_3305_ = lean_box(v_res_3304_);
return v_r_3305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6(lean_object* v___x_3309_, lean_object* v_a_3310_, lean_object* v___x_3311_, lean_object* v_numIndices_3312_, lean_object* v___x_3313_, lean_object* v___x_3314_, lean_object* v___x_3315_, lean_object* v_params_3316_, lean_object* v_a_3317_, lean_object* v___x_3318_, lean_object* v___x_3319_, lean_object* v___x_3320_, lean_object* v___x_3321_, lean_object* v_args_3322_, lean_object* v_goalType_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_){
_start:
{
lean_object* v___x_3329_; uint8_t v___x_3330_; 
v___x_3329_ = lean_array_get_size(v_args_3322_);
v___x_3330_ = lean_nat_dec_eq(v___x_3329_, v___x_3309_);
if (v___x_3330_ == 0)
{
lean_object* v___x_3331_; lean_object* v___x_3332_; 
lean_dec_ref(v_goalType_3323_);
lean_dec_ref(v_args_3322_);
lean_dec(v___x_3320_);
lean_dec_ref(v___x_3319_);
lean_dec(v___x_3318_);
lean_dec_ref(v_a_3317_);
lean_dec_ref(v_params_3316_);
lean_dec_ref(v___x_3315_);
lean_dec_ref(v___x_3314_);
lean_dec(v_numIndices_3312_);
lean_dec(v___x_3311_);
lean_dec(v___x_3309_);
v___x_3331_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__1);
v___x_3332_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v___x_3331_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
return v___x_3332_;
}
else
{
if (lean_obj_tag(v_a_3310_) == 7)
{
lean_object* v_binderType_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; uint8_t v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; 
v_binderType_3333_ = lean_ctor_get(v_a_3310_, 1);
v___x_3334_ = lean_array_fget(v_args_3322_, v___x_3311_);
lean_inc_ref(v_binderType_3333_);
v___x_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3335_, 0, v_binderType_3333_);
v___x_3336_ = 0;
v___x_3337_ = lean_box(0);
v___x_3338_ = l_Lean_Meta_mkFreshExprMVar(v___x_3335_, v___x_3336_, v___x_3337_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
if (lean_obj_tag(v___x_3338_) == 0)
{
lean_object* v_a_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; uint8_t v___x_3343_; lean_object* v___f_3344_; lean_object* v___x_3345_; 
v_a_3339_ = lean_ctor_get(v___x_3338_, 0);
lean_inc(v_a_3339_);
lean_dec_ref_known(v___x_3338_, 1);
v___x_3340_ = l_Lean_Expr_mvarId_x21(v_a_3339_);
v___x_3341_ = lean_nat_add(v_numIndices_3312_, v___x_3309_);
v___x_3342_ = lean_box(0);
v___x_3343_ = 0;
v___f_3344_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___closed__0));
v___x_3345_ = l_Lean_Meta_introNCore(v___x_3340_, v___x_3341_, v___x_3342_, v___x_3343_, v___x_3343_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
if (lean_obj_tag(v___x_3345_) == 0)
{
lean_object* v_a_3346_; lean_object* v_fst_3347_; lean_object* v_snd_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___f_3355_; lean_object* v___x_3356_; 
v_a_3346_ = lean_ctor_get(v___x_3345_, 0);
lean_inc(v_a_3346_);
lean_dec_ref_known(v___x_3345_, 1);
v_fst_3347_ = lean_ctor_get(v_a_3346_, 0);
lean_inc(v_fst_3347_);
v_snd_3348_ = lean_ctor_get(v_a_3346_, 1);
lean_inc_n(v_snd_3348_, 2);
lean_dec(v_a_3346_);
v___x_3349_ = lean_array_get_size(v_fst_3347_);
v___x_3350_ = lean_nat_sub(v___x_3349_, v___x_3309_);
v___x_3351_ = lean_array_get(v___x_3313_, v_fst_3347_, v___x_3350_);
v___x_3352_ = lean_box(v___x_3330_);
v___x_3353_ = lean_box(v___x_3343_);
v___x_3354_ = lean_box(v___x_3336_);
v___f_3355_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__5___boxed), 31, 26);
lean_closure_set(v___f_3355_, 0, v___x_3351_);
lean_closure_set(v___f_3355_, 1, v___x_3352_);
lean_closure_set(v___f_3355_, 2, v_snd_3348_);
lean_closure_set(v___f_3355_, 3, v___x_3314_);
lean_closure_set(v___f_3355_, 4, v___x_3353_);
lean_closure_set(v___f_3355_, 5, v___x_3334_);
lean_closure_set(v___f_3355_, 6, v___x_3315_);
lean_closure_set(v___f_3355_, 7, v_a_3339_);
lean_closure_set(v___f_3355_, 8, v___x_3309_);
lean_closure_set(v___f_3355_, 9, v___x_3311_);
lean_closure_set(v___f_3355_, 10, v___x_3354_);
lean_closure_set(v___f_3355_, 11, v___x_3337_);
lean_closure_set(v___f_3355_, 12, v_params_3316_);
lean_closure_set(v___f_3355_, 13, v_args_3322_);
lean_closure_set(v___f_3355_, 14, v_a_3317_);
lean_closure_set(v___f_3355_, 15, v___x_3318_);
lean_closure_set(v___f_3355_, 16, v___x_3319_);
lean_closure_set(v___f_3355_, 17, v___f_3344_);
lean_closure_set(v___f_3355_, 18, v___x_3342_);
lean_closure_set(v___f_3355_, 19, v___x_3320_);
lean_closure_set(v___f_3355_, 20, v_numIndices_3312_);
lean_closure_set(v___f_3355_, 21, v_goalType_3323_);
lean_closure_set(v___f_3355_, 22, v___x_3350_);
lean_closure_set(v___f_3355_, 23, v___x_3349_);
lean_closure_set(v___f_3355_, 24, v_fst_3347_);
lean_closure_set(v___f_3355_, 25, v___x_3321_);
v___x_3356_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__4___redArg(v_snd_3348_, v___f_3355_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
return v___x_3356_;
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3364_; 
lean_dec(v_a_3339_);
lean_dec(v___x_3334_);
lean_dec_ref(v_goalType_3323_);
lean_dec_ref(v_args_3322_);
lean_dec(v___x_3320_);
lean_dec_ref(v___x_3319_);
lean_dec(v___x_3318_);
lean_dec_ref(v_a_3317_);
lean_dec_ref(v_params_3316_);
lean_dec_ref(v___x_3315_);
lean_dec_ref(v___x_3314_);
lean_dec(v_numIndices_3312_);
lean_dec(v___x_3311_);
lean_dec(v___x_3309_);
v_a_3357_ = lean_ctor_get(v___x_3345_, 0);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3359_ = v___x_3345_;
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3345_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___x_3362_; 
if (v_isShared_3360_ == 0)
{
v___x_3362_ = v___x_3359_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_a_3357_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
}
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3372_; 
lean_dec(v___x_3334_);
lean_dec_ref(v_goalType_3323_);
lean_dec_ref(v_args_3322_);
lean_dec(v___x_3320_);
lean_dec_ref(v___x_3319_);
lean_dec(v___x_3318_);
lean_dec_ref(v_a_3317_);
lean_dec_ref(v_params_3316_);
lean_dec_ref(v___x_3315_);
lean_dec_ref(v___x_3314_);
lean_dec(v_numIndices_3312_);
lean_dec(v___x_3311_);
lean_dec(v___x_3309_);
v_a_3365_ = lean_ctor_get(v___x_3338_, 0);
v_isSharedCheck_3372_ = !lean_is_exclusive(v___x_3338_);
if (v_isSharedCheck_3372_ == 0)
{
v___x_3367_ = v___x_3338_;
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v___x_3338_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3368_ == 0)
{
v___x_3370_ = v___x_3367_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v_a_3365_);
v___x_3370_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
return v___x_3370_;
}
}
}
}
else
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
lean_dec_ref(v_goalType_3323_);
lean_dec_ref(v_args_3322_);
lean_dec(v___x_3320_);
lean_dec_ref(v___x_3319_);
lean_dec(v___x_3318_);
lean_dec_ref(v_a_3317_);
lean_dec_ref(v_params_3316_);
lean_dec_ref(v___x_3315_);
lean_dec_ref(v___x_3314_);
lean_dec(v_numIndices_3312_);
lean_dec(v___x_3311_);
lean_dec(v___x_3309_);
v___x_3373_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__3___closed__10);
v___x_3374_ = l_Lean_throwError___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__1___redArg(v___x_3373_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
return v___x_3374_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___boxed(lean_object** _args){
lean_object* v___x_3375_ = _args[0];
lean_object* v_a_3376_ = _args[1];
lean_object* v___x_3377_ = _args[2];
lean_object* v_numIndices_3378_ = _args[3];
lean_object* v___x_3379_ = _args[4];
lean_object* v___x_3380_ = _args[5];
lean_object* v___x_3381_ = _args[6];
lean_object* v_params_3382_ = _args[7];
lean_object* v_a_3383_ = _args[8];
lean_object* v___x_3384_ = _args[9];
lean_object* v___x_3385_ = _args[10];
lean_object* v___x_3386_ = _args[11];
lean_object* v___x_3387_ = _args[12];
lean_object* v_args_3388_ = _args[13];
lean_object* v_goalType_3389_ = _args[14];
lean_object* v___y_3390_ = _args[15];
lean_object* v___y_3391_ = _args[16];
lean_object* v___y_3392_ = _args[17];
lean_object* v___y_3393_ = _args[18];
lean_object* v___y_3394_ = _args[19];
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6(v___x_3375_, v_a_3376_, v___x_3377_, v_numIndices_3378_, v___x_3379_, v___x_3380_, v___x_3381_, v_params_3382_, v_a_3383_, v___x_3384_, v___x_3385_, v___x_3386_, v___x_3387_, v_args_3388_, v_goalType_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_);
lean_dec(v___y_3393_);
lean_dec_ref(v___y_3392_);
lean_dec(v___y_3391_);
lean_dec_ref(v___y_3390_);
lean_dec(v___x_3379_);
lean_dec_ref(v_a_3376_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4(lean_object* v_constName_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_){
_start:
{
lean_object* v___x_3402_; lean_object* v_env_3403_; uint8_t v___x_3404_; lean_object* v___x_3405_; 
v___x_3402_ = lean_st_ref_get(v___y_3400_);
v_env_3403_ = lean_ctor_get(v___x_3402_, 0);
lean_inc_ref(v_env_3403_);
lean_dec(v___x_3402_);
v___x_3404_ = 0;
lean_inc(v_constName_3396_);
v___x_3405_ = l_Lean_Environment_findConstVal_x3f(v_env_3403_, v_constName_3396_, v___x_3404_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v___x_3406_; 
v___x_3406_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(v_constName_3396_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_);
return v___x_3406_;
}
else
{
lean_object* v_val_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3414_; 
lean_dec(v_constName_3396_);
v_val_3407_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3409_ = v___x_3405_;
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_val_3407_);
lean_dec(v___x_3405_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3412_; 
if (v_isShared_3410_ == 0)
{
lean_ctor_set_tag(v___x_3409_, 0);
v___x_3412_ = v___x_3409_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v_val_3407_);
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
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4___boxed(lean_object* v_constName_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_){
_start:
{
lean_object* v_res_3421_; 
v_res_3421_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4(v_constName_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_);
lean_dec(v___y_3419_);
lean_dec_ref(v___y_3418_);
lean_dec(v___y_3417_);
lean_dec_ref(v___y_3416_);
return v_res_3421_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3(lean_object* v_constName_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v___x_3428_; 
lean_inc(v_constName_3422_);
v___x_3428_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3_spec__4(v_constName_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_a_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3440_; 
v_a_3429_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3431_ = v___x_3428_;
v_isShared_3432_ = v_isSharedCheck_3440_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_a_3429_);
lean_dec(v___x_3428_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3440_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v_levelParams_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3438_; 
v_levelParams_3433_ = lean_ctor_get(v_a_3429_, 1);
lean_inc(v_levelParams_3433_);
lean_dec(v_a_3429_);
v___x_3434_ = lean_box(0);
v___x_3435_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(v_levelParams_3433_, v___x_3434_);
v___x_3436_ = l_Lean_mkConst(v_constName_3422_, v___x_3435_);
if (v_isShared_3432_ == 0)
{
lean_ctor_set(v___x_3431_, 0, v___x_3436_);
v___x_3438_ = v___x_3431_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v___x_3436_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
}
else
{
lean_object* v_a_3441_; lean_object* v___x_3443_; uint8_t v_isShared_3444_; uint8_t v_isSharedCheck_3448_; 
lean_dec(v_constName_3422_);
v_a_3441_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3443_ = v___x_3428_;
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
else
{
lean_inc(v_a_3441_);
lean_dec(v___x_3428_);
v___x_3443_ = lean_box(0);
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
v_resetjp_3442_:
{
lean_object* v___x_3446_; 
if (v_isShared_3444_ == 0)
{
v___x_3446_ = v___x_3443_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_a_3441_);
v___x_3446_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
return v___x_3446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3___boxed(lean_object* v_constName_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_){
_start:
{
lean_object* v_res_3455_; 
v_res_3455_ = l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3(v_constName_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
lean_dec(v___y_3453_);
lean_dec_ref(v___y_3452_);
lean_dec(v___y_3451_);
lean_dec_ref(v___y_3450_);
return v_res_3455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6(lean_object* v___y_3458_, lean_object* v_levels_3459_, lean_object* v_params_3460_, lean_object* v_predicates_3461_, lean_object* v_as_3462_, size_t v_sz_3463_, size_t v_i_3464_, lean_object* v_b_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_){
_start:
{
uint8_t v___x_3471_; 
v___x_3471_ = lean_usize_dec_lt(v_i_3464_, v_sz_3463_);
if (v___x_3471_ == 0)
{
lean_object* v___x_3472_; 
lean_dec_ref(v_params_3460_);
lean_dec(v_levels_3459_);
lean_dec_ref(v___y_3458_);
v___x_3472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3472_, 0, v_b_3465_);
return v___x_3472_;
}
else
{
lean_object* v_a_3473_; lean_object* v_toConstantVal_3474_; lean_object* v_numParams_3475_; lean_object* v_numIndices_3476_; lean_object* v_name_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___f_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v_a_3473_ = lean_array_uget_borrowed(v_as_3462_, v_i_3464_);
v_toConstantVal_3474_ = lean_ctor_get(v_a_3473_, 0);
v_numParams_3475_ = lean_ctor_get(v_a_3473_, 1);
v_numIndices_3476_ = lean_ctor_get(v_a_3473_, 2);
v_name_3477_ = lean_ctor_get(v_toConstantVal_3474_, 0);
v___x_3478_ = lean_unsigned_to_nat(0u);
v___x_3479_ = lean_box(0);
v___x_3480_ = lean_box(0);
lean_inc_ref(v_params_3460_);
lean_inc(v_levels_3459_);
lean_inc_ref(v___y_3458_);
lean_inc_n(v_name_3477_, 2);
lean_inc(v_numParams_3475_);
v___f_3481_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__0___boxed), 7, 6);
lean_closure_set(v___f_3481_, 0, v_numParams_3475_);
lean_closure_set(v___f_3481_, 1, v_name_3477_);
lean_closure_set(v___f_3481_, 2, v___y_3458_);
lean_closure_set(v___f_3481_, 3, v___x_3478_);
lean_closure_set(v___f_3481_, 4, v_levels_3459_);
lean_closure_set(v___f_3481_, 5, v_params_3460_);
v___x_3482_ = l_Lean_mkCasesOnName(v_name_3477_);
lean_inc(v___x_3482_);
v___x_3483_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2(v___x_3482_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v_a_3484_; lean_object* v___x_3485_; 
v_a_3484_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3484_);
lean_dec_ref_known(v___x_3483_, 1);
v___x_3485_ = l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__3(v___x_3482_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3485_) == 0)
{
lean_object* v_a_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v_a_3486_ = lean_ctor_get(v___x_3485_, 0);
lean_inc(v_a_3486_);
lean_dec_ref_known(v___x_3485_, 1);
lean_inc_ref(v_params_3460_);
v___x_3487_ = l_Array_append___redArg(v_params_3460_, v_predicates_3461_);
v___x_3488_ = l_Lean_mkAppN(v_a_3486_, v___x_3487_);
lean_dec_ref(v___x_3487_);
lean_inc(v___y_3469_);
lean_inc_ref(v___y_3468_);
lean_inc(v___y_3467_);
lean_inc_ref(v___y_3466_);
lean_inc_ref(v___x_3488_);
v___x_3489_ = lean_infer_type(v___x_3488_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3489_, 1);
v___x_3491_ = lean_replace_expr(v___f_3481_, v_a_3490_);
lean_dec(v_a_3490_);
lean_dec_ref(v___f_3481_);
lean_inc(v___y_3469_);
lean_inc_ref(v___y_3468_);
lean_inc(v___y_3467_);
lean_inc_ref(v___y_3466_);
lean_inc_ref(v___x_3488_);
v___x_3492_ = lean_infer_type(v___x_3488_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_object* v_a_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___f_3500_; uint8_t v___x_3501_; lean_object* v___x_3502_; 
v_a_3493_ = lean_ctor_get(v___x_3492_, 0);
lean_inc(v_a_3493_);
lean_dec_ref_known(v___x_3492_, 1);
lean_inc(v_name_3477_);
v___x_3494_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_3477_);
v___x_3495_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__1));
lean_inc(v___x_3494_);
v___x_3496_ = l_Lean_Name_append(v___x_3494_, v___x_3495_);
lean_inc(v_levels_3459_);
v___x_3497_ = l_Lean_mkConst(v___x_3496_, v_levels_3459_);
v___x_3498_ = lean_unsigned_to_nat(1u);
v___x_3499_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___closed__0));
lean_inc_ref(v___x_3491_);
lean_inc_ref(v_params_3460_);
lean_inc(v_numIndices_3476_);
v___f_3500_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___lam__6___boxed), 20, 13);
lean_closure_set(v___f_3500_, 0, v___x_3498_);
lean_closure_set(v___f_3500_, 1, v_a_3493_);
lean_closure_set(v___f_3500_, 2, v___x_3478_);
lean_closure_set(v___f_3500_, 3, v_numIndices_3476_);
lean_closure_set(v___f_3500_, 4, v___x_3479_);
lean_closure_set(v___f_3500_, 5, v___x_3497_);
lean_closure_set(v___f_3500_, 6, v___x_3488_);
lean_closure_set(v___f_3500_, 7, v_params_3460_);
lean_closure_set(v___f_3500_, 8, v_a_3484_);
lean_closure_set(v___f_3500_, 9, v___x_3494_);
lean_closure_set(v___f_3500_, 10, v___x_3491_);
lean_closure_set(v___f_3500_, 11, v___x_3499_);
lean_closure_set(v___f_3500_, 12, v___x_3480_);
v___x_3501_ = 0;
v___x_3502_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v___x_3491_, v___x_3499_, v___f_3500_, v___x_3501_, v___x_3501_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3502_) == 0)
{
size_t v___x_3503_; size_t v___x_3504_; 
lean_dec_ref_known(v___x_3502_, 1);
v___x_3503_ = ((size_t)1ULL);
v___x_3504_ = lean_usize_add(v_i_3464_, v___x_3503_);
v_i_3464_ = v___x_3504_;
v_b_3465_ = v___x_3480_;
goto _start;
}
else
{
lean_dec_ref(v_params_3460_);
lean_dec(v_levels_3459_);
lean_dec_ref(v___y_3458_);
return v___x_3502_;
}
}
else
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
lean_dec_ref(v___x_3491_);
lean_dec_ref(v___x_3488_);
lean_dec(v_a_3484_);
lean_dec_ref(v_params_3460_);
lean_dec(v_levels_3459_);
lean_dec_ref(v___y_3458_);
v_a_3506_ = lean_ctor_get(v___x_3492_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v___x_3492_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v___x_3492_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
else
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_dec_ref(v___x_3488_);
lean_dec(v_a_3484_);
lean_dec_ref(v___f_3481_);
lean_dec_ref(v_params_3460_);
lean_dec(v_levels_3459_);
lean_dec_ref(v___y_3458_);
v_a_3514_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3489_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3489_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
}
else
{
lean_object* v_a_3522_; lean_object* v___x_3524_; uint8_t v_isShared_3525_; uint8_t v_isSharedCheck_3529_; 
lean_dec(v_a_3484_);
lean_dec_ref(v___f_3481_);
lean_dec_ref(v_params_3460_);
lean_dec(v_levels_3459_);
lean_dec_ref(v___y_3458_);
v_a_3522_ = lean_ctor_get(v___x_3485_, 0);
v_isSharedCheck_3529_ = !lean_is_exclusive(v___x_3485_);
if (v_isSharedCheck_3529_ == 0)
{
v___x_3524_ = v___x_3485_;
v_isShared_3525_ = v_isSharedCheck_3529_;
goto v_resetjp_3523_;
}
else
{
lean_inc(v_a_3522_);
lean_dec(v___x_3485_);
v___x_3524_ = lean_box(0);
v_isShared_3525_ = v_isSharedCheck_3529_;
goto v_resetjp_3523_;
}
v_resetjp_3523_:
{
lean_object* v___x_3527_; 
if (v_isShared_3525_ == 0)
{
v___x_3527_ = v___x_3524_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v_a_3522_);
v___x_3527_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
return v___x_3527_;
}
}
}
}
else
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3537_; 
lean_dec(v___x_3482_);
lean_dec_ref(v___f_3481_);
lean_dec_ref(v_params_3460_);
lean_dec(v_levels_3459_);
lean_dec_ref(v___y_3458_);
v_a_3530_ = lean_ctor_get(v___x_3483_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v___x_3483_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3532_ = v___x_3483_;
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___x_3483_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6___boxed(lean_object* v___y_3538_, lean_object* v_levels_3539_, lean_object* v_params_3540_, lean_object* v_predicates_3541_, lean_object* v_as_3542_, lean_object* v_sz_3543_, lean_object* v_i_3544_, lean_object* v_b_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_){
_start:
{
size_t v_sz_boxed_3551_; size_t v_i_boxed_3552_; lean_object* v_res_3553_; 
v_sz_boxed_3551_ = lean_unbox_usize(v_sz_3543_);
lean_dec(v_sz_3543_);
v_i_boxed_3552_ = lean_unbox_usize(v_i_3544_);
lean_dec(v_i_3544_);
v_res_3553_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6(v___y_3538_, v_levels_3539_, v_params_3540_, v_predicates_3541_, v_as_3542_, v_sz_boxed_3551_, v_i_boxed_3552_, v_b_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_);
lean_dec(v___y_3549_);
lean_dec_ref(v___y_3548_);
lean_dec(v___y_3547_);
lean_dec_ref(v___y_3546_);
lean_dec_ref(v_as_3542_);
lean_dec_ref(v_predicates_3541_);
return v_res_3553_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0(lean_object* v_levels_3554_, size_t v_sz_3555_, size_t v_i_3556_, lean_object* v_bs_3557_){
_start:
{
uint8_t v___x_3558_; 
v___x_3558_ = lean_usize_dec_lt(v_i_3556_, v_sz_3555_);
if (v___x_3558_ == 0)
{
lean_dec(v_levels_3554_);
return v_bs_3557_;
}
else
{
lean_object* v_v_3559_; lean_object* v_toConstantVal_3560_; lean_object* v_name_3561_; lean_object* v___x_3562_; lean_object* v_bs_x27_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; size_t v___x_3566_; size_t v___x_3567_; lean_object* v___x_3568_; 
v_v_3559_ = lean_array_uget_borrowed(v_bs_3557_, v_i_3556_);
v_toConstantVal_3560_ = lean_ctor_get(v_v_3559_, 0);
v_name_3561_ = lean_ctor_get(v_toConstantVal_3560_, 0);
lean_inc(v_name_3561_);
v___x_3562_ = lean_unsigned_to_nat(0u);
v_bs_x27_3563_ = lean_array_uset(v_bs_3557_, v_i_3556_, v___x_3562_);
v___x_3564_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_3561_);
lean_inc(v_levels_3554_);
v___x_3565_ = l_Lean_mkConst(v___x_3564_, v_levels_3554_);
v___x_3566_ = ((size_t)1ULL);
v___x_3567_ = lean_usize_add(v_i_3556_, v___x_3566_);
v___x_3568_ = lean_array_uset(v_bs_x27_3563_, v_i_3556_, v___x_3565_);
v_i_3556_ = v___x_3567_;
v_bs_3557_ = v___x_3568_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0___boxed(lean_object* v_levels_3570_, lean_object* v_sz_3571_, lean_object* v_i_3572_, lean_object* v_bs_3573_){
_start:
{
size_t v_sz_boxed_3574_; size_t v_i_boxed_3575_; lean_object* v_res_3576_; 
v_sz_boxed_3574_ = lean_unbox_usize(v_sz_3571_);
lean_dec(v_sz_3571_);
v_i_boxed_3575_ = lean_unbox_usize(v_i_3572_);
lean_dec(v_i_3572_);
v_res_3576_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0(v_levels_3570_, v_sz_boxed_3574_, v_i_boxed_3575_, v_bs_3573_);
return v_res_3576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0(lean_object* v_infos_3577_, lean_object* v_levels_3578_, lean_object* v___y_3579_, lean_object* v_params_3580_, lean_object* v_x_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_){
_start:
{
size_t v_sz_3587_; size_t v___x_3588_; lean_object* v_predicates_3589_; size_t v_sz_3590_; lean_object* v_predicates_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v_sz_3587_ = lean_array_size(v_infos_3577_);
v___x_3588_ = ((size_t)0ULL);
lean_inc_ref(v_infos_3577_);
lean_inc(v_levels_3578_);
v_predicates_3589_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__0(v_levels_3578_, v_sz_3587_, v___x_3588_, v_infos_3577_);
v_sz_3590_ = lean_array_size(v_predicates_3589_);
v_predicates_3591_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(v_params_3580_, v_sz_3590_, v___x_3588_, v_predicates_3589_);
v___x_3592_ = lean_box(0);
v___x_3593_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__6(v___y_3579_, v_levels_3578_, v_params_3580_, v_predicates_3591_, v_infos_3577_, v_sz_3587_, v___x_3588_, v___x_3592_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_);
lean_dec_ref(v_infos_3577_);
lean_dec_ref(v_predicates_3591_);
if (lean_obj_tag(v___x_3593_) == 0)
{
lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3600_; 
v_isSharedCheck_3600_ = !lean_is_exclusive(v___x_3593_);
if (v_isSharedCheck_3600_ == 0)
{
lean_object* v_unused_3601_; 
v_unused_3601_ = lean_ctor_get(v___x_3593_, 0);
lean_dec(v_unused_3601_);
v___x_3595_ = v___x_3593_;
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
else
{
lean_dec(v___x_3593_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3598_; 
if (v_isShared_3596_ == 0)
{
lean_ctor_set(v___x_3595_, 0, v___x_3592_);
v___x_3598_ = v___x_3595_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v___x_3592_);
v___x_3598_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
return v___x_3598_;
}
}
}
else
{
return v___x_3593_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0___boxed(lean_object* v_infos_3602_, lean_object* v_levels_3603_, lean_object* v___y_3604_, lean_object* v_params_3605_, lean_object* v_x_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_){
_start:
{
lean_object* v_res_3612_; 
v_res_3612_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0(v_infos_3602_, v_levels_3603_, v___y_3604_, v_params_3605_, v_x_3606_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_);
lean_dec(v___y_3610_);
lean_dec_ref(v___y_3609_);
lean_dec(v___y_3608_);
lean_dec_ref(v___y_3607_);
lean_dec_ref(v_x_3606_);
return v_res_3612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7(lean_object* v_as_3613_, size_t v_i_3614_, size_t v_stop_3615_, lean_object* v_b_3616_){
_start:
{
uint8_t v___x_3617_; 
v___x_3617_ = lean_usize_dec_eq(v_i_3614_, v_stop_3615_);
if (v___x_3617_ == 0)
{
lean_object* v___x_3618_; lean_object* v_ctors_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; size_t v___x_3622_; size_t v___x_3623_; 
v___x_3618_ = lean_array_uget_borrowed(v_as_3613_, v_i_3614_);
v_ctors_3619_ = lean_ctor_get(v___x_3618_, 4);
lean_inc(v_ctors_3619_);
v___x_3620_ = lean_array_mk(v_ctors_3619_);
v___x_3621_ = l_Array_append___redArg(v_b_3616_, v___x_3620_);
lean_dec_ref(v___x_3620_);
v___x_3622_ = ((size_t)1ULL);
v___x_3623_ = lean_usize_add(v_i_3614_, v___x_3622_);
v_i_3614_ = v___x_3623_;
v_b_3616_ = v___x_3621_;
goto _start;
}
else
{
return v_b_3616_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7___boxed(lean_object* v_as_3625_, lean_object* v_i_3626_, lean_object* v_stop_3627_, lean_object* v_b_3628_){
_start:
{
size_t v_i_boxed_3629_; size_t v_stop_boxed_3630_; lean_object* v_res_3631_; 
v_i_boxed_3629_ = lean_unbox_usize(v_i_3626_);
lean_dec(v_i_3626_);
v_stop_boxed_3630_ = lean_unbox_usize(v_stop_3627_);
lean_dec(v_stop_3627_);
v_res_3631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7(v_as_3625_, v_i_boxed_3629_, v_stop_boxed_3630_, v_b_3628_);
lean_dec_ref(v_as_3625_);
return v_res_3631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive(lean_object* v_infos_3634_, lean_object* v_a_3635_, lean_object* v_a_3636_, lean_object* v_a_3637_, lean_object* v_a_3638_){
_start:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v_toConstantVal_3643_; lean_object* v_numParams_3644_; lean_object* v_levelParams_3645_; lean_object* v_type_3646_; lean_object* v___x_3647_; lean_object* v_levels_3648_; lean_object* v___y_3650_; lean_object* v___x_3657_; lean_object* v___x_3658_; uint8_t v___x_3659_; 
v___x_3640_ = l_Lean_instInhabitedInductiveVal_default;
v___x_3641_ = lean_unsigned_to_nat(0u);
v___x_3642_ = lean_array_get_borrowed(v___x_3640_, v_infos_3634_, v___x_3641_);
v_toConstantVal_3643_ = lean_ctor_get(v___x_3642_, 0);
v_numParams_3644_ = lean_ctor_get(v___x_3642_, 1);
lean_inc(v_numParams_3644_);
v_levelParams_3645_ = lean_ctor_get(v_toConstantVal_3643_, 1);
v_type_3646_ = lean_ctor_get(v_toConstantVal_3643_, 2);
lean_inc_ref(v_type_3646_);
v___x_3647_ = lean_box(0);
lean_inc(v_levelParams_3645_);
v_levels_3648_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(v_levelParams_3645_, v___x_3647_);
v___x_3657_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___closed__0));
v___x_3658_ = lean_array_get_size(v_infos_3634_);
v___x_3659_ = lean_nat_dec_lt(v___x_3641_, v___x_3658_);
if (v___x_3659_ == 0)
{
v___y_3650_ = v___x_3657_;
goto v___jp_3649_;
}
else
{
size_t v___x_3660_; size_t v___x_3661_; lean_object* v___x_3662_; 
v___x_3660_ = ((size_t)0ULL);
v___x_3661_ = lean_usize_of_nat(v___x_3658_);
v___x_3662_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__7(v_infos_3634_, v___x_3660_, v___x_3661_, v___x_3657_);
v___y_3650_ = v___x_3662_;
goto v___jp_3649_;
}
v___jp_3649_:
{
lean_object* v___f_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; uint8_t v___x_3655_; lean_object* v___x_3656_; 
lean_inc_ref(v_infos_3634_);
v___f_3651_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3651_, 0, v_infos_3634_);
lean_closure_set(v___f_3651_, 1, v_levels_3648_);
lean_closure_set(v___f_3651_, 2, v___y_3650_);
v___x_3652_ = lean_array_get_size(v_infos_3634_);
lean_dec_ref(v_infos_3634_);
v___x_3653_ = lean_nat_sub(v_numParams_3644_, v___x_3652_);
lean_dec(v_numParams_3644_);
v___x_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3654_, 0, v___x_3653_);
v___x_3655_ = 0;
v___x_3656_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__5___redArg(v_type_3646_, v___x_3654_, v___f_3651_, v___x_3655_, v___x_3655_, v_a_3635_, v_a_3636_, v_a_3637_, v_a_3638_);
return v___x_3656_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive___boxed(lean_object* v_infos_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_){
_start:
{
lean_object* v_res_3669_; 
v_res_3669_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive(v_infos_3663_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_);
lean_dec(v_a_3667_);
lean_dec_ref(v_a_3666_);
lean_dec(v_a_3665_);
lean_dec_ref(v_a_3664_);
return v_res_3669_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2(lean_object* v_00_u03b1_3670_, lean_object* v_constName_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___redArg(v_constName_3671_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2___boxed(lean_object* v_00_u03b1_3678_, lean_object* v_constName_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_){
_start:
{
lean_object* v_res_3685_; 
v_res_3685_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2(v_00_u03b1_3678_, v_constName_3679_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
return v_res_3685_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5(lean_object* v_00_u03b1_3686_, lean_object* v_ref_3687_, lean_object* v_constName_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_){
_start:
{
lean_object* v___x_3694_; 
v___x_3694_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___redArg(v_ref_3687_, v_constName_3688_, v___y_3689_, v___y_3690_, v___y_3691_, v___y_3692_);
return v___x_3694_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5___boxed(lean_object* v_00_u03b1_3695_, lean_object* v_ref_3696_, lean_object* v_constName_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5(v_00_u03b1_3695_, v_ref_3696_, v_constName_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_);
lean_dec(v___y_3701_);
lean_dec_ref(v___y_3700_);
lean_dec(v___y_3699_);
lean_dec_ref(v___y_3698_);
lean_dec(v_ref_3696_);
return v_res_3703_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9(lean_object* v_00_u03b1_3704_, lean_object* v_ref_3705_, lean_object* v_msg_3706_, lean_object* v_declHint_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___redArg(v_ref_3705_, v_msg_3706_, v_declHint_3707_, v___y_3708_, v___y_3709_, v___y_3710_, v___y_3711_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9___boxed(lean_object* v_00_u03b1_3714_, lean_object* v_ref_3715_, lean_object* v_msg_3716_, lean_object* v_declHint_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9(v_00_u03b1_3714_, v_ref_3715_, v_msg_3716_, v_declHint_3717_, v___y_3718_, v___y_3719_, v___y_3720_, v___y_3721_);
lean_dec(v___y_3721_);
lean_dec_ref(v___y_3720_);
lean_dec(v___y_3719_);
lean_dec_ref(v___y_3718_);
lean_dec(v_ref_3715_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12(lean_object* v_msg_3724_, lean_object* v_declHint_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_){
_start:
{
lean_object* v___x_3731_; 
v___x_3731_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___redArg(v_msg_3724_, v_declHint_3725_, v___y_3729_);
return v___x_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12___boxed(lean_object* v_msg_3732_, lean_object* v_declHint_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_){
_start:
{
lean_object* v_res_3739_; 
v_res_3739_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__11_spec__12(v_msg_3732_, v_declHint_3733_, v___y_3734_, v___y_3735_, v___y_3736_, v___y_3737_);
lean_dec(v___y_3737_);
lean_dec_ref(v___y_3736_);
lean_dec(v___y_3735_);
lean_dec_ref(v___y_3734_);
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12(lean_object* v_00_u03b1_3740_, lean_object* v_ref_3741_, lean_object* v_msg_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_){
_start:
{
lean_object* v___x_3748_; 
v___x_3748_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___redArg(v_ref_3741_, v_msg_3742_, v___y_3743_, v___y_3744_, v___y_3745_, v___y_3746_);
return v___x_3748_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12___boxed(lean_object* v_00_u03b1_3749_, lean_object* v_ref_3750_, lean_object* v_msg_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_){
_start:
{
lean_object* v_res_3757_; 
v_res_3757_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive_spec__2_spec__2_spec__5_spec__9_spec__12(v_00_u03b1_3749_, v_ref_3750_, v_msg_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_);
lean_dec(v___y_3755_);
lean_dec_ref(v___y_3754_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec(v_ref_3750_);
return v_res_3757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg(lean_object* v___x_3761_, lean_object* v___x_3762_, lean_object* v_params_3763_, size_t v_sz_3764_, size_t v_i_3765_, lean_object* v_bs_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_){
_start:
{
uint8_t v___x_3772_; 
v___x_3772_ = lean_usize_dec_lt(v_i_3765_, v_sz_3764_);
if (v___x_3772_ == 0)
{
lean_object* v___x_3773_; 
lean_dec_ref(v_params_3763_);
lean_dec_ref(v___x_3762_);
lean_dec(v___x_3761_);
v___x_3773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3773_, 0, v_bs_3766_);
return v___x_3773_;
}
else
{
lean_object* v_v_3774_; lean_object* v_toConstantVal_3775_; lean_object* v_name_3776_; lean_object* v___x_3777_; lean_object* v_bs_x27_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
v_v_3774_ = lean_array_uget_borrowed(v_bs_3766_, v_i_3765_);
v_toConstantVal_3775_ = lean_ctor_get(v_v_3774_, 0);
v_name_3776_ = lean_ctor_get(v_toConstantVal_3775_, 0);
lean_inc(v_name_3776_);
v___x_3777_ = lean_unsigned_to_nat(0u);
v_bs_x27_3778_ = lean_array_uset(v_bs_3766_, v_i_3765_, v___x_3777_);
v___x_3779_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___closed__1));
v___x_3780_ = l_Lean_Name_append(v_name_3776_, v___x_3779_);
lean_inc(v___x_3761_);
v___x_3781_ = l_Lean_mkConst(v___x_3780_, v___x_3761_);
v___x_3782_ = l_Lean_Meta_unfoldDefinition(v___x_3781_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_);
if (lean_obj_tag(v___x_3782_) == 0)
{
lean_object* v_a_3783_; size_t v_sz_3784_; size_t v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; uint8_t v___x_3789_; uint8_t v___x_3790_; lean_object* v___x_3791_; 
v_a_3783_ = lean_ctor_get(v___x_3782_, 0);
lean_inc(v_a_3783_);
lean_dec_ref_known(v___x_3782_, 1);
v_sz_3784_ = lean_array_size(v___x_3762_);
v___x_3785_ = ((size_t)0ULL);
lean_inc_ref(v___x_3762_);
v___x_3786_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__2(v_params_3763_, v_sz_3784_, v___x_3785_, v___x_3762_);
lean_inc_ref(v_params_3763_);
v___x_3787_ = l_Array_append___redArg(v_params_3763_, v___x_3786_);
lean_dec_ref(v___x_3786_);
v___x_3788_ = l_Lean_mkAppN(v_a_3783_, v___x_3787_);
lean_dec_ref(v___x_3787_);
v___x_3789_ = 0;
v___x_3790_ = 1;
v___x_3791_ = l_Lean_Meta_mkLambdaFVars(v_params_3763_, v___x_3788_, v___x_3789_, v___x_3772_, v___x_3789_, v___x_3772_, v___x_3790_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_);
if (lean_obj_tag(v___x_3791_) == 0)
{
lean_object* v_a_3792_; size_t v___x_3793_; size_t v___x_3794_; lean_object* v___x_3795_; 
v_a_3792_ = lean_ctor_get(v___x_3791_, 0);
lean_inc(v_a_3792_);
lean_dec_ref_known(v___x_3791_, 1);
v___x_3793_ = ((size_t)1ULL);
v___x_3794_ = lean_usize_add(v_i_3765_, v___x_3793_);
v___x_3795_ = lean_array_uset(v_bs_x27_3778_, v_i_3765_, v_a_3792_);
v_i_3765_ = v___x_3794_;
v_bs_3766_ = v___x_3795_;
goto _start;
}
else
{
lean_object* v_a_3797_; lean_object* v___x_3799_; uint8_t v_isShared_3800_; uint8_t v_isSharedCheck_3804_; 
lean_dec_ref(v_bs_x27_3778_);
lean_dec_ref(v_params_3763_);
lean_dec_ref(v___x_3762_);
lean_dec(v___x_3761_);
v_a_3797_ = lean_ctor_get(v___x_3791_, 0);
v_isSharedCheck_3804_ = !lean_is_exclusive(v___x_3791_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3799_ = v___x_3791_;
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
else
{
lean_inc(v_a_3797_);
lean_dec(v___x_3791_);
v___x_3799_ = lean_box(0);
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
v_resetjp_3798_:
{
lean_object* v___x_3802_; 
if (v_isShared_3800_ == 0)
{
v___x_3802_ = v___x_3799_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v_a_3797_);
v___x_3802_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
return v___x_3802_;
}
}
}
}
else
{
lean_object* v_a_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3812_; 
lean_dec_ref(v_bs_x27_3778_);
lean_dec_ref(v_params_3763_);
lean_dec_ref(v___x_3762_);
lean_dec(v___x_3761_);
v_a_3805_ = lean_ctor_get(v___x_3782_, 0);
v_isSharedCheck_3812_ = !lean_is_exclusive(v___x_3782_);
if (v_isSharedCheck_3812_ == 0)
{
v___x_3807_ = v___x_3782_;
v_isShared_3808_ = v_isSharedCheck_3812_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_a_3805_);
lean_dec(v___x_3782_);
v___x_3807_ = lean_box(0);
v_isShared_3808_ = v_isSharedCheck_3812_;
goto v_resetjp_3806_;
}
v_resetjp_3806_:
{
lean_object* v___x_3810_; 
if (v_isShared_3808_ == 0)
{
v___x_3810_ = v___x_3807_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v_a_3805_);
v___x_3810_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
return v___x_3810_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg___boxed(lean_object* v___x_3813_, lean_object* v___x_3814_, lean_object* v_params_3815_, lean_object* v_sz_3816_, lean_object* v_i_3817_, lean_object* v_bs_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_){
_start:
{
size_t v_sz_boxed_3824_; size_t v_i_boxed_3825_; lean_object* v_res_3826_; 
v_sz_boxed_3824_ = lean_unbox_usize(v_sz_3816_);
lean_dec(v_sz_3816_);
v_i_boxed_3825_ = lean_unbox_usize(v_i_3817_);
lean_dec(v_i_3817_);
v_res_3826_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg(v___x_3813_, v___x_3814_, v_params_3815_, v_sz_boxed_3824_, v_i_boxed_3825_, v_bs_3818_, v___y_3819_, v___y_3820_, v___y_3821_, v___y_3822_);
lean_dec(v___y_3822_);
lean_dec_ref(v___y_3821_);
lean_dec(v___y_3820_);
lean_dec_ref(v___y_3819_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___lam__0(lean_object* v___x_3827_, lean_object* v___x_3828_, size_t v_sz_3829_, size_t v___x_3830_, lean_object* v_a_3831_, lean_object* v_params_3832_, lean_object* v_x_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
lean_object* v___x_3841_; 
v___x_3841_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg(v___x_3827_, v___x_3828_, v_params_3832_, v_sz_3829_, v___x_3830_, v_a_3831_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_);
return v___x_3841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___lam__0___boxed(lean_object* v___x_3842_, lean_object* v___x_3843_, lean_object* v_sz_3844_, lean_object* v___x_3845_, lean_object* v_a_3846_, lean_object* v_params_3847_, lean_object* v_x_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_){
_start:
{
size_t v_sz_boxed_3856_; size_t v___x_5804__boxed_3857_; lean_object* v_res_3858_; 
v_sz_boxed_3856_ = lean_unbox_usize(v_sz_3844_);
lean_dec(v_sz_3844_);
v___x_5804__boxed_3857_ = lean_unbox_usize(v___x_3845_);
lean_dec(v___x_3845_);
v_res_3858_ = l_Lean_Elab_Command_elabCoinductive___lam__0(v___x_3842_, v___x_3843_, v_sz_boxed_3856_, v___x_5804__boxed_3857_, v_a_3846_, v_params_3847_, v_x_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
lean_dec(v___y_3852_);
lean_dec_ref(v___y_3851_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec_ref(v_x_3848_);
return v_res_3858_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0(lean_object* v___x_3859_, uint8_t v___x_3860_, lean_object* v_attr_3861_){
_start:
{
lean_object* v_name_3862_; lean_object* v___x_3863_; 
v_name_3862_ = lean_ctor_get(v_attr_3861_, 0);
lean_inc(v_name_3862_);
lean_dec_ref(v_attr_3861_);
v___x_3863_ = l_Lean_getAttributeImpl(v___x_3859_, v_name_3862_);
if (lean_obj_tag(v___x_3863_) == 0)
{
lean_dec_ref_known(v___x_3863_, 1);
return v___x_3860_;
}
else
{
lean_object* v_a_3864_; lean_object* v_toAttributeImplCore_3865_; uint8_t v_applicationTime_3866_; uint8_t v___x_3867_; uint8_t v___x_3868_; 
v_a_3864_ = lean_ctor_get(v___x_3863_, 0);
lean_inc(v_a_3864_);
lean_dec_ref_known(v___x_3863_, 1);
v_toAttributeImplCore_3865_ = lean_ctor_get(v_a_3864_, 0);
lean_inc_ref(v_toAttributeImplCore_3865_);
lean_dec(v_a_3864_);
v_applicationTime_3866_ = lean_ctor_get_uint8(v_toAttributeImplCore_3865_, sizeof(void*)*3);
lean_dec_ref(v_toAttributeImplCore_3865_);
v___x_3867_ = 1;
v___x_3868_ = l_Lean_instBEqAttributeApplicationTime_beq(v_applicationTime_3866_, v___x_3867_);
if (v___x_3868_ == 0)
{
return v___x_3860_;
}
else
{
uint8_t v___x_3869_; 
v___x_3869_ = 0;
return v___x_3869_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0___boxed(lean_object* v___x_3870_, lean_object* v___x_3871_, lean_object* v_attr_3872_){
_start:
{
uint8_t v___x_5841__boxed_3873_; uint8_t v_res_3874_; lean_object* v_r_3875_; 
v___x_5841__boxed_3873_ = lean_unbox(v___x_3871_);
v_res_3874_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0(v___x_3870_, v___x_5841__boxed_3873_, v_attr_3872_);
v_r_3875_ = lean_box(v_res_3874_);
return v_r_3875_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; 
v___x_3876_ = l_Lean_instInhabitedExpr;
v___x_3877_ = lean_box(0);
v___x_3878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
lean_ctor_set(v___x_3878_, 1, v___x_3876_);
return v___x_3878_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg(lean_object* v_coinductiveElabData_3879_, lean_object* v___x_3880_, lean_object* v_a_3881_, lean_object* v___x_3882_, size_t v_sz_3883_, size_t v_i_3884_, lean_object* v_bs_3885_){
_start:
{
uint8_t v___x_3886_; 
v___x_3886_ = lean_usize_dec_lt(v_i_3884_, v_sz_3883_);
if (v___x_3886_ == 0)
{
lean_dec(v___x_3882_);
lean_dec_ref(v___x_3880_);
return v_bs_3885_;
}
else
{
lean_object* v___x_3887_; lean_object* v_v_3888_; lean_object* v___x_3889_; lean_object* v_bs_x27_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v_modifiers_3893_; lean_object* v_ref_3894_; uint8_t v_isGreatest_3895_; lean_object* v_monotonicity_x3f_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3938_; 
v___x_3887_ = l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default;
v_v_3888_ = lean_array_uget(v_bs_3885_, v_i_3884_);
v___x_3889_ = lean_unsigned_to_nat(0u);
v_bs_x27_3890_ = lean_array_uset(v_bs_3885_, v_i_3884_, v___x_3889_);
v___x_3891_ = lean_usize_to_nat(v_i_3884_);
v___x_3892_ = lean_array_get(v___x_3887_, v_coinductiveElabData_3879_, v___x_3891_);
v_modifiers_3893_ = lean_ctor_get(v___x_3892_, 3);
v_ref_3894_ = lean_ctor_get(v___x_3892_, 2);
v_isGreatest_3895_ = lean_ctor_get_uint8(v___x_3892_, sizeof(void*)*6);
v_monotonicity_x3f_3896_ = lean_ctor_get(v___x_3892_, 5);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_3938_ == 0)
{
lean_object* v_unused_3939_; lean_object* v_unused_3940_; lean_object* v_unused_3941_; 
v_unused_3939_ = lean_ctor_get(v___x_3892_, 4);
lean_dec(v_unused_3939_);
v_unused_3940_ = lean_ctor_get(v___x_3892_, 1);
lean_dec(v_unused_3940_);
v_unused_3941_ = lean_ctor_get(v___x_3892_, 0);
lean_dec(v_unused_3941_);
v___x_3898_ = v___x_3892_;
v_isShared_3899_ = v_isSharedCheck_3938_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_monotonicity_x3f_3896_);
lean_inc(v_modifiers_3893_);
lean_inc(v_ref_3894_);
lean_dec(v___x_3892_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3938_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
lean_object* v_stx_3900_; uint8_t v_visibility_3901_; uint8_t v_isProtected_3902_; uint8_t v_computeKind_3903_; uint8_t v_recKind_3904_; uint8_t v_isUnsafe_3905_; lean_object* v_attrs_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3936_; 
v_stx_3900_ = lean_ctor_get(v_modifiers_3893_, 0);
v_visibility_3901_ = lean_ctor_get_uint8(v_modifiers_3893_, sizeof(void*)*3);
v_isProtected_3902_ = lean_ctor_get_uint8(v_modifiers_3893_, sizeof(void*)*3 + 1);
v_computeKind_3903_ = lean_ctor_get_uint8(v_modifiers_3893_, sizeof(void*)*3 + 2);
v_recKind_3904_ = lean_ctor_get_uint8(v_modifiers_3893_, sizeof(void*)*3 + 3);
v_isUnsafe_3905_ = lean_ctor_get_uint8(v_modifiers_3893_, sizeof(void*)*3 + 4);
v_attrs_3906_ = lean_ctor_get(v_modifiers_3893_, 2);
v_isSharedCheck_3936_ = !lean_is_exclusive(v_modifiers_3893_);
if (v_isSharedCheck_3936_ == 0)
{
lean_object* v_unused_3937_; 
v_unused_3937_ = lean_ctor_get(v_modifiers_3893_, 1);
lean_dec(v_unused_3937_);
v___x_3908_ = v_modifiers_3893_;
v_isShared_3909_ = v_isSharedCheck_3936_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_attrs_3906_);
lean_inc(v_stx_3900_);
lean_dec(v_modifiers_3893_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3936_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v_fst_3912_; lean_object* v_snd_3913_; lean_object* v___x_3914_; lean_object* v___f_3915_; lean_object* v___x_3916_; lean_object* v___x_3918_; 
v___x_3910_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___closed__0);
v___x_3911_ = lean_array_get_borrowed(v___x_3910_, v_a_3881_, v___x_3891_);
lean_dec(v___x_3891_);
v_fst_3912_ = lean_ctor_get(v___x_3911_, 0);
v_snd_3913_ = lean_ctor_get(v___x_3911_, 1);
v___x_3914_ = lean_box(v___x_3886_);
lean_inc_ref(v___x_3880_);
v___f_3915_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3915_, 0, v___x_3880_);
lean_closure_set(v___f_3915_, 1, v___x_3914_);
v___x_3916_ = lean_box(0);
if (v_isShared_3909_ == 0)
{
lean_ctor_set(v___x_3908_, 1, v___x_3916_);
v___x_3918_ = v___x_3908_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v_stx_3900_);
lean_ctor_set(v_reuseFailAlloc_3935_, 1, v___x_3916_);
lean_ctor_set(v_reuseFailAlloc_3935_, 2, v_attrs_3906_);
lean_ctor_set_uint8(v_reuseFailAlloc_3935_, sizeof(void*)*3, v_visibility_3901_);
lean_ctor_set_uint8(v_reuseFailAlloc_3935_, sizeof(void*)*3 + 1, v_isProtected_3902_);
lean_ctor_set_uint8(v_reuseFailAlloc_3935_, sizeof(void*)*3 + 2, v_computeKind_3903_);
lean_ctor_set_uint8(v_reuseFailAlloc_3935_, sizeof(void*)*3 + 3, v_recKind_3904_);
lean_ctor_set_uint8(v_reuseFailAlloc_3935_, sizeof(void*)*3 + 4, v_isUnsafe_3905_);
v___x_3918_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
lean_object* v___x_3919_; uint8_t v___x_3920_; uint8_t v___y_3922_; 
v___x_3919_ = l_Lean_Elab_Modifiers_filterAttrs(v___x_3918_, v___f_3915_);
v___x_3920_ = 0;
if (v_isGreatest_3895_ == 0)
{
uint8_t v___x_3933_; 
v___x_3933_ = 2;
v___y_3922_ = v___x_3933_;
goto v___jp_3921_;
}
else
{
uint8_t v___x_3934_; 
v___x_3934_ = 1;
v___y_3922_ = v___x_3934_;
goto v___jp_3921_;
}
v___jp_3921_:
{
lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3926_; 
lean_inc_n(v_ref_3894_, 2);
v___x_3923_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3923_, 0, v_ref_3894_);
lean_ctor_set(v___x_3923_, 1, v_monotonicity_x3f_3896_);
lean_ctor_set_uint8(v___x_3923_, sizeof(void*)*2, v___y_3922_);
v___x_3924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3924_, 0, v___x_3923_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 5, v___x_3889_);
lean_ctor_set(v___x_3898_, 4, v___x_3916_);
lean_ctor_set(v___x_3898_, 3, v___x_3924_);
lean_ctor_set(v___x_3898_, 2, v___x_3916_);
lean_ctor_set(v___x_3898_, 1, v___x_3916_);
lean_ctor_set(v___x_3898_, 0, v_ref_3894_);
v___x_3926_ = v___x_3898_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v_ref_3894_);
lean_ctor_set(v_reuseFailAlloc_3932_, 1, v___x_3916_);
lean_ctor_set(v_reuseFailAlloc_3932_, 2, v___x_3916_);
lean_ctor_set(v_reuseFailAlloc_3932_, 3, v___x_3924_);
lean_ctor_set(v_reuseFailAlloc_3932_, 4, v___x_3916_);
lean_ctor_set(v_reuseFailAlloc_3932_, 5, v___x_3889_);
v___x_3926_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
lean_object* v___x_3927_; size_t v___x_3928_; size_t v___x_3929_; lean_object* v___x_3930_; 
lean_ctor_set_uint8(v___x_3926_, sizeof(void*)*6, v___x_3886_);
lean_inc(v_snd_3913_);
lean_inc(v_fst_3912_);
lean_inc(v___x_3882_);
lean_inc(v_ref_3894_);
v___x_3927_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_3927_, 0, v_ref_3894_);
lean_ctor_set(v___x_3927_, 1, v___x_3882_);
lean_ctor_set(v___x_3927_, 2, v___x_3919_);
lean_ctor_set(v___x_3927_, 3, v_fst_3912_);
lean_ctor_set(v___x_3927_, 4, v_ref_3894_);
lean_ctor_set(v___x_3927_, 5, v___x_3889_);
lean_ctor_set(v___x_3927_, 6, v_snd_3913_);
lean_ctor_set(v___x_3927_, 7, v_v_3888_);
lean_ctor_set(v___x_3927_, 8, v___x_3926_);
lean_ctor_set_uint8(v___x_3927_, sizeof(void*)*9, v___x_3920_);
v___x_3928_ = ((size_t)1ULL);
v___x_3929_ = lean_usize_add(v_i_3884_, v___x_3928_);
v___x_3930_ = lean_array_uset(v_bs_x27_3890_, v_i_3884_, v___x_3927_);
v_i_3884_ = v___x_3929_;
v_bs_3885_ = v___x_3930_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg___boxed(lean_object* v_coinductiveElabData_3942_, lean_object* v___x_3943_, lean_object* v_a_3944_, lean_object* v___x_3945_, lean_object* v_sz_3946_, lean_object* v_i_3947_, lean_object* v_bs_3948_){
_start:
{
size_t v_sz_boxed_3949_; size_t v_i_boxed_3950_; lean_object* v_res_3951_; 
v_sz_boxed_3949_ = lean_unbox_usize(v_sz_3946_);
lean_dec(v_sz_3946_);
v_i_boxed_3950_ = lean_unbox_usize(v_i_3947_);
lean_dec(v_i_3947_);
v_res_3951_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg(v_coinductiveElabData_3942_, v___x_3943_, v_a_3944_, v___x_3945_, v_sz_boxed_3949_, v_i_boxed_3950_, v_bs_3948_);
lean_dec_ref(v_a_3944_);
lean_dec_ref(v_coinductiveElabData_3942_);
return v_res_3951_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3953_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__0));
v___x_3954_ = l_Lean_stringToMessageData(v___x_3953_);
return v___x_3954_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0(lean_object* v_constName_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_){
_start:
{
lean_object* v___x_3963_; lean_object* v_env_3964_; lean_object* v___x_3965_; 
v___x_3963_ = lean_st_ref_get(v___y_3961_);
v_env_3964_ = lean_ctor_get(v___x_3963_, 0);
lean_inc_ref(v_env_3964_);
lean_dec(v___x_3963_);
lean_inc(v_constName_3955_);
v___x_3965_ = l_Lean_isInductiveCore_x3f(v_env_3964_, v_constName_3955_);
if (lean_obj_tag(v___x_3965_) == 0)
{
lean_object* v___x_3966_; uint8_t v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; 
v___x_3966_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0___closed__1);
v___x_3967_ = 0;
v___x_3968_ = l_Lean_MessageData_ofConstName(v_constName_3955_, v___x_3967_);
v___x_3969_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3966_);
lean_ctor_set(v___x_3969_, 1, v___x_3968_);
v___x_3970_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___closed__1);
v___x_3971_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3969_);
lean_ctor_set(v___x_3971_, 1, v___x_3970_);
v___x_3972_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors_spec__0_spec__0___redArg(v___x_3971_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_);
return v___x_3972_;
}
else
{
lean_object* v_val_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_3980_; 
lean_dec(v_constName_3955_);
v_val_3973_ = lean_ctor_get(v___x_3965_, 0);
v_isSharedCheck_3980_ = !lean_is_exclusive(v___x_3965_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3975_ = v___x_3965_;
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_val_3973_);
lean_dec(v___x_3965_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3978_; 
if (v_isShared_3976_ == 0)
{
lean_ctor_set_tag(v___x_3975_, 0);
v___x_3978_ = v___x_3975_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_val_3973_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0___boxed(lean_object* v_constName_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_){
_start:
{
lean_object* v_res_3989_; 
v_res_3989_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0(v_constName_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_);
lean_dec(v___y_3987_);
lean_dec_ref(v___y_3986_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1(size_t v_sz_3990_, size_t v_i_3991_, lean_object* v_bs_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_){
_start:
{
uint8_t v___x_4000_; 
v___x_4000_ = lean_usize_dec_lt(v_i_3991_, v_sz_3990_);
if (v___x_4000_ == 0)
{
lean_object* v___x_4001_; 
v___x_4001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4001_, 0, v_bs_3992_);
return v___x_4001_;
}
else
{
lean_object* v_v_4002_; lean_object* v_declName_4003_; lean_object* v___x_4004_; lean_object* v_bs_x27_4005_; lean_object* v___x_4006_; 
v_v_4002_ = lean_array_uget_borrowed(v_bs_3992_, v_i_3991_);
v_declName_4003_ = lean_ctor_get(v_v_4002_, 1);
lean_inc(v_declName_4003_);
v___x_4004_ = lean_unsigned_to_nat(0u);
v_bs_x27_4005_ = lean_array_uset(v_bs_3992_, v_i_3991_, v___x_4004_);
v___x_4006_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Command_elabCoinductive_spec__0(v_declName_4003_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_);
if (lean_obj_tag(v___x_4006_) == 0)
{
lean_object* v_a_4007_; size_t v___x_4008_; size_t v___x_4009_; lean_object* v___x_4010_; 
v_a_4007_ = lean_ctor_get(v___x_4006_, 0);
lean_inc(v_a_4007_);
lean_dec_ref_known(v___x_4006_, 1);
v___x_4008_ = ((size_t)1ULL);
v___x_4009_ = lean_usize_add(v_i_3991_, v___x_4008_);
v___x_4010_ = lean_array_uset(v_bs_x27_4005_, v_i_3991_, v_a_4007_);
v_i_3991_ = v___x_4009_;
v_bs_3992_ = v___x_4010_;
goto _start;
}
else
{
lean_object* v_a_4012_; lean_object* v___x_4014_; uint8_t v_isShared_4015_; uint8_t v_isSharedCheck_4019_; 
lean_dec_ref(v_bs_x27_4005_);
v_a_4012_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4019_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4019_ == 0)
{
v___x_4014_ = v___x_4006_;
v_isShared_4015_ = v_isSharedCheck_4019_;
goto v_resetjp_4013_;
}
else
{
lean_inc(v_a_4012_);
lean_dec(v___x_4006_);
v___x_4014_ = lean_box(0);
v_isShared_4015_ = v_isSharedCheck_4019_;
goto v_resetjp_4013_;
}
v_resetjp_4013_:
{
lean_object* v___x_4017_; 
if (v_isShared_4015_ == 0)
{
v___x_4017_ = v___x_4014_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_a_4012_);
v___x_4017_ = v_reuseFailAlloc_4018_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
return v___x_4017_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1___boxed(lean_object* v_sz_4020_, lean_object* v_i_4021_, lean_object* v_bs_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_){
_start:
{
size_t v_sz_boxed_4030_; size_t v_i_boxed_4031_; lean_object* v_res_4032_; 
v_sz_boxed_4030_ = lean_unbox_usize(v_sz_4020_);
lean_dec(v_sz_4020_);
v_i_boxed_4031_ = lean_unbox_usize(v_i_4021_);
lean_dec(v_i_4021_);
v_res_4032_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1(v_sz_boxed_4030_, v_i_boxed_4031_, v_bs_4022_, v___y_4023_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
lean_dec(v___y_4028_);
lean_dec_ref(v___y_4027_);
lean_dec(v___y_4026_);
lean_dec_ref(v___y_4025_);
lean_dec(v___y_4024_);
lean_dec_ref(v___y_4023_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Command_elabCoinductive_spec__7(lean_object* v_a_4033_, lean_object* v_a_4034_){
_start:
{
if (lean_obj_tag(v_a_4033_) == 0)
{
lean_object* v___x_4035_; 
v___x_4035_ = l_List_reverse___redArg(v_a_4034_);
return v___x_4035_;
}
else
{
lean_object* v_head_4036_; lean_object* v_tail_4037_; lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4046_; 
v_head_4036_ = lean_ctor_get(v_a_4033_, 0);
v_tail_4037_ = lean_ctor_get(v_a_4033_, 1);
v_isSharedCheck_4046_ = !lean_is_exclusive(v_a_4033_);
if (v_isSharedCheck_4046_ == 0)
{
v___x_4039_ = v_a_4033_;
v_isShared_4040_ = v_isSharedCheck_4046_;
goto v_resetjp_4038_;
}
else
{
lean_inc(v_tail_4037_);
lean_inc(v_head_4036_);
lean_dec(v_a_4033_);
v___x_4039_ = lean_box(0);
v_isShared_4040_ = v_isSharedCheck_4046_;
goto v_resetjp_4038_;
}
v_resetjp_4038_:
{
lean_object* v___x_4041_; lean_object* v___x_4043_; 
v___x_4041_ = l_Lean_MessageData_ofName(v_head_4036_);
if (v_isShared_4040_ == 0)
{
lean_ctor_set(v___x_4039_, 1, v_a_4034_);
lean_ctor_set(v___x_4039_, 0, v___x_4041_);
v___x_4043_ = v___x_4039_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v___x_4041_);
lean_ctor_set(v_reuseFailAlloc_4045_, 1, v_a_4034_);
v___x_4043_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
v_a_4033_ = v_tail_4037_;
v_a_4034_ = v___x_4043_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6(size_t v_sz_4047_, size_t v_i_4048_, lean_object* v_bs_4049_){
_start:
{
uint8_t v___x_4050_; 
v___x_4050_ = lean_usize_dec_lt(v_i_4048_, v_sz_4047_);
if (v___x_4050_ == 0)
{
return v_bs_4049_;
}
else
{
lean_object* v_v_4051_; lean_object* v_declName_4052_; lean_object* v___x_4053_; lean_object* v_bs_x27_4054_; size_t v___x_4055_; size_t v___x_4056_; lean_object* v___x_4057_; 
v_v_4051_ = lean_array_uget_borrowed(v_bs_4049_, v_i_4048_);
v_declName_4052_ = lean_ctor_get(v_v_4051_, 1);
lean_inc(v_declName_4052_);
v___x_4053_ = lean_unsigned_to_nat(0u);
v_bs_x27_4054_ = lean_array_uset(v_bs_4049_, v_i_4048_, v___x_4053_);
v___x_4055_ = ((size_t)1ULL);
v___x_4056_ = lean_usize_add(v_i_4048_, v___x_4055_);
v___x_4057_ = lean_array_uset(v_bs_x27_4054_, v_i_4048_, v_declName_4052_);
v_i_4048_ = v___x_4056_;
v_bs_4049_ = v___x_4057_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6___boxed(lean_object* v_sz_4059_, lean_object* v_i_4060_, lean_object* v_bs_4061_){
_start:
{
size_t v_sz_boxed_4062_; size_t v_i_boxed_4063_; lean_object* v_res_4064_; 
v_sz_boxed_4062_ = lean_unbox_usize(v_sz_4059_);
lean_dec(v_sz_4059_);
v_i_boxed_4063_ = lean_unbox_usize(v_i_4060_);
lean_dec(v_i_4060_);
v_res_4064_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6(v_sz_boxed_4062_, v_i_boxed_4063_, v_bs_4061_);
return v_res_4064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0(lean_object* v___x_4065_, lean_object* v___x_4066_, lean_object* v_numParams_4067_, uint8_t v___x_4068_, lean_object* v_args_4069_, lean_object* v_body_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_){
_start:
{
lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; uint8_t v___x_4084_; uint8_t v___x_4085_; lean_object* v___x_4086_; 
lean_inc_ref(v_args_4069_);
v___x_4078_ = l_Array_toSubarray___redArg(v_args_4069_, v___x_4065_, v___x_4066_);
v___x_4079_ = l_Subarray_copy___redArg(v___x_4078_);
v___x_4080_ = lean_array_get_size(v_args_4069_);
v___x_4081_ = l_Array_toSubarray___redArg(v_args_4069_, v_numParams_4067_, v___x_4080_);
v___x_4082_ = l_Subarray_copy___redArg(v___x_4081_);
v___x_4083_ = l_Array_append___redArg(v___x_4079_, v___x_4082_);
lean_dec_ref(v___x_4082_);
v___x_4084_ = 0;
v___x_4085_ = 1;
v___x_4086_ = l_Lean_Meta_mkForallFVars(v___x_4083_, v_body_4070_, v___x_4084_, v___x_4068_, v___x_4068_, v___x_4085_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
lean_dec_ref(v___x_4083_);
return v___x_4086_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0___boxed(lean_object* v___x_4087_, lean_object* v___x_4088_, lean_object* v_numParams_4089_, lean_object* v___x_4090_, lean_object* v_args_4091_, lean_object* v_body_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_){
_start:
{
uint8_t v___x_6121__boxed_4100_; lean_object* v_res_4101_; 
v___x_6121__boxed_4100_ = lean_unbox(v___x_4090_);
v_res_4101_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0(v___x_4087_, v___x_4088_, v_numParams_4089_, v___x_6121__boxed_4100_, v_args_4091_, v_body_4092_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_);
lean_dec(v___y_4098_);
lean_dec_ref(v___y_4097_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
lean_dec(v___y_4094_);
lean_dec_ref(v___y_4093_);
return v_res_4101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2(lean_object* v___x_4102_, size_t v_sz_4103_, size_t v_i_4104_, lean_object* v_bs_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
uint8_t v___x_4113_; 
v___x_4113_ = lean_usize_dec_lt(v_i_4104_, v_sz_4103_);
if (v___x_4113_ == 0)
{
lean_object* v___x_4114_; 
lean_dec(v___x_4102_);
v___x_4114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4114_, 0, v_bs_4105_);
return v___x_4114_;
}
else
{
lean_object* v_v_4115_; lean_object* v_toConstantVal_4116_; lean_object* v_numParams_4117_; lean_object* v_name_4118_; lean_object* v_type_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___f_4122_; lean_object* v_bs_x27_4123_; uint8_t v___x_4124_; lean_object* v___x_4125_; 
v_v_4115_ = lean_array_uget_borrowed(v_bs_4105_, v_i_4104_);
v_toConstantVal_4116_ = lean_ctor_get(v_v_4115_, 0);
v_numParams_4117_ = lean_ctor_get(v_v_4115_, 1);
v_name_4118_ = lean_ctor_get(v_toConstantVal_4116_, 0);
lean_inc(v_name_4118_);
v_type_4119_ = lean_ctor_get(v_toConstantVal_4116_, 2);
lean_inc_ref(v_type_4119_);
v___x_4120_ = lean_unsigned_to_nat(0u);
v___x_4121_ = lean_box(v___x_4113_);
lean_inc(v_numParams_4117_);
lean_inc(v___x_4102_);
v___f_4122_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___lam__0___boxed), 13, 4);
lean_closure_set(v___f_4122_, 0, v___x_4120_);
lean_closure_set(v___f_4122_, 1, v___x_4102_);
lean_closure_set(v___f_4122_, 2, v_numParams_4117_);
lean_closure_set(v___f_4122_, 3, v___x_4121_);
v_bs_x27_4123_ = lean_array_uset(v_bs_4105_, v_i_4104_, v___x_4120_);
v___x_4124_ = 0;
v___x_4125_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__6___redArg(v_type_4119_, v___f_4122_, v___x_4124_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_);
if (lean_obj_tag(v___x_4125_) == 0)
{
lean_object* v_a_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; size_t v___x_4129_; size_t v___x_4130_; lean_object* v___x_4131_; 
v_a_4126_ = lean_ctor_get(v___x_4125_, 0);
lean_inc(v_a_4126_);
lean_dec_ref_known(v___x_4125_, 1);
v___x_4127_ = l_Lean_Elab_Command_removeFunctorPostfix(v_name_4118_);
v___x_4128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4128_, 0, v___x_4127_);
lean_ctor_set(v___x_4128_, 1, v_a_4126_);
v___x_4129_ = ((size_t)1ULL);
v___x_4130_ = lean_usize_add(v_i_4104_, v___x_4129_);
v___x_4131_ = lean_array_uset(v_bs_x27_4123_, v_i_4104_, v___x_4128_);
v_i_4104_ = v___x_4130_;
v_bs_4105_ = v___x_4131_;
goto _start;
}
else
{
lean_object* v_a_4133_; lean_object* v___x_4135_; uint8_t v_isShared_4136_; uint8_t v_isSharedCheck_4140_; 
lean_dec_ref(v_bs_x27_4123_);
lean_dec(v_name_4118_);
lean_dec(v___x_4102_);
v_a_4133_ = lean_ctor_get(v___x_4125_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v___x_4125_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4135_ = v___x_4125_;
v_isShared_4136_ = v_isSharedCheck_4140_;
goto v_resetjp_4134_;
}
else
{
lean_inc(v_a_4133_);
lean_dec(v___x_4125_);
v___x_4135_ = lean_box(0);
v_isShared_4136_ = v_isSharedCheck_4140_;
goto v_resetjp_4134_;
}
v_resetjp_4134_:
{
lean_object* v___x_4138_; 
if (v_isShared_4136_ == 0)
{
v___x_4138_ = v___x_4135_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v_a_4133_);
v___x_4138_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
return v___x_4138_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2___boxed(lean_object* v___x_4141_, lean_object* v_sz_4142_, lean_object* v_i_4143_, lean_object* v_bs_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_){
_start:
{
size_t v_sz_boxed_4152_; size_t v_i_boxed_4153_; lean_object* v_res_4154_; 
v_sz_boxed_4152_ = lean_unbox_usize(v_sz_4142_);
lean_dec(v_sz_4142_);
v_i_boxed_4153_ = lean_unbox_usize(v_i_4143_);
lean_dec(v_i_4143_);
v_res_4154_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2(v___x_4141_, v_sz_boxed_4152_, v_i_boxed_4153_, v_bs_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_);
lean_dec(v___y_4150_);
lean_dec_ref(v___y_4149_);
lean_dec(v___y_4148_);
lean_dec_ref(v___y_4147_);
lean_dec(v___y_4146_);
lean_dec_ref(v___y_4145_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3(lean_object* v___x_4155_, size_t v_sz_4156_, size_t v_i_4157_, lean_object* v_bs_4158_){
_start:
{
uint8_t v___x_4159_; 
v___x_4159_ = lean_usize_dec_lt(v_i_4157_, v_sz_4156_);
if (v___x_4159_ == 0)
{
lean_dec(v___x_4155_);
return v_bs_4158_;
}
else
{
lean_object* v_v_4160_; lean_object* v_fst_4161_; lean_object* v___x_4162_; lean_object* v_bs_x27_4163_; lean_object* v___x_4164_; size_t v___x_4165_; size_t v___x_4166_; lean_object* v___x_4167_; 
v_v_4160_ = lean_array_uget_borrowed(v_bs_4158_, v_i_4157_);
v_fst_4161_ = lean_ctor_get(v_v_4160_, 0);
lean_inc(v_fst_4161_);
v___x_4162_ = lean_unsigned_to_nat(0u);
v_bs_x27_4163_ = lean_array_uset(v_bs_4158_, v_i_4157_, v___x_4162_);
lean_inc(v___x_4155_);
v___x_4164_ = l_Lean_mkConst(v_fst_4161_, v___x_4155_);
v___x_4165_ = ((size_t)1ULL);
v___x_4166_ = lean_usize_add(v_i_4157_, v___x_4165_);
v___x_4167_ = lean_array_uset(v_bs_x27_4163_, v_i_4157_, v___x_4164_);
v_i_4157_ = v___x_4166_;
v_bs_4158_ = v___x_4167_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3___boxed(lean_object* v___x_4169_, lean_object* v_sz_4170_, lean_object* v_i_4171_, lean_object* v_bs_4172_){
_start:
{
size_t v_sz_boxed_4173_; size_t v_i_boxed_4174_; lean_object* v_res_4175_; 
v_sz_boxed_4173_ = lean_unbox_usize(v_sz_4170_);
lean_dec(v_sz_4170_);
v_i_boxed_4174_ = lean_unbox_usize(v_i_4171_);
lean_dec(v_i_4171_);
v_res_4175_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3(v___x_4169_, v_sz_boxed_4173_, v_i_boxed_4174_, v_bs_4172_);
return v_res_4175_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCoinductive___closed__1(void){
_start:
{
lean_object* v___x_4177_; lean_object* v___x_4178_; 
v___x_4177_ = ((lean_object*)(l_Lean_Elab_Command_elabCoinductive___closed__0));
v___x_4178_ = l_Lean_stringToMessageData(v___x_4177_);
return v___x_4178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive(lean_object* v_coinductiveElabData_4179_, lean_object* v_a_4180_, lean_object* v_a_4181_, lean_object* v_a_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_, lean_object* v_a_4185_){
_start:
{
lean_object* v_toCold_4187_; lean_object* v_options_4188_; lean_object* v_inheritedTraceOptions_4189_; uint8_t v_hasTrace_4190_; lean_object* v___x_4191_; lean_object* v___y_4193_; lean_object* v___y_4194_; lean_object* v___y_4195_; lean_object* v___y_4196_; lean_object* v___y_4197_; lean_object* v___y_4198_; 
v_toCold_4187_ = lean_ctor_get(v_a_4184_, 0);
v_options_4188_ = lean_ctor_get(v_toCold_4187_, 2);
v_inheritedTraceOptions_4189_ = lean_ctor_get(v_toCold_4187_, 11);
v_hasTrace_4190_ = lean_ctor_get_uint8(v_options_4188_, sizeof(void*)*1);
v___x_4191_ = l_Lean_instInhabitedInductiveVal_default;
if (v_hasTrace_4190_ == 0)
{
v___y_4193_ = v_a_4180_;
v___y_4194_ = v_a_4181_;
v___y_4195_ = v_a_4182_;
v___y_4196_ = v_a_4183_;
v___y_4197_ = v_a_4184_;
v___y_4198_ = v_a_4185_;
goto v___jp_4192_;
}
else
{
lean_object* v_cls_4260_; lean_object* v___x_4261_; uint8_t v___x_4262_; 
v_cls_4260_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_));
v___x_4261_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__9___closed__4);
v___x_4262_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4189_, v_options_4188_, v___x_4261_);
if (v___x_4262_ == 0)
{
v___y_4193_ = v_a_4180_;
v___y_4194_ = v_a_4181_;
v___y_4195_ = v_a_4182_;
v___y_4196_ = v_a_4183_;
v___y_4197_ = v_a_4184_;
v___y_4198_ = v_a_4185_;
goto v___jp_4192_;
}
else
{
lean_object* v___x_4263_; size_t v_sz_4264_; size_t v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; 
v___x_4263_ = lean_obj_once(&l_Lean_Elab_Command_elabCoinductive___closed__1, &l_Lean_Elab_Command_elabCoinductive___closed__1_once, _init_l_Lean_Elab_Command_elabCoinductive___closed__1);
v_sz_4264_ = lean_array_size(v_coinductiveElabData_4179_);
v___x_4265_ = ((size_t)0ULL);
lean_inc_ref(v_coinductiveElabData_4179_);
v___x_4266_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__6(v_sz_4264_, v___x_4265_, v_coinductiveElabData_4179_);
v___x_4267_ = lean_array_to_list(v___x_4266_);
v___x_4268_ = lean_box(0);
v___x_4269_ = l_List_mapTR_loop___at___00Lean_Elab_Command_elabCoinductive_spec__7(v___x_4267_, v___x_4268_);
v___x_4270_ = l_Lean_MessageData_ofList(v___x_4269_);
v___x_4271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4271_, 0, v___x_4263_);
lean_ctor_set(v___x_4271_, 1, v___x_4270_);
v___x_4272_ = l_Lean_addTrace___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__5___redArg(v_cls_4260_, v___x_4271_, v_a_4182_, v_a_4183_, v_a_4184_, v_a_4185_);
if (lean_obj_tag(v___x_4272_) == 0)
{
lean_dec_ref_known(v___x_4272_, 1);
v___y_4193_ = v_a_4180_;
v___y_4194_ = v_a_4181_;
v___y_4195_ = v_a_4182_;
v___y_4196_ = v_a_4183_;
v___y_4197_ = v_a_4184_;
v___y_4198_ = v_a_4185_;
goto v___jp_4192_;
}
else
{
lean_dec_ref(v_coinductiveElabData_4179_);
return v___x_4272_;
}
}
}
v___jp_4192_:
{
size_t v_sz_4199_; size_t v___x_4200_; lean_object* v___x_4201_; 
v_sz_4199_ = lean_array_size(v_coinductiveElabData_4179_);
v___x_4200_ = ((size_t)0ULL);
lean_inc_ref(v_coinductiveElabData_4179_);
v___x_4201_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__1(v_sz_4199_, v___x_4200_, v_coinductiveElabData_4179_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_);
if (lean_obj_tag(v___x_4201_) == 0)
{
lean_object* v_a_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v_toConstantVal_4205_; lean_object* v_numParams_4206_; lean_object* v_levelParams_4207_; lean_object* v_type_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; size_t v_sz_4213_; lean_object* v___x_4214_; 
v_a_4202_ = lean_ctor_get(v___x_4201_, 0);
lean_inc_n(v_a_4202_, 2);
lean_dec_ref_known(v___x_4201_, 1);
v___x_4203_ = lean_unsigned_to_nat(0u);
v___x_4204_ = lean_array_get_borrowed(v___x_4191_, v_a_4202_, v___x_4203_);
v_toConstantVal_4205_ = lean_ctor_get(v___x_4204_, 0);
v_numParams_4206_ = lean_ctor_get(v___x_4204_, 1);
v_levelParams_4207_ = lean_ctor_get(v_toConstantVal_4205_, 1);
v_type_4208_ = lean_ctor_get(v_toConstantVal_4205_, 2);
v___x_4209_ = lean_box(0);
lean_inc(v_levelParams_4207_);
v___x_4210_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas_spec__0(v_levelParams_4207_, v___x_4209_);
v___x_4211_ = lean_array_get_size(v_a_4202_);
v___x_4212_ = lean_nat_sub(v_numParams_4206_, v___x_4211_);
v_sz_4213_ = lean_array_size(v_a_4202_);
lean_inc(v___x_4212_);
v___x_4214_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__2(v___x_4212_, v_sz_4213_, v___x_4200_, v_a_4202_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_);
if (lean_obj_tag(v___x_4214_) == 0)
{
lean_object* v_a_4215_; size_t v_sz_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___f_4220_; lean_object* v___x_4221_; uint8_t v___x_4222_; lean_object* v___x_4223_; 
v_a_4215_ = lean_ctor_get(v___x_4214_, 0);
lean_inc_n(v_a_4215_, 2);
lean_dec_ref_known(v___x_4214_, 1);
v_sz_4216_ = lean_array_size(v_a_4215_);
lean_inc(v___x_4210_);
v___x_4217_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__3(v___x_4210_, v_sz_4216_, v___x_4200_, v_a_4215_);
v___x_4218_ = lean_box_usize(v_sz_4213_);
v___x_4219_ = ((lean_object*)(l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor___boxed__const__1));
lean_inc(v_a_4202_);
v___f_4220_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCoinductive___lam__0___boxed), 14, 5);
lean_closure_set(v___f_4220_, 0, v___x_4210_);
lean_closure_set(v___f_4220_, 1, v___x_4217_);
lean_closure_set(v___f_4220_, 2, v___x_4218_);
lean_closure_set(v___f_4220_, 3, v___x_4219_);
lean_closure_set(v___f_4220_, 4, v_a_4202_);
lean_inc(v___x_4212_);
v___x_4221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4221_, 0, v___x_4212_);
v___x_4222_ = 0;
lean_inc_ref(v_type_4208_);
v___x_4223_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructor_spec__8___redArg(v_type_4208_, v___x_4221_, v___f_4220_, v___x_4222_, v___x_4222_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_);
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_object* v_a_4224_; lean_object* v___x_4225_; lean_object* v_env_4226_; size_t v_sz_4227_; lean_object* v_lctx_4228_; lean_object* v_localInstances_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; 
v_a_4224_ = lean_ctor_get(v___x_4223_, 0);
lean_inc(v_a_4224_);
lean_dec_ref_known(v___x_4223_, 1);
v___x_4225_ = lean_st_ref_get(v___y_4198_);
v_env_4226_ = lean_ctor_get(v___x_4225_, 0);
lean_inc_ref(v_env_4226_);
lean_dec(v___x_4225_);
v_sz_4227_ = lean_array_size(v_a_4224_);
v_lctx_4228_ = lean_ctor_get(v___y_4195_, 2);
v_localInstances_4229_ = lean_ctor_get(v___y_4195_, 3);
lean_inc(v_levelParams_4207_);
v___x_4230_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg(v_coinductiveElabData_4179_, v_env_4226_, v_a_4215_, v_levelParams_4207_, v_sz_4227_, v___x_4200_, v_a_4224_);
lean_dec(v_a_4215_);
lean_inc_ref(v_localInstances_4229_);
lean_inc_ref(v_lctx_4228_);
v___x_4231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4231_, 0, v_lctx_4228_);
lean_ctor_set(v___x_4231_, 1, v_localInstances_4229_);
v___x_4232_ = l_Lean_Elab_partialFixpoint(v___x_4231_, v___x_4230_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_);
if (lean_obj_tag(v___x_4232_) == 0)
{
lean_object* v___x_4233_; 
lean_dec_ref_known(v___x_4232_, 1);
lean_inc(v_a_4202_);
v___x_4233_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateEqLemmas(v_a_4202_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_);
if (lean_obj_tag(v___x_4233_) == 0)
{
lean_object* v___x_4234_; 
lean_dec_ref_known(v___x_4233_, 1);
lean_inc(v_a_4202_);
v___x_4234_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_generateCoinductiveConstructors(v___x_4212_, v_a_4202_, v_coinductiveElabData_4179_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_);
if (lean_obj_tag(v___x_4234_) == 0)
{
lean_object* v___x_4235_; 
lean_dec_ref_known(v___x_4234_, 1);
v___x_4235_ = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_mkCasesOnCoinductive(v_a_4202_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_);
return v___x_4235_;
}
else
{
lean_dec(v_a_4202_);
return v___x_4234_;
}
}
else
{
lean_dec(v___x_4212_);
lean_dec(v_a_4202_);
lean_dec_ref(v_coinductiveElabData_4179_);
return v___x_4233_;
}
}
else
{
lean_dec(v___x_4212_);
lean_dec(v_a_4202_);
lean_dec_ref(v_coinductiveElabData_4179_);
return v___x_4232_;
}
}
else
{
lean_object* v_a_4236_; lean_object* v___x_4238_; uint8_t v_isShared_4239_; uint8_t v_isSharedCheck_4243_; 
lean_dec(v_a_4215_);
lean_dec(v___x_4212_);
lean_dec(v_a_4202_);
lean_dec_ref(v_coinductiveElabData_4179_);
v_a_4236_ = lean_ctor_get(v___x_4223_, 0);
v_isSharedCheck_4243_ = !lean_is_exclusive(v___x_4223_);
if (v_isSharedCheck_4243_ == 0)
{
v___x_4238_ = v___x_4223_;
v_isShared_4239_ = v_isSharedCheck_4243_;
goto v_resetjp_4237_;
}
else
{
lean_inc(v_a_4236_);
lean_dec(v___x_4223_);
v___x_4238_ = lean_box(0);
v_isShared_4239_ = v_isSharedCheck_4243_;
goto v_resetjp_4237_;
}
v_resetjp_4237_:
{
lean_object* v___x_4241_; 
if (v_isShared_4239_ == 0)
{
v___x_4241_ = v___x_4238_;
goto v_reusejp_4240_;
}
else
{
lean_object* v_reuseFailAlloc_4242_; 
v_reuseFailAlloc_4242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4242_, 0, v_a_4236_);
v___x_4241_ = v_reuseFailAlloc_4242_;
goto v_reusejp_4240_;
}
v_reusejp_4240_:
{
return v___x_4241_;
}
}
}
}
else
{
lean_object* v_a_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4251_; 
lean_dec(v___x_4212_);
lean_dec(v___x_4210_);
lean_dec(v_a_4202_);
lean_dec_ref(v_coinductiveElabData_4179_);
v_a_4244_ = lean_ctor_get(v___x_4214_, 0);
v_isSharedCheck_4251_ = !lean_is_exclusive(v___x_4214_);
if (v_isSharedCheck_4251_ == 0)
{
v___x_4246_ = v___x_4214_;
v_isShared_4247_ = v_isSharedCheck_4251_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_a_4244_);
lean_dec(v___x_4214_);
v___x_4246_ = lean_box(0);
v_isShared_4247_ = v_isSharedCheck_4251_;
goto v_resetjp_4245_;
}
v_resetjp_4245_:
{
lean_object* v___x_4249_; 
if (v_isShared_4247_ == 0)
{
v___x_4249_ = v___x_4246_;
goto v_reusejp_4248_;
}
else
{
lean_object* v_reuseFailAlloc_4250_; 
v_reuseFailAlloc_4250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4250_, 0, v_a_4244_);
v___x_4249_ = v_reuseFailAlloc_4250_;
goto v_reusejp_4248_;
}
v_reusejp_4248_:
{
return v___x_4249_;
}
}
}
}
else
{
lean_object* v_a_4252_; lean_object* v___x_4254_; uint8_t v_isShared_4255_; uint8_t v_isSharedCheck_4259_; 
lean_dec_ref(v_coinductiveElabData_4179_);
v_a_4252_ = lean_ctor_get(v___x_4201_, 0);
v_isSharedCheck_4259_ = !lean_is_exclusive(v___x_4201_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4254_ = v___x_4201_;
v_isShared_4255_ = v_isSharedCheck_4259_;
goto v_resetjp_4253_;
}
else
{
lean_inc(v_a_4252_);
lean_dec(v___x_4201_);
v___x_4254_ = lean_box(0);
v_isShared_4255_ = v_isSharedCheck_4259_;
goto v_resetjp_4253_;
}
v_resetjp_4253_:
{
lean_object* v___x_4257_; 
if (v_isShared_4255_ == 0)
{
v___x_4257_ = v___x_4254_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v_a_4252_);
v___x_4257_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
return v___x_4257_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCoinductive___boxed(lean_object* v_coinductiveElabData_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_, lean_object* v_a_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v_a_4280_){
_start:
{
lean_object* v_res_4281_; 
v_res_4281_ = l_Lean_Elab_Command_elabCoinductive(v_coinductiveElabData_4273_, v_a_4274_, v_a_4275_, v_a_4276_, v_a_4277_, v_a_4278_, v_a_4279_);
lean_dec(v_a_4279_);
lean_dec_ref(v_a_4278_);
lean_dec(v_a_4277_);
lean_dec_ref(v_a_4276_);
lean_dec(v_a_4275_);
lean_dec_ref(v_a_4274_);
return v_res_4281_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4(lean_object* v___x_4282_, lean_object* v___x_4283_, lean_object* v_params_4284_, size_t v_sz_4285_, size_t v_i_4286_, lean_object* v_bs_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_){
_start:
{
lean_object* v___x_4295_; 
v___x_4295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___redArg(v___x_4282_, v___x_4283_, v_params_4284_, v_sz_4285_, v_i_4286_, v_bs_4287_, v___y_4290_, v___y_4291_, v___y_4292_, v___y_4293_);
return v___x_4295_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4___boxed(lean_object* v___x_4296_, lean_object* v___x_4297_, lean_object* v_params_4298_, lean_object* v_sz_4299_, lean_object* v_i_4300_, lean_object* v_bs_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_){
_start:
{
size_t v_sz_boxed_4309_; size_t v_i_boxed_4310_; lean_object* v_res_4311_; 
v_sz_boxed_4309_ = lean_unbox_usize(v_sz_4299_);
lean_dec(v_sz_4299_);
v_i_boxed_4310_ = lean_unbox_usize(v_i_4300_);
lean_dec(v_i_4300_);
v_res_4311_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__4(v___x_4296_, v___x_4297_, v_params_4298_, v_sz_boxed_4309_, v_i_boxed_4310_, v_bs_4301_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_);
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
lean_dec(v___y_4303_);
lean_dec_ref(v___y_4302_);
return v_res_4311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5(lean_object* v_coinductiveElabData_4312_, lean_object* v___x_4313_, lean_object* v_a_4314_, lean_object* v___x_4315_, lean_object* v_as_4316_, size_t v_sz_4317_, size_t v_i_4318_, lean_object* v_bs_4319_){
_start:
{
lean_object* v___x_4320_; 
v___x_4320_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___redArg(v_coinductiveElabData_4312_, v___x_4313_, v_a_4314_, v___x_4315_, v_sz_4317_, v_i_4318_, v_bs_4319_);
return v___x_4320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5___boxed(lean_object* v_coinductiveElabData_4321_, lean_object* v___x_4322_, lean_object* v_a_4323_, lean_object* v___x_4324_, lean_object* v_as_4325_, lean_object* v_sz_4326_, lean_object* v_i_4327_, lean_object* v_bs_4328_){
_start:
{
size_t v_sz_boxed_4329_; size_t v_i_boxed_4330_; lean_object* v_res_4331_; 
v_sz_boxed_4329_ = lean_unbox_usize(v_sz_4326_);
lean_dec(v_sz_4326_);
v_i_boxed_4330_ = lean_unbox_usize(v_i_4327_);
lean_dec(v_i_4327_);
v_res_4331_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Command_elabCoinductive_spec__5(v_coinductiveElabData_4321_, v___x_4322_, v_a_4323_, v___x_4324_, v_as_4325_, v_sz_boxed_4329_, v_i_boxed_4330_, v_bs_4328_);
lean_dec_ref(v_as_4325_);
lean_dec_ref(v_a_4323_);
lean_dec_ref(v_coinductiveElabData_4321_);
return v_res_4331_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_UnusedVariables(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Coinductive(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_UnusedVariables(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Coinductive_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_Coinductive_793488904____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default = _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default();
lean_mark_persistent(l_Lean_Elab_Command_instInhabitedCoinductiveElabData_default);
l_Lean_Elab_Command_instInhabitedCoinductiveElabData = _init_l_Lean_Elab_Command_instInhabitedCoinductiveElabData();
lean_mark_persistent(l_Lean_Elab_Command_instInhabitedCoinductiveElabData);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Coinductive(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_PartialFixpoint(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Linter_UnusedVariables(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Coinductive(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_PartialFixpoint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_UnusedVariables(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Coinductive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Coinductive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Coinductive(builtin);
}
#ifdef __cplusplus
}
#endif
