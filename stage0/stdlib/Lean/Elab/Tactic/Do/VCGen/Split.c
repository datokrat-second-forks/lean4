// Lean compiler output
// Module: Lean.Elab.Tactic.Do.VCGen.Split
// Imports: public import Lean.Meta.Tactic.Simp.Types public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Data.Array import Lean.Meta.Match.Rewrite import Lean.Meta.Tactic.Simp.Rewrite import Lean.Meta.Tactic.Assumption
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
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
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_etaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Array_mask___redArg(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_abstractM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withLocalDeclsDND___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withLocalDeclsD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_rwIfWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rwMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
lean_object* l_Lean_Meta_Simp_simpMatchDiscrs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_resTy(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_altInfos(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_expr(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 154, 90, 102, 217, 192, 49, 255)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 228, 43, 115, 146, 126, 91, 53)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dec"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 11, 154, 178, 201, 214, 183, 192)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 128, 245, 49, 225, 62, 36, 86)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "discr"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 61, 20, 168, 108, 94, 13, 165)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_etaExpand___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__7_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__14_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(38, 183, 255, 58, 84, 31, 100, 5)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__17_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__18;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__19;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__22;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__23_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isFalse"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 70, 3, 12, 31, 103, 230, 247)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isTrue"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 82, 240, 34, 69, 121, 64, 234)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dcond"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Match.MatcherApp.Basic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.matchMatcherApp\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Failed to find proof for if condition "};
static const lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Failed to find proof for cond condition "};
static const lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
default: 
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx(v_x_6_);
lean_dec_ref(v_x_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(lean_object* v_t_8_, lean_object* v_k_9_){
_start:
{
lean_object* v_e_10_; lean_object* v___x_11_; 
v_e_10_ = lean_ctor_get(v_t_8_, 0);
lean_inc_ref(v_e_10_);
lean_dec_ref(v_t_8_);
v___x_11_ = lean_apply_1(v_k_9_, v_e_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim___redArg(lean_object* v_t_24_, lean_object* v_ite_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_24_, v_ite_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_ite_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_28_, v_ite_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim___redArg(lean_object* v_t_32_, lean_object* v_dite_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_32_, v_dite_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_dite_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_36_, v_dite_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim___redArg(lean_object* v_t_40_, lean_object* v_cond_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_40_, v_cond_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_cond_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_44_, v_cond_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim___redArg(lean_object* v_t_48_, lean_object* v_matcher_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_48_, v_matcher_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim(lean_object* v_motive_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_matcher_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_52_, v_matcher_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_box(0);
v___x_60_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1));
v___x_61_ = l_Lean_Expr_const___override(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2, &l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2_once, _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2);
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3, &l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3_once, _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo(void){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default;
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
lean_object* v_zero_68_; uint8_t v_isZero_69_; 
v_zero_68_ = lean_unsigned_to_nat(0u);
v_isZero_69_ = lean_nat_dec_eq(v_x_66_, v_zero_68_);
if (v_isZero_69_ == 1)
{
lean_dec(v_x_66_);
return v_x_67_;
}
else
{
lean_object* v_one_70_; lean_object* v_n_71_; 
v_one_70_ = lean_unsigned_to_nat(1u);
v_n_71_ = lean_nat_sub(v_x_66_, v_one_70_);
lean_dec(v_x_66_);
if (lean_obj_tag(v_x_67_) == 1)
{
lean_object* v_val_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_83_; 
v_val_72_ = lean_ctor_get(v_x_67_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v_x_67_);
if (v_isSharedCheck_83_ == 0)
{
v___x_74_ = v_x_67_;
v_isShared_75_ = v_isSharedCheck_83_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_val_72_);
lean_dec(v_x_67_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_83_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
if (lean_obj_tag(v_val_72_) == 6)
{
lean_object* v_body_76_; lean_object* v___x_78_; 
v_body_76_ = lean_ctor_get(v_val_72_, 2);
lean_inc_ref(v_body_76_);
lean_dec_ref_known(v_val_72_, 3);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 0, v_body_76_);
v___x_78_ = v___x_74_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_body_76_);
v___x_78_ = v_reuseFailAlloc_80_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
v_x_66_ = v_n_71_;
v_x_67_ = v___x_78_;
goto _start;
}
}
else
{
lean_object* v___x_81_; 
lean_del_object(v___x_74_);
lean_dec(v_val_72_);
v___x_81_ = lean_box(0);
v_x_66_ = v_n_71_;
v_x_67_ = v___x_81_;
goto _start;
}
}
}
else
{
lean_object* v___x_84_; 
lean_dec(v_x_67_);
v___x_84_ = lean_box(0);
v_x_66_ = v_n_71_;
v_x_67_ = v___x_84_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_resTy(lean_object* v_info_86_){
_start:
{
lean_object* v_e_88_; 
if (lean_obj_tag(v_info_86_) == 3)
{
lean_object* v_matcherApp_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_111_; 
v_matcherApp_94_ = lean_ctor_get(v_info_86_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v_info_86_);
if (v_isSharedCheck_111_ == 0)
{
v___x_96_ = v_info_86_;
v_isShared_97_ = v_isSharedCheck_111_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_matcherApp_94_);
lean_dec(v_info_86_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_111_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v_toMatcherInfo_98_; lean_object* v_motive_99_; lean_object* v_discrInfos_100_; lean_object* v___x_101_; lean_object* v___x_103_; 
v_toMatcherInfo_98_ = lean_ctor_get(v_matcherApp_94_, 0);
lean_inc_ref(v_toMatcherInfo_98_);
v_motive_99_ = lean_ctor_get(v_matcherApp_94_, 4);
lean_inc_ref_n(v_motive_99_, 2);
lean_dec_ref(v_matcherApp_94_);
v_discrInfos_100_ = lean_ctor_get(v_toMatcherInfo_98_, 4);
lean_inc_ref(v_discrInfos_100_);
lean_dec_ref(v_toMatcherInfo_98_);
v___x_101_ = lean_array_get_size(v_discrInfos_100_);
lean_dec_ref(v_discrInfos_100_);
if (v_isShared_97_ == 0)
{
lean_ctor_set_tag(v___x_96_, 1);
lean_ctor_set(v___x_96_, 0, v_motive_99_);
v___x_103_ = v___x_96_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_motive_99_);
v___x_103_ = v_reuseFailAlloc_110_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
lean_object* v___x_104_; 
v___x_104_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(v___x_101_, v___x_103_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_dec_ref(v_motive_99_);
return v___x_104_;
}
else
{
lean_object* v_val_105_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v_val_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_val_105_);
v___x_106_ = l_Lean_Expr_looseBVarRange(v_val_105_);
lean_dec(v_val_105_);
v___x_107_ = l_Lean_Expr_looseBVarRange(v_motive_99_);
lean_dec_ref(v_motive_99_);
v___x_108_ = lean_nat_dec_eq(v___x_106_, v___x_107_);
lean_dec(v___x_107_);
lean_dec(v___x_106_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; 
lean_dec_ref_known(v___x_104_, 1);
v___x_109_ = lean_box(0);
return v___x_109_;
}
else
{
return v___x_104_;
}
}
}
}
}
else
{
lean_object* v_e_112_; 
v_e_112_ = lean_ctor_get(v_info_86_, 0);
lean_inc_ref(v_e_112_);
lean_dec_ref(v_info_86_);
v_e_88_ = v_e_112_;
goto v___jp_87_;
}
v___jp_87_:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_89_ = l_Lean_Expr_getAppNumArgs(v_e_88_);
v___x_90_ = lean_unsigned_to_nat(1u);
v___x_91_ = lean_nat_sub(v___x_89_, v___x_90_);
lean_dec(v___x_89_);
v___x_92_ = l_Lean_Expr_getRevArg_x21(v_e_88_, v___x_91_);
lean_dec_ref(v_e_88_);
v___x_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(lean_object* v_matcherApp_113_, size_t v_sz_114_, size_t v_i_115_, lean_object* v_bs_116_){
_start:
{
uint8_t v___x_117_; 
v___x_117_ = lean_usize_dec_lt(v_i_115_, v_sz_114_);
if (v___x_117_ == 0)
{
return v_bs_116_;
}
else
{
lean_object* v_v_118_; lean_object* v_alts_119_; lean_object* v___x_120_; lean_object* v_bs_x27_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; size_t v___x_126_; size_t v___x_127_; lean_object* v___x_128_; 
v_v_118_ = lean_array_uget(v_bs_116_, v_i_115_);
v_alts_119_ = lean_ctor_get(v_matcherApp_113_, 6);
v___x_120_ = lean_unsigned_to_nat(0u);
v_bs_x27_121_ = lean_array_uset(v_bs_116_, v_i_115_, v___x_120_);
v___x_122_ = l_Lean_instInhabitedExpr;
v___x_123_ = lean_usize_to_nat(v_i_115_);
v___x_124_ = lean_array_get_borrowed(v___x_122_, v_alts_119_, v___x_123_);
lean_dec(v___x_123_);
lean_inc(v___x_124_);
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v_v_118_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = ((size_t)1ULL);
v___x_127_ = lean_usize_add(v_i_115_, v___x_126_);
v___x_128_ = lean_array_uset(v_bs_x27_121_, v_i_115_, v___x_125_);
v_i_115_ = v___x_127_;
v_bs_116_ = v___x_128_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg___boxed(lean_object* v_matcherApp_130_, lean_object* v_sz_131_, lean_object* v_i_132_, lean_object* v_bs_133_){
_start:
{
size_t v_sz_boxed_134_; size_t v_i_boxed_135_; lean_object* v_res_136_; 
v_sz_boxed_134_ = lean_unbox_usize(v_sz_131_);
lean_dec(v_sz_131_);
v_i_boxed_135_ = lean_unbox_usize(v_i_132_);
lean_dec(v_i_132_);
v_res_136_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_130_, v_sz_boxed_134_, v_i_boxed_135_, v_bs_133_);
lean_dec_ref(v_matcherApp_130_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_altInfos(lean_object* v_info_137_){
_start:
{
switch(lean_obj_tag(v_info_137_))
{
case 0:
{
lean_object* v_e_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_e_138_ = lean_ctor_get(v_info_137_, 0);
lean_inc_ref(v_e_138_);
lean_dec_ref_known(v_info_137_, 1);
v___x_139_ = lean_unsigned_to_nat(0u);
v___x_140_ = lean_unsigned_to_nat(3u);
v___x_141_ = l_Lean_Expr_getAppNumArgs(v_e_138_);
v___x_142_ = lean_nat_sub(v___x_141_, v___x_140_);
v___x_143_ = lean_unsigned_to_nat(1u);
v___x_144_ = lean_nat_sub(v___x_142_, v___x_143_);
lean_dec(v___x_142_);
v___x_145_ = l_Lean_Expr_getRevArg_x21(v_e_138_, v___x_144_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_139_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = lean_unsigned_to_nat(4u);
v___x_148_ = lean_nat_sub(v___x_141_, v___x_147_);
lean_dec(v___x_141_);
v___x_149_ = lean_nat_sub(v___x_148_, v___x_143_);
lean_dec(v___x_148_);
v___x_150_ = l_Lean_Expr_getRevArg_x21(v_e_138_, v___x_149_);
lean_dec_ref(v_e_138_);
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_139_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
v___x_152_ = lean_unsigned_to_nat(2u);
v___x_153_ = lean_mk_empty_array_with_capacity(v___x_152_);
v___x_154_ = lean_array_push(v___x_153_, v___x_146_);
v___x_155_ = lean_array_push(v___x_154_, v___x_151_);
return v___x_155_;
}
case 1:
{
lean_object* v_e_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v_e_156_ = lean_ctor_get(v_info_137_, 0);
lean_inc_ref(v_e_156_);
lean_dec_ref_known(v_info_137_, 1);
v___x_157_ = lean_unsigned_to_nat(1u);
v___x_158_ = lean_unsigned_to_nat(3u);
v___x_159_ = l_Lean_Expr_getAppNumArgs(v_e_156_);
v___x_160_ = lean_nat_sub(v___x_159_, v___x_158_);
v___x_161_ = lean_nat_sub(v___x_160_, v___x_157_);
lean_dec(v___x_160_);
v___x_162_ = l_Lean_Expr_getRevArg_x21(v_e_156_, v___x_161_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_157_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = lean_unsigned_to_nat(4u);
v___x_165_ = lean_nat_sub(v___x_159_, v___x_164_);
lean_dec(v___x_159_);
v___x_166_ = lean_nat_sub(v___x_165_, v___x_157_);
lean_dec(v___x_165_);
v___x_167_ = l_Lean_Expr_getRevArg_x21(v_e_156_, v___x_166_);
lean_dec_ref(v_e_156_);
v___x_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_157_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
v___x_169_ = lean_unsigned_to_nat(2u);
v___x_170_ = lean_mk_empty_array_with_capacity(v___x_169_);
v___x_171_ = lean_array_push(v___x_170_, v___x_163_);
v___x_172_ = lean_array_push(v___x_171_, v___x_168_);
return v___x_172_;
}
case 2:
{
lean_object* v_e_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v_e_173_ = lean_ctor_get(v_info_137_, 0);
lean_inc_ref(v_e_173_);
lean_dec_ref_known(v_info_137_, 1);
v___x_174_ = lean_unsigned_to_nat(0u);
v___x_175_ = lean_unsigned_to_nat(2u);
v___x_176_ = l_Lean_Expr_getAppNumArgs(v_e_173_);
v___x_177_ = lean_nat_sub(v___x_176_, v___x_175_);
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = lean_nat_sub(v___x_177_, v___x_178_);
lean_dec(v___x_177_);
v___x_180_ = l_Lean_Expr_getRevArg_x21(v_e_173_, v___x_179_);
v___x_181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_174_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = lean_unsigned_to_nat(3u);
v___x_183_ = lean_nat_sub(v___x_176_, v___x_182_);
lean_dec(v___x_176_);
v___x_184_ = lean_nat_sub(v___x_183_, v___x_178_);
lean_dec(v___x_183_);
v___x_185_ = l_Lean_Expr_getRevArg_x21(v_e_173_, v___x_184_);
lean_dec_ref(v_e_173_);
v___x_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_174_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = lean_mk_empty_array_with_capacity(v___x_175_);
v___x_188_ = lean_array_push(v___x_187_, v___x_181_);
v___x_189_ = lean_array_push(v___x_188_, v___x_186_);
return v___x_189_;
}
default: 
{
lean_object* v_matcherApp_190_; lean_object* v___x_191_; size_t v_sz_192_; size_t v___x_193_; lean_object* v___x_194_; 
v_matcherApp_190_ = lean_ctor_get(v_info_137_, 0);
lean_inc_ref_n(v_matcherApp_190_, 2);
lean_dec_ref_known(v_info_137_, 1);
v___x_191_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_190_);
v_sz_192_ = lean_array_size(v___x_191_);
v___x_193_ = ((size_t)0ULL);
v___x_194_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_190_, v_sz_192_, v___x_193_, v___x_191_);
lean_dec_ref(v_matcherApp_190_);
return v___x_194_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(lean_object* v_matcherApp_195_, lean_object* v_as_196_, size_t v_sz_197_, size_t v_i_198_, lean_object* v_bs_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_195_, v_sz_197_, v_i_198_, v_bs_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___boxed(lean_object* v_matcherApp_201_, lean_object* v_as_202_, lean_object* v_sz_203_, lean_object* v_i_204_, lean_object* v_bs_205_){
_start:
{
size_t v_sz_boxed_206_; size_t v_i_boxed_207_; lean_object* v_res_208_; 
v_sz_boxed_206_ = lean_unbox_usize(v_sz_203_);
lean_dec(v_sz_203_);
v_i_boxed_207_ = lean_unbox_usize(v_i_204_);
lean_dec(v_i_204_);
v_res_208_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(v_matcherApp_201_, v_as_202_, v_sz_boxed_206_, v_i_boxed_207_, v_bs_205_);
lean_dec_ref(v_as_202_);
lean_dec_ref(v_matcherApp_201_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_expr(lean_object* v_x_209_){
_start:
{
if (lean_obj_tag(v_x_209_) == 3)
{
lean_object* v_matcherApp_210_; lean_object* v___x_211_; 
v_matcherApp_210_ = lean_ctor_get(v_x_209_, 0);
lean_inc_ref(v_matcherApp_210_);
lean_dec_ref_known(v_x_209_, 1);
v___x_211_ = l_Lean_Meta_MatcherApp_toExpr(v_matcherApp_210_);
return v___x_211_;
}
else
{
lean_object* v_e_212_; 
v_e_212_ = lean_ctor_get(v_x_209_, 0);
lean_inc_ref(v_e_212_);
lean_dec_ref(v_x_209_);
return v_e_212_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0(lean_object* v___x_216_, lean_object* v_resTy_217_, lean_object* v_c_218_, lean_object* v_dec_219_, lean_object* v_t_220_, lean_object* v_e_221_, lean_object* v_k_222_, lean_object* v_u_223_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_224_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_225_, 0, v_u_223_);
lean_ctor_set(v___x_225_, 1, v___x_216_);
v___x_226_ = l_Lean_mkConst(v___x_224_, v___x_225_);
lean_inc_ref(v_e_221_);
lean_inc_ref(v_t_220_);
lean_inc_ref(v_dec_219_);
lean_inc_ref(v_c_218_);
v___x_227_ = l_Lean_mkApp5(v___x_226_, v_resTy_217_, v_c_218_, v_dec_219_, v_t_220_, v_e_221_);
v___x_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
v___x_229_ = lean_unsigned_to_nat(4u);
v___x_230_ = lean_mk_empty_array_with_capacity(v___x_229_);
v___x_231_ = lean_array_push(v___x_230_, v_c_218_);
v___x_232_ = lean_array_push(v___x_231_, v_dec_219_);
v___x_233_ = lean_array_push(v___x_232_, v_t_220_);
v___x_234_ = lean_array_push(v___x_233_, v_e_221_);
v___x_235_ = lean_apply_2(v_k_222_, v___x_228_, v___x_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1(lean_object* v___x_236_, lean_object* v_resTy_237_, lean_object* v_c_238_, lean_object* v_dec_239_, lean_object* v_t_240_, lean_object* v_k_241_, lean_object* v_inst_242_, lean_object* v_toBind_243_, lean_object* v_e_244_){
_start:
{
lean_object* v___f_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
lean_inc_ref(v_resTy_237_);
v___f_245_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0), 8, 7);
lean_closure_set(v___f_245_, 0, v___x_236_);
lean_closure_set(v___f_245_, 1, v_resTy_237_);
lean_closure_set(v___f_245_, 2, v_c_238_);
lean_closure_set(v___f_245_, 3, v_dec_239_);
lean_closure_set(v___f_245_, 4, v_t_240_);
lean_closure_set(v___f_245_, 5, v_e_244_);
lean_closure_set(v___f_245_, 6, v_k_241_);
v___x_246_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_246_, 0, v_resTy_237_);
v___x_247_ = lean_apply_2(v_inst_242_, lean_box(0), v___x_246_);
v___x_248_ = lean_apply_4(v_toBind_243_, lean_box(0), lean_box(0), v___x_247_, v___f_245_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2(lean_object* v___x_252_, lean_object* v_resTy_253_, lean_object* v_c_254_, lean_object* v_dec_255_, lean_object* v_k_256_, lean_object* v_inst_257_, lean_object* v_toBind_258_, lean_object* v_inst_259_, lean_object* v_inst_260_, lean_object* v_t_261_){
_start:
{
lean_object* v___f_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
lean_inc_ref(v_resTy_253_);
v___f_262_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1), 9, 8);
lean_closure_set(v___f_262_, 0, v___x_252_);
lean_closure_set(v___f_262_, 1, v_resTy_253_);
lean_closure_set(v___f_262_, 2, v_c_254_);
lean_closure_set(v___f_262_, 3, v_dec_255_);
lean_closure_set(v___f_262_, 4, v_t_261_);
lean_closure_set(v___f_262_, 5, v_k_256_);
lean_closure_set(v___f_262_, 6, v_inst_257_);
lean_closure_set(v___f_262_, 7, v_toBind_258_);
v___x_263_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_264_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_259_, v_inst_260_, v___x_263_, v_resTy_253_, v___f_262_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3(lean_object* v___x_268_, lean_object* v_resTy_269_, lean_object* v_c_270_, lean_object* v_k_271_, lean_object* v_inst_272_, lean_object* v_toBind_273_, lean_object* v_inst_274_, lean_object* v_inst_275_, lean_object* v_dec_276_){
_start:
{
lean_object* v___f_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
lean_inc_ref(v_inst_275_);
lean_inc_ref(v_inst_274_);
lean_inc_ref(v_resTy_269_);
v___f_277_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2), 10, 9);
lean_closure_set(v___f_277_, 0, v___x_268_);
lean_closure_set(v___f_277_, 1, v_resTy_269_);
lean_closure_set(v___f_277_, 2, v_c_270_);
lean_closure_set(v___f_277_, 3, v_dec_276_);
lean_closure_set(v___f_277_, 4, v_k_271_);
lean_closure_set(v___f_277_, 5, v_inst_272_);
lean_closure_set(v___f_277_, 6, v_toBind_273_);
lean_closure_set(v___f_277_, 7, v_inst_274_);
lean_closure_set(v___f_277_, 8, v_inst_275_);
v___x_278_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_279_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_274_, v_inst_275_, v___x_278_, v_resTy_269_, v___f_277_);
return v___x_279_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_286_ = lean_box(0);
v___x_287_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3));
v___x_288_ = l_Lean_mkConst(v___x_287_, v___x_286_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4(lean_object* v_resTy_289_, lean_object* v_k_290_, lean_object* v_inst_291_, lean_object* v_toBind_292_, lean_object* v_inst_293_, lean_object* v_inst_294_, lean_object* v_c_295_){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___f_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_296_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_297_ = lean_box(0);
lean_inc_ref(v_inst_294_);
lean_inc_ref(v_inst_293_);
lean_inc_ref(v_c_295_);
v___f_298_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3), 9, 8);
lean_closure_set(v___f_298_, 0, v___x_297_);
lean_closure_set(v___f_298_, 1, v_resTy_289_);
lean_closure_set(v___f_298_, 2, v_c_295_);
lean_closure_set(v___f_298_, 3, v_k_290_);
lean_closure_set(v___f_298_, 4, v_inst_291_);
lean_closure_set(v___f_298_, 5, v_toBind_292_);
lean_closure_set(v___f_298_, 6, v_inst_293_);
lean_closure_set(v___f_298_, 7, v_inst_294_);
v___x_299_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4);
v___x_300_ = l_Lean_Expr_app___override(v___x_299_, v_c_295_);
v___x_301_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_293_, v_inst_294_, v___x_296_, v___x_300_, v___f_298_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(lean_object* v_c_302_, lean_object* v_resTy_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = l_Lean_mkArrow(v_c_302_, v_resTy_303_, v___y_306_, v___y_307_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed(lean_object* v_c_310_, lean_object* v_resTy_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(v_c_310_, v_resTy_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
lean_dec(v___y_315_);
lean_dec_ref(v___y_314_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6(lean_object* v___x_321_, lean_object* v_resTy_322_, lean_object* v_c_323_, lean_object* v_dec_324_, lean_object* v_t_325_, lean_object* v_e_326_, lean_object* v_k_327_, lean_object* v_u_328_){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_329_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_330_, 0, v_u_328_);
lean_ctor_set(v___x_330_, 1, v___x_321_);
v___x_331_ = l_Lean_mkConst(v___x_329_, v___x_330_);
lean_inc_ref(v_e_326_);
lean_inc_ref(v_t_325_);
lean_inc_ref(v_dec_324_);
lean_inc_ref(v_c_323_);
v___x_332_ = l_Lean_mkApp5(v___x_331_, v_resTy_322_, v_c_323_, v_dec_324_, v_t_325_, v_e_326_);
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
v___x_334_ = lean_unsigned_to_nat(4u);
v___x_335_ = lean_mk_empty_array_with_capacity(v___x_334_);
v___x_336_ = lean_array_push(v___x_335_, v_c_323_);
v___x_337_ = lean_array_push(v___x_336_, v_dec_324_);
v___x_338_ = lean_array_push(v___x_337_, v_t_325_);
v___x_339_ = lean_array_push(v___x_338_, v_e_326_);
v___x_340_ = lean_apply_2(v_k_327_, v___x_333_, v___x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7(lean_object* v___x_341_, lean_object* v_resTy_342_, lean_object* v_c_343_, lean_object* v_dec_344_, lean_object* v_t_345_, lean_object* v_k_346_, lean_object* v_inst_347_, lean_object* v_toBind_348_, lean_object* v_e_349_){
_start:
{
lean_object* v___f_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
lean_inc_ref(v_resTy_342_);
v___f_350_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6), 8, 7);
lean_closure_set(v___f_350_, 0, v___x_341_);
lean_closure_set(v___f_350_, 1, v_resTy_342_);
lean_closure_set(v___f_350_, 2, v_c_343_);
lean_closure_set(v___f_350_, 3, v_dec_344_);
lean_closure_set(v___f_350_, 4, v_t_345_);
lean_closure_set(v___f_350_, 5, v_e_349_);
lean_closure_set(v___f_350_, 6, v_k_346_);
v___x_351_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_351_, 0, v_resTy_342_);
v___x_352_ = lean_apply_2(v_inst_347_, lean_box(0), v___x_351_);
v___x_353_ = lean_apply_4(v_toBind_348_, lean_box(0), lean_box(0), v___x_352_, v___f_350_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8(lean_object* v___x_354_, lean_object* v_resTy_355_, lean_object* v_c_356_, lean_object* v_dec_357_, lean_object* v_k_358_, lean_object* v_inst_359_, lean_object* v_toBind_360_, lean_object* v_inst_361_, lean_object* v_inst_362_, lean_object* v_eTy_363_, lean_object* v_t_364_){
_start:
{
lean_object* v___f_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___f_365_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7), 9, 8);
lean_closure_set(v___f_365_, 0, v___x_354_);
lean_closure_set(v___f_365_, 1, v_resTy_355_);
lean_closure_set(v___f_365_, 2, v_c_356_);
lean_closure_set(v___f_365_, 3, v_dec_357_);
lean_closure_set(v___f_365_, 4, v_t_364_);
lean_closure_set(v___f_365_, 5, v_k_358_);
lean_closure_set(v___f_365_, 6, v_inst_359_);
lean_closure_set(v___f_365_, 7, v_toBind_360_);
v___x_366_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_367_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_361_, v_inst_362_, v___x_366_, v_eTy_363_, v___f_365_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9(lean_object* v___x_368_, lean_object* v_resTy_369_, lean_object* v_c_370_, lean_object* v_dec_371_, lean_object* v_k_372_, lean_object* v_inst_373_, lean_object* v_toBind_374_, lean_object* v_inst_375_, lean_object* v_inst_376_, lean_object* v_tTy_377_, lean_object* v_eTy_378_){
_start:
{
lean_object* v___f_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
lean_inc_ref(v_inst_376_);
lean_inc_ref(v_inst_375_);
v___f_379_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8), 11, 10);
lean_closure_set(v___f_379_, 0, v___x_368_);
lean_closure_set(v___f_379_, 1, v_resTy_369_);
lean_closure_set(v___f_379_, 2, v_c_370_);
lean_closure_set(v___f_379_, 3, v_dec_371_);
lean_closure_set(v___f_379_, 4, v_k_372_);
lean_closure_set(v___f_379_, 5, v_inst_373_);
lean_closure_set(v___f_379_, 6, v_toBind_374_);
lean_closure_set(v___f_379_, 7, v_inst_375_);
lean_closure_set(v___f_379_, 8, v_inst_376_);
lean_closure_set(v___f_379_, 9, v_eTy_378_);
v___x_380_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_381_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_375_, v_inst_376_, v___x_380_, v_tTy_377_, v___f_379_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(lean_object* v___x_382_, lean_object* v_resTy_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_mkArrow(v___x_382_, v_resTy_383_, v___y_386_, v___y_387_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed(lean_object* v___x_390_, lean_object* v_resTy_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(v___x_390_, v_resTy_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11(lean_object* v___x_398_, lean_object* v_resTy_399_, lean_object* v_c_400_, lean_object* v_dec_401_, lean_object* v_k_402_, lean_object* v_inst_403_, lean_object* v_toBind_404_, lean_object* v_inst_405_, lean_object* v_inst_406_, lean_object* v_tTy_407_){
_start:
{
lean_object* v___f_408_; lean_object* v___x_409_; lean_object* v___f_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
lean_inc(v_toBind_404_);
lean_inc(v_inst_403_);
lean_inc_ref(v_c_400_);
lean_inc_ref(v_resTy_399_);
v___f_408_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9), 11, 10);
lean_closure_set(v___f_408_, 0, v___x_398_);
lean_closure_set(v___f_408_, 1, v_resTy_399_);
lean_closure_set(v___f_408_, 2, v_c_400_);
lean_closure_set(v___f_408_, 3, v_dec_401_);
lean_closure_set(v___f_408_, 4, v_k_402_);
lean_closure_set(v___f_408_, 5, v_inst_403_);
lean_closure_set(v___f_408_, 6, v_toBind_404_);
lean_closure_set(v___f_408_, 7, v_inst_405_);
lean_closure_set(v___f_408_, 8, v_inst_406_);
lean_closure_set(v___f_408_, 9, v_tTy_407_);
v___x_409_ = l_Lean_mkNot(v_c_400_);
v___f_410_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed), 7, 2);
lean_closure_set(v___f_410_, 0, v___x_409_);
lean_closure_set(v___f_410_, 1, v_resTy_399_);
v___x_411_ = lean_apply_2(v_inst_403_, lean_box(0), v___f_410_);
v___x_412_ = lean_apply_4(v_toBind_404_, lean_box(0), lean_box(0), v___x_411_, v___f_408_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12(lean_object* v___x_413_, lean_object* v_resTy_414_, lean_object* v_c_415_, lean_object* v_k_416_, lean_object* v_inst_417_, lean_object* v_toBind_418_, lean_object* v_inst_419_, lean_object* v_inst_420_, lean_object* v___f_421_, lean_object* v_dec_422_){
_start:
{
lean_object* v___f_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
lean_inc(v_toBind_418_);
lean_inc(v_inst_417_);
v___f_423_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11), 10, 9);
lean_closure_set(v___f_423_, 0, v___x_413_);
lean_closure_set(v___f_423_, 1, v_resTy_414_);
lean_closure_set(v___f_423_, 2, v_c_415_);
lean_closure_set(v___f_423_, 3, v_dec_422_);
lean_closure_set(v___f_423_, 4, v_k_416_);
lean_closure_set(v___f_423_, 5, v_inst_417_);
lean_closure_set(v___f_423_, 6, v_toBind_418_);
lean_closure_set(v___f_423_, 7, v_inst_419_);
lean_closure_set(v___f_423_, 8, v_inst_420_);
v___x_424_ = lean_apply_2(v_inst_417_, lean_box(0), v___f_421_);
v___x_425_ = lean_apply_4(v_toBind_418_, lean_box(0), lean_box(0), v___x_424_, v___f_423_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13(lean_object* v_resTy_426_, lean_object* v_k_427_, lean_object* v_inst_428_, lean_object* v_toBind_429_, lean_object* v_inst_430_, lean_object* v_inst_431_, lean_object* v_c_432_){
_start:
{
lean_object* v___f_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___f_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
lean_inc_ref(v_resTy_426_);
lean_inc_ref_n(v_c_432_, 2);
v___f_433_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed), 7, 2);
lean_closure_set(v___f_433_, 0, v_c_432_);
lean_closure_set(v___f_433_, 1, v_resTy_426_);
v___x_434_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_435_ = lean_box(0);
lean_inc_ref(v_inst_431_);
lean_inc_ref(v_inst_430_);
v___f_436_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12), 10, 9);
lean_closure_set(v___f_436_, 0, v___x_435_);
lean_closure_set(v___f_436_, 1, v_resTy_426_);
lean_closure_set(v___f_436_, 2, v_c_432_);
lean_closure_set(v___f_436_, 3, v_k_427_);
lean_closure_set(v___f_436_, 4, v_inst_428_);
lean_closure_set(v___f_436_, 5, v_toBind_429_);
lean_closure_set(v___f_436_, 6, v_inst_430_);
lean_closure_set(v___f_436_, 7, v_inst_431_);
lean_closure_set(v___f_436_, 8, v___f_433_);
v___x_437_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4);
v___x_438_ = l_Lean_Expr_app___override(v___x_437_, v_c_432_);
v___x_439_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_430_, v_inst_431_, v___x_434_, v___x_438_, v___f_436_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14(lean_object* v___x_443_, lean_object* v_resTy_444_, lean_object* v_c_445_, lean_object* v_t_446_, lean_object* v_e_447_, lean_object* v_k_448_, lean_object* v_u_449_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_450_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_451_, 0, v_u_449_);
lean_ctor_set(v___x_451_, 1, v___x_443_);
v___x_452_ = l_Lean_mkConst(v___x_450_, v___x_451_);
lean_inc_ref(v_e_447_);
lean_inc_ref(v_t_446_);
lean_inc_ref(v_c_445_);
v___x_453_ = l_Lean_mkApp4(v___x_452_, v_resTy_444_, v_c_445_, v_t_446_, v_e_447_);
v___x_454_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
v___x_455_ = lean_unsigned_to_nat(3u);
v___x_456_ = lean_mk_empty_array_with_capacity(v___x_455_);
v___x_457_ = lean_array_push(v___x_456_, v_c_445_);
v___x_458_ = lean_array_push(v___x_457_, v_t_446_);
v___x_459_ = lean_array_push(v___x_458_, v_e_447_);
v___x_460_ = lean_apply_2(v_k_448_, v___x_454_, v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15(lean_object* v___x_461_, lean_object* v_resTy_462_, lean_object* v_c_463_, lean_object* v_t_464_, lean_object* v_k_465_, lean_object* v_inst_466_, lean_object* v_toBind_467_, lean_object* v_e_468_){
_start:
{
lean_object* v___f_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
lean_inc_ref(v_resTy_462_);
v___f_469_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14), 7, 6);
lean_closure_set(v___f_469_, 0, v___x_461_);
lean_closure_set(v___f_469_, 1, v_resTy_462_);
lean_closure_set(v___f_469_, 2, v_c_463_);
lean_closure_set(v___f_469_, 3, v_t_464_);
lean_closure_set(v___f_469_, 4, v_e_468_);
lean_closure_set(v___f_469_, 5, v_k_465_);
v___x_470_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_470_, 0, v_resTy_462_);
v___x_471_ = lean_apply_2(v_inst_466_, lean_box(0), v___x_470_);
v___x_472_ = lean_apply_4(v_toBind_467_, lean_box(0), lean_box(0), v___x_471_, v___f_469_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16(lean_object* v___x_473_, lean_object* v_resTy_474_, lean_object* v_c_475_, lean_object* v_k_476_, lean_object* v_inst_477_, lean_object* v_toBind_478_, lean_object* v_inst_479_, lean_object* v_inst_480_, lean_object* v_t_481_){
_start:
{
lean_object* v___f_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
lean_inc_ref(v_resTy_474_);
v___f_482_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15), 8, 7);
lean_closure_set(v___f_482_, 0, v___x_473_);
lean_closure_set(v___f_482_, 1, v_resTy_474_);
lean_closure_set(v___f_482_, 2, v_c_475_);
lean_closure_set(v___f_482_, 3, v_t_481_);
lean_closure_set(v___f_482_, 4, v_k_476_);
lean_closure_set(v___f_482_, 5, v_inst_477_);
lean_closure_set(v___f_482_, 6, v_toBind_478_);
v___x_483_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_484_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_479_, v_inst_480_, v___x_483_, v_resTy_474_, v___f_482_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17(lean_object* v___x_485_, lean_object* v_resTy_486_, lean_object* v_k_487_, lean_object* v_inst_488_, lean_object* v_toBind_489_, lean_object* v_inst_490_, lean_object* v_inst_491_, lean_object* v_c_492_){
_start:
{
lean_object* v___f_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
lean_inc_ref(v_inst_491_);
lean_inc_ref(v_inst_490_);
lean_inc_ref(v_resTy_486_);
v___f_493_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16), 9, 8);
lean_closure_set(v___f_493_, 0, v___x_485_);
lean_closure_set(v___f_493_, 1, v_resTy_486_);
lean_closure_set(v___f_493_, 2, v_c_492_);
lean_closure_set(v___f_493_, 3, v_k_487_);
lean_closure_set(v___f_493_, 4, v_inst_488_);
lean_closure_set(v___f_493_, 5, v_toBind_489_);
lean_closure_set(v___f_493_, 6, v_inst_490_);
lean_closure_set(v___f_493_, 7, v_inst_491_);
v___x_494_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_495_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_490_, v_inst_491_, v___x_494_, v_resTy_486_, v___f_493_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18(lean_object* v_resTy_496_, lean_object* v_motiveArgs_497_, lean_object* v_x_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
uint8_t v___x_504_; uint8_t v___x_505_; uint8_t v___x_506_; lean_object* v___x_507_; 
v___x_504_ = 0;
v___x_505_ = 1;
v___x_506_ = 1;
v___x_507_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_497_, v_resTy_496_, v___x_504_, v___x_505_, v___x_504_, v___x_505_, v___x_506_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18___boxed(lean_object* v_resTy_508_, lean_object* v_motiveArgs_509_, lean_object* v_x_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18(v_resTy_508_, v_motiveArgs_509_, v_x_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec_ref(v_x_510_);
lean_dec_ref(v_motiveArgs_509_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19(lean_object* v_i_520_, lean_object* v_a_521_, lean_object* v_x_522_){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_523_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___closed__1));
v___x_524_ = lean_unsigned_to_nat(1u);
v___x_525_ = lean_nat_add(v_i_520_, v___x_524_);
v___x_526_ = lean_name_append_index_after(v___x_523_, v___x_525_);
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
lean_ctor_set(v___x_527_, 1, v_a_521_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19___boxed(lean_object* v_i_528_, lean_object* v_a_529_, lean_object* v_x_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19(v_i_528_, v_a_529_, v_x_530_);
lean_dec(v_i_528_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20(lean_object* v_i_532_, lean_object* v___x_533_, lean_object* v_discrs_534_, lean_object* v_prior_535_, lean_object* v_next_536_, lean_object* v_acc_537_, lean_object* v_h_538_, lean_object* v_G_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v_a_546_; uint8_t v___x_550_; 
v___x_550_ = lean_nat_dec_lt(v_next_536_, v_i_532_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; 
lean_dec_ref(v_G_539_);
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v_acc_537_);
return v___x_551_;
}
else
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = lean_array_get_borrowed(v___x_533_, v_discrs_534_, v_next_536_);
v___x_553_ = l_Lean_Expr_isFVar(v___x_552_);
if (v___x_553_ == 0)
{
v_a_546_ = v_acc_537_;
goto v___jp_545_;
}
else
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = lean_array_get_borrowed(v___x_533_, v_prior_535_, v_next_536_);
lean_inc(v___x_552_);
v___x_555_ = l_Lean_Expr_replaceFVar(v_acc_537_, v___x_552_, v___x_554_);
lean_dec_ref(v_acc_537_);
v_a_546_ = v___x_555_;
goto v___jp_545_;
}
}
v___jp_545_:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_547_ = lean_unsigned_to_nat(1u);
v___x_548_ = lean_nat_add(v_next_536_, v___x_547_);
lean_inc(v___y_543_);
lean_inc_ref(v___y_542_);
lean_inc(v___y_541_);
lean_inc_ref(v___y_540_);
v___x_549_ = lean_apply_9(v_G_539_, v___x_548_, v_a_546_, lean_box(0), lean_box(0), v___y_540_, v___y_541_, v___y_542_, v___y_543_, lean_box(0));
return v___x_549_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20___boxed(lean_object* v_i_556_, lean_object* v___x_557_, lean_object* v_discrs_558_, lean_object* v_prior_559_, lean_object* v_next_560_, lean_object* v_acc_561_, lean_object* v_h_562_, lean_object* v_G_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20(v_i_556_, v___x_557_, v_discrs_558_, v_prior_559_, v_next_560_, v_acc_561_, v_h_562_, v_G_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v_next_560_);
lean_dec_ref(v_prior_559_);
lean_dec_ref(v_discrs_558_);
lean_dec_ref(v___x_557_);
lean_dec(v_i_556_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21(lean_object* v_a_570_, lean_object* v___f_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v___x_577_; 
lean_inc(v___y_575_);
lean_inc_ref(v___y_574_);
lean_inc(v___y_573_);
lean_inc_ref(v___y_572_);
v___x_577_ = lean_infer_type(v_a_570_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_579_; lean_object* v___x_2585__overap_580_; lean_object* v___x_581_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_577_, 1);
v___x_579_ = lean_unsigned_to_nat(0u);
v___x_2585__overap_580_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_571_, v___x_579_, v_a_578_, lean_box(0));
v___x_581_ = lean_apply_5(v___x_2585__overap_580_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, lean_box(0));
return v___x_581_;
}
else
{
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec_ref(v___f_571_);
return v___x_577_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21___boxed(lean_object* v_a_582_, lean_object* v___f_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21(v_a_582_, v___f_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22(lean_object* v_i_590_, lean_object* v___x_591_, lean_object* v_discrs_592_, lean_object* v_a_593_, lean_object* v_inst_594_, lean_object* v_prior_595_){
_start:
{
lean_object* v___f_596_; lean_object* v___f_597_; lean_object* v___x_598_; 
v___f_596_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20___boxed), 13, 4);
lean_closure_set(v___f_596_, 0, v_i_590_);
lean_closure_set(v___f_596_, 1, v___x_591_);
lean_closure_set(v___f_596_, 2, v_discrs_592_);
lean_closure_set(v___f_596_, 3, v_prior_595_);
v___f_597_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21___boxed), 7, 2);
lean_closure_set(v___f_597_, 0, v_a_593_);
lean_closure_set(v___f_597_, 1, v___f_596_);
v___x_598_ = lean_apply_2(v_inst_594_, lean_box(0), v___f_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23(lean_object* v___x_602_, lean_object* v_discrs_603_, lean_object* v_inst_604_, lean_object* v_i_605_, lean_object* v_a_606_, lean_object* v_x_607_){
_start:
{
lean_object* v___f_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
lean_inc(v_i_605_);
v___f_608_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22), 6, 5);
lean_closure_set(v___f_608_, 0, v_i_605_);
lean_closure_set(v___f_608_, 1, v___x_602_);
lean_closure_set(v___f_608_, 2, v_discrs_603_);
lean_closure_set(v___f_608_, 3, v_a_606_);
lean_closure_set(v___f_608_, 4, v_inst_604_);
v___x_609_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1));
v___x_610_ = lean_unsigned_to_nat(1u);
v___x_611_ = lean_nat_add(v_i_605_, v___x_610_);
lean_dec(v_i_605_);
v___x_612_ = lean_name_append_index_after(v___x_609_, v___x_611_);
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
lean_ctor_set(v___x_613_, 1, v___f_608_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(lean_object* v_toMatcherInfo_616_, lean_object* v_matcherName_617_, lean_object* v_matcherLevels_618_, lean_object* v_params_619_, lean_object* v_motive_620_, lean_object* v_discrs_621_, lean_object* v_alts_622_, lean_object* v_k_623_, lean_object* v_____do__lift_624_){
_start:
{
lean_object* v___x_625_; lean_object* v_abstractMatcherApp_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_625_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0));
lean_inc_ref(v_discrs_621_);
v_abstractMatcherApp_626_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_abstractMatcherApp_626_, 0, v_toMatcherInfo_616_);
lean_ctor_set(v_abstractMatcherApp_626_, 1, v_matcherName_617_);
lean_ctor_set(v_abstractMatcherApp_626_, 2, v_matcherLevels_618_);
lean_ctor_set(v_abstractMatcherApp_626_, 3, v_params_619_);
lean_ctor_set(v_abstractMatcherApp_626_, 4, v_motive_620_);
lean_ctor_set(v_abstractMatcherApp_626_, 5, v_discrs_621_);
lean_ctor_set(v_abstractMatcherApp_626_, 6, v_____do__lift_624_);
lean_ctor_set(v_abstractMatcherApp_626_, 7, v___x_625_);
v___x_627_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_627_, 0, v_abstractMatcherApp_626_);
v___x_628_ = l_Array_append___redArg(v_discrs_621_, v_alts_622_);
v___x_629_ = lean_apply_2(v_k_623_, v___x_627_, v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___boxed(lean_object* v_toMatcherInfo_630_, lean_object* v_matcherName_631_, lean_object* v_matcherLevels_632_, lean_object* v_params_633_, lean_object* v_motive_634_, lean_object* v_discrs_635_, lean_object* v_alts_636_, lean_object* v_k_637_, lean_object* v_____do__lift_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(v_toMatcherInfo_630_, v_matcherName_631_, v_matcherLevels_632_, v_params_633_, v_motive_634_, v_discrs_635_, v_alts_636_, v_k_637_, v_____do__lift_638_);
lean_dec_ref(v_alts_636_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25(lean_object* v_toMatcherInfo_641_, lean_object* v_matcherName_642_, lean_object* v_matcherLevels_643_, lean_object* v_params_644_, lean_object* v_motive_645_, lean_object* v_discrs_646_, lean_object* v_k_647_, lean_object* v___x_648_, lean_object* v_inst_649_, lean_object* v_toBind_650_, lean_object* v_alts_651_){
_start:
{
lean_object* v___f_652_; lean_object* v___x_653_; size_t v_sz_654_; size_t v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
lean_inc_ref(v_alts_651_);
v___f_652_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___boxed), 9, 8);
lean_closure_set(v___f_652_, 0, v_toMatcherInfo_641_);
lean_closure_set(v___f_652_, 1, v_matcherName_642_);
lean_closure_set(v___f_652_, 2, v_matcherLevels_643_);
lean_closure_set(v___f_652_, 3, v_params_644_);
lean_closure_set(v___f_652_, 4, v_motive_645_);
lean_closure_set(v___f_652_, 5, v_discrs_646_);
lean_closure_set(v___f_652_, 6, v_alts_651_);
lean_closure_set(v___f_652_, 7, v_k_647_);
v___x_653_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___closed__0));
v_sz_654_ = lean_array_size(v_alts_651_);
v___x_655_ = ((size_t)0ULL);
v___x_656_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_648_, v___x_653_, v_sz_654_, v___x_655_, v_alts_651_);
v___x_657_ = lean_apply_2(v_inst_649_, lean_box(0), v___x_656_);
v___x_658_ = lean_apply_4(v_toBind_650_, lean_box(0), lean_box(0), v___x_657_, v___f_652_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26(lean_object* v___f_678_, lean_object* v_inst_679_, lean_object* v_inst_680_, lean_object* v___f_681_, lean_object* v_origAltTypes_682_){
_start:
{
lean_object* v___x_683_; size_t v_sz_684_; size_t v___x_685_; lean_object* v_altNamesTypes_686_; uint8_t v___x_687_; lean_object* v___x_688_; 
v___x_683_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9));
v_sz_684_ = lean_array_size(v_origAltTypes_682_);
v___x_685_ = ((size_t)0ULL);
lean_inc_ref(v_origAltTypes_682_);
v_altNamesTypes_686_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_683_, v_origAltTypes_682_, v___f_678_, v_sz_684_, v___x_685_, v_origAltTypes_682_);
lean_dec_ref(v_origAltTypes_682_);
v___x_687_ = 0;
v___x_688_ = l_Lean_Meta_withLocalDeclsDND___redArg(v_inst_679_, v_inst_680_, v_altNamesTypes_686_, v___f_681_, v___x_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(lean_object* v_toMatcherInfo_689_, lean_object* v_matcherName_690_, lean_object* v_params_691_, lean_object* v_motive_692_, lean_object* v_discrs_693_, lean_object* v_k_694_, lean_object* v___x_695_, lean_object* v_inst_696_, lean_object* v_toBind_697_, lean_object* v___f_698_, lean_object* v_inst_699_, lean_object* v_inst_700_, lean_object* v_alts_701_, lean_object* v_matcherLevels_702_){
_start:
{
lean_object* v___f_703_; lean_object* v___f_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v_matcherPartial_707_; lean_object* v_matcherPartial_708_; lean_object* v_matcherPartial_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
lean_inc(v_toBind_697_);
lean_inc(v_inst_696_);
lean_inc_ref(v_discrs_693_);
lean_inc_ref(v_motive_692_);
lean_inc_ref(v_params_691_);
lean_inc_ref(v_matcherLevels_702_);
lean_inc(v_matcherName_690_);
v___f_703_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25), 11, 10);
lean_closure_set(v___f_703_, 0, v_toMatcherInfo_689_);
lean_closure_set(v___f_703_, 1, v_matcherName_690_);
lean_closure_set(v___f_703_, 2, v_matcherLevels_702_);
lean_closure_set(v___f_703_, 3, v_params_691_);
lean_closure_set(v___f_703_, 4, v_motive_692_);
lean_closure_set(v___f_703_, 5, v_discrs_693_);
lean_closure_set(v___f_703_, 6, v_k_694_);
lean_closure_set(v___f_703_, 7, v___x_695_);
lean_closure_set(v___f_703_, 8, v_inst_696_);
lean_closure_set(v___f_703_, 9, v_toBind_697_);
v___f_704_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26), 5, 4);
lean_closure_set(v___f_704_, 0, v___f_698_);
lean_closure_set(v___f_704_, 1, v_inst_699_);
lean_closure_set(v___f_704_, 2, v_inst_700_);
lean_closure_set(v___f_704_, 3, v___f_703_);
v___x_705_ = lean_array_to_list(v_matcherLevels_702_);
v___x_706_ = l_Lean_mkConst(v_matcherName_690_, v___x_705_);
v_matcherPartial_707_ = l_Lean_mkAppN(v___x_706_, v_params_691_);
lean_dec_ref(v_params_691_);
v_matcherPartial_708_ = l_Lean_Expr_app___override(v_matcherPartial_707_, v_motive_692_);
v_matcherPartial_709_ = l_Lean_mkAppN(v_matcherPartial_708_, v_discrs_693_);
lean_dec_ref(v_discrs_693_);
v___x_710_ = lean_array_get_size(v_alts_701_);
v___x_711_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_711_, 0, v___x_710_);
lean_closure_set(v___x_711_, 1, v_matcherPartial_709_);
v___x_712_ = lean_apply_2(v_inst_696_, lean_box(0), v___x_711_);
v___x_713_ = lean_apply_4(v_toBind_697_, lean_box(0), lean_box(0), v___x_712_, v___f_704_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27___boxed(lean_object* v_toMatcherInfo_714_, lean_object* v_matcherName_715_, lean_object* v_params_716_, lean_object* v_motive_717_, lean_object* v_discrs_718_, lean_object* v_k_719_, lean_object* v___x_720_, lean_object* v_inst_721_, lean_object* v_toBind_722_, lean_object* v___f_723_, lean_object* v_inst_724_, lean_object* v_inst_725_, lean_object* v_alts_726_, lean_object* v_matcherLevels_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(v_toMatcherInfo_714_, v_matcherName_715_, v_params_716_, v_motive_717_, v_discrs_718_, v_k_719_, v___x_720_, v_inst_721_, v_toBind_722_, v___f_723_, v_inst_724_, v_inst_725_, v_alts_726_, v_matcherLevels_727_);
lean_dec_ref(v_alts_726_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28(lean_object* v___f_729_, lean_object* v_matcherLevels_730_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = lean_apply_1(v___f_729_, v_matcherLevels_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(lean_object* v_matcherLevels_732_, lean_object* v_val_733_, lean_object* v_toPure_734_, lean_object* v_toBind_735_, lean_object* v___f_736_, lean_object* v_uElim_737_){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_738_ = lean_array_set(v_matcherLevels_732_, v_val_733_, v_uElim_737_);
v___x_739_ = lean_apply_2(v_toPure_734_, lean_box(0), v___x_738_);
v___x_740_ = lean_apply_4(v_toBind_735_, lean_box(0), lean_box(0), v___x_739_, v___f_736_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___boxed(lean_object* v_matcherLevels_741_, lean_object* v_val_742_, lean_object* v_toPure_743_, lean_object* v_toBind_744_, lean_object* v___f_745_, lean_object* v_uElim_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(v_matcherLevels_741_, v_val_742_, v_toPure_743_, v_toBind_744_, v___f_745_, v_uElim_746_);
lean_dec(v_val_742_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29(lean_object* v_toMatcherInfo_748_, lean_object* v_matcherName_749_, lean_object* v_params_750_, lean_object* v_discrs_751_, lean_object* v_k_752_, lean_object* v___x_753_, lean_object* v_inst_754_, lean_object* v_toBind_755_, lean_object* v___f_756_, lean_object* v_inst_757_, lean_object* v_inst_758_, lean_object* v_alts_759_, lean_object* v_toPure_760_, lean_object* v_matcherLevels_761_, lean_object* v_resTy_762_, lean_object* v_motive_763_){
_start:
{
lean_object* v_uElimPos_x3f_764_; lean_object* v___f_765_; 
v_uElimPos_x3f_764_ = lean_ctor_get(v_toMatcherInfo_748_, 3);
lean_inc(v_uElimPos_x3f_764_);
lean_inc(v_toBind_755_);
lean_inc(v_inst_754_);
v___f_765_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27___boxed), 14, 13);
lean_closure_set(v___f_765_, 0, v_toMatcherInfo_748_);
lean_closure_set(v___f_765_, 1, v_matcherName_749_);
lean_closure_set(v___f_765_, 2, v_params_750_);
lean_closure_set(v___f_765_, 3, v_motive_763_);
lean_closure_set(v___f_765_, 4, v_discrs_751_);
lean_closure_set(v___f_765_, 5, v_k_752_);
lean_closure_set(v___f_765_, 6, v___x_753_);
lean_closure_set(v___f_765_, 7, v_inst_754_);
lean_closure_set(v___f_765_, 8, v_toBind_755_);
lean_closure_set(v___f_765_, 9, v___f_756_);
lean_closure_set(v___f_765_, 10, v_inst_757_);
lean_closure_set(v___f_765_, 11, v_inst_758_);
lean_closure_set(v___f_765_, 12, v_alts_759_);
if (lean_obj_tag(v_uElimPos_x3f_764_) == 0)
{
lean_object* v___f_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
lean_dec_ref(v_resTy_762_);
lean_dec(v_inst_754_);
v___f_766_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28), 2, 1);
lean_closure_set(v___f_766_, 0, v___f_765_);
v___x_767_ = lean_apply_2(v_toPure_760_, lean_box(0), v_matcherLevels_761_);
v___x_768_ = lean_apply_4(v_toBind_755_, lean_box(0), lean_box(0), v___x_767_, v___f_766_);
return v___x_768_;
}
else
{
lean_object* v_val_769_; lean_object* v___f_770_; lean_object* v___f_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v_val_769_ = lean_ctor_get(v_uElimPos_x3f_764_, 0);
lean_inc(v_val_769_);
lean_dec_ref_known(v_uElimPos_x3f_764_, 1);
v___f_770_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28), 2, 1);
lean_closure_set(v___f_770_, 0, v___f_765_);
lean_inc(v_toBind_755_);
v___f_771_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___boxed), 6, 5);
lean_closure_set(v___f_771_, 0, v_matcherLevels_761_);
lean_closure_set(v___f_771_, 1, v_val_769_);
lean_closure_set(v___f_771_, 2, v_toPure_760_);
lean_closure_set(v___f_771_, 3, v_toBind_755_);
lean_closure_set(v___f_771_, 4, v___f_770_);
v___x_772_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_772_, 0, v_resTy_762_);
v___x_773_ = lean_apply_2(v_inst_754_, lean_box(0), v___x_772_);
v___x_774_ = lean_apply_4(v_toBind_755_, lean_box(0), lean_box(0), v___x_773_, v___f_771_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31(lean_object* v_toMatcherInfo_775_, lean_object* v_matcherName_776_, lean_object* v_params_777_, lean_object* v_k_778_, lean_object* v___x_779_, lean_object* v_inst_780_, lean_object* v_toBind_781_, lean_object* v___f_782_, lean_object* v_inst_783_, lean_object* v_inst_784_, lean_object* v_alts_785_, lean_object* v_toPure_786_, lean_object* v_matcherLevels_787_, lean_object* v_resTy_788_, lean_object* v___x_789_, lean_object* v_motive_790_, lean_object* v___f_791_, lean_object* v_discrs_792_){
_start:
{
lean_object* v___f_793_; uint8_t v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
lean_inc(v_toBind_781_);
lean_inc(v_inst_780_);
lean_inc_ref(v___x_779_);
v___f_793_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29), 16, 15);
lean_closure_set(v___f_793_, 0, v_toMatcherInfo_775_);
lean_closure_set(v___f_793_, 1, v_matcherName_776_);
lean_closure_set(v___f_793_, 2, v_params_777_);
lean_closure_set(v___f_793_, 3, v_discrs_792_);
lean_closure_set(v___f_793_, 4, v_k_778_);
lean_closure_set(v___f_793_, 5, v___x_779_);
lean_closure_set(v___f_793_, 6, v_inst_780_);
lean_closure_set(v___f_793_, 7, v_toBind_781_);
lean_closure_set(v___f_793_, 8, v___f_782_);
lean_closure_set(v___f_793_, 9, v_inst_783_);
lean_closure_set(v___f_793_, 10, v_inst_784_);
lean_closure_set(v___f_793_, 11, v_alts_785_);
lean_closure_set(v___f_793_, 12, v_toPure_786_);
lean_closure_set(v___f_793_, 13, v_matcherLevels_787_);
lean_closure_set(v___f_793_, 14, v_resTy_788_);
v___x_794_ = 0;
v___x_795_ = l_Lean_Meta_lambdaTelescope___redArg(v___x_789_, v___x_779_, v_motive_790_, v___f_791_, v___x_794_);
v___x_796_ = lean_apply_2(v_inst_780_, lean_box(0), v___x_795_);
v___x_797_ = lean_apply_4(v_toBind_781_, lean_box(0), lean_box(0), v___x_796_, v___f_793_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31___boxed(lean_object** _args){
lean_object* v_toMatcherInfo_798_ = _args[0];
lean_object* v_matcherName_799_ = _args[1];
lean_object* v_params_800_ = _args[2];
lean_object* v_k_801_ = _args[3];
lean_object* v___x_802_ = _args[4];
lean_object* v_inst_803_ = _args[5];
lean_object* v_toBind_804_ = _args[6];
lean_object* v___f_805_ = _args[7];
lean_object* v_inst_806_ = _args[8];
lean_object* v_inst_807_ = _args[9];
lean_object* v_alts_808_ = _args[10];
lean_object* v_toPure_809_ = _args[11];
lean_object* v_matcherLevels_810_ = _args[12];
lean_object* v_resTy_811_ = _args[13];
lean_object* v___x_812_ = _args[14];
lean_object* v_motive_813_ = _args[15];
lean_object* v___f_814_ = _args[16];
lean_object* v_discrs_815_ = _args[17];
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31(v_toMatcherInfo_798_, v_matcherName_799_, v_params_800_, v_k_801_, v___x_802_, v_inst_803_, v_toBind_804_, v___f_805_, v_inst_806_, v_inst_807_, v_alts_808_, v_toPure_809_, v_matcherLevels_810_, v_resTy_811_, v___x_812_, v_motive_813_, v___f_814_, v_discrs_815_);
return v_res_816_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10));
v___x_841_ = l_StateRefT_x27_instMonad___redArg(v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__18(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = lean_unsigned_to_nat(0u);
v___x_850_ = l_Lean_Level_ofNat(v___x_849_);
return v___x_850_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__19(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_851_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__18, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__18_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__18);
v___x_852_ = l_Lean_mkSort(v___x_851_);
return v___x_852_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__22(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_856_ = lean_box(0);
v___x_857_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__21));
v___x_858_ = l_Lean_mkConst(v___x_857_, v___x_856_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(lean_object* v_inst_860_, lean_object* v_inst_861_, lean_object* v_inst_862_, lean_object* v_info_863_, lean_object* v_resTy_864_, lean_object* v_k_865_){
_start:
{
lean_object* v___x_866_; lean_object* v_toApplicative_867_; lean_object* v_toFunctor_868_; lean_object* v_toSeq_869_; lean_object* v_toSeqLeft_870_; lean_object* v_toSeqRight_871_; lean_object* v___f_872_; lean_object* v___f_873_; lean_object* v___f_874_; lean_object* v___f_875_; lean_object* v___x_876_; lean_object* v___f_877_; lean_object* v___f_878_; lean_object* v___f_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v_toApplicative_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_964_; 
v___x_866_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11);
v_toApplicative_867_ = lean_ctor_get(v___x_866_, 0);
v_toFunctor_868_ = lean_ctor_get(v_toApplicative_867_, 0);
v_toSeq_869_ = lean_ctor_get(v_toApplicative_867_, 2);
v_toSeqLeft_870_ = lean_ctor_get(v_toApplicative_867_, 3);
v_toSeqRight_871_ = lean_ctor_get(v_toApplicative_867_, 4);
v___f_872_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12));
v___f_873_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_868_, 2);
v___f_874_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_874_, 0, v_toFunctor_868_);
v___f_875_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_875_, 0, v_toFunctor_868_);
v___x_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_876_, 0, v___f_874_);
lean_ctor_set(v___x_876_, 1, v___f_875_);
lean_inc(v_toSeqRight_871_);
v___f_877_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_877_, 0, v_toSeqRight_871_);
lean_inc(v_toSeqLeft_870_);
v___f_878_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_878_, 0, v_toSeqLeft_870_);
lean_inc(v_toSeq_869_);
v___f_879_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_879_, 0, v_toSeq_869_);
v___x_880_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_880_, 0, v___x_876_);
lean_ctor_set(v___x_880_, 1, v___f_872_);
lean_ctor_set(v___x_880_, 2, v___f_879_);
lean_ctor_set(v___x_880_, 3, v___f_878_);
lean_ctor_set(v___x_880_, 4, v___f_877_);
v___x_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
lean_ctor_set(v___x_881_, 1, v___f_873_);
v___x_882_ = l_StateRefT_x27_instMonad___redArg(v___x_881_);
v_toApplicative_883_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_964_ == 0)
{
lean_object* v_unused_965_; 
v_unused_965_ = lean_ctor_get(v___x_882_, 1);
lean_dec(v_unused_965_);
v___x_885_ = v___x_882_;
v_isShared_886_ = v_isSharedCheck_964_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_toApplicative_883_);
lean_dec(v___x_882_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_964_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v_toFunctor_887_; lean_object* v_toSeq_888_; lean_object* v_toSeqLeft_889_; lean_object* v_toSeqRight_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_962_; 
v_toFunctor_887_ = lean_ctor_get(v_toApplicative_883_, 0);
v_toSeq_888_ = lean_ctor_get(v_toApplicative_883_, 2);
v_toSeqLeft_889_ = lean_ctor_get(v_toApplicative_883_, 3);
v_toSeqRight_890_ = lean_ctor_get(v_toApplicative_883_, 4);
v_isSharedCheck_962_ = !lean_is_exclusive(v_toApplicative_883_);
if (v_isSharedCheck_962_ == 0)
{
lean_object* v_unused_963_; 
v_unused_963_ = lean_ctor_get(v_toApplicative_883_, 1);
lean_dec(v_unused_963_);
v___x_892_ = v_toApplicative_883_;
v_isShared_893_ = v_isSharedCheck_962_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_toSeqRight_890_);
lean_inc(v_toSeqLeft_889_);
lean_inc(v_toSeq_888_);
lean_inc(v_toFunctor_887_);
lean_dec(v_toApplicative_883_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_962_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___f_894_; lean_object* v___f_895_; lean_object* v___f_896_; lean_object* v___f_897_; lean_object* v___x_898_; lean_object* v___f_899_; lean_object* v___f_900_; lean_object* v___f_901_; lean_object* v___x_903_; 
v___f_894_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__14));
v___f_895_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__15));
lean_inc_ref(v_toFunctor_887_);
v___f_896_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_896_, 0, v_toFunctor_887_);
v___f_897_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_897_, 0, v_toFunctor_887_);
v___x_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_898_, 0, v___f_896_);
lean_ctor_set(v___x_898_, 1, v___f_897_);
v___f_899_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_899_, 0, v_toSeqRight_890_);
v___f_900_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_900_, 0, v_toSeqLeft_889_);
v___f_901_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_901_, 0, v_toSeq_888_);
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 4, v___f_899_);
lean_ctor_set(v___x_892_, 3, v___f_900_);
lean_ctor_set(v___x_892_, 2, v___f_901_);
lean_ctor_set(v___x_892_, 1, v___f_894_);
lean_ctor_set(v___x_892_, 0, v___x_898_);
v___x_903_ = v___x_892_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_898_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v___f_894_);
lean_ctor_set(v_reuseFailAlloc_961_, 2, v___f_901_);
lean_ctor_set(v_reuseFailAlloc_961_, 3, v___f_900_);
lean_ctor_set(v_reuseFailAlloc_961_, 4, v___f_899_);
v___x_903_ = v_reuseFailAlloc_961_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_905_; 
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 1, v___f_895_);
lean_ctor_set(v___x_885_, 0, v___x_903_);
v___x_905_ = v___x_885_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_903_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v___f_895_);
v___x_905_ = v_reuseFailAlloc_960_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_object* v_toApplicative_906_; lean_object* v_toFunctor_907_; lean_object* v_toSeq_908_; lean_object* v_toSeqLeft_909_; lean_object* v_toSeqRight_910_; lean_object* v___f_911_; lean_object* v___f_912_; lean_object* v___x_913_; lean_object* v___f_914_; lean_object* v___f_915_; lean_object* v___f_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_toApplicative_906_ = lean_ctor_get(v___x_866_, 0);
v_toFunctor_907_ = lean_ctor_get(v_toApplicative_906_, 0);
v_toSeq_908_ = lean_ctor_get(v_toApplicative_906_, 2);
v_toSeqLeft_909_ = lean_ctor_get(v_toApplicative_906_, 3);
v_toSeqRight_910_ = lean_ctor_get(v_toApplicative_906_, 4);
lean_inc_ref_n(v_toFunctor_907_, 2);
v___f_911_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_911_, 0, v_toFunctor_907_);
v___f_912_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_912_, 0, v_toFunctor_907_);
v___x_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_913_, 0, v___f_911_);
lean_ctor_set(v___x_913_, 1, v___f_912_);
lean_inc(v_toSeqRight_910_);
v___f_914_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_914_, 0, v_toSeqRight_910_);
lean_inc(v_toSeqLeft_909_);
v___f_915_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_915_, 0, v_toSeqLeft_909_);
lean_inc(v_toSeq_908_);
v___f_916_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_916_, 0, v_toSeq_908_);
v___x_917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_917_, 0, v___x_913_);
lean_ctor_set(v___x_917_, 1, v___f_872_);
lean_ctor_set(v___x_917_, 2, v___f_916_);
lean_ctor_set(v___x_917_, 3, v___f_915_);
lean_ctor_set(v___x_917_, 4, v___f_914_);
v___x_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
lean_ctor_set(v___x_918_, 1, v___f_873_);
v___x_919_ = l_StateRefT_x27_instMonad___redArg(v___x_918_);
v___x_920_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_920_, 0, lean_box(0));
lean_closure_set(v___x_920_, 1, lean_box(0));
lean_closure_set(v___x_920_, 2, v___x_919_);
v___x_921_ = l_instMonadControlTOfPure___redArg(v___x_920_);
switch(lean_obj_tag(v_info_863_))
{
case 0:
{
lean_object* v_toBind_922_; lean_object* v___f_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec_ref_known(v_info_863_, 1);
lean_dec_ref(v___x_921_);
lean_dec_ref(v___x_905_);
v_toBind_922_ = lean_ctor_get(v_inst_862_, 1);
lean_inc_ref(v_inst_862_);
lean_inc_ref(v_inst_861_);
lean_inc(v_toBind_922_);
v___f_923_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4), 7, 6);
lean_closure_set(v___f_923_, 0, v_resTy_864_);
lean_closure_set(v___f_923_, 1, v_k_865_);
lean_closure_set(v___f_923_, 2, v_inst_860_);
lean_closure_set(v___f_923_, 3, v_toBind_922_);
lean_closure_set(v___f_923_, 4, v_inst_861_);
lean_closure_set(v___f_923_, 5, v_inst_862_);
v___x_924_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__17));
v___x_925_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__19, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__19_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__19);
v___x_926_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_861_, v_inst_862_, v___x_924_, v___x_925_, v___f_923_);
return v___x_926_;
}
case 1:
{
lean_object* v_toBind_927_; lean_object* v___f_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
lean_dec_ref_known(v_info_863_, 1);
lean_dec_ref(v___x_921_);
lean_dec_ref(v___x_905_);
v_toBind_927_ = lean_ctor_get(v_inst_862_, 1);
lean_inc_ref(v_inst_862_);
lean_inc_ref(v_inst_861_);
lean_inc(v_toBind_927_);
v___f_928_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13), 7, 6);
lean_closure_set(v___f_928_, 0, v_resTy_864_);
lean_closure_set(v___f_928_, 1, v_k_865_);
lean_closure_set(v___f_928_, 2, v_inst_860_);
lean_closure_set(v___f_928_, 3, v_toBind_927_);
lean_closure_set(v___f_928_, 4, v_inst_861_);
lean_closure_set(v___f_928_, 5, v_inst_862_);
v___x_929_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__17));
v___x_930_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__19, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__19_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__19);
v___x_931_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_861_, v_inst_862_, v___x_929_, v___x_930_, v___f_928_);
return v___x_931_;
}
case 2:
{
lean_object* v_toBind_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___f_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
lean_dec_ref_known(v_info_863_, 1);
lean_dec_ref(v___x_921_);
lean_dec_ref(v___x_905_);
v_toBind_932_ = lean_ctor_get(v_inst_862_, 1);
v___x_933_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__17));
v___x_934_ = lean_box(0);
lean_inc_ref(v_inst_862_);
lean_inc_ref(v_inst_861_);
lean_inc(v_toBind_932_);
v___f_935_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17), 8, 7);
lean_closure_set(v___f_935_, 0, v___x_934_);
lean_closure_set(v___f_935_, 1, v_resTy_864_);
lean_closure_set(v___f_935_, 2, v_k_865_);
lean_closure_set(v___f_935_, 3, v_inst_860_);
lean_closure_set(v___f_935_, 4, v_toBind_932_);
lean_closure_set(v___f_935_, 5, v_inst_861_);
lean_closure_set(v___f_935_, 6, v_inst_862_);
v___x_936_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__22, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__22_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__22);
v___x_937_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_861_, v_inst_862_, v___x_933_, v___x_936_, v___f_935_);
return v___x_937_;
}
default: 
{
lean_object* v_toApplicative_938_; lean_object* v_matcherApp_939_; lean_object* v_toBind_940_; lean_object* v_toPure_941_; lean_object* v_toMatcherInfo_942_; lean_object* v_matcherName_943_; lean_object* v_matcherLevels_944_; lean_object* v_params_945_; lean_object* v_motive_946_; lean_object* v_discrs_947_; lean_object* v_alts_948_; lean_object* v___f_949_; lean_object* v___f_950_; lean_object* v___x_951_; lean_object* v___f_952_; lean_object* v___f_953_; lean_object* v___x_954_; size_t v_sz_955_; size_t v___x_956_; lean_object* v_discrDecls_957_; uint8_t v___x_958_; lean_object* v___x_959_; 
v_toApplicative_938_ = lean_ctor_get(v_inst_862_, 0);
v_matcherApp_939_ = lean_ctor_get(v_info_863_, 0);
lean_inc_ref(v_matcherApp_939_);
lean_dec_ref_known(v_info_863_, 1);
v_toBind_940_ = lean_ctor_get(v_inst_862_, 1);
v_toPure_941_ = lean_ctor_get(v_toApplicative_938_, 1);
v_toMatcherInfo_942_ = lean_ctor_get(v_matcherApp_939_, 0);
lean_inc_ref(v_toMatcherInfo_942_);
v_matcherName_943_ = lean_ctor_get(v_matcherApp_939_, 1);
lean_inc(v_matcherName_943_);
v_matcherLevels_944_ = lean_ctor_get(v_matcherApp_939_, 2);
lean_inc_ref(v_matcherLevels_944_);
v_params_945_ = lean_ctor_get(v_matcherApp_939_, 3);
lean_inc_ref(v_params_945_);
v_motive_946_ = lean_ctor_get(v_matcherApp_939_, 4);
lean_inc_ref(v_motive_946_);
v_discrs_947_ = lean_ctor_get(v_matcherApp_939_, 5);
lean_inc_ref_n(v_discrs_947_, 3);
v_alts_948_ = lean_ctor_get(v_matcherApp_939_, 6);
lean_inc_ref(v_alts_948_);
lean_dec_ref(v_matcherApp_939_);
lean_inc_ref(v_resTy_864_);
v___f_949_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18___boxed), 8, 1);
lean_closure_set(v___f_949_, 0, v_resTy_864_);
v___f_950_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__23));
v___x_951_ = l_Lean_instInhabitedExpr;
lean_inc(v_inst_860_);
v___f_952_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23), 6, 3);
lean_closure_set(v___f_952_, 0, v___x_951_);
lean_closure_set(v___f_952_, 1, v_discrs_947_);
lean_closure_set(v___f_952_, 2, v_inst_860_);
lean_inc(v_toPure_941_);
lean_inc_ref(v_inst_862_);
lean_inc_ref(v_inst_861_);
lean_inc(v_toBind_940_);
v___f_953_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31___boxed), 18, 17);
lean_closure_set(v___f_953_, 0, v_toMatcherInfo_942_);
lean_closure_set(v___f_953_, 1, v_matcherName_943_);
lean_closure_set(v___f_953_, 2, v_params_945_);
lean_closure_set(v___f_953_, 3, v_k_865_);
lean_closure_set(v___f_953_, 4, v___x_905_);
lean_closure_set(v___f_953_, 5, v_inst_860_);
lean_closure_set(v___f_953_, 6, v_toBind_940_);
lean_closure_set(v___f_953_, 7, v___f_950_);
lean_closure_set(v___f_953_, 8, v_inst_861_);
lean_closure_set(v___f_953_, 9, v_inst_862_);
lean_closure_set(v___f_953_, 10, v_alts_948_);
lean_closure_set(v___f_953_, 11, v_toPure_941_);
lean_closure_set(v___f_953_, 12, v_matcherLevels_944_);
lean_closure_set(v___f_953_, 13, v_resTy_864_);
lean_closure_set(v___f_953_, 14, v___x_921_);
lean_closure_set(v___f_953_, 15, v_motive_946_);
lean_closure_set(v___f_953_, 16, v___f_949_);
v___x_954_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9));
v_sz_955_ = lean_array_size(v_discrs_947_);
v___x_956_ = ((size_t)0ULL);
v_discrDecls_957_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_954_, v_discrs_947_, v___f_952_, v_sz_955_, v___x_956_, v_discrs_947_);
lean_dec_ref(v_discrs_947_);
v___x_958_ = 0;
v___x_959_ = l_Lean_Meta_withLocalDeclsD___redArg(v_inst_861_, v_inst_862_, v_discrDecls_957_, v___f_953_, v___x_958_);
return v___x_959_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(lean_object* v_n_966_, lean_object* v_00_u03b1_967_, lean_object* v_inst_968_, lean_object* v_inst_969_, lean_object* v_inst_970_, lean_object* v_inst_971_, lean_object* v_info_972_, lean_object* v_resTy_973_, lean_object* v_k_974_){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(v_inst_968_, v_inst_969_, v_inst_970_, v_info_972_, v_resTy_973_, v_k_974_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___boxed(lean_object* v_n_976_, lean_object* v_00_u03b1_977_, lean_object* v_inst_978_, lean_object* v_inst_979_, lean_object* v_inst_980_, lean_object* v_inst_981_, lean_object* v_info_982_, lean_object* v_resTy_983_, lean_object* v_k_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(v_n_976_, v_00_u03b1_977_, v_inst_978_, v_inst_979_, v_inst_980_, v_inst_981_, v_info_982_, v_resTy_983_, v_k_984_);
lean_dec(v_inst_981_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0(lean_object* v_u_986_, lean_object* v_resTy_987_, lean_object* v_c_988_, lean_object* v_h_989_, lean_object* v_t_990_, lean_object* v_toPure_991_, lean_object* v_e_992_){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_993_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_994_ = lean_box(0);
v___x_995_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_995_, 0, v_u_986_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = l_Lean_mkConst(v___x_993_, v___x_995_);
v___x_997_ = l_Lean_mkApp5(v___x_996_, v_resTy_987_, v_c_988_, v_h_989_, v_t_990_, v_e_992_);
v___x_998_ = lean_apply_2(v_toPure_991_, lean_box(0), v___x_997_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1(lean_object* v_u_1002_, lean_object* v_resTy_1003_, lean_object* v_c_1004_, lean_object* v_h_1005_, lean_object* v_toPure_1006_, lean_object* v_onAlt_1007_, lean_object* v___x_1008_, lean_object* v___x_1009_, lean_object* v_toBind_1010_, lean_object* v_t_1011_){
_start:
{
lean_object* v___f_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
lean_inc_ref(v_resTy_1003_);
v___f_1012_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0), 7, 6);
lean_closure_set(v___f_1012_, 0, v_u_1002_);
lean_closure_set(v___f_1012_, 1, v_resTy_1003_);
lean_closure_set(v___f_1012_, 2, v_c_1004_);
lean_closure_set(v___f_1012_, 3, v_h_1005_);
lean_closure_set(v___f_1012_, 4, v_t_1011_);
lean_closure_set(v___f_1012_, 5, v_toPure_1006_);
v___x_1013_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1014_ = lean_apply_4(v_onAlt_1007_, v___x_1013_, v_resTy_1003_, v___x_1008_, v___x_1009_);
v___x_1015_ = lean_apply_4(v_toBind_1010_, lean_box(0), lean_box(0), v___x_1014_, v___f_1012_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(lean_object* v___x_1016_, uint8_t v_useSplitter_1017_, lean_object* v_inst_1018_, lean_object* v_____do__lift_1019_){
_start:
{
uint8_t v___x_1020_; uint8_t v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1020_ = 0;
v___x_1021_ = 1;
v___x_1022_ = lean_box(v___x_1020_);
v___x_1023_ = lean_box(v_useSplitter_1017_);
v___x_1024_ = lean_box(v___x_1020_);
v___x_1025_ = lean_box(v_useSplitter_1017_);
v___x_1026_ = lean_box(v___x_1021_);
v___x_1027_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1027_, 0, v___x_1016_);
lean_closure_set(v___x_1027_, 1, v_____do__lift_1019_);
lean_closure_set(v___x_1027_, 2, v___x_1022_);
lean_closure_set(v___x_1027_, 3, v___x_1023_);
lean_closure_set(v___x_1027_, 4, v___x_1024_);
lean_closure_set(v___x_1027_, 5, v___x_1025_);
lean_closure_set(v___x_1027_, 6, v___x_1026_);
v___x_1028_ = lean_apply_2(v_inst_1018_, lean_box(0), v___x_1027_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed(lean_object* v___x_1029_, lean_object* v_useSplitter_1030_, lean_object* v_inst_1031_, lean_object* v_____do__lift_1032_){
_start:
{
uint8_t v_useSplitter_boxed_1033_; lean_object* v_res_1034_; 
v_useSplitter_boxed_1033_ = lean_unbox(v_useSplitter_1030_);
v_res_1034_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(v___x_1029_, v_useSplitter_boxed_1033_, v_inst_1031_, v_____do__lift_1032_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(lean_object* v___x_1038_, uint8_t v_useSplitter_1039_, lean_object* v_inst_1040_, lean_object* v_onAlt_1041_, lean_object* v_resTy_1042_, lean_object* v_toBind_1043_, lean_object* v_h_1044_){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___f_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1045_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1046_ = lean_unsigned_to_nat(0u);
v___x_1047_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0));
v___x_1048_ = lean_mk_empty_array_with_capacity(v___x_1038_);
v___x_1049_ = lean_array_push(v___x_1048_, v_h_1044_);
v___x_1050_ = lean_box(v_useSplitter_1039_);
lean_inc_ref(v___x_1049_);
v___f_1051_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1051_, 0, v___x_1049_);
lean_closure_set(v___f_1051_, 1, v___x_1050_);
lean_closure_set(v___f_1051_, 2, v_inst_1040_);
v___x_1052_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1047_);
lean_ctor_set(v___x_1052_, 1, v___x_1049_);
lean_ctor_set(v___x_1052_, 2, v___x_1047_);
lean_ctor_set(v___x_1052_, 3, v___x_1047_);
lean_ctor_set(v___x_1052_, 4, v___x_1047_);
v___x_1053_ = lean_apply_4(v_onAlt_1041_, v___x_1045_, v_resTy_1042_, v___x_1046_, v___x_1052_);
v___x_1054_ = lean_apply_4(v_toBind_1043_, lean_box(0), lean_box(0), v___x_1053_, v___f_1051_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed(lean_object* v___x_1055_, lean_object* v_useSplitter_1056_, lean_object* v_inst_1057_, lean_object* v_onAlt_1058_, lean_object* v_resTy_1059_, lean_object* v_toBind_1060_, lean_object* v_h_1061_){
_start:
{
uint8_t v_useSplitter_boxed_1062_; lean_object* v_res_1063_; 
v_useSplitter_boxed_1062_ = lean_unbox(v_useSplitter_1056_);
v_res_1063_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(v___x_1055_, v_useSplitter_boxed_1062_, v_inst_1057_, v_onAlt_1058_, v_resTy_1059_, v_toBind_1060_, v_h_1061_);
lean_dec(v___x_1055_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(lean_object* v___x_1064_, uint8_t v_useSplitter_1065_, lean_object* v_inst_1066_, lean_object* v_onAlt_1067_, lean_object* v_resTy_1068_, lean_object* v_toBind_1069_, lean_object* v_h_1070_){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___f_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1071_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1072_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0));
v___x_1073_ = lean_mk_empty_array_with_capacity(v___x_1064_);
v___x_1074_ = lean_array_push(v___x_1073_, v_h_1070_);
v___x_1075_ = lean_box(v_useSplitter_1065_);
lean_inc_ref(v___x_1074_);
v___f_1076_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1076_, 0, v___x_1074_);
lean_closure_set(v___f_1076_, 1, v___x_1075_);
lean_closure_set(v___f_1076_, 2, v_inst_1066_);
v___x_1077_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1072_);
lean_ctor_set(v___x_1077_, 1, v___x_1074_);
lean_ctor_set(v___x_1077_, 2, v___x_1072_);
lean_ctor_set(v___x_1077_, 3, v___x_1072_);
lean_ctor_set(v___x_1077_, 4, v___x_1072_);
v___x_1078_ = lean_apply_4(v_onAlt_1067_, v___x_1071_, v_resTy_1068_, v___x_1064_, v___x_1077_);
v___x_1079_ = lean_apply_4(v_toBind_1069_, lean_box(0), lean_box(0), v___x_1078_, v___f_1076_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed(lean_object* v___x_1080_, lean_object* v_useSplitter_1081_, lean_object* v_inst_1082_, lean_object* v_onAlt_1083_, lean_object* v_resTy_1084_, lean_object* v_toBind_1085_, lean_object* v_h_1086_){
_start:
{
uint8_t v_useSplitter_boxed_1087_; lean_object* v_res_1088_; 
v_useSplitter_boxed_1087_ = lean_unbox(v_useSplitter_1081_);
v_res_1088_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(v___x_1080_, v_useSplitter_boxed_1087_, v_inst_1082_, v_onAlt_1083_, v_resTy_1084_, v_toBind_1085_, v_h_1086_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4(lean_object* v_u_1089_, lean_object* v_resTy_1090_, lean_object* v_c_1091_, lean_object* v_h_1092_, lean_object* v_t_1093_, lean_object* v_toPure_1094_, lean_object* v_e_1095_){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1096_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_1097_ = lean_box(0);
v___x_1098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1098_, 0, v_u_1089_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
v___x_1099_ = l_Lean_mkConst(v___x_1096_, v___x_1098_);
v___x_1100_ = l_Lean_mkApp5(v___x_1099_, v_resTy_1090_, v_c_1091_, v_h_1092_, v_t_1093_, v_e_1095_);
v___x_1101_ = lean_apply_2(v_toPure_1094_, lean_box(0), v___x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(lean_object* v_u_1102_, lean_object* v_resTy_1103_, lean_object* v_c_1104_, lean_object* v_h_1105_, lean_object* v_toPure_1106_, lean_object* v_inst_1107_, lean_object* v_inst_1108_, lean_object* v_n_1109_, uint8_t v___x_1110_, lean_object* v___f_1111_, uint8_t v___x_1112_, lean_object* v_toBind_1113_, lean_object* v_t_1114_){
_start:
{
lean_object* v___f_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
lean_inc_ref(v_c_1104_);
v___f_1115_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4), 7, 6);
lean_closure_set(v___f_1115_, 0, v_u_1102_);
lean_closure_set(v___f_1115_, 1, v_resTy_1103_);
lean_closure_set(v___f_1115_, 2, v_c_1104_);
lean_closure_set(v___f_1115_, 3, v_h_1105_);
lean_closure_set(v___f_1115_, 4, v_t_1114_);
lean_closure_set(v___f_1115_, 5, v_toPure_1106_);
v___x_1116_ = l_Lean_mkNot(v_c_1104_);
v___x_1117_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1107_, v_inst_1108_, v_n_1109_, v___x_1110_, v___x_1116_, v___f_1111_, v___x_1112_);
v___x_1118_ = lean_apply_4(v_toBind_1113_, lean_box(0), lean_box(0), v___x_1117_, v___f_1115_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed(lean_object* v_u_1119_, lean_object* v_resTy_1120_, lean_object* v_c_1121_, lean_object* v_h_1122_, lean_object* v_toPure_1123_, lean_object* v_inst_1124_, lean_object* v_inst_1125_, lean_object* v_n_1126_, lean_object* v___x_1127_, lean_object* v___f_1128_, lean_object* v___x_1129_, lean_object* v_toBind_1130_, lean_object* v_t_1131_){
_start:
{
uint8_t v___x_1668__boxed_1132_; uint8_t v___x_1670__boxed_1133_; lean_object* v_res_1134_; 
v___x_1668__boxed_1132_ = lean_unbox(v___x_1127_);
v___x_1670__boxed_1133_ = lean_unbox(v___x_1129_);
v_res_1134_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(v_u_1119_, v_resTy_1120_, v_c_1121_, v_h_1122_, v_toPure_1123_, v_inst_1124_, v_inst_1125_, v_n_1126_, v___x_1668__boxed_1132_, v___f_1128_, v___x_1670__boxed_1133_, v_toBind_1130_, v_t_1131_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7(lean_object* v_u_1135_, lean_object* v_resTy_1136_, lean_object* v_c_1137_, lean_object* v_h_1138_, lean_object* v_toPure_1139_, lean_object* v_inst_1140_, lean_object* v_inst_1141_, lean_object* v___f_1142_, lean_object* v_toBind_1143_, lean_object* v___f_1144_, lean_object* v_n_1145_){
_start:
{
uint8_t v___x_1146_; uint8_t v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___f_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1146_ = 0;
v___x_1147_ = 0;
v___x_1148_ = lean_box(v___x_1146_);
v___x_1149_ = lean_box(v___x_1147_);
lean_inc(v_toBind_1143_);
lean_inc(v_n_1145_);
lean_inc_ref(v_inst_1141_);
lean_inc_ref(v_inst_1140_);
lean_inc_ref(v_c_1137_);
v___f_1150_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_1150_, 0, v_u_1135_);
lean_closure_set(v___f_1150_, 1, v_resTy_1136_);
lean_closure_set(v___f_1150_, 2, v_c_1137_);
lean_closure_set(v___f_1150_, 3, v_h_1138_);
lean_closure_set(v___f_1150_, 4, v_toPure_1139_);
lean_closure_set(v___f_1150_, 5, v_inst_1140_);
lean_closure_set(v___f_1150_, 6, v_inst_1141_);
lean_closure_set(v___f_1150_, 7, v_n_1145_);
lean_closure_set(v___f_1150_, 8, v___x_1148_);
lean_closure_set(v___f_1150_, 9, v___f_1142_);
lean_closure_set(v___f_1150_, 10, v___x_1149_);
lean_closure_set(v___f_1150_, 11, v_toBind_1143_);
v___x_1151_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1140_, v_inst_1141_, v_n_1145_, v___x_1146_, v_c_1137_, v___f_1144_, v___x_1147_);
v___x_1152_ = lean_apply_4(v_toBind_1143_, lean_box(0), lean_box(0), v___x_1151_, v___f_1150_);
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(lean_object* v___x_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v___x_1159_; 
v___x_1159_ = l_Lean_Core_mkFreshUserName(v___x_1153_, v___y_1156_, v___y_1157_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed(lean_object* v___x_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(v___x_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(lean_object* v_e_1174_, uint8_t v_useSplitter_1175_, lean_object* v_resTy_1176_, lean_object* v_toPure_1177_, lean_object* v_onAlt_1178_, lean_object* v_toBind_1179_, lean_object* v_inst_1180_, lean_object* v_inst_1181_, lean_object* v_inst_1182_, lean_object* v_u_1183_){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v_c_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v_h_1192_; 
v___x_1184_ = lean_unsigned_to_nat(1u);
v___x_1185_ = l_Lean_Expr_getAppNumArgs(v_e_1174_);
v___x_1186_ = lean_nat_sub(v___x_1185_, v___x_1184_);
v___x_1187_ = lean_nat_sub(v___x_1186_, v___x_1184_);
lean_dec(v___x_1186_);
v_c_1188_ = l_Lean_Expr_getRevArg_x21(v_e_1174_, v___x_1187_);
v___x_1189_ = lean_unsigned_to_nat(2u);
v___x_1190_ = lean_nat_sub(v___x_1185_, v___x_1189_);
lean_dec(v___x_1185_);
v___x_1191_ = lean_nat_sub(v___x_1190_, v___x_1184_);
lean_dec(v___x_1190_);
v_h_1192_ = l_Lean_Expr_getRevArg_x21(v_e_1174_, v___x_1191_);
if (v_useSplitter_1175_ == 0)
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___f_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
lean_dec_ref(v_inst_1182_);
lean_dec_ref(v_inst_1181_);
lean_dec(v_inst_1180_);
v___x_1193_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1194_ = lean_unsigned_to_nat(0u);
v___x_1195_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1179_);
lean_inc(v_onAlt_1178_);
lean_inc_ref(v_resTy_1176_);
v___f_1196_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1), 10, 9);
lean_closure_set(v___f_1196_, 0, v_u_1183_);
lean_closure_set(v___f_1196_, 1, v_resTy_1176_);
lean_closure_set(v___f_1196_, 2, v_c_1188_);
lean_closure_set(v___f_1196_, 3, v_h_1192_);
lean_closure_set(v___f_1196_, 4, v_toPure_1177_);
lean_closure_set(v___f_1196_, 5, v_onAlt_1178_);
lean_closure_set(v___f_1196_, 6, v___x_1184_);
lean_closure_set(v___f_1196_, 7, v___x_1195_);
lean_closure_set(v___f_1196_, 8, v_toBind_1179_);
v___x_1197_ = lean_apply_4(v_onAlt_1178_, v___x_1193_, v_resTy_1176_, v___x_1194_, v___x_1195_);
v___x_1198_ = lean_apply_4(v_toBind_1179_, lean_box(0), lean_box(0), v___x_1197_, v___f_1196_);
return v___x_1198_;
}
else
{
lean_object* v___x_1199_; lean_object* v___f_1200_; lean_object* v___x_1201_; lean_object* v___f_1202_; lean_object* v___f_1203_; lean_object* v___f_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1199_ = lean_box(v_useSplitter_1175_);
lean_inc_n(v_toBind_1179_, 3);
lean_inc_ref_n(v_resTy_1176_, 2);
lean_inc(v_onAlt_1178_);
lean_inc_n(v_inst_1180_, 2);
v___f_1200_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_1200_, 0, v___x_1184_);
lean_closure_set(v___f_1200_, 1, v___x_1199_);
lean_closure_set(v___f_1200_, 2, v_inst_1180_);
lean_closure_set(v___f_1200_, 3, v_onAlt_1178_);
lean_closure_set(v___f_1200_, 4, v_resTy_1176_);
lean_closure_set(v___f_1200_, 5, v_toBind_1179_);
v___x_1201_ = lean_box(v_useSplitter_1175_);
v___f_1202_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1202_, 0, v___x_1184_);
lean_closure_set(v___f_1202_, 1, v___x_1201_);
lean_closure_set(v___f_1202_, 2, v_inst_1180_);
lean_closure_set(v___f_1202_, 3, v_onAlt_1178_);
lean_closure_set(v___f_1202_, 4, v_resTy_1176_);
lean_closure_set(v___f_1202_, 5, v_toBind_1179_);
v___f_1203_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7), 11, 10);
lean_closure_set(v___f_1203_, 0, v_u_1183_);
lean_closure_set(v___f_1203_, 1, v_resTy_1176_);
lean_closure_set(v___f_1203_, 2, v_c_1188_);
lean_closure_set(v___f_1203_, 3, v_h_1192_);
lean_closure_set(v___f_1203_, 4, v_toPure_1177_);
lean_closure_set(v___f_1203_, 5, v_inst_1181_);
lean_closure_set(v___f_1203_, 6, v_inst_1182_);
lean_closure_set(v___f_1203_, 7, v___f_1202_);
lean_closure_set(v___f_1203_, 8, v_toBind_1179_);
lean_closure_set(v___f_1203_, 9, v___f_1200_);
v___f_1204_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1205_ = lean_apply_2(v_inst_1180_, lean_box(0), v___f_1204_);
v___x_1206_ = lean_apply_4(v_toBind_1179_, lean_box(0), lean_box(0), v___x_1205_, v___f_1203_);
return v___x_1206_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed(lean_object* v_e_1207_, lean_object* v_useSplitter_1208_, lean_object* v_resTy_1209_, lean_object* v_toPure_1210_, lean_object* v_onAlt_1211_, lean_object* v_toBind_1212_, lean_object* v_inst_1213_, lean_object* v_inst_1214_, lean_object* v_inst_1215_, lean_object* v_u_1216_){
_start:
{
uint8_t v_useSplitter_boxed_1217_; lean_object* v_res_1218_; 
v_useSplitter_boxed_1217_ = lean_unbox(v_useSplitter_1208_);
v_res_1218_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(v_e_1207_, v_useSplitter_boxed_1217_, v_resTy_1209_, v_toPure_1210_, v_onAlt_1211_, v_toBind_1212_, v_inst_1213_, v_inst_1214_, v_inst_1215_, v_u_1216_);
lean_dec_ref(v_e_1207_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10(lean_object* v___x_1219_, lean_object* v_inst_1220_, lean_object* v_____do__lift_1221_){
_start:
{
uint8_t v___x_1222_; uint8_t v___x_1223_; uint8_t v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1222_ = 0;
v___x_1223_ = 1;
v___x_1224_ = 1;
v___x_1225_ = lean_box(v___x_1222_);
v___x_1226_ = lean_box(v___x_1223_);
v___x_1227_ = lean_box(v___x_1222_);
v___x_1228_ = lean_box(v___x_1223_);
v___x_1229_ = lean_box(v___x_1224_);
v___x_1230_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1230_, 0, v___x_1219_);
lean_closure_set(v___x_1230_, 1, v_____do__lift_1221_);
lean_closure_set(v___x_1230_, 2, v___x_1225_);
lean_closure_set(v___x_1230_, 3, v___x_1226_);
lean_closure_set(v___x_1230_, 4, v___x_1227_);
lean_closure_set(v___x_1230_, 5, v___x_1228_);
lean_closure_set(v___x_1230_, 6, v___x_1229_);
v___x_1231_ = lean_apply_2(v_inst_1220_, lean_box(0), v___x_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11(lean_object* v_inst_1232_, lean_object* v_onAlt_1233_, lean_object* v_resTy_1234_, lean_object* v_toBind_1235_, lean_object* v_h_1236_){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___f_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1237_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1238_ = lean_unsigned_to_nat(0u);
v___x_1239_ = lean_unsigned_to_nat(1u);
v___x_1240_ = lean_mk_empty_array_with_capacity(v___x_1239_);
v___x_1241_ = lean_array_push(v___x_1240_, v_h_1236_);
lean_inc_ref_n(v___x_1241_, 2);
v___f_1242_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10), 3, 2);
lean_closure_set(v___f_1242_, 0, v___x_1241_);
lean_closure_set(v___f_1242_, 1, v_inst_1232_);
v___x_1243_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0));
v___x_1244_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1241_);
lean_ctor_set(v___x_1244_, 1, v___x_1241_);
lean_ctor_set(v___x_1244_, 2, v___x_1243_);
lean_ctor_set(v___x_1244_, 3, v___x_1243_);
lean_ctor_set(v___x_1244_, 4, v___x_1243_);
v___x_1245_ = lean_apply_4(v_onAlt_1233_, v___x_1237_, v_resTy_1234_, v___x_1238_, v___x_1244_);
v___x_1246_ = lean_apply_4(v_toBind_1235_, lean_box(0), lean_box(0), v___x_1245_, v___f_1242_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13(lean_object* v___x_1247_, lean_object* v_inst_1248_, lean_object* v_onAlt_1249_, lean_object* v_resTy_1250_, lean_object* v_toBind_1251_, lean_object* v_h_1252_){
_start:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___f_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1253_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1254_ = lean_mk_empty_array_with_capacity(v___x_1247_);
v___x_1255_ = lean_array_push(v___x_1254_, v_h_1252_);
lean_inc_ref_n(v___x_1255_, 2);
v___f_1256_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10), 3, 2);
lean_closure_set(v___f_1256_, 0, v___x_1255_);
lean_closure_set(v___f_1256_, 1, v_inst_1248_);
v___x_1257_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0));
v___x_1258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1255_);
lean_ctor_set(v___x_1258_, 1, v___x_1255_);
lean_ctor_set(v___x_1258_, 2, v___x_1257_);
lean_ctor_set(v___x_1258_, 3, v___x_1257_);
lean_ctor_set(v___x_1258_, 4, v___x_1257_);
v___x_1259_ = lean_apply_4(v_onAlt_1249_, v___x_1253_, v_resTy_1250_, v___x_1247_, v___x_1258_);
v___x_1260_ = lean_apply_4(v_toBind_1251_, lean_box(0), lean_box(0), v___x_1259_, v___f_1256_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(lean_object* v_inst_1261_, lean_object* v_onAlt_1262_, lean_object* v_resTy_1263_, lean_object* v_toBind_1264_, lean_object* v_e_1265_, lean_object* v_toPure_1266_, lean_object* v_inst_1267_, lean_object* v_inst_1268_, lean_object* v___f_1269_, lean_object* v_u_1270_){
_start:
{
lean_object* v___x_1271_; lean_object* v___f_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v_c_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v_h_1280_; lean_object* v___f_1281_; lean_object* v___f_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1271_ = lean_unsigned_to_nat(1u);
lean_inc_n(v_toBind_1264_, 2);
lean_inc_ref(v_resTy_1263_);
lean_inc(v_inst_1261_);
v___f_1272_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13), 6, 5);
lean_closure_set(v___f_1272_, 0, v___x_1271_);
lean_closure_set(v___f_1272_, 1, v_inst_1261_);
lean_closure_set(v___f_1272_, 2, v_onAlt_1262_);
lean_closure_set(v___f_1272_, 3, v_resTy_1263_);
lean_closure_set(v___f_1272_, 4, v_toBind_1264_);
v___x_1273_ = l_Lean_Expr_getAppNumArgs(v_e_1265_);
v___x_1274_ = lean_nat_sub(v___x_1273_, v___x_1271_);
v___x_1275_ = lean_nat_sub(v___x_1274_, v___x_1271_);
lean_dec(v___x_1274_);
v_c_1276_ = l_Lean_Expr_getRevArg_x21(v_e_1265_, v___x_1275_);
v___x_1277_ = lean_unsigned_to_nat(2u);
v___x_1278_ = lean_nat_sub(v___x_1273_, v___x_1277_);
lean_dec(v___x_1273_);
v___x_1279_ = lean_nat_sub(v___x_1278_, v___x_1271_);
lean_dec(v___x_1278_);
v_h_1280_ = l_Lean_Expr_getRevArg_x21(v_e_1265_, v___x_1279_);
v___f_1281_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7), 11, 10);
lean_closure_set(v___f_1281_, 0, v_u_1270_);
lean_closure_set(v___f_1281_, 1, v_resTy_1263_);
lean_closure_set(v___f_1281_, 2, v_c_1276_);
lean_closure_set(v___f_1281_, 3, v_h_1280_);
lean_closure_set(v___f_1281_, 4, v_toPure_1266_);
lean_closure_set(v___f_1281_, 5, v_inst_1267_);
lean_closure_set(v___f_1281_, 6, v_inst_1268_);
lean_closure_set(v___f_1281_, 7, v___f_1272_);
lean_closure_set(v___f_1281_, 8, v_toBind_1264_);
lean_closure_set(v___f_1281_, 9, v___f_1269_);
v___f_1282_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1283_ = lean_apply_2(v_inst_1261_, lean_box(0), v___f_1282_);
v___x_1284_ = lean_apply_4(v_toBind_1264_, lean_box(0), lean_box(0), v___x_1283_, v___f_1281_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed(lean_object* v_inst_1285_, lean_object* v_onAlt_1286_, lean_object* v_resTy_1287_, lean_object* v_toBind_1288_, lean_object* v_e_1289_, lean_object* v_toPure_1290_, lean_object* v_inst_1291_, lean_object* v_inst_1292_, lean_object* v___f_1293_, lean_object* v_u_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(v_inst_1285_, v_onAlt_1286_, v_resTy_1287_, v_toBind_1288_, v_e_1289_, v_toPure_1290_, v_inst_1291_, v_inst_1292_, v___f_1293_, v_u_1294_);
lean_dec_ref(v_e_1289_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12(lean_object* v_u_1296_, lean_object* v_resTy_1297_, lean_object* v_c_1298_, lean_object* v_t_1299_, lean_object* v_toPure_1300_, lean_object* v_e_1301_){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1302_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_1303_ = lean_box(0);
v___x_1304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1304_, 0, v_u_1296_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
v___x_1305_ = l_Lean_mkConst(v___x_1302_, v___x_1304_);
v___x_1306_ = l_Lean_mkApp4(v___x_1305_, v_resTy_1297_, v_c_1298_, v_t_1299_, v_e_1301_);
v___x_1307_ = lean_apply_2(v_toPure_1300_, lean_box(0), v___x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14(lean_object* v_u_1308_, lean_object* v_resTy_1309_, lean_object* v_c_1310_, lean_object* v_toPure_1311_, lean_object* v_onAlt_1312_, lean_object* v___x_1313_, lean_object* v___x_1314_, lean_object* v_toBind_1315_, lean_object* v_t_1316_){
_start:
{
lean_object* v___f_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
lean_inc_ref(v_resTy_1309_);
v___f_1317_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12), 6, 5);
lean_closure_set(v___f_1317_, 0, v_u_1308_);
lean_closure_set(v___f_1317_, 1, v_resTy_1309_);
lean_closure_set(v___f_1317_, 2, v_c_1310_);
lean_closure_set(v___f_1317_, 3, v_t_1316_);
lean_closure_set(v___f_1317_, 4, v_toPure_1311_);
v___x_1318_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1319_ = lean_apply_4(v_onAlt_1312_, v___x_1318_, v_resTy_1309_, v___x_1313_, v___x_1314_);
v___x_1320_ = lean_apply_4(v_toBind_1315_, lean_box(0), lean_box(0), v___x_1319_, v___f_1317_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(lean_object* v___x_1322_, lean_object* v_u_1323_, lean_object* v___x_1324_, lean_object* v_resTy_1325_, lean_object* v_c_1326_, lean_object* v_t_1327_, lean_object* v_toPure_1328_, lean_object* v_e_1329_){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1330_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___closed__0));
v___x_1331_ = l_Lean_Name_mkStr2(v___x_1322_, v___x_1330_);
v___x_1332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1332_, 0, v_u_1323_);
lean_ctor_set(v___x_1332_, 1, v___x_1324_);
v___x_1333_ = l_Lean_mkConst(v___x_1331_, v___x_1332_);
v___x_1334_ = l_Lean_mkApp4(v___x_1333_, v_resTy_1325_, v_c_1326_, v_t_1327_, v_e_1329_);
v___x_1335_ = lean_apply_2(v_toPure_1328_, lean_box(0), v___x_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(lean_object* v___x_1336_, lean_object* v_u_1337_, lean_object* v___x_1338_, lean_object* v_resTy_1339_, lean_object* v_c_1340_, lean_object* v_toPure_1341_, lean_object* v_inst_1342_, lean_object* v_inst_1343_, lean_object* v_n_1344_, uint8_t v___x_1345_, lean_object* v_hFalse_1346_, lean_object* v___f_1347_, uint8_t v___x_1348_, lean_object* v_toBind_1349_, lean_object* v_t_1350_){
_start:
{
lean_object* v___f_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___f_1351_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20), 8, 7);
lean_closure_set(v___f_1351_, 0, v___x_1336_);
lean_closure_set(v___f_1351_, 1, v_u_1337_);
lean_closure_set(v___f_1351_, 2, v___x_1338_);
lean_closure_set(v___f_1351_, 3, v_resTy_1339_);
lean_closure_set(v___f_1351_, 4, v_c_1340_);
lean_closure_set(v___f_1351_, 5, v_t_1350_);
lean_closure_set(v___f_1351_, 6, v_toPure_1341_);
v___x_1352_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1342_, v_inst_1343_, v_n_1344_, v___x_1345_, v_hFalse_1346_, v___f_1347_, v___x_1348_);
v___x_1353_ = lean_apply_4(v_toBind_1349_, lean_box(0), lean_box(0), v___x_1352_, v___f_1351_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15___boxed(lean_object* v___x_1354_, lean_object* v_u_1355_, lean_object* v___x_1356_, lean_object* v_resTy_1357_, lean_object* v_c_1358_, lean_object* v_toPure_1359_, lean_object* v_inst_1360_, lean_object* v_inst_1361_, lean_object* v_n_1362_, lean_object* v___x_1363_, lean_object* v_hFalse_1364_, lean_object* v___f_1365_, lean_object* v___x_1366_, lean_object* v_toBind_1367_, lean_object* v_t_1368_){
_start:
{
uint8_t v___x_2001__boxed_1369_; uint8_t v___x_2003__boxed_1370_; lean_object* v_res_1371_; 
v___x_2001__boxed_1369_ = lean_unbox(v___x_1363_);
v___x_2003__boxed_1370_ = lean_unbox(v___x_1366_);
v_res_1371_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(v___x_1354_, v_u_1355_, v___x_1356_, v_resTy_1357_, v_c_1358_, v_toPure_1359_, v_inst_1360_, v_inst_1361_, v_n_1362_, v___x_2001__boxed_1369_, v_hFalse_1364_, v___f_1365_, v___x_2003__boxed_1370_, v_toBind_1367_, v_t_1368_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16(lean_object* v___x_1372_, lean_object* v_u_1373_, lean_object* v___x_1374_, lean_object* v_resTy_1375_, lean_object* v_c_1376_, lean_object* v_toPure_1377_, lean_object* v_inst_1378_, lean_object* v_inst_1379_, lean_object* v_n_1380_, lean_object* v___f_1381_, lean_object* v_toBind_1382_, lean_object* v_hTrue_1383_, lean_object* v___f_1384_, lean_object* v_hFalse_1385_){
_start:
{
uint8_t v___x_1386_; uint8_t v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___f_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1386_ = 0;
v___x_1387_ = 0;
v___x_1388_ = lean_box(v___x_1386_);
v___x_1389_ = lean_box(v___x_1387_);
lean_inc(v_toBind_1382_);
lean_inc(v_n_1380_);
lean_inc_ref(v_inst_1379_);
lean_inc_ref(v_inst_1378_);
v___f_1390_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15___boxed), 15, 14);
lean_closure_set(v___f_1390_, 0, v___x_1372_);
lean_closure_set(v___f_1390_, 1, v_u_1373_);
lean_closure_set(v___f_1390_, 2, v___x_1374_);
lean_closure_set(v___f_1390_, 3, v_resTy_1375_);
lean_closure_set(v___f_1390_, 4, v_c_1376_);
lean_closure_set(v___f_1390_, 5, v_toPure_1377_);
lean_closure_set(v___f_1390_, 6, v_inst_1378_);
lean_closure_set(v___f_1390_, 7, v_inst_1379_);
lean_closure_set(v___f_1390_, 8, v_n_1380_);
lean_closure_set(v___f_1390_, 9, v___x_1388_);
lean_closure_set(v___f_1390_, 10, v_hFalse_1385_);
lean_closure_set(v___f_1390_, 11, v___f_1381_);
lean_closure_set(v___f_1390_, 12, v___x_1389_);
lean_closure_set(v___f_1390_, 13, v_toBind_1382_);
v___x_1391_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1378_, v_inst_1379_, v_n_1380_, v___x_1386_, v_hTrue_1383_, v___f_1384_, v___x_1387_);
v___x_1392_ = lean_apply_4(v_toBind_1382_, lean_box(0), lean_box(0), v___x_1391_, v___f_1390_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18(lean_object* v___x_1394_, lean_object* v_u_1395_, lean_object* v___x_1396_, lean_object* v_resTy_1397_, lean_object* v_c_1398_, lean_object* v_toPure_1399_, lean_object* v_inst_1400_, lean_object* v_inst_1401_, lean_object* v_n_1402_, lean_object* v___f_1403_, lean_object* v_toBind_1404_, lean_object* v___f_1405_, lean_object* v_inst_1406_, lean_object* v_hTrue_1407_){
_start:
{
lean_object* v___f_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
lean_inc(v_toBind_1404_);
lean_inc_ref(v_c_1398_);
lean_inc(v___x_1396_);
lean_inc_ref(v___x_1394_);
v___f_1408_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16), 14, 13);
lean_closure_set(v___f_1408_, 0, v___x_1394_);
lean_closure_set(v___f_1408_, 1, v_u_1395_);
lean_closure_set(v___f_1408_, 2, v___x_1396_);
lean_closure_set(v___f_1408_, 3, v_resTy_1397_);
lean_closure_set(v___f_1408_, 4, v_c_1398_);
lean_closure_set(v___f_1408_, 5, v_toPure_1399_);
lean_closure_set(v___f_1408_, 6, v_inst_1400_);
lean_closure_set(v___f_1408_, 7, v_inst_1401_);
lean_closure_set(v___f_1408_, 8, v_n_1402_);
lean_closure_set(v___f_1408_, 9, v___f_1403_);
lean_closure_set(v___f_1408_, 10, v_toBind_1404_);
lean_closure_set(v___f_1408_, 11, v_hTrue_1407_);
lean_closure_set(v___f_1408_, 12, v___f_1405_);
v___x_1409_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0));
v___x_1410_ = l_Lean_Name_mkStr2(v___x_1394_, v___x_1409_);
v___x_1411_ = l_Lean_mkConst(v___x_1410_, v___x_1396_);
v___x_1412_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_1412_, 0, v_c_1398_);
lean_closure_set(v___x_1412_, 1, v___x_1411_);
v___x_1413_ = lean_apply_2(v_inst_1406_, lean_box(0), v___x_1412_);
v___x_1414_ = lean_apply_4(v_toBind_1404_, lean_box(0), lean_box(0), v___x_1413_, v___f_1408_);
return v___x_1414_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2(void){
_start:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1419_ = lean_box(0);
v___x_1420_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1));
v___x_1421_ = l_Lean_mkConst(v___x_1420_, v___x_1419_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(lean_object* v_u_1422_, lean_object* v_resTy_1423_, lean_object* v_c_1424_, lean_object* v_toPure_1425_, lean_object* v_inst_1426_, lean_object* v_inst_1427_, lean_object* v___f_1428_, lean_object* v_toBind_1429_, lean_object* v___f_1430_, lean_object* v_inst_1431_, lean_object* v_n_1432_){
_start:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___f_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1433_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__20));
v___x_1434_ = lean_box(0);
lean_inc(v_inst_1431_);
lean_inc(v_toBind_1429_);
lean_inc_ref(v_c_1424_);
v___f_1435_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18), 14, 13);
lean_closure_set(v___f_1435_, 0, v___x_1433_);
lean_closure_set(v___f_1435_, 1, v_u_1422_);
lean_closure_set(v___f_1435_, 2, v___x_1434_);
lean_closure_set(v___f_1435_, 3, v_resTy_1423_);
lean_closure_set(v___f_1435_, 4, v_c_1424_);
lean_closure_set(v___f_1435_, 5, v_toPure_1425_);
lean_closure_set(v___f_1435_, 6, v_inst_1426_);
lean_closure_set(v___f_1435_, 7, v_inst_1427_);
lean_closure_set(v___f_1435_, 8, v_n_1432_);
lean_closure_set(v___f_1435_, 9, v___f_1428_);
lean_closure_set(v___f_1435_, 10, v_toBind_1429_);
lean_closure_set(v___f_1435_, 11, v___f_1430_);
lean_closure_set(v___f_1435_, 12, v_inst_1431_);
v___x_1436_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2, &l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__2);
v___x_1437_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_1437_, 0, v_c_1424_);
lean_closure_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = lean_apply_2(v_inst_1431_, lean_box(0), v___x_1437_);
v___x_1439_ = lean_apply_4(v_toBind_1429_, lean_box(0), lean_box(0), v___x_1438_, v___f_1435_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(lean_object* v_e_1440_, uint8_t v_useSplitter_1441_, lean_object* v_resTy_1442_, lean_object* v_toPure_1443_, lean_object* v_onAlt_1444_, lean_object* v_toBind_1445_, lean_object* v_inst_1446_, lean_object* v_inst_1447_, lean_object* v_inst_1448_, lean_object* v_u_1449_){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v_c_1454_; 
v___x_1450_ = lean_unsigned_to_nat(1u);
v___x_1451_ = l_Lean_Expr_getAppNumArgs(v_e_1440_);
v___x_1452_ = lean_nat_sub(v___x_1451_, v___x_1450_);
lean_dec(v___x_1451_);
v___x_1453_ = lean_nat_sub(v___x_1452_, v___x_1450_);
lean_dec(v___x_1452_);
v_c_1454_ = l_Lean_Expr_getRevArg_x21(v_e_1440_, v___x_1453_);
if (v_useSplitter_1441_ == 0)
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___f_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
lean_dec_ref(v_inst_1448_);
lean_dec_ref(v_inst_1447_);
lean_dec(v_inst_1446_);
v___x_1455_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1456_ = lean_unsigned_to_nat(0u);
v___x_1457_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1445_);
lean_inc(v_onAlt_1444_);
lean_inc_ref(v_resTy_1442_);
v___f_1458_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14), 9, 8);
lean_closure_set(v___f_1458_, 0, v_u_1449_);
lean_closure_set(v___f_1458_, 1, v_resTy_1442_);
lean_closure_set(v___f_1458_, 2, v_c_1454_);
lean_closure_set(v___f_1458_, 3, v_toPure_1443_);
lean_closure_set(v___f_1458_, 4, v_onAlt_1444_);
lean_closure_set(v___f_1458_, 5, v___x_1450_);
lean_closure_set(v___f_1458_, 6, v___x_1457_);
lean_closure_set(v___f_1458_, 7, v_toBind_1445_);
v___x_1459_ = lean_apply_4(v_onAlt_1444_, v___x_1455_, v_resTy_1442_, v___x_1456_, v___x_1457_);
v___x_1460_ = lean_apply_4(v_toBind_1445_, lean_box(0), lean_box(0), v___x_1459_, v___f_1458_);
return v___x_1460_;
}
else
{
lean_object* v___x_1461_; lean_object* v___f_1462_; lean_object* v___x_1463_; lean_object* v___f_1464_; lean_object* v___f_1465_; lean_object* v___f_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1461_ = lean_box(v_useSplitter_1441_);
lean_inc_n(v_toBind_1445_, 3);
lean_inc_ref_n(v_resTy_1442_, 2);
lean_inc(v_onAlt_1444_);
lean_inc_n(v_inst_1446_, 3);
v___f_1462_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_1462_, 0, v___x_1450_);
lean_closure_set(v___f_1462_, 1, v___x_1461_);
lean_closure_set(v___f_1462_, 2, v_inst_1446_);
lean_closure_set(v___f_1462_, 3, v_onAlt_1444_);
lean_closure_set(v___f_1462_, 4, v_resTy_1442_);
lean_closure_set(v___f_1462_, 5, v_toBind_1445_);
v___x_1463_ = lean_box(v_useSplitter_1441_);
v___f_1464_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1464_, 0, v___x_1450_);
lean_closure_set(v___f_1464_, 1, v___x_1463_);
lean_closure_set(v___f_1464_, 2, v_inst_1446_);
lean_closure_set(v___f_1464_, 3, v_onAlt_1444_);
lean_closure_set(v___f_1464_, 4, v_resTy_1442_);
lean_closure_set(v___f_1464_, 5, v_toBind_1445_);
v___f_1465_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19), 11, 10);
lean_closure_set(v___f_1465_, 0, v_u_1449_);
lean_closure_set(v___f_1465_, 1, v_resTy_1442_);
lean_closure_set(v___f_1465_, 2, v_c_1454_);
lean_closure_set(v___f_1465_, 3, v_toPure_1443_);
lean_closure_set(v___f_1465_, 4, v_inst_1447_);
lean_closure_set(v___f_1465_, 5, v_inst_1448_);
lean_closure_set(v___f_1465_, 6, v___f_1464_);
lean_closure_set(v___f_1465_, 7, v_toBind_1445_);
lean_closure_set(v___f_1465_, 8, v___f_1462_);
lean_closure_set(v___f_1465_, 9, v_inst_1446_);
v___f_1466_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1467_ = lean_apply_2(v_inst_1446_, lean_box(0), v___f_1466_);
v___x_1468_ = lean_apply_4(v_toBind_1445_, lean_box(0), lean_box(0), v___x_1467_, v___f_1465_);
return v___x_1468_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed(lean_object* v_e_1469_, lean_object* v_useSplitter_1470_, lean_object* v_resTy_1471_, lean_object* v_toPure_1472_, lean_object* v_onAlt_1473_, lean_object* v_toBind_1474_, lean_object* v_inst_1475_, lean_object* v_inst_1476_, lean_object* v_inst_1477_, lean_object* v_u_1478_){
_start:
{
uint8_t v_useSplitter_boxed_1479_; lean_object* v_res_1480_; 
v_useSplitter_boxed_1479_ = lean_unbox(v_useSplitter_1470_);
v_res_1480_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(v_e_1469_, v_useSplitter_boxed_1479_, v_resTy_1471_, v_toPure_1472_, v_onAlt_1473_, v_toBind_1474_, v_inst_1475_, v_inst_1476_, v_inst_1477_, v_u_1478_);
lean_dec_ref(v_e_1469_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(lean_object* v_onAlt_1481_, lean_object* v_idx_1482_, lean_object* v_expAltType_1483_, lean_object* v_altFVars_1484_, lean_object* v___alt_1485_){
_start:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1486_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2));
v___x_1487_ = lean_unsigned_to_nat(1u);
v___x_1488_ = lean_nat_add(v_idx_1482_, v___x_1487_);
v___x_1489_ = lean_name_append_index_after(v___x_1486_, v___x_1488_);
v___x_1490_ = lean_apply_4(v_onAlt_1481_, v___x_1489_, v_expAltType_1483_, v_idx_1482_, v_altFVars_1484_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___boxed(lean_object* v_onAlt_1491_, lean_object* v_idx_1492_, lean_object* v_expAltType_1493_, lean_object* v_altFVars_1494_, lean_object* v___alt_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(v_onAlt_1491_, v_idx_1492_, v_expAltType_1493_, v_altFVars_1494_, v___alt_1495_);
lean_dec_ref(v___alt_1495_);
return v_res_1496_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(lean_object* v_toMatcherInfo_1497_, lean_object* v_i_1498_, lean_object* v_a_1499_, lean_object* v_x_1500_){
_start:
{
uint8_t v___x_1501_; 
v___x_1501_ = l_Lean_Expr_isFVar(v_a_1499_);
if (v___x_1501_ == 0)
{
return v___x_1501_;
}
else
{
lean_object* v_discrInfos_1502_; lean_object* v___x_1503_; uint8_t v___x_1504_; 
v_discrInfos_1502_ = lean_ctor_get(v_toMatcherInfo_1497_, 4);
v___x_1503_ = lean_array_get_size(v_discrInfos_1502_);
v___x_1504_ = lean_nat_dec_lt(v_i_1498_, v___x_1503_);
if (v___x_1504_ == 0)
{
return v___x_1501_;
}
else
{
lean_object* v___x_1505_; 
v___x_1505_ = lean_array_fget_borrowed(v_discrInfos_1502_, v_i_1498_);
if (lean_obj_tag(v___x_1505_) == 0)
{
return v___x_1501_;
}
else
{
uint8_t v___x_1506_; 
v___x_1506_ = 0;
return v___x_1506_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23___boxed(lean_object* v_toMatcherInfo_1507_, lean_object* v_i_1508_, lean_object* v_a_1509_, lean_object* v_x_1510_){
_start:
{
uint8_t v_res_1511_; lean_object* v_r_1512_; 
v_res_1511_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(v_toMatcherInfo_1507_, v_i_1508_, v_a_1509_, v_x_1510_);
lean_dec_ref(v_a_1509_);
lean_dec(v_i_1508_);
lean_dec_ref(v_toMatcherInfo_1507_);
v_r_1512_ = lean_box(v_res_1511_);
return v_r_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(lean_object* v_mask_1513_, lean_object* v_absMotiveBody_1514_, lean_object* v_toPure_1515_, lean_object* v_xs_1516_, lean_object* v___body_1517_){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1518_ = l_Lean_Array_mask___redArg(v_mask_1513_, v_xs_1516_);
v___x_1519_ = lean_expr_instantiate_rev(v_absMotiveBody_1514_, v___x_1518_);
lean_dec(v___x_1518_);
v___x_1520_ = lean_apply_2(v_toPure_1515_, lean_box(0), v___x_1519_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed(lean_object* v_mask_1521_, lean_object* v_absMotiveBody_1522_, lean_object* v_toPure_1523_, lean_object* v_xs_1524_, lean_object* v___body_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(v_mask_1521_, v_absMotiveBody_1522_, v_toPure_1523_, v_xs_1524_, v___body_1525_);
lean_dec_ref(v___body_1525_);
lean_dec_ref(v_absMotiveBody_1522_);
lean_dec_ref(v_mask_1521_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25(lean_object* v_toFunctor_1527_, lean_object* v_mask_1528_, lean_object* v_toPure_1529_, lean_object* v_inst_1530_, lean_object* v_inst_1531_, lean_object* v_inst_1532_, lean_object* v_inst_1533_, lean_object* v_inst_1534_, lean_object* v_matcherApp_1535_, uint8_t v_useSplitter_1536_, lean_object* v___f_1537_, lean_object* v___f_1538_, lean_object* v_absMotiveBody_1539_){
_start:
{
lean_object* v_map_1540_; lean_object* v___f_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_map_1540_ = lean_ctor_get(v_toFunctor_1527_, 0);
lean_inc(v_map_1540_);
lean_dec_ref(v_toFunctor_1527_);
lean_inc(v_toPure_1529_);
v___f_1541_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed), 5, 3);
lean_closure_set(v___f_1541_, 0, v_mask_1528_);
lean_closure_set(v___f_1541_, 1, v_absMotiveBody_1539_);
lean_closure_set(v___f_1541_, 2, v_toPure_1529_);
v___x_1542_ = lean_apply_1(v_toPure_1529_, lean_box(0));
lean_inc(v___x_1542_);
v___x_1543_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_1530_, v_inst_1531_, v_inst_1532_, v_inst_1533_, v_inst_1534_, v_matcherApp_1535_, v_useSplitter_1536_, v_useSplitter_1536_, v___x_1542_, v___f_1541_, v___f_1537_, v___x_1542_);
v___x_1544_ = lean_apply_4(v_map_1540_, lean_box(0), lean_box(0), v___f_1538_, v___x_1543_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25___boxed(lean_object* v_toFunctor_1545_, lean_object* v_mask_1546_, lean_object* v_toPure_1547_, lean_object* v_inst_1548_, lean_object* v_inst_1549_, lean_object* v_inst_1550_, lean_object* v_inst_1551_, lean_object* v_inst_1552_, lean_object* v_matcherApp_1553_, lean_object* v_useSplitter_1554_, lean_object* v___f_1555_, lean_object* v___f_1556_, lean_object* v_absMotiveBody_1557_){
_start:
{
uint8_t v_useSplitter_boxed_1558_; lean_object* v_res_1559_; 
v_useSplitter_boxed_1558_ = lean_unbox(v_useSplitter_1554_);
v_res_1559_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25(v_toFunctor_1545_, v_mask_1546_, v_toPure_1547_, v_inst_1548_, v_inst_1549_, v_inst_1550_, v_inst_1551_, v_inst_1552_, v_matcherApp_1553_, v_useSplitter_boxed_1558_, v___f_1555_, v___f_1556_, v_absMotiveBody_1557_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(lean_object* v_inst_1561_, lean_object* v_inst_1562_, lean_object* v_inst_1563_, lean_object* v_inst_1564_, lean_object* v_inst_1565_, lean_object* v_info_1566_, lean_object* v_resTy_1567_, lean_object* v_onAlt_1568_, uint8_t v_useSplitter_1569_){
_start:
{
switch(lean_obj_tag(v_info_1566_))
{
case 0:
{
lean_object* v_toApplicative_1570_; lean_object* v_toBind_1571_; lean_object* v_toPure_1572_; lean_object* v_e_1573_; lean_object* v___x_1574_; lean_object* v___f_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v_toApplicative_1570_ = lean_ctor_get(v_inst_1563_, 0);
lean_dec_ref(v_inst_1565_);
lean_dec_ref(v_inst_1564_);
v_toBind_1571_ = lean_ctor_get(v_inst_1563_, 1);
lean_inc_n(v_toBind_1571_, 2);
v_toPure_1572_ = lean_ctor_get(v_toApplicative_1570_, 1);
lean_inc(v_toPure_1572_);
v_e_1573_ = lean_ctor_get(v_info_1566_, 0);
lean_inc_ref(v_e_1573_);
lean_dec_ref_known(v_info_1566_, 1);
v___x_1574_ = lean_box(v_useSplitter_1569_);
lean_inc(v_inst_1561_);
lean_inc_ref(v_resTy_1567_);
v___f_1575_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed), 10, 9);
lean_closure_set(v___f_1575_, 0, v_e_1573_);
lean_closure_set(v___f_1575_, 1, v___x_1574_);
lean_closure_set(v___f_1575_, 2, v_resTy_1567_);
lean_closure_set(v___f_1575_, 3, v_toPure_1572_);
lean_closure_set(v___f_1575_, 4, v_onAlt_1568_);
lean_closure_set(v___f_1575_, 5, v_toBind_1571_);
lean_closure_set(v___f_1575_, 6, v_inst_1561_);
lean_closure_set(v___f_1575_, 7, v_inst_1562_);
lean_closure_set(v___f_1575_, 8, v_inst_1563_);
v___x_1576_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1576_, 0, v_resTy_1567_);
v___x_1577_ = lean_apply_2(v_inst_1561_, lean_box(0), v___x_1576_);
v___x_1578_ = lean_apply_4(v_toBind_1571_, lean_box(0), lean_box(0), v___x_1577_, v___f_1575_);
return v___x_1578_;
}
case 1:
{
lean_object* v_toApplicative_1579_; lean_object* v_toBind_1580_; lean_object* v_toPure_1581_; lean_object* v_e_1582_; lean_object* v___f_1583_; lean_object* v___f_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v_toApplicative_1579_ = lean_ctor_get(v_inst_1563_, 0);
lean_dec_ref(v_inst_1565_);
lean_dec_ref(v_inst_1564_);
v_toBind_1580_ = lean_ctor_get(v_inst_1563_, 1);
lean_inc_n(v_toBind_1580_, 3);
v_toPure_1581_ = lean_ctor_get(v_toApplicative_1579_, 1);
lean_inc(v_toPure_1581_);
v_e_1582_ = lean_ctor_get(v_info_1566_, 0);
lean_inc_ref(v_e_1582_);
lean_dec_ref_known(v_info_1566_, 1);
lean_inc_ref_n(v_resTy_1567_, 2);
lean_inc(v_onAlt_1568_);
lean_inc_n(v_inst_1561_, 2);
v___f_1583_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11), 5, 4);
lean_closure_set(v___f_1583_, 0, v_inst_1561_);
lean_closure_set(v___f_1583_, 1, v_onAlt_1568_);
lean_closure_set(v___f_1583_, 2, v_resTy_1567_);
lean_closure_set(v___f_1583_, 3, v_toBind_1580_);
v___f_1584_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed), 10, 9);
lean_closure_set(v___f_1584_, 0, v_inst_1561_);
lean_closure_set(v___f_1584_, 1, v_onAlt_1568_);
lean_closure_set(v___f_1584_, 2, v_resTy_1567_);
lean_closure_set(v___f_1584_, 3, v_toBind_1580_);
lean_closure_set(v___f_1584_, 4, v_e_1582_);
lean_closure_set(v___f_1584_, 5, v_toPure_1581_);
lean_closure_set(v___f_1584_, 6, v_inst_1562_);
lean_closure_set(v___f_1584_, 7, v_inst_1563_);
lean_closure_set(v___f_1584_, 8, v___f_1583_);
v___x_1585_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1585_, 0, v_resTy_1567_);
v___x_1586_ = lean_apply_2(v_inst_1561_, lean_box(0), v___x_1585_);
v___x_1587_ = lean_apply_4(v_toBind_1580_, lean_box(0), lean_box(0), v___x_1586_, v___f_1584_);
return v___x_1587_;
}
case 2:
{
lean_object* v_toApplicative_1588_; lean_object* v_toBind_1589_; lean_object* v_toPure_1590_; lean_object* v_e_1591_; lean_object* v___x_1592_; lean_object* v___f_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v_toApplicative_1588_ = lean_ctor_get(v_inst_1563_, 0);
lean_dec_ref(v_inst_1565_);
lean_dec_ref(v_inst_1564_);
v_toBind_1589_ = lean_ctor_get(v_inst_1563_, 1);
lean_inc_n(v_toBind_1589_, 2);
v_toPure_1590_ = lean_ctor_get(v_toApplicative_1588_, 1);
lean_inc(v_toPure_1590_);
v_e_1591_ = lean_ctor_get(v_info_1566_, 0);
lean_inc_ref(v_e_1591_);
lean_dec_ref_known(v_info_1566_, 1);
v___x_1592_ = lean_box(v_useSplitter_1569_);
lean_inc(v_inst_1561_);
lean_inc_ref(v_resTy_1567_);
v___f_1593_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed), 10, 9);
lean_closure_set(v___f_1593_, 0, v_e_1591_);
lean_closure_set(v___f_1593_, 1, v___x_1592_);
lean_closure_set(v___f_1593_, 2, v_resTy_1567_);
lean_closure_set(v___f_1593_, 3, v_toPure_1590_);
lean_closure_set(v___f_1593_, 4, v_onAlt_1568_);
lean_closure_set(v___f_1593_, 5, v_toBind_1589_);
lean_closure_set(v___f_1593_, 6, v_inst_1561_);
lean_closure_set(v___f_1593_, 7, v_inst_1562_);
lean_closure_set(v___f_1593_, 8, v_inst_1563_);
v___x_1594_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1594_, 0, v_resTy_1567_);
v___x_1595_ = lean_apply_2(v_inst_1561_, lean_box(0), v___x_1594_);
v___x_1596_ = lean_apply_4(v_toBind_1589_, lean_box(0), lean_box(0), v___x_1595_, v___f_1593_);
return v___x_1596_;
}
default: 
{
lean_object* v_toApplicative_1597_; lean_object* v_matcherApp_1598_; lean_object* v_toBind_1599_; lean_object* v_toFunctor_1600_; lean_object* v_toPure_1601_; lean_object* v_toMatcherInfo_1602_; lean_object* v_discrs_1603_; lean_object* v___f_1604_; lean_object* v___f_1605_; lean_object* v___f_1606_; lean_object* v___x_1607_; size_t v_sz_1608_; size_t v___x_1609_; lean_object* v_mask_1610_; lean_object* v___x_1611_; lean_object* v___f_1612_; lean_object* v_maskedDiscrs_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v_toApplicative_1597_ = lean_ctor_get(v_inst_1563_, 0);
v_matcherApp_1598_ = lean_ctor_get(v_info_1566_, 0);
lean_inc_ref(v_matcherApp_1598_);
lean_dec_ref_known(v_info_1566_, 1);
v_toBind_1599_ = lean_ctor_get(v_inst_1563_, 1);
lean_inc(v_toBind_1599_);
v_toFunctor_1600_ = lean_ctor_get(v_toApplicative_1597_, 0);
lean_inc_ref(v_toFunctor_1600_);
v_toPure_1601_ = lean_ctor_get(v_toApplicative_1597_, 1);
lean_inc(v_toPure_1601_);
v_toMatcherInfo_1602_ = lean_ctor_get(v_matcherApp_1598_, 0);
v_discrs_1603_ = lean_ctor_get(v_matcherApp_1598_, 5);
lean_inc_ref_n(v_discrs_1603_, 2);
v___f_1604_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___boxed), 5, 1);
lean_closure_set(v___f_1604_, 0, v_onAlt_1568_);
v___f_1605_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0));
lean_inc_ref(v_toMatcherInfo_1602_);
v___f_1606_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23___boxed), 4, 1);
lean_closure_set(v___f_1606_, 0, v_toMatcherInfo_1602_);
v___x_1607_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___closed__9));
v_sz_1608_ = lean_array_size(v_discrs_1603_);
v___x_1609_ = ((size_t)0ULL);
v_mask_1610_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1607_, v_discrs_1603_, v___f_1606_, v_sz_1608_, v___x_1609_, v_discrs_1603_);
v___x_1611_ = lean_box(v_useSplitter_1569_);
lean_inc(v_inst_1561_);
lean_inc(v_mask_1610_);
v___f_1612_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25___boxed), 13, 12);
lean_closure_set(v___f_1612_, 0, v_toFunctor_1600_);
lean_closure_set(v___f_1612_, 1, v_mask_1610_);
lean_closure_set(v___f_1612_, 2, v_toPure_1601_);
lean_closure_set(v___f_1612_, 3, v_inst_1561_);
lean_closure_set(v___f_1612_, 4, v_inst_1562_);
lean_closure_set(v___f_1612_, 5, v_inst_1563_);
lean_closure_set(v___f_1612_, 6, v_inst_1564_);
lean_closure_set(v___f_1612_, 7, v_inst_1565_);
lean_closure_set(v___f_1612_, 8, v_matcherApp_1598_);
lean_closure_set(v___f_1612_, 9, v___x_1611_);
lean_closure_set(v___f_1612_, 10, v___f_1604_);
lean_closure_set(v___f_1612_, 11, v___f_1605_);
v_maskedDiscrs_1613_ = l_Lean_Array_mask___redArg(v_mask_1610_, v_discrs_1603_);
lean_dec(v_mask_1610_);
v___x_1614_ = lean_alloc_closure((void*)(l_Lean_Expr_abstractM___boxed), 7, 2);
lean_closure_set(v___x_1614_, 0, v_resTy_1567_);
lean_closure_set(v___x_1614_, 1, v_maskedDiscrs_1613_);
v___x_1615_ = lean_apply_2(v_inst_1561_, lean_box(0), v___x_1614_);
v___x_1616_ = lean_apply_4(v_toBind_1599_, lean_box(0), lean_box(0), v___x_1615_, v___f_1612_);
return v___x_1616_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___boxed(lean_object* v_inst_1617_, lean_object* v_inst_1618_, lean_object* v_inst_1619_, lean_object* v_inst_1620_, lean_object* v_inst_1621_, lean_object* v_info_1622_, lean_object* v_resTy_1623_, lean_object* v_onAlt_1624_, lean_object* v_useSplitter_1625_){
_start:
{
uint8_t v_useSplitter_boxed_1626_; lean_object* v_res_1627_; 
v_useSplitter_boxed_1626_ = lean_unbox(v_useSplitter_1625_);
v_res_1627_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(v_inst_1617_, v_inst_1618_, v_inst_1619_, v_inst_1620_, v_inst_1621_, v_info_1622_, v_resTy_1623_, v_onAlt_1624_, v_useSplitter_boxed_1626_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(lean_object* v_n_1628_, lean_object* v_inst_1629_, lean_object* v_inst_1630_, lean_object* v_inst_1631_, lean_object* v_inst_1632_, lean_object* v_inst_1633_, lean_object* v_inst_1634_, lean_object* v_inst_1635_, lean_object* v_inst_1636_, lean_object* v_info_1637_, lean_object* v_resTy_1638_, lean_object* v_onAlt_1639_, uint8_t v_useSplitter_1640_){
_start:
{
lean_object* v___x_1641_; 
v___x_1641_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(v_inst_1629_, v_inst_1630_, v_inst_1631_, v_inst_1632_, v_inst_1633_, v_info_1637_, v_resTy_1638_, v_onAlt_1639_, v_useSplitter_1640_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___boxed(lean_object* v_n_1642_, lean_object* v_inst_1643_, lean_object* v_inst_1644_, lean_object* v_inst_1645_, lean_object* v_inst_1646_, lean_object* v_inst_1647_, lean_object* v_inst_1648_, lean_object* v_inst_1649_, lean_object* v_inst_1650_, lean_object* v_info_1651_, lean_object* v_resTy_1652_, lean_object* v_onAlt_1653_, lean_object* v_useSplitter_1654_){
_start:
{
uint8_t v_useSplitter_boxed_1655_; lean_object* v_res_1656_; 
v_useSplitter_boxed_1655_ = lean_unbox(v_useSplitter_1654_);
v_res_1656_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(v_n_1642_, v_inst_1643_, v_inst_1644_, v_inst_1645_, v_inst_1646_, v_inst_1647_, v_inst_1648_, v_inst_1649_, v_inst_1650_, v_info_1651_, v_resTy_1652_, v_onAlt_1653_, v_useSplitter_boxed_1655_);
lean_dec(v_inst_1650_);
lean_dec(v_inst_1649_);
lean_dec_ref(v_inst_1648_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(lean_object* v_info_1657_, lean_object* v_e_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
if (lean_obj_tag(v_info_1657_) == 3)
{
lean_object* v_matcherApp_1667_; lean_object* v_toMatcherInfo_1668_; lean_object* v___x_1669_; 
v_matcherApp_1667_ = lean_ctor_get(v_info_1657_, 0);
lean_inc_ref(v_matcherApp_1667_);
lean_dec_ref_known(v_info_1657_, 1);
v_toMatcherInfo_1668_ = lean_ctor_get(v_matcherApp_1667_, 0);
lean_inc_ref(v_toMatcherInfo_1668_);
lean_dec_ref(v_matcherApp_1667_);
v___x_1669_ = l_Lean_Meta_Simp_simpMatchDiscrs_x3f(v_toMatcherInfo_1668_, v_e_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_);
return v___x_1669_;
}
else
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
lean_dec_ref(v_e_1658_);
lean_dec_ref(v_info_1657_);
v___x_1670_ = lean_box(0);
v___x_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1670_);
return v___x_1671_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f___boxed(lean_object* v_info_1672_, lean_object* v_e_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_){
_start:
{
lean_object* v_res_1682_; 
v_res_1682_ = l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(v_info_1672_, v_e_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v___y_1674_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(lean_object* v_declName_1683_, lean_object* v___y_1684_){
_start:
{
lean_object* v___x_1686_; lean_object* v_env_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1686_ = lean_st_ref_get(v___y_1684_);
v_env_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc_ref(v_env_1687_);
lean_dec(v___x_1686_);
v___x_1688_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_1687_, v_declName_1683_);
v___x_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg___boxed(lean_object* v_declName_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_1690_, v___y_1691_);
lean_dec(v___y_1691_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(lean_object* v_msgData_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_){
_start:
{
lean_object* v___x_1700_; lean_object* v_env_1701_; lean_object* v___x_1702_; lean_object* v_toCold_1703_; lean_object* v_mctx_1704_; lean_object* v_lctx_1705_; lean_object* v_options_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1700_ = lean_st_ref_get(v___y_1698_);
v_env_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc_ref(v_env_1701_);
lean_dec(v___x_1700_);
v___x_1702_ = lean_st_ref_get(v___y_1696_);
v_toCold_1703_ = lean_ctor_get(v___y_1697_, 0);
v_mctx_1704_ = lean_ctor_get(v___x_1702_, 0);
lean_inc_ref(v_mctx_1704_);
lean_dec(v___x_1702_);
v_lctx_1705_ = lean_ctor_get(v___y_1695_, 2);
v_options_1706_ = lean_ctor_get(v_toCold_1703_, 2);
lean_inc_ref(v_options_1706_);
lean_inc_ref(v_lctx_1705_);
v___x_1707_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1707_, 0, v_env_1701_);
lean_ctor_set(v___x_1707_, 1, v_mctx_1704_);
lean_ctor_set(v___x_1707_, 2, v_lctx_1705_);
lean_ctor_set(v___x_1707_, 3, v_options_1706_);
v___x_1708_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1707_);
lean_ctor_set(v___x_1708_, 1, v_msgData_1694_);
v___x_1709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1708_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11___boxed(lean_object* v_msgData_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(v_msgData_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec(v___y_1712_);
lean_dec_ref(v___y_1711_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(lean_object* v_msg_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
lean_object* v_ref_1723_; lean_object* v___x_1724_; lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1733_; 
v_ref_1723_ = lean_ctor_get(v___y_1720_, 2);
v___x_1724_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(v_msg_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_);
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1727_ = v___x_1724_;
v_isShared_1728_ = v_isSharedCheck_1733_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1724_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1733_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1729_; lean_object* v___x_1731_; 
lean_inc(v_ref_1723_);
v___x_1729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1729_, 0, v_ref_1723_);
lean_ctor_set(v___x_1729_, 1, v_a_1725_);
if (v_isShared_1728_ == 0)
{
lean_ctor_set_tag(v___x_1727_, 1);
lean_ctor_set(v___x_1727_, 0, v___x_1729_);
v___x_1731_ = v___x_1727_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v___x_1729_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg___boxed(lean_object* v_msg_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(lean_object* v_ref_1741_, lean_object* v_msg_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_){
_start:
{
lean_object* v_toCold_1748_; lean_object* v_currRecDepth_1749_; lean_object* v_ref_1750_; uint8_t v_diag_1751_; uint8_t v_suppressElabErrors_1752_; lean_object* v_ref_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v_toCold_1748_ = lean_ctor_get(v___y_1745_, 0);
v_currRecDepth_1749_ = lean_ctor_get(v___y_1745_, 1);
v_ref_1750_ = lean_ctor_get(v___y_1745_, 2);
v_diag_1751_ = lean_ctor_get_uint8(v___y_1745_, sizeof(void*)*3);
v_suppressElabErrors_1752_ = lean_ctor_get_uint8(v___y_1745_, sizeof(void*)*3 + 1);
v_ref_1753_ = l_Lean_replaceRef(v_ref_1741_, v_ref_1750_);
lean_inc(v_currRecDepth_1749_);
lean_inc_ref(v_toCold_1748_);
v___x_1754_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1754_, 0, v_toCold_1748_);
lean_ctor_set(v___x_1754_, 1, v_currRecDepth_1749_);
lean_ctor_set(v___x_1754_, 2, v_ref_1753_);
lean_ctor_set_uint8(v___x_1754_, sizeof(void*)*3, v_diag_1751_);
lean_ctor_set_uint8(v___x_1754_, sizeof(void*)*3 + 1, v_suppressElabErrors_1752_);
v___x_1755_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_1742_, v___y_1743_, v___y_1744_, v___x_1754_, v___y_1746_);
lean_dec_ref_known(v___x_1754_, 3);
return v___x_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg___boxed(lean_object* v_ref_1756_, lean_object* v_msg_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_){
_start:
{
lean_object* v_res_1763_; 
v_res_1763_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_1756_, v_msg_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec(v_ref_1756_);
return v_res_1763_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1764_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1765_);
return v___x_1766_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1767_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_1768_ = lean_unsigned_to_nat(0u);
v___x_1769_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1768_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
lean_ctor_set(v___x_1769_, 2, v___x_1768_);
lean_ctor_set(v___x_1769_, 3, v___x_1768_);
lean_ctor_set(v___x_1769_, 4, v___x_1767_);
lean_ctor_set(v___x_1769_, 5, v___x_1767_);
lean_ctor_set(v___x_1769_, 6, v___x_1767_);
lean_ctor_set(v___x_1769_, 7, v___x_1767_);
lean_ctor_set(v___x_1769_, 8, v___x_1767_);
lean_ctor_set(v___x_1769_, 9, v___x_1767_);
lean_ctor_set(v___x_1769_, 10, v___x_1767_);
return v___x_1769_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1770_ = lean_unsigned_to_nat(32u);
v___x_1771_ = lean_mk_empty_array_with_capacity(v___x_1770_);
v___x_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
return v___x_1772_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4(void){
_start:
{
size_t v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1773_ = ((size_t)5ULL);
v___x_1774_ = lean_unsigned_to_nat(0u);
v___x_1775_ = lean_unsigned_to_nat(32u);
v___x_1776_ = lean_mk_empty_array_with_capacity(v___x_1775_);
v___x_1777_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3);
v___x_1778_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1778_, 0, v___x_1777_);
lean_ctor_set(v___x_1778_, 1, v___x_1776_);
lean_ctor_set(v___x_1778_, 2, v___x_1774_);
lean_ctor_set(v___x_1778_, 3, v___x_1774_);
lean_ctor_set_usize(v___x_1778_, 4, v___x_1773_);
return v___x_1778_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1779_ = lean_box(1);
v___x_1780_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4);
v___x_1781_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_1782_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1781_);
lean_ctor_set(v___x_1782_, 1, v___x_1780_);
lean_ctor_set(v___x_1782_, 2, v___x_1779_);
return v___x_1782_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6));
v___x_1785_ = l_Lean_stringToMessageData(v___x_1784_);
return v___x_1785_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9(void){
_start:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1787_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8));
v___x_1788_ = l_Lean_stringToMessageData(v___x_1787_);
return v___x_1788_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11(void){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1790_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10));
v___x_1791_ = l_Lean_stringToMessageData(v___x_1790_);
return v___x_1791_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13(void){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1793_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12));
v___x_1794_ = l_Lean_stringToMessageData(v___x_1793_);
return v___x_1794_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15(void){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1796_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14));
v___x_1797_ = l_Lean_stringToMessageData(v___x_1796_);
return v___x_1797_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17(void){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16));
v___x_1800_ = l_Lean_stringToMessageData(v___x_1799_);
return v___x_1800_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19(void){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18));
v___x_1803_ = l_Lean_stringToMessageData(v___x_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(lean_object* v_msg_1804_, lean_object* v_declHint_1805_, lean_object* v___y_1806_){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v_env_1810_; uint8_t v___x_1811_; 
v___x_1808_ = lean_box(0);
v___x_1809_ = lean_st_ref_get(v___y_1806_);
v_env_1810_ = lean_ctor_get(v___x_1809_, 0);
lean_inc_ref(v_env_1810_);
lean_dec(v___x_1809_);
v___x_1811_ = l_Lean_Name_isAnonymous(v_declHint_1805_);
if (v___x_1811_ == 0)
{
uint8_t v_isExporting_1812_; 
v_isExporting_1812_ = lean_ctor_get_uint8(v_env_1810_, sizeof(void*)*8);
if (v_isExporting_1812_ == 0)
{
lean_object* v___x_1813_; 
lean_dec_ref(v_env_1810_);
lean_dec(v_declHint_1805_);
v___x_1813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1813_, 0, v_msg_1804_);
return v___x_1813_;
}
else
{
lean_object* v___x_1814_; uint8_t v___x_1815_; 
lean_inc_ref(v_env_1810_);
v___x_1814_ = l_Lean_Environment_setExporting(v_env_1810_, v___x_1811_);
lean_inc(v_declHint_1805_);
lean_inc_ref(v___x_1814_);
v___x_1815_ = l_Lean_Environment_contains(v___x_1814_, v_declHint_1805_, v_isExporting_1812_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; 
lean_dec_ref(v___x_1814_);
lean_dec_ref(v_env_1810_);
lean_dec(v_declHint_1805_);
v___x_1816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1816_, 0, v_msg_1804_);
return v___x_1816_;
}
else
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v_c_1822_; lean_object* v___x_1823_; 
v___x_1817_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2);
v___x_1818_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5);
v___x_1819_ = l_Lean_Options_empty;
v___x_1820_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1814_);
lean_ctor_set(v___x_1820_, 1, v___x_1817_);
lean_ctor_set(v___x_1820_, 2, v___x_1818_);
lean_ctor_set(v___x_1820_, 3, v___x_1819_);
lean_inc(v_declHint_1805_);
v___x_1821_ = l_Lean_MessageData_ofConstName(v_declHint_1805_, v___x_1811_);
v_c_1822_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1822_, 0, v___x_1820_);
lean_ctor_set(v_c_1822_, 1, v___x_1821_);
v___x_1823_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1810_, v_declHint_1805_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
lean_dec_ref(v_env_1810_);
lean_dec(v_declHint_1805_);
v___x_1824_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_1825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
lean_ctor_set(v___x_1825_, 1, v_c_1822_);
v___x_1826_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9);
v___x_1827_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1825_);
lean_ctor_set(v___x_1827_, 1, v___x_1826_);
v___x_1828_ = l_Lean_MessageData_note(v___x_1827_);
v___x_1829_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1829_, 0, v_msg_1804_);
lean_ctor_set(v___x_1829_, 1, v___x_1828_);
v___x_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
return v___x_1830_;
}
else
{
lean_object* v_val_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1865_; 
v_val_1831_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1833_ = v___x_1823_;
v_isShared_1834_ = v_isSharedCheck_1865_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_val_1831_);
lean_dec(v___x_1823_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1865_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v_mod_1837_; uint8_t v___x_1838_; 
v___x_1835_ = l_Lean_Environment_header(v_env_1810_);
lean_dec_ref(v_env_1810_);
v___x_1836_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1835_);
v_mod_1837_ = lean_array_get(v___x_1808_, v___x_1836_, v_val_1831_);
lean_dec(v_val_1831_);
lean_dec_ref(v___x_1836_);
v___x_1838_ = l_Lean_isPrivateName(v_declHint_1805_);
lean_dec(v_declHint_1805_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1850_; 
v___x_1839_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11);
v___x_1840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
lean_ctor_set(v___x_1840_, 1, v_c_1822_);
v___x_1841_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13);
v___x_1842_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1840_);
lean_ctor_set(v___x_1842_, 1, v___x_1841_);
v___x_1843_ = l_Lean_MessageData_ofName(v_mod_1837_);
v___x_1844_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1842_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15);
v___x_1846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1844_);
lean_ctor_set(v___x_1846_, 1, v___x_1845_);
v___x_1847_ = l_Lean_MessageData_note(v___x_1846_);
v___x_1848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1848_, 0, v_msg_1804_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
if (v_isShared_1834_ == 0)
{
lean_ctor_set_tag(v___x_1833_, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1848_);
v___x_1850_ = v___x_1833_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1848_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
else
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1863_; 
v___x_1852_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_1853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1852_);
lean_ctor_set(v___x_1853_, 1, v_c_1822_);
v___x_1854_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17);
v___x_1855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1853_);
lean_ctor_set(v___x_1855_, 1, v___x_1854_);
v___x_1856_ = l_Lean_MessageData_ofName(v_mod_1837_);
v___x_1857_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1855_);
lean_ctor_set(v___x_1857_, 1, v___x_1856_);
v___x_1858_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19);
v___x_1859_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1857_);
lean_ctor_set(v___x_1859_, 1, v___x_1858_);
v___x_1860_ = l_Lean_MessageData_note(v___x_1859_);
v___x_1861_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1861_, 0, v_msg_1804_);
lean_ctor_set(v___x_1861_, 1, v___x_1860_);
if (v_isShared_1834_ == 0)
{
lean_ctor_set_tag(v___x_1833_, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1861_);
v___x_1863_ = v___x_1833_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1861_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1866_; 
lean_dec_ref(v_env_1810_);
lean_dec(v_declHint_1805_);
v___x_1866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1866_, 0, v_msg_1804_);
return v___x_1866_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_msg_1867_, lean_object* v_declHint_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_1867_, v_declHint_1868_, v___y_1869_);
lean_dec(v___y_1869_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(lean_object* v_msg_1872_, lean_object* v_declHint_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_){
_start:
{
lean_object* v___x_1879_; lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1889_; 
v___x_1879_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_1872_, v_declHint_1873_, v___y_1877_);
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1882_ = v___x_1879_;
v_isShared_1883_ = v_isSharedCheck_1889_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1879_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1889_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1887_; 
v___x_1884_ = l_Lean_unknownIdentifierMessageTag;
v___x_1885_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1884_);
lean_ctor_set(v___x_1885_, 1, v_a_1880_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 0, v___x_1885_);
v___x_1887_ = v___x_1882_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v___x_1885_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7___boxed(lean_object* v_msg_1890_, lean_object* v_declHint_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(v_msg_1890_, v_declHint_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_1898_, lean_object* v_msg_1899_, lean_object* v_declHint_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
lean_object* v___x_1906_; lean_object* v_a_1907_; lean_object* v___x_1908_; 
v___x_1906_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(v_msg_1899_, v_declHint_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
lean_inc(v_a_1907_);
lean_dec_ref(v___x_1906_);
v___x_1908_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_1898_, v_a_1907_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_1909_, lean_object* v_msg_1910_, lean_object* v_declHint_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1909_, v_msg_1910_, v_declHint_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_);
lean_dec(v___y_1915_);
lean_dec_ref(v___y_1914_);
lean_dec(v___y_1913_);
lean_dec_ref(v___y_1912_);
lean_dec(v_ref_1909_);
return v_res_1917_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; 
v___x_1919_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0));
v___x_1920_ = l_Lean_stringToMessageData(v___x_1919_);
return v___x_1920_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2));
v___x_1923_ = l_Lean_stringToMessageData(v___x_1922_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_1924_, lean_object* v_constName_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v___x_1931_; uint8_t v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1931_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_1932_ = 0;
lean_inc(v_constName_1925_);
v___x_1933_ = l_Lean_MessageData_ofConstName(v_constName_1925_, v___x_1932_);
v___x_1934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1931_);
lean_ctor_set(v___x_1934_, 1, v___x_1933_);
v___x_1935_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3);
v___x_1936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1934_);
lean_ctor_set(v___x_1936_, 1, v___x_1935_);
v___x_1937_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1924_, v___x_1936_, v_constName_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1938_, lean_object* v_constName_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1938_, v_constName_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
lean_dec(v_ref_1938_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_){
_start:
{
lean_object* v_ref_1952_; lean_object* v___x_1953_; 
v_ref_1952_ = lean_ctor_get(v___y_1949_, 2);
v___x_1953_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1952_, v_constName_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(lean_object* v_constName_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v___x_1967_; lean_object* v_env_1968_; uint8_t v___x_1969_; lean_object* v___x_1970_; 
v___x_1967_ = lean_st_ref_get(v___y_1965_);
v_env_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc_ref(v_env_1968_);
lean_dec(v___x_1967_);
v___x_1969_ = 0;
lean_inc(v_constName_1961_);
v___x_1970_ = l_Lean_Environment_find_x3f(v_env_1968_, v_constName_1961_, v___x_1969_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v___x_1971_; 
v___x_1971_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1971_;
}
else
{
lean_object* v_val_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_dec(v_constName_1961_);
v_val_1972_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1970_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_val_1972_);
lean_dec(v___x_1970_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
lean_ctor_set_tag(v___x_1974_, 0);
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_val_1972_);
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
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0___boxed(lean_object* v_constName_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_constName_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(lean_object* v_msg_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v___x_1993_; lean_object* v_toApplicative_1994_; lean_object* v_toFunctor_1995_; lean_object* v_toSeq_1996_; lean_object* v_toSeqLeft_1997_; lean_object* v_toSeqRight_1998_; lean_object* v___f_1999_; lean_object* v___f_2000_; lean_object* v___f_2001_; lean_object* v___f_2002_; lean_object* v___x_2003_; lean_object* v___f_2004_; lean_object* v___f_2005_; lean_object* v___f_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v_toApplicative_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2041_; 
v___x_1993_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11);
v_toApplicative_1994_ = lean_ctor_get(v___x_1993_, 0);
v_toFunctor_1995_ = lean_ctor_get(v_toApplicative_1994_, 0);
v_toSeq_1996_ = lean_ctor_get(v_toApplicative_1994_, 2);
v_toSeqLeft_1997_ = lean_ctor_get(v_toApplicative_1994_, 3);
v_toSeqRight_1998_ = lean_ctor_get(v_toApplicative_1994_, 4);
v___f_1999_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12));
v___f_2000_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_1995_, 2);
v___f_2001_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2001_, 0, v_toFunctor_1995_);
v___f_2002_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2002_, 0, v_toFunctor_1995_);
v___x_2003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2003_, 0, v___f_2001_);
lean_ctor_set(v___x_2003_, 1, v___f_2002_);
lean_inc(v_toSeqRight_1998_);
v___f_2004_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2004_, 0, v_toSeqRight_1998_);
lean_inc(v_toSeqLeft_1997_);
v___f_2005_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2005_, 0, v_toSeqLeft_1997_);
lean_inc(v_toSeq_1996_);
v___f_2006_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2006_, 0, v_toSeq_1996_);
v___x_2007_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2007_, 0, v___x_2003_);
lean_ctor_set(v___x_2007_, 1, v___f_1999_);
lean_ctor_set(v___x_2007_, 2, v___f_2006_);
lean_ctor_set(v___x_2007_, 3, v___f_2005_);
lean_ctor_set(v___x_2007_, 4, v___f_2004_);
v___x_2008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
lean_ctor_set(v___x_2008_, 1, v___f_2000_);
v___x_2009_ = l_StateRefT_x27_instMonad___redArg(v___x_2008_);
v_toApplicative_2010_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2041_ == 0)
{
lean_object* v_unused_2042_; 
v_unused_2042_ = lean_ctor_get(v___x_2009_, 1);
lean_dec(v_unused_2042_);
v___x_2012_ = v___x_2009_;
v_isShared_2013_ = v_isSharedCheck_2041_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_toApplicative_2010_);
lean_dec(v___x_2009_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2041_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v_toFunctor_2014_; lean_object* v_toSeq_2015_; lean_object* v_toSeqLeft_2016_; lean_object* v_toSeqRight_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2039_; 
v_toFunctor_2014_ = lean_ctor_get(v_toApplicative_2010_, 0);
v_toSeq_2015_ = lean_ctor_get(v_toApplicative_2010_, 2);
v_toSeqLeft_2016_ = lean_ctor_get(v_toApplicative_2010_, 3);
v_toSeqRight_2017_ = lean_ctor_get(v_toApplicative_2010_, 4);
v_isSharedCheck_2039_ = !lean_is_exclusive(v_toApplicative_2010_);
if (v_isSharedCheck_2039_ == 0)
{
lean_object* v_unused_2040_; 
v_unused_2040_ = lean_ctor_get(v_toApplicative_2010_, 1);
lean_dec(v_unused_2040_);
v___x_2019_ = v_toApplicative_2010_;
v_isShared_2020_ = v_isSharedCheck_2039_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_toSeqRight_2017_);
lean_inc(v_toSeqLeft_2016_);
lean_inc(v_toSeq_2015_);
lean_inc(v_toFunctor_2014_);
lean_dec(v_toApplicative_2010_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2039_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___f_2021_; lean_object* v___f_2022_; lean_object* v___f_2023_; lean_object* v___f_2024_; lean_object* v___x_2025_; lean_object* v___f_2026_; lean_object* v___f_2027_; lean_object* v___f_2028_; lean_object* v___x_2030_; 
v___f_2021_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__14));
v___f_2022_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__15));
lean_inc_ref(v_toFunctor_2014_);
v___f_2023_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2023_, 0, v_toFunctor_2014_);
v___f_2024_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2024_, 0, v_toFunctor_2014_);
v___x_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___f_2023_);
lean_ctor_set(v___x_2025_, 1, v___f_2024_);
v___f_2026_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2026_, 0, v_toSeqRight_2017_);
v___f_2027_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2027_, 0, v_toSeqLeft_2016_);
v___f_2028_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2028_, 0, v_toSeq_2015_);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 4, v___f_2026_);
lean_ctor_set(v___x_2019_, 3, v___f_2027_);
lean_ctor_set(v___x_2019_, 2, v___f_2028_);
lean_ctor_set(v___x_2019_, 1, v___f_2021_);
lean_ctor_set(v___x_2019_, 0, v___x_2025_);
v___x_2030_ = v___x_2019_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2025_);
lean_ctor_set(v_reuseFailAlloc_2038_, 1, v___f_2021_);
lean_ctor_set(v_reuseFailAlloc_2038_, 2, v___f_2028_);
lean_ctor_set(v_reuseFailAlloc_2038_, 3, v___f_2027_);
lean_ctor_set(v_reuseFailAlloc_2038_, 4, v___f_2026_);
v___x_2030_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
lean_object* v___x_2032_; 
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 1, v___f_2022_);
lean_ctor_set(v___x_2012_, 0, v___x_2030_);
v___x_2032_ = v___x_2012_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2030_);
lean_ctor_set(v_reuseFailAlloc_2037_, 1, v___f_2022_);
v___x_2032_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2932__overap_2035_; lean_object* v___x_2036_; 
v___x_2033_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_2034_ = l_instInhabitedOfMonad___redArg(v___x_2032_, v___x_2033_);
v___x_2932__overap_2035_ = lean_panic_fn_borrowed(v___x_2034_, v_msg_1987_);
lean_dec(v___x_2034_);
lean_inc(v___y_1991_);
lean_inc_ref(v___y_1990_);
lean_inc(v___y_1989_);
lean_inc_ref(v___y_1988_);
v___x_2036_ = lean_apply_5(v___x_2932__overap_2035_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, lean_box(0));
return v___x_2036_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1___boxed(lean_object* v_msg_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
lean_object* v_res_2049_; 
v_res_2049_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(v_msg_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
return v_res_2049_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; 
v___x_2053_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2));
v___x_2054_ = lean_unsigned_to_nat(53u);
v___x_2055_ = lean_unsigned_to_nat(62u);
v___x_2056_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1));
v___x_2057_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0));
v___x_2058_ = l_mkPanicMessageWithDecl(v___x_2057_, v___x_2056_, v___x_2055_, v___x_2054_, v___x_2053_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(size_t v_sz_2059_, size_t v_i_2060_, lean_object* v_bs_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
uint8_t v___x_2067_; 
v___x_2067_ = lean_usize_dec_lt(v_i_2060_, v_sz_2059_);
if (v___x_2067_ == 0)
{
lean_object* v___x_2068_; 
v___x_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2068_, 0, v_bs_2061_);
return v___x_2068_;
}
else
{
lean_object* v_v_2069_; lean_object* v___x_2070_; lean_object* v_bs_x27_2071_; lean_object* v_a_2073_; lean_object* v___x_2078_; 
v_v_2069_ = lean_array_uget(v_bs_2061_, v_i_2060_);
v___x_2070_ = lean_unsigned_to_nat(0u);
v_bs_x27_2071_ = lean_array_uset(v_bs_2061_, v_i_2060_, v___x_2070_);
v___x_2078_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_v_2069_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v_a_2079_; 
v_a_2079_ = lean_ctor_get(v___x_2078_, 0);
lean_inc(v_a_2079_);
lean_dec_ref_known(v___x_2078_, 1);
if (lean_obj_tag(v_a_2079_) == 6)
{
lean_object* v_val_2080_; lean_object* v_numFields_2081_; uint8_t v___x_2082_; lean_object* v___x_2083_; 
v_val_2080_ = lean_ctor_get(v_a_2079_, 0);
lean_inc_ref(v_val_2080_);
lean_dec_ref_known(v_a_2079_, 1);
v_numFields_2081_ = lean_ctor_get(v_val_2080_, 4);
lean_inc(v_numFields_2081_);
lean_dec_ref(v_val_2080_);
v___x_2082_ = 0;
v___x_2083_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2083_, 0, v_numFields_2081_);
lean_ctor_set(v___x_2083_, 1, v___x_2070_);
lean_ctor_set_uint8(v___x_2083_, sizeof(void*)*2, v___x_2082_);
v_a_2073_ = v___x_2083_;
goto v___jp_2072_;
}
else
{
lean_object* v___x_2084_; lean_object* v___x_2085_; 
lean_dec(v_a_2079_);
v___x_2084_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3);
v___x_2085_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(v___x_2084_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; 
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
lean_inc(v_a_2086_);
lean_dec_ref_known(v___x_2085_, 1);
v_a_2073_ = v_a_2086_;
goto v___jp_2072_;
}
else
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2094_; 
lean_dec_ref(v_bs_x27_2071_);
v_a_2087_ = lean_ctor_get(v___x_2085_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2085_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2089_ = v___x_2085_;
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2085_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2092_; 
if (v_isShared_2090_ == 0)
{
v___x_2092_ = v___x_2089_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_a_2087_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
}
else
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2102_; 
lean_dec_ref(v_bs_x27_2071_);
v_a_2095_ = lean_ctor_get(v___x_2078_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2097_ = v___x_2078_;
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v___x_2078_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2100_; 
if (v_isShared_2098_ == 0)
{
v___x_2100_ = v___x_2097_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_a_2095_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
v___jp_2072_:
{
size_t v___x_2074_; size_t v___x_2075_; lean_object* v___x_2076_; 
v___x_2074_ = ((size_t)1ULL);
v___x_2075_ = lean_usize_add(v_i_2060_, v___x_2074_);
v___x_2076_ = lean_array_uset(v_bs_x27_2071_, v_i_2060_, v_a_2073_);
v_i_2060_ = v___x_2075_;
v_bs_2061_ = v___x_2076_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___boxed(lean_object* v_sz_2103_, lean_object* v_i_2104_, lean_object* v_bs_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_){
_start:
{
size_t v_sz_boxed_2111_; size_t v_i_boxed_2112_; lean_object* v_res_2113_; 
v_sz_boxed_2111_ = lean_unbox_usize(v_sz_2103_);
lean_dec(v_sz_2103_);
v_i_boxed_2112_ = lean_unbox_usize(v_i_2104_);
lean_dec(v_i_2104_);
v_res_2113_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(v_sz_boxed_2111_, v_i_boxed_2112_, v_bs_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
return v_res_2113_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2114_; lean_object* v_dummy_2115_; 
v___x_2114_ = lean_box(0);
v_dummy_2115_ = l_Lean_Expr_sort___override(v___x_2114_);
return v_dummy_2115_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2116_ = lean_box(0);
v___x_2117_ = lean_unsigned_to_nat(16u);
v___x_2118_ = lean_mk_array(v___x_2117_, v___x_2116_);
return v___x_2118_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2119_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1);
v___x_2120_ = lean_unsigned_to_nat(0u);
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
lean_ctor_set(v___x_2121_, 1, v___x_2119_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(lean_object* v_e_2124_, uint8_t v_alsoCasesOn_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
uint8_t v___x_2134_; 
v___x_2134_ = l_Lean_Expr_isApp(v_e_2124_);
if (v___x_2134_ == 0)
{
lean_object* v___x_2135_; lean_object* v___x_2136_; 
lean_dec_ref(v_e_2124_);
v___x_2135_ = lean_box(0);
v___x_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2135_);
return v___x_2136_;
}
else
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Lean_Expr_getAppFn(v_e_2124_);
if (lean_obj_tag(v___x_2137_) == 4)
{
lean_object* v_declName_2138_; lean_object* v_us_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v_a_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2294_; 
v_declName_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc_n(v_declName_2138_, 2);
v_us_2139_ = lean_ctor_get(v___x_2137_, 1);
lean_inc(v_us_2139_);
lean_dec_ref_known(v___x_2137_, 2);
v___x_2140_ = l_Lean_instInhabitedExpr;
v___x_2141_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2138_, v___y_2129_);
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2144_ = v___x_2141_;
v_isShared_2145_ = v_isSharedCheck_2294_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_a_2142_);
lean_dec(v___x_2141_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2294_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
if (lean_obj_tag(v_a_2142_) == 1)
{
lean_object* v_val_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2187_; 
v_val_2146_ = lean_ctor_get(v_a_2142_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_a_2142_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2148_ = v_a_2142_;
v_isShared_2149_ = v_isSharedCheck_2187_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_val_2146_);
lean_dec(v_a_2142_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2187_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v_dummy_2150_; lean_object* v_nargs_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v_args_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; uint8_t v___x_2158_; 
v_dummy_2150_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0);
v_nargs_2151_ = l_Lean_Expr_getAppNumArgs(v_e_2124_);
lean_inc(v_nargs_2151_);
v___x_2152_ = lean_mk_array(v_nargs_2151_, v_dummy_2150_);
v___x_2153_ = lean_unsigned_to_nat(1u);
v___x_2154_ = lean_nat_sub(v_nargs_2151_, v___x_2153_);
lean_dec(v_nargs_2151_);
v_args_2155_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2124_, v___x_2152_, v___x_2154_);
v___x_2156_ = lean_array_get_size(v_args_2155_);
v___x_2157_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_2146_);
v___x_2158_ = lean_nat_dec_lt(v___x_2156_, v___x_2157_);
lean_dec(v___x_2157_);
if (v___x_2158_ == 0)
{
lean_object* v_numParams_2159_; lean_object* v_numDiscrs_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2178_; 
v_numParams_2159_ = lean_ctor_get(v_val_2146_, 0);
v_numDiscrs_2160_ = lean_ctor_get(v_val_2146_, 1);
v___x_2161_ = lean_array_mk(v_us_2139_);
v___x_2162_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2159_);
v___x_2163_ = l_Array_extract___redArg(v_args_2155_, v___x_2162_, v_numParams_2159_);
v___x_2164_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_2146_);
v___x_2165_ = lean_array_get(v___x_2140_, v_args_2155_, v___x_2164_);
lean_dec(v___x_2164_);
v___x_2166_ = lean_nat_add(v_numParams_2159_, v___x_2153_);
v___x_2167_ = lean_nat_add(v___x_2166_, v_numDiscrs_2160_);
lean_inc(v___x_2167_);
lean_inc_ref_n(v_args_2155_, 2);
v___x_2168_ = l_Array_toSubarray___redArg(v_args_2155_, v___x_2166_, v___x_2167_);
v___x_2169_ = l_Subarray_copy___redArg(v___x_2168_);
v___x_2170_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_2146_);
v___x_2171_ = lean_nat_add(v___x_2167_, v___x_2170_);
lean_dec(v___x_2170_);
lean_inc(v___x_2171_);
v___x_2172_ = l_Array_toSubarray___redArg(v_args_2155_, v___x_2167_, v___x_2171_);
v___x_2173_ = l_Subarray_copy___redArg(v___x_2172_);
v___x_2174_ = l_Array_toSubarray___redArg(v_args_2155_, v___x_2171_, v___x_2156_);
v___x_2175_ = l_Subarray_copy___redArg(v___x_2174_);
v___x_2176_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2176_, 0, v_val_2146_);
lean_ctor_set(v___x_2176_, 1, v_declName_2138_);
lean_ctor_set(v___x_2176_, 2, v___x_2161_);
lean_ctor_set(v___x_2176_, 3, v___x_2163_);
lean_ctor_set(v___x_2176_, 4, v___x_2165_);
lean_ctor_set(v___x_2176_, 5, v___x_2169_);
lean_ctor_set(v___x_2176_, 6, v___x_2173_);
lean_ctor_set(v___x_2176_, 7, v___x_2175_);
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 0, v___x_2176_);
v___x_2178_ = v___x_2148_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
lean_object* v___x_2180_; 
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 0, v___x_2178_);
v___x_2180_ = v___x_2144_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2178_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
else
{
lean_object* v___x_2183_; lean_object* v___x_2185_; 
lean_dec_ref(v_args_2155_);
lean_del_object(v___x_2148_);
lean_dec(v_val_2146_);
lean_dec(v_us_2139_);
lean_dec(v_declName_2138_);
v___x_2183_ = lean_box(0);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 0, v___x_2183_);
v___x_2185_ = v___x_2144_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v___x_2183_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
else
{
lean_object* v___x_2188_; 
lean_del_object(v___x_2144_);
lean_dec(v_a_2142_);
v___x_2188_ = lean_st_ref_get(v___y_2129_);
if (v_alsoCasesOn_2125_ == 0)
{
lean_dec(v___x_2188_);
lean_dec(v_us_2139_);
lean_dec(v_declName_2138_);
lean_dec_ref(v_e_2124_);
goto v___jp_2131_;
}
else
{
lean_object* v_env_2189_; uint8_t v___x_2190_; 
v_env_2189_ = lean_ctor_get(v___x_2188_, 0);
lean_inc_ref(v_env_2189_);
lean_dec(v___x_2188_);
lean_inc(v_declName_2138_);
v___x_2190_ = l_Lean_isCasesOnRecursor(v_env_2189_, v_declName_2138_);
if (v___x_2190_ == 0)
{
lean_dec(v_us_2139_);
lean_dec(v_declName_2138_);
lean_dec_ref(v_e_2124_);
goto v___jp_2131_;
}
else
{
lean_object* v_indName_2191_; lean_object* v___x_2192_; 
v_indName_2191_ = l_Lean_Name_getPrefix(v_declName_2138_);
v___x_2192_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_indName_2191_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2285_; 
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2195_ = v___x_2192_;
v_isShared_2196_ = v_isSharedCheck_2285_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2192_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2285_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
if (lean_obj_tag(v_a_2193_) == 5)
{
lean_object* v_val_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2280_; 
v_val_2197_ = lean_ctor_get(v_a_2193_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v_a_2193_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2199_ = v_a_2193_;
v_isShared_2200_ = v_isSharedCheck_2280_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_val_2197_);
lean_dec(v_a_2193_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2280_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v_toConstantVal_2201_; lean_object* v_numParams_2202_; lean_object* v_numIndices_2203_; lean_object* v_ctors_2204_; lean_object* v_nargs_2205_; lean_object* v_dummy_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v_args_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; uint8_t v___x_2217_; 
v_toConstantVal_2201_ = lean_ctor_get(v_val_2197_, 0);
lean_inc_ref(v_toConstantVal_2201_);
v_numParams_2202_ = lean_ctor_get(v_val_2197_, 1);
lean_inc(v_numParams_2202_);
v_numIndices_2203_ = lean_ctor_get(v_val_2197_, 2);
lean_inc(v_numIndices_2203_);
v_ctors_2204_ = lean_ctor_get(v_val_2197_, 4);
lean_inc(v_ctors_2204_);
v_nargs_2205_ = l_Lean_Expr_getAppNumArgs(v_e_2124_);
v_dummy_2206_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0);
lean_inc(v_nargs_2205_);
v___x_2207_ = lean_mk_array(v_nargs_2205_, v_dummy_2206_);
v___x_2208_ = lean_unsigned_to_nat(1u);
v___x_2209_ = lean_nat_sub(v_nargs_2205_, v___x_2208_);
lean_dec(v_nargs_2205_);
v_args_2210_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2124_, v___x_2207_, v___x_2209_);
v___x_2211_ = lean_nat_add(v_numParams_2202_, v___x_2208_);
v___x_2212_ = lean_nat_add(v___x_2211_, v_numIndices_2203_);
v___x_2213_ = lean_nat_add(v___x_2212_, v___x_2208_);
lean_dec(v___x_2212_);
v___x_2214_ = l_Lean_InductiveVal_numCtors(v_val_2197_);
lean_dec_ref(v_val_2197_);
v___x_2215_ = lean_nat_add(v___x_2213_, v___x_2214_);
lean_dec(v___x_2214_);
v___x_2216_ = lean_array_get_size(v_args_2210_);
v___x_2217_ = lean_nat_dec_le(v___x_2215_, v___x_2216_);
if (v___x_2217_ == 0)
{
lean_object* v___x_2218_; lean_object* v___x_2220_; 
lean_dec(v___x_2215_);
lean_dec(v___x_2213_);
lean_dec(v___x_2211_);
lean_dec_ref(v_args_2210_);
lean_dec(v_ctors_2204_);
lean_dec(v_numIndices_2203_);
lean_dec(v_numParams_2202_);
lean_dec_ref(v_toConstantVal_2201_);
lean_del_object(v___x_2199_);
lean_dec(v_us_2139_);
lean_dec(v_declName_2138_);
v___x_2218_ = lean_box(0);
if (v_isShared_2196_ == 0)
{
lean_ctor_set(v___x_2195_, 0, v___x_2218_);
v___x_2220_ = v___x_2195_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v___x_2218_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
else
{
lean_object* v___x_2222_; lean_object* v_params_2223_; lean_object* v_motive_2224_; lean_object* v_discrs_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v_discrInfos_2228_; lean_object* v_alts_2229_; lean_object* v___y_2231_; lean_object* v___y_2232_; lean_object* v_lower_2271_; lean_object* v_upper_2272_; uint8_t v___x_2279_; 
lean_del_object(v___x_2195_);
v___x_2222_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2202_);
lean_inc_ref_n(v_args_2210_, 3);
v_params_2223_ = l_Array_toSubarray___redArg(v_args_2210_, v___x_2222_, v_numParams_2202_);
v_motive_2224_ = lean_array_get(v___x_2140_, v_args_2210_, v_numParams_2202_);
lean_dec(v_numParams_2202_);
lean_inc(v___x_2213_);
v_discrs_2225_ = l_Array_toSubarray___redArg(v_args_2210_, v___x_2211_, v___x_2213_);
v___x_2226_ = lean_nat_add(v_numIndices_2203_, v___x_2208_);
lean_dec(v_numIndices_2203_);
v___x_2227_ = lean_box(0);
v_discrInfos_2228_ = lean_mk_array(v___x_2226_, v___x_2227_);
lean_inc(v___x_2215_);
v_alts_2229_ = l_Array_toSubarray___redArg(v_args_2210_, v___x_2213_, v___x_2215_);
v___x_2279_ = lean_nat_dec_le(v___x_2215_, v___x_2222_);
if (v___x_2279_ == 0)
{
v_lower_2271_ = v___x_2215_;
v_upper_2272_ = v___x_2216_;
goto v___jp_2270_;
}
else
{
lean_dec(v___x_2215_);
v_lower_2271_ = v___x_2222_;
v_upper_2272_ = v___x_2216_;
goto v___jp_2270_;
}
v___jp_2230_:
{
lean_object* v___x_2233_; size_t v_sz_2234_; size_t v___x_2235_; lean_object* v___x_2236_; 
v___x_2233_ = lean_array_mk(v_ctors_2204_);
v_sz_2234_ = lean_array_size(v___x_2233_);
v___x_2235_ = ((size_t)0ULL);
v___x_2236_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(v_sz_2234_, v___x_2235_, v___x_2233_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v_a_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2261_; 
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2239_ = v___x_2236_;
v_isShared_2240_ = v_isSharedCheck_2261_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_a_2237_);
lean_dec(v___x_2236_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2261_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v_start_2241_; lean_object* v_stop_2242_; lean_object* v_start_2243_; lean_object* v_stop_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2256_; 
v_start_2241_ = lean_ctor_get(v_params_2223_, 1);
lean_inc(v_start_2241_);
v_stop_2242_ = lean_ctor_get(v_params_2223_, 2);
lean_inc(v_stop_2242_);
v_start_2243_ = lean_ctor_get(v_discrs_2225_, 1);
lean_inc(v_start_2243_);
v_stop_2244_ = lean_ctor_get(v_discrs_2225_, 2);
lean_inc(v_stop_2244_);
v___x_2245_ = lean_nat_sub(v_stop_2242_, v_start_2241_);
lean_dec(v_start_2241_);
lean_dec(v_stop_2242_);
v___x_2246_ = lean_nat_sub(v_stop_2244_, v_start_2243_);
lean_dec(v_start_2243_);
lean_dec(v_stop_2244_);
v___x_2247_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2);
v___x_2248_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2245_);
lean_ctor_set(v___x_2248_, 1, v___x_2246_);
lean_ctor_set(v___x_2248_, 2, v_a_2237_);
lean_ctor_set(v___x_2248_, 3, v___y_2232_);
lean_ctor_set(v___x_2248_, 4, v_discrInfos_2228_);
lean_ctor_set(v___x_2248_, 5, v___x_2247_);
v___x_2249_ = lean_array_mk(v_us_2139_);
v___x_2250_ = l_Subarray_copy___redArg(v_params_2223_);
v___x_2251_ = l_Subarray_copy___redArg(v_discrs_2225_);
v___x_2252_ = l_Subarray_copy___redArg(v_alts_2229_);
v___x_2253_ = l_Subarray_copy___redArg(v___y_2231_);
v___x_2254_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2248_);
lean_ctor_set(v___x_2254_, 1, v_declName_2138_);
lean_ctor_set(v___x_2254_, 2, v___x_2249_);
lean_ctor_set(v___x_2254_, 3, v___x_2250_);
lean_ctor_set(v___x_2254_, 4, v_motive_2224_);
lean_ctor_set(v___x_2254_, 5, v___x_2251_);
lean_ctor_set(v___x_2254_, 6, v___x_2252_);
lean_ctor_set(v___x_2254_, 7, v___x_2253_);
if (v_isShared_2200_ == 0)
{
lean_ctor_set_tag(v___x_2199_, 1);
lean_ctor_set(v___x_2199_, 0, v___x_2254_);
v___x_2256_ = v___x_2199_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v___x_2254_);
v___x_2256_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
lean_object* v___x_2258_; 
if (v_isShared_2240_ == 0)
{
lean_ctor_set(v___x_2239_, 0, v___x_2256_);
v___x_2258_ = v___x_2239_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2256_);
v___x_2258_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
return v___x_2258_;
}
}
}
}
else
{
lean_object* v_a_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2269_; 
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec_ref(v_alts_2229_);
lean_dec_ref(v_discrInfos_2228_);
lean_dec_ref(v_discrs_2225_);
lean_dec(v_motive_2224_);
lean_dec_ref(v_params_2223_);
lean_del_object(v___x_2199_);
lean_dec(v_us_2139_);
lean_dec(v_declName_2138_);
v_a_2262_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2264_ = v___x_2236_;
v_isShared_2265_ = v_isSharedCheck_2269_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_a_2262_);
lean_dec(v___x_2236_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2269_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2267_; 
if (v_isShared_2265_ == 0)
{
v___x_2267_ = v___x_2264_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_a_2262_);
v___x_2267_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
return v___x_2267_;
}
}
}
}
v___jp_2270_:
{
lean_object* v_levelParams_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; 
v_levelParams_2273_ = lean_ctor_get(v_toConstantVal_2201_, 1);
lean_inc(v_levelParams_2273_);
lean_dec_ref(v_toConstantVal_2201_);
v___x_2274_ = l_Array_toSubarray___redArg(v_args_2210_, v_lower_2271_, v_upper_2272_);
v___x_2275_ = l_List_lengthTR___redArg(v_levelParams_2273_);
lean_dec(v_levelParams_2273_);
v___x_2276_ = l_List_lengthTR___redArg(v_us_2139_);
v___x_2277_ = lean_nat_dec_eq(v___x_2275_, v___x_2276_);
lean_dec(v___x_2276_);
lean_dec(v___x_2275_);
if (v___x_2277_ == 0)
{
lean_object* v___x_2278_; 
v___x_2278_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3));
v___y_2231_ = v___x_2274_;
v___y_2232_ = v___x_2278_;
goto v___jp_2230_;
}
else
{
v___y_2231_ = v___x_2274_;
v___y_2232_ = v___x_2227_;
goto v___jp_2230_;
}
}
}
}
}
else
{
lean_object* v___x_2281_; lean_object* v___x_2283_; 
lean_dec(v_a_2193_);
lean_dec(v_us_2139_);
lean_dec(v_declName_2138_);
lean_dec_ref(v_e_2124_);
v___x_2281_ = lean_box(0);
if (v_isShared_2196_ == 0)
{
lean_ctor_set(v___x_2195_, 0, v___x_2281_);
v___x_2283_ = v___x_2195_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v___x_2281_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec(v_us_2139_);
lean_dec(v_declName_2138_);
lean_dec_ref(v_e_2124_);
v_a_2286_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2192_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2192_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2286_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
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
lean_dec_ref(v___x_2137_);
lean_dec_ref(v_e_2124_);
goto v___jp_2131_;
}
}
v___jp_2131_:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2132_ = lean_box(0);
v___x_2133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
return v___x_2133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed(lean_object* v_e_2295_, lean_object* v_alsoCasesOn_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
uint8_t v_alsoCasesOn_boxed_2302_; lean_object* v_res_2303_; 
v_alsoCasesOn_boxed_2302_ = lean_unbox(v_alsoCasesOn_2296_);
v_res_2303_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(v_e_2295_, v_alsoCasesOn_boxed_2302_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(lean_object* v_e_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_){
_start:
{
lean_object* v___x_2310_; uint8_t v___x_2311_; 
v___x_2310_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_2311_ = l_Lean_Expr_isAppOf(v_e_2304_, v___x_2310_);
if (v___x_2311_ == 0)
{
lean_object* v___x_2312_; uint8_t v___x_2313_; 
v___x_2312_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_2313_ = l_Lean_Expr_isAppOf(v_e_2304_, v___x_2312_);
if (v___x_2313_ == 0)
{
lean_object* v___x_2314_; uint8_t v___x_2315_; 
v___x_2314_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_2315_ = l_Lean_Expr_isAppOf(v_e_2304_, v___x_2314_);
if (v___x_2315_ == 0)
{
uint8_t v___x_2316_; lean_object* v___x_2317_; 
v___x_2316_ = 1;
v___x_2317_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(v_e_2304_, v___x_2316_, v___y_2305_, v___y_2306_, v___y_2307_, v___y_2308_);
if (lean_obj_tag(v___x_2317_) == 0)
{
lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2338_; 
v_a_2318_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2320_ = v___x_2317_;
v_isShared_2321_ = v_isSharedCheck_2338_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v___x_2317_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2338_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
if (lean_obj_tag(v_a_2318_) == 1)
{
lean_object* v_val_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2333_; 
v_val_2322_ = lean_ctor_get(v_a_2318_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v_a_2318_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2324_ = v_a_2318_;
v_isShared_2325_ = v_isSharedCheck_2333_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_val_2322_);
lean_dec(v_a_2318_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2333_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2326_; lean_object* v___x_2328_; 
v___x_2326_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2326_, 0, v_val_2322_);
if (v_isShared_2325_ == 0)
{
lean_ctor_set(v___x_2324_, 0, v___x_2326_);
v___x_2328_ = v___x_2324_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v___x_2326_);
v___x_2328_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
lean_object* v___x_2330_; 
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 0, v___x_2328_);
v___x_2330_ = v___x_2320_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v___x_2328_);
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
lean_object* v___x_2334_; lean_object* v___x_2336_; 
lean_dec(v_a_2318_);
v___x_2334_ = lean_box(0);
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 0, v___x_2334_);
v___x_2336_ = v___x_2320_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v___x_2334_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
}
else
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2346_; 
v_a_2339_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2341_ = v___x_2317_;
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2317_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
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
}
else
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2347_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2347_, 0, v_e_2304_);
v___x_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
v___x_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
return v___x_2349_;
}
}
else
{
lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2350_, 0, v_e_2304_);
v___x_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2350_);
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2351_);
return v___x_2352_;
}
}
else
{
lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v_e_2304_);
v___x_2354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2353_);
v___x_2355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2354_);
return v___x_2355_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___boxed(lean_object* v_e_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
lean_object* v_res_2362_; 
v_res_2362_ = l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(v_e_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_);
lean_dec(v___y_2360_);
lean_dec_ref(v___y_2359_);
lean_dec(v___y_2358_);
lean_dec_ref(v___y_2357_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(lean_object* v_declName_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_){
_start:
{
lean_object* v___x_2369_; 
v___x_2369_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2363_, v___y_2367_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___boxed(lean_object* v_declName_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(v_declName_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
lean_dec(v___y_2374_);
lean_dec_ref(v___y_2373_);
lean_dec(v___y_2372_);
lean_dec_ref(v___y_2371_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2377_, lean_object* v_constName_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_){
_start:
{
lean_object* v___x_2384_; 
v___x_2384_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2385_, lean_object* v_constName_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(v_00_u03b1_2385_, v_constName_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_2393_, lean_object* v_ref_2394_, lean_object* v_constName_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2394_, v_constName_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_2402_, lean_object* v_ref_2403_, lean_object* v_constName_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_2402_, v_ref_2403_, v_constName_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
lean_dec(v___y_2408_);
lean_dec_ref(v___y_2407_);
lean_dec(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v_ref_2403_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_2411_, lean_object* v_ref_2412_, lean_object* v_msg_2413_, lean_object* v_declHint_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v___x_2420_; 
v___x_2420_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2412_, v_msg_2413_, v_declHint_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_2421_, lean_object* v_ref_2422_, lean_object* v_msg_2423_, lean_object* v_declHint_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_2421_, v_ref_2422_, v_msg_2423_, v_declHint_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_);
lean_dec(v___y_2428_);
lean_dec_ref(v___y_2427_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
lean_dec(v_ref_2422_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(lean_object* v_msg_2431_, lean_object* v_declHint_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_2431_, v_declHint_2432_, v___y_2436_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___boxed(lean_object* v_msg_2439_, lean_object* v_declHint_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(v_msg_2439_, v_declHint_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(lean_object* v_00_u03b1_2447_, lean_object* v_ref_2448_, lean_object* v_msg_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_){
_start:
{
lean_object* v___x_2455_; 
v___x_2455_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_2448_, v_msg_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___boxed(lean_object* v_00_u03b1_2456_, lean_object* v_ref_2457_, lean_object* v_msg_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(v_00_u03b1_2456_, v_ref_2457_, v_msg_2458_, v___y_2459_, v___y_2460_, v___y_2461_, v___y_2462_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v___y_2460_);
lean_dec_ref(v___y_2459_);
lean_dec(v_ref_2457_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(lean_object* v_00_u03b1_2465_, lean_object* v_msg_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
lean_object* v___x_2472_; 
v___x_2472_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
return v___x_2472_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___boxed(lean_object* v_00_u03b1_2473_, lean_object* v_msg_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_){
_start:
{
lean_object* v_res_2480_; 
v_res_2480_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(v_00_u03b1_2473_, v_msg_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_);
lean_dec(v___y_2478_);
lean_dec_ref(v___y_2477_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
return v_res_2480_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1(void){
_start:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2482_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0));
v___x_2483_ = l_Lean_stringToMessageData(v___x_2482_);
return v___x_2483_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3(void){
_start:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2485_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__2));
v___x_2486_ = l_Lean_stringToMessageData(v___x_2485_);
return v___x_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher(lean_object* v_idx_2490_, lean_object* v_e_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
lean_object* v___y_2498_; lean_object* v___y_2517_; lean_object* v___y_2518_; uint8_t v___y_2549_; lean_object* v___x_2570_; uint8_t v___x_2571_; 
v___x_2570_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_2571_ = l_Lean_Expr_isAppOf(v_e_2491_, v___x_2570_);
if (v___x_2571_ == 0)
{
lean_object* v___x_2572_; uint8_t v___x_2573_; 
v___x_2572_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_2573_ = l_Lean_Expr_isAppOf(v_e_2491_, v___x_2572_);
v___y_2549_ = v___x_2573_;
goto v___jp_2548_;
}
else
{
v___y_2549_ = v___x_2571_;
goto v___jp_2548_;
}
v___jp_2497_:
{
lean_object* v___x_2499_; 
lean_inc_ref(v___y_2498_);
v___x_2499_ = l_Lean_Meta_findLocalDeclWithType_x3f(v___y_2498_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v_a_2500_; 
v_a_2500_ = lean_ctor_get(v___x_2499_, 0);
lean_inc(v_a_2500_);
lean_dec_ref_known(v___x_2499_, 1);
if (lean_obj_tag(v_a_2500_) == 1)
{
lean_object* v_val_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
lean_dec_ref(v___y_2498_);
v_val_2501_ = lean_ctor_get(v_a_2500_, 0);
lean_inc(v_val_2501_);
lean_dec_ref_known(v_a_2500_, 1);
v___x_2502_ = l_Lean_mkFVar(v_val_2501_);
v___x_2503_ = l_Lean_Meta_rwIfWith(v___x_2502_, v_e_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
return v___x_2503_;
}
else
{
lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
lean_dec(v_a_2500_);
lean_dec_ref(v_e_2491_);
v___x_2504_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1, &l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1_once, _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1);
v___x_2505_ = l_Lean_MessageData_ofExpr(v___y_2498_);
v___x_2506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2504_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
v___x_2507_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v___x_2506_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
return v___x_2507_;
}
}
else
{
lean_object* v_a_2508_; lean_object* v___x_2510_; uint8_t v_isShared_2511_; uint8_t v_isSharedCheck_2515_; 
lean_dec_ref(v___y_2498_);
lean_dec_ref(v_e_2491_);
v_a_2508_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2510_ = v___x_2499_;
v_isShared_2511_ = v_isSharedCheck_2515_;
goto v_resetjp_2509_;
}
else
{
lean_inc(v_a_2508_);
lean_dec(v___x_2499_);
v___x_2510_ = lean_box(0);
v_isShared_2511_ = v_isSharedCheck_2515_;
goto v_resetjp_2509_;
}
v_resetjp_2509_:
{
lean_object* v___x_2513_; 
if (v_isShared_2511_ == 0)
{
v___x_2513_ = v___x_2510_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_a_2508_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
}
v___jp_2516_:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2519_ = lean_box(0);
lean_inc(v___y_2518_);
v___x_2520_ = l_Lean_mkConst(v___y_2518_, v___x_2519_);
v___x_2521_ = l_Lean_Meta_mkEq(v___y_2517_, v___x_2520_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; lean_object* v___x_2523_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc_n(v_a_2522_, 2);
lean_dec_ref_known(v___x_2521_, 1);
v___x_2523_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_a_2522_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_a_2524_; 
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
lean_inc(v_a_2524_);
lean_dec_ref_known(v___x_2523_, 1);
if (lean_obj_tag(v_a_2524_) == 1)
{
lean_object* v_val_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
lean_dec(v_a_2522_);
v_val_2525_ = lean_ctor_get(v_a_2524_, 0);
lean_inc(v_val_2525_);
lean_dec_ref_known(v_a_2524_, 1);
v___x_2526_ = l_Lean_mkFVar(v_val_2525_);
v___x_2527_ = l_Lean_Meta_rwIfWith(v___x_2526_, v_e_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
return v___x_2527_;
}
else
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
lean_dec(v_a_2524_);
lean_dec_ref(v_e_2491_);
v___x_2528_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3, &l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3_once, _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3);
v___x_2529_ = l_Lean_MessageData_ofExpr(v_a_2522_);
v___x_2530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2528_);
lean_ctor_set(v___x_2530_, 1, v___x_2529_);
v___x_2531_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v___x_2530_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
return v___x_2531_;
}
}
else
{
lean_object* v_a_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2539_; 
lean_dec(v_a_2522_);
lean_dec_ref(v_e_2491_);
v_a_2532_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2534_ = v___x_2523_;
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_a_2532_);
lean_dec(v___x_2523_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2537_; 
if (v_isShared_2535_ == 0)
{
v___x_2537_ = v___x_2534_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_a_2532_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
}
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
lean_dec_ref(v_e_2491_);
v_a_2540_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2521_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2521_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
v___jp_2548_:
{
if (v___y_2549_ == 0)
{
lean_object* v___x_2550_; uint8_t v___x_2551_; 
v___x_2550_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_2551_ = l_Lean_Expr_isAppOf(v_e_2491_, v___x_2550_);
if (v___x_2551_ == 0)
{
lean_object* v___x_2552_; 
v___x_2552_ = l_Lean_Meta_rwMatcher(v_idx_2490_, v_e_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
return v___x_2552_;
}
else
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v_c_2557_; lean_object* v___x_2558_; uint8_t v___x_2559_; 
v___x_2553_ = lean_unsigned_to_nat(1u);
v___x_2554_ = l_Lean_Expr_getAppNumArgs(v_e_2491_);
v___x_2555_ = lean_nat_sub(v___x_2554_, v___x_2553_);
lean_dec(v___x_2554_);
v___x_2556_ = lean_nat_sub(v___x_2555_, v___x_2553_);
lean_dec(v___x_2555_);
v_c_2557_ = l_Lean_Expr_getRevArg_x21(v_e_2491_, v___x_2556_);
v___x_2558_ = lean_unsigned_to_nat(0u);
v___x_2559_ = lean_nat_dec_eq(v_idx_2490_, v___x_2558_);
lean_dec(v_idx_2490_);
if (v___x_2559_ == 0)
{
lean_object* v___x_2560_; 
v___x_2560_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4));
v___y_2517_ = v_c_2557_;
v___y_2518_ = v___x_2560_;
goto v___jp_2516_;
}
else
{
lean_object* v___x_2561_; 
v___x_2561_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1));
v___y_2517_ = v_c_2557_;
v___y_2518_ = v___x_2561_;
goto v___jp_2516_;
}
}
}
else
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v_c_2566_; lean_object* v___x_2567_; uint8_t v___x_2568_; 
v___x_2562_ = lean_unsigned_to_nat(1u);
v___x_2563_ = l_Lean_Expr_getAppNumArgs(v_e_2491_);
v___x_2564_ = lean_nat_sub(v___x_2563_, v___x_2562_);
lean_dec(v___x_2563_);
v___x_2565_ = lean_nat_sub(v___x_2564_, v___x_2562_);
lean_dec(v___x_2564_);
v_c_2566_ = l_Lean_Expr_getRevArg_x21(v_e_2491_, v___x_2565_);
v___x_2567_ = lean_unsigned_to_nat(0u);
v___x_2568_ = lean_nat_dec_eq(v_idx_2490_, v___x_2567_);
lean_dec(v_idx_2490_);
if (v___x_2568_ == 0)
{
lean_object* v___x_2569_; 
v___x_2569_ = l_Lean_mkNot(v_c_2566_);
v___y_2498_ = v___x_2569_;
goto v___jp_2497_;
}
else
{
v___y_2498_ = v_c_2566_;
goto v___jp_2497_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___boxed(lean_object* v_idx_2574_, lean_object* v_e_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v_res_2581_; 
v_res_2581_ = l_Lean_Elab_Tactic_Do_rwIfOrMatcher(v_idx_2574_, v_e_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_);
lean_dec(v___y_2579_);
lean_dec_ref(v___y_2578_);
lean_dec(v___y_2577_);
lean_dec_ref(v___y_2576_);
return v_res_2581_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default = _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default);
l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo = _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* initialize_Lean_Data_Array(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
}
#ifdef __cplusplus
}
#endif
