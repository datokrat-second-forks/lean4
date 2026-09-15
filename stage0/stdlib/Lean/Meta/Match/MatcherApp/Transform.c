// Lean compiler output
// Module: Lean.Meta.Match.MatcherApp.Transform
// Imports: public import Lean.Meta.Match.MatcherApp.Basic public import Lean.Meta.Match.MatchEqsExt public import Lean.Meta.Match.AltTelescopes public import Lean.Meta.AppBuilder import Lean.Meta.Tactic.Split import Lean.Meta.Tactic.Refl
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
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Subarray_empty___redArg();
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
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
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_forallBoundedTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_forallAltVarsTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_getEquationsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(lean_object*);
lean_object* l_Lean_Meta_getMatcherInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Split_simpMatchTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_admit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_mkArrowN(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "unexpected matcher application, insufficient number of parameters in alternative"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "unexpected matcher application, alternative must have "};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " parameters"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "failed to add argument to matcher application, argument type was not refined by `casesOn`"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "unexpected type at MatcherApp.addArg"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "failed to add argument to matcher application, type error when constructing the new motive"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "unexpected matcher application, motive must be lambda expression with #"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " arguments"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "failed to transfer argument through matcher application, alt type must be telescope with #"};
static const lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0 = (const lean_object*)&l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 101, .m_capacity = 101, .m_length = 100, .m_data = "failed to transfer argument through matcher application, type error when constructing the new motive"};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "failed to transfer argument through matcher application, motive must be lambda expression with #"};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_altParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Function"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 8, 186, 189, 152, 89, 197, 12)}};
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value),LEAN_SCALAR_PTR_LITERAL(231, 33, 22, 82, 100, 121, 126, 178)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__42(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.Match.MatcherApp.Transform"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.MatcherApp.transform"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "assertion violation: ys.size == splitterAltInfo.numFields\n        "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__45(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: altInfo.numOverlaps = 0\n      "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__50(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "failed to transform matcher, type error when constructing splitter motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "failed to transform matcher, type error when constructing new motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "failed to transform matcher, type error when constructing new pre-splitter motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\nfailed with"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__61(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matcher "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " has no MatchInfo found"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Cannot close goal after splitting: "};
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Type "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " of alternative "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " still depends on "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__5 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__6 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__7 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__8 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__9 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__9_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__0_value;
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__1_value;
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(lean_object* v_type_19_, lean_object* v_maxFVars_x3f_20_, lean_object* v_k_21_, uint8_t v_cleanupAnnotations_22_, uint8_t v_whnfType_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v___f_29_; lean_object* v___x_30_; 
v___f_29_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_29_, 0, v_k_21_);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_19_, v_maxFVars_x3f_20_, v___f_29_, v_cleanupAnnotations_22_, v_whnfType_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_30_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_30_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_44_; 
if (v_isShared_42_ == 0)
{
v___x_44_ = v___x_41_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_a_39_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___boxed(lean_object* v_type_47_, lean_object* v_maxFVars_x3f_48_, lean_object* v_k_49_, lean_object* v_cleanupAnnotations_50_, lean_object* v_whnfType_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_57_; uint8_t v_whnfType_boxed_58_; lean_object* v_res_59_; 
v_cleanupAnnotations_boxed_57_ = lean_unbox(v_cleanupAnnotations_50_);
v_whnfType_boxed_58_ = lean_unbox(v_whnfType_51_);
v_res_59_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_type_47_, v_maxFVars_x3f_48_, v_k_49_, v_cleanupAnnotations_boxed_57_, v_whnfType_boxed_58_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(lean_object* v_00_u03b1_60_, lean_object* v_type_61_, lean_object* v_maxFVars_x3f_62_, lean_object* v_k_63_, uint8_t v_cleanupAnnotations_64_, uint8_t v_whnfType_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_type_61_, v_maxFVars_x3f_62_, v_k_63_, v_cleanupAnnotations_64_, v_whnfType_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___boxed(lean_object* v_00_u03b1_72_, lean_object* v_type_73_, lean_object* v_maxFVars_x3f_74_, lean_object* v_k_75_, lean_object* v_cleanupAnnotations_76_, lean_object* v_whnfType_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_83_; uint8_t v_whnfType_boxed_84_; lean_object* v_res_85_; 
v_cleanupAnnotations_boxed_83_ = lean_unbox(v_cleanupAnnotations_76_);
v_whnfType_boxed_84_ = lean_unbox(v_whnfType_77_);
v_res_85_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(v_00_u03b1_72_, v_type_73_, v_maxFVars_x3f_74_, v_k_75_, v_cleanupAnnotations_boxed_83_, v_whnfType_boxed_84_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(lean_object* v_e_86_, lean_object* v_maxFVars_87_, lean_object* v_k_88_, uint8_t v_cleanupAnnotations_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v___f_95_; uint8_t v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___f_95_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_95_, 0, v_k_88_);
v___x_96_ = 1;
v___x_97_ = 0;
v___x_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_98_, 0, v_maxFVars_87_);
v___x_99_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_86_, v___x_96_, v___x_97_, v___x_96_, v___x_97_, v___x_98_, v___f_95_, v_cleanupAnnotations_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec_ref_known(v___x_98_, 1);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_107_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_107_ == 0)
{
v___x_102_ = v___x_99_;
v_isShared_103_ = v_isSharedCheck_107_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_dec(v___x_99_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_107_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_105_; 
if (v_isShared_103_ == 0)
{
v___x_105_ = v___x_102_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_a_100_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
else
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
v_a_108_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v___x_99_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_99_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg___boxed(lean_object* v_e_116_, lean_object* v_maxFVars_117_, lean_object* v_k_118_, lean_object* v_cleanupAnnotations_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_125_; lean_object* v_res_126_; 
v_cleanupAnnotations_boxed_125_ = lean_unbox(v_cleanupAnnotations_119_);
v_res_126_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(v_e_116_, v_maxFVars_117_, v_k_118_, v_cleanupAnnotations_boxed_125_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2(lean_object* v_00_u03b1_127_, lean_object* v_e_128_, lean_object* v_maxFVars_129_, lean_object* v_k_130_, uint8_t v_cleanupAnnotations_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(v_e_128_, v_maxFVars_129_, v_k_130_, v_cleanupAnnotations_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___boxed(lean_object* v_00_u03b1_138_, lean_object* v_e_139_, lean_object* v_maxFVars_140_, lean_object* v_k_141_, lean_object* v_cleanupAnnotations_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_148_; lean_object* v_res_149_; 
v_cleanupAnnotations_boxed_148_ = lean_unbox(v_cleanupAnnotations_142_);
v_res_149_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2(v_00_u03b1_138_, v_e_139_, v_maxFVars_140_, v_k_141_, v_cleanupAnnotations_boxed_148_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(lean_object* v_alt_150_, uint8_t v___x_151_, lean_object* v_xs_152_, uint8_t v_refined_153_, lean_object* v___x_154_, lean_object* v_unrefinedArgType_155_, lean_object* v_x_156_, lean_object* v_x_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
uint8_t v___x_163_; uint8_t v___x_164_; lean_object* v___x_165_; 
v___x_163_ = 0;
v___x_164_ = 1;
v___x_165_ = l_Lean_Meta_mkLambdaFVars(v_x_156_, v_alt_150_, v___x_163_, v___x_151_, v___x_163_, v___x_151_, v___x_164_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v_a_166_; uint8_t v_refined_168_; lean_object* v___y_169_; lean_object* v___y_170_; lean_object* v___y_171_; lean_object* v___y_172_; 
v_a_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc(v_a_166_);
lean_dec_ref_known(v___x_165_, 1);
if (v_refined_153_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_unsigned_to_nat(0u);
v___x_193_ = lean_array_get_borrowed(v___x_154_, v_x_156_, v___x_192_);
lean_inc(v___y_161_);
lean_inc_ref(v___y_160_);
lean_inc(v___y_159_);
lean_inc_ref(v___y_158_);
lean_inc(v___x_193_);
v___x_194_ = lean_infer_type(v___x_193_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_196_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_a_195_);
lean_dec_ref_known(v___x_194_, 1);
v___x_196_ = l_Lean_Meta_isExprDefEq(v_unrefinedArgType_155_, v_a_195_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; uint8_t v___x_198_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_a_197_);
lean_dec_ref_known(v___x_196_, 1);
v___x_198_ = lean_unbox(v_a_197_);
lean_dec(v_a_197_);
if (v___x_198_ == 0)
{
v_refined_168_ = v___x_151_;
v___y_169_ = v___y_158_;
v___y_170_ = v___y_159_;
v___y_171_ = v___y_160_;
v___y_172_ = v___y_161_;
goto v___jp_167_;
}
else
{
v_refined_168_ = v_refined_153_;
v___y_169_ = v___y_158_;
v___y_170_ = v___y_159_;
v___y_171_ = v___y_160_;
v___y_172_ = v___y_161_;
goto v___jp_167_;
}
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec(v_a_166_);
v_a_199_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_196_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_196_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
else
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
lean_dec(v_a_166_);
lean_dec_ref(v_unrefinedArgType_155_);
v_a_207_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_194_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_194_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
else
{
lean_dec_ref(v_unrefinedArgType_155_);
v_refined_168_ = v_refined_153_;
v___y_169_ = v___y_158_;
v___y_170_ = v___y_159_;
v___y_171_ = v___y_160_;
v___y_172_ = v___y_161_;
goto v___jp_167_;
}
v___jp_167_:
{
lean_object* v___x_173_; 
v___x_173_ = l_Lean_Meta_mkLambdaFVars(v_xs_152_, v_a_166_, v___x_163_, v___x_151_, v___x_163_, v___x_151_, v___x_164_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_183_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_183_ == 0)
{
v___x_176_ = v___x_173_;
v_isShared_177_ = v_isSharedCheck_183_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_173_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_183_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_178_ = lean_box(v_refined_168_);
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v_a_174_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 0, v___x_179_);
v___x_181_ = v___x_176_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_179_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
v_a_184_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_173_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_173_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
}
else
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
lean_dec_ref(v_unrefinedArgType_155_);
v_a_215_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_165_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_165_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed(lean_object* v_alt_223_, lean_object* v___x_224_, lean_object* v_xs_225_, lean_object* v_refined_226_, lean_object* v___x_227_, lean_object* v_unrefinedArgType_228_, lean_object* v_x_229_, lean_object* v_x_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
uint8_t v___x_4355__boxed_236_; uint8_t v_refined_boxed_237_; lean_object* v_res_238_; 
v___x_4355__boxed_236_ = lean_unbox(v___x_224_);
v_refined_boxed_237_ = lean_unbox(v_refined_226_);
v_res_238_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(v_alt_223_, v___x_4355__boxed_236_, v_xs_225_, v_refined_boxed_237_, v___x_227_, v_unrefinedArgType_228_, v_x_229_, v_x_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec_ref(v_x_230_);
lean_dec_ref(v_x_229_);
lean_dec_ref(v___x_227_);
lean_dec_ref(v_xs_225_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(lean_object* v_msgData_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v___x_245_; lean_object* v_env_246_; lean_object* v___x_247_; lean_object* v_toCold_248_; lean_object* v_mctx_249_; lean_object* v_lctx_250_; lean_object* v_options_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_245_ = lean_st_ref_get(v___y_243_);
v_env_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc_ref(v_env_246_);
lean_dec(v___x_245_);
v___x_247_ = lean_st_ref_get(v___y_241_);
v_toCold_248_ = lean_ctor_get(v___y_242_, 0);
v_mctx_249_ = lean_ctor_get(v___x_247_, 0);
lean_inc_ref(v_mctx_249_);
lean_dec(v___x_247_);
v_lctx_250_ = lean_ctor_get(v___y_240_, 2);
v_options_251_ = lean_ctor_get(v_toCold_248_, 2);
lean_inc_ref(v_options_251_);
lean_inc_ref(v_lctx_250_);
v___x_252_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_252_, 0, v_env_246_);
lean_ctor_set(v___x_252_, 1, v_mctx_249_);
lean_ctor_set(v___x_252_, 2, v_lctx_250_);
lean_ctor_set(v___x_252_, 3, v_options_251_);
v___x_253_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v_msgData_239_);
v___x_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0___boxed(lean_object* v_msgData_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v_msgData_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(lean_object* v_msg_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_ref_268_; lean_object* v___x_269_; lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_278_; 
v_ref_268_ = lean_ctor_get(v___y_265_, 2);
v___x_269_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v_msg_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_);
v_a_270_ = lean_ctor_get(v___x_269_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_278_ == 0)
{
v___x_272_ = v___x_269_;
v_isShared_273_ = v_isSharedCheck_278_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v___x_269_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_278_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v___x_276_; 
lean_inc(v_ref_268_);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v_ref_268_);
lean_ctor_set(v___x_274_, 1, v_a_270_);
if (v_isShared_273_ == 0)
{
lean_ctor_set_tag(v___x_272_, 1);
lean_ctor_set(v___x_272_, 0, v___x_274_);
v___x_276_ = v___x_272_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg___boxed(lean_object* v_msg_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v_msg_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
return v_res_285_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1));
v___x_290_ = l_Lean_stringToMessageData(v___x_289_);
return v___x_290_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3));
v___x_293_ = l_Lean_stringToMessageData(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5));
v___x_296_ = l_Lean_stringToMessageData(v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(uint8_t v___x_297_, uint8_t v_refined_298_, lean_object* v___x_299_, lean_object* v_unrefinedArgType_300_, lean_object* v_binderType_301_, lean_object* v_numParams_302_, lean_object* v_xs_303_, lean_object* v_alt_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___f_312_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v___y_317_; lean_object* v___y_318_; lean_object* v___y_332_; lean_object* v___y_333_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v___y_336_; uint8_t v___y_337_; lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_310_ = lean_box(v___x_297_);
v___x_311_ = lean_box(v_refined_298_);
lean_inc_ref(v_xs_303_);
v___f_312_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed), 13, 6);
lean_closure_set(v___f_312_, 0, v_alt_304_);
lean_closure_set(v___f_312_, 1, v___x_310_);
lean_closure_set(v___f_312_, 2, v_xs_303_);
lean_closure_set(v___f_312_, 3, v___x_311_);
lean_closure_set(v___f_312_, 4, v___x_299_);
lean_closure_set(v___f_312_, 5, v_unrefinedArgType_300_);
v___x_345_ = lean_array_get_size(v_xs_303_);
v___x_346_ = lean_nat_dec_eq(v___x_345_, v_numParams_302_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_347_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4);
v___x_348_ = l_Nat_reprFast(v_numParams_302_);
v___x_349_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
v___x_350_ = l_Lean_MessageData_ofFormat(v___x_349_);
v___x_351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_347_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6);
v___x_353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_351_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_353_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_dec_ref_known(v___x_354_, 1);
goto v___jp_340_;
}
else
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_362_; 
lean_dec_ref(v___f_312_);
lean_dec_ref(v_xs_303_);
lean_dec_ref(v_binderType_301_);
v_a_355_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_362_ == 0)
{
v___x_357_ = v___x_354_;
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_355_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
}
else
{
lean_dec(v_numParams_302_);
goto v___jp_340_;
}
v___jp_313_:
{
if (lean_obj_tag(v___y_318_) == 0)
{
lean_object* v_a_319_; lean_object* v___x_320_; uint8_t v___x_321_; lean_object* v___x_322_; 
v_a_319_ = lean_ctor_get(v___y_318_, 0);
lean_inc(v_a_319_);
lean_dec_ref_known(v___y_318_, 1);
v___x_320_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0));
v___x_321_ = 0;
v___x_322_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_a_319_, v___x_320_, v___f_312_, v___x_321_, v___x_321_, v___y_317_, v___y_314_, v___y_315_, v___y_316_);
return v___x_322_;
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_dec_ref(v___f_312_);
v_a_323_ = lean_ctor_get(v___y_318_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___y_318_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___y_318_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___y_318_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
v___jp_331_:
{
if (v___y_337_ == 0)
{
lean_object* v___x_338_; lean_object* v___x_339_; 
lean_dec_ref(v___y_333_);
v___x_338_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2);
v___x_339_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_338_, v___y_336_, v___y_332_, v___y_334_, v___y_335_);
v___y_314_ = v___y_332_;
v___y_315_ = v___y_334_;
v___y_316_ = v___y_335_;
v___y_317_ = v___y_336_;
v___y_318_ = v___x_339_;
goto v___jp_313_;
}
else
{
v___y_314_ = v___y_332_;
v___y_315_ = v___y_334_;
v___y_316_ = v___y_335_;
v___y_317_ = v___y_336_;
v___y_318_ = v___y_333_;
goto v___jp_313_;
}
}
v___jp_340_:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lean_Meta_instantiateForall(v_binderType_301_, v_xs_303_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
lean_dec_ref(v_xs_303_);
if (lean_obj_tag(v___x_341_) == 0)
{
v___y_314_ = v___y_306_;
v___y_315_ = v___y_307_;
v___y_316_ = v___y_308_;
v___y_317_ = v___y_305_;
v___y_318_ = v___x_341_;
goto v___jp_313_;
}
else
{
lean_object* v_a_342_; uint8_t v___x_343_; 
v_a_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_a_342_);
v___x_343_ = l_Lean_Exception_isInterrupt(v_a_342_);
if (v___x_343_ == 0)
{
uint8_t v___x_344_; 
v___x_344_ = l_Lean_Exception_isRuntime(v_a_342_);
v___y_332_ = v___y_306_;
v___y_333_ = v___x_341_;
v___y_334_ = v___y_307_;
v___y_335_ = v___y_308_;
v___y_336_ = v___y_305_;
v___y_337_ = v___x_344_;
goto v___jp_331_;
}
else
{
lean_dec(v_a_342_);
v___y_332_ = v___y_306_;
v___y_333_ = v___x_341_;
v___y_334_ = v___y_307_;
v___y_335_ = v___y_308_;
v___y_336_ = v___y_305_;
v___y_337_ = v___x_343_;
goto v___jp_331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed(lean_object* v___x_363_, lean_object* v_refined_364_, lean_object* v___x_365_, lean_object* v_unrefinedArgType_366_, lean_object* v_binderType_367_, lean_object* v_numParams_368_, lean_object* v_xs_369_, lean_object* v_alt_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
uint8_t v___x_4580__boxed_376_; uint8_t v_refined_boxed_377_; lean_object* v_res_378_; 
v___x_4580__boxed_376_ = lean_unbox(v___x_363_);
v_refined_boxed_377_ = lean_unbox(v_refined_364_);
v_res_378_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(v___x_4580__boxed_376_, v_refined_boxed_377_, v___x_365_, v_unrefinedArgType_366_, v_binderType_367_, v_numParams_368_, v_xs_369_, v_alt_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
return v_res_378_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0));
v___x_381_ = l_Lean_stringToMessageData(v___x_380_);
return v___x_381_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2));
v___x_384_ = l_Lean_stringToMessageData(v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(lean_object* v_unrefinedArgType_385_, lean_object* v_typeNew_386_, lean_object* v_altNumParams_387_, lean_object* v_alts_388_, uint8_t v_refined_389_, lean_object* v_i_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_396_ = lean_array_get_size(v_alts_388_);
v___x_397_ = lean_nat_dec_lt(v_i_390_, v___x_396_);
if (v___x_397_ == 0)
{
lean_dec(v_i_390_);
lean_dec_ref(v_typeNew_386_);
lean_dec_ref(v_unrefinedArgType_385_);
if (v_refined_389_ == 0)
{
lean_object* v___x_398_; lean_object* v___x_399_; 
lean_dec_ref(v_alts_388_);
v___x_398_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1);
v___x_399_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_398_, v___y_391_, v___y_392_, v___y_393_, v___y_394_);
return v___x_399_;
}
else
{
lean_object* v___x_400_; 
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v_alts_388_);
return v___x_400_;
}
}
else
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v_alt_403_; lean_object* v_numParams_404_; lean_object* v___x_405_; 
v___x_401_ = lean_unsigned_to_nat(0u);
v___x_402_ = l_Lean_instInhabitedExpr;
v_alt_403_ = lean_array_fget_borrowed(v_alts_388_, v_i_390_);
v_numParams_404_ = lean_array_get_borrowed(v___x_401_, v_altNumParams_387_, v_i_390_);
v___x_405_ = l_Lean_Meta_whnfD(v_typeNew_386_, v___y_391_, v___y_392_, v___y_393_, v___y_394_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_406_);
lean_dec_ref_known(v___x_405_, 1);
if (lean_obj_tag(v_a_406_) == 7)
{
lean_object* v_binderType_407_; lean_object* v_body_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___f_411_; uint8_t v___x_412_; lean_object* v___x_413_; 
v_binderType_407_ = lean_ctor_get(v_a_406_, 1);
lean_inc_ref(v_binderType_407_);
v_body_408_ = lean_ctor_get(v_a_406_, 2);
lean_inc_ref(v_body_408_);
lean_dec_ref_known(v_a_406_, 3);
v___x_409_ = lean_box(v___x_397_);
v___x_410_ = lean_box(v_refined_389_);
lean_inc_n(v_numParams_404_, 2);
lean_inc_ref(v_unrefinedArgType_385_);
v___f_411_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed), 13, 6);
lean_closure_set(v___f_411_, 0, v___x_409_);
lean_closure_set(v___f_411_, 1, v___x_410_);
lean_closure_set(v___f_411_, 2, v___x_402_);
lean_closure_set(v___f_411_, 3, v_unrefinedArgType_385_);
lean_closure_set(v___f_411_, 4, v_binderType_407_);
lean_closure_set(v___f_411_, 5, v_numParams_404_);
v___x_412_ = 0;
lean_inc(v_alt_403_);
v___x_413_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(v_alt_403_, v_numParams_404_, v___f_411_, v___x_412_, v___y_391_, v___y_392_, v___y_393_, v___y_394_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v_a_414_; lean_object* v_fst_415_; lean_object* v_snd_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v_a_414_ = lean_ctor_get(v___x_413_, 0);
lean_inc(v_a_414_);
lean_dec_ref_known(v___x_413_, 1);
v_fst_415_ = lean_ctor_get(v_a_414_, 0);
lean_inc(v_fst_415_);
v_snd_416_ = lean_ctor_get(v_a_414_, 1);
lean_inc(v_snd_416_);
lean_dec(v_a_414_);
v___x_417_ = lean_expr_instantiate1(v_body_408_, v_fst_415_);
lean_dec_ref(v_body_408_);
v___x_418_ = lean_array_fset(v_alts_388_, v_i_390_, v_fst_415_);
v___x_419_ = lean_unsigned_to_nat(1u);
v___x_420_ = lean_nat_add(v_i_390_, v___x_419_);
lean_dec(v_i_390_);
v___x_421_ = lean_unbox(v_snd_416_);
lean_dec(v_snd_416_);
v_typeNew_386_ = v___x_417_;
v_alts_388_ = v___x_418_;
v_refined_389_ = v___x_421_;
v_i_390_ = v___x_420_;
goto _start;
}
else
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
lean_dec_ref(v_body_408_);
lean_dec(v_i_390_);
lean_dec_ref(v_alts_388_);
lean_dec_ref(v_unrefinedArgType_385_);
v_a_423_ = lean_ctor_get(v___x_413_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v___x_413_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_413_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
else
{
lean_object* v___x_431_; lean_object* v___x_432_; 
lean_dec(v_a_406_);
lean_dec(v_i_390_);
lean_dec_ref(v_alts_388_);
lean_dec_ref(v_unrefinedArgType_385_);
v___x_431_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3);
v___x_432_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_431_, v___y_391_, v___y_392_, v___y_393_, v___y_394_);
return v___x_432_;
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
lean_dec(v_i_390_);
lean_dec_ref(v_alts_388_);
lean_dec_ref(v_unrefinedArgType_385_);
v_a_433_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_405_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_405_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___boxed(lean_object* v_unrefinedArgType_441_, lean_object* v_typeNew_442_, lean_object* v_altNumParams_443_, lean_object* v_alts_444_, lean_object* v_refined_445_, lean_object* v_i_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
uint8_t v_refined_boxed_452_; lean_object* v_res_453_; 
v_refined_boxed_452_ = lean_unbox(v_refined_445_);
v_res_453_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(v_unrefinedArgType_441_, v_typeNew_442_, v_altNumParams_443_, v_alts_444_, v_refined_boxed_452_, v_i_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec_ref(v_altNumParams_443_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(lean_object* v_00_u03b1_454_, lean_object* v_msg_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v_msg_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___boxed(lean_object* v_00_u03b1_462_, lean_object* v_msg_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(v_00_u03b1_462_, v_msg_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(lean_object* v_e_470_, lean_object* v_k_471_, uint8_t v_cleanupAnnotations_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v___f_478_; uint8_t v___x_479_; uint8_t v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___f_478_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_478_, 0, v_k_471_);
v___x_479_ = 1;
v___x_480_ = 0;
v___x_481_ = lean_box(0);
v___x_482_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_470_, v___x_479_, v___x_480_, v___x_479_, v___x_480_, v___x_481_, v___f_478_, v_cleanupAnnotations_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_490_ == 0)
{
v___x_485_ = v___x_482_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v___x_482_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_483_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
v_a_491_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_482_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_482_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg___boxed(lean_object* v_e_499_, lean_object* v_k_500_, lean_object* v_cleanupAnnotations_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_507_; lean_object* v_res_508_; 
v_cleanupAnnotations_boxed_507_ = lean_unbox(v_cleanupAnnotations_501_);
v_res_508_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_e_499_, v_k_500_, v_cleanupAnnotations_boxed_507_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(lean_object* v_00_u03b1_509_, lean_object* v_e_510_, lean_object* v_k_511_, uint8_t v_cleanupAnnotations_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_e_510_, v_k_511_, v_cleanupAnnotations_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___boxed(lean_object* v_00_u03b1_519_, lean_object* v_e_520_, lean_object* v_k_521_, lean_object* v_cleanupAnnotations_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_528_; lean_object* v_res_529_; 
v_cleanupAnnotations_boxed_528_ = lean_unbox(v_cleanupAnnotations_522_);
v_res_529_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(v_00_u03b1_519_, v_e_520_, v_k_521_, v_cleanupAnnotations_boxed_528_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(lean_object* v___x_530_, lean_object* v_motiveArgs_531_, lean_object* v_x_532_, lean_object* v_x_533_){
_start:
{
lean_object* v_zero_534_; uint8_t v_isZero_535_; 
v_zero_534_ = lean_unsigned_to_nat(0u);
v_isZero_535_ = lean_nat_dec_eq(v_x_532_, v_zero_534_);
if (v_isZero_535_ == 1)
{
lean_dec(v_x_532_);
return v_x_533_;
}
else
{
lean_object* v_one_536_; lean_object* v_n_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
v_one_536_ = lean_unsigned_to_nat(1u);
v_n_537_ = lean_nat_sub(v_x_532_, v_one_536_);
lean_dec(v_x_532_);
v___x_538_ = lean_array_fget_borrowed(v___x_530_, v_n_537_);
v___x_539_ = l_Lean_Expr_isFVar(v___x_538_);
if (v___x_539_ == 0)
{
v_x_532_ = v_n_537_;
goto _start;
}
else
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_541_ = l_Lean_instInhabitedExpr;
v___x_542_ = lean_array_get_borrowed(v___x_541_, v_motiveArgs_531_, v_n_537_);
lean_inc(v___x_538_);
v___x_543_ = l_Lean_Expr_replaceFVar(v_x_533_, v___x_538_, v___x_542_);
lean_dec_ref(v_x_533_);
v_x_532_ = v_n_537_;
v_x_533_ = v___x_543_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0___boxed(lean_object* v___x_545_, lean_object* v_motiveArgs_546_, lean_object* v_x_547_, lean_object* v_x_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_545_, v_motiveArgs_546_, v_x_547_, v_x_548_);
lean_dec_ref(v_motiveArgs_546_);
lean_dec_ref(v___x_545_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(lean_object* v___x_550_, lean_object* v_motiveArgs_551_, lean_object* v_x_552_, lean_object* v_x_553_){
_start:
{
lean_object* v_zero_554_; uint8_t v_isZero_555_; 
v_zero_554_ = lean_unsigned_to_nat(0u);
v_isZero_555_ = lean_nat_dec_eq(v_x_552_, v_zero_554_);
if (v_isZero_555_ == 1)
{
return v_x_553_;
}
else
{
lean_object* v_one_556_; lean_object* v_n_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v_one_556_ = lean_unsigned_to_nat(1u);
v_n_557_ = lean_nat_sub(v_x_552_, v_one_556_);
v___x_558_ = lean_array_fget_borrowed(v___x_550_, v_n_557_);
v___x_559_ = l_Lean_Expr_isFVar(v___x_558_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; 
v___x_560_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_550_, v_motiveArgs_551_, v_n_557_, v_x_553_);
return v___x_560_;
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_561_ = l_Lean_instInhabitedExpr;
v___x_562_ = lean_array_get_borrowed(v___x_561_, v_motiveArgs_551_, v_n_557_);
lean_inc(v___x_558_);
v___x_563_ = l_Lean_Expr_replaceFVar(v_x_553_, v___x_558_, v___x_562_);
lean_dec_ref(v_x_553_);
v___x_564_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_550_, v_motiveArgs_551_, v_n_557_, v___x_563_);
return v___x_564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0___boxed(lean_object* v___x_565_, lean_object* v_motiveArgs_566_, lean_object* v_x_567_, lean_object* v_x_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(v___x_565_, v_motiveArgs_566_, v_x_567_, v_x_568_);
lean_dec(v_x_567_);
lean_dec_ref(v_motiveArgs_566_);
lean_dec_ref(v___x_565_);
return v_res_569_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0));
v___x_572_ = l_Lean_stringToMessageData(v___x_571_);
return v___x_572_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2));
v___x_575_ = l_Lean_stringToMessageData(v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4));
v___x_578_ = l_Lean_stringToMessageData(v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0(lean_object* v_matcherApp_579_, lean_object* v_e_580_, lean_object* v_discrs_581_, lean_object* v_toMatcherInfo_582_, lean_object* v_matcherName_583_, lean_object* v_params_584_, lean_object* v_alts_585_, lean_object* v_remaining_586_, lean_object* v_matcherLevels_587_, lean_object* v_motiveArgs_588_, lean_object* v_motiveBody_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v___y_596_; lean_object* v___y_597_; uint8_t v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; lean_object* v___y_604_; lean_object* v___y_605_; lean_object* v___y_606_; lean_object* v___y_607_; lean_object* v___y_608_; lean_object* v___y_609_; lean_object* v___y_610_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v_matcherLevels_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_739_ = lean_array_get_size(v_motiveArgs_588_);
v___x_740_ = lean_array_get_size(v_discrs_581_);
v___x_741_ = lean_nat_dec_eq(v___x_739_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec_ref(v_motiveBody_589_);
lean_dec_ref(v_matcherLevels_587_);
lean_dec_ref(v_alts_585_);
lean_dec_ref(v_params_584_);
lean_dec(v_matcherName_583_);
lean_dec_ref(v_toMatcherInfo_582_);
lean_dec_ref(v_discrs_581_);
lean_dec_ref(v_e_580_);
lean_dec_ref(v_matcherApp_579_);
v___x_742_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_743_ = l_Nat_reprFast(v___x_740_);
v___x_744_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_744_, 0, v___x_743_);
v___x_745_ = l_Lean_MessageData_ofFormat(v___x_744_);
v___x_746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_742_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
v___x_747_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___x_749_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_748_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
else
{
v___y_699_ = v___y_590_;
v___y_700_ = v___y_591_;
v___y_701_ = v___y_592_;
v___y_702_ = v___y_593_;
goto v___jp_698_;
}
v___jp_595_:
{
lean_object* v___x_611_; 
lean_inc(v___y_610_);
lean_inc_ref(v___y_609_);
lean_inc(v___y_608_);
lean_inc_ref(v___y_607_);
v___x_611_ = lean_infer_type(v___y_602_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 1);
v___x_613_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_579_);
v___x_614_ = lean_unsigned_to_nat(0u);
v___x_615_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(v___y_596_, v_a_612_, v___x_613_, v___y_605_, v___y_598_, v___x_614_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec_ref(v___x_613_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_628_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_628_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_628_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_628_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
v___x_620_ = lean_unsigned_to_nat(1u);
v___x_621_ = lean_mk_empty_array_with_capacity(v___x_620_);
v___x_622_ = lean_array_push(v___x_621_, v_e_580_);
v___x_623_ = l_Array_append___redArg(v___x_622_, v___y_604_);
v___x_624_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_624_, 0, v___y_600_);
lean_ctor_set(v___x_624_, 1, v___y_597_);
lean_ctor_set(v___x_624_, 2, v___y_606_);
lean_ctor_set(v___x_624_, 3, v___y_603_);
lean_ctor_set(v___x_624_, 4, v___y_599_);
lean_ctor_set(v___x_624_, 5, v___y_601_);
lean_ctor_set(v___x_624_, 6, v_a_616_);
lean_ctor_set(v___x_624_, 7, v___x_623_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_624_);
v___x_626_ = v___x_618_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_624_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
else
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
lean_dec_ref(v___y_606_);
lean_dec_ref(v___y_603_);
lean_dec_ref(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_597_);
lean_dec_ref(v_e_580_);
v_a_629_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_615_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_615_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec_ref(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec_ref(v___y_603_);
lean_dec_ref(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
lean_dec_ref(v_e_580_);
lean_dec_ref(v_matcherApp_579_);
v_a_637_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_611_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_611_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
v___jp_645_:
{
uint8_t v___x_659_; uint8_t v___x_660_; uint8_t v___x_661_; lean_object* v___x_662_; 
v___x_659_ = 0;
v___x_660_ = 1;
v___x_661_ = 1;
v___x_662_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_588_, v___y_650_, v___x_659_, v___x_660_, v___x_659_, v___x_660_, v___x_661_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc_n(v_a_663_, 2);
lean_dec_ref_known(v___x_662_, 1);
lean_inc_ref(v_matcherLevels_654_);
v___x_664_ = lean_array_to_list(v_matcherLevels_654_);
lean_inc(v___y_647_);
v___x_665_ = l_Lean_mkConst(v___y_647_, v___x_664_);
v___x_666_ = l_Lean_mkAppN(v___x_665_, v___y_651_);
v___x_667_ = l_Lean_Expr_app___override(v___x_666_, v_a_663_);
v___x_668_ = l_Lean_mkAppN(v___x_667_, v___y_649_);
lean_inc_ref(v___x_668_);
v___x_669_ = l_Lean_Meta_isTypeCorrect(v___x_668_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; uint8_t v___x_671_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_669_, 1);
v___x_671_ = lean_unbox(v_a_670_);
lean_dec(v_a_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_dec_ref(v___x_668_);
lean_dec(v_a_663_);
lean_dec_ref(v_matcherLevels_654_);
lean_dec_ref(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec_ref(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
lean_dec_ref(v_e_580_);
lean_dec_ref(v_matcherApp_579_);
v___x_672_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1);
v___x_673_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_672_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
v_a_674_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_673_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_673_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
else
{
v___y_596_ = v___y_646_;
v___y_597_ = v___y_647_;
v___y_598_ = v___x_659_;
v___y_599_ = v_a_663_;
v___y_600_ = v___y_648_;
v___y_601_ = v___y_649_;
v___y_602_ = v___x_668_;
v___y_603_ = v___y_651_;
v___y_604_ = v___y_653_;
v___y_605_ = v___y_652_;
v___y_606_ = v_matcherLevels_654_;
v___y_607_ = v___y_655_;
v___y_608_ = v___y_656_;
v___y_609_ = v___y_657_;
v___y_610_ = v___y_658_;
goto v___jp_595_;
}
}
else
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec_ref(v___x_668_);
lean_dec(v_a_663_);
lean_dec_ref(v_matcherLevels_654_);
lean_dec_ref(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec_ref(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
lean_dec_ref(v_e_580_);
lean_dec_ref(v_matcherApp_579_);
v_a_682_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_669_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_669_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec_ref(v_matcherLevels_654_);
lean_dec_ref(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec_ref(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
lean_dec_ref(v_e_580_);
lean_dec_ref(v_matcherApp_579_);
v_a_690_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_662_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_662_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
v___jp_698_:
{
lean_object* v___x_703_; 
lean_inc(v___y_702_);
lean_inc_ref(v___y_701_);
lean_inc(v___y_700_);
lean_inc_ref(v___y_699_);
lean_inc_ref(v_e_580_);
v___x_703_ = lean_infer_type(v_e_580_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc_n(v_a_704_, 2);
lean_dec_ref_known(v___x_703_, 1);
v___x_705_ = lean_array_get_size(v_discrs_581_);
v___x_706_ = l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(v_discrs_581_, v_motiveArgs_588_, v___x_705_, v_a_704_);
v___x_707_ = l_Lean_mkArrow(v___x_706_, v_motiveBody_589_, v___y_701_, v___y_702_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v_uElimPos_x3f_708_; 
v_uElimPos_x3f_708_ = lean_ctor_get(v_toMatcherInfo_582_, 3);
if (lean_obj_tag(v_uElimPos_x3f_708_) == 0)
{
lean_object* v_a_709_; 
v_a_709_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_707_, 1);
v___y_646_ = v_a_704_;
v___y_647_ = v_matcherName_583_;
v___y_648_ = v_toMatcherInfo_582_;
v___y_649_ = v_discrs_581_;
v___y_650_ = v_a_709_;
v___y_651_ = v_params_584_;
v___y_652_ = v_alts_585_;
v___y_653_ = v_remaining_586_;
v_matcherLevels_654_ = v_matcherLevels_587_;
v___y_655_ = v___y_699_;
v___y_656_ = v___y_700_;
v___y_657_ = v___y_701_;
v___y_658_ = v___y_702_;
goto v___jp_645_;
}
else
{
lean_object* v_a_710_; lean_object* v_val_711_; lean_object* v___x_712_; 
v_a_710_ = lean_ctor_get(v___x_707_, 0);
lean_inc_n(v_a_710_, 2);
lean_dec_ref_known(v___x_707_, 1);
v_val_711_ = lean_ctor_get(v_uElimPos_x3f_708_, 0);
v___x_712_ = l_Lean_Meta_getLevel(v_a_710_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v___x_714_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref_known(v___x_712_, 1);
v___x_714_ = lean_array_set(v_matcherLevels_587_, v_val_711_, v_a_713_);
v___y_646_ = v_a_704_;
v___y_647_ = v_matcherName_583_;
v___y_648_ = v_toMatcherInfo_582_;
v___y_649_ = v_discrs_581_;
v___y_650_ = v_a_710_;
v___y_651_ = v_params_584_;
v___y_652_ = v_alts_585_;
v___y_653_ = v_remaining_586_;
v_matcherLevels_654_ = v___x_714_;
v___y_655_ = v___y_699_;
v___y_656_ = v___y_700_;
v___y_657_ = v___y_701_;
v___y_658_ = v___y_702_;
goto v___jp_645_;
}
else
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_722_; 
lean_dec(v_a_710_);
lean_dec(v_a_704_);
lean_dec_ref(v_matcherLevels_587_);
lean_dec_ref(v_alts_585_);
lean_dec_ref(v_params_584_);
lean_dec(v_matcherName_583_);
lean_dec_ref(v_toMatcherInfo_582_);
lean_dec_ref(v_discrs_581_);
lean_dec_ref(v_e_580_);
lean_dec_ref(v_matcherApp_579_);
v_a_715_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_722_ == 0)
{
v___x_717_ = v___x_712_;
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_712_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_718_ == 0)
{
v___x_720_ = v___x_717_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_a_715_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_dec(v_a_704_);
lean_dec_ref(v_matcherLevels_587_);
lean_dec_ref(v_alts_585_);
lean_dec_ref(v_params_584_);
lean_dec(v_matcherName_583_);
lean_dec_ref(v_toMatcherInfo_582_);
lean_dec_ref(v_discrs_581_);
lean_dec_ref(v_e_580_);
lean_dec_ref(v_matcherApp_579_);
v_a_723_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_707_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_707_);
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
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
lean_dec_ref(v_motiveBody_589_);
lean_dec_ref(v_matcherLevels_587_);
lean_dec_ref(v_alts_585_);
lean_dec_ref(v_params_584_);
lean_dec(v_matcherName_583_);
lean_dec_ref(v_toMatcherInfo_582_);
lean_dec_ref(v_discrs_581_);
lean_dec_ref(v_e_580_);
lean_dec_ref(v_matcherApp_579_);
v_a_731_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_703_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_703_);
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
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___boxed(lean_object* v_matcherApp_758_, lean_object* v_e_759_, lean_object* v_discrs_760_, lean_object* v_toMatcherInfo_761_, lean_object* v_matcherName_762_, lean_object* v_params_763_, lean_object* v_alts_764_, lean_object* v_remaining_765_, lean_object* v_matcherLevels_766_, lean_object* v_motiveArgs_767_, lean_object* v_motiveBody_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lean_Meta_MatcherApp_addArg___lam__0(v_matcherApp_758_, v_e_759_, v_discrs_760_, v_toMatcherInfo_761_, v_matcherName_762_, v_params_763_, v_alts_764_, v_remaining_765_, v_matcherLevels_766_, v_motiveArgs_767_, v_motiveBody_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec_ref(v_motiveArgs_767_);
lean_dec_ref(v_remaining_765_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object* v_matcherApp_775_, lean_object* v_e_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_toMatcherInfo_782_; lean_object* v_matcherName_783_; lean_object* v_matcherLevels_784_; lean_object* v_params_785_; lean_object* v_motive_786_; lean_object* v_discrs_787_; lean_object* v_alts_788_; lean_object* v_remaining_789_; lean_object* v___f_790_; uint8_t v___x_791_; lean_object* v___x_792_; 
v_toMatcherInfo_782_ = lean_ctor_get(v_matcherApp_775_, 0);
lean_inc_ref(v_toMatcherInfo_782_);
v_matcherName_783_ = lean_ctor_get(v_matcherApp_775_, 1);
lean_inc(v_matcherName_783_);
v_matcherLevels_784_ = lean_ctor_get(v_matcherApp_775_, 2);
lean_inc_ref(v_matcherLevels_784_);
v_params_785_ = lean_ctor_get(v_matcherApp_775_, 3);
lean_inc_ref(v_params_785_);
v_motive_786_ = lean_ctor_get(v_matcherApp_775_, 4);
lean_inc_ref(v_motive_786_);
v_discrs_787_ = lean_ctor_get(v_matcherApp_775_, 5);
lean_inc_ref(v_discrs_787_);
v_alts_788_ = lean_ctor_get(v_matcherApp_775_, 6);
lean_inc_ref(v_alts_788_);
v_remaining_789_ = lean_ctor_get(v_matcherApp_775_, 7);
lean_inc_ref(v_remaining_789_);
v___f_790_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_addArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_790_, 0, v_matcherApp_775_);
lean_closure_set(v___f_790_, 1, v_e_776_);
lean_closure_set(v___f_790_, 2, v_discrs_787_);
lean_closure_set(v___f_790_, 3, v_toMatcherInfo_782_);
lean_closure_set(v___f_790_, 4, v_matcherName_783_);
lean_closure_set(v___f_790_, 5, v_params_785_);
lean_closure_set(v___f_790_, 6, v_alts_788_);
lean_closure_set(v___f_790_, 7, v_remaining_789_);
lean_closure_set(v___f_790_, 8, v_matcherLevels_784_);
v___x_791_ = 0;
v___x_792_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_786_, v___f_790_, v___x_791_, v___y_777_, v___y_778_, v___y_779_, v___y_780_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___boxed(lean_object* v_matcherApp_793_, lean_object* v_e_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_Meta_MatcherApp_addArg(v_matcherApp_793_, v_e_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object* v_matcherApp_801_, lean_object* v_e_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_Meta_MatcherApp_addArg(v_matcherApp_801_, v_e_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_817_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_817_ == 0)
{
v___x_811_ = v___x_808_;
v_isShared_812_ = v_isSharedCheck_817_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_808_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_817_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_813_, 0, v_a_809_);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 0, v___x_813_);
v___x_815_ = v___x_811_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_813_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_833_; 
v_a_818_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_833_ == 0)
{
v___x_820_ = v___x_808_;
v_isShared_821_ = v_isSharedCheck_833_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_808_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_833_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
uint8_t v___y_823_; uint8_t v___x_831_; 
v___x_831_ = l_Lean_Exception_isInterrupt(v_a_818_);
if (v___x_831_ == 0)
{
uint8_t v___x_832_; 
lean_inc(v_a_818_);
v___x_832_ = l_Lean_Exception_isRuntime(v_a_818_);
v___y_823_ = v___x_832_;
goto v___jp_822_;
}
else
{
v___y_823_ = v___x_831_;
goto v___jp_822_;
}
v___jp_822_:
{
if (v___y_823_ == 0)
{
lean_object* v___x_824_; lean_object* v___x_826_; 
lean_dec(v_a_818_);
v___x_824_ = lean_box(0);
if (v_isShared_821_ == 0)
{
lean_ctor_set_tag(v___x_820_, 0);
lean_ctor_set(v___x_820_, 0, v___x_824_);
v___x_826_ = v___x_820_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
else
{
lean_object* v___x_829_; 
if (v_isShared_821_ == 0)
{
v___x_829_ = v___x_820_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_818_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f___boxed(lean_object* v_matcherApp_834_, lean_object* v_e_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_matcherApp_834_, v_e_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(lean_object* v_type_842_, lean_object* v_k_843_, uint8_t v_cleanupAnnotations_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v___f_850_; uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___f_850_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_850_, 0, v_k_843_);
v___x_851_ = 0;
v___x_852_ = lean_box(0);
v___x_853_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_851_, v___x_852_, v_type_842_, v___f_850_, v_cleanupAnnotations_844_, v___x_851_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_853_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_853_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
v_a_862_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_853_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_853_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_a_862_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg___boxed(lean_object* v_type_870_, lean_object* v_k_871_, lean_object* v_cleanupAnnotations_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_878_; lean_object* v_res_879_; 
v_cleanupAnnotations_boxed_878_ = lean_unbox(v_cleanupAnnotations_872_);
v_res_879_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(v_type_870_, v_k_871_, v_cleanupAnnotations_boxed_878_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(lean_object* v_00_u03b1_880_, lean_object* v_type_881_, lean_object* v_k_882_, uint8_t v_cleanupAnnotations_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(v_type_881_, v_k_882_, v_cleanupAnnotations_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___boxed(lean_object* v_00_u03b1_890_, lean_object* v_type_891_, lean_object* v_k_892_, lean_object* v_cleanupAnnotations_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_899_; lean_object* v_res_900_; 
v_cleanupAnnotations_boxed_899_ = lean_unbox(v_cleanupAnnotations_893_);
v_res_900_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(v_00_u03b1_890_, v_type_891_, v_k_892_, v_cleanupAnnotations_boxed_899_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(size_t v_sz_901_, size_t v_i_902_, lean_object* v_bs_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
uint8_t v___x_909_; 
v___x_909_ = lean_usize_dec_lt(v_i_902_, v_sz_901_);
if (v___x_909_ == 0)
{
lean_object* v___x_910_; 
v___x_910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_910_, 0, v_bs_903_);
return v___x_910_;
}
else
{
lean_object* v_v_911_; lean_object* v___x_912_; lean_object* v_bs_x27_913_; lean_object* v___x_914_; 
v_v_911_ = lean_array_uget(v_bs_903_, v_i_902_);
v___x_912_ = lean_unsigned_to_nat(0u);
v_bs_x27_913_ = lean_array_uset(v_bs_903_, v_i_902_, v___x_912_);
lean_inc(v___y_907_);
lean_inc_ref(v___y_906_);
lean_inc(v___y_905_);
lean_inc_ref(v___y_904_);
v___x_914_ = lean_infer_type(v_v_911_, v___y_904_, v___y_905_, v___y_906_, v___y_907_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; size_t v___x_916_; size_t v___x_917_; lean_object* v___x_918_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_914_, 1);
v___x_916_ = ((size_t)1ULL);
v___x_917_ = lean_usize_add(v_i_902_, v___x_916_);
v___x_918_ = lean_array_uset(v_bs_x27_913_, v_i_902_, v_a_915_);
v_i_902_ = v___x_917_;
v_bs_903_ = v___x_918_;
goto _start;
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec_ref(v_bs_x27_913_);
v_a_920_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_914_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_914_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed(lean_object* v_sz_928_, lean_object* v_i_929_, lean_object* v_bs_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
size_t v_sz_boxed_936_; size_t v_i_boxed_937_; lean_object* v_res_938_; 
v_sz_boxed_936_ = lean_unbox_usize(v_sz_928_);
lean_dec(v_sz_928_);
v_i_boxed_937_ = lean_unbox_usize(v_i_929_);
lean_dec(v_i_929_);
v_res_938_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(v_sz_boxed_936_, v_i_boxed_937_, v_bs_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
return v_res_938_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = ((lean_object*)(l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0));
v___x_941_ = l_Lean_stringToMessageData(v___x_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0(uint8_t v___x_942_, uint8_t v___x_943_, uint8_t v___x_944_, lean_object* v_a_945_, lean_object* v_fvs_946_, lean_object* v_body_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v___x_961_; uint8_t v___x_962_; 
v___x_961_ = lean_array_get_size(v_fvs_946_);
v___x_962_ = lean_nat_dec_eq(v___x_961_, v_a_945_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
v___x_963_ = lean_obj_once(&l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1, &l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1);
v___x_964_ = l_Nat_reprFast(v_a_945_);
v___x_965_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_965_, 0, v___x_964_);
v___x_966_ = l_Lean_MessageData_ofFormat(v___x_965_);
v___x_967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_963_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
v___x_968_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_969_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_967_);
lean_ctor_set(v___x_969_, 1, v___x_968_);
v___x_970_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_969_, v___y_948_, v___y_949_, v___y_950_, v___y_951_);
v_a_971_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_970_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_970_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
else
{
lean_dec(v_a_945_);
goto v___jp_953_;
}
v___jp_953_:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_954_ = lean_unsigned_to_nat(2u);
v___x_955_ = l_Lean_Expr_getAppNumArgs(v_body_947_);
v___x_956_ = lean_nat_sub(v___x_955_, v___x_954_);
lean_dec(v___x_955_);
v___x_957_ = lean_unsigned_to_nat(1u);
v___x_958_ = lean_nat_sub(v___x_956_, v___x_957_);
lean_dec(v___x_956_);
v___x_959_ = l_Lean_Expr_getRevArg_x21(v_body_947_, v___x_958_);
v___x_960_ = l_Lean_Meta_mkLambdaFVars(v_fvs_946_, v___x_959_, v___x_942_, v___x_943_, v___x_942_, v___x_943_, v___x_944_, v___y_948_, v___y_949_, v___y_950_, v___y_951_);
return v___x_960_;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___boxed(lean_object* v___x_979_, lean_object* v___x_980_, lean_object* v___x_981_, lean_object* v_a_982_, lean_object* v_fvs_983_, lean_object* v_body_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
uint8_t v___x_4010__boxed_990_; uint8_t v___x_4011__boxed_991_; uint8_t v___x_4012__boxed_992_; lean_object* v_res_993_; 
v___x_4010__boxed_990_ = lean_unbox(v___x_979_);
v___x_4011__boxed_991_ = lean_unbox(v___x_980_);
v___x_4012__boxed_992_ = lean_unbox(v___x_981_);
v_res_993_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0(v___x_4010__boxed_990_, v___x_4011__boxed_991_, v___x_4012__boxed_992_, v_a_982_, v_fvs_983_, v_body_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec_ref(v_body_984_);
lean_dec_ref(v_fvs_983_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(lean_object* v_as_994_, lean_object* v_bs_995_, lean_object* v_i_996_, lean_object* v_cs_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v___x_1003_; uint8_t v___x_1004_; 
v___x_1003_ = lean_array_get_size(v_as_994_);
v___x_1004_ = lean_nat_dec_lt(v_i_996_, v___x_1003_);
if (v___x_1004_ == 0)
{
lean_object* v___x_1005_; 
lean_dec(v_i_996_);
v___x_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1005_, 0, v_cs_997_);
return v___x_1005_;
}
else
{
lean_object* v___x_1006_; uint8_t v___x_1007_; 
v___x_1006_ = lean_array_get_size(v_bs_995_);
v___x_1007_ = lean_nat_dec_lt(v_i_996_, v___x_1006_);
if (v___x_1007_ == 0)
{
lean_object* v___x_1008_; 
lean_dec(v_i_996_);
v___x_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1008_, 0, v_cs_997_);
return v___x_1008_;
}
else
{
uint8_t v___x_1009_; uint8_t v___x_1010_; lean_object* v_a_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___f_1015_; lean_object* v_b_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1009_ = 0;
v___x_1010_ = 1;
v_a_1011_ = lean_array_fget_borrowed(v_as_994_, v_i_996_);
v___x_1012_ = lean_box(v___x_1009_);
v___x_1013_ = lean_box(v___x_1007_);
v___x_1014_ = lean_box(v___x_1010_);
lean_inc_n(v_a_1011_, 2);
v___f_1015_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1015_, 0, v___x_1012_);
lean_closure_set(v___f_1015_, 1, v___x_1013_);
lean_closure_set(v___f_1015_, 2, v___x_1014_);
lean_closure_set(v___f_1015_, 3, v_a_1011_);
v_b_1016_ = lean_array_fget_borrowed(v_bs_995_, v_i_996_);
v___x_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_a_1011_);
lean_inc(v_b_1016_);
v___x_1018_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_b_1016_, v___x_1017_, v___f_1015_, v___x_1009_, v___x_1009_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1018_, 1);
v___x_1020_ = lean_unsigned_to_nat(1u);
v___x_1021_ = lean_nat_add(v_i_996_, v___x_1020_);
lean_dec(v_i_996_);
v___x_1022_ = lean_array_push(v_cs_997_, v_a_1019_);
v_i_996_ = v___x_1021_;
v_cs_997_ = v___x_1022_;
goto _start;
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
lean_dec_ref(v_cs_997_);
lean_dec(v_i_996_);
v_a_1024_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1018_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1018_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___boxed(lean_object* v_as_1032_, lean_object* v_bs_1033_, lean_object* v_i_1034_, lean_object* v_cs_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(v_as_1032_, v_bs_1033_, v_i_1034_, v_cs_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec_ref(v_bs_1033_);
lean_dec_ref(v_as_1032_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0(lean_object* v_matcherApp_1044_, lean_object* v_altAuxs_1045_, lean_object* v_x_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
size_t v_sz_1052_; size_t v___x_1053_; lean_object* v___x_1054_; 
v_sz_1052_ = lean_array_size(v_altAuxs_1045_);
v___x_1053_ = ((size_t)0ULL);
v___x_1054_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(v_sz_1052_, v___x_1053_, v_altAuxs_1045_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v_a_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v_a_1055_ = lean_ctor_get(v___x_1054_, 0);
lean_inc(v_a_1055_);
lean_dec_ref_known(v___x_1054_, 1);
v___x_1056_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_1044_);
v___x_1057_ = lean_unsigned_to_nat(0u);
v___x_1058_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_1059_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(v___x_1056_, v_a_1055_, v___x_1057_, v___x_1058_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
lean_dec(v_a_1055_);
lean_dec_ref(v___x_1056_);
return v___x_1059_;
}
else
{
lean_dec_ref(v_matcherApp_1044_);
return v___x_1054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed(lean_object* v_matcherApp_1060_, lean_object* v_altAuxs_1061_, lean_object* v_x_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_Meta_MatcherApp_refineThrough___lam__0(v_matcherApp_1060_, v_altAuxs_1061_, v_x_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec_ref(v_x_1062_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(lean_object* v_motiveArgs_1069_, lean_object* v___x_1070_, lean_object* v_i_1071_, lean_object* v_a_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_zero_1078_; uint8_t v_isZero_1079_; 
v_zero_1078_ = lean_unsigned_to_nat(0u);
v_isZero_1079_ = lean_nat_dec_eq(v_i_1071_, v_zero_1078_);
if (v_isZero_1079_ == 1)
{
lean_object* v___x_1080_; 
lean_dec(v_i_1071_);
v___x_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1080_, 0, v_a_1072_);
return v___x_1080_;
}
else
{
lean_object* v___x_1081_; lean_object* v_one_1082_; lean_object* v_n_1083_; lean_object* v_motiveArg_1084_; lean_object* v_discr_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1081_ = l_Lean_instInhabitedExpr;
v_one_1082_ = lean_unsigned_to_nat(1u);
v_n_1083_ = lean_nat_sub(v_i_1071_, v_one_1082_);
lean_dec(v_i_1071_);
v_motiveArg_1084_ = lean_array_get_borrowed(v___x_1081_, v_motiveArgs_1069_, v_n_1083_);
v_discr_1085_ = lean_array_fget_borrowed(v___x_1070_, v_n_1083_);
v___x_1086_ = lean_box(0);
lean_inc(v_discr_1085_);
v___x_1087_ = l_Lean_Meta_kabstract(v_a_1072_, v_discr_1085_, v___x_1086_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1089_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1087_, 1);
v___x_1089_ = lean_expr_instantiate1(v_a_1088_, v_motiveArg_1084_);
lean_dec(v_a_1088_);
v_i_1071_ = v_n_1083_;
v_a_1072_ = v___x_1089_;
goto _start;
}
else
{
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1091_; 
v_a_1091_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1087_, 1);
v_i_1071_ = v_n_1083_;
v_a_1072_ = v_a_1091_;
goto _start;
}
else
{
lean_dec(v_n_1083_);
return v___x_1087_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg___boxed(lean_object* v_motiveArgs_1093_, lean_object* v___x_1094_, lean_object* v_i_1095_, lean_object* v_a_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1093_, v___x_1094_, v_i_1095_, v_a_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec_ref(v___x_1094_);
lean_dec_ref(v_motiveArgs_1093_);
return v_res_1102_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1104_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0));
v___x_1105_ = l_Lean_stringToMessageData(v___x_1104_);
return v___x_1105_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2));
v___x_1108_ = l_Lean_stringToMessageData(v___x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1(lean_object* v___f_1109_, lean_object* v_discrs_1110_, lean_object* v_e_1111_, lean_object* v_toMatcherInfo_1112_, lean_object* v_matcherName_1113_, lean_object* v_params_1114_, lean_object* v_matcherLevels_1115_, lean_object* v_motiveArgs_1116_, lean_object* v___motiveBody_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v___y_1124_; lean_object* v___y_1125_; uint8_t v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1143_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v_matcherLevels_1147_; lean_object* v___y_1148_; lean_object* v___y_1149_; lean_object* v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1192_; lean_object* v___y_1193_; lean_object* v___y_1194_; lean_object* v___y_1195_; lean_object* v___x_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; 
v___x_1222_ = lean_array_get_size(v_motiveArgs_1116_);
v___x_1223_ = lean_array_get_size(v_discrs_1110_);
v___x_1224_ = lean_nat_dec_eq(v___x_1222_, v___x_1223_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
lean_dec_ref(v_matcherLevels_1115_);
lean_dec(v_matcherName_1113_);
lean_dec_ref(v_e_1111_);
lean_dec_ref(v___f_1109_);
v___x_1225_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3);
v___x_1226_ = l_Nat_reprFast(v___x_1223_);
v___x_1227_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
v___x_1228_ = l_Lean_MessageData_ofFormat(v___x_1227_);
v___x_1229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1225_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
v___x_1230_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_1231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1229_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v___x_1232_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_1231_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1232_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1232_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
else
{
v___y_1192_ = v___y_1118_;
v___y_1193_ = v___y_1119_;
v___y_1194_ = v___y_1120_;
v___y_1195_ = v___y_1121_;
goto v___jp_1191_;
}
v___jp_1123_:
{
lean_object* v___x_1131_; 
lean_inc(v___y_1130_);
lean_inc_ref(v___y_1129_);
lean_inc(v___y_1128_);
lean_inc_ref(v___y_1127_);
v___x_1131_ = lean_infer_type(v___y_1124_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1133_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_a_1132_);
lean_dec_ref_known(v___x_1131_, 1);
v___x_1133_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(v_a_1132_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_);
return v___x_1133_;
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1141_; 
lean_dec_ref(v___y_1125_);
v_a_1134_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1136_ = v___x_1131_;
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1131_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1134_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
v___jp_1142_:
{
uint8_t v___x_1152_; uint8_t v___x_1153_; uint8_t v___x_1154_; lean_object* v___x_1155_; 
v___x_1152_ = 0;
v___x_1153_ = 1;
v___x_1154_ = 1;
v___x_1155_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_1116_, v___y_1145_, v___x_1152_, v___x_1153_, v___x_1152_, v___x_1153_, v___x_1154_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_1155_, 1);
v___x_1157_ = lean_array_to_list(v_matcherLevels_1147_);
v___x_1158_ = l_Lean_mkConst(v___y_1144_, v___x_1157_);
v___x_1159_ = l_Lean_mkAppN(v___x_1158_, v___y_1146_);
v___x_1160_ = l_Lean_Expr_app___override(v___x_1159_, v_a_1156_);
v___x_1161_ = l_Lean_mkAppN(v___x_1160_, v___y_1143_);
lean_inc_ref(v___x_1161_);
v___x_1162_ = l_Lean_Meta_isTypeCorrect(v___x_1161_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v_a_1163_; uint8_t v___x_1164_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
lean_inc(v_a_1163_);
lean_dec_ref_known(v___x_1162_, 1);
v___x_1164_ = lean_unbox(v_a_1163_);
lean_dec(v_a_1163_);
if (v___x_1164_ == 0)
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
lean_dec_ref(v___x_1161_);
lean_dec_ref(v___f_1109_);
v___x_1165_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1);
v___x_1166_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_1165_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1166_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1166_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
else
{
v___y_1124_ = v___x_1161_;
v___y_1125_ = v___f_1109_;
v___y_1126_ = v___x_1152_;
v___y_1127_ = v___y_1148_;
v___y_1128_ = v___y_1149_;
v___y_1129_ = v___y_1150_;
v___y_1130_ = v___y_1151_;
goto v___jp_1123_;
}
}
else
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
lean_dec_ref(v___x_1161_);
lean_dec_ref(v___f_1109_);
v_a_1175_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1162_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1162_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
lean_dec_ref(v_matcherLevels_1147_);
lean_dec(v___y_1144_);
lean_dec_ref(v___f_1109_);
v_a_1183_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1155_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1155_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
v___jp_1191_:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = lean_array_get_size(v_discrs_1110_);
v___x_1197_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1116_, v_discrs_1110_, v___x_1196_, v_e_1111_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; lean_object* v___x_1199_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
lean_inc_n(v_a_1198_, 2);
lean_dec_ref_known(v___x_1197_, 1);
v___x_1199_ = l_Lean_Meta_mkEq(v_a_1198_, v_a_1198_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_uElimPos_x3f_1200_; 
v_uElimPos_x3f_1200_ = lean_ctor_get(v_toMatcherInfo_1112_, 3);
if (lean_obj_tag(v_uElimPos_x3f_1200_) == 0)
{
lean_object* v_a_1201_; 
v_a_1201_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1201_);
lean_dec_ref_known(v___x_1199_, 1);
v___y_1143_ = v_discrs_1110_;
v___y_1144_ = v_matcherName_1113_;
v___y_1145_ = v_a_1201_;
v___y_1146_ = v_params_1114_;
v_matcherLevels_1147_ = v_matcherLevels_1115_;
v___y_1148_ = v___y_1192_;
v___y_1149_ = v___y_1193_;
v___y_1150_ = v___y_1194_;
v___y_1151_ = v___y_1195_;
goto v___jp_1142_;
}
else
{
lean_object* v_a_1202_; lean_object* v_val_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v_a_1202_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1202_);
lean_dec_ref_known(v___x_1199_, 1);
v_val_1203_ = lean_ctor_get(v_uElimPos_x3f_1200_, 0);
v___x_1204_ = lean_box(0);
v___x_1205_ = lean_array_set(v_matcherLevels_1115_, v_val_1203_, v___x_1204_);
v___y_1143_ = v_discrs_1110_;
v___y_1144_ = v_matcherName_1113_;
v___y_1145_ = v_a_1202_;
v___y_1146_ = v_params_1114_;
v_matcherLevels_1147_ = v___x_1205_;
v___y_1148_ = v___y_1192_;
v___y_1149_ = v___y_1193_;
v___y_1150_ = v___y_1194_;
v___y_1151_ = v___y_1195_;
goto v___jp_1142_;
}
}
else
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_dec_ref(v_matcherLevels_1115_);
lean_dec(v_matcherName_1113_);
lean_dec_ref(v___f_1109_);
v_a_1206_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___x_1199_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1199_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
lean_dec_ref(v_matcherLevels_1115_);
lean_dec(v_matcherName_1113_);
lean_dec_ref(v___f_1109_);
v_a_1214_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1197_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1197_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed(lean_object* v___f_1241_, lean_object* v_discrs_1242_, lean_object* v_e_1243_, lean_object* v_toMatcherInfo_1244_, lean_object* v_matcherName_1245_, lean_object* v_params_1246_, lean_object* v_matcherLevels_1247_, lean_object* v_motiveArgs_1248_, lean_object* v___motiveBody_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v_res_1255_; 
v_res_1255_ = l_Lean_Meta_MatcherApp_refineThrough___lam__1(v___f_1241_, v_discrs_1242_, v_e_1243_, v_toMatcherInfo_1244_, v_matcherName_1245_, v_params_1246_, v_matcherLevels_1247_, v_motiveArgs_1248_, v___motiveBody_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
lean_dec_ref(v___motiveBody_1249_);
lean_dec_ref(v_motiveArgs_1248_);
lean_dec_ref(v_params_1246_);
lean_dec_ref(v_toMatcherInfo_1244_);
lean_dec_ref(v_discrs_1242_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough(lean_object* v_matcherApp_1256_, lean_object* v_e_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v_toMatcherInfo_1263_; lean_object* v_matcherName_1264_; lean_object* v_matcherLevels_1265_; lean_object* v_params_1266_; lean_object* v_motive_1267_; lean_object* v_discrs_1268_; lean_object* v___f_1269_; lean_object* v___f_1270_; uint8_t v___x_1271_; lean_object* v___x_1272_; 
v_toMatcherInfo_1263_ = lean_ctor_get(v_matcherApp_1256_, 0);
lean_inc_ref(v_toMatcherInfo_1263_);
v_matcherName_1264_ = lean_ctor_get(v_matcherApp_1256_, 1);
lean_inc(v_matcherName_1264_);
v_matcherLevels_1265_ = lean_ctor_get(v_matcherApp_1256_, 2);
lean_inc_ref(v_matcherLevels_1265_);
v_params_1266_ = lean_ctor_get(v_matcherApp_1256_, 3);
lean_inc_ref(v_params_1266_);
v_motive_1267_ = lean_ctor_get(v_matcherApp_1256_, 4);
lean_inc_ref(v_motive_1267_);
v_discrs_1268_ = lean_ctor_get(v_matcherApp_1256_, 5);
lean_inc_ref(v_discrs_1268_);
v___f_1269_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1269_, 0, v_matcherApp_1256_);
v___f_1270_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed), 14, 7);
lean_closure_set(v___f_1270_, 0, v___f_1269_);
lean_closure_set(v___f_1270_, 1, v_discrs_1268_);
lean_closure_set(v___f_1270_, 2, v_e_1257_);
lean_closure_set(v___f_1270_, 3, v_toMatcherInfo_1263_);
lean_closure_set(v___f_1270_, 4, v_matcherName_1264_);
lean_closure_set(v___f_1270_, 5, v_params_1266_);
lean_closure_set(v___f_1270_, 6, v_matcherLevels_1265_);
v___x_1271_ = 0;
v___x_1272_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_1267_, v___f_1270_, v___x_1271_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___boxed(lean_object* v_matcherApp_1273_, lean_object* v_e_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_Meta_MatcherApp_refineThrough(v_matcherApp_1273_, v_e_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(lean_object* v_motiveArgs_1281_, lean_object* v___x_1282_, lean_object* v_n_1283_, lean_object* v_i_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1281_, v___x_1282_, v_i_1284_, v_a_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___boxed(lean_object* v_motiveArgs_1293_, lean_object* v___x_1294_, lean_object* v_n_1295_, lean_object* v_i_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(v_motiveArgs_1293_, v___x_1294_, v_n_1295_, v_i_1296_, v_a_1297_, v_a_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v_n_1295_);
lean_dec_ref(v___x_1294_);
lean_dec_ref(v_motiveArgs_1293_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f(lean_object* v_matcherApp_1305_, lean_object* v_e_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v___x_1312_; 
v___x_1312_ = l_Lean_Meta_MatcherApp_refineThrough(v_matcherApp_1305_, v_e_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_);
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1321_; 
v_a_1313_ = lean_ctor_get(v___x_1312_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1315_ = v___x_1312_;
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1312_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1317_, 0, v_a_1313_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 0, v___x_1317_);
v___x_1319_ = v___x_1315_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1337_; 
v_a_1322_ = lean_ctor_get(v___x_1312_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1324_ = v___x_1312_;
v_isShared_1325_ = v_isSharedCheck_1337_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v___x_1312_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1337_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
uint8_t v___y_1327_; uint8_t v___x_1335_; 
v___x_1335_ = l_Lean_Exception_isInterrupt(v_a_1322_);
if (v___x_1335_ == 0)
{
uint8_t v___x_1336_; 
lean_inc(v_a_1322_);
v___x_1336_ = l_Lean_Exception_isRuntime(v_a_1322_);
v___y_1327_ = v___x_1336_;
goto v___jp_1326_;
}
else
{
v___y_1327_ = v___x_1335_;
goto v___jp_1326_;
}
v___jp_1326_:
{
if (v___y_1327_ == 0)
{
lean_object* v___x_1328_; lean_object* v___x_1330_; 
lean_dec(v_a_1322_);
v___x_1328_ = lean_box(0);
if (v_isShared_1325_ == 0)
{
lean_ctor_set_tag(v___x_1324_, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1328_);
v___x_1330_ = v___x_1324_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1328_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
else
{
lean_object* v___x_1333_; 
if (v_isShared_1325_ == 0)
{
v___x_1333_ = v___x_1324_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1322_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f___boxed(lean_object* v_matcherApp_1338_, lean_object* v_e_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Lean_Meta_MatcherApp_refineThrough_x3f(v_matcherApp_1338_, v_e_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
lean_dec(v___y_1343_);
lean_dec_ref(v___y_1342_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(lean_object* v_lctx_1346_, lean_object* v_x_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v_keyedConfig_1353_; uint8_t v_trackZetaDelta_1354_; lean_object* v_zetaDeltaSet_1355_; lean_object* v_localInstances_1356_; lean_object* v_defEqCtx_x3f_1357_; lean_object* v_synthPendingDepth_1358_; lean_object* v_customCanUnfoldPredicate_x3f_1359_; uint8_t v_univApprox_1360_; uint8_t v_inTypeClassResolution_1361_; uint8_t v_cacheInferType_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v_keyedConfig_1353_ = lean_ctor_get(v___y_1348_, 0);
v_trackZetaDelta_1354_ = lean_ctor_get_uint8(v___y_1348_, sizeof(void*)*7);
v_zetaDeltaSet_1355_ = lean_ctor_get(v___y_1348_, 1);
v_localInstances_1356_ = lean_ctor_get(v___y_1348_, 3);
v_defEqCtx_x3f_1357_ = lean_ctor_get(v___y_1348_, 4);
v_synthPendingDepth_1358_ = lean_ctor_get(v___y_1348_, 5);
v_customCanUnfoldPredicate_x3f_1359_ = lean_ctor_get(v___y_1348_, 6);
v_univApprox_1360_ = lean_ctor_get_uint8(v___y_1348_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1361_ = lean_ctor_get_uint8(v___y_1348_, sizeof(void*)*7 + 2);
v_cacheInferType_1362_ = lean_ctor_get_uint8(v___y_1348_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_1359_);
lean_inc(v_synthPendingDepth_1358_);
lean_inc(v_defEqCtx_x3f_1357_);
lean_inc_ref(v_localInstances_1356_);
lean_inc(v_zetaDeltaSet_1355_);
lean_inc_ref(v_keyedConfig_1353_);
v___x_1363_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1363_, 0, v_keyedConfig_1353_);
lean_ctor_set(v___x_1363_, 1, v_zetaDeltaSet_1355_);
lean_ctor_set(v___x_1363_, 2, v_lctx_1346_);
lean_ctor_set(v___x_1363_, 3, v_localInstances_1356_);
lean_ctor_set(v___x_1363_, 4, v_defEqCtx_x3f_1357_);
lean_ctor_set(v___x_1363_, 5, v_synthPendingDepth_1358_);
lean_ctor_set(v___x_1363_, 6, v_customCanUnfoldPredicate_x3f_1359_);
lean_ctor_set_uint8(v___x_1363_, sizeof(void*)*7, v_trackZetaDelta_1354_);
lean_ctor_set_uint8(v___x_1363_, sizeof(void*)*7 + 1, v_univApprox_1360_);
lean_ctor_set_uint8(v___x_1363_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1361_);
lean_ctor_set_uint8(v___x_1363_, sizeof(void*)*7 + 3, v_cacheInferType_1362_);
lean_inc(v___y_1351_);
lean_inc_ref(v___y_1350_);
lean_inc(v___y_1349_);
v___x_1364_ = lean_apply_5(v_x_1347_, v___x_1363_, v___y_1349_, v___y_1350_, v___y_1351_, lean_box(0));
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg___boxed(lean_object* v_lctx_1365_, lean_object* v_x_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1365_, v_x_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec_ref(v___y_1367_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(lean_object* v_00_u03b1_1373_, lean_object* v_lctx_1374_, lean_object* v_x_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_){
_start:
{
lean_object* v___x_1381_; 
v___x_1381_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1374_, v_x_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___boxed(lean_object* v_00_u03b1_1382_, lean_object* v_lctx_1383_, lean_object* v_x_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
lean_object* v_res_1390_; 
v_res_1390_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(v_00_u03b1_1382_, v_lctx_1383_, v_x_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(lean_object* v_as_1391_, size_t v_i_1392_, size_t v_stop_1393_, lean_object* v_b_1394_){
_start:
{
uint8_t v___x_1395_; 
v___x_1395_ = lean_usize_dec_eq(v_i_1392_, v_stop_1393_);
if (v___x_1395_ == 0)
{
lean_object* v___x_1396_; lean_object* v_fst_1397_; lean_object* v_snd_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; size_t v___x_1401_; size_t v___x_1402_; 
v___x_1396_ = lean_array_uget_borrowed(v_as_1391_, v_i_1392_);
v_fst_1397_ = lean_ctor_get(v___x_1396_, 0);
v_snd_1398_ = lean_ctor_get(v___x_1396_, 1);
v___x_1399_ = l_Lean_Expr_fvarId_x21(v_fst_1397_);
lean_inc(v_snd_1398_);
v___x_1400_ = l_Lean_LocalContext_setUserName(v_b_1394_, v___x_1399_, v_snd_1398_);
v___x_1401_ = ((size_t)1ULL);
v___x_1402_ = lean_usize_add(v_i_1392_, v___x_1401_);
v_i_1392_ = v___x_1402_;
v_b_1394_ = v___x_1400_;
goto _start;
}
else
{
return v_b_1394_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1___boxed(lean_object* v_as_1404_, lean_object* v_i_1405_, lean_object* v_stop_1406_, lean_object* v_b_1407_){
_start:
{
size_t v_i_boxed_1408_; size_t v_stop_boxed_1409_; lean_object* v_res_1410_; 
v_i_boxed_1408_ = lean_unbox_usize(v_i_1405_);
lean_dec(v_i_1405_);
v_stop_boxed_1409_ = lean_unbox_usize(v_stop_1406_);
lean_dec(v_stop_1406_);
v_res_1410_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v_as_1404_, v_i_boxed_1408_, v_stop_boxed_1409_, v_b_1407_);
lean_dec_ref(v_as_1404_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(lean_object* v_fvars_1411_, lean_object* v_names_1412_, lean_object* v_k_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v_lctx_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; 
v_lctx_1419_ = lean_ctor_get(v___y_1414_, 2);
v___x_1420_ = l_Array_zip___redArg(v_fvars_1411_, v_names_1412_);
v___x_1421_ = lean_unsigned_to_nat(0u);
v___x_1422_ = lean_array_get_size(v___x_1420_);
v___x_1423_ = lean_nat_dec_lt(v___x_1421_, v___x_1422_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; 
lean_dec_ref(v___x_1420_);
lean_inc_ref(v_lctx_1419_);
v___x_1424_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1419_, v_k_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
return v___x_1424_;
}
else
{
uint8_t v___x_1425_; 
v___x_1425_ = lean_nat_dec_le(v___x_1422_, v___x_1422_);
if (v___x_1425_ == 0)
{
if (v___x_1423_ == 0)
{
lean_object* v___x_1426_; 
lean_dec_ref(v___x_1420_);
lean_inc_ref(v_lctx_1419_);
v___x_1426_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1419_, v_k_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
return v___x_1426_;
}
else
{
size_t v___x_1427_; size_t v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1427_ = ((size_t)0ULL);
v___x_1428_ = lean_usize_of_nat(v___x_1422_);
lean_inc_ref(v_lctx_1419_);
v___x_1429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v___x_1420_, v___x_1427_, v___x_1428_, v_lctx_1419_);
lean_dec_ref(v___x_1420_);
v___x_1430_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v___x_1429_, v_k_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
return v___x_1430_;
}
}
else
{
size_t v___x_1431_; size_t v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1431_ = ((size_t)0ULL);
v___x_1432_ = lean_usize_of_nat(v___x_1422_);
lean_inc_ref(v_lctx_1419_);
v___x_1433_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v___x_1420_, v___x_1431_, v___x_1432_, v_lctx_1419_);
lean_dec_ref(v___x_1420_);
v___x_1434_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v___x_1433_, v_k_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
return v___x_1434_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg___boxed(lean_object* v_fvars_1435_, lean_object* v_names_1436_, lean_object* v_k_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1435_, v_names_1436_, v_k_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec_ref(v_names_1436_);
lean_dec_ref(v_fvars_1435_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object* v_00_u03b1_1444_, lean_object* v_fvars_1445_, lean_object* v_names_1446_, lean_object* v_k_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1445_, v_names_1446_, v_k_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___boxed(lean_object* v_00_u03b1_1454_, lean_object* v_fvars_1455_, lean_object* v_names_1456_, lean_object* v_k_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(v_00_u03b1_1454_, v_fvars_1455_, v_names_1456_, v_k_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
lean_dec_ref(v_names_1456_);
lean_dec_ref(v_fvars_1455_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(lean_object* v_k_1464_, lean_object* v_fvars_1465_, lean_object* v_names_1466_, lean_object* v_runInBase_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1473_ = lean_apply_2(v_runInBase_1467_, lean_box(0), v_k_1464_);
v___x_1474_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1465_, v_names_1466_, v___x_1473_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed(lean_object* v_k_1475_, lean_object* v_fvars_1476_, lean_object* v_names_1477_, lean_object* v_runInBase_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(v_k_1475_, v_fvars_1476_, v_names_1477_, v_runInBase_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec_ref(v_names_1477_);
lean_dec_ref(v_fvars_1476_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg(lean_object* v_inst_1485_, lean_object* v_inst_1486_, lean_object* v_fvars_1487_, lean_object* v_names_1488_, lean_object* v_k_1489_){
_start:
{
lean_object* v_toBind_1490_; lean_object* v_liftWith_1491_; lean_object* v_restoreM_1492_; lean_object* v___f_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v_toBind_1490_ = lean_ctor_get(v_inst_1486_, 1);
lean_inc(v_toBind_1490_);
lean_dec_ref(v_inst_1486_);
v_liftWith_1491_ = lean_ctor_get(v_inst_1485_, 0);
lean_inc(v_liftWith_1491_);
v_restoreM_1492_ = lean_ctor_get(v_inst_1485_, 1);
lean_inc(v_restoreM_1492_);
lean_dec_ref(v_inst_1485_);
v___f_1493_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1493_, 0, v_k_1489_);
lean_closure_set(v___f_1493_, 1, v_fvars_1487_);
lean_closure_set(v___f_1493_, 2, v_names_1488_);
v___x_1494_ = lean_apply_2(v_liftWith_1491_, lean_box(0), v___f_1493_);
v___x_1495_ = lean_apply_1(v_restoreM_1492_, lean_box(0));
v___x_1496_ = lean_apply_4(v_toBind_1490_, lean_box(0), lean_box(0), v___x_1494_, v___x_1495_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames(lean_object* v_n_1497_, lean_object* v_inst_1498_, lean_object* v_inst_1499_, lean_object* v_00_u03b1_1500_, lean_object* v_fvars_1501_, lean_object* v_names_1502_, lean_object* v_k_1503_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = l_Lean_Meta_MatcherApp_withUserNames___redArg(v_inst_1498_, v_inst_1499_, v_fvars_1501_, v_names_1502_, v_k_1503_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(lean_object* v_k_1505_, lean_object* v_runInBase_1506_, lean_object* v_ys_1507_, lean_object* v_args_1508_, lean_object* v___mask_1509_, lean_object* v___bodyType_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_){
_start:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = lean_apply_2(v_k_1505_, v_ys_1507_, v_args_1508_);
lean_inc(v___y_1514_);
lean_inc_ref(v___y_1513_);
lean_inc(v___y_1512_);
lean_inc_ref(v___y_1511_);
v___x_1517_ = lean_apply_7(v_runInBase_1506_, lean_box(0), v___x_1516_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, lean_box(0));
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed(lean_object* v_k_1518_, lean_object* v_runInBase_1519_, lean_object* v_ys_1520_, lean_object* v_args_1521_, lean_object* v___mask_1522_, lean_object* v___bodyType_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v_res_1529_; 
v_res_1529_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(v_k_1518_, v_runInBase_1519_, v_ys_1520_, v_args_1521_, v___mask_1522_, v___bodyType_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec_ref(v___bodyType_1523_);
lean_dec_ref(v___mask_1522_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(lean_object* v_k_1530_, lean_object* v_origAltType_1531_, lean_object* v_altInfo_1532_, lean_object* v_runInBase_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_){
_start:
{
lean_object* v___f_1539_; lean_object* v___x_1540_; 
v___f_1539_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1539_, 0, v_k_1530_);
lean_closure_set(v___f_1539_, 1, v_runInBase_1533_);
v___x_1540_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_1531_, v_altInfo_1532_, v___f_1539_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed(lean_object* v_k_1541_, lean_object* v_origAltType_1542_, lean_object* v_altInfo_1543_, lean_object* v_runInBase_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(v_k_1541_, v_origAltType_1542_, v_altInfo_1543_, v_runInBase_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(lean_object* v_inst_1551_, lean_object* v_inst_1552_, lean_object* v_origAltType_1553_, lean_object* v_altInfo_1554_, lean_object* v_k_1555_){
_start:
{
lean_object* v_toBind_1556_; lean_object* v_liftWith_1557_; lean_object* v_restoreM_1558_; lean_object* v___f_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v_toBind_1556_ = lean_ctor_get(v_inst_1551_, 1);
lean_inc(v_toBind_1556_);
lean_dec_ref(v_inst_1551_);
v_liftWith_1557_ = lean_ctor_get(v_inst_1552_, 0);
lean_inc(v_liftWith_1557_);
v_restoreM_1558_ = lean_ctor_get(v_inst_1552_, 1);
lean_inc(v_restoreM_1558_);
lean_dec_ref(v_inst_1552_);
v___f_1559_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_1559_, 0, v_k_1555_);
lean_closure_set(v___f_1559_, 1, v_origAltType_1553_);
lean_closure_set(v___f_1559_, 2, v_altInfo_1554_);
v___x_1560_ = lean_apply_2(v_liftWith_1557_, lean_box(0), v___f_1559_);
v___x_1561_ = lean_apply_1(v_restoreM_1558_, lean_box(0));
v___x_1562_ = lean_apply_4(v_toBind_1556_, lean_box(0), lean_box(0), v___x_1560_, v___x_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27(lean_object* v_n_1563_, lean_object* v_inst_1564_, lean_object* v_inst_1565_, lean_object* v_00_u03b1_1566_, lean_object* v_origAltType_1567_, lean_object* v_altInfo_1568_, lean_object* v_k_1569_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(v_inst_1564_, v_inst_1565_, v_origAltType_1567_, v_altInfo_1568_, v_k_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_altParams(lean_object* v_fvars_1571_){
_start:
{
lean_object* v_args_1572_; lean_object* v_discrEqs_1573_; lean_object* v___x_1574_; 
v_args_1572_ = lean_ctor_get(v_fvars_1571_, 0);
lean_inc_ref(v_args_1572_);
v_discrEqs_1573_ = lean_ctor_get(v_fvars_1571_, 3);
lean_inc_ref(v_discrEqs_1573_);
lean_dec_ref(v_fvars_1571_);
v___x_1574_ = l_Array_append___redArg(v_args_1572_, v_discrEqs_1573_);
lean_dec_ref(v_discrEqs_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object* v_fvars_1575_){
_start:
{
lean_object* v_fields_1576_; lean_object* v_overlaps_1577_; lean_object* v_discrEqs_1578_; lean_object* v_extraEqs_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v_fields_1576_ = lean_ctor_get(v_fvars_1575_, 1);
lean_inc_ref(v_fields_1576_);
v_overlaps_1577_ = lean_ctor_get(v_fvars_1575_, 2);
lean_inc_ref(v_overlaps_1577_);
v_discrEqs_1578_ = lean_ctor_get(v_fvars_1575_, 3);
lean_inc_ref(v_discrEqs_1578_);
v_extraEqs_1579_ = lean_ctor_get(v_fvars_1575_, 4);
lean_inc_ref(v_extraEqs_1579_);
lean_dec_ref(v_fvars_1575_);
v___x_1580_ = l_Array_append___redArg(v_fields_1576_, v_overlaps_1577_);
lean_dec_ref(v_overlaps_1577_);
v___x_1581_ = l_Array_append___redArg(v___x_1580_, v_discrEqs_1578_);
lean_dec_ref(v_discrEqs_1578_);
v___x_1582_ = l_Array_append___redArg(v___x_1581_, v_extraEqs_1579_);
lean_dec_ref(v_extraEqs_1579_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0(lean_object* v_inst_1583_, lean_object* v_inst_1584_, lean_object* v_x_1585_){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2);
v___x_1587_ = l_Lean_throwError___redArg(v_inst_1583_, v_inst_1584_, v___x_1586_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed(lean_object* v_inst_1588_, lean_object* v_inst_1589_, lean_object* v_x_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__0(v_inst_1588_, v_inst_1589_, v_x_1590_);
lean_dec_ref(v_x_1590_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1(lean_object* v_inst_1592_, lean_object* v_x_1593_){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1594_ = l_Lean_Expr_fvarId_x21(v_x_1593_);
v___x_1595_ = lean_alloc_closure((void*)(l_Lean_FVarId_getUserName___boxed), 6, 1);
lean_closure_set(v___x_1595_, 0, v___x_1594_);
v___x_1596_ = lean_apply_2(v_inst_1592_, lean_box(0), v___x_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed(lean_object* v_inst_1597_, lean_object* v_x_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__1(v_inst_1597_, v_x_1598_);
lean_dec_ref(v_x_1598_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2(lean_object* v_inst_1600_, lean_object* v___f_1601_, lean_object* v_xs_1602_, lean_object* v_x_1603_){
_start:
{
size_t v_sz_1604_; size_t v___x_1605_; lean_object* v___x_1606_; 
v_sz_1604_ = lean_array_size(v_xs_1602_);
v___x_1605_ = ((size_t)0ULL);
v___x_1606_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1600_, v___f_1601_, v_sz_1604_, v___x_1605_, v_xs_1602_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed(lean_object* v_inst_1607_, lean_object* v___f_1608_, lean_object* v_xs_1609_, lean_object* v_x_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__2(v_inst_1607_, v___f_1608_, v_xs_1609_, v_x_1610_);
lean_dec_ref(v_x_1610_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3(lean_object* v_fst_1612_, lean_object* v_fst_1613_, lean_object* v___x_1614_, lean_object* v___x_1615_, lean_object* v_toPure_1616_, lean_object* v_____do__lift_1617_){
_start:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1618_ = lean_array_push(v_fst_1612_, v_____do__lift_1617_);
v___x_1619_ = lean_nat_add(v_fst_1613_, v___x_1614_);
v___x_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
lean_ctor_set(v___x_1620_, 1, v___x_1615_);
v___x_1621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1618_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
v___x_1622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1621_);
v___x_1623_ = lean_apply_2(v_toPure_1616_, lean_box(0), v___x_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed(lean_object* v_fst_1624_, lean_object* v_fst_1625_, lean_object* v___x_1626_, lean_object* v___x_1627_, lean_object* v_toPure_1628_, lean_object* v_____do__lift_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__3(v_fst_1624_, v_fst_1625_, v___x_1626_, v___x_1627_, v_toPure_1628_, v_____do__lift_1629_);
lean_dec(v___x_1626_);
lean_dec(v_fst_1625_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4(uint8_t v_val_1631_, lean_object* v_a_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
if (v_val_1631_ == 0)
{
lean_object* v___x_1638_; 
v___x_1638_ = l_Lean_Meta_mkEqRefl(v_a_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
return v___x_1638_;
}
else
{
lean_object* v___x_1639_; 
v___x_1639_ = l_Lean_Meta_mkHEqRefl(v_a_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
return v___x_1639_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed(lean_object* v_val_1640_, lean_object* v_a_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
uint8_t v_val_12196__boxed_1647_; lean_object* v_res_1648_; 
v_val_12196__boxed_1647_ = lean_unbox(v_val_1640_);
v_res_1648_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__4(v_val_12196__boxed_1647_, v_a_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5(lean_object* v_toPure_1649_, lean_object* v_inst_1650_, lean_object* v_toBind_1651_, lean_object* v_a_1652_, lean_object* v_x_1653_, lean_object* v___y_1654_){
_start:
{
lean_object* v_snd_1655_; lean_object* v_snd_1656_; lean_object* v_fst_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1705_; 
v_snd_1655_ = lean_ctor_get(v___y_1654_, 1);
lean_inc(v_snd_1655_);
v_snd_1656_ = lean_ctor_get(v_snd_1655_, 1);
lean_inc(v_snd_1656_);
v_fst_1657_ = lean_ctor_get(v___y_1654_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___y_1654_);
if (v_isSharedCheck_1705_ == 0)
{
lean_object* v_unused_1706_; 
v_unused_1706_ = lean_ctor_get(v___y_1654_, 1);
lean_dec(v_unused_1706_);
v___x_1659_ = v___y_1654_;
v_isShared_1660_ = v_isSharedCheck_1705_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_fst_1657_);
lean_dec(v___y_1654_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1705_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v_fst_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1703_; 
v_fst_1661_ = lean_ctor_get(v_snd_1655_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v_snd_1655_);
if (v_isSharedCheck_1703_ == 0)
{
lean_object* v_unused_1704_; 
v_unused_1704_ = lean_ctor_get(v_snd_1655_, 1);
lean_dec(v_unused_1704_);
v___x_1663_ = v_snd_1655_;
v_isShared_1664_ = v_isSharedCheck_1703_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_fst_1661_);
lean_dec(v_snd_1655_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1703_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v_array_1665_; lean_object* v_start_1666_; lean_object* v_stop_1667_; uint8_t v___x_1668_; 
v_array_1665_ = lean_ctor_get(v_snd_1656_, 0);
v_start_1666_ = lean_ctor_get(v_snd_1656_, 1);
v_stop_1667_ = lean_ctor_get(v_snd_1656_, 2);
v___x_1668_ = lean_nat_dec_lt(v_start_1666_, v_stop_1667_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1670_; 
lean_dec_ref(v_a_1652_);
lean_dec(v_toBind_1651_);
lean_dec(v_inst_1650_);
if (v_isShared_1664_ == 0)
{
v___x_1670_ = v___x_1663_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_fst_1661_);
lean_ctor_set(v_reuseFailAlloc_1676_, 1, v_snd_1656_);
v___x_1670_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
lean_object* v___x_1672_; 
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 1, v___x_1670_);
v___x_1672_ = v___x_1659_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_fst_1657_);
lean_ctor_set(v_reuseFailAlloc_1675_, 1, v___x_1670_);
v___x_1672_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1672_);
v___x_1674_ = lean_apply_2(v_toPure_1649_, lean_box(0), v___x_1673_);
return v___x_1674_;
}
}
}
else
{
lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1699_; 
lean_inc(v_stop_1667_);
lean_inc(v_start_1666_);
lean_inc_ref(v_array_1665_);
v_isSharedCheck_1699_ = !lean_is_exclusive(v_snd_1656_);
if (v_isSharedCheck_1699_ == 0)
{
lean_object* v_unused_1700_; lean_object* v_unused_1701_; lean_object* v_unused_1702_; 
v_unused_1700_ = lean_ctor_get(v_snd_1656_, 2);
lean_dec(v_unused_1700_);
v_unused_1701_ = lean_ctor_get(v_snd_1656_, 1);
lean_dec(v_unused_1701_);
v_unused_1702_ = lean_ctor_get(v_snd_1656_, 0);
lean_dec(v_unused_1702_);
v___x_1678_ = v_snd_1656_;
v_isShared_1679_ = v_isSharedCheck_1699_;
goto v_resetjp_1677_;
}
else
{
lean_dec(v_snd_1656_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1699_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1680_ = lean_array_fget(v_array_1665_, v_start_1666_);
v___x_1681_ = lean_unsigned_to_nat(1u);
v___x_1682_ = lean_nat_add(v_start_1666_, v___x_1681_);
lean_dec(v_start_1666_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 1, v___x_1682_);
v___x_1684_ = v___x_1678_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_array_1665_);
lean_ctor_set(v_reuseFailAlloc_1698_, 1, v___x_1682_);
lean_ctor_set(v_reuseFailAlloc_1698_, 2, v_stop_1667_);
v___x_1684_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v___x_1686_; 
lean_dec_ref(v_a_1652_);
lean_dec(v_toBind_1651_);
lean_dec(v_inst_1650_);
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 1, v___x_1684_);
v___x_1686_ = v___x_1663_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_fst_1661_);
lean_ctor_set(v_reuseFailAlloc_1692_, 1, v___x_1684_);
v___x_1686_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
lean_object* v___x_1688_; 
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 1, v___x_1686_);
v___x_1688_ = v___x_1659_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_fst_1657_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v___x_1686_);
v___x_1688_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
v___x_1690_ = lean_apply_2(v_toPure_1649_, lean_box(0), v___x_1689_);
return v___x_1690_;
}
}
}
else
{
lean_object* v_val_1693_; lean_object* v___f_1694_; lean_object* v___f_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
lean_del_object(v___x_1663_);
lean_del_object(v___x_1659_);
v_val_1693_ = lean_ctor_get(v___x_1680_, 0);
lean_inc(v_val_1693_);
lean_dec_ref_known(v___x_1680_, 1);
v___f_1694_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_1694_, 0, v_fst_1657_);
lean_closure_set(v___f_1694_, 1, v_fst_1661_);
lean_closure_set(v___f_1694_, 2, v___x_1681_);
lean_closure_set(v___f_1694_, 3, v___x_1684_);
lean_closure_set(v___f_1694_, 4, v_toPure_1649_);
v___f_1695_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed), 7, 2);
lean_closure_set(v___f_1695_, 0, v_val_1693_);
lean_closure_set(v___f_1695_, 1, v_a_1652_);
v___x_1696_ = lean_apply_2(v_inst_1650_, lean_box(0), v___f_1695_);
v___x_1697_ = lean_apply_4(v_toBind_1651_, lean_box(0), lean_box(0), v___x_1696_, v___f_1694_);
return v___x_1697_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6(lean_object* v_heq_1707_, lean_object* v_fst_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = l_Lean_mkArrow(v_heq_1707_, v_fst_1708_, v___y_1711_, v___y_1712_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed(lean_object* v_heq_1715_, lean_object* v_fst_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__6(v_heq_1715_, v_fst_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7(lean_object* v_heq_1725_, lean_object* v_fst_1726_, lean_object* v_fst_1727_, lean_object* v___x_1728_, lean_object* v___x_1729_, lean_object* v_toPure_1730_, lean_object* v_____x_1731_){
_start:
{
uint8_t v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1732_ = l_Lean_Expr_isHEq(v_heq_1725_);
v___x_1733_ = lean_box(v___x_1732_);
v___x_1734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1733_);
v___x_1735_ = lean_array_push(v_fst_1726_, v___x_1734_);
v___x_1736_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0));
v___x_1737_ = lean_array_push(v_fst_1727_, v___x_1736_);
v___x_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1728_);
lean_ctor_set(v___x_1738_, 1, v___x_1729_);
v___x_1739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1737_);
lean_ctor_set(v___x_1739_, 1, v___x_1738_);
v___x_1740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1735_);
lean_ctor_set(v___x_1740_, 1, v___x_1739_);
v___x_1741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1741_, 0, v_____x_1731_);
lean_ctor_set(v___x_1741_, 1, v___x_1740_);
v___x_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1742_, 0, v___x_1741_);
v___x_1743_ = lean_apply_2(v_toPure_1730_, lean_box(0), v___x_1742_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed(lean_object* v_heq_1744_, lean_object* v_fst_1745_, lean_object* v_fst_1746_, lean_object* v___x_1747_, lean_object* v___x_1748_, lean_object* v_toPure_1749_, lean_object* v_____x_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__7(v_heq_1744_, v_fst_1745_, v_fst_1746_, v___x_1747_, v___x_1748_, v_toPure_1749_, v_____x_1750_);
lean_dec_ref(v_heq_1744_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8(lean_object* v_fst_1752_, lean_object* v_fst_1753_, lean_object* v_fst_1754_, lean_object* v___x_1755_, lean_object* v___x_1756_, lean_object* v_toPure_1757_, lean_object* v_inst_1758_, lean_object* v_toBind_1759_, lean_object* v_heq_1760_){
_start:
{
lean_object* v___f_1761_; lean_object* v___f_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
lean_inc_ref(v_heq_1760_);
v___f_1761_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1761_, 0, v_heq_1760_);
lean_closure_set(v___f_1761_, 1, v_fst_1752_);
v___f_1762_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed), 7, 6);
lean_closure_set(v___f_1762_, 0, v_heq_1760_);
lean_closure_set(v___f_1762_, 1, v_fst_1753_);
lean_closure_set(v___f_1762_, 2, v_fst_1754_);
lean_closure_set(v___f_1762_, 3, v___x_1755_);
lean_closure_set(v___f_1762_, 4, v___x_1756_);
lean_closure_set(v___f_1762_, 5, v_toPure_1757_);
v___x_1763_ = lean_apply_2(v_inst_1758_, lean_box(0), v___f_1761_);
v___x_1764_ = lean_apply_4(v_toBind_1759_, lean_box(0), lean_box(0), v___x_1763_, v___f_1762_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9(lean_object* v___x_1765_, lean_object* v_a_1766_, lean_object* v_inst_1767_, lean_object* v_toBind_1768_, lean_object* v___f_1769_, lean_object* v_fst_1770_, lean_object* v_fst_1771_, lean_object* v___x_1772_, lean_object* v___x_1773_, lean_object* v___x_1774_, lean_object* v_fst_1775_, lean_object* v_toPure_1776_, uint8_t v_____do__lift_1777_){
_start:
{
if (v_____do__lift_1777_ == 0)
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
lean_dec(v_toPure_1776_);
lean_dec(v_fst_1775_);
lean_dec_ref(v___x_1774_);
lean_dec_ref(v___x_1773_);
lean_dec(v___x_1772_);
lean_dec(v_fst_1771_);
lean_dec(v_fst_1770_);
v___x_1778_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEqHEq___boxed), 7, 2);
lean_closure_set(v___x_1778_, 0, v___x_1765_);
lean_closure_set(v___x_1778_, 1, v_a_1766_);
v___x_1779_ = lean_apply_2(v_inst_1767_, lean_box(0), v___x_1778_);
v___x_1780_ = lean_apply_4(v_toBind_1768_, lean_box(0), lean_box(0), v___x_1779_, v___f_1769_);
return v___x_1780_;
}
else
{
lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
lean_dec(v___f_1769_);
lean_dec(v_toBind_1768_);
lean_dec(v_inst_1767_);
lean_dec_ref(v_a_1766_);
lean_dec_ref(v___x_1765_);
v___x_1781_ = lean_box(0);
v___x_1782_ = lean_array_push(v_fst_1770_, v___x_1781_);
v___x_1783_ = lean_array_push(v_fst_1771_, v___x_1772_);
v___x_1784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1773_);
lean_ctor_set(v___x_1784_, 1, v___x_1774_);
v___x_1785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1783_);
lean_ctor_set(v___x_1785_, 1, v___x_1784_);
v___x_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1782_);
lean_ctor_set(v___x_1786_, 1, v___x_1785_);
v___x_1787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1787_, 0, v_fst_1775_);
lean_ctor_set(v___x_1787_, 1, v___x_1786_);
v___x_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1787_);
v___x_1789_ = lean_apply_2(v_toPure_1776_, lean_box(0), v___x_1788_);
return v___x_1789_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed(lean_object* v___x_1790_, lean_object* v_a_1791_, lean_object* v_inst_1792_, lean_object* v_toBind_1793_, lean_object* v___f_1794_, lean_object* v_fst_1795_, lean_object* v_fst_1796_, lean_object* v___x_1797_, lean_object* v___x_1798_, lean_object* v___x_1799_, lean_object* v_fst_1800_, lean_object* v_toPure_1801_, lean_object* v_____do__lift_1802_){
_start:
{
uint8_t v_____do__lift_12390__boxed_1803_; lean_object* v_res_1804_; 
v_____do__lift_12390__boxed_1803_ = lean_unbox(v_____do__lift_1802_);
v_res_1804_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__9(v___x_1790_, v_a_1791_, v_inst_1792_, v_toBind_1793_, v___f_1794_, v_fst_1795_, v_fst_1796_, v___x_1797_, v___x_1798_, v___x_1799_, v_fst_1800_, v_toPure_1801_, v_____do__lift_12390__boxed_1803_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10(lean_object* v_toPure_1805_, uint8_t v_addEqualities_1806_, lean_object* v_inst_1807_, lean_object* v_toBind_1808_, lean_object* v_a_1809_, lean_object* v_x_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v_snd_1812_; lean_object* v_snd_1813_; lean_object* v_snd_1814_; lean_object* v_snd_1815_; lean_object* v_fst_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1922_; 
v_snd_1812_ = lean_ctor_get(v___y_1811_, 1);
lean_inc(v_snd_1812_);
v_snd_1813_ = lean_ctor_get(v_snd_1812_, 1);
lean_inc(v_snd_1813_);
v_snd_1814_ = lean_ctor_get(v_snd_1813_, 1);
lean_inc(v_snd_1814_);
v_snd_1815_ = lean_ctor_get(v_snd_1814_, 1);
lean_inc(v_snd_1815_);
v_fst_1816_ = lean_ctor_get(v___y_1811_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___y_1811_);
if (v_isSharedCheck_1922_ == 0)
{
lean_object* v_unused_1923_; 
v_unused_1923_ = lean_ctor_get(v___y_1811_, 1);
lean_dec(v_unused_1923_);
v___x_1818_ = v___y_1811_;
v_isShared_1819_ = v_isSharedCheck_1922_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_fst_1816_);
lean_dec(v___y_1811_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1922_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v_fst_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1920_; 
v_fst_1820_ = lean_ctor_get(v_snd_1812_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v_snd_1812_);
if (v_isSharedCheck_1920_ == 0)
{
lean_object* v_unused_1921_; 
v_unused_1921_ = lean_ctor_get(v_snd_1812_, 1);
lean_dec(v_unused_1921_);
v___x_1822_ = v_snd_1812_;
v_isShared_1823_ = v_isSharedCheck_1920_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_fst_1820_);
lean_dec(v_snd_1812_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1920_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v_fst_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1918_; 
v_fst_1824_ = lean_ctor_get(v_snd_1813_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_snd_1813_);
if (v_isSharedCheck_1918_ == 0)
{
lean_object* v_unused_1919_; 
v_unused_1919_ = lean_ctor_get(v_snd_1813_, 1);
lean_dec(v_unused_1919_);
v___x_1826_ = v_snd_1813_;
v_isShared_1827_ = v_isSharedCheck_1918_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_fst_1824_);
lean_dec(v_snd_1813_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1918_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v_fst_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1916_; 
v_fst_1828_ = lean_ctor_get(v_snd_1814_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v_snd_1814_);
if (v_isSharedCheck_1916_ == 0)
{
lean_object* v_unused_1917_; 
v_unused_1917_ = lean_ctor_get(v_snd_1814_, 1);
lean_dec(v_unused_1917_);
v___x_1830_ = v_snd_1814_;
v_isShared_1831_ = v_isSharedCheck_1916_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_fst_1828_);
lean_dec(v_snd_1814_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1916_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v_array_1832_; lean_object* v_start_1833_; lean_object* v_stop_1834_; uint8_t v___x_1835_; 
v_array_1832_ = lean_ctor_get(v_snd_1815_, 0);
v_start_1833_ = lean_ctor_get(v_snd_1815_, 1);
v_stop_1834_ = lean_ctor_get(v_snd_1815_, 2);
v___x_1835_ = lean_nat_dec_lt(v_start_1833_, v_stop_1834_);
if (v___x_1835_ == 0)
{
lean_object* v___x_1837_; 
lean_dec_ref(v_a_1809_);
lean_dec(v_toBind_1808_);
lean_dec(v_inst_1807_);
if (v_isShared_1831_ == 0)
{
v___x_1837_ = v___x_1830_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_fst_1828_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v_snd_1815_);
v___x_1837_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
lean_object* v___x_1839_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 1, v___x_1837_);
v___x_1839_ = v___x_1826_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_fst_1824_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v___x_1837_);
v___x_1839_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
lean_object* v___x_1841_; 
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 1, v___x_1839_);
v___x_1841_ = v___x_1822_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_fst_1820_);
lean_ctor_set(v_reuseFailAlloc_1847_, 1, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
lean_object* v___x_1843_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 1, v___x_1841_);
v___x_1843_ = v___x_1818_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_fst_1816_);
lean_ctor_set(v_reuseFailAlloc_1846_, 1, v___x_1841_);
v___x_1843_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
v___x_1845_ = lean_apply_2(v_toPure_1805_, lean_box(0), v___x_1844_);
return v___x_1845_;
}
}
}
}
}
else
{
lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1912_; 
lean_inc(v_stop_1834_);
lean_inc(v_start_1833_);
lean_inc_ref(v_array_1832_);
v_isSharedCheck_1912_ = !lean_is_exclusive(v_snd_1815_);
if (v_isSharedCheck_1912_ == 0)
{
lean_object* v_unused_1913_; lean_object* v_unused_1914_; lean_object* v_unused_1915_; 
v_unused_1913_ = lean_ctor_get(v_snd_1815_, 2);
lean_dec(v_unused_1913_);
v_unused_1914_ = lean_ctor_get(v_snd_1815_, 1);
lean_dec(v_unused_1914_);
v_unused_1915_ = lean_ctor_get(v_snd_1815_, 0);
lean_dec(v_unused_1915_);
v___x_1851_ = v_snd_1815_;
v_isShared_1852_ = v_isSharedCheck_1912_;
goto v_resetjp_1850_;
}
else
{
lean_dec(v_snd_1815_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1912_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v_array_1853_; lean_object* v_start_1854_; lean_object* v_stop_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1860_; 
v_array_1853_ = lean_ctor_get(v_fst_1828_, 0);
v_start_1854_ = lean_ctor_get(v_fst_1828_, 1);
v_stop_1855_ = lean_ctor_get(v_fst_1828_, 2);
v___x_1856_ = lean_array_fget(v_array_1832_, v_start_1833_);
v___x_1857_ = lean_unsigned_to_nat(1u);
v___x_1858_ = lean_nat_add(v_start_1833_, v___x_1857_);
lean_dec(v_start_1833_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 1, v___x_1858_);
v___x_1860_ = v___x_1851_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_array_1832_);
lean_ctor_set(v_reuseFailAlloc_1911_, 1, v___x_1858_);
lean_ctor_set(v_reuseFailAlloc_1911_, 2, v_stop_1834_);
v___x_1860_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
uint8_t v___x_1861_; 
v___x_1861_ = lean_nat_dec_lt(v_start_1854_, v_stop_1855_);
if (v___x_1861_ == 0)
{
lean_object* v___x_1863_; 
lean_dec(v___x_1856_);
lean_dec_ref(v_a_1809_);
lean_dec(v_toBind_1808_);
lean_dec(v_inst_1807_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 1, v___x_1860_);
v___x_1863_ = v___x_1830_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_fst_1828_);
lean_ctor_set(v_reuseFailAlloc_1875_, 1, v___x_1860_);
v___x_1863_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
lean_object* v___x_1865_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 1, v___x_1863_);
v___x_1865_ = v___x_1826_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_fst_1824_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v___x_1863_);
v___x_1865_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
lean_object* v___x_1867_; 
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 1, v___x_1865_);
v___x_1867_ = v___x_1822_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_fst_1820_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v___x_1865_);
v___x_1867_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1869_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 1, v___x_1867_);
v___x_1869_ = v___x_1818_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_fst_1816_);
lean_ctor_set(v_reuseFailAlloc_1872_, 1, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1869_);
v___x_1871_ = lean_apply_2(v_toPure_1805_, lean_box(0), v___x_1870_);
return v___x_1871_;
}
}
}
}
}
else
{
lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1907_; 
lean_inc(v_stop_1855_);
lean_inc(v_start_1854_);
lean_inc_ref(v_array_1853_);
v_isSharedCheck_1907_ = !lean_is_exclusive(v_fst_1828_);
if (v_isSharedCheck_1907_ == 0)
{
lean_object* v_unused_1908_; lean_object* v_unused_1909_; lean_object* v_unused_1910_; 
v_unused_1908_ = lean_ctor_get(v_fst_1828_, 2);
lean_dec(v_unused_1908_);
v_unused_1909_ = lean_ctor_get(v_fst_1828_, 1);
lean_dec(v_unused_1909_);
v_unused_1910_ = lean_ctor_get(v_fst_1828_, 0);
lean_dec(v_unused_1910_);
v___x_1877_ = v_fst_1828_;
v_isShared_1878_ = v_isSharedCheck_1907_;
goto v_resetjp_1876_;
}
else
{
lean_dec(v_fst_1828_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1907_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1882_; 
v___x_1879_ = lean_array_fget(v_array_1853_, v_start_1854_);
v___x_1880_ = lean_nat_add(v_start_1854_, v___x_1857_);
lean_dec(v_start_1854_);
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 1, v___x_1880_);
v___x_1882_ = v___x_1877_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_array_1853_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v___x_1880_);
lean_ctor_set(v_reuseFailAlloc_1906_, 2, v_stop_1855_);
v___x_1882_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
if (v_addEqualities_1806_ == 0)
{
lean_dec(v___x_1879_);
lean_dec_ref(v_a_1809_);
lean_dec(v_toBind_1808_);
lean_dec(v_inst_1807_);
goto v___jp_1883_;
}
else
{
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v___f_1901_; lean_object* v___f_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
lean_del_object(v___x_1830_);
lean_del_object(v___x_1826_);
lean_del_object(v___x_1822_);
lean_del_object(v___x_1818_);
lean_inc_n(v_toBind_1808_, 2);
lean_inc_n(v_inst_1807_, 2);
lean_inc(v_toPure_1805_);
lean_inc_ref(v___x_1860_);
lean_inc_ref(v___x_1882_);
lean_inc(v_fst_1824_);
lean_inc(v_fst_1820_);
lean_inc(v_fst_1816_);
v___f_1901_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__8), 9, 8);
lean_closure_set(v___f_1901_, 0, v_fst_1816_);
lean_closure_set(v___f_1901_, 1, v_fst_1820_);
lean_closure_set(v___f_1901_, 2, v_fst_1824_);
lean_closure_set(v___f_1901_, 3, v___x_1882_);
lean_closure_set(v___f_1901_, 4, v___x_1860_);
lean_closure_set(v___f_1901_, 5, v_toPure_1805_);
lean_closure_set(v___f_1901_, 6, v_inst_1807_);
lean_closure_set(v___f_1901_, 7, v_toBind_1808_);
lean_inc_ref(v_a_1809_);
v___f_1902_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed), 13, 12);
lean_closure_set(v___f_1902_, 0, v___x_1879_);
lean_closure_set(v___f_1902_, 1, v_a_1809_);
lean_closure_set(v___f_1902_, 2, v_inst_1807_);
lean_closure_set(v___f_1902_, 3, v_toBind_1808_);
lean_closure_set(v___f_1902_, 4, v___f_1901_);
lean_closure_set(v___f_1902_, 5, v_fst_1820_);
lean_closure_set(v___f_1902_, 6, v_fst_1824_);
lean_closure_set(v___f_1902_, 7, v___x_1856_);
lean_closure_set(v___f_1902_, 8, v___x_1882_);
lean_closure_set(v___f_1902_, 9, v___x_1860_);
lean_closure_set(v___f_1902_, 10, v_fst_1816_);
lean_closure_set(v___f_1902_, 11, v_toPure_1805_);
v___x_1903_ = lean_alloc_closure((void*)(l_Lean_Meta_isProof___boxed), 6, 1);
lean_closure_set(v___x_1903_, 0, v_a_1809_);
v___x_1904_ = lean_apply_2(v_inst_1807_, lean_box(0), v___x_1903_);
v___x_1905_ = lean_apply_4(v_toBind_1808_, lean_box(0), lean_box(0), v___x_1904_, v___f_1902_);
return v___x_1905_;
}
else
{
lean_dec(v___x_1879_);
lean_dec_ref(v_a_1809_);
lean_dec(v_toBind_1808_);
lean_dec(v_inst_1807_);
goto v___jp_1883_;
}
}
v___jp_1883_:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1888_; 
v___x_1884_ = lean_box(0);
v___x_1885_ = lean_array_push(v_fst_1820_, v___x_1884_);
v___x_1886_ = lean_array_push(v_fst_1824_, v___x_1856_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 1, v___x_1860_);
lean_ctor_set(v___x_1830_, 0, v___x_1882_);
v___x_1888_ = v___x_1830_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v___x_1882_);
lean_ctor_set(v_reuseFailAlloc_1900_, 1, v___x_1860_);
v___x_1888_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
lean_object* v___x_1890_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 1, v___x_1888_);
lean_ctor_set(v___x_1826_, 0, v___x_1886_);
v___x_1890_ = v___x_1826_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1886_);
lean_ctor_set(v_reuseFailAlloc_1899_, 1, v___x_1888_);
v___x_1890_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
lean_object* v___x_1892_; 
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 1, v___x_1890_);
lean_ctor_set(v___x_1822_, 0, v___x_1885_);
v___x_1892_ = v___x_1822_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1885_);
lean_ctor_set(v_reuseFailAlloc_1898_, 1, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
lean_object* v___x_1894_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 1, v___x_1892_);
v___x_1894_ = v___x_1818_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_fst_1816_);
lean_ctor_set(v_reuseFailAlloc_1897_, 1, v___x_1892_);
v___x_1894_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
v___x_1896_ = lean_apply_2(v_toPure_1805_, lean_box(0), v___x_1895_);
return v___x_1896_;
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed(lean_object* v_toPure_1924_, lean_object* v_addEqualities_1925_, lean_object* v_inst_1926_, lean_object* v_toBind_1927_, lean_object* v_a_1928_, lean_object* v_x_1929_, lean_object* v___y_1930_){
_start:
{
uint8_t v_addEqualities_boxed_1931_; lean_object* v_res_1932_; 
v_addEqualities_boxed_1931_ = lean_unbox(v_addEqualities_1925_);
v_res_1932_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__10(v_toPure_1924_, v_addEqualities_boxed_1931_, v_inst_1926_, v_toBind_1927_, v_a_1928_, v_x_1929_, v___y_1930_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11(lean_object* v_toPure_1933_, lean_object* v_____do__lift_1934_){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = lean_apply_2(v_toPure_1933_, lean_box(0), v_____do__lift_1934_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12(lean_object* v_toPure_1936_, lean_object* v_____do__lift_1937_){
_start:
{
lean_object* v___x_1938_; 
v___x_1938_ = lean_apply_2(v_toPure_1936_, lean_box(0), v_____do__lift_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__13(lean_object* v_fst_1939_, lean_object* v_fst_1940_, lean_object* v_____do__lift_1941_, lean_object* v_toPure_1942_, lean_object* v_____do__lift_1943_){
_start:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1944_, 0, v_fst_1939_);
lean_ctor_set(v___x_1944_, 1, v_fst_1940_);
v___x_1945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1945_, 0, v_____do__lift_1943_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1946_, 0, v_____do__lift_1941_);
lean_ctor_set(v___x_1946_, 1, v___x_1945_);
v___x_1947_ = lean_apply_2(v_toPure_1942_, lean_box(0), v___x_1946_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__14(lean_object* v_fst_1948_, lean_object* v_fst_1949_, lean_object* v_toPure_1950_, lean_object* v_fst_1951_, lean_object* v_inst_1952_, lean_object* v_toBind_1953_, lean_object* v_____do__lift_1954_){
_start:
{
lean_object* v___f_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___f_1955_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__13), 5, 4);
lean_closure_set(v___f_1955_, 0, v_fst_1948_);
lean_closure_set(v___f_1955_, 1, v_fst_1949_);
lean_closure_set(v___f_1955_, 2, v_____do__lift_1954_);
lean_closure_set(v___f_1955_, 3, v_toPure_1950_);
v___x_1956_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1956_, 0, v_fst_1951_);
v___x_1957_ = lean_apply_2(v_inst_1952_, lean_box(0), v___x_1956_);
v___x_1958_ = lean_apply_4(v_toBind_1953_, lean_box(0), lean_box(0), v___x_1957_, v___f_1955_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__15(lean_object* v_toPure_1959_, lean_object* v_inst_1960_, lean_object* v_toBind_1961_, lean_object* v_motiveArgs_1962_, lean_object* v_____s_1963_){
_start:
{
lean_object* v_snd_1964_; lean_object* v_snd_1965_; lean_object* v_fst_1966_; lean_object* v_fst_1967_; lean_object* v_fst_1968_; lean_object* v___f_1969_; uint8_t v___x_1970_; uint8_t v___x_1971_; uint8_t v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v_snd_1964_ = lean_ctor_get(v_____s_1963_, 1);
lean_inc(v_snd_1964_);
v_snd_1965_ = lean_ctor_get(v_snd_1964_, 1);
lean_inc(v_snd_1965_);
v_fst_1966_ = lean_ctor_get(v_____s_1963_, 0);
lean_inc_n(v_fst_1966_, 2);
lean_dec_ref(v_____s_1963_);
v_fst_1967_ = lean_ctor_get(v_snd_1964_, 0);
lean_inc(v_fst_1967_);
lean_dec(v_snd_1964_);
v_fst_1968_ = lean_ctor_get(v_snd_1965_, 0);
lean_inc(v_fst_1968_);
lean_dec(v_snd_1965_);
lean_inc(v_toBind_1961_);
lean_inc(v_inst_1960_);
v___f_1969_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__14), 7, 6);
lean_closure_set(v___f_1969_, 0, v_fst_1967_);
lean_closure_set(v___f_1969_, 1, v_fst_1968_);
lean_closure_set(v___f_1969_, 2, v_toPure_1959_);
lean_closure_set(v___f_1969_, 3, v_fst_1966_);
lean_closure_set(v___f_1969_, 4, v_inst_1960_);
lean_closure_set(v___f_1969_, 5, v_toBind_1961_);
v___x_1970_ = 0;
v___x_1971_ = 1;
v___x_1972_ = 1;
v___x_1973_ = lean_box(v___x_1970_);
v___x_1974_ = lean_box(v___x_1971_);
v___x_1975_ = lean_box(v___x_1970_);
v___x_1976_ = lean_box(v___x_1971_);
v___x_1977_ = lean_box(v___x_1972_);
v___x_1978_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1978_, 0, v_motiveArgs_1962_);
lean_closure_set(v___x_1978_, 1, v_fst_1966_);
lean_closure_set(v___x_1978_, 2, v___x_1973_);
lean_closure_set(v___x_1978_, 3, v___x_1974_);
lean_closure_set(v___x_1978_, 4, v___x_1975_);
lean_closure_set(v___x_1978_, 5, v___x_1976_);
lean_closure_set(v___x_1978_, 6, v___x_1977_);
v___x_1979_ = lean_apply_2(v_inst_1960_, lean_box(0), v___x_1978_);
v___x_1980_ = lean_apply_4(v_toBind_1961_, lean_box(0), lean_box(0), v___x_1979_, v___f_1969_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16(lean_object* v_toMatcherInfo_1983_, lean_object* v_discrs_x27_1984_, lean_object* v_motiveArgs_1985_, lean_object* v_inst_1986_, lean_object* v___f_1987_, lean_object* v_toBind_1988_, lean_object* v___f_1989_, lean_object* v_motiveBody_x27_1990_){
_start:
{
lean_object* v_discrInfos_1991_; lean_object* v___x_1992_; lean_object* v_addHEqualities_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; size_t v_sz_2002_; size_t v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v_discrInfos_1991_ = lean_ctor_get(v_toMatcherInfo_1983_, 4);
lean_inc_ref(v_discrInfos_1991_);
lean_dec_ref(v_toMatcherInfo_1983_);
v___x_1992_ = lean_unsigned_to_nat(0u);
v_addHEqualities_1993_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0));
v___x_1994_ = lean_array_get_size(v_discrs_x27_1984_);
v___x_1995_ = l_Array_toSubarray___redArg(v_discrs_x27_1984_, v___x_1992_, v___x_1994_);
v___x_1996_ = lean_array_get_size(v_discrInfos_1991_);
v___x_1997_ = l_Array_toSubarray___redArg(v_discrInfos_1991_, v___x_1992_, v___x_1996_);
v___x_1998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1995_);
lean_ctor_set(v___x_1998_, 1, v___x_1997_);
v___x_1999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1999_, 0, v_addHEqualities_1993_);
lean_ctor_set(v___x_1999_, 1, v___x_1998_);
v___x_2000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2000_, 0, v_addHEqualities_1993_);
lean_ctor_set(v___x_2000_, 1, v___x_1999_);
v___x_2001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2001_, 0, v_motiveBody_x27_1990_);
lean_ctor_set(v___x_2001_, 1, v___x_2000_);
v_sz_2002_ = lean_array_size(v_motiveArgs_1985_);
v___x_2003_ = ((size_t)0ULL);
v___x_2004_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1986_, v_motiveArgs_1985_, v___f_1987_, v_sz_2002_, v___x_2003_, v___x_2001_);
v___x_2005_ = lean_apply_4(v_toBind_1988_, lean_box(0), lean_box(0), v___x_2004_, v___f_1989_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__17(lean_object* v_onMotive_2006_, lean_object* v_motiveArgs_2007_, lean_object* v_motiveBody_2008_, lean_object* v_toBind_2009_, lean_object* v___f_2010_, lean_object* v_____r_2011_){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = lean_apply_2(v_onMotive_2006_, v_motiveArgs_2007_, v_motiveBody_2008_);
v___x_2013_ = lean_apply_4(v_toBind_2009_, lean_box(0), lean_box(0), v___x_2012_, v___f_2010_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__18(lean_object* v___f_2014_, lean_object* v_____r_2015_){
_start:
{
lean_object* v___x_2016_; 
v___x_2016_ = lean_apply_1(v___f_2014_, v_____r_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19(lean_object* v_toPure_2017_, lean_object* v_inst_2018_, lean_object* v_toBind_2019_, lean_object* v_toMatcherInfo_2020_, lean_object* v_discrs_x27_2021_, lean_object* v_inst_2022_, lean_object* v___f_2023_, lean_object* v_onMotive_2024_, lean_object* v_discrs_2025_, lean_object* v_inst_2026_, lean_object* v_motiveArgs_2027_, lean_object* v_motiveBody_2028_){
_start:
{
lean_object* v___f_2029_; lean_object* v___f_2030_; lean_object* v___f_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; uint8_t v___x_2034_; 
lean_inc_ref_n(v_motiveArgs_2027_, 3);
lean_inc_n(v_toBind_2019_, 3);
v___f_2029_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__15), 5, 4);
lean_closure_set(v___f_2029_, 0, v_toPure_2017_);
lean_closure_set(v___f_2029_, 1, v_inst_2018_);
lean_closure_set(v___f_2029_, 2, v_toBind_2019_);
lean_closure_set(v___f_2029_, 3, v_motiveArgs_2027_);
lean_inc_ref(v_inst_2022_);
v___f_2030_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16), 8, 7);
lean_closure_set(v___f_2030_, 0, v_toMatcherInfo_2020_);
lean_closure_set(v___f_2030_, 1, v_discrs_x27_2021_);
lean_closure_set(v___f_2030_, 2, v_motiveArgs_2027_);
lean_closure_set(v___f_2030_, 3, v_inst_2022_);
lean_closure_set(v___f_2030_, 4, v___f_2023_);
lean_closure_set(v___f_2030_, 5, v_toBind_2019_);
lean_closure_set(v___f_2030_, 6, v___f_2029_);
lean_inc_ref(v___f_2030_);
lean_inc_ref(v_motiveBody_2028_);
lean_inc(v_onMotive_2024_);
v___f_2031_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__17), 6, 5);
lean_closure_set(v___f_2031_, 0, v_onMotive_2024_);
lean_closure_set(v___f_2031_, 1, v_motiveArgs_2027_);
lean_closure_set(v___f_2031_, 2, v_motiveBody_2028_);
lean_closure_set(v___f_2031_, 3, v_toBind_2019_);
lean_closure_set(v___f_2031_, 4, v___f_2030_);
v___x_2032_ = lean_array_get_size(v_motiveArgs_2027_);
v___x_2033_ = lean_array_get_size(v_discrs_2025_);
v___x_2034_ = lean_nat_dec_eq(v___x_2032_, v___x_2033_);
if (v___x_2034_ == 0)
{
lean_object* v___f_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
lean_dec_ref(v___f_2030_);
lean_dec_ref(v_motiveBody_2028_);
lean_dec_ref(v_motiveArgs_2027_);
lean_dec(v_onMotive_2024_);
v___f_2035_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__18), 2, 1);
lean_closure_set(v___f_2035_, 0, v___f_2031_);
v___x_2036_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_2037_ = l_Nat_reprFast(v___x_2033_);
v___x_2038_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2037_);
v___x_2039_ = l_Lean_MessageData_ofFormat(v___x_2038_);
v___x_2040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2036_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
v___x_2041_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_2042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2040_);
lean_ctor_set(v___x_2042_, 1, v___x_2041_);
v___x_2043_ = l_Lean_throwError___redArg(v_inst_2022_, v_inst_2026_, v___x_2042_);
v___x_2044_ = lean_apply_4(v_toBind_2019_, lean_box(0), lean_box(0), v___x_2043_, v___f_2035_);
return v___x_2044_;
}
else
{
lean_object* v___x_2045_; lean_object* v___x_2046_; 
lean_dec_ref(v___f_2031_);
lean_dec_ref(v_inst_2026_);
lean_dec_ref(v_inst_2022_);
v___x_2045_ = lean_box(0);
v___x_2046_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__17(v_onMotive_2024_, v_motiveArgs_2027_, v_motiveBody_2028_, v_toBind_2019_, v___f_2030_, v___x_2045_);
return v___x_2046_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed(lean_object* v_toPure_2047_, lean_object* v_inst_2048_, lean_object* v_toBind_2049_, lean_object* v_toMatcherInfo_2050_, lean_object* v_discrs_x27_2051_, lean_object* v_inst_2052_, lean_object* v___f_2053_, lean_object* v_onMotive_2054_, lean_object* v_discrs_2055_, lean_object* v_inst_2056_, lean_object* v_motiveArgs_2057_, lean_object* v_motiveBody_2058_){
_start:
{
lean_object* v_res_2059_; 
v_res_2059_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__19(v_toPure_2047_, v_inst_2048_, v_toBind_2049_, v_toMatcherInfo_2050_, v_discrs_x27_2051_, v_inst_2052_, v___f_2053_, v_onMotive_2054_, v_discrs_2055_, v_inst_2056_, v_motiveArgs_2057_, v_motiveBody_2058_);
lean_dec_ref(v_discrs_2055_);
return v_res_2059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20(lean_object* v_fst_2060_, lean_object* v_numParams_2061_, lean_object* v_numDiscrs_2062_, lean_object* v_altInfos_2063_, lean_object* v_uElimPos_x3f_2064_, lean_object* v_snd_2065_, lean_object* v_overlaps_2066_, lean_object* v_matcherName_2067_, lean_object* v_matcherLevels_2068_, lean_object* v_params_x27_2069_, lean_object* v_fst_2070_, lean_object* v_discrs_x27_2071_, lean_object* v_fst_2072_, lean_object* v_toPure_2073_, lean_object* v_____do__lift_2074_){
_start:
{
lean_object* v_remaining_x27_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v_remaining_x27_2075_ = l_Array_append___redArg(v_fst_2060_, v_____do__lift_2074_);
v___x_2076_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2076_, 0, v_numParams_2061_);
lean_ctor_set(v___x_2076_, 1, v_numDiscrs_2062_);
lean_ctor_set(v___x_2076_, 2, v_altInfos_2063_);
lean_ctor_set(v___x_2076_, 3, v_uElimPos_x3f_2064_);
lean_ctor_set(v___x_2076_, 4, v_snd_2065_);
lean_ctor_set(v___x_2076_, 5, v_overlaps_2066_);
v___x_2077_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
lean_ctor_set(v___x_2077_, 1, v_matcherName_2067_);
lean_ctor_set(v___x_2077_, 2, v_matcherLevels_2068_);
lean_ctor_set(v___x_2077_, 3, v_params_x27_2069_);
lean_ctor_set(v___x_2077_, 4, v_fst_2070_);
lean_ctor_set(v___x_2077_, 5, v_discrs_x27_2071_);
lean_ctor_set(v___x_2077_, 6, v_fst_2072_);
lean_ctor_set(v___x_2077_, 7, v_remaining_x27_2075_);
v___x_2078_ = lean_apply_2(v_toPure_2073_, lean_box(0), v___x_2077_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed(lean_object* v_fst_2079_, lean_object* v_numParams_2080_, lean_object* v_numDiscrs_2081_, lean_object* v_altInfos_2082_, lean_object* v_uElimPos_x3f_2083_, lean_object* v_snd_2084_, lean_object* v_overlaps_2085_, lean_object* v_matcherName_2086_, lean_object* v_matcherLevels_2087_, lean_object* v_params_x27_2088_, lean_object* v_fst_2089_, lean_object* v_discrs_x27_2090_, lean_object* v_fst_2091_, lean_object* v_toPure_2092_, lean_object* v_____do__lift_2093_){
_start:
{
lean_object* v_res_2094_; 
v_res_2094_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__20(v_fst_2079_, v_numParams_2080_, v_numDiscrs_2081_, v_altInfos_2082_, v_uElimPos_x3f_2083_, v_snd_2084_, v_overlaps_2085_, v_matcherName_2086_, v_matcherLevels_2087_, v_params_x27_2088_, v_fst_2089_, v_discrs_x27_2090_, v_fst_2091_, v_toPure_2092_, v_____do__lift_2093_);
lean_dec_ref(v_____do__lift_2093_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21(lean_object* v_fst_2095_, lean_object* v_numParams_2096_, lean_object* v_numDiscrs_2097_, lean_object* v_altInfos_2098_, lean_object* v_uElimPos_x3f_2099_, lean_object* v_snd_2100_, lean_object* v_overlaps_2101_, lean_object* v_matcherName_2102_, lean_object* v_matcherLevels_2103_, lean_object* v_params_x27_2104_, lean_object* v_fst_2105_, lean_object* v_discrs_x27_2106_, lean_object* v_toPure_2107_, lean_object* v_onRemaining_2108_, lean_object* v_remaining_2109_, lean_object* v_toBind_2110_, lean_object* v_____s_2111_){
_start:
{
lean_object* v_fst_2112_; lean_object* v___f_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v_fst_2112_ = lean_ctor_get(v_____s_2111_, 0);
lean_inc(v_fst_2112_);
lean_dec_ref(v_____s_2111_);
v___f_2113_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed), 15, 14);
lean_closure_set(v___f_2113_, 0, v_fst_2095_);
lean_closure_set(v___f_2113_, 1, v_numParams_2096_);
lean_closure_set(v___f_2113_, 2, v_numDiscrs_2097_);
lean_closure_set(v___f_2113_, 3, v_altInfos_2098_);
lean_closure_set(v___f_2113_, 4, v_uElimPos_x3f_2099_);
lean_closure_set(v___f_2113_, 5, v_snd_2100_);
lean_closure_set(v___f_2113_, 6, v_overlaps_2101_);
lean_closure_set(v___f_2113_, 7, v_matcherName_2102_);
lean_closure_set(v___f_2113_, 8, v_matcherLevels_2103_);
lean_closure_set(v___f_2113_, 9, v_params_x27_2104_);
lean_closure_set(v___f_2113_, 10, v_fst_2105_);
lean_closure_set(v___f_2113_, 11, v_discrs_x27_2106_);
lean_closure_set(v___f_2113_, 12, v_fst_2112_);
lean_closure_set(v___f_2113_, 13, v_toPure_2107_);
v___x_2114_ = lean_apply_1(v_onRemaining_2108_, v_remaining_2109_);
v___x_2115_ = lean_apply_4(v_toBind_2110_, lean_box(0), lean_box(0), v___x_2114_, v___f_2113_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed(lean_object** _args){
lean_object* v_fst_2116_ = _args[0];
lean_object* v_numParams_2117_ = _args[1];
lean_object* v_numDiscrs_2118_ = _args[2];
lean_object* v_altInfos_2119_ = _args[3];
lean_object* v_uElimPos_x3f_2120_ = _args[4];
lean_object* v_snd_2121_ = _args[5];
lean_object* v_overlaps_2122_ = _args[6];
lean_object* v_matcherName_2123_ = _args[7];
lean_object* v_matcherLevels_2124_ = _args[8];
lean_object* v_params_x27_2125_ = _args[9];
lean_object* v_fst_2126_ = _args[10];
lean_object* v_discrs_x27_2127_ = _args[11];
lean_object* v_toPure_2128_ = _args[12];
lean_object* v_onRemaining_2129_ = _args[13];
lean_object* v_remaining_2130_ = _args[14];
lean_object* v_toBind_2131_ = _args[15];
lean_object* v_____s_2132_ = _args[16];
_start:
{
lean_object* v_res_2133_; 
v_res_2133_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__21(v_fst_2116_, v_numParams_2117_, v_numDiscrs_2118_, v_altInfos_2119_, v_uElimPos_x3f_2120_, v_snd_2121_, v_overlaps_2122_, v_matcherName_2123_, v_matcherLevels_2124_, v_params_x27_2125_, v_fst_2126_, v_discrs_x27_2127_, v_toPure_2128_, v_onRemaining_2129_, v_remaining_2130_, v_toBind_2131_, v_____s_2132_);
return v_res_2133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22(lean_object* v_toPure_2134_, lean_object* v_next_2135_, lean_object* v_G_2136_, lean_object* v_____do__lift_2137_){
_start:
{
if (lean_obj_tag(v_____do__lift_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2139_; 
lean_dec(v_G_2136_);
v_a_2138_ = lean_ctor_get(v_____do__lift_2137_, 0);
lean_inc(v_a_2138_);
lean_dec_ref_known(v_____do__lift_2137_, 1);
v___x_2139_ = lean_apply_2(v_toPure_2134_, lean_box(0), v_a_2138_);
return v___x_2139_;
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
lean_dec(v_toPure_2134_);
v_a_2140_ = lean_ctor_get(v_____do__lift_2137_, 0);
lean_inc(v_a_2140_);
lean_dec_ref_known(v_____do__lift_2137_, 1);
v___x_2141_ = lean_unsigned_to_nat(1u);
v___x_2142_ = lean_nat_add(v_next_2135_, v___x_2141_);
v___x_2143_ = lean_apply_4(v_G_2136_, v___x_2142_, v_a_2140_, lean_box(0), lean_box(0));
return v___x_2143_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed(lean_object* v_toPure_2144_, lean_object* v_next_2145_, lean_object* v_G_2146_, lean_object* v_____do__lift_2147_){
_start:
{
lean_object* v_res_2148_; 
v_res_2148_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__22(v_toPure_2144_, v_next_2145_, v_G_2146_, v_____do__lift_2147_);
lean_dec(v_next_2145_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23(lean_object* v_xs_2149_, lean_object* v_ys4_2150_, uint8_t v___x_2151_, uint8_t v___x_2152_, lean_object* v_inst_2153_, lean_object* v_alt_x27_2154_){
_start:
{
lean_object* v___x_2155_; uint8_t v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2155_ = l_Array_append___redArg(v_xs_2149_, v_ys4_2150_);
v___x_2156_ = 1;
v___x_2157_ = lean_box(v___x_2151_);
v___x_2158_ = lean_box(v___x_2152_);
v___x_2159_ = lean_box(v___x_2151_);
v___x_2160_ = lean_box(v___x_2152_);
v___x_2161_ = lean_box(v___x_2156_);
v___x_2162_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2162_, 0, v___x_2155_);
lean_closure_set(v___x_2162_, 1, v_alt_x27_2154_);
lean_closure_set(v___x_2162_, 2, v___x_2157_);
lean_closure_set(v___x_2162_, 3, v___x_2158_);
lean_closure_set(v___x_2162_, 4, v___x_2159_);
lean_closure_set(v___x_2162_, 5, v___x_2160_);
lean_closure_set(v___x_2162_, 6, v___x_2161_);
v___x_2163_ = lean_apply_2(v_inst_2153_, lean_box(0), v___x_2162_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed(lean_object* v_xs_2164_, lean_object* v_ys4_2165_, lean_object* v___x_2166_, lean_object* v___x_2167_, lean_object* v_inst_2168_, lean_object* v_alt_x27_2169_){
_start:
{
uint8_t v___x_12843__boxed_2170_; uint8_t v___x_12844__boxed_2171_; lean_object* v_res_2172_; 
v___x_12843__boxed_2170_ = lean_unbox(v___x_2166_);
v___x_12844__boxed_2171_ = lean_unbox(v___x_2167_);
v_res_2172_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__23(v_xs_2164_, v_ys4_2165_, v___x_12843__boxed_2170_, v___x_12844__boxed_2171_, v_inst_2168_, v_alt_x27_2169_);
lean_dec_ref(v_ys4_2165_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__24(lean_object* v_xs_2173_, lean_object* v_remaining_x27_2174_, lean_object* v_ys4_2175_, lean_object* v_onAlt_2176_, lean_object* v_next_2177_, lean_object* v_altType_2178_, lean_object* v_toBind_2179_, lean_object* v___f_2180_, lean_object* v_alt_2181_){
_start:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
lean_inc_ref(v_remaining_x27_2174_);
lean_inc_ref(v_xs_2173_);
v___x_2182_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2182_, 0, v_xs_2173_);
lean_ctor_set(v___x_2182_, 1, v_xs_2173_);
lean_ctor_set(v___x_2182_, 2, v_remaining_x27_2174_);
lean_ctor_set(v___x_2182_, 3, v_remaining_x27_2174_);
lean_ctor_set(v___x_2182_, 4, v_ys4_2175_);
v___x_2183_ = lean_apply_4(v_onAlt_2176_, v_next_2177_, v_altType_2178_, v___x_2182_, v_alt_2181_);
v___x_2184_ = lean_apply_4(v_toBind_2179_, lean_box(0), lean_box(0), v___x_2183_, v___f_2180_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__25(lean_object* v___x_2185_, lean_object* v_xs_2186_, lean_object* v_inst_2187_, lean_object* v_toBind_2188_, lean_object* v___f_2189_, lean_object* v_inst_2190_, lean_object* v_inst_2191_, lean_object* v_names_2192_){
_start:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
lean_inc_ref(v_xs_2186_);
v___x_2193_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___boxed), 7, 2);
lean_closure_set(v___x_2193_, 0, v___x_2185_);
lean_closure_set(v___x_2193_, 1, v_xs_2186_);
v___x_2194_ = lean_apply_2(v_inst_2187_, lean_box(0), v___x_2193_);
v___x_2195_ = lean_apply_4(v_toBind_2188_, lean_box(0), lean_box(0), v___x_2194_, v___f_2189_);
v___x_2196_ = l_Lean_Meta_MatcherApp_withUserNames___redArg(v_inst_2190_, v_inst_2191_, v_xs_2186_, v_names_2192_, v___x_2195_);
return v___x_2196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26(lean_object* v_xs_2197_, uint8_t v___x_2198_, uint8_t v___x_2199_, lean_object* v_inst_2200_, lean_object* v_remaining_x27_2201_, lean_object* v_onAlt_2202_, lean_object* v_next_2203_, lean_object* v_toBind_2204_, lean_object* v___x_2205_, lean_object* v_inst_2206_, lean_object* v_inst_2207_, lean_object* v___f_2208_, lean_object* v_ys4_2209_, lean_object* v_altType_2210_){
_start:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___f_2213_; lean_object* v___f_2214_; lean_object* v___f_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2211_ = lean_box(v___x_2198_);
v___x_2212_ = lean_box(v___x_2199_);
lean_inc(v_inst_2200_);
lean_inc_ref(v_ys4_2209_);
lean_inc_ref_n(v_xs_2197_, 2);
v___f_2213_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed), 6, 5);
lean_closure_set(v___f_2213_, 0, v_xs_2197_);
lean_closure_set(v___f_2213_, 1, v_ys4_2209_);
lean_closure_set(v___f_2213_, 2, v___x_2211_);
lean_closure_set(v___f_2213_, 3, v___x_2212_);
lean_closure_set(v___f_2213_, 4, v_inst_2200_);
lean_inc_n(v_toBind_2204_, 2);
v___f_2214_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__24), 9, 8);
lean_closure_set(v___f_2214_, 0, v_xs_2197_);
lean_closure_set(v___f_2214_, 1, v_remaining_x27_2201_);
lean_closure_set(v___f_2214_, 2, v_ys4_2209_);
lean_closure_set(v___f_2214_, 3, v_onAlt_2202_);
lean_closure_set(v___f_2214_, 4, v_next_2203_);
lean_closure_set(v___f_2214_, 5, v_altType_2210_);
lean_closure_set(v___f_2214_, 6, v_toBind_2204_);
lean_closure_set(v___f_2214_, 7, v___f_2213_);
lean_inc_ref(v_inst_2207_);
lean_inc_ref(v_inst_2206_);
lean_inc_ref(v___x_2205_);
v___f_2215_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__25), 8, 7);
lean_closure_set(v___f_2215_, 0, v___x_2205_);
lean_closure_set(v___f_2215_, 1, v_xs_2197_);
lean_closure_set(v___f_2215_, 2, v_inst_2200_);
lean_closure_set(v___f_2215_, 3, v_toBind_2204_);
lean_closure_set(v___f_2215_, 4, v___f_2214_);
lean_closure_set(v___f_2215_, 5, v_inst_2206_);
lean_closure_set(v___f_2215_, 6, v_inst_2207_);
v___x_2216_ = l_Lean_Meta_lambdaTelescope___redArg(v_inst_2206_, v_inst_2207_, v___x_2205_, v___f_2208_, v___x_2198_);
v___x_2217_ = lean_apply_4(v_toBind_2204_, lean_box(0), lean_box(0), v___x_2216_, v___f_2215_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed(lean_object* v_xs_2218_, lean_object* v___x_2219_, lean_object* v___x_2220_, lean_object* v_inst_2221_, lean_object* v_remaining_x27_2222_, lean_object* v_onAlt_2223_, lean_object* v_next_2224_, lean_object* v_toBind_2225_, lean_object* v___x_2226_, lean_object* v_inst_2227_, lean_object* v_inst_2228_, lean_object* v___f_2229_, lean_object* v_ys4_2230_, lean_object* v_altType_2231_){
_start:
{
uint8_t v___x_12896__boxed_2232_; uint8_t v___x_12897__boxed_2233_; lean_object* v_res_2234_; 
v___x_12896__boxed_2232_ = lean_unbox(v___x_2219_);
v___x_12897__boxed_2233_ = lean_unbox(v___x_2220_);
v_res_2234_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__26(v_xs_2218_, v___x_12896__boxed_2232_, v___x_12897__boxed_2233_, v_inst_2221_, v_remaining_x27_2222_, v_onAlt_2223_, v_next_2224_, v_toBind_2225_, v___x_2226_, v_inst_2227_, v_inst_2228_, v___f_2229_, v_ys4_2230_, v_altType_2231_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27(uint8_t v___x_2235_, uint8_t v___x_2236_, lean_object* v_inst_2237_, lean_object* v_remaining_x27_2238_, lean_object* v_onAlt_2239_, lean_object* v_next_2240_, lean_object* v_toBind_2241_, lean_object* v___x_2242_, lean_object* v_inst_2243_, lean_object* v_inst_2244_, lean_object* v___f_2245_, lean_object* v_fst_2246_, lean_object* v_xs_2247_, lean_object* v_altType_2248_){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___f_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2249_ = lean_box(v___x_2235_);
v___x_2250_ = lean_box(v___x_2236_);
lean_inc_ref(v_inst_2244_);
lean_inc_ref(v_inst_2243_);
v___f_2251_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed), 14, 12);
lean_closure_set(v___f_2251_, 0, v_xs_2247_);
lean_closure_set(v___f_2251_, 1, v___x_2249_);
lean_closure_set(v___f_2251_, 2, v___x_2250_);
lean_closure_set(v___f_2251_, 3, v_inst_2237_);
lean_closure_set(v___f_2251_, 4, v_remaining_x27_2238_);
lean_closure_set(v___f_2251_, 5, v_onAlt_2239_);
lean_closure_set(v___f_2251_, 6, v_next_2240_);
lean_closure_set(v___f_2251_, 7, v_toBind_2241_);
lean_closure_set(v___f_2251_, 8, v___x_2242_);
lean_closure_set(v___f_2251_, 9, v_inst_2243_);
lean_closure_set(v___f_2251_, 10, v_inst_2244_);
lean_closure_set(v___f_2251_, 11, v___f_2245_);
v___x_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2252_, 0, v_fst_2246_);
v___x_2253_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2243_, v_inst_2244_, v_altType_2248_, v___x_2252_, v___f_2251_, v___x_2235_, v___x_2235_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed(lean_object* v___x_2254_, lean_object* v___x_2255_, lean_object* v_inst_2256_, lean_object* v_remaining_x27_2257_, lean_object* v_onAlt_2258_, lean_object* v_next_2259_, lean_object* v_toBind_2260_, lean_object* v___x_2261_, lean_object* v_inst_2262_, lean_object* v_inst_2263_, lean_object* v___f_2264_, lean_object* v_fst_2265_, lean_object* v_xs_2266_, lean_object* v_altType_2267_){
_start:
{
uint8_t v___x_12931__boxed_2268_; uint8_t v___x_12932__boxed_2269_; lean_object* v_res_2270_; 
v___x_12931__boxed_2268_ = lean_unbox(v___x_2254_);
v___x_12932__boxed_2269_ = lean_unbox(v___x_2255_);
v_res_2270_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__27(v___x_12931__boxed_2268_, v___x_12932__boxed_2269_, v_inst_2256_, v_remaining_x27_2257_, v_onAlt_2258_, v_next_2259_, v_toBind_2260_, v___x_2261_, v_inst_2262_, v_inst_2263_, v___f_2264_, v_fst_2265_, v_xs_2266_, v_altType_2267_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__28(lean_object* v_fst_2271_, lean_object* v___x_2272_, lean_object* v___x_2273_, lean_object* v___x_2274_, lean_object* v_toPure_2275_, lean_object* v_alt_x27_2276_){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2277_ = lean_array_push(v_fst_2271_, v_alt_x27_2276_);
v___x_2278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2272_);
lean_ctor_set(v___x_2278_, 1, v___x_2273_);
v___x_2279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2274_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
v___x_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2277_);
lean_ctor_set(v___x_2280_, 1, v___x_2279_);
v___x_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
v___x_2282_ = lean_apply_2(v_toPure_2275_, lean_box(0), v___x_2281_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29(lean_object* v___x_2283_, lean_object* v_toPure_2284_, lean_object* v_toBind_2285_, lean_object* v___f_2286_, uint8_t v___x_2287_, uint8_t v___x_2288_, lean_object* v_inst_2289_, lean_object* v_remaining_x27_2290_, lean_object* v_onAlt_2291_, lean_object* v_inst_2292_, lean_object* v_inst_2293_, lean_object* v___f_2294_, lean_object* v_fst_2295_, lean_object* v_next_2296_, lean_object* v_acc_2297_, lean_object* v_h_2298_, lean_object* v_G_2299_){
_start:
{
uint8_t v___x_2300_; 
v___x_2300_ = lean_nat_dec_lt(v_next_2296_, v___x_2283_);
if (v___x_2300_ == 0)
{
lean_object* v___x_2301_; 
lean_dec(v_G_2299_);
lean_dec(v_next_2296_);
lean_dec(v_fst_2295_);
lean_dec(v___f_2294_);
lean_dec_ref(v_inst_2293_);
lean_dec_ref(v_inst_2292_);
lean_dec(v_onAlt_2291_);
lean_dec_ref(v_remaining_x27_2290_);
lean_dec(v_inst_2289_);
lean_dec(v___f_2286_);
lean_dec(v_toBind_2285_);
v___x_2301_ = lean_apply_2(v_toPure_2284_, lean_box(0), v_acc_2297_);
return v___x_2301_;
}
else
{
lean_object* v_snd_2302_; lean_object* v_snd_2303_; lean_object* v_snd_2304_; lean_object* v_fst_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2415_; 
v_snd_2302_ = lean_ctor_get(v_acc_2297_, 1);
lean_inc(v_snd_2302_);
v_snd_2303_ = lean_ctor_get(v_snd_2302_, 1);
lean_inc(v_snd_2303_);
v_snd_2304_ = lean_ctor_get(v_snd_2303_, 1);
lean_inc(v_snd_2304_);
v_fst_2305_ = lean_ctor_get(v_acc_2297_, 0);
v_isSharedCheck_2415_ = !lean_is_exclusive(v_acc_2297_);
if (v_isSharedCheck_2415_ == 0)
{
lean_object* v_unused_2416_; 
v_unused_2416_ = lean_ctor_get(v_acc_2297_, 1);
lean_dec(v_unused_2416_);
v___x_2307_ = v_acc_2297_;
v_isShared_2308_ = v_isSharedCheck_2415_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_fst_2305_);
lean_dec(v_acc_2297_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2415_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v_fst_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2413_; 
v_fst_2309_ = lean_ctor_get(v_snd_2302_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v_snd_2302_);
if (v_isSharedCheck_2413_ == 0)
{
lean_object* v_unused_2414_; 
v_unused_2414_ = lean_ctor_get(v_snd_2302_, 1);
lean_dec(v_unused_2414_);
v___x_2311_ = v_snd_2302_;
v_isShared_2312_ = v_isSharedCheck_2413_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_fst_2309_);
lean_dec(v_snd_2302_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2413_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v_fst_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2411_; 
v_fst_2313_ = lean_ctor_get(v_snd_2303_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_snd_2303_);
if (v_isSharedCheck_2411_ == 0)
{
lean_object* v_unused_2412_; 
v_unused_2412_ = lean_ctor_get(v_snd_2303_, 1);
lean_dec(v_unused_2412_);
v___x_2315_ = v_snd_2303_;
v_isShared_2316_ = v_isSharedCheck_2411_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_fst_2313_);
lean_dec(v_snd_2303_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2411_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v_array_2317_; lean_object* v_start_2318_; lean_object* v_stop_2319_; lean_object* v___f_2320_; lean_object* v___y_2322_; uint8_t v___x_2325_; 
v_array_2317_ = lean_ctor_get(v_snd_2304_, 0);
v_start_2318_ = lean_ctor_get(v_snd_2304_, 1);
v_stop_2319_ = lean_ctor_get(v_snd_2304_, 2);
lean_inc(v_next_2296_);
lean_inc(v_toPure_2284_);
v___f_2320_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed), 4, 3);
lean_closure_set(v___f_2320_, 0, v_toPure_2284_);
lean_closure_set(v___f_2320_, 1, v_next_2296_);
lean_closure_set(v___f_2320_, 2, v_G_2299_);
v___x_2325_ = lean_nat_dec_lt(v_start_2318_, v_stop_2319_);
if (v___x_2325_ == 0)
{
lean_object* v___x_2327_; 
lean_dec(v_next_2296_);
lean_dec(v_fst_2295_);
lean_dec(v___f_2294_);
lean_dec_ref(v_inst_2293_);
lean_dec_ref(v_inst_2292_);
lean_dec(v_onAlt_2291_);
lean_dec_ref(v_remaining_x27_2290_);
lean_dec(v_inst_2289_);
if (v_isShared_2316_ == 0)
{
v___x_2327_ = v___x_2315_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_fst_2313_);
lean_ctor_set(v_reuseFailAlloc_2336_, 1, v_snd_2304_);
v___x_2327_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
lean_object* v___x_2329_; 
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 1, v___x_2327_);
v___x_2329_ = v___x_2311_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_fst_2309_);
lean_ctor_set(v_reuseFailAlloc_2335_, 1, v___x_2327_);
v___x_2329_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
lean_object* v___x_2331_; 
if (v_isShared_2308_ == 0)
{
lean_ctor_set(v___x_2307_, 1, v___x_2329_);
v___x_2331_ = v___x_2307_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_fst_2305_);
lean_ctor_set(v_reuseFailAlloc_2334_, 1, v___x_2329_);
v___x_2331_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2331_);
v___x_2333_ = lean_apply_2(v_toPure_2284_, lean_box(0), v___x_2332_);
v___y_2322_ = v___x_2333_;
goto v___jp_2321_;
}
}
}
}
else
{
lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2407_; 
lean_inc(v_stop_2319_);
lean_inc(v_start_2318_);
lean_inc_ref(v_array_2317_);
v_isSharedCheck_2407_ = !lean_is_exclusive(v_snd_2304_);
if (v_isSharedCheck_2407_ == 0)
{
lean_object* v_unused_2408_; lean_object* v_unused_2409_; lean_object* v_unused_2410_; 
v_unused_2408_ = lean_ctor_get(v_snd_2304_, 2);
lean_dec(v_unused_2408_);
v_unused_2409_ = lean_ctor_get(v_snd_2304_, 1);
lean_dec(v_unused_2409_);
v_unused_2410_ = lean_ctor_get(v_snd_2304_, 0);
lean_dec(v_unused_2410_);
v___x_2338_ = v_snd_2304_;
v_isShared_2339_ = v_isSharedCheck_2407_;
goto v_resetjp_2337_;
}
else
{
lean_dec(v_snd_2304_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2407_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v_array_2340_; lean_object* v_start_2341_; lean_object* v_stop_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2347_; 
v_array_2340_ = lean_ctor_get(v_fst_2313_, 0);
v_start_2341_ = lean_ctor_get(v_fst_2313_, 1);
v_stop_2342_ = lean_ctor_get(v_fst_2313_, 2);
v___x_2343_ = lean_array_fget(v_array_2317_, v_start_2318_);
v___x_2344_ = lean_unsigned_to_nat(1u);
v___x_2345_ = lean_nat_add(v_start_2318_, v___x_2344_);
lean_dec(v_start_2318_);
if (v_isShared_2339_ == 0)
{
lean_ctor_set(v___x_2338_, 1, v___x_2345_);
v___x_2347_ = v___x_2338_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_array_2317_);
lean_ctor_set(v_reuseFailAlloc_2406_, 1, v___x_2345_);
lean_ctor_set(v_reuseFailAlloc_2406_, 2, v_stop_2319_);
v___x_2347_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
uint8_t v___x_2348_; 
v___x_2348_ = lean_nat_dec_lt(v_start_2341_, v_stop_2342_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2350_; 
lean_dec(v___x_2343_);
lean_dec(v_next_2296_);
lean_dec(v_fst_2295_);
lean_dec(v___f_2294_);
lean_dec_ref(v_inst_2293_);
lean_dec_ref(v_inst_2292_);
lean_dec(v_onAlt_2291_);
lean_dec_ref(v_remaining_x27_2290_);
lean_dec(v_inst_2289_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 1, v___x_2347_);
v___x_2350_ = v___x_2315_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_fst_2313_);
lean_ctor_set(v_reuseFailAlloc_2359_, 1, v___x_2347_);
v___x_2350_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2352_; 
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 1, v___x_2350_);
v___x_2352_ = v___x_2311_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_fst_2309_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v___x_2350_);
v___x_2352_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2354_; 
if (v_isShared_2308_ == 0)
{
lean_ctor_set(v___x_2307_, 1, v___x_2352_);
v___x_2354_ = v___x_2307_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_fst_2305_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v___x_2352_);
v___x_2354_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2354_);
v___x_2356_ = lean_apply_2(v_toPure_2284_, lean_box(0), v___x_2355_);
v___y_2322_ = v___x_2356_;
goto v___jp_2321_;
}
}
}
}
else
{
lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2402_; 
lean_inc(v_stop_2342_);
lean_inc(v_start_2341_);
lean_inc_ref(v_array_2340_);
v_isSharedCheck_2402_ = !lean_is_exclusive(v_fst_2313_);
if (v_isSharedCheck_2402_ == 0)
{
lean_object* v_unused_2403_; lean_object* v_unused_2404_; lean_object* v_unused_2405_; 
v_unused_2403_ = lean_ctor_get(v_fst_2313_, 2);
lean_dec(v_unused_2403_);
v_unused_2404_ = lean_ctor_get(v_fst_2313_, 1);
lean_dec(v_unused_2404_);
v_unused_2405_ = lean_ctor_get(v_fst_2313_, 0);
lean_dec(v_unused_2405_);
v___x_2361_ = v_fst_2313_;
v_isShared_2362_ = v_isSharedCheck_2402_;
goto v_resetjp_2360_;
}
else
{
lean_dec(v_fst_2313_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2402_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v_array_2363_; lean_object* v_start_2364_; lean_object* v_stop_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2369_; 
v_array_2363_ = lean_ctor_get(v_fst_2309_, 0);
v_start_2364_ = lean_ctor_get(v_fst_2309_, 1);
v_stop_2365_ = lean_ctor_get(v_fst_2309_, 2);
v___x_2366_ = lean_array_fget(v_array_2340_, v_start_2341_);
v___x_2367_ = lean_nat_add(v_start_2341_, v___x_2344_);
lean_dec(v_start_2341_);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 1, v___x_2367_);
v___x_2369_ = v___x_2361_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_array_2340_);
lean_ctor_set(v_reuseFailAlloc_2401_, 1, v___x_2367_);
lean_ctor_set(v_reuseFailAlloc_2401_, 2, v_stop_2342_);
v___x_2369_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
uint8_t v___x_2370_; 
v___x_2370_ = lean_nat_dec_lt(v_start_2364_, v_stop_2365_);
if (v___x_2370_ == 0)
{
lean_object* v___x_2372_; 
lean_dec(v___x_2366_);
lean_dec(v___x_2343_);
lean_dec(v_next_2296_);
lean_dec(v_fst_2295_);
lean_dec(v___f_2294_);
lean_dec_ref(v_inst_2293_);
lean_dec_ref(v_inst_2292_);
lean_dec(v_onAlt_2291_);
lean_dec_ref(v_remaining_x27_2290_);
lean_dec(v_inst_2289_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 1, v___x_2347_);
lean_ctor_set(v___x_2315_, 0, v___x_2369_);
v___x_2372_ = v___x_2315_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2381_, 1, v___x_2347_);
v___x_2372_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
lean_object* v___x_2374_; 
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 1, v___x_2372_);
v___x_2374_ = v___x_2311_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_fst_2309_);
lean_ctor_set(v_reuseFailAlloc_2380_, 1, v___x_2372_);
v___x_2374_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
lean_object* v___x_2376_; 
if (v_isShared_2308_ == 0)
{
lean_ctor_set(v___x_2307_, 1, v___x_2374_);
v___x_2376_ = v___x_2307_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_fst_2305_);
lean_ctor_set(v_reuseFailAlloc_2379_, 1, v___x_2374_);
v___x_2376_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
v___x_2378_ = lean_apply_2(v_toPure_2284_, lean_box(0), v___x_2377_);
v___y_2322_ = v___x_2378_;
goto v___jp_2321_;
}
}
}
}
else
{
lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2397_; 
lean_inc(v_stop_2365_);
lean_inc(v_start_2364_);
lean_inc_ref(v_array_2363_);
lean_del_object(v___x_2315_);
lean_del_object(v___x_2311_);
lean_del_object(v___x_2307_);
v_isSharedCheck_2397_ = !lean_is_exclusive(v_fst_2309_);
if (v_isSharedCheck_2397_ == 0)
{
lean_object* v_unused_2398_; lean_object* v_unused_2399_; lean_object* v_unused_2400_; 
v_unused_2398_ = lean_ctor_get(v_fst_2309_, 2);
lean_dec(v_unused_2398_);
v_unused_2399_ = lean_ctor_get(v_fst_2309_, 1);
lean_dec(v_unused_2399_);
v_unused_2400_ = lean_ctor_get(v_fst_2309_, 0);
lean_dec(v_unused_2400_);
v___x_2383_ = v_fst_2309_;
v_isShared_2384_ = v_isSharedCheck_2397_;
goto v_resetjp_2382_;
}
else
{
lean_dec(v_fst_2309_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2397_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___f_2388_; lean_object* v___x_2389_; lean_object* v___x_2391_; 
v___x_2385_ = lean_array_fget_borrowed(v_array_2363_, v_start_2364_);
v___x_2386_ = lean_box(v___x_2287_);
v___x_2387_ = lean_box(v___x_2288_);
lean_inc_ref(v_inst_2293_);
lean_inc_ref(v_inst_2292_);
lean_inc(v___x_2385_);
lean_inc(v_toBind_2285_);
v___f_2388_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed), 14, 12);
lean_closure_set(v___f_2388_, 0, v___x_2386_);
lean_closure_set(v___f_2388_, 1, v___x_2387_);
lean_closure_set(v___f_2388_, 2, v_inst_2289_);
lean_closure_set(v___f_2388_, 3, v_remaining_x27_2290_);
lean_closure_set(v___f_2388_, 4, v_onAlt_2291_);
lean_closure_set(v___f_2388_, 5, v_next_2296_);
lean_closure_set(v___f_2388_, 6, v_toBind_2285_);
lean_closure_set(v___f_2388_, 7, v___x_2385_);
lean_closure_set(v___f_2388_, 8, v_inst_2292_);
lean_closure_set(v___f_2388_, 9, v_inst_2293_);
lean_closure_set(v___f_2388_, 10, v___f_2294_);
lean_closure_set(v___f_2388_, 11, v_fst_2295_);
v___x_2389_ = lean_nat_add(v_start_2364_, v___x_2344_);
lean_dec(v_start_2364_);
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 1, v___x_2389_);
v___x_2391_ = v___x_2383_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_array_2363_);
lean_ctor_set(v_reuseFailAlloc_2396_, 1, v___x_2389_);
lean_ctor_set(v_reuseFailAlloc_2396_, 2, v_stop_2365_);
v___x_2391_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
lean_object* v___f_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___f_2392_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__28), 6, 5);
lean_closure_set(v___f_2392_, 0, v_fst_2305_);
lean_closure_set(v___f_2392_, 1, v___x_2369_);
lean_closure_set(v___f_2392_, 2, v___x_2347_);
lean_closure_set(v___f_2392_, 3, v___x_2391_);
lean_closure_set(v___f_2392_, 4, v_toPure_2284_);
v___x_2393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2366_);
v___x_2394_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2292_, v_inst_2293_, v___x_2343_, v___x_2393_, v___f_2388_, v___x_2287_, v___x_2287_);
lean_inc(v_toBind_2285_);
v___x_2395_ = lean_apply_4(v_toBind_2285_, lean_box(0), lean_box(0), v___x_2394_, v___f_2392_);
v___y_2322_ = v___x_2395_;
goto v___jp_2321_;
}
}
}
}
}
}
}
}
}
v___jp_2321_:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
lean_inc(v_toBind_2285_);
v___x_2323_ = lean_apply_4(v_toBind_2285_, lean_box(0), lean_box(0), v___y_2322_, v___f_2286_);
v___x_2324_ = lean_apply_4(v_toBind_2285_, lean_box(0), lean_box(0), v___x_2323_, v___f_2320_);
return v___x_2324_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed(lean_object** _args){
lean_object* v___x_2417_ = _args[0];
lean_object* v_toPure_2418_ = _args[1];
lean_object* v_toBind_2419_ = _args[2];
lean_object* v___f_2420_ = _args[3];
lean_object* v___x_2421_ = _args[4];
lean_object* v___x_2422_ = _args[5];
lean_object* v_inst_2423_ = _args[6];
lean_object* v_remaining_x27_2424_ = _args[7];
lean_object* v_onAlt_2425_ = _args[8];
lean_object* v_inst_2426_ = _args[9];
lean_object* v_inst_2427_ = _args[10];
lean_object* v___f_2428_ = _args[11];
lean_object* v_fst_2429_ = _args[12];
lean_object* v_next_2430_ = _args[13];
lean_object* v_acc_2431_ = _args[14];
lean_object* v_h_2432_ = _args[15];
lean_object* v_G_2433_ = _args[16];
_start:
{
uint8_t v___x_12982__boxed_2434_; uint8_t v___x_12983__boxed_2435_; lean_object* v_res_2436_; 
v___x_12982__boxed_2434_ = lean_unbox(v___x_2421_);
v___x_12983__boxed_2435_ = lean_unbox(v___x_2422_);
v_res_2436_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__29(v___x_2417_, v_toPure_2418_, v_toBind_2419_, v___f_2420_, v___x_12982__boxed_2434_, v___x_12983__boxed_2435_, v_inst_2423_, v_remaining_x27_2424_, v_onAlt_2425_, v_inst_2426_, v_inst_2427_, v___f_2428_, v_fst_2429_, v_next_2430_, v_acc_2431_, v_h_2432_, v_G_2433_);
lean_dec(v___x_2417_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30(lean_object* v_matcherApp_2437_, lean_object* v_alts_2438_, lean_object* v___x_2439_, lean_object* v___x_2440_, lean_object* v_remaining_x27_2441_, lean_object* v___f_2442_, lean_object* v_toBind_2443_, lean_object* v___f_2444_, lean_object* v_altTypes_2445_){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2446_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_2437_);
v___x_2447_ = lean_array_get_size(v___x_2446_);
v___x_2448_ = lean_array_get_size(v_altTypes_2445_);
lean_inc_n(v___x_2439_, 3);
v___x_2449_ = l_Array_toSubarray___redArg(v_alts_2438_, v___x_2439_, v___x_2440_);
v___x_2450_ = l_Array_toSubarray___redArg(v___x_2446_, v___x_2439_, v___x_2447_);
v___x_2451_ = l_Array_toSubarray___redArg(v_altTypes_2445_, v___x_2439_, v___x_2448_);
v___x_2452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2450_);
lean_ctor_set(v___x_2452_, 1, v___x_2451_);
v___x_2453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2449_);
lean_ctor_set(v___x_2453_, 1, v___x_2452_);
v___x_2454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2454_, 0, v_remaining_x27_2441_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
v___x_2455_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2442_, v___x_2439_, v___x_2454_, lean_box(0));
v___x_2456_ = lean_apply_4(v_toBind_2443_, lean_box(0), lean_box(0), v___x_2455_, v___f_2444_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31(lean_object* v_alts_2457_, lean_object* v_toPure_2458_, lean_object* v_toBind_2459_, lean_object* v___f_2460_, uint8_t v___x_2461_, uint8_t v___x_2462_, lean_object* v_inst_2463_, lean_object* v_remaining_x27_2464_, lean_object* v_onAlt_2465_, lean_object* v_inst_2466_, lean_object* v_inst_2467_, lean_object* v___f_2468_, lean_object* v_fst_2469_, lean_object* v_matcherApp_2470_, lean_object* v___x_2471_, lean_object* v___f_2472_, lean_object* v_aux_2473_, lean_object* v_____r_2474_){
_start:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___f_2478_; lean_object* v___f_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2475_ = lean_array_get_size(v_alts_2457_);
v___x_2476_ = lean_box(v___x_2461_);
v___x_2477_ = lean_box(v___x_2462_);
lean_inc_ref(v_remaining_x27_2464_);
lean_inc(v_inst_2463_);
lean_inc_n(v_toBind_2459_, 2);
v___f_2478_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed), 17, 13);
lean_closure_set(v___f_2478_, 0, v___x_2475_);
lean_closure_set(v___f_2478_, 1, v_toPure_2458_);
lean_closure_set(v___f_2478_, 2, v_toBind_2459_);
lean_closure_set(v___f_2478_, 3, v___f_2460_);
lean_closure_set(v___f_2478_, 4, v___x_2476_);
lean_closure_set(v___f_2478_, 5, v___x_2477_);
lean_closure_set(v___f_2478_, 6, v_inst_2463_);
lean_closure_set(v___f_2478_, 7, v_remaining_x27_2464_);
lean_closure_set(v___f_2478_, 8, v_onAlt_2465_);
lean_closure_set(v___f_2478_, 9, v_inst_2466_);
lean_closure_set(v___f_2478_, 10, v_inst_2467_);
lean_closure_set(v___f_2478_, 11, v___f_2468_);
lean_closure_set(v___f_2478_, 12, v_fst_2469_);
v___f_2479_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__30), 9, 8);
lean_closure_set(v___f_2479_, 0, v_matcherApp_2470_);
lean_closure_set(v___f_2479_, 1, v_alts_2457_);
lean_closure_set(v___f_2479_, 2, v___x_2471_);
lean_closure_set(v___f_2479_, 3, v___x_2475_);
lean_closure_set(v___f_2479_, 4, v_remaining_x27_2464_);
lean_closure_set(v___f_2479_, 5, v___f_2478_);
lean_closure_set(v___f_2479_, 6, v_toBind_2459_);
lean_closure_set(v___f_2479_, 7, v___f_2472_);
v___x_2480_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_2480_, 0, v___x_2475_);
lean_closure_set(v___x_2480_, 1, v_aux_2473_);
v___x_2481_ = lean_apply_2(v_inst_2463_, lean_box(0), v___x_2480_);
v___x_2482_ = lean_apply_4(v_toBind_2459_, lean_box(0), lean_box(0), v___x_2481_, v___f_2479_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed(lean_object** _args){
lean_object* v_alts_2483_ = _args[0];
lean_object* v_toPure_2484_ = _args[1];
lean_object* v_toBind_2485_ = _args[2];
lean_object* v___f_2486_ = _args[3];
lean_object* v___x_2487_ = _args[4];
lean_object* v___x_2488_ = _args[5];
lean_object* v_inst_2489_ = _args[6];
lean_object* v_remaining_x27_2490_ = _args[7];
lean_object* v_onAlt_2491_ = _args[8];
lean_object* v_inst_2492_ = _args[9];
lean_object* v_inst_2493_ = _args[10];
lean_object* v___f_2494_ = _args[11];
lean_object* v_fst_2495_ = _args[12];
lean_object* v_matcherApp_2496_ = _args[13];
lean_object* v___x_2497_ = _args[14];
lean_object* v___f_2498_ = _args[15];
lean_object* v_aux_2499_ = _args[16];
lean_object* v_____r_2500_ = _args[17];
_start:
{
uint8_t v___x_13239__boxed_2501_; uint8_t v___x_13240__boxed_2502_; lean_object* v_res_2503_; 
v___x_13239__boxed_2501_ = lean_unbox(v___x_2487_);
v___x_13240__boxed_2502_ = lean_unbox(v___x_2488_);
v_res_2503_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__31(v_alts_2483_, v_toPure_2484_, v_toBind_2485_, v___f_2486_, v___x_13239__boxed_2501_, v___x_13240__boxed_2502_, v_inst_2489_, v_remaining_x27_2490_, v_onAlt_2491_, v_inst_2492_, v_inst_2493_, v___f_2494_, v_fst_2495_, v_matcherApp_2496_, v___x_2497_, v___f_2498_, v_aux_2499_, v_____r_2500_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__32(lean_object* v___x_2504_, lean_object* v_e_2505_){
_start:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2506_ = l_Lean_indentD(v_e_2505_);
v___x_2507_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2504_);
lean_ctor_set(v___x_2507_, 1, v___x_2506_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33(lean_object* v___x_2508_, lean_object* v___f_2509_, lean_object* v_runInBase_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2516_ = lean_apply_2(v_runInBase_2510_, lean_box(0), v___x_2508_);
v___x_2517_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2516_, v___f_2509_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed(lean_object* v___x_2518_, lean_object* v___f_2519_, lean_object* v_runInBase_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
lean_object* v_res_2526_; 
v_res_2526_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__33(v___x_2518_, v___f_2519_, v_runInBase_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
return v_res_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35(lean_object* v_toPure_2527_, lean_object* v_next_2528_, lean_object* v_G_2529_, lean_object* v_____do__lift_2530_){
_start:
{
if (lean_obj_tag(v_____do__lift_2530_) == 0)
{
lean_object* v_a_2531_; lean_object* v___x_2532_; 
lean_dec(v_G_2529_);
v_a_2531_ = lean_ctor_get(v_____do__lift_2530_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v_____do__lift_2530_, 1);
v___x_2532_ = lean_apply_2(v_toPure_2527_, lean_box(0), v_a_2531_);
return v___x_2532_;
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
lean_dec(v_toPure_2527_);
v_a_2533_ = lean_ctor_get(v_____do__lift_2530_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v_____do__lift_2530_, 1);
v___x_2534_ = lean_unsigned_to_nat(1u);
v___x_2535_ = lean_nat_add(v_next_2528_, v___x_2534_);
v___x_2536_ = lean_apply_4(v_G_2529_, v___x_2535_, v_a_2533_, lean_box(0), lean_box(0));
return v___x_2536_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed(lean_object* v_toPure_2537_, lean_object* v_next_2538_, lean_object* v_G_2539_, lean_object* v_____do__lift_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__35(v_toPure_2537_, v_next_2538_, v_G_2539_, v_____do__lift_2540_);
lean_dec(v_next_2538_);
return v_res_2541_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5(void){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2550_ = lean_box(0);
v___x_2551_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4));
v___x_2552_ = l_Lean_mkConst(v___x_2551_, v___x_2550_);
return v___x_2552_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6(void){
_start:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2553_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5);
v___x_2554_ = lean_unsigned_to_nat(2u);
v___x_2555_ = lean_mk_empty_array_with_capacity(v___x_2554_);
v___x_2556_ = lean_array_push(v___x_2555_, v___x_2553_);
return v___x_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34(lean_object* v___x_2557_, lean_object* v_toPure_2558_, lean_object* v_inst_2559_, lean_object* v_alt_x27_2560_){
_start:
{
uint8_t v_hasUnitThunk_2561_; 
v_hasUnitThunk_2561_ = lean_ctor_get_uint8(v___x_2557_, sizeof(void*)*2);
if (v_hasUnitThunk_2561_ == 0)
{
lean_object* v___x_2562_; 
lean_dec(v_inst_2559_);
v___x_2562_ = lean_apply_2(v_toPure_2558_, lean_box(0), v_alt_x27_2560_);
return v___x_2562_;
}
else
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
lean_dec(v_toPure_2558_);
v___x_2563_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2));
v___x_2564_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6);
v___x_2565_ = lean_array_push(v___x_2564_, v_alt_x27_2560_);
v___x_2566_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM___boxed), 7, 2);
lean_closure_set(v___x_2566_, 0, v___x_2563_);
lean_closure_set(v___x_2566_, 1, v___x_2565_);
v___x_2567_ = lean_apply_2(v_inst_2559_, lean_box(0), v___x_2566_);
return v___x_2567_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed(lean_object* v___x_2568_, lean_object* v_toPure_2569_, lean_object* v_inst_2570_, lean_object* v_alt_x27_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__34(v___x_2568_, v_toPure_2569_, v_inst_2570_, v_alt_x27_2571_);
lean_dec_ref(v___x_2568_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36(lean_object* v_ys_2573_, lean_object* v_ys2_2574_, lean_object* v_ys3_2575_, lean_object* v_ys4_2576_, uint8_t v___x_2577_, uint8_t v_useSplitter_2578_, lean_object* v_inst_2579_, lean_object* v_alt_x27_2580_){
_start:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; uint8_t v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2581_ = l_Array_append___redArg(v_ys_2573_, v_ys2_2574_);
v___x_2582_ = l_Array_append___redArg(v___x_2581_, v_ys3_2575_);
v___x_2583_ = l_Array_append___redArg(v___x_2582_, v_ys4_2576_);
v___x_2584_ = 1;
v___x_2585_ = lean_box(v___x_2577_);
v___x_2586_ = lean_box(v_useSplitter_2578_);
v___x_2587_ = lean_box(v___x_2577_);
v___x_2588_ = lean_box(v_useSplitter_2578_);
v___x_2589_ = lean_box(v___x_2584_);
v___x_2590_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2590_, 0, v___x_2583_);
lean_closure_set(v___x_2590_, 1, v_alt_x27_2580_);
lean_closure_set(v___x_2590_, 2, v___x_2585_);
lean_closure_set(v___x_2590_, 3, v___x_2586_);
lean_closure_set(v___x_2590_, 4, v___x_2587_);
lean_closure_set(v___x_2590_, 5, v___x_2588_);
lean_closure_set(v___x_2590_, 6, v___x_2589_);
v___x_2591_ = lean_apply_2(v_inst_2579_, lean_box(0), v___x_2590_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed(lean_object* v_ys_2592_, lean_object* v_ys2_2593_, lean_object* v_ys3_2594_, lean_object* v_ys4_2595_, lean_object* v___x_2596_, lean_object* v_useSplitter_2597_, lean_object* v_inst_2598_, lean_object* v_alt_x27_2599_){
_start:
{
uint8_t v___x_13393__boxed_2600_; uint8_t v_useSplitter_boxed_2601_; lean_object* v_res_2602_; 
v___x_13393__boxed_2600_ = lean_unbox(v___x_2596_);
v_useSplitter_boxed_2601_ = lean_unbox(v_useSplitter_2597_);
v_res_2602_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__36(v_ys_2592_, v_ys2_2593_, v_ys3_2594_, v_ys4_2595_, v___x_13393__boxed_2600_, v_useSplitter_boxed_2601_, v_inst_2598_, v_alt_x27_2599_);
lean_dec_ref(v_ys4_2595_);
lean_dec_ref(v_ys3_2594_);
lean_dec_ref(v_ys2_2593_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__37(lean_object* v_args_2603_, lean_object* v_ys_2604_, lean_object* v_ys2_2605_, lean_object* v_ys3_2606_, lean_object* v_ys4_2607_, lean_object* v_onAlt_2608_, lean_object* v_next_2609_, lean_object* v_altType_2610_, lean_object* v_toBind_2611_, lean_object* v___f_2612_, lean_object* v_alt_2613_){
_start:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2614_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2614_, 0, v_args_2603_);
lean_ctor_set(v___x_2614_, 1, v_ys_2604_);
lean_ctor_set(v___x_2614_, 2, v_ys2_2605_);
lean_ctor_set(v___x_2614_, 3, v_ys3_2606_);
lean_ctor_set(v___x_2614_, 4, v_ys4_2607_);
v___x_2615_ = lean_apply_4(v_onAlt_2608_, v_next_2609_, v_altType_2610_, v___x_2614_, v_alt_2613_);
v___x_2616_ = lean_apply_4(v_toBind_2611_, lean_box(0), lean_box(0), v___x_2615_, v___f_2612_);
return v___x_2616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38(lean_object* v_toMonadExceptOf_2617_, lean_object* v_ys_2618_, lean_object* v_ys2_2619_, lean_object* v_ys3_2620_, uint8_t v___x_2621_, uint8_t v_useSplitter_2622_, lean_object* v_inst_2623_, lean_object* v_args_2624_, lean_object* v_onAlt_2625_, lean_object* v_next_2626_, lean_object* v_toBind_2627_, lean_object* v___x_2628_, lean_object* v___f_2629_, lean_object* v_ys4_2630_, lean_object* v_altType_2631_){
_start:
{
lean_object* v_tryCatch_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___f_2635_; lean_object* v___f_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v_tryCatch_2632_ = lean_ctor_get(v_toMonadExceptOf_2617_, 1);
lean_inc(v_tryCatch_2632_);
lean_dec_ref(v_toMonadExceptOf_2617_);
v___x_2633_ = lean_box(v___x_2621_);
v___x_2634_ = lean_box(v_useSplitter_2622_);
lean_inc(v_inst_2623_);
lean_inc_ref(v_ys4_2630_);
lean_inc_ref_n(v_ys3_2620_, 2);
lean_inc_ref(v_ys2_2619_);
lean_inc_ref(v_ys_2618_);
v___f_2635_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed), 8, 7);
lean_closure_set(v___f_2635_, 0, v_ys_2618_);
lean_closure_set(v___f_2635_, 1, v_ys2_2619_);
lean_closure_set(v___f_2635_, 2, v_ys3_2620_);
lean_closure_set(v___f_2635_, 3, v_ys4_2630_);
lean_closure_set(v___f_2635_, 4, v___x_2633_);
lean_closure_set(v___f_2635_, 5, v___x_2634_);
lean_closure_set(v___f_2635_, 6, v_inst_2623_);
lean_inc(v_toBind_2627_);
lean_inc_ref(v_args_2624_);
v___f_2636_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__37), 11, 10);
lean_closure_set(v___f_2636_, 0, v_args_2624_);
lean_closure_set(v___f_2636_, 1, v_ys_2618_);
lean_closure_set(v___f_2636_, 2, v_ys2_2619_);
lean_closure_set(v___f_2636_, 3, v_ys3_2620_);
lean_closure_set(v___f_2636_, 4, v_ys4_2630_);
lean_closure_set(v___f_2636_, 5, v_onAlt_2625_);
lean_closure_set(v___f_2636_, 6, v_next_2626_);
lean_closure_set(v___f_2636_, 7, v_altType_2631_);
lean_closure_set(v___f_2636_, 8, v_toBind_2627_);
lean_closure_set(v___f_2636_, 9, v___f_2635_);
v___x_2637_ = l_Array_append___redArg(v_args_2624_, v_ys3_2620_);
lean_dec_ref(v_ys3_2620_);
v___x_2638_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___boxed), 7, 2);
lean_closure_set(v___x_2638_, 0, v___x_2628_);
lean_closure_set(v___x_2638_, 1, v___x_2637_);
v___x_2639_ = lean_apply_2(v_inst_2623_, lean_box(0), v___x_2638_);
v___x_2640_ = lean_apply_3(v_tryCatch_2632_, lean_box(0), v___x_2639_, v___f_2629_);
v___x_2641_ = lean_apply_4(v_toBind_2627_, lean_box(0), lean_box(0), v___x_2640_, v___f_2636_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed(lean_object* v_toMonadExceptOf_2642_, lean_object* v_ys_2643_, lean_object* v_ys2_2644_, lean_object* v_ys3_2645_, lean_object* v___x_2646_, lean_object* v_useSplitter_2647_, lean_object* v_inst_2648_, lean_object* v_args_2649_, lean_object* v_onAlt_2650_, lean_object* v_next_2651_, lean_object* v_toBind_2652_, lean_object* v___x_2653_, lean_object* v___f_2654_, lean_object* v_ys4_2655_, lean_object* v_altType_2656_){
_start:
{
uint8_t v___x_13429__boxed_2657_; uint8_t v_useSplitter_boxed_2658_; lean_object* v_res_2659_; 
v___x_13429__boxed_2657_ = lean_unbox(v___x_2646_);
v_useSplitter_boxed_2658_ = lean_unbox(v_useSplitter_2647_);
v_res_2659_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__38(v_toMonadExceptOf_2642_, v_ys_2643_, v_ys2_2644_, v_ys3_2645_, v___x_13429__boxed_2657_, v_useSplitter_boxed_2658_, v_inst_2648_, v_args_2649_, v_onAlt_2650_, v_next_2651_, v_toBind_2652_, v___x_2653_, v___f_2654_, v_ys4_2655_, v_altType_2656_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39(lean_object* v_toMonadExceptOf_2660_, lean_object* v_ys_2661_, lean_object* v_ys2_2662_, uint8_t v___x_2663_, uint8_t v_useSplitter_2664_, lean_object* v_inst_2665_, lean_object* v_args_2666_, lean_object* v_onAlt_2667_, lean_object* v_next_2668_, lean_object* v_toBind_2669_, lean_object* v___x_2670_, lean_object* v___f_2671_, lean_object* v_fst_2672_, lean_object* v_inst_2673_, lean_object* v_inst_2674_, lean_object* v_ys3_2675_, lean_object* v_altType_2676_){
_start:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___f_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2677_ = lean_box(v___x_2663_);
v___x_2678_ = lean_box(v_useSplitter_2664_);
v___f_2679_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed), 15, 13);
lean_closure_set(v___f_2679_, 0, v_toMonadExceptOf_2660_);
lean_closure_set(v___f_2679_, 1, v_ys_2661_);
lean_closure_set(v___f_2679_, 2, v_ys2_2662_);
lean_closure_set(v___f_2679_, 3, v_ys3_2675_);
lean_closure_set(v___f_2679_, 4, v___x_2677_);
lean_closure_set(v___f_2679_, 5, v___x_2678_);
lean_closure_set(v___f_2679_, 6, v_inst_2665_);
lean_closure_set(v___f_2679_, 7, v_args_2666_);
lean_closure_set(v___f_2679_, 8, v_onAlt_2667_);
lean_closure_set(v___f_2679_, 9, v_next_2668_);
lean_closure_set(v___f_2679_, 10, v_toBind_2669_);
lean_closure_set(v___f_2679_, 11, v___x_2670_);
lean_closure_set(v___f_2679_, 12, v___f_2671_);
v___x_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2680_, 0, v_fst_2672_);
v___x_2681_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2673_, v_inst_2674_, v_altType_2676_, v___x_2680_, v___f_2679_, v___x_2663_, v___x_2663_);
return v___x_2681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed(lean_object** _args){
lean_object* v_toMonadExceptOf_2682_ = _args[0];
lean_object* v_ys_2683_ = _args[1];
lean_object* v_ys2_2684_ = _args[2];
lean_object* v___x_2685_ = _args[3];
lean_object* v_useSplitter_2686_ = _args[4];
lean_object* v_inst_2687_ = _args[5];
lean_object* v_args_2688_ = _args[6];
lean_object* v_onAlt_2689_ = _args[7];
lean_object* v_next_2690_ = _args[8];
lean_object* v_toBind_2691_ = _args[9];
lean_object* v___x_2692_ = _args[10];
lean_object* v___f_2693_ = _args[11];
lean_object* v_fst_2694_ = _args[12];
lean_object* v_inst_2695_ = _args[13];
lean_object* v_inst_2696_ = _args[14];
lean_object* v_ys3_2697_ = _args[15];
lean_object* v_altType_2698_ = _args[16];
_start:
{
uint8_t v___x_13459__boxed_2699_; uint8_t v_useSplitter_boxed_2700_; lean_object* v_res_2701_; 
v___x_13459__boxed_2699_ = lean_unbox(v___x_2685_);
v_useSplitter_boxed_2700_ = lean_unbox(v_useSplitter_2686_);
v_res_2701_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__39(v_toMonadExceptOf_2682_, v_ys_2683_, v_ys2_2684_, v___x_13459__boxed_2699_, v_useSplitter_boxed_2700_, v_inst_2687_, v_args_2688_, v_onAlt_2689_, v_next_2690_, v_toBind_2691_, v___x_2692_, v___f_2693_, v_fst_2694_, v_inst_2695_, v_inst_2696_, v_ys3_2697_, v_altType_2698_);
return v_res_2701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40(lean_object* v_toMonadExceptOf_2702_, lean_object* v_ys_2703_, uint8_t v___x_2704_, uint8_t v_useSplitter_2705_, lean_object* v_inst_2706_, lean_object* v_args_2707_, lean_object* v_onAlt_2708_, lean_object* v_next_2709_, lean_object* v_toBind_2710_, lean_object* v___x_2711_, lean_object* v___f_2712_, lean_object* v_fst_2713_, lean_object* v_inst_2714_, lean_object* v_inst_2715_, lean_object* v_numDiscrEqs_2716_, lean_object* v_ys2_2717_, lean_object* v_altType_2718_){
_start:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___f_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2719_ = lean_box(v___x_2704_);
v___x_2720_ = lean_box(v_useSplitter_2705_);
lean_inc_ref(v_inst_2715_);
lean_inc_ref(v_inst_2714_);
v___f_2721_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed), 17, 15);
lean_closure_set(v___f_2721_, 0, v_toMonadExceptOf_2702_);
lean_closure_set(v___f_2721_, 1, v_ys_2703_);
lean_closure_set(v___f_2721_, 2, v_ys2_2717_);
lean_closure_set(v___f_2721_, 3, v___x_2719_);
lean_closure_set(v___f_2721_, 4, v___x_2720_);
lean_closure_set(v___f_2721_, 5, v_inst_2706_);
lean_closure_set(v___f_2721_, 6, v_args_2707_);
lean_closure_set(v___f_2721_, 7, v_onAlt_2708_);
lean_closure_set(v___f_2721_, 8, v_next_2709_);
lean_closure_set(v___f_2721_, 9, v_toBind_2710_);
lean_closure_set(v___f_2721_, 10, v___x_2711_);
lean_closure_set(v___f_2721_, 11, v___f_2712_);
lean_closure_set(v___f_2721_, 12, v_fst_2713_);
lean_closure_set(v___f_2721_, 13, v_inst_2714_);
lean_closure_set(v___f_2721_, 14, v_inst_2715_);
v___x_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2722_, 0, v_numDiscrEqs_2716_);
v___x_2723_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2714_, v_inst_2715_, v_altType_2718_, v___x_2722_, v___f_2721_, v___x_2704_, v___x_2704_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed(lean_object** _args){
lean_object* v_toMonadExceptOf_2724_ = _args[0];
lean_object* v_ys_2725_ = _args[1];
lean_object* v___x_2726_ = _args[2];
lean_object* v_useSplitter_2727_ = _args[3];
lean_object* v_inst_2728_ = _args[4];
lean_object* v_args_2729_ = _args[5];
lean_object* v_onAlt_2730_ = _args[6];
lean_object* v_next_2731_ = _args[7];
lean_object* v_toBind_2732_ = _args[8];
lean_object* v___x_2733_ = _args[9];
lean_object* v___f_2734_ = _args[10];
lean_object* v_fst_2735_ = _args[11];
lean_object* v_inst_2736_ = _args[12];
lean_object* v_inst_2737_ = _args[13];
lean_object* v_numDiscrEqs_2738_ = _args[14];
lean_object* v_ys2_2739_ = _args[15];
lean_object* v_altType_2740_ = _args[16];
_start:
{
uint8_t v___x_13487__boxed_2741_; uint8_t v_useSplitter_boxed_2742_; lean_object* v_res_2743_; 
v___x_13487__boxed_2741_ = lean_unbox(v___x_2726_);
v_useSplitter_boxed_2742_ = lean_unbox(v_useSplitter_2727_);
v_res_2743_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__40(v_toMonadExceptOf_2724_, v_ys_2725_, v___x_13487__boxed_2741_, v_useSplitter_boxed_2742_, v_inst_2728_, v_args_2729_, v_onAlt_2730_, v_next_2731_, v_toBind_2732_, v___x_2733_, v___f_2734_, v_fst_2735_, v_inst_2736_, v_inst_2737_, v_numDiscrEqs_2738_, v_ys2_2739_, v_altType_2740_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41(lean_object* v___x_2744_, lean_object* v_inst_2745_, lean_object* v_inst_2746_, lean_object* v___f_2747_, uint8_t v___x_2748_, lean_object* v_toBind_2749_, lean_object* v___f_2750_, lean_object* v_altType_2751_){
_start:
{
lean_object* v_numOverlaps_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; 
v_numOverlaps_2752_ = lean_ctor_get(v___x_2744_, 1);
lean_inc(v_numOverlaps_2752_);
v___x_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2753_, 0, v_numOverlaps_2752_);
v___x_2754_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2745_, v_inst_2746_, v_altType_2751_, v___x_2753_, v___f_2747_, v___x_2748_, v___x_2748_);
v___x_2755_ = lean_apply_4(v_toBind_2749_, lean_box(0), lean_box(0), v___x_2754_, v___f_2750_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed(lean_object* v___x_2756_, lean_object* v_inst_2757_, lean_object* v_inst_2758_, lean_object* v___f_2759_, lean_object* v___x_2760_, lean_object* v_toBind_2761_, lean_object* v___f_2762_, lean_object* v_altType_2763_){
_start:
{
uint8_t v___x_13519__boxed_2764_; lean_object* v_res_2765_; 
v___x_13519__boxed_2764_ = lean_unbox(v___x_2760_);
v_res_2765_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__41(v___x_2756_, v_inst_2757_, v_inst_2758_, v___f_2759_, v___x_13519__boxed_2764_, v_toBind_2761_, v___f_2762_, v_altType_2763_);
lean_dec_ref(v___x_2756_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__42(lean_object* v___f_2766_, lean_object* v_altType_2767_){
_start:
{
lean_object* v___x_2768_; 
v___x_2768_ = lean_apply_1(v___f_2766_, v_altType_2767_);
return v___x_2768_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2(void){
_start:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2773_ = lean_box(0);
v___x_2774_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1));
v___x_2775_ = l_Lean_mkConst(v___x_2774_, v___x_2773_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44(lean_object* v___x_2776_, lean_object* v_toPure_2777_, lean_object* v_toBind_2778_, lean_object* v___f_2779_, lean_object* v___x_2780_, lean_object* v_inst_2781_, lean_object* v___f_2782_, lean_object* v_altType_2783_){
_start:
{
uint8_t v_hasUnitThunk_2784_; 
v_hasUnitThunk_2784_ = lean_ctor_get_uint8(v___x_2776_, sizeof(void*)*2);
if (v_hasUnitThunk_2784_ == 0)
{
lean_object* v___x_2785_; lean_object* v___x_2786_; 
lean_dec(v___f_2782_);
lean_dec(v_inst_2781_);
v___x_2785_ = lean_apply_2(v_toPure_2777_, lean_box(0), v_altType_2783_);
v___x_2786_ = lean_apply_4(v_toBind_2778_, lean_box(0), lean_box(0), v___x_2785_, v___f_2779_);
return v___x_2786_;
}
else
{
lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
lean_dec(v___f_2779_);
lean_dec(v_toPure_2777_);
v___x_2787_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2);
v___x_2788_ = lean_mk_empty_array_with_capacity(v___x_2780_);
v___x_2789_ = lean_array_push(v___x_2788_, v___x_2787_);
v___x_2790_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___boxed), 7, 2);
lean_closure_set(v___x_2790_, 0, v_altType_2783_);
lean_closure_set(v___x_2790_, 1, v___x_2789_);
v___x_2791_ = lean_apply_2(v_inst_2781_, lean_box(0), v___x_2790_);
v___x_2792_ = lean_apply_4(v_toBind_2778_, lean_box(0), lean_box(0), v___x_2791_, v___f_2782_);
return v___x_2792_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed(lean_object* v___x_2793_, lean_object* v_toPure_2794_, lean_object* v_toBind_2795_, lean_object* v___f_2796_, lean_object* v___x_2797_, lean_object* v_inst_2798_, lean_object* v___f_2799_, lean_object* v_altType_2800_){
_start:
{
lean_object* v_res_2801_; 
v_res_2801_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__44(v___x_2793_, v_toPure_2794_, v_toBind_2795_, v___f_2796_, v___x_2797_, v_inst_2798_, v___f_2799_, v_altType_2800_);
lean_dec(v___x_2797_);
lean_dec_ref(v___x_2793_);
return v_res_2801_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3(void){
_start:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___x_2805_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2));
v___x_2806_ = lean_unsigned_to_nat(8u);
v___x_2807_ = lean_unsigned_to_nat(360u);
v___x_2808_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1));
v___x_2809_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0));
v___x_2810_ = l_mkPanicMessageWithDecl(v___x_2809_, v___x_2808_, v___x_2807_, v___x_2806_, v___x_2805_);
return v___x_2810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43(lean_object* v___x_2811_, lean_object* v___x_2812_, lean_object* v_toMonadExceptOf_2813_, uint8_t v___x_2814_, uint8_t v_useSplitter_2815_, lean_object* v_inst_2816_, lean_object* v_onAlt_2817_, lean_object* v_next_2818_, lean_object* v_toBind_2819_, lean_object* v___x_2820_, lean_object* v___f_2821_, lean_object* v_fst_2822_, lean_object* v_inst_2823_, lean_object* v_inst_2824_, lean_object* v_numDiscrEqs_2825_, lean_object* v___f_2826_, lean_object* v___x_2827_, lean_object* v_toPure_2828_, lean_object* v___x_2829_, lean_object* v___x_2830_, lean_object* v_ys_2831_, lean_object* v_args_2832_){
_start:
{
lean_object* v_numFields_2833_; lean_object* v___x_2834_; uint8_t v___x_2835_; 
v_numFields_2833_ = lean_ctor_get(v___x_2811_, 0);
v___x_2834_ = lean_array_get_size(v_ys_2831_);
v___x_2835_ = lean_nat_dec_eq(v___x_2834_, v_numFields_2833_);
if (v___x_2835_ == 0)
{
lean_object* v___x_2836_; lean_object* v___x_2837_; 
lean_dec_ref(v_args_2832_);
lean_dec_ref(v_ys_2831_);
lean_dec_ref(v___x_2830_);
lean_dec(v___x_2829_);
lean_dec(v_toPure_2828_);
lean_dec_ref(v___x_2827_);
lean_dec(v___f_2826_);
lean_dec(v_numDiscrEqs_2825_);
lean_dec_ref(v_inst_2824_);
lean_dec_ref(v_inst_2823_);
lean_dec(v_fst_2822_);
lean_dec(v___f_2821_);
lean_dec_ref(v___x_2820_);
lean_dec(v_toBind_2819_);
lean_dec(v_next_2818_);
lean_dec(v_onAlt_2817_);
lean_dec(v_inst_2816_);
lean_dec_ref(v_toMonadExceptOf_2813_);
lean_dec_ref(v___x_2811_);
v___x_2836_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3);
v___x_2837_ = l_panic___redArg(v___x_2812_, v___x_2836_);
return v___x_2837_;
}
else
{
lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___f_2840_; lean_object* v___x_2841_; lean_object* v___f_2842_; lean_object* v___f_2843_; lean_object* v___f_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; 
v___x_2838_ = lean_box(v___x_2814_);
v___x_2839_ = lean_box(v_useSplitter_2815_);
lean_inc_ref(v_inst_2824_);
lean_inc_ref(v_inst_2823_);
lean_inc_n(v_toBind_2819_, 3);
lean_inc_n(v_inst_2816_, 2);
lean_inc_ref(v_ys_2831_);
v___f_2840_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed), 17, 15);
lean_closure_set(v___f_2840_, 0, v_toMonadExceptOf_2813_);
lean_closure_set(v___f_2840_, 1, v_ys_2831_);
lean_closure_set(v___f_2840_, 2, v___x_2838_);
lean_closure_set(v___f_2840_, 3, v___x_2839_);
lean_closure_set(v___f_2840_, 4, v_inst_2816_);
lean_closure_set(v___f_2840_, 5, v_args_2832_);
lean_closure_set(v___f_2840_, 6, v_onAlt_2817_);
lean_closure_set(v___f_2840_, 7, v_next_2818_);
lean_closure_set(v___f_2840_, 8, v_toBind_2819_);
lean_closure_set(v___f_2840_, 9, v___x_2820_);
lean_closure_set(v___f_2840_, 10, v___f_2821_);
lean_closure_set(v___f_2840_, 11, v_fst_2822_);
lean_closure_set(v___f_2840_, 12, v_inst_2823_);
lean_closure_set(v___f_2840_, 13, v_inst_2824_);
lean_closure_set(v___f_2840_, 14, v_numDiscrEqs_2825_);
v___x_2841_ = lean_box(v___x_2814_);
v___f_2842_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed), 8, 7);
lean_closure_set(v___f_2842_, 0, v___x_2811_);
lean_closure_set(v___f_2842_, 1, v_inst_2823_);
lean_closure_set(v___f_2842_, 2, v_inst_2824_);
lean_closure_set(v___f_2842_, 3, v___f_2840_);
lean_closure_set(v___f_2842_, 4, v___x_2841_);
lean_closure_set(v___f_2842_, 5, v_toBind_2819_);
lean_closure_set(v___f_2842_, 6, v___f_2826_);
v___f_2843_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__42), 2, 1);
lean_closure_set(v___f_2843_, 0, v___f_2842_);
lean_inc_ref(v___f_2843_);
v___f_2844_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed), 8, 7);
lean_closure_set(v___f_2844_, 0, v___x_2827_);
lean_closure_set(v___f_2844_, 1, v_toPure_2828_);
lean_closure_set(v___f_2844_, 2, v_toBind_2819_);
lean_closure_set(v___f_2844_, 3, v___f_2843_);
lean_closure_set(v___f_2844_, 4, v___x_2829_);
lean_closure_set(v___f_2844_, 5, v_inst_2816_);
lean_closure_set(v___f_2844_, 6, v___f_2843_);
v___x_2845_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___boxed), 7, 2);
lean_closure_set(v___x_2845_, 0, v___x_2830_);
lean_closure_set(v___x_2845_, 1, v_ys_2831_);
v___x_2846_ = lean_apply_2(v_inst_2816_, lean_box(0), v___x_2845_);
v___x_2847_ = lean_apply_4(v_toBind_2819_, lean_box(0), lean_box(0), v___x_2846_, v___f_2844_);
return v___x_2847_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed(lean_object** _args){
lean_object* v___x_2848_ = _args[0];
lean_object* v___x_2849_ = _args[1];
lean_object* v_toMonadExceptOf_2850_ = _args[2];
lean_object* v___x_2851_ = _args[3];
lean_object* v_useSplitter_2852_ = _args[4];
lean_object* v_inst_2853_ = _args[5];
lean_object* v_onAlt_2854_ = _args[6];
lean_object* v_next_2855_ = _args[7];
lean_object* v_toBind_2856_ = _args[8];
lean_object* v___x_2857_ = _args[9];
lean_object* v___f_2858_ = _args[10];
lean_object* v_fst_2859_ = _args[11];
lean_object* v_inst_2860_ = _args[12];
lean_object* v_inst_2861_ = _args[13];
lean_object* v_numDiscrEqs_2862_ = _args[14];
lean_object* v___f_2863_ = _args[15];
lean_object* v___x_2864_ = _args[16];
lean_object* v_toPure_2865_ = _args[17];
lean_object* v___x_2866_ = _args[18];
lean_object* v___x_2867_ = _args[19];
lean_object* v_ys_2868_ = _args[20];
lean_object* v_args_2869_ = _args[21];
_start:
{
uint8_t v___x_13616__boxed_2870_; uint8_t v_useSplitter_boxed_2871_; lean_object* v_res_2872_; 
v___x_13616__boxed_2870_ = lean_unbox(v___x_2851_);
v_useSplitter_boxed_2871_ = lean_unbox(v_useSplitter_2852_);
v_res_2872_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__43(v___x_2848_, v___x_2849_, v_toMonadExceptOf_2850_, v___x_13616__boxed_2870_, v_useSplitter_boxed_2871_, v_inst_2853_, v_onAlt_2854_, v_next_2855_, v_toBind_2856_, v___x_2857_, v___f_2858_, v_fst_2859_, v_inst_2860_, v_inst_2861_, v_numDiscrEqs_2862_, v___f_2863_, v___x_2864_, v_toPure_2865_, v___x_2866_, v___x_2867_, v_ys_2868_, v_args_2869_);
lean_dec(v___x_2849_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__45(lean_object* v_fst_2873_, lean_object* v___x_2874_, lean_object* v___x_2875_, lean_object* v___x_2876_, lean_object* v___x_2877_, lean_object* v___x_2878_, lean_object* v_toPure_2879_, lean_object* v_alt_x27_2880_){
_start:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2881_ = lean_array_push(v_fst_2873_, v_alt_x27_2880_);
v___x_2882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2874_);
lean_ctor_set(v___x_2882_, 1, v___x_2875_);
v___x_2883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2876_);
lean_ctor_set(v___x_2883_, 1, v___x_2882_);
v___x_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2877_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
v___x_2885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2878_);
lean_ctor_set(v___x_2885_, 1, v___x_2884_);
v___x_2886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2881_);
lean_ctor_set(v___x_2886_, 1, v___x_2885_);
v___x_2887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2886_);
v___x_2888_ = lean_apply_2(v_toPure_2879_, lean_box(0), v___x_2887_);
return v___x_2888_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1(void){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; 
v___x_2890_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0));
v___x_2891_ = lean_unsigned_to_nat(6u);
v___x_2892_ = lean_unsigned_to_nat(358u);
v___x_2893_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1));
v___x_2894_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0));
v___x_2895_ = l_mkPanicMessageWithDecl(v___x_2894_, v___x_2893_, v___x_2892_, v___x_2891_, v___x_2890_);
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46(lean_object* v___x_2896_, lean_object* v_toPure_2897_, lean_object* v_toBind_2898_, lean_object* v___f_2899_, lean_object* v___x_2900_, lean_object* v___x_2901_, lean_object* v_inst_2902_, lean_object* v___x_2903_, lean_object* v_toMonadExceptOf_2904_, uint8_t v___x_2905_, uint8_t v_useSplitter_2906_, lean_object* v_onAlt_2907_, lean_object* v___f_2908_, lean_object* v_fst_2909_, lean_object* v_inst_2910_, lean_object* v_inst_2911_, lean_object* v_numDiscrEqs_2912_, lean_object* v_next_2913_, lean_object* v_acc_2914_, lean_object* v_h_2915_, lean_object* v_G_2916_){
_start:
{
uint8_t v___x_2917_; 
v___x_2917_ = lean_nat_dec_lt(v_next_2913_, v___x_2896_);
if (v___x_2917_ == 0)
{
lean_object* v___x_2918_; 
lean_dec(v_G_2916_);
lean_dec(v_next_2913_);
lean_dec(v_numDiscrEqs_2912_);
lean_dec_ref(v_inst_2911_);
lean_dec_ref(v_inst_2910_);
lean_dec(v_fst_2909_);
lean_dec(v___f_2908_);
lean_dec(v_onAlt_2907_);
lean_dec_ref(v_toMonadExceptOf_2904_);
lean_dec(v___x_2903_);
lean_dec(v_inst_2902_);
lean_dec(v___f_2899_);
lean_dec(v_toBind_2898_);
v___x_2918_ = lean_apply_2(v_toPure_2897_, lean_box(0), v_acc_2914_);
return v___x_2918_;
}
else
{
lean_object* v_snd_2919_; lean_object* v_snd_2920_; lean_object* v_snd_2921_; lean_object* v_snd_2922_; lean_object* v_snd_2923_; lean_object* v_fst_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_3134_; 
v_snd_2919_ = lean_ctor_get(v_acc_2914_, 1);
lean_inc(v_snd_2919_);
v_snd_2920_ = lean_ctor_get(v_snd_2919_, 1);
lean_inc(v_snd_2920_);
v_snd_2921_ = lean_ctor_get(v_snd_2920_, 1);
lean_inc(v_snd_2921_);
v_snd_2922_ = lean_ctor_get(v_snd_2921_, 1);
lean_inc(v_snd_2922_);
v_snd_2923_ = lean_ctor_get(v_snd_2922_, 1);
lean_inc(v_snd_2923_);
v_fst_2924_ = lean_ctor_get(v_acc_2914_, 0);
v_isSharedCheck_3134_ = !lean_is_exclusive(v_acc_2914_);
if (v_isSharedCheck_3134_ == 0)
{
lean_object* v_unused_3135_; 
v_unused_3135_ = lean_ctor_get(v_acc_2914_, 1);
lean_dec(v_unused_3135_);
v___x_2926_ = v_acc_2914_;
v_isShared_2927_ = v_isSharedCheck_3134_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_fst_2924_);
lean_dec(v_acc_2914_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_3134_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
lean_object* v_fst_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_3132_; 
v_fst_2928_ = lean_ctor_get(v_snd_2919_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v_snd_2919_);
if (v_isSharedCheck_3132_ == 0)
{
lean_object* v_unused_3133_; 
v_unused_3133_ = lean_ctor_get(v_snd_2919_, 1);
lean_dec(v_unused_3133_);
v___x_2930_ = v_snd_2919_;
v_isShared_2931_ = v_isSharedCheck_3132_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_fst_2928_);
lean_dec(v_snd_2919_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_3132_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v_fst_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_3130_; 
v_fst_2932_ = lean_ctor_get(v_snd_2920_, 0);
v_isSharedCheck_3130_ = !lean_is_exclusive(v_snd_2920_);
if (v_isSharedCheck_3130_ == 0)
{
lean_object* v_unused_3131_; 
v_unused_3131_ = lean_ctor_get(v_snd_2920_, 1);
lean_dec(v_unused_3131_);
v___x_2934_ = v_snd_2920_;
v_isShared_2935_ = v_isSharedCheck_3130_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_fst_2932_);
lean_dec(v_snd_2920_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_3130_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v_fst_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_3128_; 
v_fst_2936_ = lean_ctor_get(v_snd_2921_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_snd_2921_);
if (v_isSharedCheck_3128_ == 0)
{
lean_object* v_unused_3129_; 
v_unused_3129_ = lean_ctor_get(v_snd_2921_, 1);
lean_dec(v_unused_3129_);
v___x_2938_ = v_snd_2921_;
v_isShared_2939_ = v_isSharedCheck_3128_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_fst_2936_);
lean_dec(v_snd_2921_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_3128_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v_fst_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_3126_; 
v_fst_2940_ = lean_ctor_get(v_snd_2922_, 0);
v_isSharedCheck_3126_ = !lean_is_exclusive(v_snd_2922_);
if (v_isSharedCheck_3126_ == 0)
{
lean_object* v_unused_3127_; 
v_unused_3127_ = lean_ctor_get(v_snd_2922_, 1);
lean_dec(v_unused_3127_);
v___x_2942_ = v_snd_2922_;
v_isShared_2943_ = v_isSharedCheck_3126_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_fst_2940_);
lean_dec(v_snd_2922_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_3126_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v_array_2944_; lean_object* v_start_2945_; lean_object* v_stop_2946_; lean_object* v___f_2947_; lean_object* v___y_2949_; uint8_t v___x_2952_; 
v_array_2944_ = lean_ctor_get(v_snd_2923_, 0);
v_start_2945_ = lean_ctor_get(v_snd_2923_, 1);
v_stop_2946_ = lean_ctor_get(v_snd_2923_, 2);
lean_inc(v_next_2913_);
lean_inc(v_toPure_2897_);
v___f_2947_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed), 4, 3);
lean_closure_set(v___f_2947_, 0, v_toPure_2897_);
lean_closure_set(v___f_2947_, 1, v_next_2913_);
lean_closure_set(v___f_2947_, 2, v_G_2916_);
v___x_2952_ = lean_nat_dec_lt(v_start_2945_, v_stop_2946_);
if (v___x_2952_ == 0)
{
lean_object* v___x_2954_; 
lean_dec(v_next_2913_);
lean_dec(v_numDiscrEqs_2912_);
lean_dec_ref(v_inst_2911_);
lean_dec_ref(v_inst_2910_);
lean_dec(v_fst_2909_);
lean_dec(v___f_2908_);
lean_dec(v_onAlt_2907_);
lean_dec_ref(v_toMonadExceptOf_2904_);
lean_dec(v___x_2903_);
lean_dec(v_inst_2902_);
if (v_isShared_2943_ == 0)
{
v___x_2954_ = v___x_2942_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_fst_2940_);
lean_ctor_set(v_reuseFailAlloc_2969_, 1, v_snd_2923_);
v___x_2954_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
lean_object* v___x_2956_; 
if (v_isShared_2939_ == 0)
{
lean_ctor_set(v___x_2938_, 1, v___x_2954_);
v___x_2956_ = v___x_2938_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_fst_2936_);
lean_ctor_set(v_reuseFailAlloc_2968_, 1, v___x_2954_);
v___x_2956_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
lean_object* v___x_2958_; 
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 1, v___x_2956_);
v___x_2958_ = v___x_2934_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_fst_2932_);
lean_ctor_set(v_reuseFailAlloc_2967_, 1, v___x_2956_);
v___x_2958_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
lean_object* v___x_2960_; 
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 1, v___x_2958_);
v___x_2960_ = v___x_2930_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_fst_2928_);
lean_ctor_set(v_reuseFailAlloc_2966_, 1, v___x_2958_);
v___x_2960_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
lean_object* v___x_2962_; 
if (v_isShared_2927_ == 0)
{
lean_ctor_set(v___x_2926_, 1, v___x_2960_);
v___x_2962_ = v___x_2926_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_fst_2924_);
lean_ctor_set(v_reuseFailAlloc_2965_, 1, v___x_2960_);
v___x_2962_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2962_);
v___x_2964_ = lean_apply_2(v_toPure_2897_, lean_box(0), v___x_2963_);
v___y_2949_ = v___x_2964_;
goto v___jp_2948_;
}
}
}
}
}
}
else
{
lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_3122_; 
lean_inc(v_stop_2946_);
lean_inc(v_start_2945_);
lean_inc_ref(v_array_2944_);
v_isSharedCheck_3122_ = !lean_is_exclusive(v_snd_2923_);
if (v_isSharedCheck_3122_ == 0)
{
lean_object* v_unused_3123_; lean_object* v_unused_3124_; lean_object* v_unused_3125_; 
v_unused_3123_ = lean_ctor_get(v_snd_2923_, 2);
lean_dec(v_unused_3123_);
v_unused_3124_ = lean_ctor_get(v_snd_2923_, 1);
lean_dec(v_unused_3124_);
v_unused_3125_ = lean_ctor_get(v_snd_2923_, 0);
lean_dec(v_unused_3125_);
v___x_2971_ = v_snd_2923_;
v_isShared_2972_ = v_isSharedCheck_3122_;
goto v_resetjp_2970_;
}
else
{
lean_dec(v_snd_2923_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_3122_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v_array_2973_; lean_object* v_start_2974_; lean_object* v_stop_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2980_; 
v_array_2973_ = lean_ctor_get(v_fst_2940_, 0);
v_start_2974_ = lean_ctor_get(v_fst_2940_, 1);
v_stop_2975_ = lean_ctor_get(v_fst_2940_, 2);
v___x_2976_ = lean_array_fget(v_array_2944_, v_start_2945_);
v___x_2977_ = lean_unsigned_to_nat(1u);
v___x_2978_ = lean_nat_add(v_start_2945_, v___x_2977_);
lean_dec(v_start_2945_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 1, v___x_2978_);
v___x_2980_ = v___x_2971_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_array_2944_);
lean_ctor_set(v_reuseFailAlloc_3121_, 1, v___x_2978_);
lean_ctor_set(v_reuseFailAlloc_3121_, 2, v_stop_2946_);
v___x_2980_ = v_reuseFailAlloc_3121_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
uint8_t v___x_2981_; 
v___x_2981_ = lean_nat_dec_lt(v_start_2974_, v_stop_2975_);
if (v___x_2981_ == 0)
{
lean_object* v___x_2983_; 
lean_dec(v___x_2976_);
lean_dec(v_next_2913_);
lean_dec(v_numDiscrEqs_2912_);
lean_dec_ref(v_inst_2911_);
lean_dec_ref(v_inst_2910_);
lean_dec(v_fst_2909_);
lean_dec(v___f_2908_);
lean_dec(v_onAlt_2907_);
lean_dec_ref(v_toMonadExceptOf_2904_);
lean_dec(v___x_2903_);
lean_dec(v_inst_2902_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 1, v___x_2980_);
v___x_2983_ = v___x_2942_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v_fst_2940_);
lean_ctor_set(v_reuseFailAlloc_2998_, 1, v___x_2980_);
v___x_2983_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
lean_object* v___x_2985_; 
if (v_isShared_2939_ == 0)
{
lean_ctor_set(v___x_2938_, 1, v___x_2983_);
v___x_2985_ = v___x_2938_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_fst_2936_);
lean_ctor_set(v_reuseFailAlloc_2997_, 1, v___x_2983_);
v___x_2985_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2987_; 
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 1, v___x_2985_);
v___x_2987_ = v___x_2934_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v_fst_2932_);
lean_ctor_set(v_reuseFailAlloc_2996_, 1, v___x_2985_);
v___x_2987_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
lean_object* v___x_2989_; 
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 1, v___x_2987_);
v___x_2989_ = v___x_2930_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_fst_2928_);
lean_ctor_set(v_reuseFailAlloc_2995_, 1, v___x_2987_);
v___x_2989_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
lean_object* v___x_2991_; 
if (v_isShared_2927_ == 0)
{
lean_ctor_set(v___x_2926_, 1, v___x_2989_);
v___x_2991_ = v___x_2926_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_fst_2924_);
lean_ctor_set(v_reuseFailAlloc_2994_, 1, v___x_2989_);
v___x_2991_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2991_);
v___x_2993_ = lean_apply_2(v_toPure_2897_, lean_box(0), v___x_2992_);
v___y_2949_ = v___x_2993_;
goto v___jp_2948_;
}
}
}
}
}
}
else
{
lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3117_; 
lean_inc(v_stop_2975_);
lean_inc(v_start_2974_);
lean_inc_ref(v_array_2973_);
v_isSharedCheck_3117_ = !lean_is_exclusive(v_fst_2940_);
if (v_isSharedCheck_3117_ == 0)
{
lean_object* v_unused_3118_; lean_object* v_unused_3119_; lean_object* v_unused_3120_; 
v_unused_3118_ = lean_ctor_get(v_fst_2940_, 2);
lean_dec(v_unused_3118_);
v_unused_3119_ = lean_ctor_get(v_fst_2940_, 1);
lean_dec(v_unused_3119_);
v_unused_3120_ = lean_ctor_get(v_fst_2940_, 0);
lean_dec(v_unused_3120_);
v___x_3000_ = v_fst_2940_;
v_isShared_3001_ = v_isSharedCheck_3117_;
goto v_resetjp_2999_;
}
else
{
lean_dec(v_fst_2940_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3117_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v_array_3002_; lean_object* v_start_3003_; lean_object* v_stop_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3008_; 
v_array_3002_ = lean_ctor_get(v_fst_2936_, 0);
v_start_3003_ = lean_ctor_get(v_fst_2936_, 1);
v_stop_3004_ = lean_ctor_get(v_fst_2936_, 2);
v___x_3005_ = lean_array_fget(v_array_2973_, v_start_2974_);
v___x_3006_ = lean_nat_add(v_start_2974_, v___x_2977_);
lean_dec(v_start_2974_);
if (v_isShared_3001_ == 0)
{
lean_ctor_set(v___x_3000_, 1, v___x_3006_);
v___x_3008_ = v___x_3000_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v_array_2973_);
lean_ctor_set(v_reuseFailAlloc_3116_, 1, v___x_3006_);
lean_ctor_set(v_reuseFailAlloc_3116_, 2, v_stop_2975_);
v___x_3008_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
uint8_t v___x_3009_; 
v___x_3009_ = lean_nat_dec_lt(v_start_3003_, v_stop_3004_);
if (v___x_3009_ == 0)
{
lean_object* v___x_3011_; 
lean_dec(v___x_3005_);
lean_dec(v___x_2976_);
lean_dec(v_next_2913_);
lean_dec(v_numDiscrEqs_2912_);
lean_dec_ref(v_inst_2911_);
lean_dec_ref(v_inst_2910_);
lean_dec(v_fst_2909_);
lean_dec(v___f_2908_);
lean_dec(v_onAlt_2907_);
lean_dec_ref(v_toMonadExceptOf_2904_);
lean_dec(v___x_2903_);
lean_dec(v_inst_2902_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 1, v___x_2980_);
lean_ctor_set(v___x_2942_, 0, v___x_3008_);
v___x_3011_ = v___x_2942_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v___x_3008_);
lean_ctor_set(v_reuseFailAlloc_3026_, 1, v___x_2980_);
v___x_3011_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
lean_object* v___x_3013_; 
if (v_isShared_2939_ == 0)
{
lean_ctor_set(v___x_2938_, 1, v___x_3011_);
v___x_3013_ = v___x_2938_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_fst_2936_);
lean_ctor_set(v_reuseFailAlloc_3025_, 1, v___x_3011_);
v___x_3013_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
lean_object* v___x_3015_; 
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 1, v___x_3013_);
v___x_3015_ = v___x_2934_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v_fst_2932_);
lean_ctor_set(v_reuseFailAlloc_3024_, 1, v___x_3013_);
v___x_3015_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
lean_object* v___x_3017_; 
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 1, v___x_3015_);
v___x_3017_ = v___x_2930_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_fst_2928_);
lean_ctor_set(v_reuseFailAlloc_3023_, 1, v___x_3015_);
v___x_3017_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
lean_object* v___x_3019_; 
if (v_isShared_2927_ == 0)
{
lean_ctor_set(v___x_2926_, 1, v___x_3017_);
v___x_3019_ = v___x_2926_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_fst_2924_);
lean_ctor_set(v_reuseFailAlloc_3022_, 1, v___x_3017_);
v___x_3019_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; 
v___x_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3019_);
v___x_3021_ = lean_apply_2(v_toPure_2897_, lean_box(0), v___x_3020_);
v___y_2949_ = v___x_3021_;
goto v___jp_2948_;
}
}
}
}
}
}
else
{
lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3112_; 
lean_inc(v_stop_3004_);
lean_inc(v_start_3003_);
lean_inc_ref(v_array_3002_);
v_isSharedCheck_3112_ = !lean_is_exclusive(v_fst_2936_);
if (v_isSharedCheck_3112_ == 0)
{
lean_object* v_unused_3113_; lean_object* v_unused_3114_; lean_object* v_unused_3115_; 
v_unused_3113_ = lean_ctor_get(v_fst_2936_, 2);
lean_dec(v_unused_3113_);
v_unused_3114_ = lean_ctor_get(v_fst_2936_, 1);
lean_dec(v_unused_3114_);
v_unused_3115_ = lean_ctor_get(v_fst_2936_, 0);
lean_dec(v_unused_3115_);
v___x_3028_ = v_fst_2936_;
v_isShared_3029_ = v_isSharedCheck_3112_;
goto v_resetjp_3027_;
}
else
{
lean_dec(v_fst_2936_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3112_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v_array_3030_; lean_object* v_start_3031_; lean_object* v_stop_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3036_; 
v_array_3030_ = lean_ctor_get(v_fst_2932_, 0);
v_start_3031_ = lean_ctor_get(v_fst_2932_, 1);
v_stop_3032_ = lean_ctor_get(v_fst_2932_, 2);
v___x_3033_ = lean_array_fget(v_array_3002_, v_start_3003_);
v___x_3034_ = lean_nat_add(v_start_3003_, v___x_2977_);
lean_dec(v_start_3003_);
if (v_isShared_3029_ == 0)
{
lean_ctor_set(v___x_3028_, 1, v___x_3034_);
v___x_3036_ = v___x_3028_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_array_3002_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v___x_3034_);
lean_ctor_set(v_reuseFailAlloc_3111_, 2, v_stop_3004_);
v___x_3036_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
uint8_t v___x_3037_; 
v___x_3037_ = lean_nat_dec_lt(v_start_3031_, v_stop_3032_);
if (v___x_3037_ == 0)
{
lean_object* v___x_3039_; 
lean_dec(v___x_3033_);
lean_dec(v___x_3005_);
lean_dec(v___x_2976_);
lean_dec(v_next_2913_);
lean_dec(v_numDiscrEqs_2912_);
lean_dec_ref(v_inst_2911_);
lean_dec_ref(v_inst_2910_);
lean_dec(v_fst_2909_);
lean_dec(v___f_2908_);
lean_dec(v_onAlt_2907_);
lean_dec_ref(v_toMonadExceptOf_2904_);
lean_dec(v___x_2903_);
lean_dec(v_inst_2902_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 1, v___x_2980_);
lean_ctor_set(v___x_2942_, 0, v___x_3008_);
v___x_3039_ = v___x_2942_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v___x_3008_);
lean_ctor_set(v_reuseFailAlloc_3054_, 1, v___x_2980_);
v___x_3039_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
lean_object* v___x_3041_; 
if (v_isShared_2939_ == 0)
{
lean_ctor_set(v___x_2938_, 1, v___x_3039_);
lean_ctor_set(v___x_2938_, 0, v___x_3036_);
v___x_3041_ = v___x_2938_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v___x_3036_);
lean_ctor_set(v_reuseFailAlloc_3053_, 1, v___x_3039_);
v___x_3041_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
lean_object* v___x_3043_; 
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 1, v___x_3041_);
v___x_3043_ = v___x_2934_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_fst_2932_);
lean_ctor_set(v_reuseFailAlloc_3052_, 1, v___x_3041_);
v___x_3043_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
lean_object* v___x_3045_; 
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 1, v___x_3043_);
v___x_3045_ = v___x_2930_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_fst_2928_);
lean_ctor_set(v_reuseFailAlloc_3051_, 1, v___x_3043_);
v___x_3045_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
lean_object* v___x_3047_; 
if (v_isShared_2927_ == 0)
{
lean_ctor_set(v___x_2926_, 1, v___x_3045_);
v___x_3047_ = v___x_2926_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_fst_2924_);
lean_ctor_set(v_reuseFailAlloc_3050_, 1, v___x_3045_);
v___x_3047_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
v___x_3049_ = lean_apply_2(v_toPure_2897_, lean_box(0), v___x_3048_);
v___y_2949_ = v___x_3049_;
goto v___jp_2948_;
}
}
}
}
}
}
else
{
lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3107_; 
lean_inc(v_stop_3032_);
lean_inc(v_start_3031_);
lean_inc_ref(v_array_3030_);
v_isSharedCheck_3107_ = !lean_is_exclusive(v_fst_2932_);
if (v_isSharedCheck_3107_ == 0)
{
lean_object* v_unused_3108_; lean_object* v_unused_3109_; lean_object* v_unused_3110_; 
v_unused_3108_ = lean_ctor_get(v_fst_2932_, 2);
lean_dec(v_unused_3108_);
v_unused_3109_ = lean_ctor_get(v_fst_2932_, 1);
lean_dec(v_unused_3109_);
v_unused_3110_ = lean_ctor_get(v_fst_2932_, 0);
lean_dec(v_unused_3110_);
v___x_3056_ = v_fst_2932_;
v_isShared_3057_ = v_isSharedCheck_3107_;
goto v_resetjp_3055_;
}
else
{
lean_dec(v_fst_2932_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3107_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v_array_3058_; lean_object* v_start_3059_; lean_object* v_stop_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3064_; 
v_array_3058_ = lean_ctor_get(v_fst_2928_, 0);
v_start_3059_ = lean_ctor_get(v_fst_2928_, 1);
v_stop_3060_ = lean_ctor_get(v_fst_2928_, 2);
v___x_3061_ = lean_array_fget(v_array_3030_, v_start_3031_);
v___x_3062_ = lean_nat_add(v_start_3031_, v___x_2977_);
lean_dec(v_start_3031_);
if (v_isShared_3057_ == 0)
{
lean_ctor_set(v___x_3056_, 1, v___x_3062_);
v___x_3064_ = v___x_3056_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_array_3030_);
lean_ctor_set(v_reuseFailAlloc_3106_, 1, v___x_3062_);
lean_ctor_set(v_reuseFailAlloc_3106_, 2, v_stop_3032_);
v___x_3064_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
uint8_t v___x_3065_; 
v___x_3065_ = lean_nat_dec_lt(v_start_3059_, v_stop_3060_);
if (v___x_3065_ == 0)
{
lean_object* v___x_3067_; 
lean_dec(v___x_3061_);
lean_dec(v___x_3033_);
lean_dec(v___x_3005_);
lean_dec(v___x_2976_);
lean_dec(v_next_2913_);
lean_dec(v_numDiscrEqs_2912_);
lean_dec_ref(v_inst_2911_);
lean_dec_ref(v_inst_2910_);
lean_dec(v_fst_2909_);
lean_dec(v___f_2908_);
lean_dec(v_onAlt_2907_);
lean_dec_ref(v_toMonadExceptOf_2904_);
lean_dec(v___x_2903_);
lean_dec(v_inst_2902_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 1, v___x_2980_);
lean_ctor_set(v___x_2942_, 0, v___x_3008_);
v___x_3067_ = v___x_2942_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v___x_3008_);
lean_ctor_set(v_reuseFailAlloc_3082_, 1, v___x_2980_);
v___x_3067_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
lean_object* v___x_3069_; 
if (v_isShared_2939_ == 0)
{
lean_ctor_set(v___x_2938_, 1, v___x_3067_);
lean_ctor_set(v___x_2938_, 0, v___x_3036_);
v___x_3069_ = v___x_2938_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3036_);
lean_ctor_set(v_reuseFailAlloc_3081_, 1, v___x_3067_);
v___x_3069_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
lean_object* v___x_3071_; 
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 1, v___x_3069_);
lean_ctor_set(v___x_2934_, 0, v___x_3064_);
v___x_3071_ = v___x_2934_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3080_, 1, v___x_3069_);
v___x_3071_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
lean_object* v___x_3073_; 
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 1, v___x_3071_);
v___x_3073_ = v___x_2930_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_fst_2928_);
lean_ctor_set(v_reuseFailAlloc_3079_, 1, v___x_3071_);
v___x_3073_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
lean_object* v___x_3075_; 
if (v_isShared_2927_ == 0)
{
lean_ctor_set(v___x_2926_, 1, v___x_3073_);
v___x_3075_ = v___x_2926_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_fst_2924_);
lean_ctor_set(v_reuseFailAlloc_3078_, 1, v___x_3073_);
v___x_3075_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3075_);
v___x_3077_ = lean_apply_2(v_toPure_2897_, lean_box(0), v___x_3076_);
v___y_2949_ = v___x_3077_;
goto v___jp_2948_;
}
}
}
}
}
}
else
{
lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3102_; 
lean_inc(v_stop_3060_);
lean_inc(v_start_3059_);
lean_inc_ref(v_array_3058_);
lean_del_object(v___x_2942_);
lean_del_object(v___x_2938_);
lean_del_object(v___x_2934_);
lean_del_object(v___x_2930_);
lean_del_object(v___x_2926_);
v_isSharedCheck_3102_ = !lean_is_exclusive(v_fst_2928_);
if (v_isSharedCheck_3102_ == 0)
{
lean_object* v_unused_3103_; lean_object* v_unused_3104_; lean_object* v_unused_3105_; 
v_unused_3103_ = lean_ctor_get(v_fst_2928_, 2);
lean_dec(v_unused_3103_);
v_unused_3104_ = lean_ctor_get(v_fst_2928_, 1);
lean_dec(v_unused_3104_);
v_unused_3105_ = lean_ctor_get(v_fst_2928_, 0);
lean_dec(v_unused_3105_);
v___x_3084_ = v_fst_2928_;
v_isShared_3085_ = v_isSharedCheck_3102_;
goto v_resetjp_3083_;
}
else
{
lean_dec(v_fst_2928_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3102_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v_numOverlaps_3086_; uint8_t v___x_3087_; 
v_numOverlaps_3086_ = lean_ctor_get(v___x_3061_, 1);
v___x_3087_ = lean_nat_dec_eq(v_numOverlaps_3086_, v___x_2900_);
if (v___x_3087_ == 0)
{
lean_object* v___x_3088_; lean_object* v___x_3089_; 
lean_del_object(v___x_3084_);
lean_dec_ref(v___x_3064_);
lean_dec(v___x_3061_);
lean_dec(v_stop_3060_);
lean_dec(v_start_3059_);
lean_dec_ref(v_array_3058_);
lean_dec_ref(v___x_3036_);
lean_dec(v___x_3033_);
lean_dec_ref(v___x_3008_);
lean_dec(v___x_3005_);
lean_dec_ref(v___x_2980_);
lean_dec(v___x_2976_);
lean_dec(v_fst_2924_);
lean_dec(v_next_2913_);
lean_dec(v_numDiscrEqs_2912_);
lean_dec_ref(v_inst_2911_);
lean_dec_ref(v_inst_2910_);
lean_dec(v_fst_2909_);
lean_dec(v___f_2908_);
lean_dec(v_onAlt_2907_);
lean_dec_ref(v_toMonadExceptOf_2904_);
lean_dec(v___x_2903_);
lean_dec(v_inst_2902_);
lean_dec(v_toPure_2897_);
v___x_3088_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_3089_ = l_panic___redArg(v___x_2901_, v___x_3088_);
v___y_2949_ = v___x_3089_;
goto v___jp_2948_;
}
else
{
lean_object* v___f_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___f_3094_; lean_object* v___x_3095_; lean_object* v___x_3097_; 
lean_inc(v_inst_2902_);
lean_inc_n(v_toPure_2897_, 2);
lean_inc(v___x_3033_);
v___f_3090_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed), 4, 3);
lean_closure_set(v___f_3090_, 0, v___x_3033_);
lean_closure_set(v___f_3090_, 1, v_toPure_2897_);
lean_closure_set(v___f_3090_, 2, v_inst_2902_);
v___x_3091_ = lean_array_fget_borrowed(v_array_3058_, v_start_3059_);
v___x_3092_ = lean_box(v___x_2905_);
v___x_3093_ = lean_box(v_useSplitter_2906_);
lean_inc(v___x_3061_);
lean_inc_ref(v_inst_2911_);
lean_inc_ref(v_inst_2910_);
lean_inc(v___x_3091_);
lean_inc(v_toBind_2898_);
v___f_3094_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed), 22, 20);
lean_closure_set(v___f_3094_, 0, v___x_3033_);
lean_closure_set(v___f_3094_, 1, v___x_2903_);
lean_closure_set(v___f_3094_, 2, v_toMonadExceptOf_2904_);
lean_closure_set(v___f_3094_, 3, v___x_3092_);
lean_closure_set(v___f_3094_, 4, v___x_3093_);
lean_closure_set(v___f_3094_, 5, v_inst_2902_);
lean_closure_set(v___f_3094_, 6, v_onAlt_2907_);
lean_closure_set(v___f_3094_, 7, v_next_2913_);
lean_closure_set(v___f_3094_, 8, v_toBind_2898_);
lean_closure_set(v___f_3094_, 9, v___x_3091_);
lean_closure_set(v___f_3094_, 10, v___f_2908_);
lean_closure_set(v___f_3094_, 11, v_fst_2909_);
lean_closure_set(v___f_3094_, 12, v_inst_2910_);
lean_closure_set(v___f_3094_, 13, v_inst_2911_);
lean_closure_set(v___f_3094_, 14, v_numDiscrEqs_2912_);
lean_closure_set(v___f_3094_, 15, v___f_3090_);
lean_closure_set(v___f_3094_, 16, v___x_3061_);
lean_closure_set(v___f_3094_, 17, v_toPure_2897_);
lean_closure_set(v___f_3094_, 18, v___x_2977_);
lean_closure_set(v___f_3094_, 19, v___x_2976_);
v___x_3095_ = lean_nat_add(v_start_3059_, v___x_2977_);
lean_dec(v_start_3059_);
if (v_isShared_3085_ == 0)
{
lean_ctor_set(v___x_3084_, 1, v___x_3095_);
v___x_3097_ = v___x_3084_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_array_3058_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v___x_3095_);
lean_ctor_set(v_reuseFailAlloc_3101_, 2, v_stop_3060_);
v___x_3097_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
lean_object* v___f_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___f_3098_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__45), 8, 7);
lean_closure_set(v___f_3098_, 0, v_fst_2924_);
lean_closure_set(v___f_3098_, 1, v___x_3008_);
lean_closure_set(v___f_3098_, 2, v___x_2980_);
lean_closure_set(v___f_3098_, 3, v___x_3036_);
lean_closure_set(v___f_3098_, 4, v___x_3064_);
lean_closure_set(v___f_3098_, 5, v___x_3097_);
lean_closure_set(v___f_3098_, 6, v_toPure_2897_);
v___x_3099_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(v_inst_2911_, v_inst_2910_, v___x_3005_, v___x_3061_, v___f_3094_);
lean_inc(v_toBind_2898_);
v___x_3100_ = lean_apply_4(v_toBind_2898_, lean_box(0), lean_box(0), v___x_3099_, v___f_3098_);
v___y_2949_ = v___x_3100_;
goto v___jp_2948_;
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
}
}
v___jp_2948_:
{
lean_object* v___x_2950_; lean_object* v___x_2951_; 
lean_inc(v_toBind_2898_);
v___x_2950_ = lean_apply_4(v_toBind_2898_, lean_box(0), lean_box(0), v___y_2949_, v___f_2899_);
v___x_2951_ = lean_apply_4(v_toBind_2898_, lean_box(0), lean_box(0), v___x_2950_, v___f_2947_);
return v___x_2951_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed(lean_object** _args){
lean_object* v___x_3136_ = _args[0];
lean_object* v_toPure_3137_ = _args[1];
lean_object* v_toBind_3138_ = _args[2];
lean_object* v___f_3139_ = _args[3];
lean_object* v___x_3140_ = _args[4];
lean_object* v___x_3141_ = _args[5];
lean_object* v_inst_3142_ = _args[6];
lean_object* v___x_3143_ = _args[7];
lean_object* v_toMonadExceptOf_3144_ = _args[8];
lean_object* v___x_3145_ = _args[9];
lean_object* v_useSplitter_3146_ = _args[10];
lean_object* v_onAlt_3147_ = _args[11];
lean_object* v___f_3148_ = _args[12];
lean_object* v_fst_3149_ = _args[13];
lean_object* v_inst_3150_ = _args[14];
lean_object* v_inst_3151_ = _args[15];
lean_object* v_numDiscrEqs_3152_ = _args[16];
lean_object* v_next_3153_ = _args[17];
lean_object* v_acc_3154_ = _args[18];
lean_object* v_h_3155_ = _args[19];
lean_object* v_G_3156_ = _args[20];
_start:
{
uint8_t v___x_13735__boxed_3157_; uint8_t v_useSplitter_boxed_3158_; lean_object* v_res_3159_; 
v___x_13735__boxed_3157_ = lean_unbox(v___x_3145_);
v_useSplitter_boxed_3158_ = lean_unbox(v_useSplitter_3146_);
v_res_3159_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__46(v___x_3136_, v_toPure_3137_, v_toBind_3138_, v___f_3139_, v___x_3140_, v___x_3141_, v_inst_3142_, v___x_3143_, v_toMonadExceptOf_3144_, v___x_13735__boxed_3157_, v_useSplitter_boxed_3158_, v_onAlt_3147_, v___f_3148_, v_fst_3149_, v_inst_3150_, v_inst_3151_, v_numDiscrEqs_3152_, v_next_3153_, v_acc_3154_, v_h_3155_, v_G_3156_);
lean_dec(v___x_3141_);
lean_dec(v___x_3140_);
lean_dec(v___x_3136_);
return v_res_3159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47(lean_object* v_fst_3160_, lean_object* v_numParams_3161_, lean_object* v_numDiscrs_3162_, lean_object* v_altInfos_3163_, lean_object* v_uElimPos_x3f_3164_, lean_object* v_snd_3165_, lean_object* v_overlaps_3166_, lean_object* v_splitterName_3167_, lean_object* v_matcherLevels_3168_, lean_object* v_params_x27_3169_, lean_object* v_fst_3170_, lean_object* v_discrs_x27_3171_, lean_object* v_fst_3172_, lean_object* v_toPure_3173_, lean_object* v_____do__lift_3174_){
_start:
{
lean_object* v_remaining_x27_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v_remaining_x27_3175_ = l_Array_append___redArg(v_fst_3160_, v_____do__lift_3174_);
v___x_3176_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3176_, 0, v_numParams_3161_);
lean_ctor_set(v___x_3176_, 1, v_numDiscrs_3162_);
lean_ctor_set(v___x_3176_, 2, v_altInfos_3163_);
lean_ctor_set(v___x_3176_, 3, v_uElimPos_x3f_3164_);
lean_ctor_set(v___x_3176_, 4, v_snd_3165_);
lean_ctor_set(v___x_3176_, 5, v_overlaps_3166_);
v___x_3177_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3176_);
lean_ctor_set(v___x_3177_, 1, v_splitterName_3167_);
lean_ctor_set(v___x_3177_, 2, v_matcherLevels_3168_);
lean_ctor_set(v___x_3177_, 3, v_params_x27_3169_);
lean_ctor_set(v___x_3177_, 4, v_fst_3170_);
lean_ctor_set(v___x_3177_, 5, v_discrs_x27_3171_);
lean_ctor_set(v___x_3177_, 6, v_fst_3172_);
lean_ctor_set(v___x_3177_, 7, v_remaining_x27_3175_);
v___x_3178_ = lean_apply_2(v_toPure_3173_, lean_box(0), v___x_3177_);
return v___x_3178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed(lean_object* v_fst_3179_, lean_object* v_numParams_3180_, lean_object* v_numDiscrs_3181_, lean_object* v_altInfos_3182_, lean_object* v_uElimPos_x3f_3183_, lean_object* v_snd_3184_, lean_object* v_overlaps_3185_, lean_object* v_splitterName_3186_, lean_object* v_matcherLevels_3187_, lean_object* v_params_x27_3188_, lean_object* v_fst_3189_, lean_object* v_discrs_x27_3190_, lean_object* v_fst_3191_, lean_object* v_toPure_3192_, lean_object* v_____do__lift_3193_){
_start:
{
lean_object* v_res_3194_; 
v_res_3194_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__47(v_fst_3179_, v_numParams_3180_, v_numDiscrs_3181_, v_altInfos_3182_, v_uElimPos_x3f_3183_, v_snd_3184_, v_overlaps_3185_, v_splitterName_3186_, v_matcherLevels_3187_, v_params_x27_3188_, v_fst_3189_, v_discrs_x27_3190_, v_fst_3191_, v_toPure_3192_, v_____do__lift_3193_);
lean_dec_ref(v_____do__lift_3193_);
return v_res_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48(lean_object* v_fst_3195_, lean_object* v_numParams_3196_, lean_object* v_numDiscrs_3197_, lean_object* v_altInfos_3198_, lean_object* v_uElimPos_x3f_3199_, lean_object* v_snd_3200_, lean_object* v_overlaps_3201_, lean_object* v_splitterName_3202_, lean_object* v_matcherLevels_3203_, lean_object* v_params_x27_3204_, lean_object* v_fst_3205_, lean_object* v_discrs_x27_3206_, lean_object* v_toPure_3207_, lean_object* v_onRemaining_3208_, lean_object* v_remaining_3209_, lean_object* v_toBind_3210_, lean_object* v_____s_3211_){
_start:
{
lean_object* v_fst_3212_; lean_object* v___f_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; 
v_fst_3212_ = lean_ctor_get(v_____s_3211_, 0);
lean_inc(v_fst_3212_);
lean_dec_ref(v_____s_3211_);
v___f_3213_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed), 15, 14);
lean_closure_set(v___f_3213_, 0, v_fst_3195_);
lean_closure_set(v___f_3213_, 1, v_numParams_3196_);
lean_closure_set(v___f_3213_, 2, v_numDiscrs_3197_);
lean_closure_set(v___f_3213_, 3, v_altInfos_3198_);
lean_closure_set(v___f_3213_, 4, v_uElimPos_x3f_3199_);
lean_closure_set(v___f_3213_, 5, v_snd_3200_);
lean_closure_set(v___f_3213_, 6, v_overlaps_3201_);
lean_closure_set(v___f_3213_, 7, v_splitterName_3202_);
lean_closure_set(v___f_3213_, 8, v_matcherLevels_3203_);
lean_closure_set(v___f_3213_, 9, v_params_x27_3204_);
lean_closure_set(v___f_3213_, 10, v_fst_3205_);
lean_closure_set(v___f_3213_, 11, v_discrs_x27_3206_);
lean_closure_set(v___f_3213_, 12, v_fst_3212_);
lean_closure_set(v___f_3213_, 13, v_toPure_3207_);
v___x_3214_ = lean_apply_1(v_onRemaining_3208_, v_remaining_3209_);
v___x_3215_ = lean_apply_4(v_toBind_3210_, lean_box(0), lean_box(0), v___x_3214_, v___f_3213_);
return v___x_3215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed(lean_object** _args){
lean_object* v_fst_3216_ = _args[0];
lean_object* v_numParams_3217_ = _args[1];
lean_object* v_numDiscrs_3218_ = _args[2];
lean_object* v_altInfos_3219_ = _args[3];
lean_object* v_uElimPos_x3f_3220_ = _args[4];
lean_object* v_snd_3221_ = _args[5];
lean_object* v_overlaps_3222_ = _args[6];
lean_object* v_splitterName_3223_ = _args[7];
lean_object* v_matcherLevels_3224_ = _args[8];
lean_object* v_params_x27_3225_ = _args[9];
lean_object* v_fst_3226_ = _args[10];
lean_object* v_discrs_x27_3227_ = _args[11];
lean_object* v_toPure_3228_ = _args[12];
lean_object* v_onRemaining_3229_ = _args[13];
lean_object* v_remaining_3230_ = _args[14];
lean_object* v_toBind_3231_ = _args[15];
lean_object* v_____s_3232_ = _args[16];
_start:
{
lean_object* v_res_3233_; 
v_res_3233_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__48(v_fst_3216_, v_numParams_3217_, v_numDiscrs_3218_, v_altInfos_3219_, v_uElimPos_x3f_3220_, v_snd_3221_, v_overlaps_3222_, v_splitterName_3223_, v_matcherLevels_3224_, v_params_x27_3225_, v_fst_3226_, v_discrs_x27_3227_, v_toPure_3228_, v_onRemaining_3229_, v_remaining_3230_, v_toBind_3231_, v_____s_3232_);
return v_res_3233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49(lean_object* v_splitterMatchInfo_3234_, lean_object* v_fst_3235_, lean_object* v_numParams_3236_, lean_object* v_numDiscrs_3237_, lean_object* v_altInfos_3238_, lean_object* v_uElimPos_x3f_3239_, lean_object* v_snd_3240_, lean_object* v_overlaps_3241_, lean_object* v_splitterName_3242_, lean_object* v_matcherLevels_3243_, lean_object* v_params_x27_3244_, lean_object* v_fst_3245_, lean_object* v_discrs_x27_3246_, lean_object* v_toPure_3247_, lean_object* v_onRemaining_3248_, lean_object* v_remaining_3249_, lean_object* v_toBind_3250_, lean_object* v_origAltTypes_3251_, lean_object* v_alts_3252_, lean_object* v___x_3253_, lean_object* v___x_3254_, lean_object* v_remaining_x27_3255_, lean_object* v___f_3256_, lean_object* v_altTypes_3257_){
_start:
{
lean_object* v_altInfos_3258_; lean_object* v___f_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
v_altInfos_3258_ = lean_ctor_get(v_splitterMatchInfo_3234_, 2);
lean_inc_ref(v_altInfos_3258_);
lean_dec_ref(v_splitterMatchInfo_3234_);
lean_inc(v_toBind_3250_);
lean_inc_ref(v_altInfos_3238_);
v___f_3259_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed), 17, 16);
lean_closure_set(v___f_3259_, 0, v_fst_3235_);
lean_closure_set(v___f_3259_, 1, v_numParams_3236_);
lean_closure_set(v___f_3259_, 2, v_numDiscrs_3237_);
lean_closure_set(v___f_3259_, 3, v_altInfos_3238_);
lean_closure_set(v___f_3259_, 4, v_uElimPos_x3f_3239_);
lean_closure_set(v___f_3259_, 5, v_snd_3240_);
lean_closure_set(v___f_3259_, 6, v_overlaps_3241_);
lean_closure_set(v___f_3259_, 7, v_splitterName_3242_);
lean_closure_set(v___f_3259_, 8, v_matcherLevels_3243_);
lean_closure_set(v___f_3259_, 9, v_params_x27_3244_);
lean_closure_set(v___f_3259_, 10, v_fst_3245_);
lean_closure_set(v___f_3259_, 11, v_discrs_x27_3246_);
lean_closure_set(v___f_3259_, 12, v_toPure_3247_);
lean_closure_set(v___f_3259_, 13, v_onRemaining_3248_);
lean_closure_set(v___f_3259_, 14, v_remaining_3249_);
lean_closure_set(v___f_3259_, 15, v_toBind_3250_);
v___x_3260_ = lean_array_get_size(v_altInfos_3238_);
v___x_3261_ = lean_array_get_size(v_altInfos_3258_);
v___x_3262_ = lean_array_get_size(v_origAltTypes_3251_);
v___x_3263_ = lean_array_get_size(v_altTypes_3257_);
lean_inc_n(v___x_3253_, 5);
v___x_3264_ = l_Array_toSubarray___redArg(v_alts_3252_, v___x_3253_, v___x_3254_);
v___x_3265_ = l_Array_toSubarray___redArg(v_altInfos_3238_, v___x_3253_, v___x_3260_);
v___x_3266_ = l_Array_toSubarray___redArg(v_altInfos_3258_, v___x_3253_, v___x_3261_);
v___x_3267_ = l_Array_toSubarray___redArg(v_origAltTypes_3251_, v___x_3253_, v___x_3262_);
v___x_3268_ = l_Array_toSubarray___redArg(v_altTypes_3257_, v___x_3253_, v___x_3263_);
v___x_3269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3269_, 0, v___x_3267_);
lean_ctor_set(v___x_3269_, 1, v___x_3268_);
v___x_3270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3270_, 0, v___x_3266_);
lean_ctor_set(v___x_3270_, 1, v___x_3269_);
v___x_3271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3265_);
lean_ctor_set(v___x_3271_, 1, v___x_3270_);
v___x_3272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3264_);
lean_ctor_set(v___x_3272_, 1, v___x_3271_);
v___x_3273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3273_, 0, v_remaining_x27_3255_);
lean_ctor_set(v___x_3273_, 1, v___x_3272_);
v___x_3274_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3256_, v___x_3253_, v___x_3273_, lean_box(0));
v___x_3275_ = lean_apply_4(v_toBind_3250_, lean_box(0), lean_box(0), v___x_3274_, v___f_3259_);
return v___x_3275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed(lean_object** _args){
lean_object* v_splitterMatchInfo_3276_ = _args[0];
lean_object* v_fst_3277_ = _args[1];
lean_object* v_numParams_3278_ = _args[2];
lean_object* v_numDiscrs_3279_ = _args[3];
lean_object* v_altInfos_3280_ = _args[4];
lean_object* v_uElimPos_x3f_3281_ = _args[5];
lean_object* v_snd_3282_ = _args[6];
lean_object* v_overlaps_3283_ = _args[7];
lean_object* v_splitterName_3284_ = _args[8];
lean_object* v_matcherLevels_3285_ = _args[9];
lean_object* v_params_x27_3286_ = _args[10];
lean_object* v_fst_3287_ = _args[11];
lean_object* v_discrs_x27_3288_ = _args[12];
lean_object* v_toPure_3289_ = _args[13];
lean_object* v_onRemaining_3290_ = _args[14];
lean_object* v_remaining_3291_ = _args[15];
lean_object* v_toBind_3292_ = _args[16];
lean_object* v_origAltTypes_3293_ = _args[17];
lean_object* v_alts_3294_ = _args[18];
lean_object* v___x_3295_ = _args[19];
lean_object* v___x_3296_ = _args[20];
lean_object* v_remaining_x27_3297_ = _args[21];
lean_object* v___f_3298_ = _args[22];
lean_object* v_altTypes_3299_ = _args[23];
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__49(v_splitterMatchInfo_3276_, v_fst_3277_, v_numParams_3278_, v_numDiscrs_3279_, v_altInfos_3280_, v_uElimPos_x3f_3281_, v_snd_3282_, v_overlaps_3283_, v_splitterName_3284_, v_matcherLevels_3285_, v_params_x27_3286_, v_fst_3287_, v_discrs_x27_3288_, v_toPure_3289_, v_onRemaining_3290_, v_remaining_3291_, v_toBind_3292_, v_origAltTypes_3293_, v_alts_3294_, v___x_3295_, v___x_3296_, v_remaining_x27_3297_, v___f_3298_, v_altTypes_3299_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__50(lean_object* v___x_3301_, lean_object* v_aux2_3302_, lean_object* v_inst_3303_, lean_object* v_toBind_3304_, lean_object* v___f_3305_, lean_object* v_____r_3306_){
_start:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; 
v___x_3307_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_3307_, 0, v___x_3301_);
lean_closure_set(v___x_3307_, 1, v_aux2_3302_);
v___x_3308_ = lean_apply_2(v_inst_3303_, lean_box(0), v___x_3307_);
v___x_3309_ = lean_apply_4(v_toBind_3304_, lean_box(0), lean_box(0), v___x_3308_, v___f_3305_);
return v___x_3309_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1(void){
_start:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; 
v___x_3311_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0));
v___x_3312_ = l_Lean_stringToMessageData(v___x_3311_);
return v___x_3312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53(lean_object* v___x_3313_, lean_object* v_params_x27_3314_, lean_object* v_fst_3315_, lean_object* v_discrs_x27_3316_, lean_object* v_fst_3317_, lean_object* v_numParams_3318_, lean_object* v_numDiscrs_3319_, lean_object* v_altInfos_3320_, lean_object* v_uElimPos_x3f_3321_, lean_object* v_snd_3322_, lean_object* v_overlaps_3323_, lean_object* v_matcherLevels_3324_, lean_object* v_toPure_3325_, lean_object* v_onRemaining_3326_, lean_object* v_remaining_3327_, lean_object* v_toBind_3328_, lean_object* v_origAltTypes_3329_, lean_object* v_alts_3330_, lean_object* v___x_3331_, lean_object* v___x_3332_, lean_object* v_remaining_x27_3333_, lean_object* v___f_3334_, lean_object* v_inst_3335_, lean_object* v___x_3336_, uint8_t v___x_3337_, lean_object* v_liftWith_3338_, lean_object* v_restoreM_3339_, lean_object* v_matchEqns_3340_){
_start:
{
lean_object* v_splitterName_3341_; lean_object* v_splitterMatchInfo_3342_; lean_object* v___x_3343_; lean_object* v_aux2_3344_; lean_object* v_aux2_3345_; lean_object* v_aux2_3346_; lean_object* v___x_3347_; lean_object* v___f_3348_; lean_object* v___f_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___f_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___f_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; 
v_splitterName_3341_ = lean_ctor_get(v_matchEqns_3340_, 1);
lean_inc_n(v_splitterName_3341_, 2);
v_splitterMatchInfo_3342_ = lean_ctor_get(v_matchEqns_3340_, 2);
lean_inc_ref(v_splitterMatchInfo_3342_);
lean_dec_ref(v_matchEqns_3340_);
v___x_3343_ = l_Lean_mkConst(v_splitterName_3341_, v___x_3313_);
v_aux2_3344_ = l_Lean_mkAppN(v___x_3343_, v_params_x27_3314_);
lean_inc_ref(v_fst_3315_);
v_aux2_3345_ = l_Lean_Expr_app___override(v_aux2_3344_, v_fst_3315_);
v_aux2_3346_ = l_Lean_mkAppN(v_aux2_3345_, v_discrs_x27_3316_);
lean_inc_ref_n(v_aux2_3346_, 2);
v___x_3347_ = l_Lean_indentExpr(v_aux2_3346_);
lean_inc(v___x_3332_);
lean_inc_n(v_toBind_3328_, 3);
v___f_3348_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed), 24, 23);
lean_closure_set(v___f_3348_, 0, v_splitterMatchInfo_3342_);
lean_closure_set(v___f_3348_, 1, v_fst_3317_);
lean_closure_set(v___f_3348_, 2, v_numParams_3318_);
lean_closure_set(v___f_3348_, 3, v_numDiscrs_3319_);
lean_closure_set(v___f_3348_, 4, v_altInfos_3320_);
lean_closure_set(v___f_3348_, 5, v_uElimPos_x3f_3321_);
lean_closure_set(v___f_3348_, 6, v_snd_3322_);
lean_closure_set(v___f_3348_, 7, v_overlaps_3323_);
lean_closure_set(v___f_3348_, 8, v_splitterName_3341_);
lean_closure_set(v___f_3348_, 9, v_matcherLevels_3324_);
lean_closure_set(v___f_3348_, 10, v_params_x27_3314_);
lean_closure_set(v___f_3348_, 11, v_fst_3315_);
lean_closure_set(v___f_3348_, 12, v_discrs_x27_3316_);
lean_closure_set(v___f_3348_, 13, v_toPure_3325_);
lean_closure_set(v___f_3348_, 14, v_onRemaining_3326_);
lean_closure_set(v___f_3348_, 15, v_remaining_3327_);
lean_closure_set(v___f_3348_, 16, v_toBind_3328_);
lean_closure_set(v___f_3348_, 17, v_origAltTypes_3329_);
lean_closure_set(v___f_3348_, 18, v_alts_3330_);
lean_closure_set(v___f_3348_, 19, v___x_3331_);
lean_closure_set(v___f_3348_, 20, v___x_3332_);
lean_closure_set(v___f_3348_, 21, v_remaining_x27_3333_);
lean_closure_set(v___f_3348_, 22, v___f_3334_);
lean_inc(v_inst_3335_);
v___f_3349_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__50), 6, 5);
lean_closure_set(v___f_3349_, 0, v___x_3332_);
lean_closure_set(v___f_3349_, 1, v_aux2_3346_);
lean_closure_set(v___f_3349_, 2, v_inst_3335_);
lean_closure_set(v___f_3349_, 3, v_toBind_3328_);
lean_closure_set(v___f_3349_, 4, v___f_3348_);
v___x_3350_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1);
v___x_3351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3350_);
lean_ctor_set(v___x_3351_, 1, v___x_3347_);
v___x_3352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3351_);
lean_ctor_set(v___x_3352_, 1, v___x_3336_);
v___f_3353_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3353_, 0, v___x_3352_);
v___x_3354_ = lean_box(v___x_3337_);
v___x_3355_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3355_, 0, v_aux2_3346_);
lean_closure_set(v___x_3355_, 1, v___x_3354_);
v___x_3356_ = lean_apply_2(v_inst_3335_, lean_box(0), v___x_3355_);
v___f_3357_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3357_, 0, v___x_3356_);
lean_closure_set(v___f_3357_, 1, v___f_3353_);
v___x_3358_ = lean_apply_2(v_liftWith_3338_, lean_box(0), v___f_3357_);
v___x_3359_ = lean_apply_1(v_restoreM_3339_, lean_box(0));
v___x_3360_ = lean_apply_4(v_toBind_3328_, lean_box(0), lean_box(0), v___x_3358_, v___x_3359_);
v___x_3361_ = lean_apply_4(v_toBind_3328_, lean_box(0), lean_box(0), v___x_3360_, v___f_3349_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed(lean_object** _args){
lean_object* v___x_3362_ = _args[0];
lean_object* v_params_x27_3363_ = _args[1];
lean_object* v_fst_3364_ = _args[2];
lean_object* v_discrs_x27_3365_ = _args[3];
lean_object* v_fst_3366_ = _args[4];
lean_object* v_numParams_3367_ = _args[5];
lean_object* v_numDiscrs_3368_ = _args[6];
lean_object* v_altInfos_3369_ = _args[7];
lean_object* v_uElimPos_x3f_3370_ = _args[8];
lean_object* v_snd_3371_ = _args[9];
lean_object* v_overlaps_3372_ = _args[10];
lean_object* v_matcherLevels_3373_ = _args[11];
lean_object* v_toPure_3374_ = _args[12];
lean_object* v_onRemaining_3375_ = _args[13];
lean_object* v_remaining_3376_ = _args[14];
lean_object* v_toBind_3377_ = _args[15];
lean_object* v_origAltTypes_3378_ = _args[16];
lean_object* v_alts_3379_ = _args[17];
lean_object* v___x_3380_ = _args[18];
lean_object* v___x_3381_ = _args[19];
lean_object* v_remaining_x27_3382_ = _args[20];
lean_object* v___f_3383_ = _args[21];
lean_object* v_inst_3384_ = _args[22];
lean_object* v___x_3385_ = _args[23];
lean_object* v___x_3386_ = _args[24];
lean_object* v_liftWith_3387_ = _args[25];
lean_object* v_restoreM_3388_ = _args[26];
lean_object* v_matchEqns_3389_ = _args[27];
_start:
{
uint8_t v___x_14259__boxed_3390_; lean_object* v_res_3391_; 
v___x_14259__boxed_3390_ = lean_unbox(v___x_3386_);
v_res_3391_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__53(v___x_3362_, v_params_x27_3363_, v_fst_3364_, v_discrs_x27_3365_, v_fst_3366_, v_numParams_3367_, v_numDiscrs_3368_, v_altInfos_3369_, v_uElimPos_x3f_3370_, v_snd_3371_, v_overlaps_3372_, v_matcherLevels_3373_, v_toPure_3374_, v_onRemaining_3375_, v_remaining_3376_, v_toBind_3377_, v_origAltTypes_3378_, v_alts_3379_, v___x_3380_, v___x_3381_, v_remaining_x27_3382_, v___f_3383_, v_inst_3384_, v___x_3385_, v___x_14259__boxed_3390_, v_liftWith_3387_, v_restoreM_3388_, v_matchEqns_3389_);
return v_res_3391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51(lean_object* v___x_3392_, lean_object* v_params_x27_3393_, lean_object* v_fst_3394_, lean_object* v_discrs_x27_3395_, lean_object* v_fst_3396_, lean_object* v_numParams_3397_, lean_object* v_numDiscrs_3398_, lean_object* v_altInfos_3399_, lean_object* v_uElimPos_x3f_3400_, lean_object* v_snd_3401_, lean_object* v_overlaps_3402_, lean_object* v_matcherLevels_3403_, lean_object* v_toPure_3404_, lean_object* v_onRemaining_3405_, lean_object* v_remaining_3406_, lean_object* v_toBind_3407_, lean_object* v_alts_3408_, lean_object* v___x_3409_, lean_object* v___x_3410_, lean_object* v_remaining_x27_3411_, lean_object* v___f_3412_, lean_object* v_inst_3413_, lean_object* v___x_3414_, uint8_t v___x_3415_, lean_object* v_liftWith_3416_, lean_object* v_restoreM_3417_, lean_object* v_matcherName_3418_, lean_object* v_origAltTypes_3419_){
_start:
{
lean_object* v___x_3420_; lean_object* v___f_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3420_ = lean_box(v___x_3415_);
lean_inc(v_inst_3413_);
lean_inc(v_toBind_3407_);
v___f_3421_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed), 28, 27);
lean_closure_set(v___f_3421_, 0, v___x_3392_);
lean_closure_set(v___f_3421_, 1, v_params_x27_3393_);
lean_closure_set(v___f_3421_, 2, v_fst_3394_);
lean_closure_set(v___f_3421_, 3, v_discrs_x27_3395_);
lean_closure_set(v___f_3421_, 4, v_fst_3396_);
lean_closure_set(v___f_3421_, 5, v_numParams_3397_);
lean_closure_set(v___f_3421_, 6, v_numDiscrs_3398_);
lean_closure_set(v___f_3421_, 7, v_altInfos_3399_);
lean_closure_set(v___f_3421_, 8, v_uElimPos_x3f_3400_);
lean_closure_set(v___f_3421_, 9, v_snd_3401_);
lean_closure_set(v___f_3421_, 10, v_overlaps_3402_);
lean_closure_set(v___f_3421_, 11, v_matcherLevels_3403_);
lean_closure_set(v___f_3421_, 12, v_toPure_3404_);
lean_closure_set(v___f_3421_, 13, v_onRemaining_3405_);
lean_closure_set(v___f_3421_, 14, v_remaining_3406_);
lean_closure_set(v___f_3421_, 15, v_toBind_3407_);
lean_closure_set(v___f_3421_, 16, v_origAltTypes_3419_);
lean_closure_set(v___f_3421_, 17, v_alts_3408_);
lean_closure_set(v___f_3421_, 18, v___x_3409_);
lean_closure_set(v___f_3421_, 19, v___x_3410_);
lean_closure_set(v___f_3421_, 20, v_remaining_x27_3411_);
lean_closure_set(v___f_3421_, 21, v___f_3412_);
lean_closure_set(v___f_3421_, 22, v_inst_3413_);
lean_closure_set(v___f_3421_, 23, v___x_3414_);
lean_closure_set(v___f_3421_, 24, v___x_3420_);
lean_closure_set(v___f_3421_, 25, v_liftWith_3416_);
lean_closure_set(v___f_3421_, 26, v_restoreM_3417_);
v___x_3422_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_getEquationsFor___boxed), 6, 1);
lean_closure_set(v___x_3422_, 0, v_matcherName_3418_);
v___x_3423_ = lean_apply_2(v_inst_3413_, lean_box(0), v___x_3422_);
v___x_3424_ = lean_apply_4(v_toBind_3407_, lean_box(0), lean_box(0), v___x_3423_, v___f_3421_);
return v___x_3424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed(lean_object** _args){
lean_object* v___x_3425_ = _args[0];
lean_object* v_params_x27_3426_ = _args[1];
lean_object* v_fst_3427_ = _args[2];
lean_object* v_discrs_x27_3428_ = _args[3];
lean_object* v_fst_3429_ = _args[4];
lean_object* v_numParams_3430_ = _args[5];
lean_object* v_numDiscrs_3431_ = _args[6];
lean_object* v_altInfos_3432_ = _args[7];
lean_object* v_uElimPos_x3f_3433_ = _args[8];
lean_object* v_snd_3434_ = _args[9];
lean_object* v_overlaps_3435_ = _args[10];
lean_object* v_matcherLevels_3436_ = _args[11];
lean_object* v_toPure_3437_ = _args[12];
lean_object* v_onRemaining_3438_ = _args[13];
lean_object* v_remaining_3439_ = _args[14];
lean_object* v_toBind_3440_ = _args[15];
lean_object* v_alts_3441_ = _args[16];
lean_object* v___x_3442_ = _args[17];
lean_object* v___x_3443_ = _args[18];
lean_object* v_remaining_x27_3444_ = _args[19];
lean_object* v___f_3445_ = _args[20];
lean_object* v_inst_3446_ = _args[21];
lean_object* v___x_3447_ = _args[22];
lean_object* v___x_3448_ = _args[23];
lean_object* v_liftWith_3449_ = _args[24];
lean_object* v_restoreM_3450_ = _args[25];
lean_object* v_matcherName_3451_ = _args[26];
lean_object* v_origAltTypes_3452_ = _args[27];
_start:
{
uint8_t v___x_14321__boxed_3453_; lean_object* v_res_3454_; 
v___x_14321__boxed_3453_ = lean_unbox(v___x_3448_);
v_res_3454_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__51(v___x_3425_, v_params_x27_3426_, v_fst_3427_, v_discrs_x27_3428_, v_fst_3429_, v_numParams_3430_, v_numDiscrs_3431_, v_altInfos_3432_, v_uElimPos_x3f_3433_, v_snd_3434_, v_overlaps_3435_, v_matcherLevels_3436_, v_toPure_3437_, v_onRemaining_3438_, v_remaining_3439_, v_toBind_3440_, v_alts_3441_, v___x_3442_, v___x_3443_, v_remaining_x27_3444_, v___f_3445_, v_inst_3446_, v___x_3447_, v___x_14321__boxed_3453_, v_liftWith_3449_, v_restoreM_3450_, v_matcherName_3451_, v_origAltTypes_3452_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52(lean_object* v_alts_3455_, lean_object* v_toPure_3456_, lean_object* v_toBind_3457_, lean_object* v___f_3458_, lean_object* v___x_3459_, lean_object* v___x_3460_, lean_object* v_inst_3461_, lean_object* v___x_3462_, lean_object* v_toMonadExceptOf_3463_, uint8_t v___x_3464_, uint8_t v_useSplitter_3465_, lean_object* v_onAlt_3466_, lean_object* v___f_3467_, lean_object* v_fst_3468_, lean_object* v_inst_3469_, lean_object* v_inst_3470_, lean_object* v_numDiscrEqs_3471_, lean_object* v___x_3472_, lean_object* v_params_x27_3473_, lean_object* v_fst_3474_, lean_object* v_discrs_x27_3475_, lean_object* v_fst_3476_, lean_object* v_numParams_3477_, lean_object* v_numDiscrs_3478_, lean_object* v_altInfos_3479_, lean_object* v_uElimPos_x3f_3480_, lean_object* v_snd_3481_, lean_object* v_overlaps_3482_, lean_object* v_matcherLevels_3483_, lean_object* v_onRemaining_3484_, lean_object* v_remaining_3485_, lean_object* v_remaining_x27_3486_, lean_object* v___x_3487_, uint8_t v___x_3488_, lean_object* v_liftWith_3489_, lean_object* v_restoreM_3490_, lean_object* v_matcherName_3491_, lean_object* v_aux1_3492_, lean_object* v_____r_3493_){
_start:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___f_3497_; lean_object* v___x_3498_; lean_object* v___f_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; 
v___x_3494_ = lean_array_get_size(v_alts_3455_);
v___x_3495_ = lean_box(v___x_3464_);
v___x_3496_ = lean_box(v_useSplitter_3465_);
lean_inc_n(v_inst_3461_, 2);
lean_inc(v___x_3459_);
lean_inc_n(v_toBind_3457_, 2);
lean_inc(v_toPure_3456_);
v___f_3497_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed), 21, 17);
lean_closure_set(v___f_3497_, 0, v___x_3494_);
lean_closure_set(v___f_3497_, 1, v_toPure_3456_);
lean_closure_set(v___f_3497_, 2, v_toBind_3457_);
lean_closure_set(v___f_3497_, 3, v___f_3458_);
lean_closure_set(v___f_3497_, 4, v___x_3459_);
lean_closure_set(v___f_3497_, 5, v___x_3460_);
lean_closure_set(v___f_3497_, 6, v_inst_3461_);
lean_closure_set(v___f_3497_, 7, v___x_3462_);
lean_closure_set(v___f_3497_, 8, v_toMonadExceptOf_3463_);
lean_closure_set(v___f_3497_, 9, v___x_3495_);
lean_closure_set(v___f_3497_, 10, v___x_3496_);
lean_closure_set(v___f_3497_, 11, v_onAlt_3466_);
lean_closure_set(v___f_3497_, 12, v___f_3467_);
lean_closure_set(v___f_3497_, 13, v_fst_3468_);
lean_closure_set(v___f_3497_, 14, v_inst_3469_);
lean_closure_set(v___f_3497_, 15, v_inst_3470_);
lean_closure_set(v___f_3497_, 16, v_numDiscrEqs_3471_);
v___x_3498_ = lean_box(v___x_3488_);
v___f_3499_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed), 28, 27);
lean_closure_set(v___f_3499_, 0, v___x_3472_);
lean_closure_set(v___f_3499_, 1, v_params_x27_3473_);
lean_closure_set(v___f_3499_, 2, v_fst_3474_);
lean_closure_set(v___f_3499_, 3, v_discrs_x27_3475_);
lean_closure_set(v___f_3499_, 4, v_fst_3476_);
lean_closure_set(v___f_3499_, 5, v_numParams_3477_);
lean_closure_set(v___f_3499_, 6, v_numDiscrs_3478_);
lean_closure_set(v___f_3499_, 7, v_altInfos_3479_);
lean_closure_set(v___f_3499_, 8, v_uElimPos_x3f_3480_);
lean_closure_set(v___f_3499_, 9, v_snd_3481_);
lean_closure_set(v___f_3499_, 10, v_overlaps_3482_);
lean_closure_set(v___f_3499_, 11, v_matcherLevels_3483_);
lean_closure_set(v___f_3499_, 12, v_toPure_3456_);
lean_closure_set(v___f_3499_, 13, v_onRemaining_3484_);
lean_closure_set(v___f_3499_, 14, v_remaining_3485_);
lean_closure_set(v___f_3499_, 15, v_toBind_3457_);
lean_closure_set(v___f_3499_, 16, v_alts_3455_);
lean_closure_set(v___f_3499_, 17, v___x_3459_);
lean_closure_set(v___f_3499_, 18, v___x_3494_);
lean_closure_set(v___f_3499_, 19, v_remaining_x27_3486_);
lean_closure_set(v___f_3499_, 20, v___f_3497_);
lean_closure_set(v___f_3499_, 21, v_inst_3461_);
lean_closure_set(v___f_3499_, 22, v___x_3487_);
lean_closure_set(v___f_3499_, 23, v___x_3498_);
lean_closure_set(v___f_3499_, 24, v_liftWith_3489_);
lean_closure_set(v___f_3499_, 25, v_restoreM_3490_);
lean_closure_set(v___f_3499_, 26, v_matcherName_3491_);
v___x_3500_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_3500_, 0, v___x_3494_);
lean_closure_set(v___x_3500_, 1, v_aux1_3492_);
v___x_3501_ = lean_apply_2(v_inst_3461_, lean_box(0), v___x_3500_);
v___x_3502_ = lean_apply_4(v_toBind_3457_, lean_box(0), lean_box(0), v___x_3501_, v___f_3499_);
return v___x_3502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed(lean_object** _args){
lean_object* v_alts_3503_ = _args[0];
lean_object* v_toPure_3504_ = _args[1];
lean_object* v_toBind_3505_ = _args[2];
lean_object* v___f_3506_ = _args[3];
lean_object* v___x_3507_ = _args[4];
lean_object* v___x_3508_ = _args[5];
lean_object* v_inst_3509_ = _args[6];
lean_object* v___x_3510_ = _args[7];
lean_object* v_toMonadExceptOf_3511_ = _args[8];
lean_object* v___x_3512_ = _args[9];
lean_object* v_useSplitter_3513_ = _args[10];
lean_object* v_onAlt_3514_ = _args[11];
lean_object* v___f_3515_ = _args[12];
lean_object* v_fst_3516_ = _args[13];
lean_object* v_inst_3517_ = _args[14];
lean_object* v_inst_3518_ = _args[15];
lean_object* v_numDiscrEqs_3519_ = _args[16];
lean_object* v___x_3520_ = _args[17];
lean_object* v_params_x27_3521_ = _args[18];
lean_object* v_fst_3522_ = _args[19];
lean_object* v_discrs_x27_3523_ = _args[20];
lean_object* v_fst_3524_ = _args[21];
lean_object* v_numParams_3525_ = _args[22];
lean_object* v_numDiscrs_3526_ = _args[23];
lean_object* v_altInfos_3527_ = _args[24];
lean_object* v_uElimPos_x3f_3528_ = _args[25];
lean_object* v_snd_3529_ = _args[26];
lean_object* v_overlaps_3530_ = _args[27];
lean_object* v_matcherLevels_3531_ = _args[28];
lean_object* v_onRemaining_3532_ = _args[29];
lean_object* v_remaining_3533_ = _args[30];
lean_object* v_remaining_x27_3534_ = _args[31];
lean_object* v___x_3535_ = _args[32];
lean_object* v___x_3536_ = _args[33];
lean_object* v_liftWith_3537_ = _args[34];
lean_object* v_restoreM_3538_ = _args[35];
lean_object* v_matcherName_3539_ = _args[36];
lean_object* v_aux1_3540_ = _args[37];
lean_object* v_____r_3541_ = _args[38];
_start:
{
uint8_t v___x_14355__boxed_3542_; uint8_t v_useSplitter_boxed_3543_; uint8_t v___x_14363__boxed_3544_; lean_object* v_res_3545_; 
v___x_14355__boxed_3542_ = lean_unbox(v___x_3512_);
v_useSplitter_boxed_3543_ = lean_unbox(v_useSplitter_3513_);
v___x_14363__boxed_3544_ = lean_unbox(v___x_3536_);
v_res_3545_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__52(v_alts_3503_, v_toPure_3504_, v_toBind_3505_, v___f_3506_, v___x_3507_, v___x_3508_, v_inst_3509_, v___x_3510_, v_toMonadExceptOf_3511_, v___x_14355__boxed_3542_, v_useSplitter_boxed_3543_, v_onAlt_3514_, v___f_3515_, v_fst_3516_, v_inst_3517_, v_inst_3518_, v_numDiscrEqs_3519_, v___x_3520_, v_params_x27_3521_, v_fst_3522_, v_discrs_x27_3523_, v_fst_3524_, v_numParams_3525_, v_numDiscrs_3526_, v_altInfos_3527_, v_uElimPos_x3f_3528_, v_snd_3529_, v_overlaps_3530_, v_matcherLevels_3531_, v_onRemaining_3532_, v_remaining_3533_, v_remaining_x27_3534_, v___x_3535_, v___x_14363__boxed_3544_, v_liftWith_3537_, v_restoreM_3538_, v_matcherName_3539_, v_aux1_3540_, v_____r_3541_);
return v_res_3545_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1(void){
_start:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3547_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0));
v___x_3548_ = l_Lean_stringToMessageData(v___x_3547_);
return v___x_3548_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3(void){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3550_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2));
v___x_3551_ = l_Lean_stringToMessageData(v___x_3550_);
return v___x_3551_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5(void){
_start:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4));
v___x_3554_ = l_Lean_stringToMessageData(v___x_3553_);
return v___x_3554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55(lean_object* v_numParams_3555_, lean_object* v_numDiscrs_3556_, lean_object* v_altInfos_3557_, lean_object* v_uElimPos_x3f_3558_, lean_object* v_snd_3559_, lean_object* v_overlaps_3560_, lean_object* v_matcherName_3561_, lean_object* v_matcherLevels_3562_, lean_object* v_params_x27_3563_, lean_object* v_fst_3564_, lean_object* v_discrs_x27_3565_, lean_object* v_toPure_3566_, lean_object* v_onRemaining_3567_, lean_object* v_remaining_3568_, lean_object* v_toBind_3569_, lean_object* v_inst_3570_, lean_object* v_alts_3571_, lean_object* v___f_3572_, uint8_t v___x_3573_, lean_object* v_inst_3574_, lean_object* v_remaining_x27_3575_, lean_object* v_onAlt_3576_, lean_object* v_inst_3577_, lean_object* v___f_3578_, lean_object* v_matcherApp_3579_, lean_object* v___x_3580_, uint8_t v_useSplitter_3581_, uint8_t v_isCasesOn_3582_, lean_object* v___f_3583_, lean_object* v___x_3584_, lean_object* v___x_3585_, lean_object* v_toMonadExceptOf_3586_, lean_object* v___f_3587_, lean_object* v_numDiscrEqs_3588_, lean_object* v_____s_3589_){
_start:
{
lean_object* v_snd_3590_; lean_object* v_fst_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3657_; 
v_snd_3590_ = lean_ctor_get(v_____s_3589_, 1);
v_fst_3591_ = lean_ctor_get(v_____s_3589_, 0);
v_isSharedCheck_3657_ = !lean_is_exclusive(v_____s_3589_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3593_ = v_____s_3589_;
v_isShared_3594_ = v_isSharedCheck_3657_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_snd_3590_);
lean_inc(v_fst_3591_);
lean_dec(v_____s_3589_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3657_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v_fst_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3655_; 
v_fst_3595_ = lean_ctor_get(v_snd_3590_, 0);
v_isSharedCheck_3655_ = !lean_is_exclusive(v_snd_3590_);
if (v_isSharedCheck_3655_ == 0)
{
lean_object* v_unused_3656_; 
v_unused_3656_ = lean_ctor_get(v_snd_3590_, 1);
lean_dec(v_unused_3656_);
v___x_3597_ = v_snd_3590_;
v_isShared_3598_ = v_isSharedCheck_3655_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_fst_3595_);
lean_dec(v_snd_3590_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3655_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___f_3599_; 
lean_inc(v_toBind_3569_);
lean_inc_ref(v_remaining_3568_);
lean_inc(v_onRemaining_3567_);
lean_inc(v_toPure_3566_);
lean_inc_ref(v_discrs_x27_3565_);
lean_inc_ref(v_fst_3564_);
lean_inc_ref(v_params_x27_3563_);
lean_inc_ref(v_matcherLevels_3562_);
lean_inc(v_matcherName_3561_);
lean_inc_ref(v_overlaps_3560_);
lean_inc_ref(v_snd_3559_);
lean_inc(v_uElimPos_x3f_3558_);
lean_inc_ref(v_altInfos_3557_);
lean_inc(v_numDiscrs_3556_);
lean_inc(v_numParams_3555_);
lean_inc(v_fst_3591_);
v___f_3599_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed), 17, 16);
lean_closure_set(v___f_3599_, 0, v_fst_3591_);
lean_closure_set(v___f_3599_, 1, v_numParams_3555_);
lean_closure_set(v___f_3599_, 2, v_numDiscrs_3556_);
lean_closure_set(v___f_3599_, 3, v_altInfos_3557_);
lean_closure_set(v___f_3599_, 4, v_uElimPos_x3f_3558_);
lean_closure_set(v___f_3599_, 5, v_snd_3559_);
lean_closure_set(v___f_3599_, 6, v_overlaps_3560_);
lean_closure_set(v___f_3599_, 7, v_matcherName_3561_);
lean_closure_set(v___f_3599_, 8, v_matcherLevels_3562_);
lean_closure_set(v___f_3599_, 9, v_params_x27_3563_);
lean_closure_set(v___f_3599_, 10, v_fst_3564_);
lean_closure_set(v___f_3599_, 11, v_discrs_x27_3565_);
lean_closure_set(v___f_3599_, 12, v_toPure_3566_);
lean_closure_set(v___f_3599_, 13, v_onRemaining_3567_);
lean_closure_set(v___f_3599_, 14, v_remaining_3568_);
lean_closure_set(v___f_3599_, 15, v_toBind_3569_);
if (v_useSplitter_3581_ == 0)
{
lean_del_object(v___x_3593_);
lean_dec(v_fst_3591_);
lean_dec(v_numDiscrEqs_3588_);
lean_dec(v___f_3587_);
lean_dec_ref(v_toMonadExceptOf_3586_);
lean_dec(v___x_3585_);
lean_dec(v___x_3584_);
lean_dec(v___f_3583_);
lean_dec_ref(v_remaining_3568_);
lean_dec(v_onRemaining_3567_);
lean_dec_ref(v_overlaps_3560_);
lean_dec_ref(v_snd_3559_);
lean_dec(v_uElimPos_x3f_3558_);
lean_dec_ref(v_altInfos_3557_);
lean_dec(v_numDiscrs_3556_);
lean_dec(v_numParams_3555_);
goto v___jp_3600_;
}
else
{
if (v_isCasesOn_3582_ == 0)
{
lean_object* v_liftWith_3627_; lean_object* v_restoreM_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v_aux1_3631_; lean_object* v_aux1_3632_; lean_object* v_aux1_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3637_; 
lean_dec_ref(v___f_3599_);
lean_del_object(v___x_3597_);
lean_dec_ref(v_matcherApp_3579_);
lean_dec(v___f_3578_);
lean_dec(v___f_3572_);
v_liftWith_3627_ = lean_ctor_get(v_inst_3570_, 0);
lean_inc(v_liftWith_3627_);
v_restoreM_3628_ = lean_ctor_get(v_inst_3570_, 1);
lean_inc(v_restoreM_3628_);
lean_inc_ref(v_matcherLevels_3562_);
v___x_3629_ = lean_array_to_list(v_matcherLevels_3562_);
lean_inc(v___x_3629_);
lean_inc(v_matcherName_3561_);
v___x_3630_ = l_Lean_mkConst(v_matcherName_3561_, v___x_3629_);
v_aux1_3631_ = l_Lean_mkAppN(v___x_3630_, v_params_x27_3563_);
lean_inc_ref(v_fst_3564_);
v_aux1_3632_ = l_Lean_Expr_app___override(v_aux1_3631_, v_fst_3564_);
v_aux1_3633_ = l_Lean_mkAppN(v_aux1_3632_, v_discrs_x27_3565_);
lean_inc_ref(v_aux1_3633_);
v___x_3634_ = l_Lean_indentExpr(v_aux1_3633_);
v___x_3635_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3);
if (v_isShared_3594_ == 0)
{
lean_ctor_set_tag(v___x_3593_, 7);
lean_ctor_set(v___x_3593_, 1, v___x_3634_);
lean_ctor_set(v___x_3593_, 0, v___x_3635_);
v___x_3637_ = v___x_3593_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v___x_3635_);
lean_ctor_set(v_reuseFailAlloc_3654_, 1, v___x_3634_);
v___x_3637_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___f_3640_; uint8_t v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___f_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___f_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; 
v___x_3638_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5);
v___x_3639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3637_);
lean_ctor_set(v___x_3639_, 1, v___x_3638_);
v___f_3640_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3640_, 0, v___x_3639_);
v___x_3641_ = 0;
v___x_3642_ = lean_box(v___x_3573_);
v___x_3643_ = lean_box(v_useSplitter_3581_);
v___x_3644_ = lean_box(v___x_3641_);
lean_inc_ref(v_aux1_3633_);
lean_inc(v_restoreM_3628_);
lean_inc(v_liftWith_3627_);
lean_inc(v_inst_3574_);
lean_inc_n(v_toBind_3569_, 2);
v___f_3645_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed), 39, 38);
lean_closure_set(v___f_3645_, 0, v_alts_3571_);
lean_closure_set(v___f_3645_, 1, v_toPure_3566_);
lean_closure_set(v___f_3645_, 2, v_toBind_3569_);
lean_closure_set(v___f_3645_, 3, v___f_3583_);
lean_closure_set(v___f_3645_, 4, v___x_3580_);
lean_closure_set(v___f_3645_, 5, v___x_3584_);
lean_closure_set(v___f_3645_, 6, v_inst_3574_);
lean_closure_set(v___f_3645_, 7, v___x_3585_);
lean_closure_set(v___f_3645_, 8, v_toMonadExceptOf_3586_);
lean_closure_set(v___f_3645_, 9, v___x_3642_);
lean_closure_set(v___f_3645_, 10, v___x_3643_);
lean_closure_set(v___f_3645_, 11, v_onAlt_3576_);
lean_closure_set(v___f_3645_, 12, v___f_3587_);
lean_closure_set(v___f_3645_, 13, v_fst_3595_);
lean_closure_set(v___f_3645_, 14, v_inst_3570_);
lean_closure_set(v___f_3645_, 15, v_inst_3577_);
lean_closure_set(v___f_3645_, 16, v_numDiscrEqs_3588_);
lean_closure_set(v___f_3645_, 17, v___x_3629_);
lean_closure_set(v___f_3645_, 18, v_params_x27_3563_);
lean_closure_set(v___f_3645_, 19, v_fst_3564_);
lean_closure_set(v___f_3645_, 20, v_discrs_x27_3565_);
lean_closure_set(v___f_3645_, 21, v_fst_3591_);
lean_closure_set(v___f_3645_, 22, v_numParams_3555_);
lean_closure_set(v___f_3645_, 23, v_numDiscrs_3556_);
lean_closure_set(v___f_3645_, 24, v_altInfos_3557_);
lean_closure_set(v___f_3645_, 25, v_uElimPos_x3f_3558_);
lean_closure_set(v___f_3645_, 26, v_snd_3559_);
lean_closure_set(v___f_3645_, 27, v_overlaps_3560_);
lean_closure_set(v___f_3645_, 28, v_matcherLevels_3562_);
lean_closure_set(v___f_3645_, 29, v_onRemaining_3567_);
lean_closure_set(v___f_3645_, 30, v_remaining_3568_);
lean_closure_set(v___f_3645_, 31, v_remaining_x27_3575_);
lean_closure_set(v___f_3645_, 32, v___x_3638_);
lean_closure_set(v___f_3645_, 33, v___x_3644_);
lean_closure_set(v___f_3645_, 34, v_liftWith_3627_);
lean_closure_set(v___f_3645_, 35, v_restoreM_3628_);
lean_closure_set(v___f_3645_, 36, v_matcherName_3561_);
lean_closure_set(v___f_3645_, 37, v_aux1_3633_);
v___x_3646_ = lean_box(v___x_3641_);
v___x_3647_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3647_, 0, v_aux1_3633_);
lean_closure_set(v___x_3647_, 1, v___x_3646_);
v___x_3648_ = lean_apply_2(v_inst_3574_, lean_box(0), v___x_3647_);
v___f_3649_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3649_, 0, v___x_3648_);
lean_closure_set(v___f_3649_, 1, v___f_3640_);
v___x_3650_ = lean_apply_2(v_liftWith_3627_, lean_box(0), v___f_3649_);
v___x_3651_ = lean_apply_1(v_restoreM_3628_, lean_box(0));
v___x_3652_ = lean_apply_4(v_toBind_3569_, lean_box(0), lean_box(0), v___x_3650_, v___x_3651_);
v___x_3653_ = lean_apply_4(v_toBind_3569_, lean_box(0), lean_box(0), v___x_3652_, v___f_3645_);
return v___x_3653_;
}
}
else
{
lean_del_object(v___x_3593_);
lean_dec(v_fst_3591_);
lean_dec(v_numDiscrEqs_3588_);
lean_dec(v___f_3587_);
lean_dec_ref(v_toMonadExceptOf_3586_);
lean_dec(v___x_3585_);
lean_dec(v___x_3584_);
lean_dec(v___f_3583_);
lean_dec_ref(v_remaining_3568_);
lean_dec(v_onRemaining_3567_);
lean_dec_ref(v_overlaps_3560_);
lean_dec_ref(v_snd_3559_);
lean_dec(v_uElimPos_x3f_3558_);
lean_dec_ref(v_altInfos_3557_);
lean_dec(v_numDiscrs_3556_);
lean_dec(v_numParams_3555_);
goto v___jp_3600_;
}
}
v___jp_3600_:
{
lean_object* v_liftWith_3601_; lean_object* v_restoreM_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v_aux_3605_; lean_object* v_aux_3606_; lean_object* v_aux_3607_; lean_object* v___x_3608_; uint8_t v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___f_3612_; lean_object* v___x_3613_; lean_object* v___x_3615_; 
v_liftWith_3601_ = lean_ctor_get(v_inst_3570_, 0);
lean_inc(v_liftWith_3601_);
v_restoreM_3602_ = lean_ctor_get(v_inst_3570_, 1);
lean_inc(v_restoreM_3602_);
v___x_3603_ = lean_array_to_list(v_matcherLevels_3562_);
v___x_3604_ = l_Lean_mkConst(v_matcherName_3561_, v___x_3603_);
v_aux_3605_ = l_Lean_mkAppN(v___x_3604_, v_params_x27_3563_);
lean_dec_ref(v_params_x27_3563_);
v_aux_3606_ = l_Lean_Expr_app___override(v_aux_3605_, v_fst_3564_);
v_aux_3607_ = l_Lean_mkAppN(v_aux_3606_, v_discrs_x27_3565_);
lean_dec_ref(v_discrs_x27_3565_);
lean_inc_ref_n(v_aux_3607_, 2);
v___x_3608_ = l_Lean_indentExpr(v_aux_3607_);
v___x_3609_ = 1;
v___x_3610_ = lean_box(v___x_3573_);
v___x_3611_ = lean_box(v___x_3609_);
lean_inc(v_inst_3574_);
lean_inc(v_toBind_3569_);
v___f_3612_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed), 18, 17);
lean_closure_set(v___f_3612_, 0, v_alts_3571_);
lean_closure_set(v___f_3612_, 1, v_toPure_3566_);
lean_closure_set(v___f_3612_, 2, v_toBind_3569_);
lean_closure_set(v___f_3612_, 3, v___f_3572_);
lean_closure_set(v___f_3612_, 4, v___x_3610_);
lean_closure_set(v___f_3612_, 5, v___x_3611_);
lean_closure_set(v___f_3612_, 6, v_inst_3574_);
lean_closure_set(v___f_3612_, 7, v_remaining_x27_3575_);
lean_closure_set(v___f_3612_, 8, v_onAlt_3576_);
lean_closure_set(v___f_3612_, 9, v_inst_3570_);
lean_closure_set(v___f_3612_, 10, v_inst_3577_);
lean_closure_set(v___f_3612_, 11, v___f_3578_);
lean_closure_set(v___f_3612_, 12, v_fst_3595_);
lean_closure_set(v___f_3612_, 13, v_matcherApp_3579_);
lean_closure_set(v___f_3612_, 14, v___x_3580_);
lean_closure_set(v___f_3612_, 15, v___f_3599_);
lean_closure_set(v___f_3612_, 16, v_aux_3607_);
v___x_3613_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1);
if (v_isShared_3598_ == 0)
{
lean_ctor_set_tag(v___x_3597_, 7);
lean_ctor_set(v___x_3597_, 1, v___x_3608_);
lean_ctor_set(v___x_3597_, 0, v___x_3613_);
v___x_3615_ = v___x_3597_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v___x_3613_);
lean_ctor_set(v_reuseFailAlloc_3626_, 1, v___x_3608_);
v___x_3615_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
lean_object* v___f_3616_; uint8_t v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___f_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___f_3616_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3616_, 0, v___x_3615_);
v___x_3617_ = 0;
v___x_3618_ = lean_box(v___x_3617_);
v___x_3619_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3619_, 0, v_aux_3607_);
lean_closure_set(v___x_3619_, 1, v___x_3618_);
v___x_3620_ = lean_apply_2(v_inst_3574_, lean_box(0), v___x_3619_);
v___f_3621_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3621_, 0, v___x_3620_);
lean_closure_set(v___f_3621_, 1, v___f_3616_);
v___x_3622_ = lean_apply_2(v_liftWith_3601_, lean_box(0), v___f_3621_);
v___x_3623_ = lean_apply_1(v_restoreM_3602_, lean_box(0));
lean_inc(v_toBind_3569_);
v___x_3624_ = lean_apply_4(v_toBind_3569_, lean_box(0), lean_box(0), v___x_3622_, v___x_3623_);
v___x_3625_ = lean_apply_4(v_toBind_3569_, lean_box(0), lean_box(0), v___x_3624_, v___f_3612_);
return v___x_3625_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed(lean_object** _args){
lean_object* v_numParams_3658_ = _args[0];
lean_object* v_numDiscrs_3659_ = _args[1];
lean_object* v_altInfos_3660_ = _args[2];
lean_object* v_uElimPos_x3f_3661_ = _args[3];
lean_object* v_snd_3662_ = _args[4];
lean_object* v_overlaps_3663_ = _args[5];
lean_object* v_matcherName_3664_ = _args[6];
lean_object* v_matcherLevels_3665_ = _args[7];
lean_object* v_params_x27_3666_ = _args[8];
lean_object* v_fst_3667_ = _args[9];
lean_object* v_discrs_x27_3668_ = _args[10];
lean_object* v_toPure_3669_ = _args[11];
lean_object* v_onRemaining_3670_ = _args[12];
lean_object* v_remaining_3671_ = _args[13];
lean_object* v_toBind_3672_ = _args[14];
lean_object* v_inst_3673_ = _args[15];
lean_object* v_alts_3674_ = _args[16];
lean_object* v___f_3675_ = _args[17];
lean_object* v___x_3676_ = _args[18];
lean_object* v_inst_3677_ = _args[19];
lean_object* v_remaining_x27_3678_ = _args[20];
lean_object* v_onAlt_3679_ = _args[21];
lean_object* v_inst_3680_ = _args[22];
lean_object* v___f_3681_ = _args[23];
lean_object* v_matcherApp_3682_ = _args[24];
lean_object* v___x_3683_ = _args[25];
lean_object* v_useSplitter_3684_ = _args[26];
lean_object* v_isCasesOn_3685_ = _args[27];
lean_object* v___f_3686_ = _args[28];
lean_object* v___x_3687_ = _args[29];
lean_object* v___x_3688_ = _args[30];
lean_object* v_toMonadExceptOf_3689_ = _args[31];
lean_object* v___f_3690_ = _args[32];
lean_object* v_numDiscrEqs_3691_ = _args[33];
lean_object* v_____s_3692_ = _args[34];
_start:
{
uint8_t v___x_14435__boxed_3693_; uint8_t v_useSplitter_boxed_3694_; uint8_t v_isCasesOn_boxed_3695_; lean_object* v_res_3696_; 
v___x_14435__boxed_3693_ = lean_unbox(v___x_3676_);
v_useSplitter_boxed_3694_ = lean_unbox(v_useSplitter_3684_);
v_isCasesOn_boxed_3695_ = lean_unbox(v_isCasesOn_3685_);
v_res_3696_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__55(v_numParams_3658_, v_numDiscrs_3659_, v_altInfos_3660_, v_uElimPos_x3f_3661_, v_snd_3662_, v_overlaps_3663_, v_matcherName_3664_, v_matcherLevels_3665_, v_params_x27_3666_, v_fst_3667_, v_discrs_x27_3668_, v_toPure_3669_, v_onRemaining_3670_, v_remaining_3671_, v_toBind_3672_, v_inst_3673_, v_alts_3674_, v___f_3675_, v___x_14435__boxed_3693_, v_inst_3677_, v_remaining_x27_3678_, v_onAlt_3679_, v_inst_3680_, v___f_3681_, v_matcherApp_3682_, v___x_3683_, v_useSplitter_boxed_3694_, v_isCasesOn_boxed_3695_, v___f_3686_, v___x_3687_, v___x_3688_, v_toMonadExceptOf_3689_, v___f_3690_, v_numDiscrEqs_3691_, v_____s_3692_);
return v_res_3696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54(lean_object* v_numParams_3697_, lean_object* v_numDiscrs_3698_, lean_object* v_altInfos_3699_, lean_object* v_uElimPos_x3f_3700_, lean_object* v_snd_3701_, lean_object* v_overlaps_3702_, lean_object* v_matcherName_3703_, lean_object* v_params_x27_3704_, lean_object* v_fst_3705_, lean_object* v_discrs_x27_3706_, lean_object* v_toPure_3707_, lean_object* v_onRemaining_3708_, lean_object* v_remaining_3709_, lean_object* v_toBind_3710_, lean_object* v_inst_3711_, lean_object* v_alts_3712_, lean_object* v___f_3713_, uint8_t v___x_3714_, lean_object* v_inst_3715_, lean_object* v_onAlt_3716_, lean_object* v_inst_3717_, lean_object* v___f_3718_, lean_object* v_matcherApp_3719_, uint8_t v_useSplitter_3720_, uint8_t v_isCasesOn_3721_, lean_object* v___f_3722_, lean_object* v___x_3723_, lean_object* v___x_3724_, lean_object* v_toMonadExceptOf_3725_, lean_object* v___f_3726_, lean_object* v_numDiscrEqs_3727_, lean_object* v_fst_3728_, lean_object* v___f_3729_, lean_object* v_matcherLevels_3730_){
_start:
{
lean_object* v___x_3731_; lean_object* v_remaining_x27_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___f_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; size_t v_sz_3743_; size_t v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3731_ = lean_unsigned_to_nat(0u);
v_remaining_x27_3732_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_3733_ = lean_box(v___x_3714_);
v___x_3734_ = lean_box(v_useSplitter_3720_);
v___x_3735_ = lean_box(v_isCasesOn_3721_);
lean_inc_ref(v_inst_3717_);
lean_inc(v_toBind_3710_);
lean_inc_ref(v_discrs_x27_3706_);
v___f_3736_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed), 35, 34);
lean_closure_set(v___f_3736_, 0, v_numParams_3697_);
lean_closure_set(v___f_3736_, 1, v_numDiscrs_3698_);
lean_closure_set(v___f_3736_, 2, v_altInfos_3699_);
lean_closure_set(v___f_3736_, 3, v_uElimPos_x3f_3700_);
lean_closure_set(v___f_3736_, 4, v_snd_3701_);
lean_closure_set(v___f_3736_, 5, v_overlaps_3702_);
lean_closure_set(v___f_3736_, 6, v_matcherName_3703_);
lean_closure_set(v___f_3736_, 7, v_matcherLevels_3730_);
lean_closure_set(v___f_3736_, 8, v_params_x27_3704_);
lean_closure_set(v___f_3736_, 9, v_fst_3705_);
lean_closure_set(v___f_3736_, 10, v_discrs_x27_3706_);
lean_closure_set(v___f_3736_, 11, v_toPure_3707_);
lean_closure_set(v___f_3736_, 12, v_onRemaining_3708_);
lean_closure_set(v___f_3736_, 13, v_remaining_3709_);
lean_closure_set(v___f_3736_, 14, v_toBind_3710_);
lean_closure_set(v___f_3736_, 15, v_inst_3711_);
lean_closure_set(v___f_3736_, 16, v_alts_3712_);
lean_closure_set(v___f_3736_, 17, v___f_3713_);
lean_closure_set(v___f_3736_, 18, v___x_3733_);
lean_closure_set(v___f_3736_, 19, v_inst_3715_);
lean_closure_set(v___f_3736_, 20, v_remaining_x27_3732_);
lean_closure_set(v___f_3736_, 21, v_onAlt_3716_);
lean_closure_set(v___f_3736_, 22, v_inst_3717_);
lean_closure_set(v___f_3736_, 23, v___f_3718_);
lean_closure_set(v___f_3736_, 24, v_matcherApp_3719_);
lean_closure_set(v___f_3736_, 25, v___x_3731_);
lean_closure_set(v___f_3736_, 26, v___x_3734_);
lean_closure_set(v___f_3736_, 27, v___x_3735_);
lean_closure_set(v___f_3736_, 28, v___f_3722_);
lean_closure_set(v___f_3736_, 29, v___x_3723_);
lean_closure_set(v___f_3736_, 30, v___x_3724_);
lean_closure_set(v___f_3736_, 31, v_toMonadExceptOf_3725_);
lean_closure_set(v___f_3736_, 32, v___f_3726_);
lean_closure_set(v___f_3736_, 33, v_numDiscrEqs_3727_);
v___x_3737_ = l_Array_reverse___redArg(v_fst_3728_);
v___x_3738_ = lean_array_get_size(v___x_3737_);
v___x_3739_ = l_Array_toSubarray___redArg(v___x_3737_, v___x_3731_, v___x_3738_);
v___x_3740_ = l_Array_reverse___redArg(v_discrs_x27_3706_);
v___x_3741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3741_, 0, v___x_3731_);
lean_ctor_set(v___x_3741_, 1, v___x_3739_);
v___x_3742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3742_, 0, v_remaining_x27_3732_);
lean_ctor_set(v___x_3742_, 1, v___x_3741_);
v_sz_3743_ = lean_array_size(v___x_3740_);
v___x_3744_ = ((size_t)0ULL);
v___x_3745_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3717_, v___x_3740_, v___f_3729_, v_sz_3743_, v___x_3744_, v___x_3742_);
v___x_3746_ = lean_apply_4(v_toBind_3710_, lean_box(0), lean_box(0), v___x_3745_, v___f_3736_);
return v___x_3746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed(lean_object** _args){
lean_object* v_numParams_3747_ = _args[0];
lean_object* v_numDiscrs_3748_ = _args[1];
lean_object* v_altInfos_3749_ = _args[2];
lean_object* v_uElimPos_x3f_3750_ = _args[3];
lean_object* v_snd_3751_ = _args[4];
lean_object* v_overlaps_3752_ = _args[5];
lean_object* v_matcherName_3753_ = _args[6];
lean_object* v_params_x27_3754_ = _args[7];
lean_object* v_fst_3755_ = _args[8];
lean_object* v_discrs_x27_3756_ = _args[9];
lean_object* v_toPure_3757_ = _args[10];
lean_object* v_onRemaining_3758_ = _args[11];
lean_object* v_remaining_3759_ = _args[12];
lean_object* v_toBind_3760_ = _args[13];
lean_object* v_inst_3761_ = _args[14];
lean_object* v_alts_3762_ = _args[15];
lean_object* v___f_3763_ = _args[16];
lean_object* v___x_3764_ = _args[17];
lean_object* v_inst_3765_ = _args[18];
lean_object* v_onAlt_3766_ = _args[19];
lean_object* v_inst_3767_ = _args[20];
lean_object* v___f_3768_ = _args[21];
lean_object* v_matcherApp_3769_ = _args[22];
lean_object* v_useSplitter_3770_ = _args[23];
lean_object* v_isCasesOn_3771_ = _args[24];
lean_object* v___f_3772_ = _args[25];
lean_object* v___x_3773_ = _args[26];
lean_object* v___x_3774_ = _args[27];
lean_object* v_toMonadExceptOf_3775_ = _args[28];
lean_object* v___f_3776_ = _args[29];
lean_object* v_numDiscrEqs_3777_ = _args[30];
lean_object* v_fst_3778_ = _args[31];
lean_object* v___f_3779_ = _args[32];
lean_object* v_matcherLevels_3780_ = _args[33];
_start:
{
uint8_t v___x_14597__boxed_3781_; uint8_t v_useSplitter_boxed_3782_; uint8_t v_isCasesOn_boxed_3783_; lean_object* v_res_3784_; 
v___x_14597__boxed_3781_ = lean_unbox(v___x_3764_);
v_useSplitter_boxed_3782_ = lean_unbox(v_useSplitter_3770_);
v_isCasesOn_boxed_3783_ = lean_unbox(v_isCasesOn_3771_);
v_res_3784_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__54(v_numParams_3747_, v_numDiscrs_3748_, v_altInfos_3749_, v_uElimPos_x3f_3750_, v_snd_3751_, v_overlaps_3752_, v_matcherName_3753_, v_params_x27_3754_, v_fst_3755_, v_discrs_x27_3756_, v_toPure_3757_, v_onRemaining_3758_, v_remaining_3759_, v_toBind_3760_, v_inst_3761_, v_alts_3762_, v___f_3763_, v___x_14597__boxed_3781_, v_inst_3765_, v_onAlt_3766_, v_inst_3767_, v___f_3768_, v_matcherApp_3769_, v_useSplitter_boxed_3782_, v_isCasesOn_boxed_3783_, v___f_3772_, v___x_3773_, v___x_3774_, v_toMonadExceptOf_3775_, v___f_3776_, v_numDiscrEqs_3777_, v_fst_3778_, v___f_3779_, v_matcherLevels_3780_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56(lean_object* v___f_3785_, lean_object* v_matcherLevels_3786_){
_start:
{
lean_object* v___x_3787_; 
v___x_3787_ = lean_apply_1(v___f_3785_, v_matcherLevels_3786_);
return v___x_3787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58(lean_object* v_toMatcherInfo_3788_, lean_object* v_matcherName_3789_, lean_object* v_params_x27_3790_, lean_object* v_discrs_x27_3791_, lean_object* v_toPure_3792_, lean_object* v_onRemaining_3793_, lean_object* v_remaining_3794_, lean_object* v_toBind_3795_, lean_object* v_inst_3796_, lean_object* v_alts_3797_, lean_object* v___f_3798_, uint8_t v___x_3799_, lean_object* v_inst_3800_, lean_object* v_onAlt_3801_, lean_object* v_inst_3802_, lean_object* v___f_3803_, lean_object* v_matcherApp_3804_, uint8_t v_useSplitter_3805_, uint8_t v_isCasesOn_3806_, lean_object* v___f_3807_, lean_object* v___x_3808_, lean_object* v___x_3809_, lean_object* v_toMonadExceptOf_3810_, lean_object* v___f_3811_, lean_object* v_numDiscrEqs_3812_, lean_object* v___f_3813_, lean_object* v_matcherLevels_3814_, lean_object* v_____x_3815_){
_start:
{
lean_object* v_snd_3816_; lean_object* v_snd_3817_; lean_object* v_fst_3818_; lean_object* v_fst_3819_; lean_object* v_fst_3820_; lean_object* v_snd_3821_; lean_object* v_numParams_3822_; lean_object* v_numDiscrs_3823_; lean_object* v_altInfos_3824_; lean_object* v_uElimPos_x3f_3825_; lean_object* v_overlaps_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___f_3830_; 
v_snd_3816_ = lean_ctor_get(v_____x_3815_, 1);
lean_inc(v_snd_3816_);
v_snd_3817_ = lean_ctor_get(v_snd_3816_, 1);
lean_inc(v_snd_3817_);
v_fst_3818_ = lean_ctor_get(v_____x_3815_, 0);
lean_inc(v_fst_3818_);
lean_dec_ref(v_____x_3815_);
v_fst_3819_ = lean_ctor_get(v_snd_3816_, 0);
lean_inc(v_fst_3819_);
lean_dec(v_snd_3816_);
v_fst_3820_ = lean_ctor_get(v_snd_3817_, 0);
lean_inc(v_fst_3820_);
v_snd_3821_ = lean_ctor_get(v_snd_3817_, 1);
lean_inc(v_snd_3821_);
lean_dec(v_snd_3817_);
v_numParams_3822_ = lean_ctor_get(v_toMatcherInfo_3788_, 0);
lean_inc(v_numParams_3822_);
v_numDiscrs_3823_ = lean_ctor_get(v_toMatcherInfo_3788_, 1);
lean_inc(v_numDiscrs_3823_);
v_altInfos_3824_ = lean_ctor_get(v_toMatcherInfo_3788_, 2);
lean_inc_ref(v_altInfos_3824_);
v_uElimPos_x3f_3825_ = lean_ctor_get(v_toMatcherInfo_3788_, 3);
lean_inc_n(v_uElimPos_x3f_3825_, 2);
v_overlaps_3826_ = lean_ctor_get(v_toMatcherInfo_3788_, 5);
lean_inc_ref(v_overlaps_3826_);
lean_dec_ref(v_toMatcherInfo_3788_);
v___x_3827_ = lean_box(v___x_3799_);
v___x_3828_ = lean_box(v_useSplitter_3805_);
v___x_3829_ = lean_box(v_isCasesOn_3806_);
lean_inc(v_toBind_3795_);
lean_inc(v_toPure_3792_);
v___f_3830_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed), 34, 33);
lean_closure_set(v___f_3830_, 0, v_numParams_3822_);
lean_closure_set(v___f_3830_, 1, v_numDiscrs_3823_);
lean_closure_set(v___f_3830_, 2, v_altInfos_3824_);
lean_closure_set(v___f_3830_, 3, v_uElimPos_x3f_3825_);
lean_closure_set(v___f_3830_, 4, v_snd_3821_);
lean_closure_set(v___f_3830_, 5, v_overlaps_3826_);
lean_closure_set(v___f_3830_, 6, v_matcherName_3789_);
lean_closure_set(v___f_3830_, 7, v_params_x27_3790_);
lean_closure_set(v___f_3830_, 8, v_fst_3818_);
lean_closure_set(v___f_3830_, 9, v_discrs_x27_3791_);
lean_closure_set(v___f_3830_, 10, v_toPure_3792_);
lean_closure_set(v___f_3830_, 11, v_onRemaining_3793_);
lean_closure_set(v___f_3830_, 12, v_remaining_3794_);
lean_closure_set(v___f_3830_, 13, v_toBind_3795_);
lean_closure_set(v___f_3830_, 14, v_inst_3796_);
lean_closure_set(v___f_3830_, 15, v_alts_3797_);
lean_closure_set(v___f_3830_, 16, v___f_3798_);
lean_closure_set(v___f_3830_, 17, v___x_3827_);
lean_closure_set(v___f_3830_, 18, v_inst_3800_);
lean_closure_set(v___f_3830_, 19, v_onAlt_3801_);
lean_closure_set(v___f_3830_, 20, v_inst_3802_);
lean_closure_set(v___f_3830_, 21, v___f_3803_);
lean_closure_set(v___f_3830_, 22, v_matcherApp_3804_);
lean_closure_set(v___f_3830_, 23, v___x_3828_);
lean_closure_set(v___f_3830_, 24, v___x_3829_);
lean_closure_set(v___f_3830_, 25, v___f_3807_);
lean_closure_set(v___f_3830_, 26, v___x_3808_);
lean_closure_set(v___f_3830_, 27, v___x_3809_);
lean_closure_set(v___f_3830_, 28, v_toMonadExceptOf_3810_);
lean_closure_set(v___f_3830_, 29, v___f_3811_);
lean_closure_set(v___f_3830_, 30, v_numDiscrEqs_3812_);
lean_closure_set(v___f_3830_, 31, v_fst_3820_);
lean_closure_set(v___f_3830_, 32, v___f_3813_);
if (lean_obj_tag(v_uElimPos_x3f_3825_) == 0)
{
lean_object* v___f_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; 
lean_dec(v_fst_3819_);
v___f_3831_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__56), 2, 1);
lean_closure_set(v___f_3831_, 0, v___f_3830_);
v___x_3832_ = lean_apply_2(v_toPure_3792_, lean_box(0), v_matcherLevels_3814_);
v___x_3833_ = lean_apply_4(v_toBind_3795_, lean_box(0), lean_box(0), v___x_3832_, v___f_3831_);
return v___x_3833_;
}
else
{
lean_object* v_val_3834_; lean_object* v___f_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
v_val_3834_ = lean_ctor_get(v_uElimPos_x3f_3825_, 0);
lean_inc(v_val_3834_);
lean_dec_ref_known(v_uElimPos_x3f_3825_, 1);
v___f_3835_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__56), 2, 1);
lean_closure_set(v___f_3835_, 0, v___f_3830_);
v___x_3836_ = lean_array_set(v_matcherLevels_3814_, v_val_3834_, v_fst_3819_);
lean_dec(v_val_3834_);
v___x_3837_ = lean_apply_2(v_toPure_3792_, lean_box(0), v___x_3836_);
v___x_3838_ = lean_apply_4(v_toBind_3795_, lean_box(0), lean_box(0), v___x_3837_, v___f_3835_);
return v___x_3838_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed(lean_object** _args){
lean_object* v_toMatcherInfo_3839_ = _args[0];
lean_object* v_matcherName_3840_ = _args[1];
lean_object* v_params_x27_3841_ = _args[2];
lean_object* v_discrs_x27_3842_ = _args[3];
lean_object* v_toPure_3843_ = _args[4];
lean_object* v_onRemaining_3844_ = _args[5];
lean_object* v_remaining_3845_ = _args[6];
lean_object* v_toBind_3846_ = _args[7];
lean_object* v_inst_3847_ = _args[8];
lean_object* v_alts_3848_ = _args[9];
lean_object* v___f_3849_ = _args[10];
lean_object* v___x_3850_ = _args[11];
lean_object* v_inst_3851_ = _args[12];
lean_object* v_onAlt_3852_ = _args[13];
lean_object* v_inst_3853_ = _args[14];
lean_object* v___f_3854_ = _args[15];
lean_object* v_matcherApp_3855_ = _args[16];
lean_object* v_useSplitter_3856_ = _args[17];
lean_object* v_isCasesOn_3857_ = _args[18];
lean_object* v___f_3858_ = _args[19];
lean_object* v___x_3859_ = _args[20];
lean_object* v___x_3860_ = _args[21];
lean_object* v_toMonadExceptOf_3861_ = _args[22];
lean_object* v___f_3862_ = _args[23];
lean_object* v_numDiscrEqs_3863_ = _args[24];
lean_object* v___f_3864_ = _args[25];
lean_object* v_matcherLevels_3865_ = _args[26];
lean_object* v_____x_3866_ = _args[27];
_start:
{
uint8_t v___x_14669__boxed_3867_; uint8_t v_useSplitter_boxed_3868_; uint8_t v_isCasesOn_boxed_3869_; lean_object* v_res_3870_; 
v___x_14669__boxed_3867_ = lean_unbox(v___x_3850_);
v_useSplitter_boxed_3868_ = lean_unbox(v_useSplitter_3856_);
v_isCasesOn_boxed_3869_ = lean_unbox(v_isCasesOn_3857_);
v_res_3870_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__58(v_toMatcherInfo_3839_, v_matcherName_3840_, v_params_x27_3841_, v_discrs_x27_3842_, v_toPure_3843_, v_onRemaining_3844_, v_remaining_3845_, v_toBind_3846_, v_inst_3847_, v_alts_3848_, v___f_3849_, v___x_14669__boxed_3867_, v_inst_3851_, v_onAlt_3852_, v_inst_3853_, v___f_3854_, v_matcherApp_3855_, v_useSplitter_boxed_3868_, v_isCasesOn_boxed_3869_, v___f_3858_, v___x_3859_, v___x_3860_, v_toMonadExceptOf_3861_, v___f_3862_, v_numDiscrEqs_3863_, v___f_3864_, v_matcherLevels_3865_, v_____x_3866_);
return v_res_3870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57(lean_object* v_toPure_3871_, lean_object* v_inst_3872_, lean_object* v_toBind_3873_, lean_object* v_toMatcherInfo_3874_, lean_object* v_inst_3875_, lean_object* v___f_3876_, lean_object* v_onMotive_3877_, lean_object* v_discrs_3878_, lean_object* v_inst_3879_, lean_object* v_matcherName_3880_, lean_object* v_params_x27_3881_, lean_object* v_onRemaining_3882_, lean_object* v_remaining_3883_, lean_object* v_inst_3884_, lean_object* v_alts_3885_, lean_object* v___f_3886_, lean_object* v_onAlt_3887_, lean_object* v___f_3888_, lean_object* v_matcherApp_3889_, uint8_t v_useSplitter_3890_, uint8_t v_isCasesOn_3891_, lean_object* v___f_3892_, lean_object* v___x_3893_, lean_object* v___x_3894_, lean_object* v_toMonadExceptOf_3895_, lean_object* v___f_3896_, lean_object* v_numDiscrEqs_3897_, lean_object* v___f_3898_, lean_object* v_matcherLevels_3899_, lean_object* v_motive_3900_, lean_object* v_discrs_x27_3901_){
_start:
{
lean_object* v___f_3902_; uint8_t v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___f_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
lean_inc_ref_n(v_inst_3875_, 2);
lean_inc_ref(v_discrs_x27_3901_);
lean_inc_ref(v_toMatcherInfo_3874_);
lean_inc_n(v_toBind_3873_, 2);
lean_inc(v_inst_3872_);
lean_inc(v_toPure_3871_);
v___f_3902_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed), 12, 10);
lean_closure_set(v___f_3902_, 0, v_toPure_3871_);
lean_closure_set(v___f_3902_, 1, v_inst_3872_);
lean_closure_set(v___f_3902_, 2, v_toBind_3873_);
lean_closure_set(v___f_3902_, 3, v_toMatcherInfo_3874_);
lean_closure_set(v___f_3902_, 4, v_discrs_x27_3901_);
lean_closure_set(v___f_3902_, 5, v_inst_3875_);
lean_closure_set(v___f_3902_, 6, v___f_3876_);
lean_closure_set(v___f_3902_, 7, v_onMotive_3877_);
lean_closure_set(v___f_3902_, 8, v_discrs_3878_);
lean_closure_set(v___f_3902_, 9, v_inst_3879_);
v___x_3903_ = 0;
v___x_3904_ = lean_box(v___x_3903_);
v___x_3905_ = lean_box(v_useSplitter_3890_);
v___x_3906_ = lean_box(v_isCasesOn_3891_);
lean_inc_ref(v_inst_3884_);
v___f_3907_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed), 28, 27);
lean_closure_set(v___f_3907_, 0, v_toMatcherInfo_3874_);
lean_closure_set(v___f_3907_, 1, v_matcherName_3880_);
lean_closure_set(v___f_3907_, 2, v_params_x27_3881_);
lean_closure_set(v___f_3907_, 3, v_discrs_x27_3901_);
lean_closure_set(v___f_3907_, 4, v_toPure_3871_);
lean_closure_set(v___f_3907_, 5, v_onRemaining_3882_);
lean_closure_set(v___f_3907_, 6, v_remaining_3883_);
lean_closure_set(v___f_3907_, 7, v_toBind_3873_);
lean_closure_set(v___f_3907_, 8, v_inst_3884_);
lean_closure_set(v___f_3907_, 9, v_alts_3885_);
lean_closure_set(v___f_3907_, 10, v___f_3886_);
lean_closure_set(v___f_3907_, 11, v___x_3904_);
lean_closure_set(v___f_3907_, 12, v_inst_3872_);
lean_closure_set(v___f_3907_, 13, v_onAlt_3887_);
lean_closure_set(v___f_3907_, 14, v_inst_3875_);
lean_closure_set(v___f_3907_, 15, v___f_3888_);
lean_closure_set(v___f_3907_, 16, v_matcherApp_3889_);
lean_closure_set(v___f_3907_, 17, v___x_3905_);
lean_closure_set(v___f_3907_, 18, v___x_3906_);
lean_closure_set(v___f_3907_, 19, v___f_3892_);
lean_closure_set(v___f_3907_, 20, v___x_3893_);
lean_closure_set(v___f_3907_, 21, v___x_3894_);
lean_closure_set(v___f_3907_, 22, v_toMonadExceptOf_3895_);
lean_closure_set(v___f_3907_, 23, v___f_3896_);
lean_closure_set(v___f_3907_, 24, v_numDiscrEqs_3897_);
lean_closure_set(v___f_3907_, 25, v___f_3898_);
lean_closure_set(v___f_3907_, 26, v_matcherLevels_3899_);
v___x_3908_ = l_Lean_Meta_lambdaTelescope___redArg(v_inst_3884_, v_inst_3875_, v_motive_3900_, v___f_3902_, v___x_3903_);
v___x_3909_ = lean_apply_4(v_toBind_3873_, lean_box(0), lean_box(0), v___x_3908_, v___f_3907_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed(lean_object** _args){
lean_object* v_toPure_3910_ = _args[0];
lean_object* v_inst_3911_ = _args[1];
lean_object* v_toBind_3912_ = _args[2];
lean_object* v_toMatcherInfo_3913_ = _args[3];
lean_object* v_inst_3914_ = _args[4];
lean_object* v___f_3915_ = _args[5];
lean_object* v_onMotive_3916_ = _args[6];
lean_object* v_discrs_3917_ = _args[7];
lean_object* v_inst_3918_ = _args[8];
lean_object* v_matcherName_3919_ = _args[9];
lean_object* v_params_x27_3920_ = _args[10];
lean_object* v_onRemaining_3921_ = _args[11];
lean_object* v_remaining_3922_ = _args[12];
lean_object* v_inst_3923_ = _args[13];
lean_object* v_alts_3924_ = _args[14];
lean_object* v___f_3925_ = _args[15];
lean_object* v_onAlt_3926_ = _args[16];
lean_object* v___f_3927_ = _args[17];
lean_object* v_matcherApp_3928_ = _args[18];
lean_object* v_useSplitter_3929_ = _args[19];
lean_object* v_isCasesOn_3930_ = _args[20];
lean_object* v___f_3931_ = _args[21];
lean_object* v___x_3932_ = _args[22];
lean_object* v___x_3933_ = _args[23];
lean_object* v_toMonadExceptOf_3934_ = _args[24];
lean_object* v___f_3935_ = _args[25];
lean_object* v_numDiscrEqs_3936_ = _args[26];
lean_object* v___f_3937_ = _args[27];
lean_object* v_matcherLevels_3938_ = _args[28];
lean_object* v_motive_3939_ = _args[29];
lean_object* v_discrs_x27_3940_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_3941_; uint8_t v_isCasesOn_boxed_3942_; lean_object* v_res_3943_; 
v_useSplitter_boxed_3941_ = lean_unbox(v_useSplitter_3929_);
v_isCasesOn_boxed_3942_ = lean_unbox(v_isCasesOn_3930_);
v_res_3943_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__57(v_toPure_3910_, v_inst_3911_, v_toBind_3912_, v_toMatcherInfo_3913_, v_inst_3914_, v___f_3915_, v_onMotive_3916_, v_discrs_3917_, v_inst_3918_, v_matcherName_3919_, v_params_x27_3920_, v_onRemaining_3921_, v_remaining_3922_, v_inst_3923_, v_alts_3924_, v___f_3925_, v_onAlt_3926_, v___f_3927_, v_matcherApp_3928_, v_useSplitter_boxed_3941_, v_isCasesOn_boxed_3942_, v___f_3931_, v___x_3932_, v___x_3933_, v_toMonadExceptOf_3934_, v___f_3935_, v_numDiscrEqs_3936_, v___f_3937_, v_matcherLevels_3938_, v_motive_3939_, v_discrs_x27_3940_);
return v_res_3943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59(lean_object* v_toPure_3944_, lean_object* v_inst_3945_, lean_object* v_toBind_3946_, lean_object* v_toMatcherInfo_3947_, lean_object* v_inst_3948_, lean_object* v___f_3949_, lean_object* v_onMotive_3950_, lean_object* v_discrs_3951_, lean_object* v_inst_3952_, lean_object* v_matcherName_3953_, lean_object* v_onRemaining_3954_, lean_object* v_remaining_3955_, lean_object* v_inst_3956_, lean_object* v_alts_3957_, lean_object* v___f_3958_, lean_object* v_onAlt_3959_, lean_object* v___f_3960_, lean_object* v_matcherApp_3961_, uint8_t v_useSplitter_3962_, uint8_t v_isCasesOn_3963_, lean_object* v___f_3964_, lean_object* v___x_3965_, lean_object* v___x_3966_, lean_object* v_toMonadExceptOf_3967_, lean_object* v___f_3968_, lean_object* v_numDiscrEqs_3969_, lean_object* v___f_3970_, lean_object* v_matcherLevels_3971_, lean_object* v_motive_3972_, lean_object* v_onParams_3973_, lean_object* v_params_x27_3974_){
_start:
{
lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___f_3977_; size_t v_sz_3978_; size_t v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v___x_3975_ = lean_box(v_useSplitter_3962_);
v___x_3976_ = lean_box(v_isCasesOn_3963_);
lean_inc_ref(v_discrs_3951_);
lean_inc_ref(v_inst_3948_);
lean_inc(v_toBind_3946_);
v___f_3977_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed), 31, 30);
lean_closure_set(v___f_3977_, 0, v_toPure_3944_);
lean_closure_set(v___f_3977_, 1, v_inst_3945_);
lean_closure_set(v___f_3977_, 2, v_toBind_3946_);
lean_closure_set(v___f_3977_, 3, v_toMatcherInfo_3947_);
lean_closure_set(v___f_3977_, 4, v_inst_3948_);
lean_closure_set(v___f_3977_, 5, v___f_3949_);
lean_closure_set(v___f_3977_, 6, v_onMotive_3950_);
lean_closure_set(v___f_3977_, 7, v_discrs_3951_);
lean_closure_set(v___f_3977_, 8, v_inst_3952_);
lean_closure_set(v___f_3977_, 9, v_matcherName_3953_);
lean_closure_set(v___f_3977_, 10, v_params_x27_3974_);
lean_closure_set(v___f_3977_, 11, v_onRemaining_3954_);
lean_closure_set(v___f_3977_, 12, v_remaining_3955_);
lean_closure_set(v___f_3977_, 13, v_inst_3956_);
lean_closure_set(v___f_3977_, 14, v_alts_3957_);
lean_closure_set(v___f_3977_, 15, v___f_3958_);
lean_closure_set(v___f_3977_, 16, v_onAlt_3959_);
lean_closure_set(v___f_3977_, 17, v___f_3960_);
lean_closure_set(v___f_3977_, 18, v_matcherApp_3961_);
lean_closure_set(v___f_3977_, 19, v___x_3975_);
lean_closure_set(v___f_3977_, 20, v___x_3976_);
lean_closure_set(v___f_3977_, 21, v___f_3964_);
lean_closure_set(v___f_3977_, 22, v___x_3965_);
lean_closure_set(v___f_3977_, 23, v___x_3966_);
lean_closure_set(v___f_3977_, 24, v_toMonadExceptOf_3967_);
lean_closure_set(v___f_3977_, 25, v___f_3968_);
lean_closure_set(v___f_3977_, 26, v_numDiscrEqs_3969_);
lean_closure_set(v___f_3977_, 27, v___f_3970_);
lean_closure_set(v___f_3977_, 28, v_matcherLevels_3971_);
lean_closure_set(v___f_3977_, 29, v_motive_3972_);
v_sz_3978_ = lean_array_size(v_discrs_3951_);
v___x_3979_ = ((size_t)0ULL);
v___x_3980_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_3948_, v_onParams_3973_, v_sz_3978_, v___x_3979_, v_discrs_3951_);
v___x_3981_ = lean_apply_4(v_toBind_3946_, lean_box(0), lean_box(0), v___x_3980_, v___f_3977_);
return v___x_3981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed(lean_object** _args){
lean_object* v_toPure_3982_ = _args[0];
lean_object* v_inst_3983_ = _args[1];
lean_object* v_toBind_3984_ = _args[2];
lean_object* v_toMatcherInfo_3985_ = _args[3];
lean_object* v_inst_3986_ = _args[4];
lean_object* v___f_3987_ = _args[5];
lean_object* v_onMotive_3988_ = _args[6];
lean_object* v_discrs_3989_ = _args[7];
lean_object* v_inst_3990_ = _args[8];
lean_object* v_matcherName_3991_ = _args[9];
lean_object* v_onRemaining_3992_ = _args[10];
lean_object* v_remaining_3993_ = _args[11];
lean_object* v_inst_3994_ = _args[12];
lean_object* v_alts_3995_ = _args[13];
lean_object* v___f_3996_ = _args[14];
lean_object* v_onAlt_3997_ = _args[15];
lean_object* v___f_3998_ = _args[16];
lean_object* v_matcherApp_3999_ = _args[17];
lean_object* v_useSplitter_4000_ = _args[18];
lean_object* v_isCasesOn_4001_ = _args[19];
lean_object* v___f_4002_ = _args[20];
lean_object* v___x_4003_ = _args[21];
lean_object* v___x_4004_ = _args[22];
lean_object* v_toMonadExceptOf_4005_ = _args[23];
lean_object* v___f_4006_ = _args[24];
lean_object* v_numDiscrEqs_4007_ = _args[25];
lean_object* v___f_4008_ = _args[26];
lean_object* v_matcherLevels_4009_ = _args[27];
lean_object* v_motive_4010_ = _args[28];
lean_object* v_onParams_4011_ = _args[29];
lean_object* v_params_x27_4012_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_4013_; uint8_t v_isCasesOn_boxed_4014_; lean_object* v_res_4015_; 
v_useSplitter_boxed_4013_ = lean_unbox(v_useSplitter_4000_);
v_isCasesOn_boxed_4014_ = lean_unbox(v_isCasesOn_4001_);
v_res_4015_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__59(v_toPure_3982_, v_inst_3983_, v_toBind_3984_, v_toMatcherInfo_3985_, v_inst_3986_, v___f_3987_, v_onMotive_3988_, v_discrs_3989_, v_inst_3990_, v_matcherName_3991_, v_onRemaining_3992_, v_remaining_3993_, v_inst_3994_, v_alts_3995_, v___f_3996_, v_onAlt_3997_, v___f_3998_, v_matcherApp_3999_, v_useSplitter_boxed_4013_, v_isCasesOn_boxed_4014_, v___f_4002_, v___x_4003_, v___x_4004_, v_toMonadExceptOf_4005_, v___f_4006_, v_numDiscrEqs_4007_, v___f_4008_, v_matcherLevels_4009_, v_motive_4010_, v_onParams_4011_, v_params_x27_4012_);
return v_res_4015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60(lean_object* v_toPure_4016_, lean_object* v_inst_4017_, lean_object* v_toBind_4018_, lean_object* v_toMatcherInfo_4019_, lean_object* v_inst_4020_, lean_object* v___f_4021_, lean_object* v_onMotive_4022_, lean_object* v_discrs_4023_, lean_object* v_inst_4024_, lean_object* v_matcherName_4025_, lean_object* v_onRemaining_4026_, lean_object* v_remaining_4027_, lean_object* v_inst_4028_, lean_object* v_alts_4029_, lean_object* v___f_4030_, lean_object* v_onAlt_4031_, lean_object* v___f_4032_, lean_object* v_matcherApp_4033_, uint8_t v_useSplitter_4034_, uint8_t v_isCasesOn_4035_, lean_object* v___f_4036_, lean_object* v___x_4037_, lean_object* v___x_4038_, lean_object* v_toMonadExceptOf_4039_, lean_object* v___f_4040_, lean_object* v___f_4041_, lean_object* v_matcherLevels_4042_, lean_object* v_motive_4043_, lean_object* v_onParams_4044_, lean_object* v_params_4045_, lean_object* v_numDiscrEqs_4046_){
_start:
{
lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___f_4049_; size_t v_sz_4050_; size_t v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4047_ = lean_box(v_useSplitter_4034_);
v___x_4048_ = lean_box(v_isCasesOn_4035_);
lean_inc(v_onParams_4044_);
lean_inc_ref(v_inst_4020_);
lean_inc(v_toBind_4018_);
v___f_4049_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed), 31, 30);
lean_closure_set(v___f_4049_, 0, v_toPure_4016_);
lean_closure_set(v___f_4049_, 1, v_inst_4017_);
lean_closure_set(v___f_4049_, 2, v_toBind_4018_);
lean_closure_set(v___f_4049_, 3, v_toMatcherInfo_4019_);
lean_closure_set(v___f_4049_, 4, v_inst_4020_);
lean_closure_set(v___f_4049_, 5, v___f_4021_);
lean_closure_set(v___f_4049_, 6, v_onMotive_4022_);
lean_closure_set(v___f_4049_, 7, v_discrs_4023_);
lean_closure_set(v___f_4049_, 8, v_inst_4024_);
lean_closure_set(v___f_4049_, 9, v_matcherName_4025_);
lean_closure_set(v___f_4049_, 10, v_onRemaining_4026_);
lean_closure_set(v___f_4049_, 11, v_remaining_4027_);
lean_closure_set(v___f_4049_, 12, v_inst_4028_);
lean_closure_set(v___f_4049_, 13, v_alts_4029_);
lean_closure_set(v___f_4049_, 14, v___f_4030_);
lean_closure_set(v___f_4049_, 15, v_onAlt_4031_);
lean_closure_set(v___f_4049_, 16, v___f_4032_);
lean_closure_set(v___f_4049_, 17, v_matcherApp_4033_);
lean_closure_set(v___f_4049_, 18, v___x_4047_);
lean_closure_set(v___f_4049_, 19, v___x_4048_);
lean_closure_set(v___f_4049_, 20, v___f_4036_);
lean_closure_set(v___f_4049_, 21, v___x_4037_);
lean_closure_set(v___f_4049_, 22, v___x_4038_);
lean_closure_set(v___f_4049_, 23, v_toMonadExceptOf_4039_);
lean_closure_set(v___f_4049_, 24, v___f_4040_);
lean_closure_set(v___f_4049_, 25, v_numDiscrEqs_4046_);
lean_closure_set(v___f_4049_, 26, v___f_4041_);
lean_closure_set(v___f_4049_, 27, v_matcherLevels_4042_);
lean_closure_set(v___f_4049_, 28, v_motive_4043_);
lean_closure_set(v___f_4049_, 29, v_onParams_4044_);
v_sz_4050_ = lean_array_size(v_params_4045_);
v___x_4051_ = ((size_t)0ULL);
v___x_4052_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_4020_, v_onParams_4044_, v_sz_4050_, v___x_4051_, v_params_4045_);
v___x_4053_ = lean_apply_4(v_toBind_4018_, lean_box(0), lean_box(0), v___x_4052_, v___f_4049_);
return v___x_4053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed(lean_object** _args){
lean_object* v_toPure_4054_ = _args[0];
lean_object* v_inst_4055_ = _args[1];
lean_object* v_toBind_4056_ = _args[2];
lean_object* v_toMatcherInfo_4057_ = _args[3];
lean_object* v_inst_4058_ = _args[4];
lean_object* v___f_4059_ = _args[5];
lean_object* v_onMotive_4060_ = _args[6];
lean_object* v_discrs_4061_ = _args[7];
lean_object* v_inst_4062_ = _args[8];
lean_object* v_matcherName_4063_ = _args[9];
lean_object* v_onRemaining_4064_ = _args[10];
lean_object* v_remaining_4065_ = _args[11];
lean_object* v_inst_4066_ = _args[12];
lean_object* v_alts_4067_ = _args[13];
lean_object* v___f_4068_ = _args[14];
lean_object* v_onAlt_4069_ = _args[15];
lean_object* v___f_4070_ = _args[16];
lean_object* v_matcherApp_4071_ = _args[17];
lean_object* v_useSplitter_4072_ = _args[18];
lean_object* v_isCasesOn_4073_ = _args[19];
lean_object* v___f_4074_ = _args[20];
lean_object* v___x_4075_ = _args[21];
lean_object* v___x_4076_ = _args[22];
lean_object* v_toMonadExceptOf_4077_ = _args[23];
lean_object* v___f_4078_ = _args[24];
lean_object* v___f_4079_ = _args[25];
lean_object* v_matcherLevels_4080_ = _args[26];
lean_object* v_motive_4081_ = _args[27];
lean_object* v_onParams_4082_ = _args[28];
lean_object* v_params_4083_ = _args[29];
lean_object* v_numDiscrEqs_4084_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_4085_; uint8_t v_isCasesOn_boxed_4086_; lean_object* v_res_4087_; 
v_useSplitter_boxed_4085_ = lean_unbox(v_useSplitter_4072_);
v_isCasesOn_boxed_4086_ = lean_unbox(v_isCasesOn_4073_);
v_res_4087_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__60(v_toPure_4054_, v_inst_4055_, v_toBind_4056_, v_toMatcherInfo_4057_, v_inst_4058_, v___f_4059_, v_onMotive_4060_, v_discrs_4061_, v_inst_4062_, v_matcherName_4063_, v_onRemaining_4064_, v_remaining_4065_, v_inst_4066_, v_alts_4067_, v___f_4068_, v_onAlt_4069_, v___f_4070_, v_matcherApp_4071_, v_useSplitter_boxed_4085_, v_isCasesOn_boxed_4086_, v___f_4074_, v___x_4075_, v___x_4076_, v_toMonadExceptOf_4077_, v___f_4078_, v___f_4079_, v_matcherLevels_4080_, v_motive_4081_, v_onParams_4082_, v_params_4083_, v_numDiscrEqs_4084_);
return v_res_4087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__61(lean_object* v___f_4088_, lean_object* v_numDiscrEqs_4089_){
_start:
{
lean_object* v___x_4090_; 
v___x_4090_ = lean_apply_1(v___f_4088_, v_numDiscrEqs_4089_);
return v___x_4090_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1(void){
_start:
{
lean_object* v___x_4092_; lean_object* v___x_4093_; 
v___x_4092_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0));
v___x_4093_ = l_Lean_stringToMessageData(v___x_4092_);
return v___x_4093_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3(void){
_start:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4095_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2));
v___x_4096_ = l_Lean_stringToMessageData(v___x_4095_);
return v___x_4096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63(lean_object* v_matcherName_4097_, lean_object* v_inst_4098_, lean_object* v_inst_4099_, lean_object* v_toBind_4100_, lean_object* v___f_4101_, lean_object* v_toPure_4102_, lean_object* v___f_4103_, lean_object* v_____do__lift_4104_){
_start:
{
if (lean_obj_tag(v_____do__lift_4104_) == 0)
{
lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
lean_dec(v___f_4103_);
lean_dec(v_toPure_4102_);
v___x_4105_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1);
v___x_4106_ = l_Lean_MessageData_ofName(v_matcherName_4097_);
v___x_4107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4105_);
lean_ctor_set(v___x_4107_, 1, v___x_4106_);
v___x_4108_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3);
v___x_4109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4109_, 0, v___x_4107_);
lean_ctor_set(v___x_4109_, 1, v___x_4108_);
v___x_4110_ = l_Lean_throwError___redArg(v_inst_4098_, v_inst_4099_, v___x_4109_);
v___x_4111_ = lean_apply_4(v_toBind_4100_, lean_box(0), lean_box(0), v___x_4110_, v___f_4101_);
return v___x_4111_;
}
else
{
lean_object* v_val_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; 
lean_dec(v___f_4101_);
lean_dec_ref(v_inst_4099_);
lean_dec_ref(v_inst_4098_);
lean_dec(v_matcherName_4097_);
v_val_4112_ = lean_ctor_get(v_____do__lift_4104_, 0);
v___x_4113_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_4112_);
v___x_4114_ = lean_apply_2(v_toPure_4102_, lean_box(0), v___x_4113_);
v___x_4115_ = lean_apply_4(v_toBind_4100_, lean_box(0), lean_box(0), v___x_4114_, v___f_4103_);
return v___x_4115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed(lean_object* v_matcherName_4116_, lean_object* v_inst_4117_, lean_object* v_inst_4118_, lean_object* v_toBind_4119_, lean_object* v___f_4120_, lean_object* v_toPure_4121_, lean_object* v___f_4122_, lean_object* v_____do__lift_4123_){
_start:
{
lean_object* v_res_4124_; 
v_res_4124_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__63(v_matcherName_4116_, v_inst_4117_, v_inst_4118_, v_toBind_4119_, v___f_4120_, v_toPure_4121_, v___f_4122_, v_____do__lift_4123_);
lean_dec(v_____do__lift_4123_);
return v_res_4124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64(lean_object* v_matcherApp_4125_, lean_object* v_toPure_4126_, lean_object* v_inst_4127_, lean_object* v_toBind_4128_, lean_object* v_inst_4129_, lean_object* v___f_4130_, lean_object* v_onMotive_4131_, lean_object* v_inst_4132_, lean_object* v_onRemaining_4133_, lean_object* v_inst_4134_, lean_object* v___f_4135_, lean_object* v_onAlt_4136_, lean_object* v___f_4137_, uint8_t v_useSplitter_4138_, lean_object* v___f_4139_, lean_object* v___x_4140_, lean_object* v___x_4141_, lean_object* v_toMonadExceptOf_4142_, lean_object* v___f_4143_, lean_object* v___f_4144_, lean_object* v_onParams_4145_, lean_object* v_inst_4146_, lean_object* v_____do__lift_4147_){
_start:
{
lean_object* v_toMatcherInfo_4148_; lean_object* v_matcherName_4149_; lean_object* v_matcherLevels_4150_; lean_object* v_params_4151_; lean_object* v_motive_4152_; lean_object* v_discrs_4153_; lean_object* v_alts_4154_; lean_object* v_remaining_4155_; uint8_t v_isCasesOn_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___f_4159_; 
v_toMatcherInfo_4148_ = lean_ctor_get(v_matcherApp_4125_, 0);
lean_inc_ref(v_toMatcherInfo_4148_);
v_matcherName_4149_ = lean_ctor_get(v_matcherApp_4125_, 1);
lean_inc_n(v_matcherName_4149_, 3);
v_matcherLevels_4150_ = lean_ctor_get(v_matcherApp_4125_, 2);
lean_inc_ref(v_matcherLevels_4150_);
v_params_4151_ = lean_ctor_get(v_matcherApp_4125_, 3);
lean_inc_ref(v_params_4151_);
v_motive_4152_ = lean_ctor_get(v_matcherApp_4125_, 4);
lean_inc_ref(v_motive_4152_);
v_discrs_4153_ = lean_ctor_get(v_matcherApp_4125_, 5);
lean_inc_ref(v_discrs_4153_);
v_alts_4154_ = lean_ctor_get(v_matcherApp_4125_, 6);
lean_inc_ref(v_alts_4154_);
v_remaining_4155_ = lean_ctor_get(v_matcherApp_4125_, 7);
lean_inc_ref(v_remaining_4155_);
v_isCasesOn_4156_ = l_Lean_isCasesOnRecursor(v_____do__lift_4147_, v_matcherName_4149_);
v___x_4157_ = lean_box(v_useSplitter_4138_);
v___x_4158_ = lean_box(v_isCasesOn_4156_);
lean_inc_ref(v_inst_4132_);
lean_inc_ref(v_inst_4129_);
lean_inc(v_toBind_4128_);
lean_inc(v_toPure_4126_);
v___f_4159_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed), 31, 30);
lean_closure_set(v___f_4159_, 0, v_toPure_4126_);
lean_closure_set(v___f_4159_, 1, v_inst_4127_);
lean_closure_set(v___f_4159_, 2, v_toBind_4128_);
lean_closure_set(v___f_4159_, 3, v_toMatcherInfo_4148_);
lean_closure_set(v___f_4159_, 4, v_inst_4129_);
lean_closure_set(v___f_4159_, 5, v___f_4130_);
lean_closure_set(v___f_4159_, 6, v_onMotive_4131_);
lean_closure_set(v___f_4159_, 7, v_discrs_4153_);
lean_closure_set(v___f_4159_, 8, v_inst_4132_);
lean_closure_set(v___f_4159_, 9, v_matcherName_4149_);
lean_closure_set(v___f_4159_, 10, v_onRemaining_4133_);
lean_closure_set(v___f_4159_, 11, v_remaining_4155_);
lean_closure_set(v___f_4159_, 12, v_inst_4134_);
lean_closure_set(v___f_4159_, 13, v_alts_4154_);
lean_closure_set(v___f_4159_, 14, v___f_4135_);
lean_closure_set(v___f_4159_, 15, v_onAlt_4136_);
lean_closure_set(v___f_4159_, 16, v___f_4137_);
lean_closure_set(v___f_4159_, 17, v_matcherApp_4125_);
lean_closure_set(v___f_4159_, 18, v___x_4157_);
lean_closure_set(v___f_4159_, 19, v___x_4158_);
lean_closure_set(v___f_4159_, 20, v___f_4139_);
lean_closure_set(v___f_4159_, 21, v___x_4140_);
lean_closure_set(v___f_4159_, 22, v___x_4141_);
lean_closure_set(v___f_4159_, 23, v_toMonadExceptOf_4142_);
lean_closure_set(v___f_4159_, 24, v___f_4143_);
lean_closure_set(v___f_4159_, 25, v___f_4144_);
lean_closure_set(v___f_4159_, 26, v_matcherLevels_4150_);
lean_closure_set(v___f_4159_, 27, v_motive_4152_);
lean_closure_set(v___f_4159_, 28, v_onParams_4145_);
lean_closure_set(v___f_4159_, 29, v_params_4151_);
if (v_isCasesOn_4156_ == 0)
{
lean_object* v___f_4160_; lean_object* v___f_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
v___f_4160_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__61), 2, 1);
lean_closure_set(v___f_4160_, 0, v___f_4159_);
lean_inc_ref(v___f_4160_);
lean_inc(v_toBind_4128_);
lean_inc_ref(v_inst_4129_);
lean_inc(v_matcherName_4149_);
v___f_4161_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed), 8, 7);
lean_closure_set(v___f_4161_, 0, v_matcherName_4149_);
lean_closure_set(v___f_4161_, 1, v_inst_4129_);
lean_closure_set(v___f_4161_, 2, v_inst_4132_);
lean_closure_set(v___f_4161_, 3, v_toBind_4128_);
lean_closure_set(v___f_4161_, 4, v___f_4160_);
lean_closure_set(v___f_4161_, 5, v_toPure_4126_);
lean_closure_set(v___f_4161_, 6, v___f_4160_);
v___x_4162_ = l_Lean_Meta_getMatcherInfo_x3f___redArg(v_inst_4129_, v_inst_4146_, v_matcherName_4149_);
v___x_4163_ = lean_apply_4(v_toBind_4128_, lean_box(0), lean_box(0), v___x_4162_, v___f_4161_);
return v___x_4163_;
}
else
{
lean_object* v___f_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; 
lean_dec(v_matcherName_4149_);
lean_dec_ref(v_inst_4146_);
lean_dec_ref(v_inst_4132_);
lean_dec_ref(v_inst_4129_);
v___f_4164_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__61), 2, 1);
lean_closure_set(v___f_4164_, 0, v___f_4159_);
v___x_4165_ = lean_unsigned_to_nat(0u);
v___x_4166_ = lean_apply_2(v_toPure_4126_, lean_box(0), v___x_4165_);
v___x_4167_ = lean_apply_4(v_toBind_4128_, lean_box(0), lean_box(0), v___x_4166_, v___f_4164_);
return v___x_4167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed(lean_object** _args){
lean_object* v_matcherApp_4168_ = _args[0];
lean_object* v_toPure_4169_ = _args[1];
lean_object* v_inst_4170_ = _args[2];
lean_object* v_toBind_4171_ = _args[3];
lean_object* v_inst_4172_ = _args[4];
lean_object* v___f_4173_ = _args[5];
lean_object* v_onMotive_4174_ = _args[6];
lean_object* v_inst_4175_ = _args[7];
lean_object* v_onRemaining_4176_ = _args[8];
lean_object* v_inst_4177_ = _args[9];
lean_object* v___f_4178_ = _args[10];
lean_object* v_onAlt_4179_ = _args[11];
lean_object* v___f_4180_ = _args[12];
lean_object* v_useSplitter_4181_ = _args[13];
lean_object* v___f_4182_ = _args[14];
lean_object* v___x_4183_ = _args[15];
lean_object* v___x_4184_ = _args[16];
lean_object* v_toMonadExceptOf_4185_ = _args[17];
lean_object* v___f_4186_ = _args[18];
lean_object* v___f_4187_ = _args[19];
lean_object* v_onParams_4188_ = _args[20];
lean_object* v_inst_4189_ = _args[21];
lean_object* v_____do__lift_4190_ = _args[22];
_start:
{
uint8_t v_useSplitter_boxed_4191_; lean_object* v_res_4192_; 
v_useSplitter_boxed_4191_ = lean_unbox(v_useSplitter_4181_);
v_res_4192_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__64(v_matcherApp_4168_, v_toPure_4169_, v_inst_4170_, v_toBind_4171_, v_inst_4172_, v___f_4173_, v_onMotive_4174_, v_inst_4175_, v_onRemaining_4176_, v_inst_4177_, v___f_4178_, v_onAlt_4179_, v___f_4180_, v_useSplitter_boxed_4191_, v___f_4182_, v___x_4183_, v___x_4184_, v_toMonadExceptOf_4185_, v___f_4186_, v___f_4187_, v_onParams_4188_, v_inst_4189_, v_____do__lift_4190_);
return v_res_4192_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0(void){
_start:
{
lean_object* v___x_4193_; 
v___x_4193_ = l_Subarray_empty___redArg();
return v___x_4193_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__1(void){
_start:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4194_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4195_, 0, v___x_4194_);
lean_ctor_set(v___x_4195_, 1, v___x_4194_);
return v___x_4195_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__2(void){
_start:
{
lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; 
v___x_4196_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__1);
v___x_4197_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4198_, 0, v___x_4197_);
lean_ctor_set(v___x_4198_, 1, v___x_4196_);
return v___x_4198_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__3(void){
_start:
{
lean_object* v___x_4199_; 
v___x_4199_ = l_Array_instInhabited___redArg();
return v___x_4199_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__4(void){
_start:
{
lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4200_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__2);
v___x_4201_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4202_, 0, v___x_4201_);
lean_ctor_set(v___x_4202_, 1, v___x_4200_);
return v___x_4202_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__5(void){
_start:
{
lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; 
v___x_4203_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__4, &l_Lean_Meta_MatcherApp_transform___redArg___closed__4_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__4);
v___x_4204_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4205_, 0, v___x_4204_);
lean_ctor_set(v___x_4205_, 1, v___x_4203_);
return v___x_4205_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__6(void){
_start:
{
lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; 
v___x_4206_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__5);
v___x_4207_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__3);
v___x_4208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4207_);
lean_ctor_set(v___x_4208_, 1, v___x_4206_);
return v___x_4208_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7(void){
_start:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4209_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__6);
v___x_4210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4210_, 0, v___x_4209_);
return v___x_4210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object* v_inst_4211_, lean_object* v_inst_4212_, lean_object* v_inst_4213_, lean_object* v_inst_4214_, lean_object* v_inst_4215_, lean_object* v_matcherApp_4216_, uint8_t v_useSplitter_4217_, uint8_t v_addEqualities_4218_, lean_object* v_onParams_4219_, lean_object* v_onMotive_4220_, lean_object* v_onAlt_4221_, lean_object* v_onRemaining_4222_){
_start:
{
lean_object* v_toApplicative_4223_; lean_object* v_toBind_4224_; lean_object* v_getEnv_4225_; lean_object* v_toPure_4226_; lean_object* v_toMonadExceptOf_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___f_4230_; lean_object* v___f_4231_; lean_object* v___f_4232_; lean_object* v___x_4233_; lean_object* v___f_4234_; lean_object* v___x_4235_; lean_object* v___f_4236_; lean_object* v___f_4237_; lean_object* v___f_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___f_4241_; lean_object* v___x_4242_; 
v_toApplicative_4223_ = lean_ctor_get(v_inst_4213_, 0);
v_toBind_4224_ = lean_ctor_get(v_inst_4213_, 1);
lean_inc_n(v_toBind_4224_, 4);
v_getEnv_4225_ = lean_ctor_get(v_inst_4215_, 0);
lean_inc(v_getEnv_4225_);
v_toPure_4226_ = lean_ctor_get(v_toApplicative_4223_, 1);
lean_inc_n(v_toPure_4226_, 5);
v_toMonadExceptOf_4227_ = lean_ctor_get(v_inst_4214_, 0);
lean_inc_ref(v_toMonadExceptOf_4227_);
v___x_4228_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__7, &l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7);
lean_inc_ref_n(v_inst_4213_, 4);
v___x_4229_ = l_instInhabitedOfMonad___redArg(v_inst_4213_, v___x_4228_);
lean_inc_ref(v_inst_4214_);
v___f_4230_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4230_, 0, v_inst_4213_);
lean_closure_set(v___f_4230_, 1, v_inst_4214_);
lean_inc_n(v_inst_4211_, 3);
v___f_4231_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4231_, 0, v_inst_4211_);
v___f_4232_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4232_, 0, v_inst_4213_);
lean_closure_set(v___f_4232_, 1, v___f_4231_);
v___x_4233_ = l_Lean_instInhabitedExpr;
v___f_4234_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__5), 6, 3);
lean_closure_set(v___f_4234_, 0, v_toPure_4226_);
lean_closure_set(v___f_4234_, 1, v_inst_4211_);
lean_closure_set(v___f_4234_, 2, v_toBind_4224_);
v___x_4235_ = lean_box(v_addEqualities_4218_);
v___f_4236_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed), 7, 4);
lean_closure_set(v___f_4236_, 0, v_toPure_4226_);
lean_closure_set(v___f_4236_, 1, v___x_4235_);
lean_closure_set(v___f_4236_, 2, v_inst_4211_);
lean_closure_set(v___f_4236_, 3, v_toBind_4224_);
v___f_4237_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__11), 2, 1);
lean_closure_set(v___f_4237_, 0, v_toPure_4226_);
v___f_4238_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__12), 2, 1);
lean_closure_set(v___f_4238_, 0, v_toPure_4226_);
v___x_4239_ = l_instInhabitedOfMonad___redArg(v_inst_4213_, v___x_4233_);
v___x_4240_ = lean_box(v_useSplitter_4217_);
v___f_4241_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed), 23, 22);
lean_closure_set(v___f_4241_, 0, v_matcherApp_4216_);
lean_closure_set(v___f_4241_, 1, v_toPure_4226_);
lean_closure_set(v___f_4241_, 2, v_inst_4211_);
lean_closure_set(v___f_4241_, 3, v_toBind_4224_);
lean_closure_set(v___f_4241_, 4, v_inst_4213_);
lean_closure_set(v___f_4241_, 5, v___f_4236_);
lean_closure_set(v___f_4241_, 6, v_onMotive_4220_);
lean_closure_set(v___f_4241_, 7, v_inst_4214_);
lean_closure_set(v___f_4241_, 8, v_onRemaining_4222_);
lean_closure_set(v___f_4241_, 9, v_inst_4212_);
lean_closure_set(v___f_4241_, 10, v___f_4238_);
lean_closure_set(v___f_4241_, 11, v_onAlt_4221_);
lean_closure_set(v___f_4241_, 12, v___f_4232_);
lean_closure_set(v___f_4241_, 13, v___x_4240_);
lean_closure_set(v___f_4241_, 14, v___f_4237_);
lean_closure_set(v___f_4241_, 15, v___x_4229_);
lean_closure_set(v___f_4241_, 16, v___x_4239_);
lean_closure_set(v___f_4241_, 17, v_toMonadExceptOf_4227_);
lean_closure_set(v___f_4241_, 18, v___f_4230_);
lean_closure_set(v___f_4241_, 19, v___f_4234_);
lean_closure_set(v___f_4241_, 20, v_onParams_4219_);
lean_closure_set(v___f_4241_, 21, v_inst_4215_);
v___x_4242_ = lean_apply_4(v_toBind_4224_, lean_box(0), lean_box(0), v_getEnv_4225_, v___f_4241_);
return v___x_4242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___boxed(lean_object* v_inst_4243_, lean_object* v_inst_4244_, lean_object* v_inst_4245_, lean_object* v_inst_4246_, lean_object* v_inst_4247_, lean_object* v_matcherApp_4248_, lean_object* v_useSplitter_4249_, lean_object* v_addEqualities_4250_, lean_object* v_onParams_4251_, lean_object* v_onMotive_4252_, lean_object* v_onAlt_4253_, lean_object* v_onRemaining_4254_){
_start:
{
uint8_t v_useSplitter_boxed_4255_; uint8_t v_addEqualities_boxed_4256_; lean_object* v_res_4257_; 
v_useSplitter_boxed_4255_ = lean_unbox(v_useSplitter_4249_);
v_addEqualities_boxed_4256_ = lean_unbox(v_addEqualities_4250_);
v_res_4257_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_4243_, v_inst_4244_, v_inst_4245_, v_inst_4246_, v_inst_4247_, v_matcherApp_4248_, v_useSplitter_boxed_4255_, v_addEqualities_boxed_4256_, v_onParams_4251_, v_onMotive_4252_, v_onAlt_4253_, v_onRemaining_4254_);
return v_res_4257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform(lean_object* v_n_4258_, lean_object* v_inst_4259_, lean_object* v_inst_4260_, lean_object* v_inst_4261_, lean_object* v_inst_4262_, lean_object* v_inst_4263_, lean_object* v_inst_4264_, lean_object* v_inst_4265_, lean_object* v_inst_4266_, lean_object* v_matcherApp_4267_, uint8_t v_useSplitter_4268_, uint8_t v_addEqualities_4269_, lean_object* v_onParams_4270_, lean_object* v_onMotive_4271_, lean_object* v_onAlt_4272_, lean_object* v_onRemaining_4273_){
_start:
{
lean_object* v___x_4274_; 
v___x_4274_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_4259_, v_inst_4260_, v_inst_4261_, v_inst_4262_, v_inst_4263_, v_matcherApp_4267_, v_useSplitter_4268_, v_addEqualities_4269_, v_onParams_4270_, v_onMotive_4271_, v_onAlt_4272_, v_onRemaining_4273_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___boxed(lean_object* v_n_4275_, lean_object* v_inst_4276_, lean_object* v_inst_4277_, lean_object* v_inst_4278_, lean_object* v_inst_4279_, lean_object* v_inst_4280_, lean_object* v_inst_4281_, lean_object* v_inst_4282_, lean_object* v_inst_4283_, lean_object* v_matcherApp_4284_, lean_object* v_useSplitter_4285_, lean_object* v_addEqualities_4286_, lean_object* v_onParams_4287_, lean_object* v_onMotive_4288_, lean_object* v_onAlt_4289_, lean_object* v_onRemaining_4290_){
_start:
{
uint8_t v_useSplitter_boxed_4291_; uint8_t v_addEqualities_boxed_4292_; lean_object* v_res_4293_; 
v_useSplitter_boxed_4291_ = lean_unbox(v_useSplitter_4285_);
v_addEqualities_boxed_4292_ = lean_unbox(v_addEqualities_4286_);
v_res_4293_ = l_Lean_Meta_MatcherApp_transform(v_n_4275_, v_inst_4276_, v_inst_4277_, v_inst_4278_, v_inst_4279_, v_inst_4280_, v_inst_4281_, v_inst_4282_, v_inst_4283_, v_matcherApp_4284_, v_useSplitter_boxed_4291_, v_addEqualities_boxed_4292_, v_onParams_4287_, v_onMotive_4288_, v_onAlt_4289_, v_onRemaining_4290_);
lean_dec(v_inst_4283_);
lean_dec(v_inst_4282_);
lean_dec_ref(v_inst_4281_);
return v_res_4293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0(lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_){
_start:
{
lean_object* v___x_4300_; 
v___x_4300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4300_, 0, v___y_4294_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed(lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_){
_start:
{
lean_object* v_res_4307_; 
v_res_4307_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__0(v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
lean_dec(v___y_4303_);
lean_dec_ref(v___y_4302_);
return v_res_4307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1(lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_){
_start:
{
lean_object* v___x_4314_; 
v___x_4314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4314_, 0, v___y_4308_);
return v___x_4314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed(lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_){
_start:
{
lean_object* v_res_4321_; 
v_res_4321_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__1(v___y_4315_, v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_);
lean_dec(v___y_4319_);
lean_dec_ref(v___y_4318_);
lean_dec(v___y_4317_);
lean_dec_ref(v___y_4316_);
return v_res_4321_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(lean_object* v_opts_4322_, lean_object* v_opt_4323_){
_start:
{
lean_object* v_name_4324_; lean_object* v_defValue_4325_; lean_object* v_map_4326_; lean_object* v___x_4327_; 
v_name_4324_ = lean_ctor_get(v_opt_4323_, 0);
v_defValue_4325_ = lean_ctor_get(v_opt_4323_, 1);
v_map_4326_ = lean_ctor_get(v_opts_4322_, 0);
v___x_4327_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4326_, v_name_4324_);
if (lean_obj_tag(v___x_4327_) == 0)
{
uint8_t v___x_4328_; 
v___x_4328_ = lean_unbox(v_defValue_4325_);
return v___x_4328_;
}
else
{
lean_object* v_val_4329_; 
v_val_4329_ = lean_ctor_get(v___x_4327_, 0);
lean_inc(v_val_4329_);
lean_dec_ref_known(v___x_4327_, 1);
if (lean_obj_tag(v_val_4329_) == 1)
{
uint8_t v_v_4330_; 
v_v_4330_ = lean_ctor_get_uint8(v_val_4329_, 0);
lean_dec_ref_known(v_val_4329_, 0);
return v_v_4330_;
}
else
{
uint8_t v___x_4331_; 
lean_dec(v_val_4329_);
v___x_4331_ = lean_unbox(v_defValue_4325_);
return v___x_4331_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11___boxed(lean_object* v_opts_4332_, lean_object* v_opt_4333_){
_start:
{
uint8_t v_res_4334_; lean_object* v_r_4335_; 
v_res_4334_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(v_opts_4332_, v_opt_4333_);
lean_dec_ref(v_opt_4333_);
lean_dec_ref(v_opts_4332_);
v_r_4335_ = lean_box(v_res_4334_);
return v_r_4335_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(uint8_t v_suppressElabErrors_4344_, uint8_t v___y_4345_, lean_object* v_x_4346_){
_start:
{
if (lean_obj_tag(v_x_4346_) == 1)
{
lean_object* v_pre_4347_; 
v_pre_4347_ = lean_ctor_get(v_x_4346_, 0);
switch(lean_obj_tag(v_pre_4347_))
{
case 1:
{
lean_object* v_pre_4348_; 
v_pre_4348_ = lean_ctor_get(v_pre_4347_, 0);
switch(lean_obj_tag(v_pre_4348_))
{
case 0:
{
lean_object* v_str_4349_; lean_object* v_str_4350_; lean_object* v___x_4351_; uint8_t v___x_4352_; 
v_str_4349_ = lean_ctor_get(v_x_4346_, 1);
v_str_4350_ = lean_ctor_get(v_pre_4347_, 1);
v___x_4351_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_4352_ = lean_string_dec_eq(v_str_4350_, v___x_4351_);
if (v___x_4352_ == 0)
{
lean_object* v___x_4353_; uint8_t v___x_4354_; 
v___x_4353_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_4354_ = lean_string_dec_eq(v_str_4350_, v___x_4353_);
if (v___x_4354_ == 0)
{
return v___x_4354_;
}
else
{
lean_object* v___x_4355_; uint8_t v___x_4356_; 
v___x_4355_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_4356_ = lean_string_dec_eq(v_str_4349_, v___x_4355_);
if (v___x_4356_ == 0)
{
return v___x_4356_;
}
else
{
return v_suppressElabErrors_4344_;
}
}
}
else
{
lean_object* v___x_4357_; uint8_t v___x_4358_; 
v___x_4357_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_4358_ = lean_string_dec_eq(v_str_4349_, v___x_4357_);
if (v___x_4358_ == 0)
{
return v___x_4358_;
}
else
{
return v_suppressElabErrors_4344_;
}
}
}
case 1:
{
lean_object* v_pre_4359_; 
v_pre_4359_ = lean_ctor_get(v_pre_4348_, 0);
if (lean_obj_tag(v_pre_4359_) == 0)
{
lean_object* v_str_4360_; lean_object* v_str_4361_; lean_object* v_str_4362_; lean_object* v___x_4363_; uint8_t v___x_4364_; 
v_str_4360_ = lean_ctor_get(v_x_4346_, 1);
v_str_4361_ = lean_ctor_get(v_pre_4347_, 1);
v_str_4362_ = lean_ctor_get(v_pre_4348_, 1);
v___x_4363_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_4364_ = lean_string_dec_eq(v_str_4362_, v___x_4363_);
if (v___x_4364_ == 0)
{
return v___x_4364_;
}
else
{
lean_object* v___x_4365_; uint8_t v___x_4366_; 
v___x_4365_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_4366_ = lean_string_dec_eq(v_str_4361_, v___x_4365_);
if (v___x_4366_ == 0)
{
return v___x_4366_;
}
else
{
lean_object* v___x_4367_; uint8_t v___x_4368_; 
v___x_4367_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_4368_ = lean_string_dec_eq(v_str_4360_, v___x_4367_);
if (v___x_4368_ == 0)
{
return v___x_4368_;
}
else
{
return v_suppressElabErrors_4344_;
}
}
}
}
else
{
return v___y_4345_;
}
}
default: 
{
return v___y_4345_;
}
}
}
case 0:
{
lean_object* v_str_4369_; lean_object* v___x_4370_; uint8_t v___x_4371_; 
v_str_4369_ = lean_ctor_get(v_x_4346_, 1);
v___x_4370_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7));
v___x_4371_ = lean_string_dec_eq(v_str_4369_, v___x_4370_);
if (v___x_4371_ == 0)
{
return v___x_4371_;
}
else
{
return v_suppressElabErrors_4344_;
}
}
default: 
{
return v___y_4345_;
}
}
}
else
{
return v___y_4345_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_suppressElabErrors_4372_, lean_object* v___y_4373_, lean_object* v_x_4374_){
_start:
{
uint8_t v_suppressElabErrors_boxed_4375_; uint8_t v___y_32700__boxed_4376_; uint8_t v_res_4377_; lean_object* v_r_4378_; 
v_suppressElabErrors_boxed_4375_ = lean_unbox(v_suppressElabErrors_4372_);
v___y_32700__boxed_4376_ = lean_unbox(v___y_4373_);
v_res_4377_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(v_suppressElabErrors_boxed_4375_, v___y_32700__boxed_4376_, v_x_4374_);
lean_dec(v_x_4374_);
v_r_4378_ = lean_box(v_res_4377_);
return v_r_4378_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(lean_object* v_ref_4380_, lean_object* v_msgData_4381_, uint8_t v_severity_4382_, uint8_t v_isSilent_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_){
_start:
{
uint8_t v___y_4390_; lean_object* v___y_4391_; lean_object* v___y_4392_; lean_object* v___y_4393_; lean_object* v___y_4394_; lean_object* v___y_4395_; uint8_t v___y_4396_; lean_object* v_currNamespace_4397_; lean_object* v_openDecls_4398_; lean_object* v___y_4399_; lean_object* v___y_4425_; lean_object* v___y_4426_; lean_object* v___y_4427_; uint8_t v___y_4428_; lean_object* v___y_4429_; uint8_t v___y_4430_; lean_object* v___y_4431_; lean_object* v___y_4432_; uint8_t v___y_4433_; lean_object* v___y_4434_; lean_object* v___y_4452_; lean_object* v___y_4453_; lean_object* v___y_4454_; uint8_t v___y_4455_; lean_object* v___y_4456_; uint8_t v___y_4457_; lean_object* v___y_4458_; lean_object* v___y_4459_; uint8_t v___y_4460_; lean_object* v___y_4461_; lean_object* v___y_4465_; lean_object* v___y_4466_; lean_object* v___y_4467_; lean_object* v___y_4468_; uint8_t v___y_4469_; lean_object* v___y_4470_; uint8_t v___y_4471_; lean_object* v___y_4472_; uint8_t v___y_4473_; uint8_t v___x_4478_; lean_object* v___y_4480_; lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___y_4483_; lean_object* v___y_4484_; uint8_t v___y_4485_; lean_object* v___y_4486_; uint8_t v___y_4487_; uint8_t v___y_4488_; uint8_t v___y_4490_; uint8_t v___x_4508_; 
v___x_4478_ = 2;
v___x_4508_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4382_, v___x_4478_);
if (v___x_4508_ == 0)
{
v___y_4490_ = v___x_4508_;
goto v___jp_4489_;
}
else
{
uint8_t v___x_4509_; 
lean_inc_ref(v_msgData_4381_);
v___x_4509_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4381_);
v___y_4490_ = v___x_4509_;
goto v___jp_4489_;
}
v___jp_4389_:
{
lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v_env_4404_; lean_object* v_nextMacroScope_4405_; lean_object* v_ngen_4406_; lean_object* v_auxDeclNGen_4407_; lean_object* v_traceState_4408_; lean_object* v_cache_4409_; lean_object* v_messages_4410_; lean_object* v_infoState_4411_; lean_object* v_snapshotTasks_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4423_; 
lean_inc(v_openDecls_4398_);
lean_inc(v_currNamespace_4397_);
v___x_4400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4400_, 0, v_currNamespace_4397_);
lean_ctor_set(v___x_4400_, 1, v_openDecls_4398_);
v___x_4401_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4401_, 0, v___x_4400_);
lean_ctor_set(v___x_4401_, 1, v___y_4395_);
lean_inc_ref(v___y_4392_);
lean_inc_ref(v___y_4394_);
v___x_4402_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4402_, 0, v___y_4394_);
lean_ctor_set(v___x_4402_, 1, v___y_4393_);
lean_ctor_set(v___x_4402_, 2, v___y_4391_);
lean_ctor_set(v___x_4402_, 3, v___y_4392_);
lean_ctor_set(v___x_4402_, 4, v___x_4401_);
lean_ctor_set_uint8(v___x_4402_, sizeof(void*)*5, v___y_4396_);
lean_ctor_set_uint8(v___x_4402_, sizeof(void*)*5 + 1, v___y_4390_);
lean_ctor_set_uint8(v___x_4402_, sizeof(void*)*5 + 2, v_isSilent_4383_);
v___x_4403_ = lean_st_ref_take(v___y_4399_);
v_env_4404_ = lean_ctor_get(v___x_4403_, 0);
v_nextMacroScope_4405_ = lean_ctor_get(v___x_4403_, 1);
v_ngen_4406_ = lean_ctor_get(v___x_4403_, 2);
v_auxDeclNGen_4407_ = lean_ctor_get(v___x_4403_, 3);
v_traceState_4408_ = lean_ctor_get(v___x_4403_, 4);
v_cache_4409_ = lean_ctor_get(v___x_4403_, 5);
v_messages_4410_ = lean_ctor_get(v___x_4403_, 6);
v_infoState_4411_ = lean_ctor_get(v___x_4403_, 7);
v_snapshotTasks_4412_ = lean_ctor_get(v___x_4403_, 8);
v_isSharedCheck_4423_ = !lean_is_exclusive(v___x_4403_);
if (v_isSharedCheck_4423_ == 0)
{
v___x_4414_ = v___x_4403_;
v_isShared_4415_ = v_isSharedCheck_4423_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_snapshotTasks_4412_);
lean_inc(v_infoState_4411_);
lean_inc(v_messages_4410_);
lean_inc(v_cache_4409_);
lean_inc(v_traceState_4408_);
lean_inc(v_auxDeclNGen_4407_);
lean_inc(v_ngen_4406_);
lean_inc(v_nextMacroScope_4405_);
lean_inc(v_env_4404_);
lean_dec(v___x_4403_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4423_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4419_; 
v___x_4416_ = lean_box(0);
v___x_4417_ = l_Lean_MessageLog_add(v___x_4402_, v_messages_4410_);
if (v_isShared_4415_ == 0)
{
lean_ctor_set(v___x_4414_, 6, v___x_4417_);
v___x_4419_ = v___x_4414_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4422_; 
v_reuseFailAlloc_4422_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4422_, 0, v_env_4404_);
lean_ctor_set(v_reuseFailAlloc_4422_, 1, v_nextMacroScope_4405_);
lean_ctor_set(v_reuseFailAlloc_4422_, 2, v_ngen_4406_);
lean_ctor_set(v_reuseFailAlloc_4422_, 3, v_auxDeclNGen_4407_);
lean_ctor_set(v_reuseFailAlloc_4422_, 4, v_traceState_4408_);
lean_ctor_set(v_reuseFailAlloc_4422_, 5, v_cache_4409_);
lean_ctor_set(v_reuseFailAlloc_4422_, 6, v___x_4417_);
lean_ctor_set(v_reuseFailAlloc_4422_, 7, v_infoState_4411_);
lean_ctor_set(v_reuseFailAlloc_4422_, 8, v_snapshotTasks_4412_);
v___x_4419_ = v_reuseFailAlloc_4422_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
lean_object* v___x_4420_; lean_object* v___x_4421_; 
v___x_4420_ = lean_st_ref_put(v___y_4399_, v___x_4419_);
v___x_4421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4421_, 0, v___x_4416_);
return v___x_4421_;
}
}
}
v___jp_4424_:
{
lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v_a_4437_; lean_object* v___x_4439_; uint8_t v_isShared_4440_; uint8_t v_isSharedCheck_4450_; 
v___x_4435_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4381_);
v___x_4436_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v___x_4435_, v___y_4384_, v___y_4385_, v___y_4386_, v___y_4387_);
v_a_4437_ = lean_ctor_get(v___x_4436_, 0);
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4436_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4439_ = v___x_4436_;
v_isShared_4440_ = v_isSharedCheck_4450_;
goto v_resetjp_4438_;
}
else
{
lean_inc(v_a_4437_);
lean_dec(v___x_4436_);
v___x_4439_ = lean_box(0);
v_isShared_4440_ = v_isSharedCheck_4450_;
goto v_resetjp_4438_;
}
v_resetjp_4438_:
{
lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; 
lean_inc_ref_n(v___y_4429_, 2);
v___x_4441_ = l_Lean_FileMap_toPosition(v___y_4429_, v___y_4431_);
lean_dec(v___y_4431_);
v___x_4442_ = l_Lean_FileMap_toPosition(v___y_4429_, v___y_4434_);
lean_dec(v___y_4434_);
v___x_4443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4443_, 0, v___x_4442_);
v___x_4444_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0));
if (v___y_4430_ == 0)
{
lean_del_object(v___x_4439_);
lean_dec_ref(v___y_4426_);
v___y_4390_ = v___y_4428_;
v___y_4391_ = v___x_4443_;
v___y_4392_ = v___x_4444_;
v___y_4393_ = v___x_4441_;
v___y_4394_ = v___y_4432_;
v___y_4395_ = v_a_4437_;
v___y_4396_ = v___y_4433_;
v_currNamespace_4397_ = v___y_4427_;
v_openDecls_4398_ = v___y_4425_;
v___y_4399_ = v___y_4387_;
goto v___jp_4389_;
}
else
{
uint8_t v___x_4445_; 
lean_inc(v_a_4437_);
v___x_4445_ = l_Lean_MessageData_hasTag(v___y_4426_, v_a_4437_);
if (v___x_4445_ == 0)
{
lean_object* v___x_4446_; lean_object* v___x_4448_; 
lean_dec_ref_known(v___x_4443_, 1);
lean_dec_ref(v___x_4441_);
lean_dec(v_a_4437_);
v___x_4446_ = lean_box(0);
if (v_isShared_4440_ == 0)
{
lean_ctor_set(v___x_4439_, 0, v___x_4446_);
v___x_4448_ = v___x_4439_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v___x_4446_);
v___x_4448_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
return v___x_4448_;
}
}
else
{
lean_del_object(v___x_4439_);
v___y_4390_ = v___y_4428_;
v___y_4391_ = v___x_4443_;
v___y_4392_ = v___x_4444_;
v___y_4393_ = v___x_4441_;
v___y_4394_ = v___y_4432_;
v___y_4395_ = v_a_4437_;
v___y_4396_ = v___y_4433_;
v_currNamespace_4397_ = v___y_4427_;
v_openDecls_4398_ = v___y_4425_;
v___y_4399_ = v___y_4387_;
goto v___jp_4389_;
}
}
}
}
v___jp_4451_:
{
lean_object* v___x_4462_; 
v___x_4462_ = l_Lean_Syntax_getTailPos_x3f(v___y_4458_, v___y_4460_);
lean_dec(v___y_4458_);
if (lean_obj_tag(v___x_4462_) == 0)
{
lean_inc(v___y_4461_);
v___y_4425_ = v___y_4452_;
v___y_4426_ = v___y_4453_;
v___y_4427_ = v___y_4454_;
v___y_4428_ = v___y_4455_;
v___y_4429_ = v___y_4456_;
v___y_4430_ = v___y_4457_;
v___y_4431_ = v___y_4461_;
v___y_4432_ = v___y_4459_;
v___y_4433_ = v___y_4460_;
v___y_4434_ = v___y_4461_;
goto v___jp_4424_;
}
else
{
lean_object* v_val_4463_; 
v_val_4463_ = lean_ctor_get(v___x_4462_, 0);
lean_inc(v_val_4463_);
lean_dec_ref_known(v___x_4462_, 1);
v___y_4425_ = v___y_4452_;
v___y_4426_ = v___y_4453_;
v___y_4427_ = v___y_4454_;
v___y_4428_ = v___y_4455_;
v___y_4429_ = v___y_4456_;
v___y_4430_ = v___y_4457_;
v___y_4431_ = v___y_4461_;
v___y_4432_ = v___y_4459_;
v___y_4433_ = v___y_4460_;
v___y_4434_ = v_val_4463_;
goto v___jp_4424_;
}
}
v___jp_4464_:
{
lean_object* v_ref_4474_; lean_object* v___x_4475_; 
v_ref_4474_ = l_Lean_replaceRef(v_ref_4380_, v___y_4472_);
v___x_4475_ = l_Lean_Syntax_getPos_x3f(v_ref_4474_, v___y_4471_);
if (lean_obj_tag(v___x_4475_) == 0)
{
lean_object* v___x_4476_; 
v___x_4476_ = lean_unsigned_to_nat(0u);
v___y_4452_ = v___y_4465_;
v___y_4453_ = v___y_4466_;
v___y_4454_ = v___y_4467_;
v___y_4455_ = v___y_4473_;
v___y_4456_ = v___y_4468_;
v___y_4457_ = v___y_4469_;
v___y_4458_ = v_ref_4474_;
v___y_4459_ = v___y_4470_;
v___y_4460_ = v___y_4471_;
v___y_4461_ = v___x_4476_;
goto v___jp_4451_;
}
else
{
lean_object* v_val_4477_; 
v_val_4477_ = lean_ctor_get(v___x_4475_, 0);
lean_inc(v_val_4477_);
lean_dec_ref_known(v___x_4475_, 1);
v___y_4452_ = v___y_4465_;
v___y_4453_ = v___y_4466_;
v___y_4454_ = v___y_4467_;
v___y_4455_ = v___y_4473_;
v___y_4456_ = v___y_4468_;
v___y_4457_ = v___y_4469_;
v___y_4458_ = v_ref_4474_;
v___y_4459_ = v___y_4470_;
v___y_4460_ = v___y_4471_;
v___y_4461_ = v_val_4477_;
goto v___jp_4451_;
}
}
v___jp_4479_:
{
if (v___y_4488_ == 0)
{
v___y_4465_ = v___y_4480_;
v___y_4466_ = v___y_4482_;
v___y_4467_ = v___y_4483_;
v___y_4468_ = v___y_4481_;
v___y_4469_ = v___y_4485_;
v___y_4470_ = v___y_4484_;
v___y_4471_ = v___y_4487_;
v___y_4472_ = v___y_4486_;
v___y_4473_ = v_severity_4382_;
goto v___jp_4464_;
}
else
{
v___y_4465_ = v___y_4480_;
v___y_4466_ = v___y_4482_;
v___y_4467_ = v___y_4483_;
v___y_4468_ = v___y_4481_;
v___y_4469_ = v___y_4485_;
v___y_4470_ = v___y_4484_;
v___y_4471_ = v___y_4487_;
v___y_4472_ = v___y_4486_;
v___y_4473_ = v___x_4478_;
goto v___jp_4464_;
}
}
v___jp_4489_:
{
if (v___y_4490_ == 0)
{
lean_object* v_toCold_4491_; lean_object* v_ref_4492_; uint8_t v_suppressElabErrors_4493_; lean_object* v_fileName_4494_; lean_object* v_fileMap_4495_; lean_object* v_options_4496_; lean_object* v_currNamespace_4497_; lean_object* v_openDecls_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___f_4501_; uint8_t v___x_4502_; uint8_t v___x_4503_; 
v_toCold_4491_ = lean_ctor_get(v___y_4386_, 0);
v_ref_4492_ = lean_ctor_get(v___y_4386_, 2);
v_suppressElabErrors_4493_ = lean_ctor_get_uint8(v___y_4386_, sizeof(void*)*3 + 1);
v_fileName_4494_ = lean_ctor_get(v_toCold_4491_, 0);
v_fileMap_4495_ = lean_ctor_get(v_toCold_4491_, 1);
v_options_4496_ = lean_ctor_get(v_toCold_4491_, 2);
v_currNamespace_4497_ = lean_ctor_get(v_toCold_4491_, 4);
v_openDecls_4498_ = lean_ctor_get(v_toCold_4491_, 5);
v___x_4499_ = lean_box(v_suppressElabErrors_4493_);
v___x_4500_ = lean_box(v___y_4490_);
v___f_4501_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4501_, 0, v___x_4499_);
lean_closure_set(v___f_4501_, 1, v___x_4500_);
v___x_4502_ = 1;
v___x_4503_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4382_, v___x_4502_);
if (v___x_4503_ == 0)
{
v___y_4480_ = v_openDecls_4498_;
v___y_4481_ = v_fileMap_4495_;
v___y_4482_ = v___f_4501_;
v___y_4483_ = v_currNamespace_4497_;
v___y_4484_ = v_fileName_4494_;
v___y_4485_ = v_suppressElabErrors_4493_;
v___y_4486_ = v_ref_4492_;
v___y_4487_ = v___y_4490_;
v___y_4488_ = v___x_4503_;
goto v___jp_4479_;
}
else
{
lean_object* v___x_4504_; uint8_t v___x_4505_; 
v___x_4504_ = l_Lean_warningAsError;
v___x_4505_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(v_options_4496_, v___x_4504_);
v___y_4480_ = v_openDecls_4498_;
v___y_4481_ = v_fileMap_4495_;
v___y_4482_ = v___f_4501_;
v___y_4483_ = v_currNamespace_4497_;
v___y_4484_ = v_fileName_4494_;
v___y_4485_ = v_suppressElabErrors_4493_;
v___y_4486_ = v_ref_4492_;
v___y_4487_ = v___y_4490_;
v___y_4488_ = v___x_4505_;
goto v___jp_4479_;
}
}
else
{
lean_object* v___x_4506_; lean_object* v___x_4507_; 
lean_dec_ref(v_msgData_4381_);
v___x_4506_ = lean_box(0);
v___x_4507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4506_);
return v___x_4507_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_4510_, lean_object* v_msgData_4511_, lean_object* v_severity_4512_, lean_object* v_isSilent_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_){
_start:
{
uint8_t v_severity_boxed_4519_; uint8_t v_isSilent_boxed_4520_; lean_object* v_res_4521_; 
v_severity_boxed_4519_ = lean_unbox(v_severity_4512_);
v_isSilent_boxed_4520_ = lean_unbox(v_isSilent_4513_);
v_res_4521_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(v_ref_4510_, v_msgData_4511_, v_severity_boxed_4519_, v_isSilent_boxed_4520_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_);
lean_dec(v___y_4517_);
lean_dec_ref(v___y_4516_);
lean_dec(v___y_4515_);
lean_dec_ref(v___y_4514_);
lean_dec(v_ref_4510_);
return v_res_4521_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(lean_object* v_msgData_4522_, uint8_t v_severity_4523_, uint8_t v_isSilent_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_){
_start:
{
lean_object* v_ref_4530_; lean_object* v___x_4531_; 
v_ref_4530_ = lean_ctor_get(v___y_4527_, 2);
v___x_4531_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(v_ref_4530_, v_msgData_4522_, v_severity_4523_, v_isSilent_4524_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_);
return v___x_4531_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0___boxed(lean_object* v_msgData_4532_, lean_object* v_severity_4533_, lean_object* v_isSilent_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_){
_start:
{
uint8_t v_severity_boxed_4540_; uint8_t v_isSilent_boxed_4541_; lean_object* v_res_4542_; 
v_severity_boxed_4540_ = lean_unbox(v_severity_4533_);
v_isSilent_boxed_4541_ = lean_unbox(v_isSilent_4534_);
v_res_4542_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(v_msgData_4532_, v_severity_boxed_4540_, v_isSilent_boxed_4541_, v___y_4535_, v___y_4536_, v___y_4537_, v___y_4538_);
lean_dec(v___y_4538_);
lean_dec_ref(v___y_4537_);
lean_dec(v___y_4536_);
lean_dec_ref(v___y_4535_);
return v_res_4542_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(lean_object* v_msgData_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_){
_start:
{
uint8_t v___x_4549_; uint8_t v___x_4550_; lean_object* v___x_4551_; 
v___x_4549_ = 0;
v___x_4550_ = 0;
v___x_4551_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(v_msgData_4543_, v___x_4549_, v___x_4550_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_);
return v___x_4551_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0___boxed(lean_object* v_msgData_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_){
_start:
{
lean_object* v_res_4558_; 
v_res_4558_ = l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(v_msgData_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_);
lean_dec(v___y_4556_);
lean_dec_ref(v___y_4555_);
lean_dec(v___y_4554_);
lean_dec_ref(v___y_4553_);
return v_res_4558_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1(void){
_start:
{
lean_object* v___x_4560_; lean_object* v___x_4561_; 
v___x_4560_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0));
v___x_4561_ = l_Lean_stringToMessageData(v___x_4560_);
return v___x_4561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2(uint8_t v___x_4562_, lean_object* v___altIdx_4563_, lean_object* v_expAltType_4564_, lean_object* v___altFVars_4565_, lean_object* v_alt_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_){
_start:
{
lean_object* v___x_4572_; 
lean_inc(v___y_4570_);
lean_inc_ref(v___y_4569_);
lean_inc(v___y_4568_);
lean_inc_ref(v___y_4567_);
lean_inc_ref(v_alt_4566_);
v___x_4572_ = lean_infer_type(v_alt_4566_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
if (lean_obj_tag(v___x_4572_) == 0)
{
lean_object* v_a_4573_; lean_object* v___x_4574_; 
v_a_4573_ = lean_ctor_get(v___x_4572_, 0);
lean_inc(v_a_4573_);
lean_dec_ref_known(v___x_4572_, 1);
v___x_4574_ = l_Lean_Meta_mkEq(v_expAltType_4564_, v_a_4573_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
if (lean_obj_tag(v___x_4574_) == 0)
{
lean_object* v_a_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; 
v_a_4575_ = lean_ctor_get(v___x_4574_, 0);
lean_inc(v_a_4575_);
lean_dec_ref_known(v___x_4574_, 1);
v___x_4576_ = lean_box(0);
v___x_4577_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_4575_, v___x_4576_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
if (lean_obj_tag(v___x_4577_) == 0)
{
lean_object* v_a_4578_; lean_object* v___y_4580_; lean_object* v___x_4590_; lean_object* v___x_4591_; 
v_a_4578_ = lean_ctor_get(v___x_4577_, 0);
lean_inc(v_a_4578_);
lean_dec_ref_known(v___x_4577_, 1);
v___x_4590_ = l_Lean_Expr_mvarId_x21(v_a_4578_);
v___x_4591_ = l_Lean_Meta_Split_simpMatchTarget(v___x_4590_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
if (lean_obj_tag(v___x_4591_) == 0)
{
lean_object* v_a_4592_; lean_object* v___x_4593_; 
v_a_4592_ = lean_ctor_get(v___x_4591_, 0);
lean_inc_n(v_a_4592_, 2);
lean_dec_ref_known(v___x_4591_, 1);
v___x_4593_ = l_Lean_MVarId_refl(v_a_4592_, v___x_4562_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
if (lean_obj_tag(v___x_4593_) == 0)
{
lean_dec(v_a_4592_);
v___y_4580_ = v___x_4593_;
goto v___jp_4579_;
}
else
{
lean_object* v_a_4594_; uint8_t v___y_4596_; uint8_t v___x_4609_; 
v_a_4594_ = lean_ctor_get(v___x_4593_, 0);
lean_inc(v_a_4594_);
v___x_4609_ = l_Lean_Exception_isInterrupt(v_a_4594_);
if (v___x_4609_ == 0)
{
uint8_t v___x_4610_; 
v___x_4610_ = l_Lean_Exception_isRuntime(v_a_4594_);
v___y_4596_ = v___x_4610_;
goto v___jp_4595_;
}
else
{
lean_dec(v_a_4594_);
v___y_4596_ = v___x_4609_;
goto v___jp_4595_;
}
v___jp_4595_:
{
if (v___y_4596_ == 0)
{
lean_object* v___x_4598_; uint8_t v_isShared_4599_; uint8_t v_isSharedCheck_4607_; 
v_isSharedCheck_4607_ = !lean_is_exclusive(v___x_4593_);
if (v_isSharedCheck_4607_ == 0)
{
lean_object* v_unused_4608_; 
v_unused_4608_ = lean_ctor_get(v___x_4593_, 0);
lean_dec(v_unused_4608_);
v___x_4598_ = v___x_4593_;
v_isShared_4599_ = v_isSharedCheck_4607_;
goto v_resetjp_4597_;
}
else
{
lean_dec(v___x_4593_);
v___x_4598_ = lean_box(0);
v_isShared_4599_ = v_isSharedCheck_4607_;
goto v_resetjp_4597_;
}
v_resetjp_4597_:
{
lean_object* v___x_4600_; lean_object* v___x_4602_; 
v___x_4600_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1);
lean_inc(v_a_4592_);
if (v_isShared_4599_ == 0)
{
lean_ctor_set(v___x_4598_, 0, v_a_4592_);
v___x_4602_ = v___x_4598_;
goto v_reusejp_4601_;
}
else
{
lean_object* v_reuseFailAlloc_4606_; 
v_reuseFailAlloc_4606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4606_, 0, v_a_4592_);
v___x_4602_ = v_reuseFailAlloc_4606_;
goto v_reusejp_4601_;
}
v_reusejp_4601_:
{
lean_object* v___x_4603_; lean_object* v___x_4604_; 
v___x_4603_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4603_, 0, v___x_4600_);
lean_ctor_set(v___x_4603_, 1, v___x_4602_);
v___x_4604_ = l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(v___x_4603_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
if (lean_obj_tag(v___x_4604_) == 0)
{
lean_object* v___x_4605_; 
lean_dec_ref_known(v___x_4604_, 1);
v___x_4605_ = l_Lean_MVarId_admit(v_a_4592_, v___x_4562_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
v___y_4580_ = v___x_4605_;
goto v___jp_4579_;
}
else
{
lean_dec(v_a_4592_);
v___y_4580_ = v___x_4604_;
goto v___jp_4579_;
}
}
}
}
else
{
lean_dec(v_a_4592_);
v___y_4580_ = v___x_4593_;
goto v___jp_4579_;
}
}
}
}
else
{
lean_object* v_a_4611_; lean_object* v___x_4613_; uint8_t v_isShared_4614_; uint8_t v_isSharedCheck_4618_; 
lean_dec(v_a_4578_);
lean_dec_ref(v_alt_4566_);
v_a_4611_ = lean_ctor_get(v___x_4591_, 0);
v_isSharedCheck_4618_ = !lean_is_exclusive(v___x_4591_);
if (v_isSharedCheck_4618_ == 0)
{
v___x_4613_ = v___x_4591_;
v_isShared_4614_ = v_isSharedCheck_4618_;
goto v_resetjp_4612_;
}
else
{
lean_inc(v_a_4611_);
lean_dec(v___x_4591_);
v___x_4613_ = lean_box(0);
v_isShared_4614_ = v_isSharedCheck_4618_;
goto v_resetjp_4612_;
}
v_resetjp_4612_:
{
lean_object* v___x_4616_; 
if (v_isShared_4614_ == 0)
{
v___x_4616_ = v___x_4613_;
goto v_reusejp_4615_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v_a_4611_);
v___x_4616_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4615_;
}
v_reusejp_4615_:
{
return v___x_4616_;
}
}
}
v___jp_4579_:
{
if (lean_obj_tag(v___y_4580_) == 0)
{
lean_object* v___x_4581_; 
lean_dec_ref_known(v___y_4580_, 1);
v___x_4581_ = l_Lean_Meta_mkEqMPR(v_a_4578_, v_alt_4566_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
return v___x_4581_;
}
else
{
lean_object* v_a_4582_; lean_object* v___x_4584_; uint8_t v_isShared_4585_; uint8_t v_isSharedCheck_4589_; 
lean_dec(v_a_4578_);
lean_dec_ref(v_alt_4566_);
v_a_4582_ = lean_ctor_get(v___y_4580_, 0);
v_isSharedCheck_4589_ = !lean_is_exclusive(v___y_4580_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4584_ = v___y_4580_;
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
else
{
lean_inc(v_a_4582_);
lean_dec(v___y_4580_);
v___x_4584_ = lean_box(0);
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
v_resetjp_4583_:
{
lean_object* v___x_4587_; 
if (v_isShared_4585_ == 0)
{
v___x_4587_ = v___x_4584_;
goto v_reusejp_4586_;
}
else
{
lean_object* v_reuseFailAlloc_4588_; 
v_reuseFailAlloc_4588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4588_, 0, v_a_4582_);
v___x_4587_ = v_reuseFailAlloc_4588_;
goto v_reusejp_4586_;
}
v_reusejp_4586_:
{
return v___x_4587_;
}
}
}
}
}
else
{
lean_dec_ref(v_alt_4566_);
return v___x_4577_;
}
}
else
{
lean_dec_ref(v_alt_4566_);
return v___x_4574_;
}
}
else
{
lean_dec_ref(v_alt_4566_);
lean_dec_ref(v_expAltType_4564_);
return v___x_4572_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed(lean_object* v___x_4619_, lean_object* v___altIdx_4620_, lean_object* v_expAltType_4621_, lean_object* v___altFVars_4622_, lean_object* v_alt_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_){
_start:
{
uint8_t v___x_33043__boxed_4629_; lean_object* v_res_4630_; 
v___x_33043__boxed_4629_ = lean_unbox(v___x_4619_);
v_res_4630_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__2(v___x_33043__boxed_4629_, v___altIdx_4620_, v_expAltType_4621_, v___altFVars_4622_, v_alt_4623_, v___y_4624_, v___y_4625_, v___y_4626_, v___y_4627_);
lean_dec(v___y_4627_);
lean_dec_ref(v___y_4626_);
lean_dec(v___y_4625_);
lean_dec_ref(v___y_4624_);
lean_dec_ref(v___altFVars_4622_);
lean_dec(v___altIdx_4620_);
return v_res_4630_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(lean_object* v___x_4631_, lean_object* v_e_4632_){
_start:
{
uint8_t v___x_4633_; lean_object* v_d_4635_; lean_object* v_b_4636_; 
v___x_4633_ = l_Lean_Expr_hasFVar(v_e_4632_);
if (v___x_4633_ == 0)
{
return v___x_4633_;
}
else
{
switch(lean_obj_tag(v_e_4632_))
{
case 7:
{
lean_object* v_binderType_4639_; lean_object* v_body_4640_; 
v_binderType_4639_ = lean_ctor_get(v_e_4632_, 1);
v_body_4640_ = lean_ctor_get(v_e_4632_, 2);
v_d_4635_ = v_binderType_4639_;
v_b_4636_ = v_body_4640_;
goto v___jp_4634_;
}
case 6:
{
lean_object* v_binderType_4641_; lean_object* v_body_4642_; 
v_binderType_4641_ = lean_ctor_get(v_e_4632_, 1);
v_body_4642_ = lean_ctor_get(v_e_4632_, 2);
v_d_4635_ = v_binderType_4641_;
v_b_4636_ = v_body_4642_;
goto v___jp_4634_;
}
case 10:
{
lean_object* v_expr_4643_; 
v_expr_4643_ = lean_ctor_get(v_e_4632_, 1);
v_e_4632_ = v_expr_4643_;
goto _start;
}
case 8:
{
lean_object* v_type_4645_; lean_object* v_value_4646_; lean_object* v_body_4647_; uint8_t v___x_4648_; 
v_type_4645_ = lean_ctor_get(v_e_4632_, 1);
v_value_4646_ = lean_ctor_get(v_e_4632_, 2);
v_body_4647_ = lean_ctor_get(v_e_4632_, 3);
v___x_4648_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4631_, v_type_4645_);
if (v___x_4648_ == 0)
{
uint8_t v___x_4649_; 
v___x_4649_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4631_, v_value_4646_);
if (v___x_4649_ == 0)
{
v_e_4632_ = v_body_4647_;
goto _start;
}
else
{
return v___x_4633_;
}
}
else
{
return v___x_4633_;
}
}
case 5:
{
lean_object* v_fn_4651_; lean_object* v_arg_4652_; uint8_t v___x_4653_; 
v_fn_4651_ = lean_ctor_get(v_e_4632_, 0);
v_arg_4652_ = lean_ctor_get(v_e_4632_, 1);
v___x_4653_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4631_, v_fn_4651_);
if (v___x_4653_ == 0)
{
v_e_4632_ = v_arg_4652_;
goto _start;
}
else
{
return v___x_4633_;
}
}
case 11:
{
lean_object* v_struct_4655_; 
v_struct_4655_ = lean_ctor_get(v_e_4632_, 2);
v_e_4632_ = v_struct_4655_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_4657_; lean_object* v___x_4658_; uint8_t v___x_4659_; 
v_fvarId_4657_ = lean_ctor_get(v_e_4632_, 0);
v___x_4658_ = l_Lean_Expr_fvarId_x21(v___x_4631_);
v___x_4659_ = l_Lean_instBEqFVarId_beq(v_fvarId_4657_, v___x_4658_);
lean_dec(v___x_4658_);
return v___x_4659_;
}
default: 
{
uint8_t v___x_4660_; 
v___x_4660_ = 0;
return v___x_4660_;
}
}
}
v___jp_4634_:
{
uint8_t v___x_4637_; 
v___x_4637_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4631_, v_d_4635_);
if (v___x_4637_ == 0)
{
v_e_4632_ = v_b_4636_;
goto _start;
}
else
{
return v___x_4633_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1___boxed(lean_object* v___x_4661_, lean_object* v_e_4662_){
_start:
{
uint8_t v_res_4663_; lean_object* v_r_4664_; 
v_res_4663_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4661_, v_e_4662_);
lean_dec_ref(v_e_4662_);
lean_dec_ref(v___x_4661_);
v_r_4664_ = lean_box(v_res_4663_);
return v_r_4664_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4666_; lean_object* v___x_4667_; 
v___x_4666_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0));
v___x_4667_ = l_Lean_stringToMessageData(v___x_4666_);
return v___x_4667_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_4669_; lean_object* v___x_4670_; 
v___x_4669_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2));
v___x_4670_ = l_Lean_stringToMessageData(v___x_4669_);
return v___x_4670_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_4672_; lean_object* v___x_4673_; 
v___x_4672_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4));
v___x_4673_ = l_Lean_stringToMessageData(v___x_4672_);
return v___x_4673_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(lean_object* v_a_4674_, lean_object* v_termAlt_4675_, lean_object* v_a_4676_, lean_object* v_b_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_){
_start:
{
lean_object* v_array_4683_; lean_object* v_start_4684_; lean_object* v_stop_4685_; lean_object* v___x_4687_; uint8_t v_isShared_4688_; uint8_t v_isSharedCheck_4713_; 
v_array_4683_ = lean_ctor_get(v_a_4676_, 0);
v_start_4684_ = lean_ctor_get(v_a_4676_, 1);
v_stop_4685_ = lean_ctor_get(v_a_4676_, 2);
v_isSharedCheck_4713_ = !lean_is_exclusive(v_a_4676_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4687_ = v_a_4676_;
v_isShared_4688_ = v_isSharedCheck_4713_;
goto v_resetjp_4686_;
}
else
{
lean_inc(v_stop_4685_);
lean_inc(v_start_4684_);
lean_inc(v_array_4683_);
lean_dec(v_a_4676_);
v___x_4687_ = lean_box(0);
v_isShared_4688_ = v_isSharedCheck_4713_;
goto v_resetjp_4686_;
}
v_resetjp_4686_:
{
uint8_t v___x_4689_; 
v___x_4689_ = lean_nat_dec_lt(v_start_4684_, v_stop_4685_);
if (v___x_4689_ == 0)
{
lean_object* v___x_4690_; 
lean_del_object(v___x_4687_);
lean_dec(v_stop_4685_);
lean_dec(v_start_4684_);
lean_dec_ref(v_array_4683_);
lean_dec_ref(v_termAlt_4675_);
lean_dec_ref(v_a_4674_);
v___x_4690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4690_, 0, v_b_4677_);
return v___x_4690_;
}
else
{
lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4695_; 
v___x_4691_ = lean_box(0);
v___x_4692_ = lean_unsigned_to_nat(1u);
v___x_4693_ = lean_nat_add(v_start_4684_, v___x_4692_);
lean_inc_ref(v_array_4683_);
if (v_isShared_4688_ == 0)
{
lean_ctor_set(v___x_4687_, 1, v___x_4693_);
v___x_4695_ = v___x_4687_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_array_4683_);
lean_ctor_set(v_reuseFailAlloc_4712_, 1, v___x_4693_);
lean_ctor_set(v_reuseFailAlloc_4712_, 2, v_stop_4685_);
v___x_4695_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
lean_object* v___x_4696_; uint8_t v___x_4697_; 
v___x_4696_ = lean_array_fget(v_array_4683_, v_start_4684_);
lean_dec(v_start_4684_);
lean_dec_ref(v_array_4683_);
v___x_4697_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4696_, v_a_4674_);
if (v___x_4697_ == 0)
{
lean_dec(v___x_4696_);
v_a_4676_ = v___x_4695_;
v_b_4677_ = v___x_4691_;
goto _start;
}
else
{
lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; 
v___x_4699_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1);
lean_inc_ref(v_a_4674_);
v___x_4700_ = l_Lean_MessageData_ofExpr(v_a_4674_);
v___x_4701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4701_, 0, v___x_4699_);
lean_ctor_set(v___x_4701_, 1, v___x_4700_);
v___x_4702_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3);
v___x_4703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4703_, 0, v___x_4701_);
lean_ctor_set(v___x_4703_, 1, v___x_4702_);
lean_inc_ref(v_termAlt_4675_);
v___x_4704_ = l_Lean_MessageData_ofExpr(v_termAlt_4675_);
v___x_4705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4705_, 0, v___x_4703_);
lean_ctor_set(v___x_4705_, 1, v___x_4704_);
v___x_4706_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5);
v___x_4707_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4707_, 0, v___x_4705_);
lean_ctor_set(v___x_4707_, 1, v___x_4706_);
v___x_4708_ = l_Lean_MessageData_ofExpr(v___x_4696_);
v___x_4709_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4709_, 0, v___x_4707_);
lean_ctor_set(v___x_4709_, 1, v___x_4708_);
v___x_4710_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_4709_, v___y_4678_, v___y_4679_, v___y_4680_, v___y_4681_);
if (lean_obj_tag(v___x_4710_) == 0)
{
lean_dec_ref_known(v___x_4710_, 1);
v_a_4676_ = v___x_4695_;
v_b_4677_ = v___x_4691_;
goto _start;
}
else
{
lean_dec_ref(v___x_4695_);
lean_dec_ref(v_termAlt_4675_);
lean_dec_ref(v_a_4674_);
return v___x_4710_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___boxed(lean_object* v_a_4714_, lean_object* v_termAlt_4715_, lean_object* v_a_4716_, lean_object* v_b_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_){
_start:
{
lean_object* v_res_4723_; 
v_res_4723_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_4714_, v_termAlt_4715_, v_a_4716_, v_b_4717_, v___y_4718_, v___y_4719_, v___y_4720_, v___y_4721_);
lean_dec(v___y_4721_);
lean_dec_ref(v___y_4720_);
lean_dec(v___y_4719_);
lean_dec_ref(v___y_4718_);
return v_res_4723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(lean_object* v_nExtra_4724_, lean_object* v_v_4725_, uint8_t v___x_4726_, uint8_t v___x_4727_, uint8_t v___x_4728_, lean_object* v_xs_4729_, lean_object* v_termAltBody_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_, lean_object* v___y_4733_, lean_object* v___y_4734_){
_start:
{
lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; 
v___x_4736_ = lean_array_get_size(v_xs_4729_);
v___x_4737_ = lean_nat_sub(v___x_4736_, v_nExtra_4724_);
v___x_4738_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_4737_);
lean_inc_ref(v_xs_4729_);
v___x_4739_ = l_Array_toSubarray___redArg(v_xs_4729_, v___x_4738_, v___x_4737_);
v___x_4740_ = l_Array_toSubarray___redArg(v_xs_4729_, v___x_4737_, v___x_4736_);
lean_inc(v___y_4734_);
lean_inc_ref(v___y_4733_);
lean_inc(v___y_4732_);
lean_inc_ref(v___y_4731_);
v___x_4741_ = lean_infer_type(v_termAltBody_4730_, v___y_4731_, v___y_4732_, v___y_4733_, v___y_4734_);
if (lean_obj_tag(v___x_4741_) == 0)
{
lean_object* v_a_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; 
v_a_4742_ = lean_ctor_get(v___x_4741_, 0);
lean_inc_n(v_a_4742_, 2);
lean_dec_ref_known(v___x_4741_, 1);
v___x_4743_ = lean_box(0);
v___x_4744_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_4742_, v_v_4725_, v___x_4740_, v___x_4743_, v___y_4731_, v___y_4732_, v___y_4733_, v___y_4734_);
if (lean_obj_tag(v___x_4744_) == 0)
{
lean_object* v___x_4745_; lean_object* v___x_4746_; 
lean_dec_ref_known(v___x_4744_, 1);
v___x_4745_ = l_Subarray_copy___redArg(v___x_4739_);
v___x_4746_ = l_Lean_Meta_mkLambdaFVars(v___x_4745_, v_a_4742_, v___x_4726_, v___x_4727_, v___x_4726_, v___x_4727_, v___x_4728_, v___y_4731_, v___y_4732_, v___y_4733_, v___y_4734_);
lean_dec_ref(v___x_4745_);
return v___x_4746_;
}
else
{
lean_object* v_a_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4754_; 
lean_dec(v_a_4742_);
lean_dec_ref(v___x_4739_);
v_a_4747_ = lean_ctor_get(v___x_4744_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___x_4744_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4749_ = v___x_4744_;
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_a_4747_);
lean_dec(v___x_4744_);
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
}
else
{
lean_dec_ref(v___x_4740_);
lean_dec_ref(v___x_4739_);
lean_dec(v_v_4725_);
return v___x_4741_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed(lean_object* v_nExtra_4755_, lean_object* v_v_4756_, lean_object* v___x_4757_, lean_object* v___x_4758_, lean_object* v___x_4759_, lean_object* v_xs_4760_, lean_object* v_termAltBody_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_, lean_object* v___y_4765_, lean_object* v___y_4766_){
_start:
{
uint8_t v___x_33332__boxed_4767_; uint8_t v___x_33333__boxed_4768_; uint8_t v___x_33334__boxed_4769_; lean_object* v_res_4770_; 
v___x_33332__boxed_4767_ = lean_unbox(v___x_4757_);
v___x_33333__boxed_4768_ = lean_unbox(v___x_4758_);
v___x_33334__boxed_4769_ = lean_unbox(v___x_4759_);
v_res_4770_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(v_nExtra_4755_, v_v_4756_, v___x_33332__boxed_4767_, v___x_33333__boxed_4768_, v___x_33334__boxed_4769_, v_xs_4760_, v_termAltBody_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
lean_dec(v___y_4765_);
lean_dec_ref(v___y_4764_);
lean_dec(v___y_4763_);
lean_dec_ref(v___y_4762_);
lean_dec(v_nExtra_4755_);
return v_res_4770_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(lean_object* v_nExtra_4771_, size_t v_sz_4772_, size_t v_i_4773_, lean_object* v_bs_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_){
_start:
{
uint8_t v___x_4780_; 
v___x_4780_ = lean_usize_dec_lt(v_i_4773_, v_sz_4772_);
if (v___x_4780_ == 0)
{
lean_object* v___x_4781_; 
lean_dec(v_nExtra_4771_);
v___x_4781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4781_, 0, v_bs_4774_);
return v___x_4781_;
}
else
{
uint8_t v___x_4782_; uint8_t v___x_4783_; lean_object* v_v_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___f_4788_; lean_object* v___x_4789_; lean_object* v_bs_x27_4790_; lean_object* v___x_4791_; 
v___x_4782_ = 0;
v___x_4783_ = 1;
v_v_4784_ = lean_array_uget(v_bs_4774_, v_i_4773_);
v___x_4785_ = lean_box(v___x_4782_);
v___x_4786_ = lean_box(v___x_4780_);
v___x_4787_ = lean_box(v___x_4783_);
lean_inc(v_v_4784_);
lean_inc(v_nExtra_4771_);
v___f_4788_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4788_, 0, v_nExtra_4771_);
lean_closure_set(v___f_4788_, 1, v_v_4784_);
lean_closure_set(v___f_4788_, 2, v___x_4785_);
lean_closure_set(v___f_4788_, 3, v___x_4786_);
lean_closure_set(v___f_4788_, 4, v___x_4787_);
v___x_4789_ = lean_unsigned_to_nat(0u);
v_bs_x27_4790_ = lean_array_uset(v_bs_4774_, v_i_4773_, v___x_4789_);
v___x_4791_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_v_4784_, v___f_4788_, v___x_4782_, v___y_4775_, v___y_4776_, v___y_4777_, v___y_4778_);
if (lean_obj_tag(v___x_4791_) == 0)
{
lean_object* v_a_4792_; size_t v___x_4793_; size_t v___x_4794_; lean_object* v___x_4795_; 
v_a_4792_ = lean_ctor_get(v___x_4791_, 0);
lean_inc(v_a_4792_);
lean_dec_ref_known(v___x_4791_, 1);
v___x_4793_ = ((size_t)1ULL);
v___x_4794_ = lean_usize_add(v_i_4773_, v___x_4793_);
v___x_4795_ = lean_array_uset(v_bs_x27_4790_, v_i_4773_, v_a_4792_);
v_i_4773_ = v___x_4794_;
v_bs_4774_ = v___x_4795_;
goto _start;
}
else
{
lean_object* v_a_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4804_; 
lean_dec_ref(v_bs_x27_4790_);
lean_dec(v_nExtra_4771_);
v_a_4797_ = lean_ctor_get(v___x_4791_, 0);
v_isSharedCheck_4804_ = !lean_is_exclusive(v___x_4791_);
if (v_isSharedCheck_4804_ == 0)
{
v___x_4799_ = v___x_4791_;
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_a_4797_);
lean_dec(v___x_4791_);
v___x_4799_ = lean_box(0);
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
v_resetjp_4798_:
{
lean_object* v___x_4802_; 
if (v_isShared_4800_ == 0)
{
v___x_4802_ = v___x_4799_;
goto v_reusejp_4801_;
}
else
{
lean_object* v_reuseFailAlloc_4803_; 
v_reuseFailAlloc_4803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4803_, 0, v_a_4797_);
v___x_4802_ = v_reuseFailAlloc_4803_;
goto v_reusejp_4801_;
}
v_reusejp_4801_:
{
return v___x_4802_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed(lean_object* v_nExtra_4805_, lean_object* v_sz_4806_, lean_object* v_i_4807_, lean_object* v_bs_4808_, lean_object* v___y_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_){
_start:
{
size_t v_sz_boxed_4814_; size_t v_i_boxed_4815_; lean_object* v_res_4816_; 
v_sz_boxed_4814_ = lean_unbox_usize(v_sz_4806_);
lean_dec(v_sz_4806_);
v_i_boxed_4815_ = lean_unbox_usize(v_i_4807_);
lean_dec(v_i_4807_);
v_res_4816_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(v_nExtra_4805_, v_sz_boxed_4814_, v_i_boxed_4815_, v_bs_4808_, v___y_4809_, v___y_4810_, v___y_4811_, v___y_4812_);
lean_dec(v___y_4812_);
lean_dec_ref(v___y_4811_);
lean_dec(v___y_4810_);
lean_dec_ref(v___y_4809_);
return v_res_4816_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0(void){
_start:
{
lean_object* v___x_4817_; lean_object* v___x_4818_; 
v___x_4817_ = lean_box(0);
v___x_4818_ = l_Lean_Expr_sort___override(v___x_4817_);
return v___x_4818_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1(void){
_start:
{
lean_object* v___x_4819_; lean_object* v___x_4820_; 
v___x_4819_ = lean_box(0);
v___x_4820_ = l_Lean_Level_succ___override(v___x_4819_);
return v___x_4820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3(lean_object* v_nExtra_4821_, uint8_t v___x_4822_, uint8_t v___x_4823_, lean_object* v_alts_4824_, lean_object* v_toMatcherInfo_4825_, lean_object* v_matcherName_4826_, lean_object* v_params_4827_, lean_object* v_matcherLevels_4828_, lean_object* v_motiveArgs_4829_, lean_object* v_body_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_, lean_object* v___y_4834_){
_start:
{
lean_object* v___x_4836_; 
lean_inc(v_nExtra_4821_);
v___x_4836_ = l_Lean_Meta_arrowDomainsN(v_nExtra_4821_, v_body_4830_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_);
if (lean_obj_tag(v___x_4836_) == 0)
{
lean_object* v_a_4837_; lean_object* v___x_4838_; uint8_t v___x_4839_; lean_object* v___x_4840_; 
v_a_4837_ = lean_ctor_get(v___x_4836_, 0);
lean_inc(v_a_4837_);
lean_dec_ref_known(v___x_4836_, 1);
v___x_4838_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0, &l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0);
v___x_4839_ = 1;
v___x_4840_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_4829_, v___x_4838_, v___x_4822_, v___x_4823_, v___x_4822_, v___x_4823_, v___x_4839_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_);
if (lean_obj_tag(v___x_4840_) == 0)
{
lean_object* v_a_4841_; size_t v_sz_4842_; size_t v___x_4843_; lean_object* v___x_4844_; 
v_a_4841_ = lean_ctor_get(v___x_4840_, 0);
lean_inc(v_a_4841_);
lean_dec_ref_known(v___x_4840_, 1);
v_sz_4842_ = lean_array_size(v_alts_4824_);
v___x_4843_ = ((size_t)0ULL);
v___x_4844_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(v_nExtra_4821_, v_sz_4842_, v___x_4843_, v_alts_4824_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_);
if (lean_obj_tag(v___x_4844_) == 0)
{
lean_object* v_a_4845_; lean_object* v_matcherLevels_4847_; lean_object* v___y_4848_; lean_object* v___y_4849_; lean_object* v_uElimPos_x3f_4854_; 
v_a_4845_ = lean_ctor_get(v___x_4844_, 0);
lean_inc(v_a_4845_);
lean_dec_ref_known(v___x_4844_, 1);
v_uElimPos_x3f_4854_ = lean_ctor_get(v_toMatcherInfo_4825_, 3);
if (lean_obj_tag(v_uElimPos_x3f_4854_) == 0)
{
v_matcherLevels_4847_ = v_matcherLevels_4828_;
v___y_4848_ = v___y_4833_;
v___y_4849_ = v___y_4834_;
goto v___jp_4846_;
}
else
{
lean_object* v_val_4855_; lean_object* v___x_4856_; lean_object* v___x_4857_; 
v_val_4855_ = lean_ctor_get(v_uElimPos_x3f_4854_, 0);
v___x_4856_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1);
v___x_4857_ = lean_array_set(v_matcherLevels_4828_, v_val_4855_, v___x_4856_);
v_matcherLevels_4847_ = v___x_4857_;
v___y_4848_ = v___y_4833_;
v___y_4849_ = v___y_4834_;
goto v___jp_4846_;
}
v___jp_4846_:
{
lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; 
v___x_4850_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_4851_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4851_, 0, v_toMatcherInfo_4825_);
lean_ctor_set(v___x_4851_, 1, v_matcherName_4826_);
lean_ctor_set(v___x_4851_, 2, v_matcherLevels_4847_);
lean_ctor_set(v___x_4851_, 3, v_params_4827_);
lean_ctor_set(v___x_4851_, 4, v_a_4841_);
lean_ctor_set(v___x_4851_, 5, v_motiveArgs_4829_);
lean_ctor_set(v___x_4851_, 6, v_a_4845_);
lean_ctor_set(v___x_4851_, 7, v___x_4850_);
v___x_4852_ = l_Lean_Meta_MatcherApp_toExpr(v___x_4851_);
v___x_4853_ = l_Lean_mkArrowN(v_a_4837_, v___x_4852_, v___y_4848_, v___y_4849_);
lean_dec(v_a_4837_);
return v___x_4853_;
}
}
else
{
lean_object* v_a_4858_; lean_object* v___x_4860_; uint8_t v_isShared_4861_; uint8_t v_isSharedCheck_4865_; 
lean_dec(v_a_4841_);
lean_dec(v_a_4837_);
lean_dec_ref(v_motiveArgs_4829_);
lean_dec_ref(v_matcherLevels_4828_);
lean_dec_ref(v_params_4827_);
lean_dec(v_matcherName_4826_);
lean_dec_ref(v_toMatcherInfo_4825_);
v_a_4858_ = lean_ctor_get(v___x_4844_, 0);
v_isSharedCheck_4865_ = !lean_is_exclusive(v___x_4844_);
if (v_isSharedCheck_4865_ == 0)
{
v___x_4860_ = v___x_4844_;
v_isShared_4861_ = v_isSharedCheck_4865_;
goto v_resetjp_4859_;
}
else
{
lean_inc(v_a_4858_);
lean_dec(v___x_4844_);
v___x_4860_ = lean_box(0);
v_isShared_4861_ = v_isSharedCheck_4865_;
goto v_resetjp_4859_;
}
v_resetjp_4859_:
{
lean_object* v___x_4863_; 
if (v_isShared_4861_ == 0)
{
v___x_4863_ = v___x_4860_;
goto v_reusejp_4862_;
}
else
{
lean_object* v_reuseFailAlloc_4864_; 
v_reuseFailAlloc_4864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4864_, 0, v_a_4858_);
v___x_4863_ = v_reuseFailAlloc_4864_;
goto v_reusejp_4862_;
}
v_reusejp_4862_:
{
return v___x_4863_;
}
}
}
}
else
{
lean_dec(v_a_4837_);
lean_dec_ref(v_motiveArgs_4829_);
lean_dec_ref(v_matcherLevels_4828_);
lean_dec_ref(v_params_4827_);
lean_dec(v_matcherName_4826_);
lean_dec_ref(v_toMatcherInfo_4825_);
lean_dec_ref(v_alts_4824_);
lean_dec(v_nExtra_4821_);
return v___x_4840_;
}
}
else
{
lean_object* v_a_4866_; lean_object* v___x_4868_; uint8_t v_isShared_4869_; uint8_t v_isSharedCheck_4873_; 
lean_dec_ref(v_motiveArgs_4829_);
lean_dec_ref(v_matcherLevels_4828_);
lean_dec_ref(v_params_4827_);
lean_dec(v_matcherName_4826_);
lean_dec_ref(v_toMatcherInfo_4825_);
lean_dec_ref(v_alts_4824_);
lean_dec(v_nExtra_4821_);
v_a_4866_ = lean_ctor_get(v___x_4836_, 0);
v_isSharedCheck_4873_ = !lean_is_exclusive(v___x_4836_);
if (v_isSharedCheck_4873_ == 0)
{
v___x_4868_ = v___x_4836_;
v_isShared_4869_ = v_isSharedCheck_4873_;
goto v_resetjp_4867_;
}
else
{
lean_inc(v_a_4866_);
lean_dec(v___x_4836_);
v___x_4868_ = lean_box(0);
v_isShared_4869_ = v_isSharedCheck_4873_;
goto v_resetjp_4867_;
}
v_resetjp_4867_:
{
lean_object* v___x_4871_; 
if (v_isShared_4869_ == 0)
{
v___x_4871_ = v___x_4868_;
goto v_reusejp_4870_;
}
else
{
lean_object* v_reuseFailAlloc_4872_; 
v_reuseFailAlloc_4872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4872_, 0, v_a_4866_);
v___x_4871_ = v_reuseFailAlloc_4872_;
goto v_reusejp_4870_;
}
v_reusejp_4870_:
{
return v___x_4871_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed(lean_object* v_nExtra_4874_, lean_object* v___x_4875_, lean_object* v___x_4876_, lean_object* v_alts_4877_, lean_object* v_toMatcherInfo_4878_, lean_object* v_matcherName_4879_, lean_object* v_params_4880_, lean_object* v_matcherLevels_4881_, lean_object* v_motiveArgs_4882_, lean_object* v_body_4883_, lean_object* v___y_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_){
_start:
{
uint8_t v___x_33467__boxed_4889_; uint8_t v___x_33468__boxed_4890_; lean_object* v_res_4891_; 
v___x_33467__boxed_4889_ = lean_unbox(v___x_4875_);
v___x_33468__boxed_4890_ = lean_unbox(v___x_4876_);
v_res_4891_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__3(v_nExtra_4874_, v___x_33467__boxed_4889_, v___x_33468__boxed_4890_, v_alts_4877_, v_toMatcherInfo_4878_, v_matcherName_4879_, v_params_4880_, v_matcherLevels_4881_, v_motiveArgs_4882_, v_body_4883_, v___y_4884_, v___y_4885_, v___y_4886_, v___y_4887_);
lean_dec(v___y_4887_);
lean_dec_ref(v___y_4886_);
lean_dec(v___y_4885_);
lean_dec_ref(v___y_4884_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(lean_object* v_k_4892_, lean_object* v_ys_4893_, lean_object* v_args_4894_, lean_object* v___mask_4895_, lean_object* v___bodyType_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_){
_start:
{
lean_object* v___x_4902_; 
lean_inc(v___y_4900_);
lean_inc_ref(v___y_4899_);
lean_inc(v___y_4898_);
lean_inc_ref(v___y_4897_);
v___x_4902_ = lean_apply_7(v_k_4892_, v_ys_4893_, v_args_4894_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_, lean_box(0));
return v___x_4902_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed(lean_object* v_k_4903_, lean_object* v_ys_4904_, lean_object* v_args_4905_, lean_object* v___mask_4906_, lean_object* v___bodyType_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_){
_start:
{
lean_object* v_res_4913_; 
v_res_4913_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(v_k_4903_, v_ys_4904_, v_args_4905_, v___mask_4906_, v___bodyType_4907_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
lean_dec(v___y_4911_);
lean_dec_ref(v___y_4910_);
lean_dec(v___y_4909_);
lean_dec_ref(v___y_4908_);
lean_dec_ref(v___bodyType_4907_);
lean_dec_ref(v___mask_4906_);
return v_res_4913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(lean_object* v_origAltType_4914_, lean_object* v_altInfo_4915_, lean_object* v_k_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_, lean_object* v___y_4920_){
_start:
{
lean_object* v___f_4922_; lean_object* v___x_4923_; 
v___f_4922_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_4922_, 0, v_k_4916_);
v___x_4923_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_4914_, v_altInfo_4915_, v___f_4922_, v___y_4917_, v___y_4918_, v___y_4919_, v___y_4920_);
if (lean_obj_tag(v___x_4923_) == 0)
{
lean_object* v_a_4924_; lean_object* v___x_4926_; uint8_t v_isShared_4927_; uint8_t v_isSharedCheck_4931_; 
v_a_4924_ = lean_ctor_get(v___x_4923_, 0);
v_isSharedCheck_4931_ = !lean_is_exclusive(v___x_4923_);
if (v_isSharedCheck_4931_ == 0)
{
v___x_4926_ = v___x_4923_;
v_isShared_4927_ = v_isSharedCheck_4931_;
goto v_resetjp_4925_;
}
else
{
lean_inc(v_a_4924_);
lean_dec(v___x_4923_);
v___x_4926_ = lean_box(0);
v_isShared_4927_ = v_isSharedCheck_4931_;
goto v_resetjp_4925_;
}
v_resetjp_4925_:
{
lean_object* v___x_4929_; 
if (v_isShared_4927_ == 0)
{
v___x_4929_ = v___x_4926_;
goto v_reusejp_4928_;
}
else
{
lean_object* v_reuseFailAlloc_4930_; 
v_reuseFailAlloc_4930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4930_, 0, v_a_4924_);
v___x_4929_ = v_reuseFailAlloc_4930_;
goto v_reusejp_4928_;
}
v_reusejp_4928_:
{
return v___x_4929_;
}
}
}
else
{
lean_object* v_a_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_4939_; 
v_a_4932_ = lean_ctor_get(v___x_4923_, 0);
v_isSharedCheck_4939_ = !lean_is_exclusive(v___x_4923_);
if (v_isSharedCheck_4939_ == 0)
{
v___x_4934_ = v___x_4923_;
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_a_4932_);
lean_dec(v___x_4923_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
lean_object* v___x_4937_; 
if (v_isShared_4935_ == 0)
{
v___x_4937_ = v___x_4934_;
goto v_reusejp_4936_;
}
else
{
lean_object* v_reuseFailAlloc_4938_; 
v_reuseFailAlloc_4938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4938_, 0, v_a_4932_);
v___x_4937_ = v_reuseFailAlloc_4938_;
goto v_reusejp_4936_;
}
v_reusejp_4936_:
{
return v___x_4937_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___boxed(lean_object* v_origAltType_4940_, lean_object* v_altInfo_4941_, lean_object* v_k_4942_, lean_object* v___y_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_, lean_object* v___y_4946_, lean_object* v___y_4947_){
_start:
{
lean_object* v_res_4948_; 
v_res_4948_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v_origAltType_4940_, v_altInfo_4941_, v_k_4942_, v___y_4943_, v___y_4944_, v___y_4945_, v___y_4946_);
lean_dec(v___y_4946_);
lean_dec_ref(v___y_4945_);
lean_dec(v___y_4944_);
lean_dec_ref(v___y_4943_);
return v_res_4948_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(lean_object* v___x_4949_, lean_object* v___x_4950_, lean_object* v___f_4951_, lean_object* v_fst_4952_, lean_object* v___x_4953_, lean_object* v___x_4954_, lean_object* v___x_4955_, lean_object* v___x_4956_, lean_object* v___x_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_){
_start:
{
lean_object* v___x_4963_; 
v___x_4963_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v___x_4949_, v___x_4950_, v___f_4951_, v___y_4958_, v___y_4959_, v___y_4960_, v___y_4961_);
if (lean_obj_tag(v___x_4963_) == 0)
{
lean_object* v_a_4964_; lean_object* v___x_4966_; uint8_t v_isShared_4967_; uint8_t v_isSharedCheck_4978_; 
v_a_4964_ = lean_ctor_get(v___x_4963_, 0);
v_isSharedCheck_4978_ = !lean_is_exclusive(v___x_4963_);
if (v_isSharedCheck_4978_ == 0)
{
v___x_4966_ = v___x_4963_;
v_isShared_4967_ = v_isSharedCheck_4978_;
goto v_resetjp_4965_;
}
else
{
lean_inc(v_a_4964_);
lean_dec(v___x_4963_);
v___x_4966_ = lean_box(0);
v_isShared_4967_ = v_isSharedCheck_4978_;
goto v_resetjp_4965_;
}
v_resetjp_4965_:
{
lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4976_; 
v___x_4968_ = lean_array_push(v_fst_4952_, v_a_4964_);
v___x_4969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4969_, 0, v___x_4953_);
lean_ctor_set(v___x_4969_, 1, v___x_4954_);
v___x_4970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4970_, 0, v___x_4955_);
lean_ctor_set(v___x_4970_, 1, v___x_4969_);
v___x_4971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4971_, 0, v___x_4956_);
lean_ctor_set(v___x_4971_, 1, v___x_4970_);
v___x_4972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4972_, 0, v___x_4957_);
lean_ctor_set(v___x_4972_, 1, v___x_4971_);
v___x_4973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4973_, 0, v___x_4968_);
lean_ctor_set(v___x_4973_, 1, v___x_4972_);
v___x_4974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4974_, 0, v___x_4973_);
if (v_isShared_4967_ == 0)
{
lean_ctor_set(v___x_4966_, 0, v___x_4974_);
v___x_4976_ = v___x_4966_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4977_; 
v_reuseFailAlloc_4977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4977_, 0, v___x_4974_);
v___x_4976_ = v_reuseFailAlloc_4977_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
return v___x_4976_;
}
}
}
else
{
lean_object* v_a_4979_; lean_object* v___x_4981_; uint8_t v_isShared_4982_; uint8_t v_isSharedCheck_4986_; 
lean_dec_ref(v___x_4957_);
lean_dec_ref(v___x_4956_);
lean_dec_ref(v___x_4955_);
lean_dec_ref(v___x_4954_);
lean_dec_ref(v___x_4953_);
lean_dec(v_fst_4952_);
v_a_4979_ = lean_ctor_get(v___x_4963_, 0);
v_isSharedCheck_4986_ = !lean_is_exclusive(v___x_4963_);
if (v_isSharedCheck_4986_ == 0)
{
v___x_4981_ = v___x_4963_;
v_isShared_4982_ = v_isSharedCheck_4986_;
goto v_resetjp_4980_;
}
else
{
lean_inc(v_a_4979_);
lean_dec(v___x_4963_);
v___x_4981_ = lean_box(0);
v_isShared_4982_ = v_isSharedCheck_4986_;
goto v_resetjp_4980_;
}
v_resetjp_4980_:
{
lean_object* v___x_4984_; 
if (v_isShared_4982_ == 0)
{
v___x_4984_ = v___x_4981_;
goto v_reusejp_4983_;
}
else
{
lean_object* v_reuseFailAlloc_4985_; 
v_reuseFailAlloc_4985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4985_, 0, v_a_4979_);
v___x_4984_ = v_reuseFailAlloc_4985_;
goto v_reusejp_4983_;
}
v_reusejp_4983_:
{
return v___x_4984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed(lean_object* v___x_4987_, lean_object* v___x_4988_, lean_object* v___f_4989_, lean_object* v_fst_4990_, lean_object* v___x_4991_, lean_object* v___x_4992_, lean_object* v___x_4993_, lean_object* v___x_4994_, lean_object* v___x_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_, lean_object* v___y_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_){
_start:
{
lean_object* v_res_5001_; 
v_res_5001_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(v___x_4987_, v___x_4988_, v___f_4989_, v_fst_4990_, v___x_4991_, v___x_4992_, v___x_4993_, v___x_4994_, v___x_4995_, v___y_4996_, v___y_4997_, v___y_4998_, v___y_4999_);
lean_dec(v___y_4999_);
lean_dec_ref(v___y_4998_);
lean_dec(v___y_4997_);
lean_dec_ref(v___y_4996_);
return v_res_5001_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(lean_object* v_args_5002_, lean_object* v_ys_5003_, lean_object* v_ys2_5004_, lean_object* v_ys3_5005_, lean_object* v_onAlt_5006_, lean_object* v_a_5007_, uint8_t v___x_5008_, uint8_t v_useSplitter_5009_, lean_object* v___x_5010_, lean_object* v_ys4_5011_, lean_object* v_altType_5012_, lean_object* v___y_5013_, lean_object* v___y_5014_, lean_object* v___y_5015_, lean_object* v___y_5016_){
_start:
{
lean_object* v___y_5019_; lean_object* v___x_5029_; lean_object* v___x_5030_; 
lean_inc_ref(v_args_5002_);
v___x_5029_ = l_Array_append___redArg(v_args_5002_, v_ys3_5005_);
v___x_5030_ = l_Lean_Meta_instantiateLambda(v___x_5010_, v___x_5029_, v___y_5013_, v___y_5014_, v___y_5015_, v___y_5016_);
lean_dec_ref(v___x_5029_);
if (lean_obj_tag(v___x_5030_) == 0)
{
v___y_5019_ = v___x_5030_;
goto v___jp_5018_;
}
else
{
lean_object* v_a_5031_; uint8_t v___y_5033_; uint8_t v___x_5036_; 
v_a_5031_ = lean_ctor_get(v___x_5030_, 0);
lean_inc(v_a_5031_);
v___x_5036_ = l_Lean_Exception_isInterrupt(v_a_5031_);
if (v___x_5036_ == 0)
{
uint8_t v___x_5037_; 
v___x_5037_ = l_Lean_Exception_isRuntime(v_a_5031_);
v___y_5033_ = v___x_5037_;
goto v___jp_5032_;
}
else
{
lean_dec(v_a_5031_);
v___y_5033_ = v___x_5036_;
goto v___jp_5032_;
}
v___jp_5032_:
{
if (v___y_5033_ == 0)
{
lean_object* v___x_5034_; lean_object* v___x_5035_; 
lean_dec_ref_known(v___x_5030_, 1);
v___x_5034_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2);
v___x_5035_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_5034_, v___y_5013_, v___y_5014_, v___y_5015_, v___y_5016_);
v___y_5019_ = v___x_5035_;
goto v___jp_5018_;
}
else
{
v___y_5019_ = v___x_5030_;
goto v___jp_5018_;
}
}
}
v___jp_5018_:
{
if (lean_obj_tag(v___y_5019_) == 0)
{
lean_object* v_a_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; 
v_a_5020_ = lean_ctor_get(v___y_5019_, 0);
lean_inc(v_a_5020_);
lean_dec_ref_known(v___y_5019_, 1);
lean_inc_ref(v_ys4_5011_);
lean_inc_ref(v_ys3_5005_);
lean_inc_ref(v_ys2_5004_);
lean_inc_ref(v_ys_5003_);
v___x_5021_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5021_, 0, v_args_5002_);
lean_ctor_set(v___x_5021_, 1, v_ys_5003_);
lean_ctor_set(v___x_5021_, 2, v_ys2_5004_);
lean_ctor_set(v___x_5021_, 3, v_ys3_5005_);
lean_ctor_set(v___x_5021_, 4, v_ys4_5011_);
lean_inc(v___y_5016_);
lean_inc_ref(v___y_5015_);
lean_inc(v___y_5014_);
lean_inc_ref(v___y_5013_);
v___x_5022_ = lean_apply_9(v_onAlt_5006_, v_a_5007_, v_altType_5012_, v___x_5021_, v_a_5020_, v___y_5013_, v___y_5014_, v___y_5015_, v___y_5016_, lean_box(0));
if (lean_obj_tag(v___x_5022_) == 0)
{
lean_object* v_a_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; uint8_t v___x_5027_; lean_object* v___x_5028_; 
v_a_5023_ = lean_ctor_get(v___x_5022_, 0);
lean_inc(v_a_5023_);
lean_dec_ref_known(v___x_5022_, 1);
v___x_5024_ = l_Array_append___redArg(v_ys_5003_, v_ys2_5004_);
lean_dec_ref(v_ys2_5004_);
v___x_5025_ = l_Array_append___redArg(v___x_5024_, v_ys3_5005_);
lean_dec_ref(v_ys3_5005_);
v___x_5026_ = l_Array_append___redArg(v___x_5025_, v_ys4_5011_);
lean_dec_ref(v_ys4_5011_);
v___x_5027_ = 1;
v___x_5028_ = l_Lean_Meta_mkLambdaFVars(v___x_5026_, v_a_5023_, v___x_5008_, v_useSplitter_5009_, v___x_5008_, v_useSplitter_5009_, v___x_5027_, v___y_5013_, v___y_5014_, v___y_5015_, v___y_5016_);
lean_dec_ref(v___x_5026_);
return v___x_5028_;
}
else
{
lean_dec_ref(v_ys4_5011_);
lean_dec_ref(v_ys3_5005_);
lean_dec_ref(v_ys2_5004_);
lean_dec_ref(v_ys_5003_);
return v___x_5022_;
}
}
else
{
lean_dec_ref(v_altType_5012_);
lean_dec_ref(v_ys4_5011_);
lean_dec(v_a_5007_);
lean_dec_ref(v_onAlt_5006_);
lean_dec_ref(v_ys3_5005_);
lean_dec_ref(v_ys2_5004_);
lean_dec_ref(v_ys_5003_);
lean_dec_ref(v_args_5002_);
return v___y_5019_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed(lean_object* v_args_5038_, lean_object* v_ys_5039_, lean_object* v_ys2_5040_, lean_object* v_ys3_5041_, lean_object* v_onAlt_5042_, lean_object* v_a_5043_, lean_object* v___x_5044_, lean_object* v_useSplitter_5045_, lean_object* v___x_5046_, lean_object* v_ys4_5047_, lean_object* v_altType_5048_, lean_object* v___y_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_, lean_object* v___y_5052_, lean_object* v___y_5053_){
_start:
{
uint8_t v___x_33721__boxed_5054_; uint8_t v_useSplitter_boxed_5055_; lean_object* v_res_5056_; 
v___x_33721__boxed_5054_ = lean_unbox(v___x_5044_);
v_useSplitter_boxed_5055_ = lean_unbox(v_useSplitter_5045_);
v_res_5056_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(v_args_5038_, v_ys_5039_, v_ys2_5040_, v_ys3_5041_, v_onAlt_5042_, v_a_5043_, v___x_33721__boxed_5054_, v_useSplitter_boxed_5055_, v___x_5046_, v_ys4_5047_, v_altType_5048_, v___y_5049_, v___y_5050_, v___y_5051_, v___y_5052_);
lean_dec(v___y_5052_);
lean_dec_ref(v___y_5051_);
lean_dec(v___y_5050_);
lean_dec_ref(v___y_5049_);
return v_res_5056_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(lean_object* v_args_5057_, lean_object* v_ys_5058_, lean_object* v_ys2_5059_, lean_object* v_onAlt_5060_, lean_object* v_a_5061_, uint8_t v___x_5062_, uint8_t v_useSplitter_5063_, lean_object* v___x_5064_, lean_object* v_extraEqualities_5065_, lean_object* v_ys3_5066_, lean_object* v_altType_5067_, lean_object* v___y_5068_, lean_object* v___y_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_){
_start:
{
lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___f_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; 
v___x_5073_ = lean_box(v___x_5062_);
v___x_5074_ = lean_box(v_useSplitter_5063_);
v___f_5075_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed), 16, 9);
lean_closure_set(v___f_5075_, 0, v_args_5057_);
lean_closure_set(v___f_5075_, 1, v_ys_5058_);
lean_closure_set(v___f_5075_, 2, v_ys2_5059_);
lean_closure_set(v___f_5075_, 3, v_ys3_5066_);
lean_closure_set(v___f_5075_, 4, v_onAlt_5060_);
lean_closure_set(v___f_5075_, 5, v_a_5061_);
lean_closure_set(v___f_5075_, 6, v___x_5073_);
lean_closure_set(v___f_5075_, 7, v___x_5074_);
lean_closure_set(v___f_5075_, 8, v___x_5064_);
v___x_5076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5076_, 0, v_extraEqualities_5065_);
v___x_5077_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_5067_, v___x_5076_, v___f_5075_, v___x_5062_, v___x_5062_, v___y_5068_, v___y_5069_, v___y_5070_, v___y_5071_);
return v___x_5077_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed(lean_object* v_args_5078_, lean_object* v_ys_5079_, lean_object* v_ys2_5080_, lean_object* v_onAlt_5081_, lean_object* v_a_5082_, lean_object* v___x_5083_, lean_object* v_useSplitter_5084_, lean_object* v___x_5085_, lean_object* v_extraEqualities_5086_, lean_object* v_ys3_5087_, lean_object* v_altType_5088_, lean_object* v___y_5089_, lean_object* v___y_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_){
_start:
{
uint8_t v___x_33786__boxed_5094_; uint8_t v_useSplitter_boxed_5095_; lean_object* v_res_5096_; 
v___x_33786__boxed_5094_ = lean_unbox(v___x_5083_);
v_useSplitter_boxed_5095_ = lean_unbox(v_useSplitter_5084_);
v_res_5096_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(v_args_5078_, v_ys_5079_, v_ys2_5080_, v_onAlt_5081_, v_a_5082_, v___x_33786__boxed_5094_, v_useSplitter_boxed_5095_, v___x_5085_, v_extraEqualities_5086_, v_ys3_5087_, v_altType_5088_, v___y_5089_, v___y_5090_, v___y_5091_, v___y_5092_);
lean_dec(v___y_5092_);
lean_dec_ref(v___y_5091_);
lean_dec(v___y_5090_);
lean_dec_ref(v___y_5089_);
return v_res_5096_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(lean_object* v_args_5097_, lean_object* v_ys_5098_, lean_object* v_onAlt_5099_, lean_object* v_a_5100_, uint8_t v___x_5101_, uint8_t v_useSplitter_5102_, lean_object* v___x_5103_, lean_object* v_extraEqualities_5104_, lean_object* v_numDiscrEqs_5105_, lean_object* v_ys2_5106_, lean_object* v_altType_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_){
_start:
{
lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___f_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; 
v___x_5113_ = lean_box(v___x_5101_);
v___x_5114_ = lean_box(v_useSplitter_5102_);
v___f_5115_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed), 16, 9);
lean_closure_set(v___f_5115_, 0, v_args_5097_);
lean_closure_set(v___f_5115_, 1, v_ys_5098_);
lean_closure_set(v___f_5115_, 2, v_ys2_5106_);
lean_closure_set(v___f_5115_, 3, v_onAlt_5099_);
lean_closure_set(v___f_5115_, 4, v_a_5100_);
lean_closure_set(v___f_5115_, 5, v___x_5113_);
lean_closure_set(v___f_5115_, 6, v___x_5114_);
lean_closure_set(v___f_5115_, 7, v___x_5103_);
lean_closure_set(v___f_5115_, 8, v_extraEqualities_5104_);
v___x_5116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5116_, 0, v_numDiscrEqs_5105_);
v___x_5117_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_5107_, v___x_5116_, v___f_5115_, v___x_5101_, v___x_5101_, v___y_5108_, v___y_5109_, v___y_5110_, v___y_5111_);
return v___x_5117_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed(lean_object* v_args_5118_, lean_object* v_ys_5119_, lean_object* v_onAlt_5120_, lean_object* v_a_5121_, lean_object* v___x_5122_, lean_object* v_useSplitter_5123_, lean_object* v___x_5124_, lean_object* v_extraEqualities_5125_, lean_object* v_numDiscrEqs_5126_, lean_object* v_ys2_5127_, lean_object* v_altType_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_){
_start:
{
uint8_t v___x_33817__boxed_5134_; uint8_t v_useSplitter_boxed_5135_; lean_object* v_res_5136_; 
v___x_33817__boxed_5134_ = lean_unbox(v___x_5122_);
v_useSplitter_boxed_5135_ = lean_unbox(v_useSplitter_5123_);
v_res_5136_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(v_args_5118_, v_ys_5119_, v_onAlt_5120_, v_a_5121_, v___x_33817__boxed_5134_, v_useSplitter_boxed_5135_, v___x_5124_, v_extraEqualities_5125_, v_numDiscrEqs_5126_, v_ys2_5127_, v_altType_5128_, v___y_5129_, v___y_5130_, v___y_5131_, v___y_5132_);
lean_dec(v___y_5132_);
lean_dec_ref(v___y_5131_);
lean_dec(v___y_5130_);
lean_dec_ref(v___y_5129_);
return v_res_5136_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(lean_object* v_msg_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_){
_start:
{
lean_object* v___f_5153_; lean_object* v___f_5154_; lean_object* v___f_5155_; lean_object* v___f_5156_; lean_object* v___f_5157_; lean_object* v___f_5158_; lean_object* v___f_5159_; lean_object* v___f_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v_toApplicative_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5226_; 
v___f_5153_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0));
v___f_5154_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1));
v___f_5155_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2));
v___f_5156_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3));
v___f_5157_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4));
v___f_5158_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_5158_, 0, v___f_5157_);
lean_closure_set(v___f_5158_, 1, v___f_5156_);
v___f_5159_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_5159_, 0, v___f_5156_);
v___f_5160_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__5));
v___x_5161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5161_, 0, v___f_5153_);
lean_ctor_set(v___x_5161_, 1, v___f_5154_);
v___x_5162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5162_, 0, v___x_5161_);
lean_ctor_set(v___x_5162_, 1, v___f_5155_);
lean_ctor_set(v___x_5162_, 2, v___f_5158_);
lean_ctor_set(v___x_5162_, 3, v___f_5159_);
lean_ctor_set(v___x_5162_, 4, v___f_5160_);
v___x_5163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5163_, 0, v___x_5162_);
lean_ctor_set(v___x_5163_, 1, v___f_5156_);
v___x_5164_ = l_StateRefT_x27_instMonad___redArg(v___x_5163_);
v_toApplicative_5165_ = lean_ctor_get(v___x_5164_, 0);
v_isSharedCheck_5226_ = !lean_is_exclusive(v___x_5164_);
if (v_isSharedCheck_5226_ == 0)
{
lean_object* v_unused_5227_; 
v_unused_5227_ = lean_ctor_get(v___x_5164_, 1);
lean_dec(v_unused_5227_);
v___x_5167_ = v___x_5164_;
v_isShared_5168_ = v_isSharedCheck_5226_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_toApplicative_5165_);
lean_dec(v___x_5164_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5226_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
lean_object* v_toFunctor_5169_; lean_object* v_toSeq_5170_; lean_object* v_toSeqLeft_5171_; lean_object* v_toSeqRight_5172_; lean_object* v___x_5174_; uint8_t v_isShared_5175_; uint8_t v_isSharedCheck_5224_; 
v_toFunctor_5169_ = lean_ctor_get(v_toApplicative_5165_, 0);
v_toSeq_5170_ = lean_ctor_get(v_toApplicative_5165_, 2);
v_toSeqLeft_5171_ = lean_ctor_get(v_toApplicative_5165_, 3);
v_toSeqRight_5172_ = lean_ctor_get(v_toApplicative_5165_, 4);
v_isSharedCheck_5224_ = !lean_is_exclusive(v_toApplicative_5165_);
if (v_isSharedCheck_5224_ == 0)
{
lean_object* v_unused_5225_; 
v_unused_5225_ = lean_ctor_get(v_toApplicative_5165_, 1);
lean_dec(v_unused_5225_);
v___x_5174_ = v_toApplicative_5165_;
v_isShared_5175_ = v_isSharedCheck_5224_;
goto v_resetjp_5173_;
}
else
{
lean_inc(v_toSeqRight_5172_);
lean_inc(v_toSeqLeft_5171_);
lean_inc(v_toSeq_5170_);
lean_inc(v_toFunctor_5169_);
lean_dec(v_toApplicative_5165_);
v___x_5174_ = lean_box(0);
v_isShared_5175_ = v_isSharedCheck_5224_;
goto v_resetjp_5173_;
}
v_resetjp_5173_:
{
lean_object* v___f_5176_; lean_object* v___f_5177_; lean_object* v___f_5178_; lean_object* v___f_5179_; lean_object* v___x_5180_; lean_object* v___f_5181_; lean_object* v___f_5182_; lean_object* v___f_5183_; lean_object* v___x_5185_; 
v___f_5176_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__6));
v___f_5177_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__7));
lean_inc_ref(v_toFunctor_5169_);
v___f_5178_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5178_, 0, v_toFunctor_5169_);
v___f_5179_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5179_, 0, v_toFunctor_5169_);
v___x_5180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5180_, 0, v___f_5178_);
lean_ctor_set(v___x_5180_, 1, v___f_5179_);
v___f_5181_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5181_, 0, v_toSeqRight_5172_);
v___f_5182_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_5182_, 0, v_toSeqLeft_5171_);
v___f_5183_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_5183_, 0, v_toSeq_5170_);
if (v_isShared_5175_ == 0)
{
lean_ctor_set(v___x_5174_, 4, v___f_5181_);
lean_ctor_set(v___x_5174_, 3, v___f_5182_);
lean_ctor_set(v___x_5174_, 2, v___f_5183_);
lean_ctor_set(v___x_5174_, 1, v___f_5176_);
lean_ctor_set(v___x_5174_, 0, v___x_5180_);
v___x_5185_ = v___x_5174_;
goto v_reusejp_5184_;
}
else
{
lean_object* v_reuseFailAlloc_5223_; 
v_reuseFailAlloc_5223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5223_, 0, v___x_5180_);
lean_ctor_set(v_reuseFailAlloc_5223_, 1, v___f_5176_);
lean_ctor_set(v_reuseFailAlloc_5223_, 2, v___f_5183_);
lean_ctor_set(v_reuseFailAlloc_5223_, 3, v___f_5182_);
lean_ctor_set(v_reuseFailAlloc_5223_, 4, v___f_5181_);
v___x_5185_ = v_reuseFailAlloc_5223_;
goto v_reusejp_5184_;
}
v_reusejp_5184_:
{
lean_object* v___x_5187_; 
if (v_isShared_5168_ == 0)
{
lean_ctor_set(v___x_5167_, 1, v___f_5177_);
lean_ctor_set(v___x_5167_, 0, v___x_5185_);
v___x_5187_ = v___x_5167_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v___x_5185_);
lean_ctor_set(v_reuseFailAlloc_5222_, 1, v___f_5177_);
v___x_5187_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
lean_object* v___x_5188_; lean_object* v_toApplicative_5189_; lean_object* v___x_5191_; uint8_t v_isShared_5192_; uint8_t v_isSharedCheck_5220_; 
v___x_5188_ = l_StateRefT_x27_instMonad___redArg(v___x_5187_);
v_toApplicative_5189_ = lean_ctor_get(v___x_5188_, 0);
v_isSharedCheck_5220_ = !lean_is_exclusive(v___x_5188_);
if (v_isSharedCheck_5220_ == 0)
{
lean_object* v_unused_5221_; 
v_unused_5221_ = lean_ctor_get(v___x_5188_, 1);
lean_dec(v_unused_5221_);
v___x_5191_ = v___x_5188_;
v_isShared_5192_ = v_isSharedCheck_5220_;
goto v_resetjp_5190_;
}
else
{
lean_inc(v_toApplicative_5189_);
lean_dec(v___x_5188_);
v___x_5191_ = lean_box(0);
v_isShared_5192_ = v_isSharedCheck_5220_;
goto v_resetjp_5190_;
}
v_resetjp_5190_:
{
lean_object* v_toFunctor_5193_; lean_object* v_toSeq_5194_; lean_object* v_toSeqLeft_5195_; lean_object* v_toSeqRight_5196_; lean_object* v___x_5198_; uint8_t v_isShared_5199_; uint8_t v_isSharedCheck_5218_; 
v_toFunctor_5193_ = lean_ctor_get(v_toApplicative_5189_, 0);
v_toSeq_5194_ = lean_ctor_get(v_toApplicative_5189_, 2);
v_toSeqLeft_5195_ = lean_ctor_get(v_toApplicative_5189_, 3);
v_toSeqRight_5196_ = lean_ctor_get(v_toApplicative_5189_, 4);
v_isSharedCheck_5218_ = !lean_is_exclusive(v_toApplicative_5189_);
if (v_isSharedCheck_5218_ == 0)
{
lean_object* v_unused_5219_; 
v_unused_5219_ = lean_ctor_get(v_toApplicative_5189_, 1);
lean_dec(v_unused_5219_);
v___x_5198_ = v_toApplicative_5189_;
v_isShared_5199_ = v_isSharedCheck_5218_;
goto v_resetjp_5197_;
}
else
{
lean_inc(v_toSeqRight_5196_);
lean_inc(v_toSeqLeft_5195_);
lean_inc(v_toSeq_5194_);
lean_inc(v_toFunctor_5193_);
lean_dec(v_toApplicative_5189_);
v___x_5198_ = lean_box(0);
v_isShared_5199_ = v_isSharedCheck_5218_;
goto v_resetjp_5197_;
}
v_resetjp_5197_:
{
lean_object* v___f_5200_; lean_object* v___f_5201_; lean_object* v___f_5202_; lean_object* v___f_5203_; lean_object* v___x_5204_; lean_object* v___f_5205_; lean_object* v___f_5206_; lean_object* v___f_5207_; lean_object* v___x_5209_; 
v___f_5200_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__8));
v___f_5201_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__9));
lean_inc_ref(v_toFunctor_5193_);
v___f_5202_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5202_, 0, v_toFunctor_5193_);
v___f_5203_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5203_, 0, v_toFunctor_5193_);
v___x_5204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5204_, 0, v___f_5202_);
lean_ctor_set(v___x_5204_, 1, v___f_5203_);
v___f_5205_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5205_, 0, v_toSeqRight_5196_);
v___f_5206_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_5206_, 0, v_toSeqLeft_5195_);
v___f_5207_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_5207_, 0, v_toSeq_5194_);
if (v_isShared_5199_ == 0)
{
lean_ctor_set(v___x_5198_, 4, v___f_5205_);
lean_ctor_set(v___x_5198_, 3, v___f_5206_);
lean_ctor_set(v___x_5198_, 2, v___f_5207_);
lean_ctor_set(v___x_5198_, 1, v___f_5200_);
lean_ctor_set(v___x_5198_, 0, v___x_5204_);
v___x_5209_ = v___x_5198_;
goto v_reusejp_5208_;
}
else
{
lean_object* v_reuseFailAlloc_5217_; 
v_reuseFailAlloc_5217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5217_, 0, v___x_5204_);
lean_ctor_set(v_reuseFailAlloc_5217_, 1, v___f_5200_);
lean_ctor_set(v_reuseFailAlloc_5217_, 2, v___f_5207_);
lean_ctor_set(v_reuseFailAlloc_5217_, 3, v___f_5206_);
lean_ctor_set(v_reuseFailAlloc_5217_, 4, v___f_5205_);
v___x_5209_ = v_reuseFailAlloc_5217_;
goto v_reusejp_5208_;
}
v_reusejp_5208_:
{
lean_object* v___x_5211_; 
if (v_isShared_5192_ == 0)
{
lean_ctor_set(v___x_5191_, 1, v___f_5201_);
lean_ctor_set(v___x_5191_, 0, v___x_5209_);
v___x_5211_ = v___x_5191_;
goto v_reusejp_5210_;
}
else
{
lean_object* v_reuseFailAlloc_5216_; 
v_reuseFailAlloc_5216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5216_, 0, v___x_5209_);
lean_ctor_set(v_reuseFailAlloc_5216_, 1, v___f_5201_);
v___x_5211_ = v_reuseFailAlloc_5216_;
goto v_reusejp_5210_;
}
v_reusejp_5210_:
{
lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_27723__overap_5214_; lean_object* v___x_5215_; 
v___x_5212_ = l_Lean_instInhabitedExpr;
v___x_5213_ = l_instInhabitedOfMonad___redArg(v___x_5211_, v___x_5212_);
v___x_27723__overap_5214_ = lean_panic_fn_borrowed(v___x_5213_, v_msg_5147_);
lean_dec(v___x_5213_);
lean_inc(v___y_5151_);
lean_inc_ref(v___y_5150_);
lean_inc(v___y_5149_);
lean_inc_ref(v___y_5148_);
v___x_5215_ = lean_apply_5(v___x_27723__overap_5214_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_, lean_box(0));
return v___x_5215_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed(lean_object* v_msg_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_){
_start:
{
lean_object* v_res_5234_; 
v_res_5234_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(v_msg_5228_, v___y_5229_, v___y_5230_, v___y_5231_, v___y_5232_);
lean_dec(v___y_5232_);
lean_dec_ref(v___y_5231_);
lean_dec(v___y_5230_);
lean_dec_ref(v___y_5229_);
return v_res_5234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(lean_object* v___x_5235_, lean_object* v_onAlt_5236_, lean_object* v_a_5237_, uint8_t v___x_5238_, uint8_t v_useSplitter_5239_, lean_object* v___x_5240_, lean_object* v_extraEqualities_5241_, lean_object* v_numDiscrEqs_5242_, lean_object* v___x_5243_, lean_object* v___x_5244_, lean_object* v___x_5245_, lean_object* v_ys_5246_, lean_object* v_args_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_){
_start:
{
lean_object* v_numFields_5253_; lean_object* v_numOverlaps_5254_; uint8_t v_hasUnitThunk_5255_; lean_object* v___x_5256_; uint8_t v___x_5257_; 
v_numFields_5253_ = lean_ctor_get(v___x_5235_, 0);
v_numOverlaps_5254_ = lean_ctor_get(v___x_5235_, 1);
v_hasUnitThunk_5255_ = lean_ctor_get_uint8(v___x_5235_, sizeof(void*)*2);
v___x_5256_ = lean_array_get_size(v_ys_5246_);
v___x_5257_ = lean_nat_dec_eq(v___x_5256_, v_numFields_5253_);
if (v___x_5257_ == 0)
{
lean_object* v___x_5258_; lean_object* v___x_5259_; 
lean_dec_ref(v_args_5247_);
lean_dec_ref(v_ys_5246_);
lean_dec_ref(v___x_5243_);
lean_dec(v_numDiscrEqs_5242_);
lean_dec(v_extraEqualities_5241_);
lean_dec_ref(v___x_5240_);
lean_dec(v_a_5237_);
lean_dec_ref(v_onAlt_5236_);
v___x_5258_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3);
v___x_5259_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(v___x_5258_, v___y_5248_, v___y_5249_, v___y_5250_, v___y_5251_);
return v___x_5259_;
}
else
{
lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___f_5262_; lean_object* v_altType_5264_; lean_object* v___y_5265_; lean_object* v___y_5266_; lean_object* v___y_5267_; lean_object* v___y_5268_; lean_object* v___x_5278_; 
v___x_5260_ = lean_box(v___x_5238_);
v___x_5261_ = lean_box(v_useSplitter_5239_);
lean_inc_ref(v_ys_5246_);
v___f_5262_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed), 16, 9);
lean_closure_set(v___f_5262_, 0, v_args_5247_);
lean_closure_set(v___f_5262_, 1, v_ys_5246_);
lean_closure_set(v___f_5262_, 2, v_onAlt_5236_);
lean_closure_set(v___f_5262_, 3, v_a_5237_);
lean_closure_set(v___f_5262_, 4, v___x_5260_);
lean_closure_set(v___f_5262_, 5, v___x_5261_);
lean_closure_set(v___f_5262_, 6, v___x_5240_);
lean_closure_set(v___f_5262_, 7, v_extraEqualities_5241_);
lean_closure_set(v___f_5262_, 8, v_numDiscrEqs_5242_);
v___x_5278_ = l_Lean_Meta_instantiateForall(v___x_5243_, v_ys_5246_, v___y_5248_, v___y_5249_, v___y_5250_, v___y_5251_);
lean_dec_ref(v_ys_5246_);
if (lean_obj_tag(v___x_5278_) == 0)
{
uint8_t v_hasUnitThunk_5279_; 
v_hasUnitThunk_5279_ = lean_ctor_get_uint8(v___x_5244_, sizeof(void*)*2);
if (v_hasUnitThunk_5279_ == 0)
{
lean_object* v_a_5280_; 
v_a_5280_ = lean_ctor_get(v___x_5278_, 0);
lean_inc(v_a_5280_);
lean_dec_ref_known(v___x_5278_, 1);
v_altType_5264_ = v_a_5280_;
v___y_5265_ = v___y_5248_;
v___y_5266_ = v___y_5249_;
v___y_5267_ = v___y_5250_;
v___y_5268_ = v___y_5251_;
goto v___jp_5263_;
}
else
{
lean_object* v_a_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; 
v_a_5281_ = lean_ctor_get(v___x_5278_, 0);
lean_inc(v_a_5281_);
lean_dec_ref_known(v___x_5278_, 1);
v___x_5282_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2);
v___x_5283_ = lean_mk_empty_array_with_capacity(v___x_5245_);
v___x_5284_ = lean_array_push(v___x_5283_, v___x_5282_);
v___x_5285_ = l_Lean_Meta_instantiateForall(v_a_5281_, v___x_5284_, v___y_5248_, v___y_5249_, v___y_5250_, v___y_5251_);
lean_dec_ref(v___x_5284_);
if (lean_obj_tag(v___x_5285_) == 0)
{
lean_object* v_a_5286_; 
v_a_5286_ = lean_ctor_get(v___x_5285_, 0);
lean_inc(v_a_5286_);
lean_dec_ref_known(v___x_5285_, 1);
v_altType_5264_ = v_a_5286_;
v___y_5265_ = v___y_5248_;
v___y_5266_ = v___y_5249_;
v___y_5267_ = v___y_5250_;
v___y_5268_ = v___y_5251_;
goto v___jp_5263_;
}
else
{
lean_dec_ref(v___f_5262_);
return v___x_5285_;
}
}
}
else
{
lean_dec_ref(v___f_5262_);
return v___x_5278_;
}
v___jp_5263_:
{
lean_object* v___x_5269_; lean_object* v___x_5270_; 
lean_inc(v_numOverlaps_5254_);
v___x_5269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5269_, 0, v_numOverlaps_5254_);
v___x_5270_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_5264_, v___x_5269_, v___f_5262_, v___x_5238_, v___x_5238_, v___y_5265_, v___y_5266_, v___y_5267_, v___y_5268_);
if (lean_obj_tag(v___x_5270_) == 0)
{
if (v_hasUnitThunk_5255_ == 0)
{
return v___x_5270_;
}
else
{
lean_object* v_a_5271_; lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; 
v_a_5271_ = lean_ctor_get(v___x_5270_, 0);
lean_inc(v_a_5271_);
lean_dec_ref_known(v___x_5270_, 1);
v___x_5272_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2));
v___x_5273_ = lean_unsigned_to_nat(2u);
v___x_5274_ = lean_mk_empty_array_with_capacity(v___x_5273_);
lean_dec_ref(v___x_5274_);
v___x_5275_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6);
v___x_5276_ = lean_array_push(v___x_5275_, v_a_5271_);
v___x_5277_ = l_Lean_Meta_mkAppM(v___x_5272_, v___x_5276_, v___y_5265_, v___y_5266_, v___y_5267_, v___y_5268_);
return v___x_5277_;
}
}
else
{
return v___x_5270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_5287_ = _args[0];
lean_object* v_onAlt_5288_ = _args[1];
lean_object* v_a_5289_ = _args[2];
lean_object* v___x_5290_ = _args[3];
lean_object* v_useSplitter_5291_ = _args[4];
lean_object* v___x_5292_ = _args[5];
lean_object* v_extraEqualities_5293_ = _args[6];
lean_object* v_numDiscrEqs_5294_ = _args[7];
lean_object* v___x_5295_ = _args[8];
lean_object* v___x_5296_ = _args[9];
lean_object* v___x_5297_ = _args[10];
lean_object* v_ys_5298_ = _args[11];
lean_object* v_args_5299_ = _args[12];
lean_object* v___y_5300_ = _args[13];
lean_object* v___y_5301_ = _args[14];
lean_object* v___y_5302_ = _args[15];
lean_object* v___y_5303_ = _args[16];
lean_object* v___y_5304_ = _args[17];
_start:
{
uint8_t v___x_34054__boxed_5305_; uint8_t v_useSplitter_boxed_5306_; lean_object* v_res_5307_; 
v___x_34054__boxed_5305_ = lean_unbox(v___x_5290_);
v_useSplitter_boxed_5306_ = lean_unbox(v_useSplitter_5291_);
v_res_5307_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(v___x_5287_, v_onAlt_5288_, v_a_5289_, v___x_34054__boxed_5305_, v_useSplitter_boxed_5306_, v___x_5292_, v_extraEqualities_5293_, v_numDiscrEqs_5294_, v___x_5295_, v___x_5296_, v___x_5297_, v_ys_5298_, v_args_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
lean_dec(v___y_5303_);
lean_dec_ref(v___y_5302_);
lean_dec(v___y_5301_);
lean_dec_ref(v___y_5300_);
lean_dec(v___x_5297_);
lean_dec_ref(v___x_5296_);
lean_dec_ref(v___x_5287_);
return v_res_5307_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(lean_object* v_msg_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_){
_start:
{
lean_object* v___f_5314_; lean_object* v___f_5315_; lean_object* v___f_5316_; lean_object* v___f_5317_; lean_object* v___f_5318_; lean_object* v___f_5319_; lean_object* v___f_5320_; lean_object* v___f_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; lean_object* v_toApplicative_5326_; lean_object* v___x_5328_; uint8_t v_isShared_5329_; uint8_t v_isSharedCheck_5387_; 
v___f_5314_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0));
v___f_5315_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1));
v___f_5316_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2));
v___f_5317_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3));
v___f_5318_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4));
v___f_5319_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_5319_, 0, v___f_5318_);
lean_closure_set(v___f_5319_, 1, v___f_5317_);
v___f_5320_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_5320_, 0, v___f_5317_);
v___f_5321_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__5));
v___x_5322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5322_, 0, v___f_5314_);
lean_ctor_set(v___x_5322_, 1, v___f_5315_);
v___x_5323_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5323_, 0, v___x_5322_);
lean_ctor_set(v___x_5323_, 1, v___f_5316_);
lean_ctor_set(v___x_5323_, 2, v___f_5319_);
lean_ctor_set(v___x_5323_, 3, v___f_5320_);
lean_ctor_set(v___x_5323_, 4, v___f_5321_);
v___x_5324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5324_, 0, v___x_5323_);
lean_ctor_set(v___x_5324_, 1, v___f_5317_);
v___x_5325_ = l_StateRefT_x27_instMonad___redArg(v___x_5324_);
v_toApplicative_5326_ = lean_ctor_get(v___x_5325_, 0);
v_isSharedCheck_5387_ = !lean_is_exclusive(v___x_5325_);
if (v_isSharedCheck_5387_ == 0)
{
lean_object* v_unused_5388_; 
v_unused_5388_ = lean_ctor_get(v___x_5325_, 1);
lean_dec(v_unused_5388_);
v___x_5328_ = v___x_5325_;
v_isShared_5329_ = v_isSharedCheck_5387_;
goto v_resetjp_5327_;
}
else
{
lean_inc(v_toApplicative_5326_);
lean_dec(v___x_5325_);
v___x_5328_ = lean_box(0);
v_isShared_5329_ = v_isSharedCheck_5387_;
goto v_resetjp_5327_;
}
v_resetjp_5327_:
{
lean_object* v_toFunctor_5330_; lean_object* v_toSeq_5331_; lean_object* v_toSeqLeft_5332_; lean_object* v_toSeqRight_5333_; lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5385_; 
v_toFunctor_5330_ = lean_ctor_get(v_toApplicative_5326_, 0);
v_toSeq_5331_ = lean_ctor_get(v_toApplicative_5326_, 2);
v_toSeqLeft_5332_ = lean_ctor_get(v_toApplicative_5326_, 3);
v_toSeqRight_5333_ = lean_ctor_get(v_toApplicative_5326_, 4);
v_isSharedCheck_5385_ = !lean_is_exclusive(v_toApplicative_5326_);
if (v_isSharedCheck_5385_ == 0)
{
lean_object* v_unused_5386_; 
v_unused_5386_ = lean_ctor_get(v_toApplicative_5326_, 1);
lean_dec(v_unused_5386_);
v___x_5335_ = v_toApplicative_5326_;
v_isShared_5336_ = v_isSharedCheck_5385_;
goto v_resetjp_5334_;
}
else
{
lean_inc(v_toSeqRight_5333_);
lean_inc(v_toSeqLeft_5332_);
lean_inc(v_toSeq_5331_);
lean_inc(v_toFunctor_5330_);
lean_dec(v_toApplicative_5326_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5385_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v___f_5337_; lean_object* v___f_5338_; lean_object* v___f_5339_; lean_object* v___f_5340_; lean_object* v___x_5341_; lean_object* v___f_5342_; lean_object* v___f_5343_; lean_object* v___f_5344_; lean_object* v___x_5346_; 
v___f_5337_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__6));
v___f_5338_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__7));
lean_inc_ref(v_toFunctor_5330_);
v___f_5339_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5339_, 0, v_toFunctor_5330_);
v___f_5340_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5340_, 0, v_toFunctor_5330_);
v___x_5341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5341_, 0, v___f_5339_);
lean_ctor_set(v___x_5341_, 1, v___f_5340_);
v___f_5342_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5342_, 0, v_toSeqRight_5333_);
v___f_5343_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_5343_, 0, v_toSeqLeft_5332_);
v___f_5344_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_5344_, 0, v_toSeq_5331_);
if (v_isShared_5336_ == 0)
{
lean_ctor_set(v___x_5335_, 4, v___f_5342_);
lean_ctor_set(v___x_5335_, 3, v___f_5343_);
lean_ctor_set(v___x_5335_, 2, v___f_5344_);
lean_ctor_set(v___x_5335_, 1, v___f_5337_);
lean_ctor_set(v___x_5335_, 0, v___x_5341_);
v___x_5346_ = v___x_5335_;
goto v_reusejp_5345_;
}
else
{
lean_object* v_reuseFailAlloc_5384_; 
v_reuseFailAlloc_5384_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5384_, 0, v___x_5341_);
lean_ctor_set(v_reuseFailAlloc_5384_, 1, v___f_5337_);
lean_ctor_set(v_reuseFailAlloc_5384_, 2, v___f_5344_);
lean_ctor_set(v_reuseFailAlloc_5384_, 3, v___f_5343_);
lean_ctor_set(v_reuseFailAlloc_5384_, 4, v___f_5342_);
v___x_5346_ = v_reuseFailAlloc_5384_;
goto v_reusejp_5345_;
}
v_reusejp_5345_:
{
lean_object* v___x_5348_; 
if (v_isShared_5329_ == 0)
{
lean_ctor_set(v___x_5328_, 1, v___f_5338_);
lean_ctor_set(v___x_5328_, 0, v___x_5346_);
v___x_5348_ = v___x_5328_;
goto v_reusejp_5347_;
}
else
{
lean_object* v_reuseFailAlloc_5383_; 
v_reuseFailAlloc_5383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5383_, 0, v___x_5346_);
lean_ctor_set(v_reuseFailAlloc_5383_, 1, v___f_5338_);
v___x_5348_ = v_reuseFailAlloc_5383_;
goto v_reusejp_5347_;
}
v_reusejp_5347_:
{
lean_object* v___x_5349_; lean_object* v_toApplicative_5350_; lean_object* v___x_5352_; uint8_t v_isShared_5353_; uint8_t v_isSharedCheck_5381_; 
v___x_5349_ = l_StateRefT_x27_instMonad___redArg(v___x_5348_);
v_toApplicative_5350_ = lean_ctor_get(v___x_5349_, 0);
v_isSharedCheck_5381_ = !lean_is_exclusive(v___x_5349_);
if (v_isSharedCheck_5381_ == 0)
{
lean_object* v_unused_5382_; 
v_unused_5382_ = lean_ctor_get(v___x_5349_, 1);
lean_dec(v_unused_5382_);
v___x_5352_ = v___x_5349_;
v_isShared_5353_ = v_isSharedCheck_5381_;
goto v_resetjp_5351_;
}
else
{
lean_inc(v_toApplicative_5350_);
lean_dec(v___x_5349_);
v___x_5352_ = lean_box(0);
v_isShared_5353_ = v_isSharedCheck_5381_;
goto v_resetjp_5351_;
}
v_resetjp_5351_:
{
lean_object* v_toFunctor_5354_; lean_object* v_toSeq_5355_; lean_object* v_toSeqLeft_5356_; lean_object* v_toSeqRight_5357_; lean_object* v___x_5359_; uint8_t v_isShared_5360_; uint8_t v_isSharedCheck_5379_; 
v_toFunctor_5354_ = lean_ctor_get(v_toApplicative_5350_, 0);
v_toSeq_5355_ = lean_ctor_get(v_toApplicative_5350_, 2);
v_toSeqLeft_5356_ = lean_ctor_get(v_toApplicative_5350_, 3);
v_toSeqRight_5357_ = lean_ctor_get(v_toApplicative_5350_, 4);
v_isSharedCheck_5379_ = !lean_is_exclusive(v_toApplicative_5350_);
if (v_isSharedCheck_5379_ == 0)
{
lean_object* v_unused_5380_; 
v_unused_5380_ = lean_ctor_get(v_toApplicative_5350_, 1);
lean_dec(v_unused_5380_);
v___x_5359_ = v_toApplicative_5350_;
v_isShared_5360_ = v_isSharedCheck_5379_;
goto v_resetjp_5358_;
}
else
{
lean_inc(v_toSeqRight_5357_);
lean_inc(v_toSeqLeft_5356_);
lean_inc(v_toSeq_5355_);
lean_inc(v_toFunctor_5354_);
lean_dec(v_toApplicative_5350_);
v___x_5359_ = lean_box(0);
v_isShared_5360_ = v_isSharedCheck_5379_;
goto v_resetjp_5358_;
}
v_resetjp_5358_:
{
lean_object* v___f_5361_; lean_object* v___f_5362_; lean_object* v___f_5363_; lean_object* v___f_5364_; lean_object* v___x_5365_; lean_object* v___f_5366_; lean_object* v___f_5367_; lean_object* v___f_5368_; lean_object* v___x_5370_; 
v___f_5361_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__8));
v___f_5362_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__9));
lean_inc_ref(v_toFunctor_5354_);
v___f_5363_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5363_, 0, v_toFunctor_5354_);
v___f_5364_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5364_, 0, v_toFunctor_5354_);
v___x_5365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5365_, 0, v___f_5363_);
lean_ctor_set(v___x_5365_, 1, v___f_5364_);
v___f_5366_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_5366_, 0, v_toSeqRight_5357_);
v___f_5367_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_5367_, 0, v_toSeqLeft_5356_);
v___f_5368_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_5368_, 0, v_toSeq_5355_);
if (v_isShared_5360_ == 0)
{
lean_ctor_set(v___x_5359_, 4, v___f_5366_);
lean_ctor_set(v___x_5359_, 3, v___f_5367_);
lean_ctor_set(v___x_5359_, 2, v___f_5368_);
lean_ctor_set(v___x_5359_, 1, v___f_5361_);
lean_ctor_set(v___x_5359_, 0, v___x_5365_);
v___x_5370_ = v___x_5359_;
goto v_reusejp_5369_;
}
else
{
lean_object* v_reuseFailAlloc_5378_; 
v_reuseFailAlloc_5378_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5378_, 0, v___x_5365_);
lean_ctor_set(v_reuseFailAlloc_5378_, 1, v___f_5361_);
lean_ctor_set(v_reuseFailAlloc_5378_, 2, v___f_5368_);
lean_ctor_set(v_reuseFailAlloc_5378_, 3, v___f_5367_);
lean_ctor_set(v_reuseFailAlloc_5378_, 4, v___f_5366_);
v___x_5370_ = v_reuseFailAlloc_5378_;
goto v_reusejp_5369_;
}
v_reusejp_5369_:
{
lean_object* v___x_5372_; 
if (v_isShared_5353_ == 0)
{
lean_ctor_set(v___x_5352_, 1, v___f_5362_);
lean_ctor_set(v___x_5352_, 0, v___x_5370_);
v___x_5372_ = v___x_5352_;
goto v_reusejp_5371_;
}
else
{
lean_object* v_reuseFailAlloc_5377_; 
v_reuseFailAlloc_5377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5377_, 0, v___x_5370_);
lean_ctor_set(v_reuseFailAlloc_5377_, 1, v___f_5362_);
v___x_5372_ = v_reuseFailAlloc_5377_;
goto v_reusejp_5371_;
}
v_reusejp_5371_:
{
lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_27743__overap_5375_; lean_object* v___x_5376_; 
v___x_5373_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__7, &l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7);
v___x_5374_ = l_instInhabitedOfMonad___redArg(v___x_5372_, v___x_5373_);
v___x_27743__overap_5375_ = lean_panic_fn_borrowed(v___x_5374_, v_msg_5308_);
lean_dec(v___x_5374_);
lean_inc(v___y_5312_);
lean_inc_ref(v___y_5311_);
lean_inc(v___y_5310_);
lean_inc_ref(v___y_5309_);
v___x_5376_ = lean_apply_5(v___x_27743__overap_5375_, v___y_5309_, v___y_5310_, v___y_5311_, v___y_5312_, lean_box(0));
return v___x_5376_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed(lean_object* v_msg_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_){
_start:
{
lean_object* v_res_5395_; 
v_res_5395_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(v_msg_5389_, v___y_5390_, v___y_5391_, v___y_5392_, v___y_5393_);
lean_dec(v___y_5393_);
lean_dec_ref(v___y_5392_);
lean_dec(v___y_5391_);
lean_dec_ref(v___y_5390_);
return v_res_5395_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(lean_object* v___x_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_){
_start:
{
lean_object* v___x_5402_; 
v___x_5402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5402_, 0, v___x_5396_);
return v___x_5402_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed(lean_object* v___x_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_, lean_object* v___y_5408_){
_start:
{
lean_object* v_res_5409_; 
v_res_5409_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(v___x_5403_, v___y_5404_, v___y_5405_, v___y_5406_, v___y_5407_);
lean_dec(v___y_5407_);
lean_dec_ref(v___y_5406_);
lean_dec(v___y_5405_);
lean_dec_ref(v___y_5404_);
return v_res_5409_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(lean_object* v_upperBound_5410_, lean_object* v_onAlt_5411_, uint8_t v_useSplitter_5412_, lean_object* v_extraEqualities_5413_, lean_object* v_numDiscrEqs_5414_, lean_object* v_a_5415_, lean_object* v_b_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_){
_start:
{
lean_object* v___y_5423_; uint8_t v___x_5446_; 
v___x_5446_ = lean_nat_dec_lt(v_a_5415_, v_upperBound_5410_);
if (v___x_5446_ == 0)
{
lean_object* v___x_5447_; 
lean_dec(v_a_5415_);
lean_dec(v_numDiscrEqs_5414_);
lean_dec(v_extraEqualities_5413_);
lean_dec_ref(v_onAlt_5411_);
v___x_5447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5447_, 0, v_b_5416_);
return v___x_5447_;
}
else
{
lean_object* v_snd_5448_; lean_object* v_snd_5449_; lean_object* v_snd_5450_; lean_object* v_snd_5451_; lean_object* v_snd_5452_; lean_object* v_fst_5453_; lean_object* v___x_5455_; uint8_t v_isShared_5456_; uint8_t v_isSharedCheck_5657_; 
v_snd_5448_ = lean_ctor_get(v_b_5416_, 1);
lean_inc(v_snd_5448_);
v_snd_5449_ = lean_ctor_get(v_snd_5448_, 1);
lean_inc(v_snd_5449_);
v_snd_5450_ = lean_ctor_get(v_snd_5449_, 1);
lean_inc(v_snd_5450_);
v_snd_5451_ = lean_ctor_get(v_snd_5450_, 1);
lean_inc(v_snd_5451_);
v_snd_5452_ = lean_ctor_get(v_snd_5451_, 1);
lean_inc(v_snd_5452_);
v_fst_5453_ = lean_ctor_get(v_b_5416_, 0);
v_isSharedCheck_5657_ = !lean_is_exclusive(v_b_5416_);
if (v_isSharedCheck_5657_ == 0)
{
lean_object* v_unused_5658_; 
v_unused_5658_ = lean_ctor_get(v_b_5416_, 1);
lean_dec(v_unused_5658_);
v___x_5455_ = v_b_5416_;
v_isShared_5456_ = v_isSharedCheck_5657_;
goto v_resetjp_5454_;
}
else
{
lean_inc(v_fst_5453_);
lean_dec(v_b_5416_);
v___x_5455_ = lean_box(0);
v_isShared_5456_ = v_isSharedCheck_5657_;
goto v_resetjp_5454_;
}
v_resetjp_5454_:
{
lean_object* v_fst_5457_; lean_object* v___x_5459_; uint8_t v_isShared_5460_; uint8_t v_isSharedCheck_5655_; 
v_fst_5457_ = lean_ctor_get(v_snd_5448_, 0);
v_isSharedCheck_5655_ = !lean_is_exclusive(v_snd_5448_);
if (v_isSharedCheck_5655_ == 0)
{
lean_object* v_unused_5656_; 
v_unused_5656_ = lean_ctor_get(v_snd_5448_, 1);
lean_dec(v_unused_5656_);
v___x_5459_ = v_snd_5448_;
v_isShared_5460_ = v_isSharedCheck_5655_;
goto v_resetjp_5458_;
}
else
{
lean_inc(v_fst_5457_);
lean_dec(v_snd_5448_);
v___x_5459_ = lean_box(0);
v_isShared_5460_ = v_isSharedCheck_5655_;
goto v_resetjp_5458_;
}
v_resetjp_5458_:
{
lean_object* v_fst_5461_; lean_object* v___x_5463_; uint8_t v_isShared_5464_; uint8_t v_isSharedCheck_5653_; 
v_fst_5461_ = lean_ctor_get(v_snd_5449_, 0);
v_isSharedCheck_5653_ = !lean_is_exclusive(v_snd_5449_);
if (v_isSharedCheck_5653_ == 0)
{
lean_object* v_unused_5654_; 
v_unused_5654_ = lean_ctor_get(v_snd_5449_, 1);
lean_dec(v_unused_5654_);
v___x_5463_ = v_snd_5449_;
v_isShared_5464_ = v_isSharedCheck_5653_;
goto v_resetjp_5462_;
}
else
{
lean_inc(v_fst_5461_);
lean_dec(v_snd_5449_);
v___x_5463_ = lean_box(0);
v_isShared_5464_ = v_isSharedCheck_5653_;
goto v_resetjp_5462_;
}
v_resetjp_5462_:
{
lean_object* v_fst_5465_; lean_object* v___x_5467_; uint8_t v_isShared_5468_; uint8_t v_isSharedCheck_5651_; 
v_fst_5465_ = lean_ctor_get(v_snd_5450_, 0);
v_isSharedCheck_5651_ = !lean_is_exclusive(v_snd_5450_);
if (v_isSharedCheck_5651_ == 0)
{
lean_object* v_unused_5652_; 
v_unused_5652_ = lean_ctor_get(v_snd_5450_, 1);
lean_dec(v_unused_5652_);
v___x_5467_ = v_snd_5450_;
v_isShared_5468_ = v_isSharedCheck_5651_;
goto v_resetjp_5466_;
}
else
{
lean_inc(v_fst_5465_);
lean_dec(v_snd_5450_);
v___x_5467_ = lean_box(0);
v_isShared_5468_ = v_isSharedCheck_5651_;
goto v_resetjp_5466_;
}
v_resetjp_5466_:
{
lean_object* v_fst_5469_; lean_object* v___x_5471_; uint8_t v_isShared_5472_; uint8_t v_isSharedCheck_5649_; 
v_fst_5469_ = lean_ctor_get(v_snd_5451_, 0);
v_isSharedCheck_5649_ = !lean_is_exclusive(v_snd_5451_);
if (v_isSharedCheck_5649_ == 0)
{
lean_object* v_unused_5650_; 
v_unused_5650_ = lean_ctor_get(v_snd_5451_, 1);
lean_dec(v_unused_5650_);
v___x_5471_ = v_snd_5451_;
v_isShared_5472_ = v_isSharedCheck_5649_;
goto v_resetjp_5470_;
}
else
{
lean_inc(v_fst_5469_);
lean_dec(v_snd_5451_);
v___x_5471_ = lean_box(0);
v_isShared_5472_ = v_isSharedCheck_5649_;
goto v_resetjp_5470_;
}
v_resetjp_5470_:
{
lean_object* v_array_5473_; lean_object* v_start_5474_; lean_object* v_stop_5475_; uint8_t v___x_5476_; 
v_array_5473_ = lean_ctor_get(v_snd_5452_, 0);
v_start_5474_ = lean_ctor_get(v_snd_5452_, 1);
v_stop_5475_ = lean_ctor_get(v_snd_5452_, 2);
v___x_5476_ = lean_nat_dec_lt(v_start_5474_, v_stop_5475_);
if (v___x_5476_ == 0)
{
lean_object* v___x_5478_; 
if (v_isShared_5472_ == 0)
{
v___x_5478_ = v___x_5471_;
goto v_reusejp_5477_;
}
else
{
lean_object* v_reuseFailAlloc_5493_; 
v_reuseFailAlloc_5493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5493_, 0, v_fst_5469_);
lean_ctor_set(v_reuseFailAlloc_5493_, 1, v_snd_5452_);
v___x_5478_ = v_reuseFailAlloc_5493_;
goto v_reusejp_5477_;
}
v_reusejp_5477_:
{
lean_object* v___x_5480_; 
if (v_isShared_5468_ == 0)
{
lean_ctor_set(v___x_5467_, 1, v___x_5478_);
v___x_5480_ = v___x_5467_;
goto v_reusejp_5479_;
}
else
{
lean_object* v_reuseFailAlloc_5492_; 
v_reuseFailAlloc_5492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5492_, 0, v_fst_5465_);
lean_ctor_set(v_reuseFailAlloc_5492_, 1, v___x_5478_);
v___x_5480_ = v_reuseFailAlloc_5492_;
goto v_reusejp_5479_;
}
v_reusejp_5479_:
{
lean_object* v___x_5482_; 
if (v_isShared_5464_ == 0)
{
lean_ctor_set(v___x_5463_, 1, v___x_5480_);
v___x_5482_ = v___x_5463_;
goto v_reusejp_5481_;
}
else
{
lean_object* v_reuseFailAlloc_5491_; 
v_reuseFailAlloc_5491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5491_, 0, v_fst_5461_);
lean_ctor_set(v_reuseFailAlloc_5491_, 1, v___x_5480_);
v___x_5482_ = v_reuseFailAlloc_5491_;
goto v_reusejp_5481_;
}
v_reusejp_5481_:
{
lean_object* v___x_5484_; 
if (v_isShared_5460_ == 0)
{
lean_ctor_set(v___x_5459_, 1, v___x_5482_);
v___x_5484_ = v___x_5459_;
goto v_reusejp_5483_;
}
else
{
lean_object* v_reuseFailAlloc_5490_; 
v_reuseFailAlloc_5490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5490_, 0, v_fst_5457_);
lean_ctor_set(v_reuseFailAlloc_5490_, 1, v___x_5482_);
v___x_5484_ = v_reuseFailAlloc_5490_;
goto v_reusejp_5483_;
}
v_reusejp_5483_:
{
lean_object* v___x_5486_; 
if (v_isShared_5456_ == 0)
{
lean_ctor_set(v___x_5455_, 1, v___x_5484_);
v___x_5486_ = v___x_5455_;
goto v_reusejp_5485_;
}
else
{
lean_object* v_reuseFailAlloc_5489_; 
v_reuseFailAlloc_5489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5489_, 0, v_fst_5453_);
lean_ctor_set(v_reuseFailAlloc_5489_, 1, v___x_5484_);
v___x_5486_ = v_reuseFailAlloc_5489_;
goto v_reusejp_5485_;
}
v_reusejp_5485_:
{
lean_object* v___x_5487_; lean_object* v___f_5488_; 
v___x_5487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5487_, 0, v___x_5486_);
v___f_5488_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5488_, 0, v___x_5487_);
v___y_5423_ = v___f_5488_;
goto v___jp_5422_;
}
}
}
}
}
}
else
{
lean_object* v___x_5495_; uint8_t v_isShared_5496_; uint8_t v_isSharedCheck_5645_; 
lean_inc(v_stop_5475_);
lean_inc(v_start_5474_);
lean_inc_ref(v_array_5473_);
v_isSharedCheck_5645_ = !lean_is_exclusive(v_snd_5452_);
if (v_isSharedCheck_5645_ == 0)
{
lean_object* v_unused_5646_; lean_object* v_unused_5647_; lean_object* v_unused_5648_; 
v_unused_5646_ = lean_ctor_get(v_snd_5452_, 2);
lean_dec(v_unused_5646_);
v_unused_5647_ = lean_ctor_get(v_snd_5452_, 1);
lean_dec(v_unused_5647_);
v_unused_5648_ = lean_ctor_get(v_snd_5452_, 0);
lean_dec(v_unused_5648_);
v___x_5495_ = v_snd_5452_;
v_isShared_5496_ = v_isSharedCheck_5645_;
goto v_resetjp_5494_;
}
else
{
lean_dec(v_snd_5452_);
v___x_5495_ = lean_box(0);
v_isShared_5496_ = v_isSharedCheck_5645_;
goto v_resetjp_5494_;
}
v_resetjp_5494_:
{
lean_object* v_array_5497_; lean_object* v_start_5498_; lean_object* v_stop_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5504_; 
v_array_5497_ = lean_ctor_get(v_fst_5469_, 0);
v_start_5498_ = lean_ctor_get(v_fst_5469_, 1);
v_stop_5499_ = lean_ctor_get(v_fst_5469_, 2);
v___x_5500_ = lean_array_fget(v_array_5473_, v_start_5474_);
v___x_5501_ = lean_unsigned_to_nat(1u);
v___x_5502_ = lean_nat_add(v_start_5474_, v___x_5501_);
lean_dec(v_start_5474_);
if (v_isShared_5496_ == 0)
{
lean_ctor_set(v___x_5495_, 1, v___x_5502_);
v___x_5504_ = v___x_5495_;
goto v_reusejp_5503_;
}
else
{
lean_object* v_reuseFailAlloc_5644_; 
v_reuseFailAlloc_5644_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5644_, 0, v_array_5473_);
lean_ctor_set(v_reuseFailAlloc_5644_, 1, v___x_5502_);
lean_ctor_set(v_reuseFailAlloc_5644_, 2, v_stop_5475_);
v___x_5504_ = v_reuseFailAlloc_5644_;
goto v_reusejp_5503_;
}
v_reusejp_5503_:
{
uint8_t v___x_5505_; 
v___x_5505_ = lean_nat_dec_lt(v_start_5498_, v_stop_5499_);
if (v___x_5505_ == 0)
{
lean_object* v___x_5507_; 
lean_dec(v___x_5500_);
if (v_isShared_5472_ == 0)
{
lean_ctor_set(v___x_5471_, 1, v___x_5504_);
v___x_5507_ = v___x_5471_;
goto v_reusejp_5506_;
}
else
{
lean_object* v_reuseFailAlloc_5522_; 
v_reuseFailAlloc_5522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5522_, 0, v_fst_5469_);
lean_ctor_set(v_reuseFailAlloc_5522_, 1, v___x_5504_);
v___x_5507_ = v_reuseFailAlloc_5522_;
goto v_reusejp_5506_;
}
v_reusejp_5506_:
{
lean_object* v___x_5509_; 
if (v_isShared_5468_ == 0)
{
lean_ctor_set(v___x_5467_, 1, v___x_5507_);
v___x_5509_ = v___x_5467_;
goto v_reusejp_5508_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v_fst_5465_);
lean_ctor_set(v_reuseFailAlloc_5521_, 1, v___x_5507_);
v___x_5509_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5508_;
}
v_reusejp_5508_:
{
lean_object* v___x_5511_; 
if (v_isShared_5464_ == 0)
{
lean_ctor_set(v___x_5463_, 1, v___x_5509_);
v___x_5511_ = v___x_5463_;
goto v_reusejp_5510_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v_fst_5461_);
lean_ctor_set(v_reuseFailAlloc_5520_, 1, v___x_5509_);
v___x_5511_ = v_reuseFailAlloc_5520_;
goto v_reusejp_5510_;
}
v_reusejp_5510_:
{
lean_object* v___x_5513_; 
if (v_isShared_5460_ == 0)
{
lean_ctor_set(v___x_5459_, 1, v___x_5511_);
v___x_5513_ = v___x_5459_;
goto v_reusejp_5512_;
}
else
{
lean_object* v_reuseFailAlloc_5519_; 
v_reuseFailAlloc_5519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5519_, 0, v_fst_5457_);
lean_ctor_set(v_reuseFailAlloc_5519_, 1, v___x_5511_);
v___x_5513_ = v_reuseFailAlloc_5519_;
goto v_reusejp_5512_;
}
v_reusejp_5512_:
{
lean_object* v___x_5515_; 
if (v_isShared_5456_ == 0)
{
lean_ctor_set(v___x_5455_, 1, v___x_5513_);
v___x_5515_ = v___x_5455_;
goto v_reusejp_5514_;
}
else
{
lean_object* v_reuseFailAlloc_5518_; 
v_reuseFailAlloc_5518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5518_, 0, v_fst_5453_);
lean_ctor_set(v_reuseFailAlloc_5518_, 1, v___x_5513_);
v___x_5515_ = v_reuseFailAlloc_5518_;
goto v_reusejp_5514_;
}
v_reusejp_5514_:
{
lean_object* v___x_5516_; lean_object* v___f_5517_; 
v___x_5516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5516_, 0, v___x_5515_);
v___f_5517_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5517_, 0, v___x_5516_);
v___y_5423_ = v___f_5517_;
goto v___jp_5422_;
}
}
}
}
}
}
else
{
lean_object* v___x_5524_; uint8_t v_isShared_5525_; uint8_t v_isSharedCheck_5640_; 
lean_inc(v_stop_5499_);
lean_inc(v_start_5498_);
lean_inc_ref(v_array_5497_);
v_isSharedCheck_5640_ = !lean_is_exclusive(v_fst_5469_);
if (v_isSharedCheck_5640_ == 0)
{
lean_object* v_unused_5641_; lean_object* v_unused_5642_; lean_object* v_unused_5643_; 
v_unused_5641_ = lean_ctor_get(v_fst_5469_, 2);
lean_dec(v_unused_5641_);
v_unused_5642_ = lean_ctor_get(v_fst_5469_, 1);
lean_dec(v_unused_5642_);
v_unused_5643_ = lean_ctor_get(v_fst_5469_, 0);
lean_dec(v_unused_5643_);
v___x_5524_ = v_fst_5469_;
v_isShared_5525_ = v_isSharedCheck_5640_;
goto v_resetjp_5523_;
}
else
{
lean_dec(v_fst_5469_);
v___x_5524_ = lean_box(0);
v_isShared_5525_ = v_isSharedCheck_5640_;
goto v_resetjp_5523_;
}
v_resetjp_5523_:
{
lean_object* v_array_5526_; lean_object* v_start_5527_; lean_object* v_stop_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; lean_object* v___x_5532_; 
v_array_5526_ = lean_ctor_get(v_fst_5465_, 0);
v_start_5527_ = lean_ctor_get(v_fst_5465_, 1);
v_stop_5528_ = lean_ctor_get(v_fst_5465_, 2);
v___x_5529_ = lean_array_fget(v_array_5497_, v_start_5498_);
v___x_5530_ = lean_nat_add(v_start_5498_, v___x_5501_);
lean_dec(v_start_5498_);
if (v_isShared_5525_ == 0)
{
lean_ctor_set(v___x_5524_, 1, v___x_5530_);
v___x_5532_ = v___x_5524_;
goto v_reusejp_5531_;
}
else
{
lean_object* v_reuseFailAlloc_5639_; 
v_reuseFailAlloc_5639_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5639_, 0, v_array_5497_);
lean_ctor_set(v_reuseFailAlloc_5639_, 1, v___x_5530_);
lean_ctor_set(v_reuseFailAlloc_5639_, 2, v_stop_5499_);
v___x_5532_ = v_reuseFailAlloc_5639_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
uint8_t v___x_5533_; 
v___x_5533_ = lean_nat_dec_lt(v_start_5527_, v_stop_5528_);
if (v___x_5533_ == 0)
{
lean_object* v___x_5535_; 
lean_dec(v___x_5529_);
lean_dec(v___x_5500_);
if (v_isShared_5472_ == 0)
{
lean_ctor_set(v___x_5471_, 1, v___x_5504_);
lean_ctor_set(v___x_5471_, 0, v___x_5532_);
v___x_5535_ = v___x_5471_;
goto v_reusejp_5534_;
}
else
{
lean_object* v_reuseFailAlloc_5550_; 
v_reuseFailAlloc_5550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5550_, 0, v___x_5532_);
lean_ctor_set(v_reuseFailAlloc_5550_, 1, v___x_5504_);
v___x_5535_ = v_reuseFailAlloc_5550_;
goto v_reusejp_5534_;
}
v_reusejp_5534_:
{
lean_object* v___x_5537_; 
if (v_isShared_5468_ == 0)
{
lean_ctor_set(v___x_5467_, 1, v___x_5535_);
v___x_5537_ = v___x_5467_;
goto v_reusejp_5536_;
}
else
{
lean_object* v_reuseFailAlloc_5549_; 
v_reuseFailAlloc_5549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5549_, 0, v_fst_5465_);
lean_ctor_set(v_reuseFailAlloc_5549_, 1, v___x_5535_);
v___x_5537_ = v_reuseFailAlloc_5549_;
goto v_reusejp_5536_;
}
v_reusejp_5536_:
{
lean_object* v___x_5539_; 
if (v_isShared_5464_ == 0)
{
lean_ctor_set(v___x_5463_, 1, v___x_5537_);
v___x_5539_ = v___x_5463_;
goto v_reusejp_5538_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v_fst_5461_);
lean_ctor_set(v_reuseFailAlloc_5548_, 1, v___x_5537_);
v___x_5539_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5538_;
}
v_reusejp_5538_:
{
lean_object* v___x_5541_; 
if (v_isShared_5460_ == 0)
{
lean_ctor_set(v___x_5459_, 1, v___x_5539_);
v___x_5541_ = v___x_5459_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5547_; 
v_reuseFailAlloc_5547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5547_, 0, v_fst_5457_);
lean_ctor_set(v_reuseFailAlloc_5547_, 1, v___x_5539_);
v___x_5541_ = v_reuseFailAlloc_5547_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
lean_object* v___x_5543_; 
if (v_isShared_5456_ == 0)
{
lean_ctor_set(v___x_5455_, 1, v___x_5541_);
v___x_5543_ = v___x_5455_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5546_; 
v_reuseFailAlloc_5546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5546_, 0, v_fst_5453_);
lean_ctor_set(v_reuseFailAlloc_5546_, 1, v___x_5541_);
v___x_5543_ = v_reuseFailAlloc_5546_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
lean_object* v___x_5544_; lean_object* v___f_5545_; 
v___x_5544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5544_, 0, v___x_5543_);
v___f_5545_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5545_, 0, v___x_5544_);
v___y_5423_ = v___f_5545_;
goto v___jp_5422_;
}
}
}
}
}
}
else
{
lean_object* v___x_5552_; uint8_t v_isShared_5553_; uint8_t v_isSharedCheck_5635_; 
lean_inc(v_stop_5528_);
lean_inc(v_start_5527_);
lean_inc_ref(v_array_5526_);
v_isSharedCheck_5635_ = !lean_is_exclusive(v_fst_5465_);
if (v_isSharedCheck_5635_ == 0)
{
lean_object* v_unused_5636_; lean_object* v_unused_5637_; lean_object* v_unused_5638_; 
v_unused_5636_ = lean_ctor_get(v_fst_5465_, 2);
lean_dec(v_unused_5636_);
v_unused_5637_ = lean_ctor_get(v_fst_5465_, 1);
lean_dec(v_unused_5637_);
v_unused_5638_ = lean_ctor_get(v_fst_5465_, 0);
lean_dec(v_unused_5638_);
v___x_5552_ = v_fst_5465_;
v_isShared_5553_ = v_isSharedCheck_5635_;
goto v_resetjp_5551_;
}
else
{
lean_dec(v_fst_5465_);
v___x_5552_ = lean_box(0);
v_isShared_5553_ = v_isSharedCheck_5635_;
goto v_resetjp_5551_;
}
v_resetjp_5551_:
{
lean_object* v_array_5554_; lean_object* v_start_5555_; lean_object* v_stop_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5560_; 
v_array_5554_ = lean_ctor_get(v_fst_5461_, 0);
v_start_5555_ = lean_ctor_get(v_fst_5461_, 1);
v_stop_5556_ = lean_ctor_get(v_fst_5461_, 2);
v___x_5557_ = lean_array_fget(v_array_5526_, v_start_5527_);
v___x_5558_ = lean_nat_add(v_start_5527_, v___x_5501_);
lean_dec(v_start_5527_);
if (v_isShared_5553_ == 0)
{
lean_ctor_set(v___x_5552_, 1, v___x_5558_);
v___x_5560_ = v___x_5552_;
goto v_reusejp_5559_;
}
else
{
lean_object* v_reuseFailAlloc_5634_; 
v_reuseFailAlloc_5634_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5634_, 0, v_array_5526_);
lean_ctor_set(v_reuseFailAlloc_5634_, 1, v___x_5558_);
lean_ctor_set(v_reuseFailAlloc_5634_, 2, v_stop_5528_);
v___x_5560_ = v_reuseFailAlloc_5634_;
goto v_reusejp_5559_;
}
v_reusejp_5559_:
{
uint8_t v___x_5561_; 
v___x_5561_ = lean_nat_dec_lt(v_start_5555_, v_stop_5556_);
if (v___x_5561_ == 0)
{
lean_object* v___x_5563_; 
lean_dec(v___x_5557_);
lean_dec(v___x_5529_);
lean_dec(v___x_5500_);
if (v_isShared_5472_ == 0)
{
lean_ctor_set(v___x_5471_, 1, v___x_5504_);
lean_ctor_set(v___x_5471_, 0, v___x_5532_);
v___x_5563_ = v___x_5471_;
goto v_reusejp_5562_;
}
else
{
lean_object* v_reuseFailAlloc_5578_; 
v_reuseFailAlloc_5578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5578_, 0, v___x_5532_);
lean_ctor_set(v_reuseFailAlloc_5578_, 1, v___x_5504_);
v___x_5563_ = v_reuseFailAlloc_5578_;
goto v_reusejp_5562_;
}
v_reusejp_5562_:
{
lean_object* v___x_5565_; 
if (v_isShared_5468_ == 0)
{
lean_ctor_set(v___x_5467_, 1, v___x_5563_);
lean_ctor_set(v___x_5467_, 0, v___x_5560_);
v___x_5565_ = v___x_5467_;
goto v_reusejp_5564_;
}
else
{
lean_object* v_reuseFailAlloc_5577_; 
v_reuseFailAlloc_5577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5577_, 0, v___x_5560_);
lean_ctor_set(v_reuseFailAlloc_5577_, 1, v___x_5563_);
v___x_5565_ = v_reuseFailAlloc_5577_;
goto v_reusejp_5564_;
}
v_reusejp_5564_:
{
lean_object* v___x_5567_; 
if (v_isShared_5464_ == 0)
{
lean_ctor_set(v___x_5463_, 1, v___x_5565_);
v___x_5567_ = v___x_5463_;
goto v_reusejp_5566_;
}
else
{
lean_object* v_reuseFailAlloc_5576_; 
v_reuseFailAlloc_5576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5576_, 0, v_fst_5461_);
lean_ctor_set(v_reuseFailAlloc_5576_, 1, v___x_5565_);
v___x_5567_ = v_reuseFailAlloc_5576_;
goto v_reusejp_5566_;
}
v_reusejp_5566_:
{
lean_object* v___x_5569_; 
if (v_isShared_5460_ == 0)
{
lean_ctor_set(v___x_5459_, 1, v___x_5567_);
v___x_5569_ = v___x_5459_;
goto v_reusejp_5568_;
}
else
{
lean_object* v_reuseFailAlloc_5575_; 
v_reuseFailAlloc_5575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5575_, 0, v_fst_5457_);
lean_ctor_set(v_reuseFailAlloc_5575_, 1, v___x_5567_);
v___x_5569_ = v_reuseFailAlloc_5575_;
goto v_reusejp_5568_;
}
v_reusejp_5568_:
{
lean_object* v___x_5571_; 
if (v_isShared_5456_ == 0)
{
lean_ctor_set(v___x_5455_, 1, v___x_5569_);
v___x_5571_ = v___x_5455_;
goto v_reusejp_5570_;
}
else
{
lean_object* v_reuseFailAlloc_5574_; 
v_reuseFailAlloc_5574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5574_, 0, v_fst_5453_);
lean_ctor_set(v_reuseFailAlloc_5574_, 1, v___x_5569_);
v___x_5571_ = v_reuseFailAlloc_5574_;
goto v_reusejp_5570_;
}
v_reusejp_5570_:
{
lean_object* v___x_5572_; lean_object* v___f_5573_; 
v___x_5572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5572_, 0, v___x_5571_);
v___f_5573_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5573_, 0, v___x_5572_);
v___y_5423_ = v___f_5573_;
goto v___jp_5422_;
}
}
}
}
}
}
else
{
lean_object* v___x_5580_; uint8_t v_isShared_5581_; uint8_t v_isSharedCheck_5630_; 
lean_inc(v_stop_5556_);
lean_inc(v_start_5555_);
lean_inc_ref(v_array_5554_);
v_isSharedCheck_5630_ = !lean_is_exclusive(v_fst_5461_);
if (v_isSharedCheck_5630_ == 0)
{
lean_object* v_unused_5631_; lean_object* v_unused_5632_; lean_object* v_unused_5633_; 
v_unused_5631_ = lean_ctor_get(v_fst_5461_, 2);
lean_dec(v_unused_5631_);
v_unused_5632_ = lean_ctor_get(v_fst_5461_, 1);
lean_dec(v_unused_5632_);
v_unused_5633_ = lean_ctor_get(v_fst_5461_, 0);
lean_dec(v_unused_5633_);
v___x_5580_ = v_fst_5461_;
v_isShared_5581_ = v_isSharedCheck_5630_;
goto v_resetjp_5579_;
}
else
{
lean_dec(v_fst_5461_);
v___x_5580_ = lean_box(0);
v_isShared_5581_ = v_isSharedCheck_5630_;
goto v_resetjp_5579_;
}
v_resetjp_5579_:
{
lean_object* v_array_5582_; lean_object* v_start_5583_; lean_object* v_stop_5584_; lean_object* v___x_5585_; lean_object* v___x_5586_; lean_object* v___x_5588_; 
v_array_5582_ = lean_ctor_get(v_fst_5457_, 0);
v_start_5583_ = lean_ctor_get(v_fst_5457_, 1);
v_stop_5584_ = lean_ctor_get(v_fst_5457_, 2);
v___x_5585_ = lean_array_fget(v_array_5554_, v_start_5555_);
v___x_5586_ = lean_nat_add(v_start_5555_, v___x_5501_);
lean_dec(v_start_5555_);
if (v_isShared_5581_ == 0)
{
lean_ctor_set(v___x_5580_, 1, v___x_5586_);
v___x_5588_ = v___x_5580_;
goto v_reusejp_5587_;
}
else
{
lean_object* v_reuseFailAlloc_5629_; 
v_reuseFailAlloc_5629_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5629_, 0, v_array_5554_);
lean_ctor_set(v_reuseFailAlloc_5629_, 1, v___x_5586_);
lean_ctor_set(v_reuseFailAlloc_5629_, 2, v_stop_5556_);
v___x_5588_ = v_reuseFailAlloc_5629_;
goto v_reusejp_5587_;
}
v_reusejp_5587_:
{
uint8_t v___x_5589_; 
v___x_5589_ = lean_nat_dec_lt(v_start_5583_, v_stop_5584_);
if (v___x_5589_ == 0)
{
lean_object* v___x_5591_; 
lean_dec(v___x_5585_);
lean_dec(v___x_5557_);
lean_dec(v___x_5529_);
lean_dec(v___x_5500_);
if (v_isShared_5472_ == 0)
{
lean_ctor_set(v___x_5471_, 1, v___x_5504_);
lean_ctor_set(v___x_5471_, 0, v___x_5532_);
v___x_5591_ = v___x_5471_;
goto v_reusejp_5590_;
}
else
{
lean_object* v_reuseFailAlloc_5606_; 
v_reuseFailAlloc_5606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5606_, 0, v___x_5532_);
lean_ctor_set(v_reuseFailAlloc_5606_, 1, v___x_5504_);
v___x_5591_ = v_reuseFailAlloc_5606_;
goto v_reusejp_5590_;
}
v_reusejp_5590_:
{
lean_object* v___x_5593_; 
if (v_isShared_5468_ == 0)
{
lean_ctor_set(v___x_5467_, 1, v___x_5591_);
lean_ctor_set(v___x_5467_, 0, v___x_5560_);
v___x_5593_ = v___x_5467_;
goto v_reusejp_5592_;
}
else
{
lean_object* v_reuseFailAlloc_5605_; 
v_reuseFailAlloc_5605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5605_, 0, v___x_5560_);
lean_ctor_set(v_reuseFailAlloc_5605_, 1, v___x_5591_);
v___x_5593_ = v_reuseFailAlloc_5605_;
goto v_reusejp_5592_;
}
v_reusejp_5592_:
{
lean_object* v___x_5595_; 
if (v_isShared_5464_ == 0)
{
lean_ctor_set(v___x_5463_, 1, v___x_5593_);
lean_ctor_set(v___x_5463_, 0, v___x_5588_);
v___x_5595_ = v___x_5463_;
goto v_reusejp_5594_;
}
else
{
lean_object* v_reuseFailAlloc_5604_; 
v_reuseFailAlloc_5604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5604_, 0, v___x_5588_);
lean_ctor_set(v_reuseFailAlloc_5604_, 1, v___x_5593_);
v___x_5595_ = v_reuseFailAlloc_5604_;
goto v_reusejp_5594_;
}
v_reusejp_5594_:
{
lean_object* v___x_5597_; 
if (v_isShared_5460_ == 0)
{
lean_ctor_set(v___x_5459_, 1, v___x_5595_);
v___x_5597_ = v___x_5459_;
goto v_reusejp_5596_;
}
else
{
lean_object* v_reuseFailAlloc_5603_; 
v_reuseFailAlloc_5603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5603_, 0, v_fst_5457_);
lean_ctor_set(v_reuseFailAlloc_5603_, 1, v___x_5595_);
v___x_5597_ = v_reuseFailAlloc_5603_;
goto v_reusejp_5596_;
}
v_reusejp_5596_:
{
lean_object* v___x_5599_; 
if (v_isShared_5456_ == 0)
{
lean_ctor_set(v___x_5455_, 1, v___x_5597_);
v___x_5599_ = v___x_5455_;
goto v_reusejp_5598_;
}
else
{
lean_object* v_reuseFailAlloc_5602_; 
v_reuseFailAlloc_5602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5602_, 0, v_fst_5453_);
lean_ctor_set(v_reuseFailAlloc_5602_, 1, v___x_5597_);
v___x_5599_ = v_reuseFailAlloc_5602_;
goto v_reusejp_5598_;
}
v_reusejp_5598_:
{
lean_object* v___x_5600_; lean_object* v___f_5601_; 
v___x_5600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5600_, 0, v___x_5599_);
v___f_5601_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5601_, 0, v___x_5600_);
v___y_5423_ = v___f_5601_;
goto v___jp_5422_;
}
}
}
}
}
}
else
{
lean_object* v___x_5608_; uint8_t v_isShared_5609_; uint8_t v_isSharedCheck_5625_; 
lean_inc(v_stop_5584_);
lean_inc(v_start_5583_);
lean_inc_ref(v_array_5582_);
lean_del_object(v___x_5471_);
lean_del_object(v___x_5467_);
lean_del_object(v___x_5463_);
lean_del_object(v___x_5459_);
lean_del_object(v___x_5455_);
v_isSharedCheck_5625_ = !lean_is_exclusive(v_fst_5457_);
if (v_isSharedCheck_5625_ == 0)
{
lean_object* v_unused_5626_; lean_object* v_unused_5627_; lean_object* v_unused_5628_; 
v_unused_5626_ = lean_ctor_get(v_fst_5457_, 2);
lean_dec(v_unused_5626_);
v_unused_5627_ = lean_ctor_get(v_fst_5457_, 1);
lean_dec(v_unused_5627_);
v_unused_5628_ = lean_ctor_get(v_fst_5457_, 0);
lean_dec(v_unused_5628_);
v___x_5608_ = v_fst_5457_;
v_isShared_5609_ = v_isSharedCheck_5625_;
goto v_resetjp_5607_;
}
else
{
lean_dec(v_fst_5457_);
v___x_5608_ = lean_box(0);
v_isShared_5609_ = v_isSharedCheck_5625_;
goto v_resetjp_5607_;
}
v_resetjp_5607_:
{
lean_object* v_numOverlaps_5610_; lean_object* v___x_5611_; uint8_t v___x_5612_; 
v_numOverlaps_5610_ = lean_ctor_get(v___x_5585_, 1);
v___x_5611_ = lean_unsigned_to_nat(0u);
v___x_5612_ = lean_nat_dec_eq(v_numOverlaps_5610_, v___x_5611_);
if (v___x_5612_ == 0)
{
lean_object* v___x_5613_; lean_object* v___x_5614_; 
lean_del_object(v___x_5608_);
lean_dec_ref(v___x_5588_);
lean_dec(v___x_5585_);
lean_dec(v_stop_5584_);
lean_dec(v_start_5583_);
lean_dec_ref(v_array_5582_);
lean_dec_ref(v___x_5560_);
lean_dec(v___x_5557_);
lean_dec_ref(v___x_5532_);
lean_dec(v___x_5529_);
lean_dec_ref(v___x_5504_);
lean_dec(v___x_5500_);
lean_dec(v_fst_5453_);
v___x_5613_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_5614_ = lean_alloc_closure((void*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed), 6, 1);
lean_closure_set(v___x_5614_, 0, v___x_5613_);
v___y_5423_ = v___x_5614_;
goto v___jp_5422_;
}
else
{
uint8_t v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___f_5619_; lean_object* v___x_5620_; lean_object* v___x_5622_; 
v___x_5615_ = 0;
v___x_5616_ = lean_array_fget_borrowed(v_array_5582_, v_start_5583_);
v___x_5617_ = lean_box(v___x_5615_);
v___x_5618_ = lean_box(v_useSplitter_5412_);
lean_inc(v___x_5585_);
lean_inc(v_numDiscrEqs_5414_);
lean_inc(v_extraEqualities_5413_);
lean_inc(v___x_5616_);
lean_inc(v_a_5415_);
lean_inc_ref(v_onAlt_5411_);
v___f_5619_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed), 18, 11);
lean_closure_set(v___f_5619_, 0, v___x_5557_);
lean_closure_set(v___f_5619_, 1, v_onAlt_5411_);
lean_closure_set(v___f_5619_, 2, v_a_5415_);
lean_closure_set(v___f_5619_, 3, v___x_5617_);
lean_closure_set(v___f_5619_, 4, v___x_5618_);
lean_closure_set(v___f_5619_, 5, v___x_5616_);
lean_closure_set(v___f_5619_, 6, v_extraEqualities_5413_);
lean_closure_set(v___f_5619_, 7, v_numDiscrEqs_5414_);
lean_closure_set(v___f_5619_, 8, v___x_5500_);
lean_closure_set(v___f_5619_, 9, v___x_5585_);
lean_closure_set(v___f_5619_, 10, v___x_5501_);
v___x_5620_ = lean_nat_add(v_start_5583_, v___x_5501_);
lean_dec(v_start_5583_);
if (v_isShared_5609_ == 0)
{
lean_ctor_set(v___x_5608_, 1, v___x_5620_);
v___x_5622_ = v___x_5608_;
goto v_reusejp_5621_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v_array_5582_);
lean_ctor_set(v_reuseFailAlloc_5624_, 1, v___x_5620_);
lean_ctor_set(v_reuseFailAlloc_5624_, 2, v_stop_5584_);
v___x_5622_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5621_;
}
v_reusejp_5621_:
{
lean_object* v___f_5623_; 
v___f_5623_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed), 14, 9);
lean_closure_set(v___f_5623_, 0, v___x_5529_);
lean_closure_set(v___f_5623_, 1, v___x_5585_);
lean_closure_set(v___f_5623_, 2, v___f_5619_);
lean_closure_set(v___f_5623_, 3, v_fst_5453_);
lean_closure_set(v___f_5623_, 4, v___x_5532_);
lean_closure_set(v___f_5623_, 5, v___x_5504_);
lean_closure_set(v___f_5623_, 6, v___x_5560_);
lean_closure_set(v___f_5623_, 7, v___x_5588_);
lean_closure_set(v___f_5623_, 8, v___x_5622_);
v___y_5423_ = v___f_5623_;
goto v___jp_5422_;
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
}
}
}
}
}
}
}
}
v___jp_5422_:
{
lean_object* v___x_5424_; 
lean_inc(v___y_5420_);
lean_inc_ref(v___y_5419_);
lean_inc(v___y_5418_);
lean_inc_ref(v___y_5417_);
v___x_5424_ = lean_apply_5(v___y_5423_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_, lean_box(0));
if (lean_obj_tag(v___x_5424_) == 0)
{
lean_object* v_a_5425_; lean_object* v___x_5427_; uint8_t v_isShared_5428_; uint8_t v_isSharedCheck_5437_; 
v_a_5425_ = lean_ctor_get(v___x_5424_, 0);
v_isSharedCheck_5437_ = !lean_is_exclusive(v___x_5424_);
if (v_isSharedCheck_5437_ == 0)
{
v___x_5427_ = v___x_5424_;
v_isShared_5428_ = v_isSharedCheck_5437_;
goto v_resetjp_5426_;
}
else
{
lean_inc(v_a_5425_);
lean_dec(v___x_5424_);
v___x_5427_ = lean_box(0);
v_isShared_5428_ = v_isSharedCheck_5437_;
goto v_resetjp_5426_;
}
v_resetjp_5426_:
{
if (lean_obj_tag(v_a_5425_) == 0)
{
lean_object* v_a_5429_; lean_object* v___x_5431_; 
lean_dec(v_a_5415_);
lean_dec(v_numDiscrEqs_5414_);
lean_dec(v_extraEqualities_5413_);
lean_dec_ref(v_onAlt_5411_);
v_a_5429_ = lean_ctor_get(v_a_5425_, 0);
lean_inc(v_a_5429_);
lean_dec_ref_known(v_a_5425_, 1);
if (v_isShared_5428_ == 0)
{
lean_ctor_set(v___x_5427_, 0, v_a_5429_);
v___x_5431_ = v___x_5427_;
goto v_reusejp_5430_;
}
else
{
lean_object* v_reuseFailAlloc_5432_; 
v_reuseFailAlloc_5432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5432_, 0, v_a_5429_);
v___x_5431_ = v_reuseFailAlloc_5432_;
goto v_reusejp_5430_;
}
v_reusejp_5430_:
{
return v___x_5431_;
}
}
else
{
lean_object* v_a_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; 
lean_del_object(v___x_5427_);
v_a_5433_ = lean_ctor_get(v_a_5425_, 0);
lean_inc(v_a_5433_);
lean_dec_ref_known(v_a_5425_, 1);
v___x_5434_ = lean_unsigned_to_nat(1u);
v___x_5435_ = lean_nat_add(v_a_5415_, v___x_5434_);
lean_dec(v_a_5415_);
v_a_5415_ = v___x_5435_;
v_b_5416_ = v_a_5433_;
goto _start;
}
}
}
else
{
lean_object* v_a_5438_; lean_object* v___x_5440_; uint8_t v_isShared_5441_; uint8_t v_isSharedCheck_5445_; 
lean_dec(v_a_5415_);
lean_dec(v_numDiscrEqs_5414_);
lean_dec(v_extraEqualities_5413_);
lean_dec_ref(v_onAlt_5411_);
v_a_5438_ = lean_ctor_get(v___x_5424_, 0);
v_isSharedCheck_5445_ = !lean_is_exclusive(v___x_5424_);
if (v_isSharedCheck_5445_ == 0)
{
v___x_5440_ = v___x_5424_;
v_isShared_5441_ = v_isSharedCheck_5445_;
goto v_resetjp_5439_;
}
else
{
lean_inc(v_a_5438_);
lean_dec(v___x_5424_);
v___x_5440_ = lean_box(0);
v_isShared_5441_ = v_isSharedCheck_5445_;
goto v_resetjp_5439_;
}
v_resetjp_5439_:
{
lean_object* v___x_5443_; 
if (v_isShared_5441_ == 0)
{
v___x_5443_ = v___x_5440_;
goto v_reusejp_5442_;
}
else
{
lean_object* v_reuseFailAlloc_5444_; 
v_reuseFailAlloc_5444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5444_, 0, v_a_5438_);
v___x_5443_ = v_reuseFailAlloc_5444_;
goto v_reusejp_5442_;
}
v_reusejp_5442_:
{
return v___x_5443_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___boxed(lean_object* v_upperBound_5659_, lean_object* v_onAlt_5660_, lean_object* v_useSplitter_5661_, lean_object* v_extraEqualities_5662_, lean_object* v_numDiscrEqs_5663_, lean_object* v_a_5664_, lean_object* v_b_5665_, lean_object* v___y_5666_, lean_object* v___y_5667_, lean_object* v___y_5668_, lean_object* v___y_5669_, lean_object* v___y_5670_){
_start:
{
uint8_t v_useSplitter_boxed_5671_; lean_object* v_res_5672_; 
v_useSplitter_boxed_5671_ = lean_unbox(v_useSplitter_5661_);
v_res_5672_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v_upperBound_5659_, v_onAlt_5660_, v_useSplitter_boxed_5671_, v_extraEqualities_5662_, v_numDiscrEqs_5663_, v_a_5664_, v_b_5665_, v___y_5666_, v___y_5667_, v___y_5668_, v___y_5669_);
lean_dec(v___y_5669_);
lean_dec_ref(v___y_5668_);
lean_dec(v___y_5667_);
lean_dec_ref(v___y_5666_);
lean_dec(v_upperBound_5659_);
return v_res_5672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(uint8_t v_addEqualities_5673_, lean_object* v_as_5674_, size_t v_sz_5675_, size_t v_i_5676_, lean_object* v_b_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_, lean_object* v___y_5680_, lean_object* v___y_5681_){
_start:
{
lean_object* v_a_5684_; uint8_t v___x_5688_; 
v___x_5688_ = lean_usize_dec_lt(v_i_5676_, v_sz_5675_);
if (v___x_5688_ == 0)
{
lean_object* v___x_5689_; 
v___x_5689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5689_, 0, v_b_5677_);
return v___x_5689_;
}
else
{
lean_object* v_snd_5690_; lean_object* v_snd_5691_; lean_object* v_snd_5692_; lean_object* v_snd_5693_; lean_object* v_fst_5694_; lean_object* v___x_5696_; uint8_t v_isShared_5697_; uint8_t v_isSharedCheck_5840_; 
v_snd_5690_ = lean_ctor_get(v_b_5677_, 1);
lean_inc(v_snd_5690_);
v_snd_5691_ = lean_ctor_get(v_snd_5690_, 1);
lean_inc(v_snd_5691_);
v_snd_5692_ = lean_ctor_get(v_snd_5691_, 1);
lean_inc(v_snd_5692_);
v_snd_5693_ = lean_ctor_get(v_snd_5692_, 1);
lean_inc(v_snd_5693_);
v_fst_5694_ = lean_ctor_get(v_b_5677_, 0);
v_isSharedCheck_5840_ = !lean_is_exclusive(v_b_5677_);
if (v_isSharedCheck_5840_ == 0)
{
lean_object* v_unused_5841_; 
v_unused_5841_ = lean_ctor_get(v_b_5677_, 1);
lean_dec(v_unused_5841_);
v___x_5696_ = v_b_5677_;
v_isShared_5697_ = v_isSharedCheck_5840_;
goto v_resetjp_5695_;
}
else
{
lean_inc(v_fst_5694_);
lean_dec(v_b_5677_);
v___x_5696_ = lean_box(0);
v_isShared_5697_ = v_isSharedCheck_5840_;
goto v_resetjp_5695_;
}
v_resetjp_5695_:
{
lean_object* v_fst_5698_; lean_object* v___x_5700_; uint8_t v_isShared_5701_; uint8_t v_isSharedCheck_5838_; 
v_fst_5698_ = lean_ctor_get(v_snd_5690_, 0);
v_isSharedCheck_5838_ = !lean_is_exclusive(v_snd_5690_);
if (v_isSharedCheck_5838_ == 0)
{
lean_object* v_unused_5839_; 
v_unused_5839_ = lean_ctor_get(v_snd_5690_, 1);
lean_dec(v_unused_5839_);
v___x_5700_ = v_snd_5690_;
v_isShared_5701_ = v_isSharedCheck_5838_;
goto v_resetjp_5699_;
}
else
{
lean_inc(v_fst_5698_);
lean_dec(v_snd_5690_);
v___x_5700_ = lean_box(0);
v_isShared_5701_ = v_isSharedCheck_5838_;
goto v_resetjp_5699_;
}
v_resetjp_5699_:
{
lean_object* v_fst_5702_; lean_object* v___x_5704_; uint8_t v_isShared_5705_; uint8_t v_isSharedCheck_5836_; 
v_fst_5702_ = lean_ctor_get(v_snd_5691_, 0);
v_isSharedCheck_5836_ = !lean_is_exclusive(v_snd_5691_);
if (v_isSharedCheck_5836_ == 0)
{
lean_object* v_unused_5837_; 
v_unused_5837_ = lean_ctor_get(v_snd_5691_, 1);
lean_dec(v_unused_5837_);
v___x_5704_ = v_snd_5691_;
v_isShared_5705_ = v_isSharedCheck_5836_;
goto v_resetjp_5703_;
}
else
{
lean_inc(v_fst_5702_);
lean_dec(v_snd_5691_);
v___x_5704_ = lean_box(0);
v_isShared_5705_ = v_isSharedCheck_5836_;
goto v_resetjp_5703_;
}
v_resetjp_5703_:
{
lean_object* v_fst_5706_; lean_object* v___x_5708_; uint8_t v_isShared_5709_; uint8_t v_isSharedCheck_5834_; 
v_fst_5706_ = lean_ctor_get(v_snd_5692_, 0);
v_isSharedCheck_5834_ = !lean_is_exclusive(v_snd_5692_);
if (v_isSharedCheck_5834_ == 0)
{
lean_object* v_unused_5835_; 
v_unused_5835_ = lean_ctor_get(v_snd_5692_, 1);
lean_dec(v_unused_5835_);
v___x_5708_ = v_snd_5692_;
v_isShared_5709_ = v_isSharedCheck_5834_;
goto v_resetjp_5707_;
}
else
{
lean_inc(v_fst_5706_);
lean_dec(v_snd_5692_);
v___x_5708_ = lean_box(0);
v_isShared_5709_ = v_isSharedCheck_5834_;
goto v_resetjp_5707_;
}
v_resetjp_5707_:
{
lean_object* v_array_5710_; lean_object* v_start_5711_; lean_object* v_stop_5712_; uint8_t v___x_5713_; 
v_array_5710_ = lean_ctor_get(v_snd_5693_, 0);
v_start_5711_ = lean_ctor_get(v_snd_5693_, 1);
v_stop_5712_ = lean_ctor_get(v_snd_5693_, 2);
v___x_5713_ = lean_nat_dec_lt(v_start_5711_, v_stop_5712_);
if (v___x_5713_ == 0)
{
lean_object* v___x_5715_; 
if (v_isShared_5709_ == 0)
{
v___x_5715_ = v___x_5708_;
goto v_reusejp_5714_;
}
else
{
lean_object* v_reuseFailAlloc_5726_; 
v_reuseFailAlloc_5726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5726_, 0, v_fst_5706_);
lean_ctor_set(v_reuseFailAlloc_5726_, 1, v_snd_5693_);
v___x_5715_ = v_reuseFailAlloc_5726_;
goto v_reusejp_5714_;
}
v_reusejp_5714_:
{
lean_object* v___x_5717_; 
if (v_isShared_5705_ == 0)
{
lean_ctor_set(v___x_5704_, 1, v___x_5715_);
v___x_5717_ = v___x_5704_;
goto v_reusejp_5716_;
}
else
{
lean_object* v_reuseFailAlloc_5725_; 
v_reuseFailAlloc_5725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5725_, 0, v_fst_5702_);
lean_ctor_set(v_reuseFailAlloc_5725_, 1, v___x_5715_);
v___x_5717_ = v_reuseFailAlloc_5725_;
goto v_reusejp_5716_;
}
v_reusejp_5716_:
{
lean_object* v___x_5719_; 
if (v_isShared_5701_ == 0)
{
lean_ctor_set(v___x_5700_, 1, v___x_5717_);
v___x_5719_ = v___x_5700_;
goto v_reusejp_5718_;
}
else
{
lean_object* v_reuseFailAlloc_5724_; 
v_reuseFailAlloc_5724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5724_, 0, v_fst_5698_);
lean_ctor_set(v_reuseFailAlloc_5724_, 1, v___x_5717_);
v___x_5719_ = v_reuseFailAlloc_5724_;
goto v_reusejp_5718_;
}
v_reusejp_5718_:
{
lean_object* v___x_5721_; 
if (v_isShared_5697_ == 0)
{
lean_ctor_set(v___x_5696_, 1, v___x_5719_);
v___x_5721_ = v___x_5696_;
goto v_reusejp_5720_;
}
else
{
lean_object* v_reuseFailAlloc_5723_; 
v_reuseFailAlloc_5723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5723_, 0, v_fst_5694_);
lean_ctor_set(v_reuseFailAlloc_5723_, 1, v___x_5719_);
v___x_5721_ = v_reuseFailAlloc_5723_;
goto v_reusejp_5720_;
}
v_reusejp_5720_:
{
lean_object* v___x_5722_; 
v___x_5722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5722_, 0, v___x_5721_);
return v___x_5722_;
}
}
}
}
}
else
{
lean_object* v___x_5728_; uint8_t v_isShared_5729_; uint8_t v_isSharedCheck_5830_; 
lean_inc(v_stop_5712_);
lean_inc(v_start_5711_);
lean_inc_ref(v_array_5710_);
v_isSharedCheck_5830_ = !lean_is_exclusive(v_snd_5693_);
if (v_isSharedCheck_5830_ == 0)
{
lean_object* v_unused_5831_; lean_object* v_unused_5832_; lean_object* v_unused_5833_; 
v_unused_5831_ = lean_ctor_get(v_snd_5693_, 2);
lean_dec(v_unused_5831_);
v_unused_5832_ = lean_ctor_get(v_snd_5693_, 1);
lean_dec(v_unused_5832_);
v_unused_5833_ = lean_ctor_get(v_snd_5693_, 0);
lean_dec(v_unused_5833_);
v___x_5728_ = v_snd_5693_;
v_isShared_5729_ = v_isSharedCheck_5830_;
goto v_resetjp_5727_;
}
else
{
lean_dec(v_snd_5693_);
v___x_5728_ = lean_box(0);
v_isShared_5729_ = v_isSharedCheck_5830_;
goto v_resetjp_5727_;
}
v_resetjp_5727_:
{
lean_object* v_array_5730_; lean_object* v_start_5731_; lean_object* v_stop_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5737_; 
v_array_5730_ = lean_ctor_get(v_fst_5706_, 0);
v_start_5731_ = lean_ctor_get(v_fst_5706_, 1);
v_stop_5732_ = lean_ctor_get(v_fst_5706_, 2);
v___x_5733_ = lean_array_fget(v_array_5710_, v_start_5711_);
v___x_5734_ = lean_unsigned_to_nat(1u);
v___x_5735_ = lean_nat_add(v_start_5711_, v___x_5734_);
lean_dec(v_start_5711_);
if (v_isShared_5729_ == 0)
{
lean_ctor_set(v___x_5728_, 1, v___x_5735_);
v___x_5737_ = v___x_5728_;
goto v_reusejp_5736_;
}
else
{
lean_object* v_reuseFailAlloc_5829_; 
v_reuseFailAlloc_5829_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5829_, 0, v_array_5710_);
lean_ctor_set(v_reuseFailAlloc_5829_, 1, v___x_5735_);
lean_ctor_set(v_reuseFailAlloc_5829_, 2, v_stop_5712_);
v___x_5737_ = v_reuseFailAlloc_5829_;
goto v_reusejp_5736_;
}
v_reusejp_5736_:
{
uint8_t v___x_5738_; 
v___x_5738_ = lean_nat_dec_lt(v_start_5731_, v_stop_5732_);
if (v___x_5738_ == 0)
{
lean_object* v___x_5740_; 
lean_dec(v___x_5733_);
if (v_isShared_5709_ == 0)
{
lean_ctor_set(v___x_5708_, 1, v___x_5737_);
v___x_5740_ = v___x_5708_;
goto v_reusejp_5739_;
}
else
{
lean_object* v_reuseFailAlloc_5751_; 
v_reuseFailAlloc_5751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5751_, 0, v_fst_5706_);
lean_ctor_set(v_reuseFailAlloc_5751_, 1, v___x_5737_);
v___x_5740_ = v_reuseFailAlloc_5751_;
goto v_reusejp_5739_;
}
v_reusejp_5739_:
{
lean_object* v___x_5742_; 
if (v_isShared_5705_ == 0)
{
lean_ctor_set(v___x_5704_, 1, v___x_5740_);
v___x_5742_ = v___x_5704_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_fst_5702_);
lean_ctor_set(v_reuseFailAlloc_5750_, 1, v___x_5740_);
v___x_5742_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
lean_object* v___x_5744_; 
if (v_isShared_5701_ == 0)
{
lean_ctor_set(v___x_5700_, 1, v___x_5742_);
v___x_5744_ = v___x_5700_;
goto v_reusejp_5743_;
}
else
{
lean_object* v_reuseFailAlloc_5749_; 
v_reuseFailAlloc_5749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5749_, 0, v_fst_5698_);
lean_ctor_set(v_reuseFailAlloc_5749_, 1, v___x_5742_);
v___x_5744_ = v_reuseFailAlloc_5749_;
goto v_reusejp_5743_;
}
v_reusejp_5743_:
{
lean_object* v___x_5746_; 
if (v_isShared_5697_ == 0)
{
lean_ctor_set(v___x_5696_, 1, v___x_5744_);
v___x_5746_ = v___x_5696_;
goto v_reusejp_5745_;
}
else
{
lean_object* v_reuseFailAlloc_5748_; 
v_reuseFailAlloc_5748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5748_, 0, v_fst_5694_);
lean_ctor_set(v_reuseFailAlloc_5748_, 1, v___x_5744_);
v___x_5746_ = v_reuseFailAlloc_5748_;
goto v_reusejp_5745_;
}
v_reusejp_5745_:
{
lean_object* v___x_5747_; 
v___x_5747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5747_, 0, v___x_5746_);
return v___x_5747_;
}
}
}
}
}
else
{
lean_object* v___x_5753_; uint8_t v_isShared_5754_; uint8_t v_isSharedCheck_5825_; 
lean_inc(v_stop_5732_);
lean_inc(v_start_5731_);
lean_inc_ref(v_array_5730_);
v_isSharedCheck_5825_ = !lean_is_exclusive(v_fst_5706_);
if (v_isSharedCheck_5825_ == 0)
{
lean_object* v_unused_5826_; lean_object* v_unused_5827_; lean_object* v_unused_5828_; 
v_unused_5826_ = lean_ctor_get(v_fst_5706_, 2);
lean_dec(v_unused_5826_);
v_unused_5827_ = lean_ctor_get(v_fst_5706_, 1);
lean_dec(v_unused_5827_);
v_unused_5828_ = lean_ctor_get(v_fst_5706_, 0);
lean_dec(v_unused_5828_);
v___x_5753_ = v_fst_5706_;
v_isShared_5754_ = v_isSharedCheck_5825_;
goto v_resetjp_5752_;
}
else
{
lean_dec(v_fst_5706_);
v___x_5753_ = lean_box(0);
v_isShared_5754_ = v_isSharedCheck_5825_;
goto v_resetjp_5752_;
}
v_resetjp_5752_:
{
lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5758_; 
v___x_5755_ = lean_array_fget(v_array_5730_, v_start_5731_);
v___x_5756_ = lean_nat_add(v_start_5731_, v___x_5734_);
lean_dec(v_start_5731_);
if (v_isShared_5754_ == 0)
{
lean_ctor_set(v___x_5753_, 1, v___x_5756_);
v___x_5758_ = v___x_5753_;
goto v_reusejp_5757_;
}
else
{
lean_object* v_reuseFailAlloc_5824_; 
v_reuseFailAlloc_5824_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5824_, 0, v_array_5730_);
lean_ctor_set(v_reuseFailAlloc_5824_, 1, v___x_5756_);
lean_ctor_set(v_reuseFailAlloc_5824_, 2, v_stop_5732_);
v___x_5758_ = v_reuseFailAlloc_5824_;
goto v_reusejp_5757_;
}
v_reusejp_5757_:
{
if (v_addEqualities_5673_ == 0)
{
lean_dec(v___x_5755_);
goto v___jp_5759_;
}
else
{
if (lean_obj_tag(v___x_5733_) == 0)
{
lean_object* v_a_5775_; lean_object* v___x_5776_; 
lean_del_object(v___x_5708_);
lean_del_object(v___x_5704_);
lean_del_object(v___x_5700_);
lean_del_object(v___x_5696_);
v_a_5775_ = lean_array_uget_borrowed(v_as_5674_, v_i_5676_);
lean_inc(v_a_5775_);
v___x_5776_ = l_Lean_Meta_isProof(v_a_5775_, v___y_5678_, v___y_5679_, v___y_5680_, v___y_5681_);
if (lean_obj_tag(v___x_5776_) == 0)
{
lean_object* v_a_5777_; uint8_t v___x_5778_; 
v_a_5777_ = lean_ctor_get(v___x_5776_, 0);
lean_inc(v_a_5777_);
lean_dec_ref_known(v___x_5776_, 1);
v___x_5778_ = lean_unbox(v_a_5777_);
lean_dec(v_a_5777_);
if (v___x_5778_ == 0)
{
lean_object* v___x_5779_; 
lean_inc(v_a_5775_);
v___x_5779_ = l_Lean_Meta_mkEqHEq(v___x_5755_, v_a_5775_, v___y_5678_, v___y_5679_, v___y_5680_, v___y_5681_);
if (lean_obj_tag(v___x_5779_) == 0)
{
lean_object* v_a_5780_; lean_object* v___x_5781_; 
v_a_5780_ = lean_ctor_get(v___x_5779_, 0);
lean_inc_n(v_a_5780_, 2);
lean_dec_ref_known(v___x_5779_, 1);
v___x_5781_ = l_Lean_mkArrow(v_a_5780_, v_fst_5694_, v___y_5680_, v___y_5681_);
if (lean_obj_tag(v___x_5781_) == 0)
{
lean_object* v_a_5782_; uint8_t v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; 
v_a_5782_ = lean_ctor_get(v___x_5781_, 0);
lean_inc(v_a_5782_);
lean_dec_ref_known(v___x_5781_, 1);
v___x_5783_ = l_Lean_Expr_isHEq(v_a_5780_);
lean_dec(v_a_5780_);
v___x_5784_ = lean_box(v___x_5783_);
v___x_5785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5785_, 0, v___x_5784_);
v___x_5786_ = lean_array_push(v_fst_5698_, v___x_5785_);
v___x_5787_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0));
v___x_5788_ = lean_array_push(v_fst_5702_, v___x_5787_);
v___x_5789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5789_, 0, v___x_5758_);
lean_ctor_set(v___x_5789_, 1, v___x_5737_);
v___x_5790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5790_, 0, v___x_5788_);
lean_ctor_set(v___x_5790_, 1, v___x_5789_);
v___x_5791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5791_, 0, v___x_5786_);
lean_ctor_set(v___x_5791_, 1, v___x_5790_);
v___x_5792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5792_, 0, v_a_5782_);
lean_ctor_set(v___x_5792_, 1, v___x_5791_);
v_a_5684_ = v___x_5792_;
goto v___jp_5683_;
}
else
{
lean_object* v_a_5793_; lean_object* v___x_5795_; uint8_t v_isShared_5796_; uint8_t v_isSharedCheck_5800_; 
lean_dec(v_a_5780_);
lean_dec_ref(v___x_5758_);
lean_dec_ref(v___x_5737_);
lean_dec(v_fst_5702_);
lean_dec(v_fst_5698_);
v_a_5793_ = lean_ctor_get(v___x_5781_, 0);
v_isSharedCheck_5800_ = !lean_is_exclusive(v___x_5781_);
if (v_isSharedCheck_5800_ == 0)
{
v___x_5795_ = v___x_5781_;
v_isShared_5796_ = v_isSharedCheck_5800_;
goto v_resetjp_5794_;
}
else
{
lean_inc(v_a_5793_);
lean_dec(v___x_5781_);
v___x_5795_ = lean_box(0);
v_isShared_5796_ = v_isSharedCheck_5800_;
goto v_resetjp_5794_;
}
v_resetjp_5794_:
{
lean_object* v___x_5798_; 
if (v_isShared_5796_ == 0)
{
v___x_5798_ = v___x_5795_;
goto v_reusejp_5797_;
}
else
{
lean_object* v_reuseFailAlloc_5799_; 
v_reuseFailAlloc_5799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5799_, 0, v_a_5793_);
v___x_5798_ = v_reuseFailAlloc_5799_;
goto v_reusejp_5797_;
}
v_reusejp_5797_:
{
return v___x_5798_;
}
}
}
}
else
{
lean_object* v_a_5801_; lean_object* v___x_5803_; uint8_t v_isShared_5804_; uint8_t v_isSharedCheck_5808_; 
lean_dec_ref(v___x_5758_);
lean_dec_ref(v___x_5737_);
lean_dec(v_fst_5702_);
lean_dec(v_fst_5698_);
lean_dec(v_fst_5694_);
v_a_5801_ = lean_ctor_get(v___x_5779_, 0);
v_isSharedCheck_5808_ = !lean_is_exclusive(v___x_5779_);
if (v_isSharedCheck_5808_ == 0)
{
v___x_5803_ = v___x_5779_;
v_isShared_5804_ = v_isSharedCheck_5808_;
goto v_resetjp_5802_;
}
else
{
lean_inc(v_a_5801_);
lean_dec(v___x_5779_);
v___x_5803_ = lean_box(0);
v_isShared_5804_ = v_isSharedCheck_5808_;
goto v_resetjp_5802_;
}
v_resetjp_5802_:
{
lean_object* v___x_5806_; 
if (v_isShared_5804_ == 0)
{
v___x_5806_ = v___x_5803_;
goto v_reusejp_5805_;
}
else
{
lean_object* v_reuseFailAlloc_5807_; 
v_reuseFailAlloc_5807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5807_, 0, v_a_5801_);
v___x_5806_ = v_reuseFailAlloc_5807_;
goto v_reusejp_5805_;
}
v_reusejp_5805_:
{
return v___x_5806_;
}
}
}
}
else
{
lean_object* v___x_5809_; lean_object* v___x_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; lean_object* v___x_5813_; lean_object* v___x_5814_; lean_object* v___x_5815_; 
lean_dec(v___x_5755_);
v___x_5809_ = lean_box(0);
v___x_5810_ = lean_array_push(v_fst_5698_, v___x_5809_);
v___x_5811_ = lean_array_push(v_fst_5702_, v___x_5733_);
v___x_5812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5812_, 0, v___x_5758_);
lean_ctor_set(v___x_5812_, 1, v___x_5737_);
v___x_5813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5813_, 0, v___x_5811_);
lean_ctor_set(v___x_5813_, 1, v___x_5812_);
v___x_5814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5814_, 0, v___x_5810_);
lean_ctor_set(v___x_5814_, 1, v___x_5813_);
v___x_5815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5815_, 0, v_fst_5694_);
lean_ctor_set(v___x_5815_, 1, v___x_5814_);
v_a_5684_ = v___x_5815_;
goto v___jp_5683_;
}
}
else
{
lean_object* v_a_5816_; lean_object* v___x_5818_; uint8_t v_isShared_5819_; uint8_t v_isSharedCheck_5823_; 
lean_dec_ref(v___x_5758_);
lean_dec(v___x_5755_);
lean_dec_ref(v___x_5737_);
lean_dec(v_fst_5702_);
lean_dec(v_fst_5698_);
lean_dec(v_fst_5694_);
v_a_5816_ = lean_ctor_get(v___x_5776_, 0);
v_isSharedCheck_5823_ = !lean_is_exclusive(v___x_5776_);
if (v_isSharedCheck_5823_ == 0)
{
v___x_5818_ = v___x_5776_;
v_isShared_5819_ = v_isSharedCheck_5823_;
goto v_resetjp_5817_;
}
else
{
lean_inc(v_a_5816_);
lean_dec(v___x_5776_);
v___x_5818_ = lean_box(0);
v_isShared_5819_ = v_isSharedCheck_5823_;
goto v_resetjp_5817_;
}
v_resetjp_5817_:
{
lean_object* v___x_5821_; 
if (v_isShared_5819_ == 0)
{
v___x_5821_ = v___x_5818_;
goto v_reusejp_5820_;
}
else
{
lean_object* v_reuseFailAlloc_5822_; 
v_reuseFailAlloc_5822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5822_, 0, v_a_5816_);
v___x_5821_ = v_reuseFailAlloc_5822_;
goto v_reusejp_5820_;
}
v_reusejp_5820_:
{
return v___x_5821_;
}
}
}
}
else
{
lean_dec(v___x_5755_);
goto v___jp_5759_;
}
}
v___jp_5759_:
{
lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5764_; 
v___x_5760_ = lean_box(0);
v___x_5761_ = lean_array_push(v_fst_5698_, v___x_5760_);
v___x_5762_ = lean_array_push(v_fst_5702_, v___x_5733_);
if (v_isShared_5709_ == 0)
{
lean_ctor_set(v___x_5708_, 1, v___x_5737_);
lean_ctor_set(v___x_5708_, 0, v___x_5758_);
v___x_5764_ = v___x_5708_;
goto v_reusejp_5763_;
}
else
{
lean_object* v_reuseFailAlloc_5774_; 
v_reuseFailAlloc_5774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5774_, 0, v___x_5758_);
lean_ctor_set(v_reuseFailAlloc_5774_, 1, v___x_5737_);
v___x_5764_ = v_reuseFailAlloc_5774_;
goto v_reusejp_5763_;
}
v_reusejp_5763_:
{
lean_object* v___x_5766_; 
if (v_isShared_5705_ == 0)
{
lean_ctor_set(v___x_5704_, 1, v___x_5764_);
lean_ctor_set(v___x_5704_, 0, v___x_5762_);
v___x_5766_ = v___x_5704_;
goto v_reusejp_5765_;
}
else
{
lean_object* v_reuseFailAlloc_5773_; 
v_reuseFailAlloc_5773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5773_, 0, v___x_5762_);
lean_ctor_set(v_reuseFailAlloc_5773_, 1, v___x_5764_);
v___x_5766_ = v_reuseFailAlloc_5773_;
goto v_reusejp_5765_;
}
v_reusejp_5765_:
{
lean_object* v___x_5768_; 
if (v_isShared_5701_ == 0)
{
lean_ctor_set(v___x_5700_, 1, v___x_5766_);
lean_ctor_set(v___x_5700_, 0, v___x_5761_);
v___x_5768_ = v___x_5700_;
goto v_reusejp_5767_;
}
else
{
lean_object* v_reuseFailAlloc_5772_; 
v_reuseFailAlloc_5772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5772_, 0, v___x_5761_);
lean_ctor_set(v_reuseFailAlloc_5772_, 1, v___x_5766_);
v___x_5768_ = v_reuseFailAlloc_5772_;
goto v_reusejp_5767_;
}
v_reusejp_5767_:
{
lean_object* v___x_5770_; 
if (v_isShared_5697_ == 0)
{
lean_ctor_set(v___x_5696_, 1, v___x_5768_);
v___x_5770_ = v___x_5696_;
goto v_reusejp_5769_;
}
else
{
lean_object* v_reuseFailAlloc_5771_; 
v_reuseFailAlloc_5771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5771_, 0, v_fst_5694_);
lean_ctor_set(v_reuseFailAlloc_5771_, 1, v___x_5768_);
v___x_5770_ = v_reuseFailAlloc_5771_;
goto v_reusejp_5769_;
}
v_reusejp_5769_:
{
v_a_5684_ = v___x_5770_;
goto v___jp_5683_;
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
}
}
v___jp_5683_:
{
size_t v___x_5685_; size_t v___x_5686_; 
v___x_5685_ = ((size_t)1ULL);
v___x_5686_ = lean_usize_add(v_i_5676_, v___x_5685_);
v_i_5676_ = v___x_5686_;
v_b_5677_ = v_a_5684_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7___boxed(lean_object* v_addEqualities_5842_, lean_object* v_as_5843_, lean_object* v_sz_5844_, lean_object* v_i_5845_, lean_object* v_b_5846_, lean_object* v___y_5847_, lean_object* v___y_5848_, lean_object* v___y_5849_, lean_object* v___y_5850_, lean_object* v___y_5851_){
_start:
{
uint8_t v_addEqualities_boxed_5852_; size_t v_sz_boxed_5853_; size_t v_i_boxed_5854_; lean_object* v_res_5855_; 
v_addEqualities_boxed_5852_ = lean_unbox(v_addEqualities_5842_);
v_sz_boxed_5853_ = lean_unbox_usize(v_sz_5844_);
lean_dec(v_sz_5844_);
v_i_boxed_5854_ = lean_unbox_usize(v_i_5845_);
lean_dec(v_i_5845_);
v_res_5855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(v_addEqualities_boxed_5852_, v_as_5843_, v_sz_boxed_5853_, v_i_boxed_5854_, v_b_5846_, v___y_5847_, v___y_5848_, v___y_5849_, v___y_5850_);
lean_dec(v___y_5850_);
lean_dec_ref(v___y_5849_);
lean_dec(v___y_5848_);
lean_dec_ref(v___y_5847_);
lean_dec_ref(v_as_5843_);
return v_res_5855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(lean_object* v_onMotive_5856_, lean_object* v_toMatcherInfo_5857_, lean_object* v_a_5858_, uint8_t v_addEqualities_5859_, size_t v___x_5860_, lean_object* v_discrs_5861_, lean_object* v_motiveArgs_5862_, lean_object* v_motiveBody_5863_, lean_object* v___y_5864_, lean_object* v___y_5865_, lean_object* v___y_5866_, lean_object* v___y_5867_){
_start:
{
lean_object* v___x_5961_; lean_object* v___x_5962_; uint8_t v___x_5963_; 
v___x_5961_ = lean_array_get_size(v_motiveArgs_5862_);
v___x_5962_ = lean_array_get_size(v_discrs_5861_);
v___x_5963_ = lean_nat_dec_eq(v___x_5961_, v___x_5962_);
if (v___x_5963_ == 0)
{
lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v_a_5972_; lean_object* v___x_5974_; uint8_t v_isShared_5975_; uint8_t v_isSharedCheck_5979_; 
lean_dec_ref(v_motiveBody_5863_);
lean_dec_ref(v_motiveArgs_5862_);
lean_dec_ref(v_a_5858_);
lean_dec_ref(v_toMatcherInfo_5857_);
lean_dec_ref(v_onMotive_5856_);
v___x_5964_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_5965_ = l_Nat_reprFast(v___x_5962_);
v___x_5966_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5966_, 0, v___x_5965_);
v___x_5967_ = l_Lean_MessageData_ofFormat(v___x_5966_);
v___x_5968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5968_, 0, v___x_5964_);
lean_ctor_set(v___x_5968_, 1, v___x_5967_);
v___x_5969_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_5970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5970_, 0, v___x_5968_);
lean_ctor_set(v___x_5970_, 1, v___x_5969_);
v___x_5971_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_5970_, v___y_5864_, v___y_5865_, v___y_5866_, v___y_5867_);
v_a_5972_ = lean_ctor_get(v___x_5971_, 0);
v_isSharedCheck_5979_ = !lean_is_exclusive(v___x_5971_);
if (v_isSharedCheck_5979_ == 0)
{
v___x_5974_ = v___x_5971_;
v_isShared_5975_ = v_isSharedCheck_5979_;
goto v_resetjp_5973_;
}
else
{
lean_inc(v_a_5972_);
lean_dec(v___x_5971_);
v___x_5974_ = lean_box(0);
v_isShared_5975_ = v_isSharedCheck_5979_;
goto v_resetjp_5973_;
}
v_resetjp_5973_:
{
lean_object* v___x_5977_; 
if (v_isShared_5975_ == 0)
{
v___x_5977_ = v___x_5974_;
goto v_reusejp_5976_;
}
else
{
lean_object* v_reuseFailAlloc_5978_; 
v_reuseFailAlloc_5978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5978_, 0, v_a_5972_);
v___x_5977_ = v_reuseFailAlloc_5978_;
goto v_reusejp_5976_;
}
v_reusejp_5976_:
{
return v___x_5977_;
}
}
}
else
{
goto v___jp_5869_;
}
v___jp_5869_:
{
lean_object* v___x_5870_; 
lean_inc(v___y_5867_);
lean_inc_ref(v___y_5866_);
lean_inc(v___y_5865_);
lean_inc_ref(v___y_5864_);
lean_inc_ref(v_motiveArgs_5862_);
v___x_5870_ = lean_apply_7(v_onMotive_5856_, v_motiveArgs_5862_, v_motiveBody_5863_, v___y_5864_, v___y_5865_, v___y_5866_, v___y_5867_, lean_box(0));
if (lean_obj_tag(v___x_5870_) == 0)
{
lean_object* v_a_5871_; lean_object* v_discrInfos_5872_; lean_object* v___x_5873_; lean_object* v_addHEqualities_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; size_t v_sz_5883_; lean_object* v___x_5884_; 
v_a_5871_ = lean_ctor_get(v___x_5870_, 0);
lean_inc(v_a_5871_);
lean_dec_ref_known(v___x_5870_, 1);
v_discrInfos_5872_ = lean_ctor_get(v_toMatcherInfo_5857_, 4);
lean_inc_ref(v_discrInfos_5872_);
lean_dec_ref(v_toMatcherInfo_5857_);
v___x_5873_ = lean_unsigned_to_nat(0u);
v_addHEqualities_5874_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0));
v___x_5875_ = lean_array_get_size(v_a_5858_);
v___x_5876_ = l_Array_toSubarray___redArg(v_a_5858_, v___x_5873_, v___x_5875_);
v___x_5877_ = lean_array_get_size(v_discrInfos_5872_);
v___x_5878_ = l_Array_toSubarray___redArg(v_discrInfos_5872_, v___x_5873_, v___x_5877_);
v___x_5879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5879_, 0, v___x_5876_);
lean_ctor_set(v___x_5879_, 1, v___x_5878_);
v___x_5880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5880_, 0, v_addHEqualities_5874_);
lean_ctor_set(v___x_5880_, 1, v___x_5879_);
v___x_5881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5881_, 0, v_addHEqualities_5874_);
lean_ctor_set(v___x_5881_, 1, v___x_5880_);
v___x_5882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5882_, 0, v_a_5871_);
lean_ctor_set(v___x_5882_, 1, v___x_5881_);
v_sz_5883_ = lean_array_size(v_motiveArgs_5862_);
v___x_5884_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(v_addEqualities_5859_, v_motiveArgs_5862_, v_sz_5883_, v___x_5860_, v___x_5882_, v___y_5864_, v___y_5865_, v___y_5866_, v___y_5867_);
if (lean_obj_tag(v___x_5884_) == 0)
{
lean_object* v_a_5885_; lean_object* v_snd_5886_; lean_object* v_snd_5887_; lean_object* v_fst_5888_; lean_object* v___x_5890_; uint8_t v_isShared_5891_; uint8_t v_isSharedCheck_5943_; 
v_a_5885_ = lean_ctor_get(v___x_5884_, 0);
lean_inc(v_a_5885_);
lean_dec_ref_known(v___x_5884_, 1);
v_snd_5886_ = lean_ctor_get(v_a_5885_, 1);
lean_inc(v_snd_5886_);
v_snd_5887_ = lean_ctor_get(v_snd_5886_, 1);
lean_inc(v_snd_5887_);
v_fst_5888_ = lean_ctor_get(v_a_5885_, 0);
v_isSharedCheck_5943_ = !lean_is_exclusive(v_a_5885_);
if (v_isSharedCheck_5943_ == 0)
{
lean_object* v_unused_5944_; 
v_unused_5944_ = lean_ctor_get(v_a_5885_, 1);
lean_dec(v_unused_5944_);
v___x_5890_ = v_a_5885_;
v_isShared_5891_ = v_isSharedCheck_5943_;
goto v_resetjp_5889_;
}
else
{
lean_inc(v_fst_5888_);
lean_dec(v_a_5885_);
v___x_5890_ = lean_box(0);
v_isShared_5891_ = v_isSharedCheck_5943_;
goto v_resetjp_5889_;
}
v_resetjp_5889_:
{
lean_object* v_fst_5892_; lean_object* v___x_5894_; uint8_t v_isShared_5895_; uint8_t v_isSharedCheck_5941_; 
v_fst_5892_ = lean_ctor_get(v_snd_5886_, 0);
v_isSharedCheck_5941_ = !lean_is_exclusive(v_snd_5886_);
if (v_isSharedCheck_5941_ == 0)
{
lean_object* v_unused_5942_; 
v_unused_5942_ = lean_ctor_get(v_snd_5886_, 1);
lean_dec(v_unused_5942_);
v___x_5894_ = v_snd_5886_;
v_isShared_5895_ = v_isSharedCheck_5941_;
goto v_resetjp_5893_;
}
else
{
lean_inc(v_fst_5892_);
lean_dec(v_snd_5886_);
v___x_5894_ = lean_box(0);
v_isShared_5895_ = v_isSharedCheck_5941_;
goto v_resetjp_5893_;
}
v_resetjp_5893_:
{
lean_object* v_fst_5896_; lean_object* v___x_5898_; uint8_t v_isShared_5899_; uint8_t v_isSharedCheck_5939_; 
v_fst_5896_ = lean_ctor_get(v_snd_5887_, 0);
v_isSharedCheck_5939_ = !lean_is_exclusive(v_snd_5887_);
if (v_isSharedCheck_5939_ == 0)
{
lean_object* v_unused_5940_; 
v_unused_5940_ = lean_ctor_get(v_snd_5887_, 1);
lean_dec(v_unused_5940_);
v___x_5898_ = v_snd_5887_;
v_isShared_5899_ = v_isSharedCheck_5939_;
goto v_resetjp_5897_;
}
else
{
lean_inc(v_fst_5896_);
lean_dec(v_snd_5887_);
v___x_5898_ = lean_box(0);
v_isShared_5899_ = v_isSharedCheck_5939_;
goto v_resetjp_5897_;
}
v_resetjp_5897_:
{
uint8_t v___x_5900_; uint8_t v___x_5901_; uint8_t v___x_5902_; lean_object* v___x_5903_; 
v___x_5900_ = 0;
v___x_5901_ = 1;
v___x_5902_ = 1;
lean_inc(v_fst_5888_);
v___x_5903_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_5862_, v_fst_5888_, v___x_5900_, v___x_5901_, v___x_5900_, v___x_5901_, v___x_5902_, v___y_5864_, v___y_5865_, v___y_5866_, v___y_5867_);
lean_dec_ref(v_motiveArgs_5862_);
if (lean_obj_tag(v___x_5903_) == 0)
{
lean_object* v_a_5904_; lean_object* v___x_5905_; 
v_a_5904_ = lean_ctor_get(v___x_5903_, 0);
lean_inc(v_a_5904_);
lean_dec_ref_known(v___x_5903_, 1);
v___x_5905_ = l_Lean_Meta_getLevel(v_fst_5888_, v___y_5864_, v___y_5865_, v___y_5866_, v___y_5867_);
if (lean_obj_tag(v___x_5905_) == 0)
{
lean_object* v_a_5906_; lean_object* v___x_5908_; uint8_t v_isShared_5909_; uint8_t v_isSharedCheck_5922_; 
v_a_5906_ = lean_ctor_get(v___x_5905_, 0);
v_isSharedCheck_5922_ = !lean_is_exclusive(v___x_5905_);
if (v_isSharedCheck_5922_ == 0)
{
v___x_5908_ = v___x_5905_;
v_isShared_5909_ = v_isSharedCheck_5922_;
goto v_resetjp_5907_;
}
else
{
lean_inc(v_a_5906_);
lean_dec(v___x_5905_);
v___x_5908_ = lean_box(0);
v_isShared_5909_ = v_isSharedCheck_5922_;
goto v_resetjp_5907_;
}
v_resetjp_5907_:
{
lean_object* v___x_5911_; 
if (v_isShared_5899_ == 0)
{
lean_ctor_set(v___x_5898_, 1, v_fst_5896_);
lean_ctor_set(v___x_5898_, 0, v_fst_5892_);
v___x_5911_ = v___x_5898_;
goto v_reusejp_5910_;
}
else
{
lean_object* v_reuseFailAlloc_5921_; 
v_reuseFailAlloc_5921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5921_, 0, v_fst_5892_);
lean_ctor_set(v_reuseFailAlloc_5921_, 1, v_fst_5896_);
v___x_5911_ = v_reuseFailAlloc_5921_;
goto v_reusejp_5910_;
}
v_reusejp_5910_:
{
lean_object* v___x_5913_; 
if (v_isShared_5895_ == 0)
{
lean_ctor_set(v___x_5894_, 1, v___x_5911_);
lean_ctor_set(v___x_5894_, 0, v_a_5906_);
v___x_5913_ = v___x_5894_;
goto v_reusejp_5912_;
}
else
{
lean_object* v_reuseFailAlloc_5920_; 
v_reuseFailAlloc_5920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5920_, 0, v_a_5906_);
lean_ctor_set(v_reuseFailAlloc_5920_, 1, v___x_5911_);
v___x_5913_ = v_reuseFailAlloc_5920_;
goto v_reusejp_5912_;
}
v_reusejp_5912_:
{
lean_object* v___x_5915_; 
if (v_isShared_5891_ == 0)
{
lean_ctor_set(v___x_5890_, 1, v___x_5913_);
lean_ctor_set(v___x_5890_, 0, v_a_5904_);
v___x_5915_ = v___x_5890_;
goto v_reusejp_5914_;
}
else
{
lean_object* v_reuseFailAlloc_5919_; 
v_reuseFailAlloc_5919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5919_, 0, v_a_5904_);
lean_ctor_set(v_reuseFailAlloc_5919_, 1, v___x_5913_);
v___x_5915_ = v_reuseFailAlloc_5919_;
goto v_reusejp_5914_;
}
v_reusejp_5914_:
{
lean_object* v___x_5917_; 
if (v_isShared_5909_ == 0)
{
lean_ctor_set(v___x_5908_, 0, v___x_5915_);
v___x_5917_ = v___x_5908_;
goto v_reusejp_5916_;
}
else
{
lean_object* v_reuseFailAlloc_5918_; 
v_reuseFailAlloc_5918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5918_, 0, v___x_5915_);
v___x_5917_ = v_reuseFailAlloc_5918_;
goto v_reusejp_5916_;
}
v_reusejp_5916_:
{
return v___x_5917_;
}
}
}
}
}
}
else
{
lean_object* v_a_5923_; lean_object* v___x_5925_; uint8_t v_isShared_5926_; uint8_t v_isSharedCheck_5930_; 
lean_dec(v_a_5904_);
lean_del_object(v___x_5898_);
lean_dec(v_fst_5896_);
lean_del_object(v___x_5894_);
lean_dec(v_fst_5892_);
lean_del_object(v___x_5890_);
v_a_5923_ = lean_ctor_get(v___x_5905_, 0);
v_isSharedCheck_5930_ = !lean_is_exclusive(v___x_5905_);
if (v_isSharedCheck_5930_ == 0)
{
v___x_5925_ = v___x_5905_;
v_isShared_5926_ = v_isSharedCheck_5930_;
goto v_resetjp_5924_;
}
else
{
lean_inc(v_a_5923_);
lean_dec(v___x_5905_);
v___x_5925_ = lean_box(0);
v_isShared_5926_ = v_isSharedCheck_5930_;
goto v_resetjp_5924_;
}
v_resetjp_5924_:
{
lean_object* v___x_5928_; 
if (v_isShared_5926_ == 0)
{
v___x_5928_ = v___x_5925_;
goto v_reusejp_5927_;
}
else
{
lean_object* v_reuseFailAlloc_5929_; 
v_reuseFailAlloc_5929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5929_, 0, v_a_5923_);
v___x_5928_ = v_reuseFailAlloc_5929_;
goto v_reusejp_5927_;
}
v_reusejp_5927_:
{
return v___x_5928_;
}
}
}
}
else
{
lean_object* v_a_5931_; lean_object* v___x_5933_; uint8_t v_isShared_5934_; uint8_t v_isSharedCheck_5938_; 
lean_del_object(v___x_5898_);
lean_dec(v_fst_5896_);
lean_del_object(v___x_5894_);
lean_dec(v_fst_5892_);
lean_del_object(v___x_5890_);
lean_dec(v_fst_5888_);
v_a_5931_ = lean_ctor_get(v___x_5903_, 0);
v_isSharedCheck_5938_ = !lean_is_exclusive(v___x_5903_);
if (v_isSharedCheck_5938_ == 0)
{
v___x_5933_ = v___x_5903_;
v_isShared_5934_ = v_isSharedCheck_5938_;
goto v_resetjp_5932_;
}
else
{
lean_inc(v_a_5931_);
lean_dec(v___x_5903_);
v___x_5933_ = lean_box(0);
v_isShared_5934_ = v_isSharedCheck_5938_;
goto v_resetjp_5932_;
}
v_resetjp_5932_:
{
lean_object* v___x_5936_; 
if (v_isShared_5934_ == 0)
{
v___x_5936_ = v___x_5933_;
goto v_reusejp_5935_;
}
else
{
lean_object* v_reuseFailAlloc_5937_; 
v_reuseFailAlloc_5937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5937_, 0, v_a_5931_);
v___x_5936_ = v_reuseFailAlloc_5937_;
goto v_reusejp_5935_;
}
v_reusejp_5935_:
{
return v___x_5936_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5945_; lean_object* v___x_5947_; uint8_t v_isShared_5948_; uint8_t v_isSharedCheck_5952_; 
lean_dec_ref(v_motiveArgs_5862_);
v_a_5945_ = lean_ctor_get(v___x_5884_, 0);
v_isSharedCheck_5952_ = !lean_is_exclusive(v___x_5884_);
if (v_isSharedCheck_5952_ == 0)
{
v___x_5947_ = v___x_5884_;
v_isShared_5948_ = v_isSharedCheck_5952_;
goto v_resetjp_5946_;
}
else
{
lean_inc(v_a_5945_);
lean_dec(v___x_5884_);
v___x_5947_ = lean_box(0);
v_isShared_5948_ = v_isSharedCheck_5952_;
goto v_resetjp_5946_;
}
v_resetjp_5946_:
{
lean_object* v___x_5950_; 
if (v_isShared_5948_ == 0)
{
v___x_5950_ = v___x_5947_;
goto v_reusejp_5949_;
}
else
{
lean_object* v_reuseFailAlloc_5951_; 
v_reuseFailAlloc_5951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5951_, 0, v_a_5945_);
v___x_5950_ = v_reuseFailAlloc_5951_;
goto v_reusejp_5949_;
}
v_reusejp_5949_:
{
return v___x_5950_;
}
}
}
}
else
{
lean_object* v_a_5953_; lean_object* v___x_5955_; uint8_t v_isShared_5956_; uint8_t v_isSharedCheck_5960_; 
lean_dec_ref(v_motiveArgs_5862_);
lean_dec_ref(v_a_5858_);
lean_dec_ref(v_toMatcherInfo_5857_);
v_a_5953_ = lean_ctor_get(v___x_5870_, 0);
v_isSharedCheck_5960_ = !lean_is_exclusive(v___x_5870_);
if (v_isSharedCheck_5960_ == 0)
{
v___x_5955_ = v___x_5870_;
v_isShared_5956_ = v_isSharedCheck_5960_;
goto v_resetjp_5954_;
}
else
{
lean_inc(v_a_5953_);
lean_dec(v___x_5870_);
v___x_5955_ = lean_box(0);
v_isShared_5956_ = v_isSharedCheck_5960_;
goto v_resetjp_5954_;
}
v_resetjp_5954_:
{
lean_object* v___x_5958_; 
if (v_isShared_5956_ == 0)
{
v___x_5958_ = v___x_5955_;
goto v_reusejp_5957_;
}
else
{
lean_object* v_reuseFailAlloc_5959_; 
v_reuseFailAlloc_5959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5959_, 0, v_a_5953_);
v___x_5958_ = v_reuseFailAlloc_5959_;
goto v_reusejp_5957_;
}
v_reusejp_5957_:
{
return v___x_5958_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed(lean_object* v_onMotive_5980_, lean_object* v_toMatcherInfo_5981_, lean_object* v_a_5982_, lean_object* v_addEqualities_5983_, lean_object* v___x_5984_, lean_object* v_discrs_5985_, lean_object* v_motiveArgs_5986_, lean_object* v_motiveBody_5987_, lean_object* v___y_5988_, lean_object* v___y_5989_, lean_object* v___y_5990_, lean_object* v___y_5991_, lean_object* v___y_5992_){
_start:
{
uint8_t v_addEqualities_boxed_5993_; size_t v___x_35130__boxed_5994_; lean_object* v_res_5995_; 
v_addEqualities_boxed_5993_ = lean_unbox(v_addEqualities_5983_);
v___x_35130__boxed_5994_ = lean_unbox_usize(v___x_5984_);
lean_dec(v___x_5984_);
v_res_5995_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(v_onMotive_5980_, v_toMatcherInfo_5981_, v_a_5982_, v_addEqualities_boxed_5993_, v___x_35130__boxed_5994_, v_discrs_5985_, v_motiveArgs_5986_, v_motiveBody_5987_, v___y_5988_, v___y_5989_, v___y_5990_, v___y_5991_);
lean_dec(v___y_5991_);
lean_dec_ref(v___y_5990_);
lean_dec(v___y_5989_);
lean_dec_ref(v___y_5988_);
lean_dec_ref(v_discrs_5985_);
return v_res_5995_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(lean_object* v_as_5996_, size_t v_sz_5997_, size_t v_i_5998_, lean_object* v_b_5999_, lean_object* v___y_6000_, lean_object* v___y_6001_, lean_object* v___y_6002_, lean_object* v___y_6003_){
_start:
{
lean_object* v_a_6006_; uint8_t v___x_6010_; 
v___x_6010_ = lean_usize_dec_lt(v_i_5998_, v_sz_5997_);
if (v___x_6010_ == 0)
{
lean_object* v___x_6011_; 
v___x_6011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6011_, 0, v_b_5999_);
return v___x_6011_;
}
else
{
lean_object* v_snd_6012_; lean_object* v_snd_6013_; lean_object* v_fst_6014_; lean_object* v___x_6016_; uint8_t v_isShared_6017_; uint8_t v_isSharedCheck_6074_; 
v_snd_6012_ = lean_ctor_get(v_b_5999_, 1);
lean_inc(v_snd_6012_);
v_snd_6013_ = lean_ctor_get(v_snd_6012_, 1);
lean_inc(v_snd_6013_);
v_fst_6014_ = lean_ctor_get(v_b_5999_, 0);
v_isSharedCheck_6074_ = !lean_is_exclusive(v_b_5999_);
if (v_isSharedCheck_6074_ == 0)
{
lean_object* v_unused_6075_; 
v_unused_6075_ = lean_ctor_get(v_b_5999_, 1);
lean_dec(v_unused_6075_);
v___x_6016_ = v_b_5999_;
v_isShared_6017_ = v_isSharedCheck_6074_;
goto v_resetjp_6015_;
}
else
{
lean_inc(v_fst_6014_);
lean_dec(v_b_5999_);
v___x_6016_ = lean_box(0);
v_isShared_6017_ = v_isSharedCheck_6074_;
goto v_resetjp_6015_;
}
v_resetjp_6015_:
{
lean_object* v_fst_6018_; lean_object* v___x_6020_; uint8_t v_isShared_6021_; uint8_t v_isSharedCheck_6072_; 
v_fst_6018_ = lean_ctor_get(v_snd_6012_, 0);
v_isSharedCheck_6072_ = !lean_is_exclusive(v_snd_6012_);
if (v_isSharedCheck_6072_ == 0)
{
lean_object* v_unused_6073_; 
v_unused_6073_ = lean_ctor_get(v_snd_6012_, 1);
lean_dec(v_unused_6073_);
v___x_6020_ = v_snd_6012_;
v_isShared_6021_ = v_isSharedCheck_6072_;
goto v_resetjp_6019_;
}
else
{
lean_inc(v_fst_6018_);
lean_dec(v_snd_6012_);
v___x_6020_ = lean_box(0);
v_isShared_6021_ = v_isSharedCheck_6072_;
goto v_resetjp_6019_;
}
v_resetjp_6019_:
{
lean_object* v_array_6022_; lean_object* v_start_6023_; lean_object* v_stop_6024_; uint8_t v___x_6025_; 
v_array_6022_ = lean_ctor_get(v_snd_6013_, 0);
v_start_6023_ = lean_ctor_get(v_snd_6013_, 1);
v_stop_6024_ = lean_ctor_get(v_snd_6013_, 2);
v___x_6025_ = lean_nat_dec_lt(v_start_6023_, v_stop_6024_);
if (v___x_6025_ == 0)
{
lean_object* v___x_6027_; 
if (v_isShared_6021_ == 0)
{
v___x_6027_ = v___x_6020_;
goto v_reusejp_6026_;
}
else
{
lean_object* v_reuseFailAlloc_6032_; 
v_reuseFailAlloc_6032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6032_, 0, v_fst_6018_);
lean_ctor_set(v_reuseFailAlloc_6032_, 1, v_snd_6013_);
v___x_6027_ = v_reuseFailAlloc_6032_;
goto v_reusejp_6026_;
}
v_reusejp_6026_:
{
lean_object* v___x_6029_; 
if (v_isShared_6017_ == 0)
{
lean_ctor_set(v___x_6016_, 1, v___x_6027_);
v___x_6029_ = v___x_6016_;
goto v_reusejp_6028_;
}
else
{
lean_object* v_reuseFailAlloc_6031_; 
v_reuseFailAlloc_6031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6031_, 0, v_fst_6014_);
lean_ctor_set(v_reuseFailAlloc_6031_, 1, v___x_6027_);
v___x_6029_ = v_reuseFailAlloc_6031_;
goto v_reusejp_6028_;
}
v_reusejp_6028_:
{
lean_object* v___x_6030_; 
v___x_6030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6030_, 0, v___x_6029_);
return v___x_6030_;
}
}
}
else
{
lean_object* v___x_6034_; uint8_t v_isShared_6035_; uint8_t v_isSharedCheck_6068_; 
lean_inc(v_stop_6024_);
lean_inc(v_start_6023_);
lean_inc_ref(v_array_6022_);
v_isSharedCheck_6068_ = !lean_is_exclusive(v_snd_6013_);
if (v_isSharedCheck_6068_ == 0)
{
lean_object* v_unused_6069_; lean_object* v_unused_6070_; lean_object* v_unused_6071_; 
v_unused_6069_ = lean_ctor_get(v_snd_6013_, 2);
lean_dec(v_unused_6069_);
v_unused_6070_ = lean_ctor_get(v_snd_6013_, 1);
lean_dec(v_unused_6070_);
v_unused_6071_ = lean_ctor_get(v_snd_6013_, 0);
lean_dec(v_unused_6071_);
v___x_6034_ = v_snd_6013_;
v_isShared_6035_ = v_isSharedCheck_6068_;
goto v_resetjp_6033_;
}
else
{
lean_dec(v_snd_6013_);
v___x_6034_ = lean_box(0);
v_isShared_6035_ = v_isSharedCheck_6068_;
goto v_resetjp_6033_;
}
v_resetjp_6033_:
{
lean_object* v___x_6036_; lean_object* v___x_6037_; lean_object* v___x_6038_; lean_object* v___x_6040_; 
v___x_6036_ = lean_array_fget(v_array_6022_, v_start_6023_);
v___x_6037_ = lean_unsigned_to_nat(1u);
v___x_6038_ = lean_nat_add(v_start_6023_, v___x_6037_);
lean_dec(v_start_6023_);
if (v_isShared_6035_ == 0)
{
lean_ctor_set(v___x_6034_, 1, v___x_6038_);
v___x_6040_ = v___x_6034_;
goto v_reusejp_6039_;
}
else
{
lean_object* v_reuseFailAlloc_6067_; 
v_reuseFailAlloc_6067_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6067_, 0, v_array_6022_);
lean_ctor_set(v_reuseFailAlloc_6067_, 1, v___x_6038_);
lean_ctor_set(v_reuseFailAlloc_6067_, 2, v_stop_6024_);
v___x_6040_ = v_reuseFailAlloc_6067_;
goto v_reusejp_6039_;
}
v_reusejp_6039_:
{
lean_object* v___y_6042_; 
if (lean_obj_tag(v___x_6036_) == 0)
{
lean_object* v___x_6060_; lean_object* v___x_6061_; 
lean_del_object(v___x_6020_);
lean_del_object(v___x_6016_);
v___x_6060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6060_, 0, v_fst_6018_);
lean_ctor_set(v___x_6060_, 1, v___x_6040_);
v___x_6061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6061_, 0, v_fst_6014_);
lean_ctor_set(v___x_6061_, 1, v___x_6060_);
v_a_6006_ = v___x_6061_;
goto v___jp_6005_;
}
else
{
lean_object* v_val_6062_; lean_object* v_a_6063_; uint8_t v___x_6064_; 
v_val_6062_ = lean_ctor_get(v___x_6036_, 0);
lean_inc(v_val_6062_);
lean_dec_ref_known(v___x_6036_, 1);
v_a_6063_ = lean_array_uget_borrowed(v_as_5996_, v_i_5998_);
v___x_6064_ = lean_unbox(v_val_6062_);
lean_dec(v_val_6062_);
if (v___x_6064_ == 0)
{
lean_object* v___x_6065_; 
lean_inc(v_a_6063_);
v___x_6065_ = l_Lean_Meta_mkEqRefl(v_a_6063_, v___y_6000_, v___y_6001_, v___y_6002_, v___y_6003_);
v___y_6042_ = v___x_6065_;
goto v___jp_6041_;
}
else
{
lean_object* v___x_6066_; 
lean_inc(v_a_6063_);
v___x_6066_ = l_Lean_Meta_mkHEqRefl(v_a_6063_, v___y_6000_, v___y_6001_, v___y_6002_, v___y_6003_);
v___y_6042_ = v___x_6066_;
goto v___jp_6041_;
}
}
v___jp_6041_:
{
if (lean_obj_tag(v___y_6042_) == 0)
{
lean_object* v_a_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6047_; 
v_a_6043_ = lean_ctor_get(v___y_6042_, 0);
lean_inc(v_a_6043_);
lean_dec_ref_known(v___y_6042_, 1);
v___x_6044_ = lean_array_push(v_fst_6014_, v_a_6043_);
v___x_6045_ = lean_nat_add(v_fst_6018_, v___x_6037_);
lean_dec(v_fst_6018_);
if (v_isShared_6021_ == 0)
{
lean_ctor_set(v___x_6020_, 1, v___x_6040_);
lean_ctor_set(v___x_6020_, 0, v___x_6045_);
v___x_6047_ = v___x_6020_;
goto v_reusejp_6046_;
}
else
{
lean_object* v_reuseFailAlloc_6051_; 
v_reuseFailAlloc_6051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6051_, 0, v___x_6045_);
lean_ctor_set(v_reuseFailAlloc_6051_, 1, v___x_6040_);
v___x_6047_ = v_reuseFailAlloc_6051_;
goto v_reusejp_6046_;
}
v_reusejp_6046_:
{
lean_object* v___x_6049_; 
if (v_isShared_6017_ == 0)
{
lean_ctor_set(v___x_6016_, 1, v___x_6047_);
lean_ctor_set(v___x_6016_, 0, v___x_6044_);
v___x_6049_ = v___x_6016_;
goto v_reusejp_6048_;
}
else
{
lean_object* v_reuseFailAlloc_6050_; 
v_reuseFailAlloc_6050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6050_, 0, v___x_6044_);
lean_ctor_set(v_reuseFailAlloc_6050_, 1, v___x_6047_);
v___x_6049_ = v_reuseFailAlloc_6050_;
goto v_reusejp_6048_;
}
v_reusejp_6048_:
{
v_a_6006_ = v___x_6049_;
goto v___jp_6005_;
}
}
}
else
{
lean_object* v_a_6052_; lean_object* v___x_6054_; uint8_t v_isShared_6055_; uint8_t v_isSharedCheck_6059_; 
lean_dec_ref(v___x_6040_);
lean_del_object(v___x_6020_);
lean_dec(v_fst_6018_);
lean_del_object(v___x_6016_);
lean_dec(v_fst_6014_);
v_a_6052_ = lean_ctor_get(v___y_6042_, 0);
v_isSharedCheck_6059_ = !lean_is_exclusive(v___y_6042_);
if (v_isSharedCheck_6059_ == 0)
{
v___x_6054_ = v___y_6042_;
v_isShared_6055_ = v_isSharedCheck_6059_;
goto v_resetjp_6053_;
}
else
{
lean_inc(v_a_6052_);
lean_dec(v___y_6042_);
v___x_6054_ = lean_box(0);
v_isShared_6055_ = v_isSharedCheck_6059_;
goto v_resetjp_6053_;
}
v_resetjp_6053_:
{
lean_object* v___x_6057_; 
if (v_isShared_6055_ == 0)
{
v___x_6057_ = v___x_6054_;
goto v_reusejp_6056_;
}
else
{
lean_object* v_reuseFailAlloc_6058_; 
v_reuseFailAlloc_6058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6058_, 0, v_a_6052_);
v___x_6057_ = v_reuseFailAlloc_6058_;
goto v_reusejp_6056_;
}
v_reusejp_6056_:
{
return v___x_6057_;
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
v___jp_6005_:
{
size_t v___x_6007_; size_t v___x_6008_; 
v___x_6007_ = ((size_t)1ULL);
v___x_6008_ = lean_usize_add(v_i_5998_, v___x_6007_);
v_i_5998_ = v___x_6008_;
v_b_5999_ = v_a_6006_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8___boxed(lean_object* v_as_6076_, lean_object* v_sz_6077_, lean_object* v_i_6078_, lean_object* v_b_6079_, lean_object* v___y_6080_, lean_object* v___y_6081_, lean_object* v___y_6082_, lean_object* v___y_6083_, lean_object* v___y_6084_){
_start:
{
size_t v_sz_boxed_6085_; size_t v_i_boxed_6086_; lean_object* v_res_6087_; 
v_sz_boxed_6085_ = lean_unbox_usize(v_sz_6077_);
lean_dec(v_sz_6077_);
v_i_boxed_6086_ = lean_unbox_usize(v_i_6078_);
lean_dec(v_i_6078_);
v_res_6087_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(v_as_6076_, v_sz_boxed_6085_, v_i_boxed_6086_, v_b_6079_, v___y_6080_, v___y_6081_, v___y_6082_, v___y_6083_);
lean_dec(v___y_6083_);
lean_dec_ref(v___y_6082_);
lean_dec(v___y_6081_);
lean_dec_ref(v___y_6080_);
lean_dec_ref(v_as_6076_);
return v_res_6087_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(lean_object* v___x_6088_, lean_object* v___y_6089_, lean_object* v___y_6090_, lean_object* v___y_6091_, lean_object* v___y_6092_){
_start:
{
lean_object* v___x_6094_; 
v___x_6094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6094_, 0, v___x_6088_);
return v___x_6094_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed(lean_object* v___x_6095_, lean_object* v___y_6096_, lean_object* v___y_6097_, lean_object* v___y_6098_, lean_object* v___y_6099_, lean_object* v___y_6100_){
_start:
{
lean_object* v_res_6101_; 
v_res_6101_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(v___x_6095_, v___y_6096_, v___y_6097_, v___y_6098_, v___y_6099_);
lean_dec(v___y_6099_);
lean_dec_ref(v___y_6098_);
lean_dec(v___y_6097_);
lean_dec_ref(v___y_6096_);
return v_res_6101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(size_t v_sz_6102_, size_t v_i_6103_, lean_object* v_bs_6104_, lean_object* v___y_6105_, lean_object* v___y_6106_, lean_object* v___y_6107_){
_start:
{
uint8_t v___x_6109_; 
v___x_6109_ = lean_usize_dec_lt(v_i_6103_, v_sz_6102_);
if (v___x_6109_ == 0)
{
lean_object* v___x_6110_; 
v___x_6110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6110_, 0, v_bs_6104_);
return v___x_6110_;
}
else
{
lean_object* v_v_6111_; lean_object* v___x_6112_; lean_object* v_bs_x27_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; 
v_v_6111_ = lean_array_uget(v_bs_6104_, v_i_6103_);
v___x_6112_ = lean_unsigned_to_nat(0u);
v_bs_x27_6113_ = lean_array_uset(v_bs_6104_, v_i_6103_, v___x_6112_);
v___x_6114_ = l_Lean_Expr_fvarId_x21(v_v_6111_);
lean_dec(v_v_6111_);
v___x_6115_ = l_Lean_FVarId_getUserName___redArg(v___x_6114_, v___y_6105_, v___y_6106_, v___y_6107_);
if (lean_obj_tag(v___x_6115_) == 0)
{
lean_object* v_a_6116_; size_t v___x_6117_; size_t v___x_6118_; lean_object* v___x_6119_; 
v_a_6116_ = lean_ctor_get(v___x_6115_, 0);
lean_inc(v_a_6116_);
lean_dec_ref_known(v___x_6115_, 1);
v___x_6117_ = ((size_t)1ULL);
v___x_6118_ = lean_usize_add(v_i_6103_, v___x_6117_);
v___x_6119_ = lean_array_uset(v_bs_x27_6113_, v_i_6103_, v_a_6116_);
v_i_6103_ = v___x_6118_;
v_bs_6104_ = v___x_6119_;
goto _start;
}
else
{
lean_object* v_a_6121_; lean_object* v___x_6123_; uint8_t v_isShared_6124_; uint8_t v_isSharedCheck_6128_; 
lean_dec_ref(v_bs_x27_6113_);
v_a_6121_ = lean_ctor_get(v___x_6115_, 0);
v_isSharedCheck_6128_ = !lean_is_exclusive(v___x_6115_);
if (v_isSharedCheck_6128_ == 0)
{
v___x_6123_ = v___x_6115_;
v_isShared_6124_ = v_isSharedCheck_6128_;
goto v_resetjp_6122_;
}
else
{
lean_inc(v_a_6121_);
lean_dec(v___x_6115_);
v___x_6123_ = lean_box(0);
v_isShared_6124_ = v_isSharedCheck_6128_;
goto v_resetjp_6122_;
}
v_resetjp_6122_:
{
lean_object* v___x_6126_; 
if (v_isShared_6124_ == 0)
{
v___x_6126_ = v___x_6123_;
goto v_reusejp_6125_;
}
else
{
lean_object* v_reuseFailAlloc_6127_; 
v_reuseFailAlloc_6127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6127_, 0, v_a_6121_);
v___x_6126_ = v_reuseFailAlloc_6127_;
goto v_reusejp_6125_;
}
v_reusejp_6125_:
{
return v___x_6126_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg___boxed(lean_object* v_sz_6129_, lean_object* v_i_6130_, lean_object* v_bs_6131_, lean_object* v___y_6132_, lean_object* v___y_6133_, lean_object* v___y_6134_, lean_object* v___y_6135_){
_start:
{
size_t v_sz_boxed_6136_; size_t v_i_boxed_6137_; lean_object* v_res_6138_; 
v_sz_boxed_6136_ = lean_unbox_usize(v_sz_6129_);
lean_dec(v_sz_6129_);
v_i_boxed_6137_ = lean_unbox_usize(v_i_6130_);
lean_dec(v_i_6130_);
v_res_6138_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_boxed_6136_, v_i_boxed_6137_, v_bs_6131_, v___y_6132_, v___y_6133_, v___y_6134_);
lean_dec(v___y_6134_);
lean_dec_ref(v___y_6133_);
lean_dec_ref(v___y_6132_);
return v_res_6138_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(lean_object* v_xs_6139_, lean_object* v_x_6140_, lean_object* v___y_6141_, lean_object* v___y_6142_, lean_object* v___y_6143_, lean_object* v___y_6144_){
_start:
{
size_t v_sz_6146_; size_t v___x_6147_; lean_object* v___x_6148_; 
v_sz_6146_ = lean_array_size(v_xs_6139_);
v___x_6147_ = ((size_t)0ULL);
v___x_6148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_6146_, v___x_6147_, v_xs_6139_, v___y_6141_, v___y_6143_, v___y_6144_);
return v___x_6148_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed(lean_object* v_xs_6149_, lean_object* v_x_6150_, lean_object* v___y_6151_, lean_object* v___y_6152_, lean_object* v___y_6153_, lean_object* v___y_6154_, lean_object* v___y_6155_){
_start:
{
lean_object* v_res_6156_; 
v_res_6156_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(v_xs_6149_, v_x_6150_, v___y_6151_, v___y_6152_, v___y_6153_, v___y_6154_);
lean_dec(v___y_6154_);
lean_dec_ref(v___y_6153_);
lean_dec(v___y_6152_);
lean_dec_ref(v___y_6151_);
lean_dec_ref(v_x_6150_);
return v_res_6156_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(lean_object* v___x_6157_, lean_object* v___x_6158_, lean_object* v___f_6159_, uint8_t v___x_6160_, lean_object* v_fst_6161_, lean_object* v___x_6162_, lean_object* v___x_6163_, lean_object* v___x_6164_, lean_object* v___y_6165_, lean_object* v___y_6166_, lean_object* v___y_6167_, lean_object* v___y_6168_){
_start:
{
lean_object* v___x_6170_; 
v___x_6170_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v___x_6157_, v___x_6158_, v___f_6159_, v___x_6160_, v___x_6160_, v___y_6165_, v___y_6166_, v___y_6167_, v___y_6168_);
if (lean_obj_tag(v___x_6170_) == 0)
{
lean_object* v_a_6171_; lean_object* v___x_6173_; uint8_t v_isShared_6174_; uint8_t v_isSharedCheck_6183_; 
v_a_6171_ = lean_ctor_get(v___x_6170_, 0);
v_isSharedCheck_6183_ = !lean_is_exclusive(v___x_6170_);
if (v_isSharedCheck_6183_ == 0)
{
v___x_6173_ = v___x_6170_;
v_isShared_6174_ = v_isSharedCheck_6183_;
goto v_resetjp_6172_;
}
else
{
lean_inc(v_a_6171_);
lean_dec(v___x_6170_);
v___x_6173_ = lean_box(0);
v_isShared_6174_ = v_isSharedCheck_6183_;
goto v_resetjp_6172_;
}
v_resetjp_6172_:
{
lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6181_; 
v___x_6175_ = lean_array_push(v_fst_6161_, v_a_6171_);
v___x_6176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6176_, 0, v___x_6162_);
lean_ctor_set(v___x_6176_, 1, v___x_6163_);
v___x_6177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6177_, 0, v___x_6164_);
lean_ctor_set(v___x_6177_, 1, v___x_6176_);
v___x_6178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6178_, 0, v___x_6175_);
lean_ctor_set(v___x_6178_, 1, v___x_6177_);
v___x_6179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6179_, 0, v___x_6178_);
if (v_isShared_6174_ == 0)
{
lean_ctor_set(v___x_6173_, 0, v___x_6179_);
v___x_6181_ = v___x_6173_;
goto v_reusejp_6180_;
}
else
{
lean_object* v_reuseFailAlloc_6182_; 
v_reuseFailAlloc_6182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6182_, 0, v___x_6179_);
v___x_6181_ = v_reuseFailAlloc_6182_;
goto v_reusejp_6180_;
}
v_reusejp_6180_:
{
return v___x_6181_;
}
}
}
else
{
lean_object* v_a_6184_; lean_object* v___x_6186_; uint8_t v_isShared_6187_; uint8_t v_isSharedCheck_6191_; 
lean_dec_ref(v___x_6164_);
lean_dec_ref(v___x_6163_);
lean_dec_ref(v___x_6162_);
lean_dec(v_fst_6161_);
v_a_6184_ = lean_ctor_get(v___x_6170_, 0);
v_isSharedCheck_6191_ = !lean_is_exclusive(v___x_6170_);
if (v_isSharedCheck_6191_ == 0)
{
v___x_6186_ = v___x_6170_;
v_isShared_6187_ = v_isSharedCheck_6191_;
goto v_resetjp_6185_;
}
else
{
lean_inc(v_a_6184_);
lean_dec(v___x_6170_);
v___x_6186_ = lean_box(0);
v_isShared_6187_ = v_isSharedCheck_6191_;
goto v_resetjp_6185_;
}
v_resetjp_6185_:
{
lean_object* v___x_6189_; 
if (v_isShared_6187_ == 0)
{
v___x_6189_ = v___x_6186_;
goto v_reusejp_6188_;
}
else
{
lean_object* v_reuseFailAlloc_6190_; 
v_reuseFailAlloc_6190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6190_, 0, v_a_6184_);
v___x_6189_ = v_reuseFailAlloc_6190_;
goto v_reusejp_6188_;
}
v_reusejp_6188_:
{
return v___x_6189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed(lean_object* v___x_6192_, lean_object* v___x_6193_, lean_object* v___f_6194_, lean_object* v___x_6195_, lean_object* v_fst_6196_, lean_object* v___x_6197_, lean_object* v___x_6198_, lean_object* v___x_6199_, lean_object* v___y_6200_, lean_object* v___y_6201_, lean_object* v___y_6202_, lean_object* v___y_6203_, lean_object* v___y_6204_){
_start:
{
uint8_t v___x_35593__boxed_6205_; lean_object* v_res_6206_; 
v___x_35593__boxed_6205_ = lean_unbox(v___x_6195_);
v_res_6206_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(v___x_6192_, v___x_6193_, v___f_6194_, v___x_35593__boxed_6205_, v_fst_6196_, v___x_6197_, v___x_6198_, v___x_6199_, v___y_6200_, v___y_6201_, v___y_6202_, v___y_6203_);
lean_dec(v___y_6203_);
lean_dec_ref(v___y_6202_);
lean_dec(v___y_6201_);
lean_dec_ref(v___y_6200_);
return v_res_6206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(lean_object* v_fvars_6207_, lean_object* v_names_6208_, lean_object* v_k_6209_, lean_object* v___y_6210_, lean_object* v___y_6211_, lean_object* v___y_6212_, lean_object* v___y_6213_){
_start:
{
lean_object* v___x_6215_; 
v___x_6215_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_6207_, v_names_6208_, v_k_6209_, v___y_6210_, v___y_6211_, v___y_6212_, v___y_6213_);
if (lean_obj_tag(v___x_6215_) == 0)
{
lean_object* v_a_6216_; lean_object* v___x_6218_; uint8_t v_isShared_6219_; uint8_t v_isSharedCheck_6223_; 
v_a_6216_ = lean_ctor_get(v___x_6215_, 0);
v_isSharedCheck_6223_ = !lean_is_exclusive(v___x_6215_);
if (v_isSharedCheck_6223_ == 0)
{
v___x_6218_ = v___x_6215_;
v_isShared_6219_ = v_isSharedCheck_6223_;
goto v_resetjp_6217_;
}
else
{
lean_inc(v_a_6216_);
lean_dec(v___x_6215_);
v___x_6218_ = lean_box(0);
v_isShared_6219_ = v_isSharedCheck_6223_;
goto v_resetjp_6217_;
}
v_resetjp_6217_:
{
lean_object* v___x_6221_; 
if (v_isShared_6219_ == 0)
{
v___x_6221_ = v___x_6218_;
goto v_reusejp_6220_;
}
else
{
lean_object* v_reuseFailAlloc_6222_; 
v_reuseFailAlloc_6222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6222_, 0, v_a_6216_);
v___x_6221_ = v_reuseFailAlloc_6222_;
goto v_reusejp_6220_;
}
v_reusejp_6220_:
{
return v___x_6221_;
}
}
}
else
{
lean_object* v_a_6224_; lean_object* v___x_6226_; uint8_t v_isShared_6227_; uint8_t v_isSharedCheck_6231_; 
v_a_6224_ = lean_ctor_get(v___x_6215_, 0);
v_isSharedCheck_6231_ = !lean_is_exclusive(v___x_6215_);
if (v_isSharedCheck_6231_ == 0)
{
v___x_6226_ = v___x_6215_;
v_isShared_6227_ = v_isSharedCheck_6231_;
goto v_resetjp_6225_;
}
else
{
lean_inc(v_a_6224_);
lean_dec(v___x_6215_);
v___x_6226_ = lean_box(0);
v_isShared_6227_ = v_isSharedCheck_6231_;
goto v_resetjp_6225_;
}
v_resetjp_6225_:
{
lean_object* v___x_6229_; 
if (v_isShared_6227_ == 0)
{
v___x_6229_ = v___x_6226_;
goto v_reusejp_6228_;
}
else
{
lean_object* v_reuseFailAlloc_6230_; 
v_reuseFailAlloc_6230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6230_, 0, v_a_6224_);
v___x_6229_ = v_reuseFailAlloc_6230_;
goto v_reusejp_6228_;
}
v_reusejp_6228_:
{
return v___x_6229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg___boxed(lean_object* v_fvars_6232_, lean_object* v_names_6233_, lean_object* v_k_6234_, lean_object* v___y_6235_, lean_object* v___y_6236_, lean_object* v___y_6237_, lean_object* v___y_6238_, lean_object* v___y_6239_){
_start:
{
lean_object* v_res_6240_; 
v_res_6240_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_fvars_6232_, v_names_6233_, v_k_6234_, v___y_6235_, v___y_6236_, v___y_6237_, v___y_6238_);
lean_dec(v___y_6238_);
lean_dec_ref(v___y_6237_);
lean_dec(v___y_6236_);
lean_dec_ref(v___y_6235_);
lean_dec_ref(v_names_6233_);
lean_dec_ref(v_fvars_6232_);
return v_res_6240_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(lean_object* v___x_6241_, lean_object* v_xs_6242_, lean_object* v_remaining_x27_6243_, lean_object* v_ys4_6244_, lean_object* v_onAlt_6245_, lean_object* v_a_6246_, lean_object* v_altType_6247_, uint8_t v___x_6248_, uint8_t v___x_6249_, lean_object* v___y_6250_, lean_object* v___y_6251_, lean_object* v___y_6252_, lean_object* v___y_6253_){
_start:
{
lean_object* v___x_6255_; 
v___x_6255_ = l_Lean_Meta_instantiateLambda(v___x_6241_, v_xs_6242_, v___y_6250_, v___y_6251_, v___y_6252_, v___y_6253_);
if (lean_obj_tag(v___x_6255_) == 0)
{
lean_object* v_a_6256_; lean_object* v___x_6257_; lean_object* v___x_6258_; 
v_a_6256_ = lean_ctor_get(v___x_6255_, 0);
lean_inc(v_a_6256_);
lean_dec_ref_known(v___x_6255_, 1);
lean_inc_ref(v_ys4_6244_);
lean_inc_ref(v_remaining_x27_6243_);
lean_inc_ref_n(v_xs_6242_, 2);
v___x_6257_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6257_, 0, v_xs_6242_);
lean_ctor_set(v___x_6257_, 1, v_xs_6242_);
lean_ctor_set(v___x_6257_, 2, v_remaining_x27_6243_);
lean_ctor_set(v___x_6257_, 3, v_remaining_x27_6243_);
lean_ctor_set(v___x_6257_, 4, v_ys4_6244_);
lean_inc(v___y_6253_);
lean_inc_ref(v___y_6252_);
lean_inc(v___y_6251_);
lean_inc_ref(v___y_6250_);
v___x_6258_ = lean_apply_9(v_onAlt_6245_, v_a_6246_, v_altType_6247_, v___x_6257_, v_a_6256_, v___y_6250_, v___y_6251_, v___y_6252_, v___y_6253_, lean_box(0));
if (lean_obj_tag(v___x_6258_) == 0)
{
lean_object* v_a_6259_; lean_object* v___x_6260_; uint8_t v___x_6261_; lean_object* v___x_6262_; 
v_a_6259_ = lean_ctor_get(v___x_6258_, 0);
lean_inc(v_a_6259_);
lean_dec_ref_known(v___x_6258_, 1);
v___x_6260_ = l_Array_append___redArg(v_xs_6242_, v_ys4_6244_);
lean_dec_ref(v_ys4_6244_);
v___x_6261_ = 1;
v___x_6262_ = l_Lean_Meta_mkLambdaFVars(v___x_6260_, v_a_6259_, v___x_6248_, v___x_6249_, v___x_6248_, v___x_6249_, v___x_6261_, v___y_6250_, v___y_6251_, v___y_6252_, v___y_6253_);
lean_dec(v___y_6253_);
lean_dec_ref(v___y_6252_);
lean_dec(v___y_6251_);
lean_dec_ref(v___y_6250_);
lean_dec_ref(v___x_6260_);
return v___x_6262_;
}
else
{
lean_dec(v___y_6253_);
lean_dec_ref(v___y_6252_);
lean_dec(v___y_6251_);
lean_dec_ref(v___y_6250_);
lean_dec_ref(v_ys4_6244_);
lean_dec_ref(v_xs_6242_);
return v___x_6258_;
}
}
else
{
lean_dec(v___y_6253_);
lean_dec_ref(v___y_6252_);
lean_dec(v___y_6251_);
lean_dec_ref(v___y_6250_);
lean_dec_ref(v_altType_6247_);
lean_dec(v_a_6246_);
lean_dec_ref(v_onAlt_6245_);
lean_dec_ref(v_ys4_6244_);
lean_dec_ref(v_remaining_x27_6243_);
lean_dec_ref(v_xs_6242_);
return v___x_6255_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed(lean_object* v___x_6263_, lean_object* v_xs_6264_, lean_object* v_remaining_x27_6265_, lean_object* v_ys4_6266_, lean_object* v_onAlt_6267_, lean_object* v_a_6268_, lean_object* v_altType_6269_, lean_object* v___x_6270_, lean_object* v___x_6271_, lean_object* v___y_6272_, lean_object* v___y_6273_, lean_object* v___y_6274_, lean_object* v___y_6275_, lean_object* v___y_6276_){
_start:
{
uint8_t v___x_35720__boxed_6277_; uint8_t v___x_35721__boxed_6278_; lean_object* v_res_6279_; 
v___x_35720__boxed_6277_ = lean_unbox(v___x_6270_);
v___x_35721__boxed_6278_ = lean_unbox(v___x_6271_);
v_res_6279_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(v___x_6263_, v_xs_6264_, v_remaining_x27_6265_, v_ys4_6266_, v_onAlt_6267_, v_a_6268_, v_altType_6269_, v___x_35720__boxed_6277_, v___x_35721__boxed_6278_, v___y_6272_, v___y_6273_, v___y_6274_, v___y_6275_);
return v_res_6279_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(lean_object* v___x_6280_, lean_object* v_xs_6281_, lean_object* v_remaining_x27_6282_, lean_object* v_onAlt_6283_, lean_object* v_a_6284_, uint8_t v___x_6285_, uint8_t v___x_6286_, lean_object* v___f_6287_, lean_object* v_ys4_6288_, lean_object* v_altType_6289_, lean_object* v___y_6290_, lean_object* v___y_6291_, lean_object* v___y_6292_, lean_object* v___y_6293_){
_start:
{
lean_object* v___x_6295_; lean_object* v___x_6296_; lean_object* v___f_6297_; lean_object* v___x_6298_; 
v___x_6295_ = lean_box(v___x_6285_);
v___x_6296_ = lean_box(v___x_6286_);
lean_inc_ref(v_xs_6281_);
lean_inc_ref(v___x_6280_);
v___f_6297_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed), 14, 9);
lean_closure_set(v___f_6297_, 0, v___x_6280_);
lean_closure_set(v___f_6297_, 1, v_xs_6281_);
lean_closure_set(v___f_6297_, 2, v_remaining_x27_6282_);
lean_closure_set(v___f_6297_, 3, v_ys4_6288_);
lean_closure_set(v___f_6297_, 4, v_onAlt_6283_);
lean_closure_set(v___f_6297_, 5, v_a_6284_);
lean_closure_set(v___f_6297_, 6, v_altType_6289_);
lean_closure_set(v___f_6297_, 7, v___x_6295_);
lean_closure_set(v___f_6297_, 8, v___x_6296_);
v___x_6298_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v___x_6280_, v___f_6287_, v___x_6285_, v___y_6290_, v___y_6291_, v___y_6292_, v___y_6293_);
if (lean_obj_tag(v___x_6298_) == 0)
{
lean_object* v_a_6299_; lean_object* v___x_6300_; 
v_a_6299_ = lean_ctor_get(v___x_6298_, 0);
lean_inc(v_a_6299_);
lean_dec_ref_known(v___x_6298_, 1);
v___x_6300_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_xs_6281_, v_a_6299_, v___f_6297_, v___y_6290_, v___y_6291_, v___y_6292_, v___y_6293_);
lean_dec(v_a_6299_);
lean_dec_ref(v_xs_6281_);
return v___x_6300_;
}
else
{
lean_object* v_a_6301_; lean_object* v___x_6303_; uint8_t v_isShared_6304_; uint8_t v_isSharedCheck_6308_; 
lean_dec_ref(v___f_6297_);
lean_dec_ref(v_xs_6281_);
v_a_6301_ = lean_ctor_get(v___x_6298_, 0);
v_isSharedCheck_6308_ = !lean_is_exclusive(v___x_6298_);
if (v_isSharedCheck_6308_ == 0)
{
v___x_6303_ = v___x_6298_;
v_isShared_6304_ = v_isSharedCheck_6308_;
goto v_resetjp_6302_;
}
else
{
lean_inc(v_a_6301_);
lean_dec(v___x_6298_);
v___x_6303_ = lean_box(0);
v_isShared_6304_ = v_isSharedCheck_6308_;
goto v_resetjp_6302_;
}
v_resetjp_6302_:
{
lean_object* v___x_6306_; 
if (v_isShared_6304_ == 0)
{
v___x_6306_ = v___x_6303_;
goto v_reusejp_6305_;
}
else
{
lean_object* v_reuseFailAlloc_6307_; 
v_reuseFailAlloc_6307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6307_, 0, v_a_6301_);
v___x_6306_ = v_reuseFailAlloc_6307_;
goto v_reusejp_6305_;
}
v_reusejp_6305_:
{
return v___x_6306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed(lean_object* v___x_6309_, lean_object* v_xs_6310_, lean_object* v_remaining_x27_6311_, lean_object* v_onAlt_6312_, lean_object* v_a_6313_, lean_object* v___x_6314_, lean_object* v___x_6315_, lean_object* v___f_6316_, lean_object* v_ys4_6317_, lean_object* v_altType_6318_, lean_object* v___y_6319_, lean_object* v___y_6320_, lean_object* v___y_6321_, lean_object* v___y_6322_, lean_object* v___y_6323_){
_start:
{
uint8_t v___x_35762__boxed_6324_; uint8_t v___x_35763__boxed_6325_; lean_object* v_res_6326_; 
v___x_35762__boxed_6324_ = lean_unbox(v___x_6314_);
v___x_35763__boxed_6325_ = lean_unbox(v___x_6315_);
v_res_6326_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(v___x_6309_, v_xs_6310_, v_remaining_x27_6311_, v_onAlt_6312_, v_a_6313_, v___x_35762__boxed_6324_, v___x_35763__boxed_6325_, v___f_6316_, v_ys4_6317_, v_altType_6318_, v___y_6319_, v___y_6320_, v___y_6321_, v___y_6322_);
lean_dec(v___y_6322_);
lean_dec_ref(v___y_6321_);
lean_dec(v___y_6320_);
lean_dec_ref(v___y_6319_);
return v_res_6326_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(lean_object* v___x_6327_, lean_object* v_remaining_x27_6328_, lean_object* v_onAlt_6329_, lean_object* v_a_6330_, uint8_t v___x_6331_, uint8_t v___x_6332_, lean_object* v___f_6333_, lean_object* v_extraEqualities_6334_, lean_object* v_xs_6335_, lean_object* v_altType_6336_, lean_object* v___y_6337_, lean_object* v___y_6338_, lean_object* v___y_6339_, lean_object* v___y_6340_){
_start:
{
lean_object* v___x_6342_; lean_object* v___x_6343_; lean_object* v___f_6344_; lean_object* v___x_6345_; lean_object* v___x_6346_; 
v___x_6342_ = lean_box(v___x_6331_);
v___x_6343_ = lean_box(v___x_6332_);
v___f_6344_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed), 15, 8);
lean_closure_set(v___f_6344_, 0, v___x_6327_);
lean_closure_set(v___f_6344_, 1, v_xs_6335_);
lean_closure_set(v___f_6344_, 2, v_remaining_x27_6328_);
lean_closure_set(v___f_6344_, 3, v_onAlt_6329_);
lean_closure_set(v___f_6344_, 4, v_a_6330_);
lean_closure_set(v___f_6344_, 5, v___x_6342_);
lean_closure_set(v___f_6344_, 6, v___x_6343_);
lean_closure_set(v___f_6344_, 7, v___f_6333_);
v___x_6345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6345_, 0, v_extraEqualities_6334_);
v___x_6346_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_6336_, v___x_6345_, v___f_6344_, v___x_6331_, v___x_6331_, v___y_6337_, v___y_6338_, v___y_6339_, v___y_6340_);
return v___x_6346_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed(lean_object* v___x_6347_, lean_object* v_remaining_x27_6348_, lean_object* v_onAlt_6349_, lean_object* v_a_6350_, lean_object* v___x_6351_, lean_object* v___x_6352_, lean_object* v___f_6353_, lean_object* v_extraEqualities_6354_, lean_object* v_xs_6355_, lean_object* v_altType_6356_, lean_object* v___y_6357_, lean_object* v___y_6358_, lean_object* v___y_6359_, lean_object* v___y_6360_, lean_object* v___y_6361_){
_start:
{
uint8_t v___x_35817__boxed_6362_; uint8_t v___x_35818__boxed_6363_; lean_object* v_res_6364_; 
v___x_35817__boxed_6362_ = lean_unbox(v___x_6351_);
v___x_35818__boxed_6363_ = lean_unbox(v___x_6352_);
v_res_6364_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(v___x_6347_, v_remaining_x27_6348_, v_onAlt_6349_, v_a_6350_, v___x_35817__boxed_6362_, v___x_35818__boxed_6363_, v___f_6353_, v_extraEqualities_6354_, v_xs_6355_, v_altType_6356_, v___y_6357_, v___y_6358_, v___y_6359_, v___y_6360_);
lean_dec(v___y_6360_);
lean_dec_ref(v___y_6359_);
lean_dec(v___y_6358_);
lean_dec_ref(v___y_6357_);
return v_res_6364_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(lean_object* v_upperBound_6366_, lean_object* v_onAlt_6367_, lean_object* v_extraEqualities_6368_, lean_object* v_a_6369_, lean_object* v_b_6370_, lean_object* v___y_6371_, lean_object* v___y_6372_, lean_object* v___y_6373_, lean_object* v___y_6374_){
_start:
{
lean_object* v___y_6377_; uint8_t v___x_6400_; 
v___x_6400_ = lean_nat_dec_lt(v_a_6369_, v_upperBound_6366_);
if (v___x_6400_ == 0)
{
lean_object* v___x_6401_; 
lean_dec(v_a_6369_);
lean_dec(v_extraEqualities_6368_);
lean_dec_ref(v_onAlt_6367_);
v___x_6401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6401_, 0, v_b_6370_);
return v___x_6401_;
}
else
{
lean_object* v_snd_6402_; lean_object* v_snd_6403_; lean_object* v_snd_6404_; lean_object* v_fst_6405_; lean_object* v___x_6407_; uint8_t v_isShared_6408_; uint8_t v_isSharedCheck_6512_; 
v_snd_6402_ = lean_ctor_get(v_b_6370_, 1);
lean_inc(v_snd_6402_);
v_snd_6403_ = lean_ctor_get(v_snd_6402_, 1);
lean_inc(v_snd_6403_);
v_snd_6404_ = lean_ctor_get(v_snd_6403_, 1);
lean_inc(v_snd_6404_);
v_fst_6405_ = lean_ctor_get(v_b_6370_, 0);
v_isSharedCheck_6512_ = !lean_is_exclusive(v_b_6370_);
if (v_isSharedCheck_6512_ == 0)
{
lean_object* v_unused_6513_; 
v_unused_6513_ = lean_ctor_get(v_b_6370_, 1);
lean_dec(v_unused_6513_);
v___x_6407_ = v_b_6370_;
v_isShared_6408_ = v_isSharedCheck_6512_;
goto v_resetjp_6406_;
}
else
{
lean_inc(v_fst_6405_);
lean_dec(v_b_6370_);
v___x_6407_ = lean_box(0);
v_isShared_6408_ = v_isSharedCheck_6512_;
goto v_resetjp_6406_;
}
v_resetjp_6406_:
{
lean_object* v_fst_6409_; lean_object* v___x_6411_; uint8_t v_isShared_6412_; uint8_t v_isSharedCheck_6510_; 
v_fst_6409_ = lean_ctor_get(v_snd_6402_, 0);
v_isSharedCheck_6510_ = !lean_is_exclusive(v_snd_6402_);
if (v_isSharedCheck_6510_ == 0)
{
lean_object* v_unused_6511_; 
v_unused_6511_ = lean_ctor_get(v_snd_6402_, 1);
lean_dec(v_unused_6511_);
v___x_6411_ = v_snd_6402_;
v_isShared_6412_ = v_isSharedCheck_6510_;
goto v_resetjp_6410_;
}
else
{
lean_inc(v_fst_6409_);
lean_dec(v_snd_6402_);
v___x_6411_ = lean_box(0);
v_isShared_6412_ = v_isSharedCheck_6510_;
goto v_resetjp_6410_;
}
v_resetjp_6410_:
{
lean_object* v_fst_6413_; lean_object* v___x_6415_; uint8_t v_isShared_6416_; uint8_t v_isSharedCheck_6508_; 
v_fst_6413_ = lean_ctor_get(v_snd_6403_, 0);
v_isSharedCheck_6508_ = !lean_is_exclusive(v_snd_6403_);
if (v_isSharedCheck_6508_ == 0)
{
lean_object* v_unused_6509_; 
v_unused_6509_ = lean_ctor_get(v_snd_6403_, 1);
lean_dec(v_unused_6509_);
v___x_6415_ = v_snd_6403_;
v_isShared_6416_ = v_isSharedCheck_6508_;
goto v_resetjp_6414_;
}
else
{
lean_inc(v_fst_6413_);
lean_dec(v_snd_6403_);
v___x_6415_ = lean_box(0);
v_isShared_6416_ = v_isSharedCheck_6508_;
goto v_resetjp_6414_;
}
v_resetjp_6414_:
{
lean_object* v_array_6417_; lean_object* v_start_6418_; lean_object* v_stop_6419_; uint8_t v___x_6420_; 
v_array_6417_ = lean_ctor_get(v_snd_6404_, 0);
v_start_6418_ = lean_ctor_get(v_snd_6404_, 1);
v_stop_6419_ = lean_ctor_get(v_snd_6404_, 2);
v___x_6420_ = lean_nat_dec_lt(v_start_6418_, v_stop_6419_);
if (v___x_6420_ == 0)
{
lean_object* v___x_6422_; 
if (v_isShared_6416_ == 0)
{
v___x_6422_ = v___x_6415_;
goto v_reusejp_6421_;
}
else
{
lean_object* v_reuseFailAlloc_6431_; 
v_reuseFailAlloc_6431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6431_, 0, v_fst_6413_);
lean_ctor_set(v_reuseFailAlloc_6431_, 1, v_snd_6404_);
v___x_6422_ = v_reuseFailAlloc_6431_;
goto v_reusejp_6421_;
}
v_reusejp_6421_:
{
lean_object* v___x_6424_; 
if (v_isShared_6412_ == 0)
{
lean_ctor_set(v___x_6411_, 1, v___x_6422_);
v___x_6424_ = v___x_6411_;
goto v_reusejp_6423_;
}
else
{
lean_object* v_reuseFailAlloc_6430_; 
v_reuseFailAlloc_6430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6430_, 0, v_fst_6409_);
lean_ctor_set(v_reuseFailAlloc_6430_, 1, v___x_6422_);
v___x_6424_ = v_reuseFailAlloc_6430_;
goto v_reusejp_6423_;
}
v_reusejp_6423_:
{
lean_object* v___x_6426_; 
if (v_isShared_6408_ == 0)
{
lean_ctor_set(v___x_6407_, 1, v___x_6424_);
v___x_6426_ = v___x_6407_;
goto v_reusejp_6425_;
}
else
{
lean_object* v_reuseFailAlloc_6429_; 
v_reuseFailAlloc_6429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6429_, 0, v_fst_6405_);
lean_ctor_set(v_reuseFailAlloc_6429_, 1, v___x_6424_);
v___x_6426_ = v_reuseFailAlloc_6429_;
goto v_reusejp_6425_;
}
v_reusejp_6425_:
{
lean_object* v___x_6427_; lean_object* v___f_6428_; 
v___x_6427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6427_, 0, v___x_6426_);
v___f_6428_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6428_, 0, v___x_6427_);
v___y_6377_ = v___f_6428_;
goto v___jp_6376_;
}
}
}
}
else
{
lean_object* v___x_6433_; uint8_t v_isShared_6434_; uint8_t v_isSharedCheck_6504_; 
lean_inc(v_stop_6419_);
lean_inc(v_start_6418_);
lean_inc_ref(v_array_6417_);
v_isSharedCheck_6504_ = !lean_is_exclusive(v_snd_6404_);
if (v_isSharedCheck_6504_ == 0)
{
lean_object* v_unused_6505_; lean_object* v_unused_6506_; lean_object* v_unused_6507_; 
v_unused_6505_ = lean_ctor_get(v_snd_6404_, 2);
lean_dec(v_unused_6505_);
v_unused_6506_ = lean_ctor_get(v_snd_6404_, 1);
lean_dec(v_unused_6506_);
v_unused_6507_ = lean_ctor_get(v_snd_6404_, 0);
lean_dec(v_unused_6507_);
v___x_6433_ = v_snd_6404_;
v_isShared_6434_ = v_isSharedCheck_6504_;
goto v_resetjp_6432_;
}
else
{
lean_dec(v_snd_6404_);
v___x_6433_ = lean_box(0);
v_isShared_6434_ = v_isSharedCheck_6504_;
goto v_resetjp_6432_;
}
v_resetjp_6432_:
{
lean_object* v_array_6435_; lean_object* v_start_6436_; lean_object* v_stop_6437_; lean_object* v___x_6438_; lean_object* v___x_6439_; lean_object* v___x_6440_; lean_object* v___x_6442_; 
v_array_6435_ = lean_ctor_get(v_fst_6413_, 0);
v_start_6436_ = lean_ctor_get(v_fst_6413_, 1);
v_stop_6437_ = lean_ctor_get(v_fst_6413_, 2);
v___x_6438_ = lean_array_fget(v_array_6417_, v_start_6418_);
v___x_6439_ = lean_unsigned_to_nat(1u);
v___x_6440_ = lean_nat_add(v_start_6418_, v___x_6439_);
lean_dec(v_start_6418_);
if (v_isShared_6434_ == 0)
{
lean_ctor_set(v___x_6433_, 1, v___x_6440_);
v___x_6442_ = v___x_6433_;
goto v_reusejp_6441_;
}
else
{
lean_object* v_reuseFailAlloc_6503_; 
v_reuseFailAlloc_6503_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6503_, 0, v_array_6417_);
lean_ctor_set(v_reuseFailAlloc_6503_, 1, v___x_6440_);
lean_ctor_set(v_reuseFailAlloc_6503_, 2, v_stop_6419_);
v___x_6442_ = v_reuseFailAlloc_6503_;
goto v_reusejp_6441_;
}
v_reusejp_6441_:
{
uint8_t v___x_6443_; 
v___x_6443_ = lean_nat_dec_lt(v_start_6436_, v_stop_6437_);
if (v___x_6443_ == 0)
{
lean_object* v___x_6445_; 
lean_dec(v___x_6438_);
if (v_isShared_6416_ == 0)
{
lean_ctor_set(v___x_6415_, 1, v___x_6442_);
v___x_6445_ = v___x_6415_;
goto v_reusejp_6444_;
}
else
{
lean_object* v_reuseFailAlloc_6454_; 
v_reuseFailAlloc_6454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6454_, 0, v_fst_6413_);
lean_ctor_set(v_reuseFailAlloc_6454_, 1, v___x_6442_);
v___x_6445_ = v_reuseFailAlloc_6454_;
goto v_reusejp_6444_;
}
v_reusejp_6444_:
{
lean_object* v___x_6447_; 
if (v_isShared_6412_ == 0)
{
lean_ctor_set(v___x_6411_, 1, v___x_6445_);
v___x_6447_ = v___x_6411_;
goto v_reusejp_6446_;
}
else
{
lean_object* v_reuseFailAlloc_6453_; 
v_reuseFailAlloc_6453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6453_, 0, v_fst_6409_);
lean_ctor_set(v_reuseFailAlloc_6453_, 1, v___x_6445_);
v___x_6447_ = v_reuseFailAlloc_6453_;
goto v_reusejp_6446_;
}
v_reusejp_6446_:
{
lean_object* v___x_6449_; 
if (v_isShared_6408_ == 0)
{
lean_ctor_set(v___x_6407_, 1, v___x_6447_);
v___x_6449_ = v___x_6407_;
goto v_reusejp_6448_;
}
else
{
lean_object* v_reuseFailAlloc_6452_; 
v_reuseFailAlloc_6452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6452_, 0, v_fst_6405_);
lean_ctor_set(v_reuseFailAlloc_6452_, 1, v___x_6447_);
v___x_6449_ = v_reuseFailAlloc_6452_;
goto v_reusejp_6448_;
}
v_reusejp_6448_:
{
lean_object* v___x_6450_; lean_object* v___f_6451_; 
v___x_6450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6450_, 0, v___x_6449_);
v___f_6451_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6451_, 0, v___x_6450_);
v___y_6377_ = v___f_6451_;
goto v___jp_6376_;
}
}
}
}
else
{
lean_object* v___x_6456_; uint8_t v_isShared_6457_; uint8_t v_isSharedCheck_6499_; 
lean_inc(v_stop_6437_);
lean_inc(v_start_6436_);
lean_inc_ref(v_array_6435_);
v_isSharedCheck_6499_ = !lean_is_exclusive(v_fst_6413_);
if (v_isSharedCheck_6499_ == 0)
{
lean_object* v_unused_6500_; lean_object* v_unused_6501_; lean_object* v_unused_6502_; 
v_unused_6500_ = lean_ctor_get(v_fst_6413_, 2);
lean_dec(v_unused_6500_);
v_unused_6501_ = lean_ctor_get(v_fst_6413_, 1);
lean_dec(v_unused_6501_);
v_unused_6502_ = lean_ctor_get(v_fst_6413_, 0);
lean_dec(v_unused_6502_);
v___x_6456_ = v_fst_6413_;
v_isShared_6457_ = v_isSharedCheck_6499_;
goto v_resetjp_6455_;
}
else
{
lean_dec(v_fst_6413_);
v___x_6456_ = lean_box(0);
v_isShared_6457_ = v_isSharedCheck_6499_;
goto v_resetjp_6455_;
}
v_resetjp_6455_:
{
lean_object* v_array_6458_; lean_object* v_start_6459_; lean_object* v_stop_6460_; lean_object* v___x_6461_; lean_object* v___x_6462_; lean_object* v___x_6464_; 
v_array_6458_ = lean_ctor_get(v_fst_6409_, 0);
v_start_6459_ = lean_ctor_get(v_fst_6409_, 1);
v_stop_6460_ = lean_ctor_get(v_fst_6409_, 2);
v___x_6461_ = lean_array_fget(v_array_6435_, v_start_6436_);
v___x_6462_ = lean_nat_add(v_start_6436_, v___x_6439_);
lean_dec(v_start_6436_);
if (v_isShared_6457_ == 0)
{
lean_ctor_set(v___x_6456_, 1, v___x_6462_);
v___x_6464_ = v___x_6456_;
goto v_reusejp_6463_;
}
else
{
lean_object* v_reuseFailAlloc_6498_; 
v_reuseFailAlloc_6498_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6498_, 0, v_array_6435_);
lean_ctor_set(v_reuseFailAlloc_6498_, 1, v___x_6462_);
lean_ctor_set(v_reuseFailAlloc_6498_, 2, v_stop_6437_);
v___x_6464_ = v_reuseFailAlloc_6498_;
goto v_reusejp_6463_;
}
v_reusejp_6463_:
{
uint8_t v___x_6465_; 
v___x_6465_ = lean_nat_dec_lt(v_start_6459_, v_stop_6460_);
if (v___x_6465_ == 0)
{
lean_object* v___x_6467_; 
lean_dec(v___x_6461_);
lean_dec(v___x_6438_);
if (v_isShared_6416_ == 0)
{
lean_ctor_set(v___x_6415_, 1, v___x_6442_);
lean_ctor_set(v___x_6415_, 0, v___x_6464_);
v___x_6467_ = v___x_6415_;
goto v_reusejp_6466_;
}
else
{
lean_object* v_reuseFailAlloc_6476_; 
v_reuseFailAlloc_6476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6476_, 0, v___x_6464_);
lean_ctor_set(v_reuseFailAlloc_6476_, 1, v___x_6442_);
v___x_6467_ = v_reuseFailAlloc_6476_;
goto v_reusejp_6466_;
}
v_reusejp_6466_:
{
lean_object* v___x_6469_; 
if (v_isShared_6412_ == 0)
{
lean_ctor_set(v___x_6411_, 1, v___x_6467_);
v___x_6469_ = v___x_6411_;
goto v_reusejp_6468_;
}
else
{
lean_object* v_reuseFailAlloc_6475_; 
v_reuseFailAlloc_6475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6475_, 0, v_fst_6409_);
lean_ctor_set(v_reuseFailAlloc_6475_, 1, v___x_6467_);
v___x_6469_ = v_reuseFailAlloc_6475_;
goto v_reusejp_6468_;
}
v_reusejp_6468_:
{
lean_object* v___x_6471_; 
if (v_isShared_6408_ == 0)
{
lean_ctor_set(v___x_6407_, 1, v___x_6469_);
v___x_6471_ = v___x_6407_;
goto v_reusejp_6470_;
}
else
{
lean_object* v_reuseFailAlloc_6474_; 
v_reuseFailAlloc_6474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6474_, 0, v_fst_6405_);
lean_ctor_set(v_reuseFailAlloc_6474_, 1, v___x_6469_);
v___x_6471_ = v_reuseFailAlloc_6474_;
goto v_reusejp_6470_;
}
v_reusejp_6470_:
{
lean_object* v___x_6472_; lean_object* v___f_6473_; 
v___x_6472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6472_, 0, v___x_6471_);
v___f_6473_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6473_, 0, v___x_6472_);
v___y_6377_ = v___f_6473_;
goto v___jp_6376_;
}
}
}
}
else
{
lean_object* v___x_6478_; uint8_t v_isShared_6479_; uint8_t v_isSharedCheck_6494_; 
lean_inc(v_stop_6460_);
lean_inc(v_start_6459_);
lean_inc_ref(v_array_6458_);
lean_del_object(v___x_6415_);
lean_del_object(v___x_6411_);
lean_del_object(v___x_6407_);
v_isSharedCheck_6494_ = !lean_is_exclusive(v_fst_6409_);
if (v_isSharedCheck_6494_ == 0)
{
lean_object* v_unused_6495_; lean_object* v_unused_6496_; lean_object* v_unused_6497_; 
v_unused_6495_ = lean_ctor_get(v_fst_6409_, 2);
lean_dec(v_unused_6495_);
v_unused_6496_ = lean_ctor_get(v_fst_6409_, 1);
lean_dec(v_unused_6496_);
v_unused_6497_ = lean_ctor_get(v_fst_6409_, 0);
lean_dec(v_unused_6497_);
v___x_6478_ = v_fst_6409_;
v_isShared_6479_ = v_isSharedCheck_6494_;
goto v_resetjp_6477_;
}
else
{
lean_dec(v_fst_6409_);
v___x_6478_ = lean_box(0);
v_isShared_6479_ = v_isSharedCheck_6494_;
goto v_resetjp_6477_;
}
v_resetjp_6477_:
{
lean_object* v___f_6480_; uint8_t v___x_6481_; lean_object* v_remaining_x27_6482_; lean_object* v___x_6483_; lean_object* v___x_6484_; lean_object* v___x_6485_; lean_object* v___f_6486_; lean_object* v___x_6487_; lean_object* v___x_6489_; 
v___f_6480_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0));
v___x_6481_ = 0;
v_remaining_x27_6482_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_6483_ = lean_array_fget_borrowed(v_array_6458_, v_start_6459_);
v___x_6484_ = lean_box(v___x_6481_);
v___x_6485_ = lean_box(v___x_6465_);
lean_inc(v_extraEqualities_6368_);
lean_inc(v_a_6369_);
lean_inc_ref(v_onAlt_6367_);
lean_inc(v___x_6483_);
v___f_6486_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed), 15, 8);
lean_closure_set(v___f_6486_, 0, v___x_6483_);
lean_closure_set(v___f_6486_, 1, v_remaining_x27_6482_);
lean_closure_set(v___f_6486_, 2, v_onAlt_6367_);
lean_closure_set(v___f_6486_, 3, v_a_6369_);
lean_closure_set(v___f_6486_, 4, v___x_6484_);
lean_closure_set(v___f_6486_, 5, v___x_6485_);
lean_closure_set(v___f_6486_, 6, v___f_6480_);
lean_closure_set(v___f_6486_, 7, v_extraEqualities_6368_);
v___x_6487_ = lean_nat_add(v_start_6459_, v___x_6439_);
lean_dec(v_start_6459_);
if (v_isShared_6479_ == 0)
{
lean_ctor_set(v___x_6478_, 1, v___x_6487_);
v___x_6489_ = v___x_6478_;
goto v_reusejp_6488_;
}
else
{
lean_object* v_reuseFailAlloc_6493_; 
v_reuseFailAlloc_6493_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6493_, 0, v_array_6458_);
lean_ctor_set(v_reuseFailAlloc_6493_, 1, v___x_6487_);
lean_ctor_set(v_reuseFailAlloc_6493_, 2, v_stop_6460_);
v___x_6489_ = v_reuseFailAlloc_6493_;
goto v_reusejp_6488_;
}
v_reusejp_6488_:
{
lean_object* v___x_6490_; lean_object* v___x_6491_; lean_object* v___f_6492_; 
v___x_6490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6490_, 0, v___x_6461_);
v___x_6491_ = lean_box(v___x_6481_);
v___f_6492_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed), 13, 8);
lean_closure_set(v___f_6492_, 0, v___x_6438_);
lean_closure_set(v___f_6492_, 1, v___x_6490_);
lean_closure_set(v___f_6492_, 2, v___f_6486_);
lean_closure_set(v___f_6492_, 3, v___x_6491_);
lean_closure_set(v___f_6492_, 4, v_fst_6405_);
lean_closure_set(v___f_6492_, 5, v___x_6464_);
lean_closure_set(v___f_6492_, 6, v___x_6442_);
lean_closure_set(v___f_6492_, 7, v___x_6489_);
v___y_6377_ = v___f_6492_;
goto v___jp_6376_;
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
v___jp_6376_:
{
lean_object* v___x_6378_; 
lean_inc(v___y_6374_);
lean_inc_ref(v___y_6373_);
lean_inc(v___y_6372_);
lean_inc_ref(v___y_6371_);
v___x_6378_ = lean_apply_5(v___y_6377_, v___y_6371_, v___y_6372_, v___y_6373_, v___y_6374_, lean_box(0));
if (lean_obj_tag(v___x_6378_) == 0)
{
lean_object* v_a_6379_; lean_object* v___x_6381_; uint8_t v_isShared_6382_; uint8_t v_isSharedCheck_6391_; 
v_a_6379_ = lean_ctor_get(v___x_6378_, 0);
v_isSharedCheck_6391_ = !lean_is_exclusive(v___x_6378_);
if (v_isSharedCheck_6391_ == 0)
{
v___x_6381_ = v___x_6378_;
v_isShared_6382_ = v_isSharedCheck_6391_;
goto v_resetjp_6380_;
}
else
{
lean_inc(v_a_6379_);
lean_dec(v___x_6378_);
v___x_6381_ = lean_box(0);
v_isShared_6382_ = v_isSharedCheck_6391_;
goto v_resetjp_6380_;
}
v_resetjp_6380_:
{
if (lean_obj_tag(v_a_6379_) == 0)
{
lean_object* v_a_6383_; lean_object* v___x_6385_; 
lean_dec(v_a_6369_);
lean_dec(v_extraEqualities_6368_);
lean_dec_ref(v_onAlt_6367_);
v_a_6383_ = lean_ctor_get(v_a_6379_, 0);
lean_inc(v_a_6383_);
lean_dec_ref_known(v_a_6379_, 1);
if (v_isShared_6382_ == 0)
{
lean_ctor_set(v___x_6381_, 0, v_a_6383_);
v___x_6385_ = v___x_6381_;
goto v_reusejp_6384_;
}
else
{
lean_object* v_reuseFailAlloc_6386_; 
v_reuseFailAlloc_6386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6386_, 0, v_a_6383_);
v___x_6385_ = v_reuseFailAlloc_6386_;
goto v_reusejp_6384_;
}
v_reusejp_6384_:
{
return v___x_6385_;
}
}
else
{
lean_object* v_a_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; 
lean_del_object(v___x_6381_);
v_a_6387_ = lean_ctor_get(v_a_6379_, 0);
lean_inc(v_a_6387_);
lean_dec_ref_known(v_a_6379_, 1);
v___x_6388_ = lean_unsigned_to_nat(1u);
v___x_6389_ = lean_nat_add(v_a_6369_, v___x_6388_);
lean_dec(v_a_6369_);
v_a_6369_ = v___x_6389_;
v_b_6370_ = v_a_6387_;
goto _start;
}
}
}
else
{
lean_object* v_a_6392_; lean_object* v___x_6394_; uint8_t v_isShared_6395_; uint8_t v_isSharedCheck_6399_; 
lean_dec(v_a_6369_);
lean_dec(v_extraEqualities_6368_);
lean_dec_ref(v_onAlt_6367_);
v_a_6392_ = lean_ctor_get(v___x_6378_, 0);
v_isSharedCheck_6399_ = !lean_is_exclusive(v___x_6378_);
if (v_isSharedCheck_6399_ == 0)
{
v___x_6394_ = v___x_6378_;
v_isShared_6395_ = v_isSharedCheck_6399_;
goto v_resetjp_6393_;
}
else
{
lean_inc(v_a_6392_);
lean_dec(v___x_6378_);
v___x_6394_ = lean_box(0);
v_isShared_6395_ = v_isSharedCheck_6399_;
goto v_resetjp_6393_;
}
v_resetjp_6393_:
{
lean_object* v___x_6397_; 
if (v_isShared_6395_ == 0)
{
v___x_6397_ = v___x_6394_;
goto v_reusejp_6396_;
}
else
{
lean_object* v_reuseFailAlloc_6398_; 
v_reuseFailAlloc_6398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6398_, 0, v_a_6392_);
v___x_6397_ = v_reuseFailAlloc_6398_;
goto v_reusejp_6396_;
}
v_reusejp_6396_:
{
return v___x_6397_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___boxed(lean_object* v_upperBound_6514_, lean_object* v_onAlt_6515_, lean_object* v_extraEqualities_6516_, lean_object* v_a_6517_, lean_object* v_b_6518_, lean_object* v___y_6519_, lean_object* v___y_6520_, lean_object* v___y_6521_, lean_object* v___y_6522_, lean_object* v___y_6523_){
_start:
{
lean_object* v_res_6524_; 
v_res_6524_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v_upperBound_6514_, v_onAlt_6515_, v_extraEqualities_6516_, v_a_6517_, v_b_6518_, v___y_6519_, v___y_6520_, v___y_6521_, v___y_6522_);
lean_dec(v___y_6522_);
lean_dec_ref(v___y_6521_);
lean_dec(v___y_6520_);
lean_dec_ref(v___y_6519_);
lean_dec(v_upperBound_6514_);
return v_res_6524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(lean_object* v_onParams_6525_, size_t v_sz_6526_, size_t v_i_6527_, lean_object* v_bs_6528_, lean_object* v___y_6529_, lean_object* v___y_6530_, lean_object* v___y_6531_, lean_object* v___y_6532_){
_start:
{
uint8_t v___x_6534_; 
v___x_6534_ = lean_usize_dec_lt(v_i_6527_, v_sz_6526_);
if (v___x_6534_ == 0)
{
lean_object* v___x_6535_; 
lean_dec_ref(v_onParams_6525_);
v___x_6535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6535_, 0, v_bs_6528_);
return v___x_6535_;
}
else
{
lean_object* v_v_6536_; lean_object* v___x_6537_; lean_object* v_bs_x27_6538_; lean_object* v___x_6539_; 
v_v_6536_ = lean_array_uget(v_bs_6528_, v_i_6527_);
v___x_6537_ = lean_unsigned_to_nat(0u);
v_bs_x27_6538_ = lean_array_uset(v_bs_6528_, v_i_6527_, v___x_6537_);
lean_inc_ref(v_onParams_6525_);
lean_inc(v___y_6532_);
lean_inc_ref(v___y_6531_);
lean_inc(v___y_6530_);
lean_inc_ref(v___y_6529_);
v___x_6539_ = lean_apply_6(v_onParams_6525_, v_v_6536_, v___y_6529_, v___y_6530_, v___y_6531_, v___y_6532_, lean_box(0));
if (lean_obj_tag(v___x_6539_) == 0)
{
lean_object* v_a_6540_; size_t v___x_6541_; size_t v___x_6542_; lean_object* v___x_6543_; 
v_a_6540_ = lean_ctor_get(v___x_6539_, 0);
lean_inc(v_a_6540_);
lean_dec_ref_known(v___x_6539_, 1);
v___x_6541_ = ((size_t)1ULL);
v___x_6542_ = lean_usize_add(v_i_6527_, v___x_6541_);
v___x_6543_ = lean_array_uset(v_bs_x27_6538_, v_i_6527_, v_a_6540_);
v_i_6527_ = v___x_6542_;
v_bs_6528_ = v___x_6543_;
goto _start;
}
else
{
lean_object* v_a_6545_; lean_object* v___x_6547_; uint8_t v_isShared_6548_; uint8_t v_isSharedCheck_6552_; 
lean_dec_ref(v_bs_x27_6538_);
lean_dec_ref(v_onParams_6525_);
v_a_6545_ = lean_ctor_get(v___x_6539_, 0);
v_isSharedCheck_6552_ = !lean_is_exclusive(v___x_6539_);
if (v_isSharedCheck_6552_ == 0)
{
v___x_6547_ = v___x_6539_;
v_isShared_6548_ = v_isSharedCheck_6552_;
goto v_resetjp_6546_;
}
else
{
lean_inc(v_a_6545_);
lean_dec(v___x_6539_);
v___x_6547_ = lean_box(0);
v_isShared_6548_ = v_isSharedCheck_6552_;
goto v_resetjp_6546_;
}
v_resetjp_6546_:
{
lean_object* v___x_6550_; 
if (v_isShared_6548_ == 0)
{
v___x_6550_ = v___x_6547_;
goto v_reusejp_6549_;
}
else
{
lean_object* v_reuseFailAlloc_6551_; 
v_reuseFailAlloc_6551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6551_, 0, v_a_6545_);
v___x_6550_ = v_reuseFailAlloc_6551_;
goto v_reusejp_6549_;
}
v_reusejp_6549_:
{
return v___x_6550_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed(lean_object* v_onParams_6553_, lean_object* v_sz_6554_, lean_object* v_i_6555_, lean_object* v_bs_6556_, lean_object* v___y_6557_, lean_object* v___y_6558_, lean_object* v___y_6559_, lean_object* v___y_6560_, lean_object* v___y_6561_){
_start:
{
size_t v_sz_boxed_6562_; size_t v_i_boxed_6563_; lean_object* v_res_6564_; 
v_sz_boxed_6562_ = lean_unbox_usize(v_sz_6554_);
lean_dec(v_sz_6554_);
v_i_boxed_6563_ = lean_unbox_usize(v_i_6555_);
lean_dec(v_i_6555_);
v_res_6564_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6553_, v_sz_boxed_6562_, v_i_boxed_6563_, v_bs_6556_, v___y_6557_, v___y_6558_, v___y_6559_, v___y_6560_);
lean_dec(v___y_6560_);
lean_dec_ref(v___y_6559_);
lean_dec(v___y_6558_);
lean_dec_ref(v___y_6557_);
return v_res_6564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(lean_object* v_declName_6565_, lean_object* v___y_6566_){
_start:
{
lean_object* v___x_6568_; lean_object* v_env_6569_; lean_object* v___x_6570_; lean_object* v___x_6571_; 
v___x_6568_ = lean_st_ref_get(v___y_6566_);
v_env_6569_ = lean_ctor_get(v___x_6568_, 0);
lean_inc_ref(v_env_6569_);
lean_dec(v___x_6568_);
v___x_6570_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_6569_, v_declName_6565_);
v___x_6571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6571_, 0, v___x_6570_);
return v___x_6571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg___boxed(lean_object* v_declName_6572_, lean_object* v___y_6573_, lean_object* v___y_6574_){
_start:
{
lean_object* v_res_6575_; 
v_res_6575_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_declName_6572_, v___y_6573_);
lean_dec(v___y_6573_);
return v_res_6575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(lean_object* v_matcherApp_6578_, uint8_t v_useSplitter_6579_, uint8_t v_addEqualities_6580_, lean_object* v_onParams_6581_, lean_object* v_onMotive_6582_, lean_object* v_onAlt_6583_, lean_object* v_onRemaining_6584_, lean_object* v___y_6585_, lean_object* v___y_6586_, lean_object* v___y_6587_, lean_object* v___y_6588_){
_start:
{
lean_object* v___x_6590_; lean_object* v_env_6591_; lean_object* v_toMatcherInfo_6592_; lean_object* v_matcherName_6593_; lean_object* v_matcherLevels_6594_; lean_object* v_params_6595_; lean_object* v_motive_6596_; lean_object* v_discrs_6597_; lean_object* v_alts_6598_; lean_object* v_remaining_6599_; lean_object* v___y_6601_; lean_object* v___y_6602_; lean_object* v___y_6603_; lean_object* v___y_6604_; lean_object* v___y_6605_; lean_object* v___y_6606_; lean_object* v___y_6607_; lean_object* v___y_6608_; lean_object* v___y_6609_; lean_object* v___y_6610_; lean_object* v___y_6611_; lean_object* v___y_6612_; lean_object* v___y_6613_; uint8_t v_isCasesOn_6698_; lean_object* v___y_6700_; lean_object* v___y_6701_; size_t v___y_6702_; lean_object* v___y_6703_; lean_object* v___y_6704_; lean_object* v___y_6705_; lean_object* v___y_6706_; lean_object* v_matcherLevels_6707_; lean_object* v___y_6708_; lean_object* v___y_6709_; lean_object* v___y_6710_; lean_object* v___y_6711_; lean_object* v_numDiscrEqs_6905_; lean_object* v___y_6906_; lean_object* v___y_6907_; lean_object* v___y_6908_; lean_object* v___y_6909_; 
v___x_6590_ = lean_st_ref_get(v___y_6588_);
v_env_6591_ = lean_ctor_get(v___x_6590_, 0);
lean_inc_ref(v_env_6591_);
lean_dec(v___x_6590_);
v_toMatcherInfo_6592_ = lean_ctor_get(v_matcherApp_6578_, 0);
lean_inc_ref(v_toMatcherInfo_6592_);
v_matcherName_6593_ = lean_ctor_get(v_matcherApp_6578_, 1);
lean_inc_n(v_matcherName_6593_, 2);
v_matcherLevels_6594_ = lean_ctor_get(v_matcherApp_6578_, 2);
v_params_6595_ = lean_ctor_get(v_matcherApp_6578_, 3);
v_motive_6596_ = lean_ctor_get(v_matcherApp_6578_, 4);
v_discrs_6597_ = lean_ctor_get(v_matcherApp_6578_, 5);
v_alts_6598_ = lean_ctor_get(v_matcherApp_6578_, 6);
lean_inc_ref(v_alts_6598_);
v_remaining_6599_ = lean_ctor_get(v_matcherApp_6578_, 7);
lean_inc_ref(v_remaining_6599_);
v_isCasesOn_6698_ = l_Lean_isCasesOnRecursor(v_env_6591_, v_matcherName_6593_);
if (v_isCasesOn_6698_ == 0)
{
lean_object* v___x_6959_; lean_object* v_a_6960_; 
lean_inc(v_matcherName_6593_);
v___x_6959_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_matcherName_6593_, v___y_6588_);
v_a_6960_ = lean_ctor_get(v___x_6959_, 0);
lean_inc(v_a_6960_);
lean_dec_ref(v___x_6959_);
if (lean_obj_tag(v_a_6960_) == 0)
{
lean_object* v___x_6961_; lean_object* v___x_6962_; lean_object* v___x_6963_; lean_object* v___x_6964_; lean_object* v___x_6965_; lean_object* v___x_6966_; lean_object* v_a_6967_; lean_object* v___x_6969_; uint8_t v_isShared_6970_; uint8_t v_isSharedCheck_6974_; 
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
lean_dec_ref(v_onMotive_6582_);
lean_dec_ref(v_onParams_6581_);
lean_dec_ref(v_matcherApp_6578_);
v___x_6961_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1);
v___x_6962_ = l_Lean_MessageData_ofName(v_matcherName_6593_);
v___x_6963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6963_, 0, v___x_6961_);
lean_ctor_set(v___x_6963_, 1, v___x_6962_);
v___x_6964_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3);
v___x_6965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6965_, 0, v___x_6963_);
lean_ctor_set(v___x_6965_, 1, v___x_6964_);
v___x_6966_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_6965_, v___y_6585_, v___y_6586_, v___y_6587_, v___y_6588_);
v_a_6967_ = lean_ctor_get(v___x_6966_, 0);
v_isSharedCheck_6974_ = !lean_is_exclusive(v___x_6966_);
if (v_isSharedCheck_6974_ == 0)
{
v___x_6969_ = v___x_6966_;
v_isShared_6970_ = v_isSharedCheck_6974_;
goto v_resetjp_6968_;
}
else
{
lean_inc(v_a_6967_);
lean_dec(v___x_6966_);
v___x_6969_ = lean_box(0);
v_isShared_6970_ = v_isSharedCheck_6974_;
goto v_resetjp_6968_;
}
v_resetjp_6968_:
{
lean_object* v___x_6972_; 
if (v_isShared_6970_ == 0)
{
v___x_6972_ = v___x_6969_;
goto v_reusejp_6971_;
}
else
{
lean_object* v_reuseFailAlloc_6973_; 
v_reuseFailAlloc_6973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6973_, 0, v_a_6967_);
v___x_6972_ = v_reuseFailAlloc_6973_;
goto v_reusejp_6971_;
}
v_reusejp_6971_:
{
return v___x_6972_;
}
}
}
else
{
lean_object* v_val_6975_; lean_object* v___x_6976_; 
v_val_6975_ = lean_ctor_get(v_a_6960_, 0);
lean_inc(v_val_6975_);
lean_dec_ref_known(v_a_6960_, 1);
v___x_6976_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_6975_);
lean_dec(v_val_6975_);
v_numDiscrEqs_6905_ = v___x_6976_;
v___y_6906_ = v___y_6585_;
v___y_6907_ = v___y_6586_;
v___y_6908_ = v___y_6587_;
v___y_6909_ = v___y_6588_;
goto v___jp_6904_;
}
}
else
{
lean_object* v___x_6977_; 
v___x_6977_ = lean_unsigned_to_nat(0u);
v_numDiscrEqs_6905_ = v___x_6977_;
v___y_6906_ = v___y_6585_;
v___y_6907_ = v___y_6586_;
v___y_6908_ = v___y_6587_;
v___y_6909_ = v___y_6588_;
goto v___jp_6904_;
}
v___jp_6600_:
{
lean_object* v___x_6614_; lean_object* v___x_6615_; lean_object* v_aux_6616_; lean_object* v_aux_6617_; lean_object* v_aux_6618_; lean_object* v___x_6619_; lean_object* v___x_6620_; lean_object* v___x_6621_; lean_object* v___f_6622_; uint8_t v___x_6623_; lean_object* v___x_6624_; lean_object* v___x_6625_; lean_object* v___x_6626_; 
lean_inc_ref(v___y_6607_);
v___x_6614_ = lean_array_to_list(v___y_6607_);
lean_inc(v_matcherName_6593_);
v___x_6615_ = l_Lean_mkConst(v_matcherName_6593_, v___x_6614_);
v_aux_6616_ = l_Lean_mkAppN(v___x_6615_, v___y_6608_);
lean_inc_ref(v___y_6609_);
v_aux_6617_ = l_Lean_Expr_app___override(v_aux_6616_, v___y_6609_);
v_aux_6618_ = l_Lean_mkAppN(v_aux_6617_, v___y_6601_);
v___x_6619_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1);
lean_inc_ref_n(v_aux_6618_, 2);
v___x_6620_ = l_Lean_indentExpr(v_aux_6618_);
v___x_6621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6621_, 0, v___x_6619_);
lean_ctor_set(v___x_6621_, 1, v___x_6620_);
v___f_6622_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6622_, 0, v___x_6621_);
v___x_6623_ = 0;
v___x_6624_ = lean_box(v___x_6623_);
v___x_6625_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6625_, 0, v_aux_6618_);
lean_closure_set(v___x_6625_, 1, v___x_6624_);
v___x_6626_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6625_, v___f_6622_, v___y_6606_, v___y_6604_, v___y_6610_, v___y_6602_);
if (lean_obj_tag(v___x_6626_) == 0)
{
lean_object* v___x_6627_; lean_object* v___x_6628_; 
lean_dec_ref_known(v___x_6626_, 1);
v___x_6627_ = lean_array_get_size(v_alts_6598_);
v___x_6628_ = l_Lean_Meta_inferArgumentTypesN(v___x_6627_, v_aux_6618_, v___y_6606_, v___y_6604_, v___y_6610_, v___y_6602_);
if (lean_obj_tag(v___x_6628_) == 0)
{
lean_object* v_a_6629_; lean_object* v___x_6630_; lean_object* v___x_6631_; lean_object* v___x_6632_; lean_object* v___x_6633_; lean_object* v___x_6634_; lean_object* v___x_6635_; lean_object* v___x_6636_; lean_object* v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6639_; 
v_a_6629_ = lean_ctor_get(v___x_6628_, 0);
lean_inc(v_a_6629_);
lean_dec_ref_known(v___x_6628_, 1);
v___x_6630_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_6578_);
v___x_6631_ = lean_array_get_size(v___x_6630_);
v___x_6632_ = lean_array_get_size(v_a_6629_);
lean_inc_n(v___y_6605_, 3);
v___x_6633_ = l_Array_toSubarray___redArg(v_alts_6598_, v___y_6605_, v___x_6627_);
v___x_6634_ = l_Array_toSubarray___redArg(v___x_6630_, v___y_6605_, v___x_6631_);
v___x_6635_ = l_Array_toSubarray___redArg(v_a_6629_, v___y_6605_, v___x_6632_);
v___x_6636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6636_, 0, v___x_6634_);
lean_ctor_set(v___x_6636_, 1, v___x_6635_);
v___x_6637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6637_, 0, v___x_6633_);
lean_ctor_set(v___x_6637_, 1, v___x_6636_);
lean_inc_ref(v___y_6612_);
v___x_6638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6638_, 0, v___y_6612_);
lean_ctor_set(v___x_6638_, 1, v___x_6637_);
v___x_6639_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v___x_6627_, v_onAlt_6583_, v___y_6603_, v___y_6605_, v___x_6638_, v___y_6606_, v___y_6604_, v___y_6610_, v___y_6602_);
if (lean_obj_tag(v___x_6639_) == 0)
{
lean_object* v_a_6640_; lean_object* v_fst_6641_; lean_object* v___x_6642_; 
v_a_6640_ = lean_ctor_get(v___x_6639_, 0);
lean_inc(v_a_6640_);
lean_dec_ref_known(v___x_6639_, 1);
v_fst_6641_ = lean_ctor_get(v_a_6640_, 0);
lean_inc(v_fst_6641_);
lean_dec(v_a_6640_);
lean_inc(v___y_6602_);
lean_inc_ref(v___y_6610_);
lean_inc(v___y_6604_);
lean_inc_ref(v___y_6606_);
v___x_6642_ = lean_apply_6(v_onRemaining_6584_, v_remaining_6599_, v___y_6606_, v___y_6604_, v___y_6610_, v___y_6602_, lean_box(0));
if (lean_obj_tag(v___x_6642_) == 0)
{
lean_object* v_a_6643_; lean_object* v___x_6645_; uint8_t v_isShared_6646_; uint8_t v_isSharedCheck_6665_; 
v_a_6643_ = lean_ctor_get(v___x_6642_, 0);
v_isSharedCheck_6665_ = !lean_is_exclusive(v___x_6642_);
if (v_isSharedCheck_6665_ == 0)
{
v___x_6645_ = v___x_6642_;
v_isShared_6646_ = v_isSharedCheck_6665_;
goto v_resetjp_6644_;
}
else
{
lean_inc(v_a_6643_);
lean_dec(v___x_6642_);
v___x_6645_ = lean_box(0);
v_isShared_6646_ = v_isSharedCheck_6665_;
goto v_resetjp_6644_;
}
v_resetjp_6644_:
{
lean_object* v_numParams_6647_; lean_object* v_numDiscrs_6648_; lean_object* v_altInfos_6649_; lean_object* v_uElimPos_x3f_6650_; lean_object* v_overlaps_6651_; lean_object* v___x_6653_; uint8_t v_isShared_6654_; uint8_t v_isSharedCheck_6663_; 
v_numParams_6647_ = lean_ctor_get(v_toMatcherInfo_6592_, 0);
v_numDiscrs_6648_ = lean_ctor_get(v_toMatcherInfo_6592_, 1);
v_altInfos_6649_ = lean_ctor_get(v_toMatcherInfo_6592_, 2);
v_uElimPos_x3f_6650_ = lean_ctor_get(v_toMatcherInfo_6592_, 3);
v_overlaps_6651_ = lean_ctor_get(v_toMatcherInfo_6592_, 5);
v_isSharedCheck_6663_ = !lean_is_exclusive(v_toMatcherInfo_6592_);
if (v_isSharedCheck_6663_ == 0)
{
lean_object* v_unused_6664_; 
v_unused_6664_ = lean_ctor_get(v_toMatcherInfo_6592_, 4);
lean_dec(v_unused_6664_);
v___x_6653_ = v_toMatcherInfo_6592_;
v_isShared_6654_ = v_isSharedCheck_6663_;
goto v_resetjp_6652_;
}
else
{
lean_inc(v_overlaps_6651_);
lean_inc(v_uElimPos_x3f_6650_);
lean_inc(v_altInfos_6649_);
lean_inc(v_numDiscrs_6648_);
lean_inc(v_numParams_6647_);
lean_dec(v_toMatcherInfo_6592_);
v___x_6653_ = lean_box(0);
v_isShared_6654_ = v_isSharedCheck_6663_;
goto v_resetjp_6652_;
}
v_resetjp_6652_:
{
lean_object* v_remaining_x27_6655_; lean_object* v___x_6657_; 
v_remaining_x27_6655_ = l_Array_append___redArg(v___y_6613_, v_a_6643_);
lean_dec(v_a_6643_);
if (v_isShared_6654_ == 0)
{
lean_ctor_set(v___x_6653_, 4, v___y_6611_);
v___x_6657_ = v___x_6653_;
goto v_reusejp_6656_;
}
else
{
lean_object* v_reuseFailAlloc_6662_; 
v_reuseFailAlloc_6662_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_6662_, 0, v_numParams_6647_);
lean_ctor_set(v_reuseFailAlloc_6662_, 1, v_numDiscrs_6648_);
lean_ctor_set(v_reuseFailAlloc_6662_, 2, v_altInfos_6649_);
lean_ctor_set(v_reuseFailAlloc_6662_, 3, v_uElimPos_x3f_6650_);
lean_ctor_set(v_reuseFailAlloc_6662_, 4, v___y_6611_);
lean_ctor_set(v_reuseFailAlloc_6662_, 5, v_overlaps_6651_);
v___x_6657_ = v_reuseFailAlloc_6662_;
goto v_reusejp_6656_;
}
v_reusejp_6656_:
{
lean_object* v___x_6658_; lean_object* v___x_6660_; 
v___x_6658_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6658_, 0, v___x_6657_);
lean_ctor_set(v___x_6658_, 1, v_matcherName_6593_);
lean_ctor_set(v___x_6658_, 2, v___y_6607_);
lean_ctor_set(v___x_6658_, 3, v___y_6608_);
lean_ctor_set(v___x_6658_, 4, v___y_6609_);
lean_ctor_set(v___x_6658_, 5, v___y_6601_);
lean_ctor_set(v___x_6658_, 6, v_fst_6641_);
lean_ctor_set(v___x_6658_, 7, v_remaining_x27_6655_);
if (v_isShared_6646_ == 0)
{
lean_ctor_set(v___x_6645_, 0, v___x_6658_);
v___x_6660_ = v___x_6645_;
goto v_reusejp_6659_;
}
else
{
lean_object* v_reuseFailAlloc_6661_; 
v_reuseFailAlloc_6661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6661_, 0, v___x_6658_);
v___x_6660_ = v_reuseFailAlloc_6661_;
goto v_reusejp_6659_;
}
v_reusejp_6659_:
{
return v___x_6660_;
}
}
}
}
}
else
{
lean_object* v_a_6666_; lean_object* v___x_6668_; uint8_t v_isShared_6669_; uint8_t v_isSharedCheck_6673_; 
lean_dec(v_fst_6641_);
lean_dec(v___y_6613_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6609_);
lean_dec_ref(v___y_6608_);
lean_dec_ref(v___y_6607_);
lean_dec_ref(v___y_6601_);
lean_dec(v_matcherName_6593_);
lean_dec_ref(v_toMatcherInfo_6592_);
v_a_6666_ = lean_ctor_get(v___x_6642_, 0);
v_isSharedCheck_6673_ = !lean_is_exclusive(v___x_6642_);
if (v_isSharedCheck_6673_ == 0)
{
v___x_6668_ = v___x_6642_;
v_isShared_6669_ = v_isSharedCheck_6673_;
goto v_resetjp_6667_;
}
else
{
lean_inc(v_a_6666_);
lean_dec(v___x_6642_);
v___x_6668_ = lean_box(0);
v_isShared_6669_ = v_isSharedCheck_6673_;
goto v_resetjp_6667_;
}
v_resetjp_6667_:
{
lean_object* v___x_6671_; 
if (v_isShared_6669_ == 0)
{
v___x_6671_ = v___x_6668_;
goto v_reusejp_6670_;
}
else
{
lean_object* v_reuseFailAlloc_6672_; 
v_reuseFailAlloc_6672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6672_, 0, v_a_6666_);
v___x_6671_ = v_reuseFailAlloc_6672_;
goto v_reusejp_6670_;
}
v_reusejp_6670_:
{
return v___x_6671_;
}
}
}
}
else
{
lean_object* v_a_6674_; lean_object* v___x_6676_; uint8_t v_isShared_6677_; uint8_t v_isSharedCheck_6681_; 
lean_dec(v___y_6613_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6609_);
lean_dec_ref(v___y_6608_);
lean_dec_ref(v___y_6607_);
lean_dec_ref(v___y_6601_);
lean_dec_ref(v_remaining_6599_);
lean_dec(v_matcherName_6593_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
v_a_6674_ = lean_ctor_get(v___x_6639_, 0);
v_isSharedCheck_6681_ = !lean_is_exclusive(v___x_6639_);
if (v_isSharedCheck_6681_ == 0)
{
v___x_6676_ = v___x_6639_;
v_isShared_6677_ = v_isSharedCheck_6681_;
goto v_resetjp_6675_;
}
else
{
lean_inc(v_a_6674_);
lean_dec(v___x_6639_);
v___x_6676_ = lean_box(0);
v_isShared_6677_ = v_isSharedCheck_6681_;
goto v_resetjp_6675_;
}
v_resetjp_6675_:
{
lean_object* v___x_6679_; 
if (v_isShared_6677_ == 0)
{
v___x_6679_ = v___x_6676_;
goto v_reusejp_6678_;
}
else
{
lean_object* v_reuseFailAlloc_6680_; 
v_reuseFailAlloc_6680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6680_, 0, v_a_6674_);
v___x_6679_ = v_reuseFailAlloc_6680_;
goto v_reusejp_6678_;
}
v_reusejp_6678_:
{
return v___x_6679_;
}
}
}
}
else
{
lean_object* v_a_6682_; lean_object* v___x_6684_; uint8_t v_isShared_6685_; uint8_t v_isSharedCheck_6689_; 
lean_dec(v___y_6613_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6609_);
lean_dec_ref(v___y_6608_);
lean_dec_ref(v___y_6607_);
lean_dec(v___y_6605_);
lean_dec(v___y_6603_);
lean_dec_ref(v___y_6601_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec(v_matcherName_6593_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
lean_dec_ref(v_matcherApp_6578_);
v_a_6682_ = lean_ctor_get(v___x_6628_, 0);
v_isSharedCheck_6689_ = !lean_is_exclusive(v___x_6628_);
if (v_isSharedCheck_6689_ == 0)
{
v___x_6684_ = v___x_6628_;
v_isShared_6685_ = v_isSharedCheck_6689_;
goto v_resetjp_6683_;
}
else
{
lean_inc(v_a_6682_);
lean_dec(v___x_6628_);
v___x_6684_ = lean_box(0);
v_isShared_6685_ = v_isSharedCheck_6689_;
goto v_resetjp_6683_;
}
v_resetjp_6683_:
{
lean_object* v___x_6687_; 
if (v_isShared_6685_ == 0)
{
v___x_6687_ = v___x_6684_;
goto v_reusejp_6686_;
}
else
{
lean_object* v_reuseFailAlloc_6688_; 
v_reuseFailAlloc_6688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6688_, 0, v_a_6682_);
v___x_6687_ = v_reuseFailAlloc_6688_;
goto v_reusejp_6686_;
}
v_reusejp_6686_:
{
return v___x_6687_;
}
}
}
}
else
{
lean_object* v_a_6690_; lean_object* v___x_6692_; uint8_t v_isShared_6693_; uint8_t v_isSharedCheck_6697_; 
lean_dec_ref(v_aux_6618_);
lean_dec(v___y_6613_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6609_);
lean_dec_ref(v___y_6608_);
lean_dec_ref(v___y_6607_);
lean_dec(v___y_6605_);
lean_dec(v___y_6603_);
lean_dec_ref(v___y_6601_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec(v_matcherName_6593_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
lean_dec_ref(v_matcherApp_6578_);
v_a_6690_ = lean_ctor_get(v___x_6626_, 0);
v_isSharedCheck_6697_ = !lean_is_exclusive(v___x_6626_);
if (v_isSharedCheck_6697_ == 0)
{
v___x_6692_ = v___x_6626_;
v_isShared_6693_ = v_isSharedCheck_6697_;
goto v_resetjp_6691_;
}
else
{
lean_inc(v_a_6690_);
lean_dec(v___x_6626_);
v___x_6692_ = lean_box(0);
v_isShared_6693_ = v_isSharedCheck_6697_;
goto v_resetjp_6691_;
}
v_resetjp_6691_:
{
lean_object* v___x_6695_; 
if (v_isShared_6693_ == 0)
{
v___x_6695_ = v___x_6692_;
goto v_reusejp_6694_;
}
else
{
lean_object* v_reuseFailAlloc_6696_; 
v_reuseFailAlloc_6696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6696_, 0, v_a_6690_);
v___x_6695_ = v_reuseFailAlloc_6696_;
goto v_reusejp_6694_;
}
v_reusejp_6694_:
{
return v___x_6695_;
}
}
}
}
v___jp_6699_:
{
lean_object* v___x_6712_; lean_object* v_remaining_x27_6713_; lean_object* v___x_6714_; lean_object* v___x_6715_; lean_object* v___x_6716_; lean_object* v___x_6717_; lean_object* v___x_6718_; lean_object* v___x_6719_; size_t v_sz_6720_; lean_object* v___x_6721_; 
v___x_6712_ = lean_unsigned_to_nat(0u);
v_remaining_x27_6713_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_6714_ = l_Array_reverse___redArg(v___y_6704_);
v___x_6715_ = lean_array_get_size(v___x_6714_);
v___x_6716_ = l_Array_toSubarray___redArg(v___x_6714_, v___x_6712_, v___x_6715_);
lean_inc_ref(v___y_6700_);
v___x_6717_ = l_Array_reverse___redArg(v___y_6700_);
v___x_6718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6718_, 0, v___x_6712_);
lean_ctor_set(v___x_6718_, 1, v___x_6716_);
v___x_6719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6719_, 0, v_remaining_x27_6713_);
lean_ctor_set(v___x_6719_, 1, v___x_6718_);
v_sz_6720_ = lean_array_size(v___x_6717_);
v___x_6721_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(v___x_6717_, v_sz_6720_, v___y_6702_, v___x_6719_, v___y_6708_, v___y_6709_, v___y_6710_, v___y_6711_);
lean_dec_ref(v___x_6717_);
if (lean_obj_tag(v___x_6721_) == 0)
{
lean_object* v_a_6722_; lean_object* v_snd_6723_; 
v_a_6722_ = lean_ctor_get(v___x_6721_, 0);
lean_inc(v_a_6722_);
lean_dec_ref_known(v___x_6721_, 1);
v_snd_6723_ = lean_ctor_get(v_a_6722_, 1);
lean_inc(v_snd_6723_);
if (v_useSplitter_6579_ == 0)
{
lean_object* v_fst_6724_; lean_object* v_fst_6725_; 
lean_dec(v___y_6705_);
v_fst_6724_ = lean_ctor_get(v_a_6722_, 0);
lean_inc(v_fst_6724_);
lean_dec(v_a_6722_);
v_fst_6725_ = lean_ctor_get(v_snd_6723_, 0);
lean_inc(v_fst_6725_);
lean_dec(v_snd_6723_);
v___y_6601_ = v___y_6700_;
v___y_6602_ = v___y_6711_;
v___y_6603_ = v_fst_6725_;
v___y_6604_ = v___y_6709_;
v___y_6605_ = v___x_6712_;
v___y_6606_ = v___y_6708_;
v___y_6607_ = v_matcherLevels_6707_;
v___y_6608_ = v___y_6701_;
v___y_6609_ = v___y_6703_;
v___y_6610_ = v___y_6710_;
v___y_6611_ = v___y_6706_;
v___y_6612_ = v_remaining_x27_6713_;
v___y_6613_ = v_fst_6724_;
goto v___jp_6600_;
}
else
{
if (v_isCasesOn_6698_ == 0)
{
lean_object* v___x_6727_; uint8_t v_isShared_6728_; uint8_t v_isSharedCheck_6885_; 
v_isSharedCheck_6885_ = !lean_is_exclusive(v_matcherApp_6578_);
if (v_isSharedCheck_6885_ == 0)
{
lean_object* v_unused_6886_; lean_object* v_unused_6887_; lean_object* v_unused_6888_; lean_object* v_unused_6889_; lean_object* v_unused_6890_; lean_object* v_unused_6891_; lean_object* v_unused_6892_; lean_object* v_unused_6893_; 
v_unused_6886_ = lean_ctor_get(v_matcherApp_6578_, 7);
lean_dec(v_unused_6886_);
v_unused_6887_ = lean_ctor_get(v_matcherApp_6578_, 6);
lean_dec(v_unused_6887_);
v_unused_6888_ = lean_ctor_get(v_matcherApp_6578_, 5);
lean_dec(v_unused_6888_);
v_unused_6889_ = lean_ctor_get(v_matcherApp_6578_, 4);
lean_dec(v_unused_6889_);
v_unused_6890_ = lean_ctor_get(v_matcherApp_6578_, 3);
lean_dec(v_unused_6890_);
v_unused_6891_ = lean_ctor_get(v_matcherApp_6578_, 2);
lean_dec(v_unused_6891_);
v_unused_6892_ = lean_ctor_get(v_matcherApp_6578_, 1);
lean_dec(v_unused_6892_);
v_unused_6893_ = lean_ctor_get(v_matcherApp_6578_, 0);
lean_dec(v_unused_6893_);
v___x_6727_ = v_matcherApp_6578_;
v_isShared_6728_ = v_isSharedCheck_6885_;
goto v_resetjp_6726_;
}
else
{
lean_dec(v_matcherApp_6578_);
v___x_6727_ = lean_box(0);
v_isShared_6728_ = v_isSharedCheck_6885_;
goto v_resetjp_6726_;
}
v_resetjp_6726_:
{
lean_object* v_fst_6729_; lean_object* v___x_6731_; uint8_t v_isShared_6732_; uint8_t v_isSharedCheck_6883_; 
v_fst_6729_ = lean_ctor_get(v_a_6722_, 0);
v_isSharedCheck_6883_ = !lean_is_exclusive(v_a_6722_);
if (v_isSharedCheck_6883_ == 0)
{
lean_object* v_unused_6884_; 
v_unused_6884_ = lean_ctor_get(v_a_6722_, 1);
lean_dec(v_unused_6884_);
v___x_6731_ = v_a_6722_;
v_isShared_6732_ = v_isSharedCheck_6883_;
goto v_resetjp_6730_;
}
else
{
lean_inc(v_fst_6729_);
lean_dec(v_a_6722_);
v___x_6731_ = lean_box(0);
v_isShared_6732_ = v_isSharedCheck_6883_;
goto v_resetjp_6730_;
}
v_resetjp_6730_:
{
lean_object* v_fst_6733_; lean_object* v___x_6735_; uint8_t v_isShared_6736_; uint8_t v_isSharedCheck_6881_; 
v_fst_6733_ = lean_ctor_get(v_snd_6723_, 0);
v_isSharedCheck_6881_ = !lean_is_exclusive(v_snd_6723_);
if (v_isSharedCheck_6881_ == 0)
{
lean_object* v_unused_6882_; 
v_unused_6882_ = lean_ctor_get(v_snd_6723_, 1);
lean_dec(v_unused_6882_);
v___x_6735_ = v_snd_6723_;
v_isShared_6736_ = v_isSharedCheck_6881_;
goto v_resetjp_6734_;
}
else
{
lean_inc(v_fst_6733_);
lean_dec(v_snd_6723_);
v___x_6735_ = lean_box(0);
v_isShared_6736_ = v_isSharedCheck_6881_;
goto v_resetjp_6734_;
}
v_resetjp_6734_:
{
lean_object* v___x_6737_; lean_object* v___x_6738_; lean_object* v_aux1_6739_; lean_object* v_aux1_6740_; lean_object* v_aux1_6741_; lean_object* v___x_6742_; lean_object* v___x_6743_; lean_object* v___x_6744_; lean_object* v___x_6745_; lean_object* v___x_6746_; lean_object* v___f_6747_; uint8_t v___x_6748_; lean_object* v___x_6749_; lean_object* v___x_6750_; lean_object* v___x_6751_; 
lean_inc_ref(v_matcherLevels_6707_);
v___x_6737_ = lean_array_to_list(v_matcherLevels_6707_);
lean_inc(v___x_6737_);
lean_inc(v_matcherName_6593_);
v___x_6738_ = l_Lean_mkConst(v_matcherName_6593_, v___x_6737_);
v_aux1_6739_ = l_Lean_mkAppN(v___x_6738_, v___y_6701_);
lean_inc_ref(v___y_6703_);
v_aux1_6740_ = l_Lean_Expr_app___override(v_aux1_6739_, v___y_6703_);
v_aux1_6741_ = l_Lean_mkAppN(v_aux1_6740_, v___y_6700_);
v___x_6742_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3);
lean_inc_ref_n(v_aux1_6741_, 2);
v___x_6743_ = l_Lean_indentExpr(v_aux1_6741_);
v___x_6744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6744_, 0, v___x_6742_);
lean_ctor_set(v___x_6744_, 1, v___x_6743_);
v___x_6745_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5);
v___x_6746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6746_, 0, v___x_6744_);
lean_ctor_set(v___x_6746_, 1, v___x_6745_);
v___f_6747_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6747_, 0, v___x_6746_);
v___x_6748_ = 0;
v___x_6749_ = lean_box(v___x_6748_);
v___x_6750_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6750_, 0, v_aux1_6741_);
lean_closure_set(v___x_6750_, 1, v___x_6749_);
v___x_6751_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6750_, v___f_6747_, v___y_6708_, v___y_6709_, v___y_6710_, v___y_6711_);
if (lean_obj_tag(v___x_6751_) == 0)
{
lean_object* v___x_6752_; lean_object* v___x_6753_; 
lean_dec_ref_known(v___x_6751_, 1);
v___x_6752_ = lean_array_get_size(v_alts_6598_);
v___x_6753_ = l_Lean_Meta_inferArgumentTypesN(v___x_6752_, v_aux1_6741_, v___y_6708_, v___y_6709_, v___y_6710_, v___y_6711_);
if (lean_obj_tag(v___x_6753_) == 0)
{
lean_object* v_a_6754_; lean_object* v___x_6755_; 
v_a_6754_ = lean_ctor_get(v___x_6753_, 0);
lean_inc(v_a_6754_);
lean_dec_ref_known(v___x_6753_, 1);
lean_inc(v___y_6711_);
lean_inc_ref(v___y_6710_);
lean_inc(v___y_6709_);
lean_inc_ref(v___y_6708_);
v___x_6755_ = lean_get_match_equations_for(v_matcherName_6593_, v___y_6708_, v___y_6709_, v___y_6710_, v___y_6711_);
if (lean_obj_tag(v___x_6755_) == 0)
{
lean_object* v_a_6756_; lean_object* v_splitterName_6757_; lean_object* v_splitterMatchInfo_6758_; lean_object* v___x_6759_; lean_object* v_aux2_6760_; lean_object* v_aux2_6761_; lean_object* v_aux2_6762_; lean_object* v___x_6763_; lean_object* v___x_6764_; lean_object* v___x_6765_; lean_object* v___x_6766_; lean_object* v___f_6767_; lean_object* v___x_6768_; lean_object* v___x_6769_; lean_object* v___x_6770_; 
v_a_6756_ = lean_ctor_get(v___x_6755_, 0);
lean_inc(v_a_6756_);
lean_dec_ref_known(v___x_6755_, 1);
v_splitterName_6757_ = lean_ctor_get(v_a_6756_, 1);
lean_inc_n(v_splitterName_6757_, 2);
v_splitterMatchInfo_6758_ = lean_ctor_get(v_a_6756_, 2);
lean_inc_ref(v_splitterMatchInfo_6758_);
lean_dec(v_a_6756_);
v___x_6759_ = l_Lean_mkConst(v_splitterName_6757_, v___x_6737_);
v_aux2_6760_ = l_Lean_mkAppN(v___x_6759_, v___y_6701_);
lean_inc_ref(v___y_6703_);
v_aux2_6761_ = l_Lean_Expr_app___override(v_aux2_6760_, v___y_6703_);
v_aux2_6762_ = l_Lean_mkAppN(v_aux2_6761_, v___y_6700_);
v___x_6763_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1);
lean_inc_ref_n(v_aux2_6762_, 2);
v___x_6764_ = l_Lean_indentExpr(v_aux2_6762_);
v___x_6765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6765_, 0, v___x_6763_);
lean_ctor_set(v___x_6765_, 1, v___x_6764_);
v___x_6766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6766_, 0, v___x_6765_);
lean_ctor_set(v___x_6766_, 1, v___x_6745_);
v___f_6767_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6767_, 0, v___x_6766_);
v___x_6768_ = lean_box(v___x_6748_);
v___x_6769_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6769_, 0, v_aux2_6762_);
lean_closure_set(v___x_6769_, 1, v___x_6768_);
v___x_6770_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6769_, v___f_6767_, v___y_6708_, v___y_6709_, v___y_6710_, v___y_6711_);
if (lean_obj_tag(v___x_6770_) == 0)
{
lean_object* v___x_6771_; 
lean_dec_ref_known(v___x_6770_, 1);
v___x_6771_ = l_Lean_Meta_inferArgumentTypesN(v___x_6752_, v_aux2_6762_, v___y_6708_, v___y_6709_, v___y_6710_, v___y_6711_);
if (lean_obj_tag(v___x_6771_) == 0)
{
lean_object* v_a_6772_; lean_object* v_numParams_6773_; lean_object* v_numDiscrs_6774_; lean_object* v_altInfos_6775_; lean_object* v_uElimPos_x3f_6776_; lean_object* v_overlaps_6777_; lean_object* v_altInfos_6778_; lean_object* v___x_6780_; uint8_t v_isShared_6781_; uint8_t v_isSharedCheck_6835_; 
v_a_6772_ = lean_ctor_get(v___x_6771_, 0);
lean_inc(v_a_6772_);
lean_dec_ref_known(v___x_6771_, 1);
v_numParams_6773_ = lean_ctor_get(v_toMatcherInfo_6592_, 0);
lean_inc(v_numParams_6773_);
v_numDiscrs_6774_ = lean_ctor_get(v_toMatcherInfo_6592_, 1);
lean_inc(v_numDiscrs_6774_);
v_altInfos_6775_ = lean_ctor_get(v_toMatcherInfo_6592_, 2);
lean_inc_ref(v_altInfos_6775_);
v_uElimPos_x3f_6776_ = lean_ctor_get(v_toMatcherInfo_6592_, 3);
lean_inc(v_uElimPos_x3f_6776_);
v_overlaps_6777_ = lean_ctor_get(v_toMatcherInfo_6592_, 5);
lean_inc_ref(v_overlaps_6777_);
lean_dec_ref(v_toMatcherInfo_6592_);
v_altInfos_6778_ = lean_ctor_get(v_splitterMatchInfo_6758_, 2);
v_isSharedCheck_6835_ = !lean_is_exclusive(v_splitterMatchInfo_6758_);
if (v_isSharedCheck_6835_ == 0)
{
lean_object* v_unused_6836_; lean_object* v_unused_6837_; lean_object* v_unused_6838_; lean_object* v_unused_6839_; lean_object* v_unused_6840_; 
v_unused_6836_ = lean_ctor_get(v_splitterMatchInfo_6758_, 5);
lean_dec(v_unused_6836_);
v_unused_6837_ = lean_ctor_get(v_splitterMatchInfo_6758_, 4);
lean_dec(v_unused_6837_);
v_unused_6838_ = lean_ctor_get(v_splitterMatchInfo_6758_, 3);
lean_dec(v_unused_6838_);
v_unused_6839_ = lean_ctor_get(v_splitterMatchInfo_6758_, 1);
lean_dec(v_unused_6839_);
v_unused_6840_ = lean_ctor_get(v_splitterMatchInfo_6758_, 0);
lean_dec(v_unused_6840_);
v___x_6780_ = v_splitterMatchInfo_6758_;
v_isShared_6781_ = v_isSharedCheck_6835_;
goto v_resetjp_6779_;
}
else
{
lean_inc(v_altInfos_6778_);
lean_dec(v_splitterMatchInfo_6758_);
v___x_6780_ = lean_box(0);
v_isShared_6781_ = v_isSharedCheck_6835_;
goto v_resetjp_6779_;
}
v_resetjp_6779_:
{
lean_object* v___x_6782_; lean_object* v___x_6783_; lean_object* v___x_6784_; lean_object* v___x_6785_; lean_object* v___x_6786_; lean_object* v___x_6787_; lean_object* v___x_6788_; lean_object* v___x_6789_; lean_object* v___x_6790_; lean_object* v___x_6792_; 
v___x_6782_ = lean_array_get_size(v_altInfos_6775_);
v___x_6783_ = lean_array_get_size(v_altInfos_6778_);
v___x_6784_ = lean_array_get_size(v_a_6754_);
v___x_6785_ = lean_array_get_size(v_a_6772_);
v___x_6786_ = l_Array_toSubarray___redArg(v_alts_6598_, v___x_6712_, v___x_6752_);
lean_inc_ref(v_altInfos_6775_);
v___x_6787_ = l_Array_toSubarray___redArg(v_altInfos_6775_, v___x_6712_, v___x_6782_);
v___x_6788_ = l_Array_toSubarray___redArg(v_altInfos_6778_, v___x_6712_, v___x_6783_);
v___x_6789_ = l_Array_toSubarray___redArg(v_a_6754_, v___x_6712_, v___x_6784_);
v___x_6790_ = l_Array_toSubarray___redArg(v_a_6772_, v___x_6712_, v___x_6785_);
if (v_isShared_6736_ == 0)
{
lean_ctor_set(v___x_6735_, 1, v___x_6790_);
lean_ctor_set(v___x_6735_, 0, v___x_6789_);
v___x_6792_ = v___x_6735_;
goto v_reusejp_6791_;
}
else
{
lean_object* v_reuseFailAlloc_6834_; 
v_reuseFailAlloc_6834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6834_, 0, v___x_6789_);
lean_ctor_set(v_reuseFailAlloc_6834_, 1, v___x_6790_);
v___x_6792_ = v_reuseFailAlloc_6834_;
goto v_reusejp_6791_;
}
v_reusejp_6791_:
{
lean_object* v___x_6794_; 
if (v_isShared_6732_ == 0)
{
lean_ctor_set(v___x_6731_, 1, v___x_6792_);
lean_ctor_set(v___x_6731_, 0, v___x_6788_);
v___x_6794_ = v___x_6731_;
goto v_reusejp_6793_;
}
else
{
lean_object* v_reuseFailAlloc_6833_; 
v_reuseFailAlloc_6833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6833_, 0, v___x_6788_);
lean_ctor_set(v_reuseFailAlloc_6833_, 1, v___x_6792_);
v___x_6794_ = v_reuseFailAlloc_6833_;
goto v_reusejp_6793_;
}
v_reusejp_6793_:
{
lean_object* v___x_6795_; lean_object* v___x_6796_; lean_object* v___x_6797_; lean_object* v___x_6798_; 
v___x_6795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6795_, 0, v___x_6787_);
lean_ctor_set(v___x_6795_, 1, v___x_6794_);
v___x_6796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6796_, 0, v___x_6786_);
lean_ctor_set(v___x_6796_, 1, v___x_6795_);
v___x_6797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6797_, 0, v_remaining_x27_6713_);
lean_ctor_set(v___x_6797_, 1, v___x_6796_);
v___x_6798_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v___x_6752_, v_onAlt_6583_, v_useSplitter_6579_, v_fst_6733_, v___y_6705_, v___x_6712_, v___x_6797_, v___y_6708_, v___y_6709_, v___y_6710_, v___y_6711_);
if (lean_obj_tag(v___x_6798_) == 0)
{
lean_object* v_a_6799_; lean_object* v_fst_6800_; lean_object* v___x_6801_; 
v_a_6799_ = lean_ctor_get(v___x_6798_, 0);
lean_inc(v_a_6799_);
lean_dec_ref_known(v___x_6798_, 1);
v_fst_6800_ = lean_ctor_get(v_a_6799_, 0);
lean_inc(v_fst_6800_);
lean_dec(v_a_6799_);
lean_inc(v___y_6711_);
lean_inc_ref(v___y_6710_);
lean_inc(v___y_6709_);
lean_inc_ref(v___y_6708_);
v___x_6801_ = lean_apply_6(v_onRemaining_6584_, v_remaining_6599_, v___y_6708_, v___y_6709_, v___y_6710_, v___y_6711_, lean_box(0));
if (lean_obj_tag(v___x_6801_) == 0)
{
lean_object* v_a_6802_; lean_object* v___x_6804_; uint8_t v_isShared_6805_; uint8_t v_isSharedCheck_6816_; 
v_a_6802_ = lean_ctor_get(v___x_6801_, 0);
v_isSharedCheck_6816_ = !lean_is_exclusive(v___x_6801_);
if (v_isSharedCheck_6816_ == 0)
{
v___x_6804_ = v___x_6801_;
v_isShared_6805_ = v_isSharedCheck_6816_;
goto v_resetjp_6803_;
}
else
{
lean_inc(v_a_6802_);
lean_dec(v___x_6801_);
v___x_6804_ = lean_box(0);
v_isShared_6805_ = v_isSharedCheck_6816_;
goto v_resetjp_6803_;
}
v_resetjp_6803_:
{
lean_object* v_remaining_x27_6806_; lean_object* v___x_6808_; 
v_remaining_x27_6806_ = l_Array_append___redArg(v_fst_6729_, v_a_6802_);
lean_dec(v_a_6802_);
if (v_isShared_6781_ == 0)
{
lean_ctor_set(v___x_6780_, 5, v_overlaps_6777_);
lean_ctor_set(v___x_6780_, 4, v___y_6706_);
lean_ctor_set(v___x_6780_, 3, v_uElimPos_x3f_6776_);
lean_ctor_set(v___x_6780_, 2, v_altInfos_6775_);
lean_ctor_set(v___x_6780_, 1, v_numDiscrs_6774_);
lean_ctor_set(v___x_6780_, 0, v_numParams_6773_);
v___x_6808_ = v___x_6780_;
goto v_reusejp_6807_;
}
else
{
lean_object* v_reuseFailAlloc_6815_; 
v_reuseFailAlloc_6815_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_6815_, 0, v_numParams_6773_);
lean_ctor_set(v_reuseFailAlloc_6815_, 1, v_numDiscrs_6774_);
lean_ctor_set(v_reuseFailAlloc_6815_, 2, v_altInfos_6775_);
lean_ctor_set(v_reuseFailAlloc_6815_, 3, v_uElimPos_x3f_6776_);
lean_ctor_set(v_reuseFailAlloc_6815_, 4, v___y_6706_);
lean_ctor_set(v_reuseFailAlloc_6815_, 5, v_overlaps_6777_);
v___x_6808_ = v_reuseFailAlloc_6815_;
goto v_reusejp_6807_;
}
v_reusejp_6807_:
{
lean_object* v___x_6810_; 
if (v_isShared_6728_ == 0)
{
lean_ctor_set(v___x_6727_, 7, v_remaining_x27_6806_);
lean_ctor_set(v___x_6727_, 6, v_fst_6800_);
lean_ctor_set(v___x_6727_, 5, v___y_6700_);
lean_ctor_set(v___x_6727_, 4, v___y_6703_);
lean_ctor_set(v___x_6727_, 3, v___y_6701_);
lean_ctor_set(v___x_6727_, 2, v_matcherLevels_6707_);
lean_ctor_set(v___x_6727_, 1, v_splitterName_6757_);
lean_ctor_set(v___x_6727_, 0, v___x_6808_);
v___x_6810_ = v___x_6727_;
goto v_reusejp_6809_;
}
else
{
lean_object* v_reuseFailAlloc_6814_; 
v_reuseFailAlloc_6814_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_6814_, 0, v___x_6808_);
lean_ctor_set(v_reuseFailAlloc_6814_, 1, v_splitterName_6757_);
lean_ctor_set(v_reuseFailAlloc_6814_, 2, v_matcherLevels_6707_);
lean_ctor_set(v_reuseFailAlloc_6814_, 3, v___y_6701_);
lean_ctor_set(v_reuseFailAlloc_6814_, 4, v___y_6703_);
lean_ctor_set(v_reuseFailAlloc_6814_, 5, v___y_6700_);
lean_ctor_set(v_reuseFailAlloc_6814_, 6, v_fst_6800_);
lean_ctor_set(v_reuseFailAlloc_6814_, 7, v_remaining_x27_6806_);
v___x_6810_ = v_reuseFailAlloc_6814_;
goto v_reusejp_6809_;
}
v_reusejp_6809_:
{
lean_object* v___x_6812_; 
if (v_isShared_6805_ == 0)
{
lean_ctor_set(v___x_6804_, 0, v___x_6810_);
v___x_6812_ = v___x_6804_;
goto v_reusejp_6811_;
}
else
{
lean_object* v_reuseFailAlloc_6813_; 
v_reuseFailAlloc_6813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6813_, 0, v___x_6810_);
v___x_6812_ = v_reuseFailAlloc_6813_;
goto v_reusejp_6811_;
}
v_reusejp_6811_:
{
return v___x_6812_;
}
}
}
}
}
else
{
lean_object* v_a_6817_; lean_object* v___x_6819_; uint8_t v_isShared_6820_; uint8_t v_isSharedCheck_6824_; 
lean_dec(v_fst_6800_);
lean_del_object(v___x_6780_);
lean_dec_ref(v_overlaps_6777_);
lean_dec(v_uElimPos_x3f_6776_);
lean_dec_ref(v_altInfos_6775_);
lean_dec(v_numDiscrs_6774_);
lean_dec(v_numParams_6773_);
lean_dec(v_splitterName_6757_);
lean_dec(v_fst_6729_);
lean_del_object(v___x_6727_);
lean_dec_ref(v_matcherLevels_6707_);
lean_dec_ref(v___y_6706_);
lean_dec_ref(v___y_6703_);
lean_dec_ref(v___y_6701_);
lean_dec_ref(v___y_6700_);
v_a_6817_ = lean_ctor_get(v___x_6801_, 0);
v_isSharedCheck_6824_ = !lean_is_exclusive(v___x_6801_);
if (v_isSharedCheck_6824_ == 0)
{
v___x_6819_ = v___x_6801_;
v_isShared_6820_ = v_isSharedCheck_6824_;
goto v_resetjp_6818_;
}
else
{
lean_inc(v_a_6817_);
lean_dec(v___x_6801_);
v___x_6819_ = lean_box(0);
v_isShared_6820_ = v_isSharedCheck_6824_;
goto v_resetjp_6818_;
}
v_resetjp_6818_:
{
lean_object* v___x_6822_; 
if (v_isShared_6820_ == 0)
{
v___x_6822_ = v___x_6819_;
goto v_reusejp_6821_;
}
else
{
lean_object* v_reuseFailAlloc_6823_; 
v_reuseFailAlloc_6823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6823_, 0, v_a_6817_);
v___x_6822_ = v_reuseFailAlloc_6823_;
goto v_reusejp_6821_;
}
v_reusejp_6821_:
{
return v___x_6822_;
}
}
}
}
else
{
lean_object* v_a_6825_; lean_object* v___x_6827_; uint8_t v_isShared_6828_; uint8_t v_isSharedCheck_6832_; 
lean_del_object(v___x_6780_);
lean_dec_ref(v_overlaps_6777_);
lean_dec(v_uElimPos_x3f_6776_);
lean_dec_ref(v_altInfos_6775_);
lean_dec(v_numDiscrs_6774_);
lean_dec(v_numParams_6773_);
lean_dec(v_splitterName_6757_);
lean_dec(v_fst_6729_);
lean_del_object(v___x_6727_);
lean_dec_ref(v_matcherLevels_6707_);
lean_dec_ref(v___y_6706_);
lean_dec_ref(v___y_6703_);
lean_dec_ref(v___y_6701_);
lean_dec_ref(v___y_6700_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_onRemaining_6584_);
v_a_6825_ = lean_ctor_get(v___x_6798_, 0);
v_isSharedCheck_6832_ = !lean_is_exclusive(v___x_6798_);
if (v_isSharedCheck_6832_ == 0)
{
v___x_6827_ = v___x_6798_;
v_isShared_6828_ = v_isSharedCheck_6832_;
goto v_resetjp_6826_;
}
else
{
lean_inc(v_a_6825_);
lean_dec(v___x_6798_);
v___x_6827_ = lean_box(0);
v_isShared_6828_ = v_isSharedCheck_6832_;
goto v_resetjp_6826_;
}
v_resetjp_6826_:
{
lean_object* v___x_6830_; 
if (v_isShared_6828_ == 0)
{
v___x_6830_ = v___x_6827_;
goto v_reusejp_6829_;
}
else
{
lean_object* v_reuseFailAlloc_6831_; 
v_reuseFailAlloc_6831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6831_, 0, v_a_6825_);
v___x_6830_ = v_reuseFailAlloc_6831_;
goto v_reusejp_6829_;
}
v_reusejp_6829_:
{
return v___x_6830_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6841_; lean_object* v___x_6843_; uint8_t v_isShared_6844_; uint8_t v_isSharedCheck_6848_; 
lean_dec_ref(v_splitterMatchInfo_6758_);
lean_dec(v_splitterName_6757_);
lean_dec(v_a_6754_);
lean_del_object(v___x_6735_);
lean_dec(v_fst_6733_);
lean_del_object(v___x_6731_);
lean_dec(v_fst_6729_);
lean_del_object(v___x_6727_);
lean_dec_ref(v_matcherLevels_6707_);
lean_dec_ref(v___y_6706_);
lean_dec(v___y_6705_);
lean_dec_ref(v___y_6703_);
lean_dec_ref(v___y_6701_);
lean_dec_ref(v___y_6700_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
v_a_6841_ = lean_ctor_get(v___x_6771_, 0);
v_isSharedCheck_6848_ = !lean_is_exclusive(v___x_6771_);
if (v_isSharedCheck_6848_ == 0)
{
v___x_6843_ = v___x_6771_;
v_isShared_6844_ = v_isSharedCheck_6848_;
goto v_resetjp_6842_;
}
else
{
lean_inc(v_a_6841_);
lean_dec(v___x_6771_);
v___x_6843_ = lean_box(0);
v_isShared_6844_ = v_isSharedCheck_6848_;
goto v_resetjp_6842_;
}
v_resetjp_6842_:
{
lean_object* v___x_6846_; 
if (v_isShared_6844_ == 0)
{
v___x_6846_ = v___x_6843_;
goto v_reusejp_6845_;
}
else
{
lean_object* v_reuseFailAlloc_6847_; 
v_reuseFailAlloc_6847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6847_, 0, v_a_6841_);
v___x_6846_ = v_reuseFailAlloc_6847_;
goto v_reusejp_6845_;
}
v_reusejp_6845_:
{
return v___x_6846_;
}
}
}
}
else
{
lean_object* v_a_6849_; lean_object* v___x_6851_; uint8_t v_isShared_6852_; uint8_t v_isSharedCheck_6856_; 
lean_dec_ref(v_aux2_6762_);
lean_dec_ref(v_splitterMatchInfo_6758_);
lean_dec(v_splitterName_6757_);
lean_dec(v_a_6754_);
lean_del_object(v___x_6735_);
lean_dec(v_fst_6733_);
lean_del_object(v___x_6731_);
lean_dec(v_fst_6729_);
lean_del_object(v___x_6727_);
lean_dec_ref(v_matcherLevels_6707_);
lean_dec_ref(v___y_6706_);
lean_dec(v___y_6705_);
lean_dec_ref(v___y_6703_);
lean_dec_ref(v___y_6701_);
lean_dec_ref(v___y_6700_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
v_a_6849_ = lean_ctor_get(v___x_6770_, 0);
v_isSharedCheck_6856_ = !lean_is_exclusive(v___x_6770_);
if (v_isSharedCheck_6856_ == 0)
{
v___x_6851_ = v___x_6770_;
v_isShared_6852_ = v_isSharedCheck_6856_;
goto v_resetjp_6850_;
}
else
{
lean_inc(v_a_6849_);
lean_dec(v___x_6770_);
v___x_6851_ = lean_box(0);
v_isShared_6852_ = v_isSharedCheck_6856_;
goto v_resetjp_6850_;
}
v_resetjp_6850_:
{
lean_object* v___x_6854_; 
if (v_isShared_6852_ == 0)
{
v___x_6854_ = v___x_6851_;
goto v_reusejp_6853_;
}
else
{
lean_object* v_reuseFailAlloc_6855_; 
v_reuseFailAlloc_6855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6855_, 0, v_a_6849_);
v___x_6854_ = v_reuseFailAlloc_6855_;
goto v_reusejp_6853_;
}
v_reusejp_6853_:
{
return v___x_6854_;
}
}
}
}
else
{
lean_object* v_a_6857_; lean_object* v___x_6859_; uint8_t v_isShared_6860_; uint8_t v_isSharedCheck_6864_; 
lean_dec(v_a_6754_);
lean_dec(v___x_6737_);
lean_del_object(v___x_6735_);
lean_dec(v_fst_6733_);
lean_del_object(v___x_6731_);
lean_dec(v_fst_6729_);
lean_del_object(v___x_6727_);
lean_dec_ref(v_matcherLevels_6707_);
lean_dec_ref(v___y_6706_);
lean_dec(v___y_6705_);
lean_dec_ref(v___y_6703_);
lean_dec_ref(v___y_6701_);
lean_dec_ref(v___y_6700_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
v_a_6857_ = lean_ctor_get(v___x_6755_, 0);
v_isSharedCheck_6864_ = !lean_is_exclusive(v___x_6755_);
if (v_isSharedCheck_6864_ == 0)
{
v___x_6859_ = v___x_6755_;
v_isShared_6860_ = v_isSharedCheck_6864_;
goto v_resetjp_6858_;
}
else
{
lean_inc(v_a_6857_);
lean_dec(v___x_6755_);
v___x_6859_ = lean_box(0);
v_isShared_6860_ = v_isSharedCheck_6864_;
goto v_resetjp_6858_;
}
v_resetjp_6858_:
{
lean_object* v___x_6862_; 
if (v_isShared_6860_ == 0)
{
v___x_6862_ = v___x_6859_;
goto v_reusejp_6861_;
}
else
{
lean_object* v_reuseFailAlloc_6863_; 
v_reuseFailAlloc_6863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6863_, 0, v_a_6857_);
v___x_6862_ = v_reuseFailAlloc_6863_;
goto v_reusejp_6861_;
}
v_reusejp_6861_:
{
return v___x_6862_;
}
}
}
}
else
{
lean_object* v_a_6865_; lean_object* v___x_6867_; uint8_t v_isShared_6868_; uint8_t v_isSharedCheck_6872_; 
lean_dec(v___x_6737_);
lean_del_object(v___x_6735_);
lean_dec(v_fst_6733_);
lean_del_object(v___x_6731_);
lean_dec(v_fst_6729_);
lean_del_object(v___x_6727_);
lean_dec_ref(v_matcherLevels_6707_);
lean_dec_ref(v___y_6706_);
lean_dec(v___y_6705_);
lean_dec_ref(v___y_6703_);
lean_dec_ref(v___y_6701_);
lean_dec_ref(v___y_6700_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec(v_matcherName_6593_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
v_a_6865_ = lean_ctor_get(v___x_6753_, 0);
v_isSharedCheck_6872_ = !lean_is_exclusive(v___x_6753_);
if (v_isSharedCheck_6872_ == 0)
{
v___x_6867_ = v___x_6753_;
v_isShared_6868_ = v_isSharedCheck_6872_;
goto v_resetjp_6866_;
}
else
{
lean_inc(v_a_6865_);
lean_dec(v___x_6753_);
v___x_6867_ = lean_box(0);
v_isShared_6868_ = v_isSharedCheck_6872_;
goto v_resetjp_6866_;
}
v_resetjp_6866_:
{
lean_object* v___x_6870_; 
if (v_isShared_6868_ == 0)
{
v___x_6870_ = v___x_6867_;
goto v_reusejp_6869_;
}
else
{
lean_object* v_reuseFailAlloc_6871_; 
v_reuseFailAlloc_6871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6871_, 0, v_a_6865_);
v___x_6870_ = v_reuseFailAlloc_6871_;
goto v_reusejp_6869_;
}
v_reusejp_6869_:
{
return v___x_6870_;
}
}
}
}
else
{
lean_object* v_a_6873_; lean_object* v___x_6875_; uint8_t v_isShared_6876_; uint8_t v_isSharedCheck_6880_; 
lean_dec_ref(v_aux1_6741_);
lean_dec(v___x_6737_);
lean_del_object(v___x_6735_);
lean_dec(v_fst_6733_);
lean_del_object(v___x_6731_);
lean_dec(v_fst_6729_);
lean_del_object(v___x_6727_);
lean_dec_ref(v_matcherLevels_6707_);
lean_dec_ref(v___y_6706_);
lean_dec(v___y_6705_);
lean_dec_ref(v___y_6703_);
lean_dec_ref(v___y_6701_);
lean_dec_ref(v___y_6700_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec(v_matcherName_6593_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
v_a_6873_ = lean_ctor_get(v___x_6751_, 0);
v_isSharedCheck_6880_ = !lean_is_exclusive(v___x_6751_);
if (v_isSharedCheck_6880_ == 0)
{
v___x_6875_ = v___x_6751_;
v_isShared_6876_ = v_isSharedCheck_6880_;
goto v_resetjp_6874_;
}
else
{
lean_inc(v_a_6873_);
lean_dec(v___x_6751_);
v___x_6875_ = lean_box(0);
v_isShared_6876_ = v_isSharedCheck_6880_;
goto v_resetjp_6874_;
}
v_resetjp_6874_:
{
lean_object* v___x_6878_; 
if (v_isShared_6876_ == 0)
{
v___x_6878_ = v___x_6875_;
goto v_reusejp_6877_;
}
else
{
lean_object* v_reuseFailAlloc_6879_; 
v_reuseFailAlloc_6879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6879_, 0, v_a_6873_);
v___x_6878_ = v_reuseFailAlloc_6879_;
goto v_reusejp_6877_;
}
v_reusejp_6877_:
{
return v___x_6878_;
}
}
}
}
}
}
}
else
{
lean_object* v_fst_6894_; lean_object* v_fst_6895_; 
lean_dec(v___y_6705_);
v_fst_6894_ = lean_ctor_get(v_a_6722_, 0);
lean_inc(v_fst_6894_);
lean_dec(v_a_6722_);
v_fst_6895_ = lean_ctor_get(v_snd_6723_, 0);
lean_inc(v_fst_6895_);
lean_dec(v_snd_6723_);
v___y_6601_ = v___y_6700_;
v___y_6602_ = v___y_6711_;
v___y_6603_ = v_fst_6895_;
v___y_6604_ = v___y_6709_;
v___y_6605_ = v___x_6712_;
v___y_6606_ = v___y_6708_;
v___y_6607_ = v_matcherLevels_6707_;
v___y_6608_ = v___y_6701_;
v___y_6609_ = v___y_6703_;
v___y_6610_ = v___y_6710_;
v___y_6611_ = v___y_6706_;
v___y_6612_ = v_remaining_x27_6713_;
v___y_6613_ = v_fst_6894_;
goto v___jp_6600_;
}
}
}
else
{
lean_object* v_a_6896_; lean_object* v___x_6898_; uint8_t v_isShared_6899_; uint8_t v_isSharedCheck_6903_; 
lean_dec_ref(v_matcherLevels_6707_);
lean_dec_ref(v___y_6706_);
lean_dec(v___y_6705_);
lean_dec_ref(v___y_6703_);
lean_dec_ref(v___y_6701_);
lean_dec_ref(v___y_6700_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec(v_matcherName_6593_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
lean_dec_ref(v_matcherApp_6578_);
v_a_6896_ = lean_ctor_get(v___x_6721_, 0);
v_isSharedCheck_6903_ = !lean_is_exclusive(v___x_6721_);
if (v_isSharedCheck_6903_ == 0)
{
v___x_6898_ = v___x_6721_;
v_isShared_6899_ = v_isSharedCheck_6903_;
goto v_resetjp_6897_;
}
else
{
lean_inc(v_a_6896_);
lean_dec(v___x_6721_);
v___x_6898_ = lean_box(0);
v_isShared_6899_ = v_isSharedCheck_6903_;
goto v_resetjp_6897_;
}
v_resetjp_6897_:
{
lean_object* v___x_6901_; 
if (v_isShared_6899_ == 0)
{
v___x_6901_ = v___x_6898_;
goto v_reusejp_6900_;
}
else
{
lean_object* v_reuseFailAlloc_6902_; 
v_reuseFailAlloc_6902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6902_, 0, v_a_6896_);
v___x_6901_ = v_reuseFailAlloc_6902_;
goto v_reusejp_6900_;
}
v_reusejp_6900_:
{
return v___x_6901_;
}
}
}
}
v___jp_6904_:
{
size_t v_sz_6910_; size_t v___x_6911_; lean_object* v___x_6912_; 
v_sz_6910_ = lean_array_size(v_params_6595_);
v___x_6911_ = ((size_t)0ULL);
lean_inc_ref(v_params_6595_);
lean_inc_ref(v_onParams_6581_);
v___x_6912_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6581_, v_sz_6910_, v___x_6911_, v_params_6595_, v___y_6906_, v___y_6907_, v___y_6908_, v___y_6909_);
if (lean_obj_tag(v___x_6912_) == 0)
{
lean_object* v_a_6913_; size_t v_sz_6914_; lean_object* v___x_6915_; 
v_a_6913_ = lean_ctor_get(v___x_6912_, 0);
lean_inc(v_a_6913_);
lean_dec_ref_known(v___x_6912_, 1);
v_sz_6914_ = lean_array_size(v_discrs_6597_);
lean_inc_ref(v_discrs_6597_);
v___x_6915_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6581_, v_sz_6914_, v___x_6911_, v_discrs_6597_, v___y_6906_, v___y_6907_, v___y_6908_, v___y_6909_);
if (lean_obj_tag(v___x_6915_) == 0)
{
lean_object* v_a_6916_; lean_object* v___x_6917_; lean_object* v___x_6918_; lean_object* v___f_6919_; uint8_t v___x_6920_; lean_object* v___x_6921_; 
v_a_6916_ = lean_ctor_get(v___x_6915_, 0);
lean_inc_n(v_a_6916_, 2);
lean_dec_ref_known(v___x_6915_, 1);
v___x_6917_ = lean_box(v_addEqualities_6580_);
v___x_6918_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1));
lean_inc_ref(v_discrs_6597_);
lean_inc_ref(v_toMatcherInfo_6592_);
v___f_6919_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed), 13, 6);
lean_closure_set(v___f_6919_, 0, v_onMotive_6582_);
lean_closure_set(v___f_6919_, 1, v_toMatcherInfo_6592_);
lean_closure_set(v___f_6919_, 2, v_a_6916_);
lean_closure_set(v___f_6919_, 3, v___x_6917_);
lean_closure_set(v___f_6919_, 4, v___x_6918_);
lean_closure_set(v___f_6919_, 5, v_discrs_6597_);
v___x_6920_ = 0;
lean_inc_ref(v_motive_6596_);
v___x_6921_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_6596_, v___f_6919_, v___x_6920_, v___y_6906_, v___y_6907_, v___y_6908_, v___y_6909_);
if (lean_obj_tag(v___x_6921_) == 0)
{
lean_object* v_a_6922_; lean_object* v_snd_6923_; lean_object* v_snd_6924_; lean_object* v_uElimPos_x3f_6925_; 
v_a_6922_ = lean_ctor_get(v___x_6921_, 0);
lean_inc(v_a_6922_);
lean_dec_ref_known(v___x_6921_, 1);
v_snd_6923_ = lean_ctor_get(v_a_6922_, 1);
v_snd_6924_ = lean_ctor_get(v_snd_6923_, 1);
lean_inc(v_snd_6924_);
v_uElimPos_x3f_6925_ = lean_ctor_get(v_toMatcherInfo_6592_, 3);
if (lean_obj_tag(v_uElimPos_x3f_6925_) == 0)
{
lean_object* v_fst_6926_; lean_object* v_fst_6927_; lean_object* v_snd_6928_; 
v_fst_6926_ = lean_ctor_get(v_a_6922_, 0);
lean_inc(v_fst_6926_);
lean_dec(v_a_6922_);
v_fst_6927_ = lean_ctor_get(v_snd_6924_, 0);
lean_inc(v_fst_6927_);
v_snd_6928_ = lean_ctor_get(v_snd_6924_, 1);
lean_inc(v_snd_6928_);
lean_dec(v_snd_6924_);
lean_inc_ref(v_matcherLevels_6594_);
v___y_6700_ = v_a_6916_;
v___y_6701_ = v_a_6913_;
v___y_6702_ = v___x_6911_;
v___y_6703_ = v_fst_6926_;
v___y_6704_ = v_fst_6927_;
v___y_6705_ = v_numDiscrEqs_6905_;
v___y_6706_ = v_snd_6928_;
v_matcherLevels_6707_ = v_matcherLevels_6594_;
v___y_6708_ = v___y_6906_;
v___y_6709_ = v___y_6907_;
v___y_6710_ = v___y_6908_;
v___y_6711_ = v___y_6909_;
goto v___jp_6699_;
}
else
{
lean_object* v_fst_6929_; lean_object* v_fst_6930_; lean_object* v_fst_6931_; lean_object* v_snd_6932_; lean_object* v_val_6933_; lean_object* v___x_6934_; 
lean_inc(v_snd_6923_);
v_fst_6929_ = lean_ctor_get(v_a_6922_, 0);
lean_inc(v_fst_6929_);
lean_dec(v_a_6922_);
v_fst_6930_ = lean_ctor_get(v_snd_6923_, 0);
lean_inc(v_fst_6930_);
lean_dec(v_snd_6923_);
v_fst_6931_ = lean_ctor_get(v_snd_6924_, 0);
lean_inc(v_fst_6931_);
v_snd_6932_ = lean_ctor_get(v_snd_6924_, 1);
lean_inc(v_snd_6932_);
lean_dec(v_snd_6924_);
v_val_6933_ = lean_ctor_get(v_uElimPos_x3f_6925_, 0);
lean_inc_ref(v_matcherLevels_6594_);
v___x_6934_ = lean_array_set(v_matcherLevels_6594_, v_val_6933_, v_fst_6930_);
v___y_6700_ = v_a_6916_;
v___y_6701_ = v_a_6913_;
v___y_6702_ = v___x_6911_;
v___y_6703_ = v_fst_6929_;
v___y_6704_ = v_fst_6931_;
v___y_6705_ = v_numDiscrEqs_6905_;
v___y_6706_ = v_snd_6932_;
v_matcherLevels_6707_ = v___x_6934_;
v___y_6708_ = v___y_6906_;
v___y_6709_ = v___y_6907_;
v___y_6710_ = v___y_6908_;
v___y_6711_ = v___y_6909_;
goto v___jp_6699_;
}
}
else
{
lean_object* v_a_6935_; lean_object* v___x_6937_; uint8_t v_isShared_6938_; uint8_t v_isSharedCheck_6942_; 
lean_dec(v_a_6916_);
lean_dec(v_a_6913_);
lean_dec(v_numDiscrEqs_6905_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec(v_matcherName_6593_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
lean_dec_ref(v_matcherApp_6578_);
v_a_6935_ = lean_ctor_get(v___x_6921_, 0);
v_isSharedCheck_6942_ = !lean_is_exclusive(v___x_6921_);
if (v_isSharedCheck_6942_ == 0)
{
v___x_6937_ = v___x_6921_;
v_isShared_6938_ = v_isSharedCheck_6942_;
goto v_resetjp_6936_;
}
else
{
lean_inc(v_a_6935_);
lean_dec(v___x_6921_);
v___x_6937_ = lean_box(0);
v_isShared_6938_ = v_isSharedCheck_6942_;
goto v_resetjp_6936_;
}
v_resetjp_6936_:
{
lean_object* v___x_6940_; 
if (v_isShared_6938_ == 0)
{
v___x_6940_ = v___x_6937_;
goto v_reusejp_6939_;
}
else
{
lean_object* v_reuseFailAlloc_6941_; 
v_reuseFailAlloc_6941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6941_, 0, v_a_6935_);
v___x_6940_ = v_reuseFailAlloc_6941_;
goto v_reusejp_6939_;
}
v_reusejp_6939_:
{
return v___x_6940_;
}
}
}
}
else
{
lean_object* v_a_6943_; lean_object* v___x_6945_; uint8_t v_isShared_6946_; uint8_t v_isSharedCheck_6950_; 
lean_dec(v_a_6913_);
lean_dec(v_numDiscrEqs_6905_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec(v_matcherName_6593_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
lean_dec_ref(v_onMotive_6582_);
lean_dec_ref(v_matcherApp_6578_);
v_a_6943_ = lean_ctor_get(v___x_6915_, 0);
v_isSharedCheck_6950_ = !lean_is_exclusive(v___x_6915_);
if (v_isSharedCheck_6950_ == 0)
{
v___x_6945_ = v___x_6915_;
v_isShared_6946_ = v_isSharedCheck_6950_;
goto v_resetjp_6944_;
}
else
{
lean_inc(v_a_6943_);
lean_dec(v___x_6915_);
v___x_6945_ = lean_box(0);
v_isShared_6946_ = v_isSharedCheck_6950_;
goto v_resetjp_6944_;
}
v_resetjp_6944_:
{
lean_object* v___x_6948_; 
if (v_isShared_6946_ == 0)
{
v___x_6948_ = v___x_6945_;
goto v_reusejp_6947_;
}
else
{
lean_object* v_reuseFailAlloc_6949_; 
v_reuseFailAlloc_6949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6949_, 0, v_a_6943_);
v___x_6948_ = v_reuseFailAlloc_6949_;
goto v_reusejp_6947_;
}
v_reusejp_6947_:
{
return v___x_6948_;
}
}
}
}
else
{
lean_object* v_a_6951_; lean_object* v___x_6953_; uint8_t v_isShared_6954_; uint8_t v_isSharedCheck_6958_; 
lean_dec(v_numDiscrEqs_6905_);
lean_dec_ref(v_remaining_6599_);
lean_dec_ref(v_alts_6598_);
lean_dec(v_matcherName_6593_);
lean_dec_ref(v_toMatcherInfo_6592_);
lean_dec_ref(v_onRemaining_6584_);
lean_dec_ref(v_onAlt_6583_);
lean_dec_ref(v_onMotive_6582_);
lean_dec_ref(v_onParams_6581_);
lean_dec_ref(v_matcherApp_6578_);
v_a_6951_ = lean_ctor_get(v___x_6912_, 0);
v_isSharedCheck_6958_ = !lean_is_exclusive(v___x_6912_);
if (v_isSharedCheck_6958_ == 0)
{
v___x_6953_ = v___x_6912_;
v_isShared_6954_ = v_isSharedCheck_6958_;
goto v_resetjp_6952_;
}
else
{
lean_inc(v_a_6951_);
lean_dec(v___x_6912_);
v___x_6953_ = lean_box(0);
v_isShared_6954_ = v_isSharedCheck_6958_;
goto v_resetjp_6952_;
}
v_resetjp_6952_:
{
lean_object* v___x_6956_; 
if (v_isShared_6954_ == 0)
{
v___x_6956_ = v___x_6953_;
goto v_reusejp_6955_;
}
else
{
lean_object* v_reuseFailAlloc_6957_; 
v_reuseFailAlloc_6957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6957_, 0, v_a_6951_);
v___x_6956_ = v_reuseFailAlloc_6957_;
goto v_reusejp_6955_;
}
v_reusejp_6955_:
{
return v___x_6956_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed(lean_object* v_matcherApp_6978_, lean_object* v_useSplitter_6979_, lean_object* v_addEqualities_6980_, lean_object* v_onParams_6981_, lean_object* v_onMotive_6982_, lean_object* v_onAlt_6983_, lean_object* v_onRemaining_6984_, lean_object* v___y_6985_, lean_object* v___y_6986_, lean_object* v___y_6987_, lean_object* v___y_6988_, lean_object* v___y_6989_){
_start:
{
uint8_t v_useSplitter_boxed_6990_; uint8_t v_addEqualities_boxed_6991_; lean_object* v_res_6992_; 
v_useSplitter_boxed_6990_ = lean_unbox(v_useSplitter_6979_);
v_addEqualities_boxed_6991_ = lean_unbox(v_addEqualities_6980_);
v_res_6992_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(v_matcherApp_6978_, v_useSplitter_boxed_6990_, v_addEqualities_boxed_6991_, v_onParams_6981_, v_onMotive_6982_, v_onAlt_6983_, v_onRemaining_6984_, v___y_6985_, v___y_6986_, v___y_6987_, v___y_6988_);
lean_dec(v___y_6988_);
lean_dec_ref(v___y_6987_);
lean_dec(v___y_6986_);
lean_dec_ref(v___y_6985_);
return v_res_6992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType(lean_object* v_matcherApp_6998_, lean_object* v___y_6999_, lean_object* v___y_7000_, lean_object* v___y_7001_, lean_object* v___y_7002_){
_start:
{
lean_object* v_toMatcherInfo_7004_; lean_object* v_matcherName_7005_; lean_object* v_matcherLevels_7006_; lean_object* v_params_7007_; lean_object* v_alts_7008_; lean_object* v_remaining_7009_; lean_object* v___f_7010_; lean_object* v___f_7011_; lean_object* v_nExtra_7012_; uint8_t v___x_7013_; lean_object* v___f_7014_; uint8_t v___x_7015_; lean_object* v___x_7016_; lean_object* v___x_7017_; lean_object* v___f_7018_; lean_object* v___x_7019_; 
v_toMatcherInfo_7004_ = lean_ctor_get(v_matcherApp_6998_, 0);
v_matcherName_7005_ = lean_ctor_get(v_matcherApp_6998_, 1);
v_matcherLevels_7006_ = lean_ctor_get(v_matcherApp_6998_, 2);
v_params_7007_ = lean_ctor_get(v_matcherApp_6998_, 3);
v_alts_7008_ = lean_ctor_get(v_matcherApp_6998_, 6);
v_remaining_7009_ = lean_ctor_get(v_matcherApp_6998_, 7);
v___f_7010_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__0));
v___f_7011_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__1));
v_nExtra_7012_ = lean_array_get_size(v_remaining_7009_);
v___x_7013_ = 1;
v___f_7014_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__2));
v___x_7015_ = 0;
v___x_7016_ = lean_box(v___x_7015_);
v___x_7017_ = lean_box(v___x_7013_);
lean_inc_ref(v_matcherLevels_7006_);
lean_inc_ref(v_params_7007_);
lean_inc(v_matcherName_7005_);
lean_inc_ref(v_toMatcherInfo_7004_);
lean_inc_ref(v_alts_7008_);
v___f_7018_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed), 15, 8);
lean_closure_set(v___f_7018_, 0, v_nExtra_7012_);
lean_closure_set(v___f_7018_, 1, v___x_7016_);
lean_closure_set(v___f_7018_, 2, v___x_7017_);
lean_closure_set(v___f_7018_, 3, v_alts_7008_);
lean_closure_set(v___f_7018_, 4, v_toMatcherInfo_7004_);
lean_closure_set(v___f_7018_, 5, v_matcherName_7005_);
lean_closure_set(v___f_7018_, 6, v_params_7007_);
lean_closure_set(v___f_7018_, 7, v_matcherLevels_7006_);
v___x_7019_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(v_matcherApp_6998_, v___x_7013_, v___x_7015_, v___f_7010_, v___f_7018_, v___f_7014_, v___f_7011_, v___y_6999_, v___y_7000_, v___y_7001_, v___y_7002_);
return v___x_7019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___boxed(lean_object* v_matcherApp_7020_, lean_object* v___y_7021_, lean_object* v___y_7022_, lean_object* v___y_7023_, lean_object* v___y_7024_, lean_object* v___y_7025_){
_start:
{
lean_object* v_res_7026_; 
v_res_7026_ = l_Lean_Meta_MatcherApp_inferMatchType(v_matcherApp_7020_, v___y_7021_, v___y_7022_, v___y_7023_, v___y_7024_);
lean_dec(v___y_7024_);
lean_dec_ref(v___y_7023_);
lean_dec(v___y_7022_);
lean_dec_ref(v___y_7021_);
return v_res_7026_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(lean_object* v_a_7027_, lean_object* v_termAlt_7028_, lean_object* v_inst_7029_, lean_object* v_R_7030_, lean_object* v_a_7031_, lean_object* v_b_7032_, lean_object* v_c_7033_, lean_object* v___y_7034_, lean_object* v___y_7035_, lean_object* v___y_7036_, lean_object* v___y_7037_){
_start:
{
lean_object* v___x_7039_; 
v___x_7039_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_7027_, v_termAlt_7028_, v_a_7031_, v_b_7032_, v___y_7034_, v___y_7035_, v___y_7036_, v___y_7037_);
return v___x_7039_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___boxed(lean_object* v_a_7040_, lean_object* v_termAlt_7041_, lean_object* v_inst_7042_, lean_object* v_R_7043_, lean_object* v_a_7044_, lean_object* v_b_7045_, lean_object* v_c_7046_, lean_object* v___y_7047_, lean_object* v___y_7048_, lean_object* v___y_7049_, lean_object* v___y_7050_, lean_object* v___y_7051_){
_start:
{
lean_object* v_res_7052_; 
v_res_7052_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(v_a_7040_, v_termAlt_7041_, v_inst_7042_, v_R_7043_, v_a_7044_, v_b_7045_, v_c_7046_, v___y_7047_, v___y_7048_, v___y_7049_, v___y_7050_);
lean_dec(v___y_7050_);
lean_dec_ref(v___y_7049_);
lean_dec(v___y_7048_);
lean_dec_ref(v___y_7047_);
return v_res_7052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(lean_object* v_00_u03b1_7053_, lean_object* v_fvars_7054_, lean_object* v_names_7055_, lean_object* v_k_7056_, lean_object* v___y_7057_, lean_object* v___y_7058_, lean_object* v___y_7059_, lean_object* v___y_7060_){
_start:
{
lean_object* v___x_7062_; 
v___x_7062_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_fvars_7054_, v_names_7055_, v_k_7056_, v___y_7057_, v___y_7058_, v___y_7059_, v___y_7060_);
return v___x_7062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___boxed(lean_object* v_00_u03b1_7063_, lean_object* v_fvars_7064_, lean_object* v_names_7065_, lean_object* v_k_7066_, lean_object* v___y_7067_, lean_object* v___y_7068_, lean_object* v___y_7069_, lean_object* v___y_7070_, lean_object* v___y_7071_){
_start:
{
lean_object* v_res_7072_; 
v_res_7072_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(v_00_u03b1_7063_, v_fvars_7064_, v_names_7065_, v_k_7066_, v___y_7067_, v___y_7068_, v___y_7069_, v___y_7070_);
lean_dec(v___y_7070_);
lean_dec_ref(v___y_7069_);
lean_dec(v___y_7068_);
lean_dec_ref(v___y_7067_);
lean_dec_ref(v_names_7065_);
lean_dec_ref(v_fvars_7064_);
return v_res_7072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(lean_object* v_00_u03b1_7073_, lean_object* v_origAltType_7074_, lean_object* v_altInfo_7075_, lean_object* v_k_7076_, lean_object* v___y_7077_, lean_object* v___y_7078_, lean_object* v___y_7079_, lean_object* v___y_7080_){
_start:
{
lean_object* v___x_7082_; 
v___x_7082_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v_origAltType_7074_, v_altInfo_7075_, v_k_7076_, v___y_7077_, v___y_7078_, v___y_7079_, v___y_7080_);
return v___x_7082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___boxed(lean_object* v_00_u03b1_7083_, lean_object* v_origAltType_7084_, lean_object* v_altInfo_7085_, lean_object* v_k_7086_, lean_object* v___y_7087_, lean_object* v___y_7088_, lean_object* v___y_7089_, lean_object* v___y_7090_, lean_object* v___y_7091_){
_start:
{
lean_object* v_res_7092_; 
v_res_7092_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(v_00_u03b1_7083_, v_origAltType_7084_, v_altInfo_7085_, v_k_7086_, v___y_7087_, v___y_7088_, v___y_7089_, v___y_7090_);
lean_dec(v___y_7090_);
lean_dec_ref(v___y_7089_);
lean_dec(v___y_7088_);
lean_dec_ref(v___y_7087_);
return v_res_7092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(lean_object* v_declName_7093_, lean_object* v___y_7094_, lean_object* v___y_7095_, lean_object* v___y_7096_, lean_object* v___y_7097_){
_start:
{
lean_object* v___x_7099_; 
v___x_7099_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_declName_7093_, v___y_7097_);
return v___x_7099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___boxed(lean_object* v_declName_7100_, lean_object* v___y_7101_, lean_object* v___y_7102_, lean_object* v___y_7103_, lean_object* v___y_7104_, lean_object* v___y_7105_){
_start:
{
lean_object* v_res_7106_; 
v_res_7106_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(v_declName_7100_, v___y_7101_, v___y_7102_, v___y_7103_, v___y_7104_);
lean_dec(v___y_7104_);
lean_dec_ref(v___y_7103_);
lean_dec(v___y_7102_);
lean_dec_ref(v___y_7101_);
return v_res_7106_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(size_t v_sz_7107_, size_t v_i_7108_, lean_object* v_bs_7109_, lean_object* v___y_7110_, lean_object* v___y_7111_, lean_object* v___y_7112_, lean_object* v___y_7113_){
_start:
{
lean_object* v___x_7115_; 
v___x_7115_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_7107_, v_i_7108_, v_bs_7109_, v___y_7110_, v___y_7112_, v___y_7113_);
return v___x_7115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed(lean_object* v_sz_7116_, lean_object* v_i_7117_, lean_object* v_bs_7118_, lean_object* v___y_7119_, lean_object* v___y_7120_, lean_object* v___y_7121_, lean_object* v___y_7122_, lean_object* v___y_7123_){
_start:
{
size_t v_sz_boxed_7124_; size_t v_i_boxed_7125_; lean_object* v_res_7126_; 
v_sz_boxed_7124_ = lean_unbox_usize(v_sz_7116_);
lean_dec(v_sz_7116_);
v_i_boxed_7125_ = lean_unbox_usize(v_i_7117_);
lean_dec(v_i_7117_);
v_res_7126_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(v_sz_boxed_7124_, v_i_boxed_7125_, v_bs_7118_, v___y_7119_, v___y_7120_, v___y_7121_, v___y_7122_);
lean_dec(v___y_7122_);
lean_dec_ref(v___y_7121_);
lean_dec(v___y_7120_);
lean_dec_ref(v___y_7119_);
return v_res_7126_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(lean_object* v_upperBound_7127_, lean_object* v_onAlt_7128_, lean_object* v_extraEqualities_7129_, lean_object* v_inst_7130_, lean_object* v_R_7131_, lean_object* v_a_7132_, lean_object* v_b_7133_, lean_object* v_c_7134_, lean_object* v___y_7135_, lean_object* v___y_7136_, lean_object* v___y_7137_, lean_object* v___y_7138_){
_start:
{
lean_object* v___x_7140_; 
v___x_7140_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v_upperBound_7127_, v_onAlt_7128_, v_extraEqualities_7129_, v_a_7132_, v_b_7133_, v___y_7135_, v___y_7136_, v___y_7137_, v___y_7138_);
return v___x_7140_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___boxed(lean_object* v_upperBound_7141_, lean_object* v_onAlt_7142_, lean_object* v_extraEqualities_7143_, lean_object* v_inst_7144_, lean_object* v_R_7145_, lean_object* v_a_7146_, lean_object* v_b_7147_, lean_object* v_c_7148_, lean_object* v___y_7149_, lean_object* v___y_7150_, lean_object* v___y_7151_, lean_object* v___y_7152_, lean_object* v___y_7153_){
_start:
{
lean_object* v_res_7154_; 
v_res_7154_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(v_upperBound_7141_, v_onAlt_7142_, v_extraEqualities_7143_, v_inst_7144_, v_R_7145_, v_a_7146_, v_b_7147_, v_c_7148_, v___y_7149_, v___y_7150_, v___y_7151_, v___y_7152_);
lean_dec(v___y_7152_);
lean_dec_ref(v___y_7151_);
lean_dec(v___y_7150_);
lean_dec_ref(v___y_7149_);
lean_dec(v_upperBound_7141_);
return v_res_7154_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(lean_object* v_upperBound_7155_, lean_object* v_onAlt_7156_, uint8_t v_useSplitter_7157_, lean_object* v_extraEqualities_7158_, lean_object* v_numDiscrEqs_7159_, lean_object* v_inst_7160_, lean_object* v_R_7161_, lean_object* v_a_7162_, lean_object* v_b_7163_, lean_object* v_c_7164_, lean_object* v___y_7165_, lean_object* v___y_7166_, lean_object* v___y_7167_, lean_object* v___y_7168_){
_start:
{
lean_object* v___x_7170_; 
v___x_7170_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v_upperBound_7155_, v_onAlt_7156_, v_useSplitter_7157_, v_extraEqualities_7158_, v_numDiscrEqs_7159_, v_a_7162_, v_b_7163_, v___y_7165_, v___y_7166_, v___y_7167_, v___y_7168_);
return v___x_7170_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___boxed(lean_object* v_upperBound_7171_, lean_object* v_onAlt_7172_, lean_object* v_useSplitter_7173_, lean_object* v_extraEqualities_7174_, lean_object* v_numDiscrEqs_7175_, lean_object* v_inst_7176_, lean_object* v_R_7177_, lean_object* v_a_7178_, lean_object* v_b_7179_, lean_object* v_c_7180_, lean_object* v___y_7181_, lean_object* v___y_7182_, lean_object* v___y_7183_, lean_object* v___y_7184_, lean_object* v___y_7185_){
_start:
{
uint8_t v_useSplitter_boxed_7186_; lean_object* v_res_7187_; 
v_useSplitter_boxed_7186_ = lean_unbox(v_useSplitter_7173_);
v_res_7187_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(v_upperBound_7171_, v_onAlt_7172_, v_useSplitter_boxed_7186_, v_extraEqualities_7174_, v_numDiscrEqs_7175_, v_inst_7176_, v_R_7177_, v_a_7178_, v_b_7179_, v_c_7180_, v___y_7181_, v___y_7182_, v___y_7183_, v___y_7184_);
lean_dec(v___y_7184_);
lean_dec_ref(v___y_7183_);
lean_dec(v___y_7182_);
lean_dec_ref(v___y_7181_);
lean_dec(v_upperBound_7171_);
return v_res_7187_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_MatcherApp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
}
#ifdef __cplusplus
}
#endif
