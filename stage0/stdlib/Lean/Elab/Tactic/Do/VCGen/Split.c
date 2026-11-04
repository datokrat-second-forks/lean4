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
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclsDND___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_etaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Array_mask___redArg(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* l_Lean_Meta_mkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_abstractM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclsD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_rwIfWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rwMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_uite_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_uite_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_udite_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_udite_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dcond_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dcond_elim(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dcond"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__34(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__39___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__39___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__39___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__39(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 128, 245, 49, 225, 62, 36, 86)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__38(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__40(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__41(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__42(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "discr"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 61, 20, 168, 108, 94, 13, 165)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__45___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_etaExpand___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__45___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__45___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__45(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__7_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__47(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__48(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__50(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__50___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__51(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__51___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(38, 183, 255, 58, 84, 31, 100, 5)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13_value;
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
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0_value)}};
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__39___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__39(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 59, 48, 241, 48, 106, 255)}};
static const lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___closed__0_value;
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
static const lean_ctor_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
lean_object* v_e_7_; lean_object* v___x_8_; 
v_e_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_e_7_);
lean_dec_ref(v_t_5_);
v___x_8_ = lean_apply_1(v_k_6_, v_e_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim___redArg(lean_object* v_t_21_, lean_object* v_ite_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_21_, v_ite_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_ite_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_25_, v_ite_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim___redArg(lean_object* v_t_29_, lean_object* v_dite_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_29_, v_dite_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_dite_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_33_, v_dite_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim___redArg(lean_object* v_t_37_, lean_object* v_cond_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_37_, v_cond_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_cond_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_41_, v_cond_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_uite_elim___redArg(lean_object* v_t_45_, lean_object* v_uite_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_45_, v_uite_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_uite_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_uite_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_49_, v_uite_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_udite_elim___redArg(lean_object* v_t_53_, lean_object* v_udite_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_53_, v_udite_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_udite_elim(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_udite_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_57_, v_udite_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dcond_elim___redArg(lean_object* v_t_61_, lean_object* v_dcond_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_61_, v_dcond_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dcond_elim(lean_object* v_motive_64_, lean_object* v_t_65_, lean_object* v_h_66_, lean_object* v_dcond_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_65_, v_dcond_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim___redArg(lean_object* v_t_69_, lean_object* v_matcher_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_69_, v_matcher_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_matcher_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_73_, v_matcher_75_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = lean_box(0);
v___x_81_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1));
v___x_82_ = l_Lean_Expr_const___override(v___x_81_, v___x_80_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2, &l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2_once, _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2);
v___x_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3, &l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3_once, _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3);
return v___x_85_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default;
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(lean_object* v_x_87_, lean_object* v_x_88_){
_start:
{
lean_object* v_zero_89_; uint8_t v_isZero_90_; 
v_zero_89_ = lean_unsigned_to_nat(0u);
v_isZero_90_ = lean_nat_dec_eq(v_x_87_, v_zero_89_);
if (v_isZero_90_ == 1)
{
lean_dec(v_x_87_);
return v_x_88_;
}
else
{
lean_object* v_one_91_; lean_object* v_n_92_; 
v_one_91_ = lean_unsigned_to_nat(1u);
v_n_92_ = lean_nat_sub(v_x_87_, v_one_91_);
lean_dec(v_x_87_);
if (lean_obj_tag(v_x_88_) == 1)
{
lean_object* v_val_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_104_; 
v_val_93_ = lean_ctor_get(v_x_88_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v_x_88_);
if (v_isSharedCheck_104_ == 0)
{
v___x_95_ = v_x_88_;
v_isShared_96_ = v_isSharedCheck_104_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_val_93_);
lean_dec(v_x_88_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_104_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
if (lean_obj_tag(v_val_93_) == 6)
{
lean_object* v_body_97_; lean_object* v___x_99_; 
v_body_97_ = lean_ctor_get(v_val_93_, 2);
lean_inc_ref(v_body_97_);
lean_dec_ref_known(v_val_93_, 3);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 0, v_body_97_);
v___x_99_ = v___x_95_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_body_97_);
v___x_99_ = v_reuseFailAlloc_101_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
v_x_87_ = v_n_92_;
v_x_88_ = v___x_99_;
goto _start;
}
}
else
{
lean_object* v___x_102_; 
lean_del_object(v___x_95_);
lean_dec(v_val_93_);
v___x_102_ = lean_box(0);
v_x_87_ = v_n_92_;
v_x_88_ = v___x_102_;
goto _start;
}
}
}
else
{
lean_object* v___x_105_; 
lean_dec(v_x_88_);
v___x_105_ = lean_box(0);
v_x_87_ = v_n_92_;
v_x_88_ = v___x_105_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_resTy(lean_object* v_info_107_){
_start:
{
lean_object* v_e_109_; 
if (lean_obj_tag(v_info_107_) == 6)
{
lean_object* v_matcherApp_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_132_; 
v_matcherApp_115_ = lean_ctor_get(v_info_107_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v_info_107_);
if (v_isSharedCheck_132_ == 0)
{
v___x_117_ = v_info_107_;
v_isShared_118_ = v_isSharedCheck_132_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_matcherApp_115_);
lean_dec(v_info_107_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_132_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v_toMatcherInfo_119_; lean_object* v_motive_120_; lean_object* v_discrInfos_121_; lean_object* v___x_122_; lean_object* v___x_124_; 
v_toMatcherInfo_119_ = lean_ctor_get(v_matcherApp_115_, 0);
lean_inc_ref(v_toMatcherInfo_119_);
v_motive_120_ = lean_ctor_get(v_matcherApp_115_, 4);
lean_inc_ref_n(v_motive_120_, 2);
lean_dec_ref(v_matcherApp_115_);
v_discrInfos_121_ = lean_ctor_get(v_toMatcherInfo_119_, 4);
lean_inc_ref(v_discrInfos_121_);
lean_dec_ref(v_toMatcherInfo_119_);
v___x_122_ = lean_array_get_size(v_discrInfos_121_);
lean_dec_ref(v_discrInfos_121_);
if (v_isShared_118_ == 0)
{
lean_ctor_set_tag(v___x_117_, 1);
lean_ctor_set(v___x_117_, 0, v_motive_120_);
v___x_124_ = v___x_117_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_motive_120_);
v___x_124_ = v_reuseFailAlloc_131_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
lean_object* v___x_125_; 
v___x_125_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(v___x_122_, v___x_124_);
if (lean_obj_tag(v___x_125_) == 0)
{
lean_dec_ref(v_motive_120_);
return v___x_125_;
}
else
{
lean_object* v_val_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v_val_126_ = lean_ctor_get(v___x_125_, 0);
v___x_127_ = l_Lean_Expr_looseBVarRange(v_val_126_);
v___x_128_ = l_Lean_Expr_looseBVarRange(v_motive_120_);
lean_dec_ref(v_motive_120_);
v___x_129_ = lean_nat_dec_eq(v___x_127_, v___x_128_);
lean_dec(v___x_128_);
lean_dec(v___x_127_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; 
lean_dec_ref_known(v___x_125_, 1);
v___x_130_ = lean_box(0);
return v___x_130_;
}
else
{
return v___x_125_;
}
}
}
}
}
else
{
lean_object* v_e_133_; 
v_e_133_ = lean_ctor_get(v_info_107_, 0);
lean_inc_ref(v_e_133_);
lean_dec_ref(v_info_107_);
v_e_109_ = v_e_133_;
goto v___jp_108_;
}
v___jp_108_:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_110_ = l_Lean_Expr_getAppNumArgs(v_e_109_);
v___x_111_ = lean_unsigned_to_nat(1u);
v___x_112_ = lean_nat_sub(v___x_110_, v___x_111_);
lean_dec(v___x_110_);
v___x_113_ = l_Lean_Expr_getRevArg_x21(v_e_109_, v___x_112_);
lean_dec_ref(v_e_109_);
v___x_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
return v___x_114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(lean_object* v_matcherApp_134_, size_t v_sz_135_, size_t v_i_136_, lean_object* v_bs_137_){
_start:
{
uint8_t v___x_138_; 
v___x_138_ = lean_usize_dec_lt(v_i_136_, v_sz_135_);
if (v___x_138_ == 0)
{
return v_bs_137_;
}
else
{
lean_object* v_v_139_; lean_object* v_alts_140_; lean_object* v___x_141_; lean_object* v_bs_x27_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; size_t v___x_147_; size_t v___x_148_; lean_object* v___x_149_; 
v_v_139_ = lean_array_uget(v_bs_137_, v_i_136_);
v_alts_140_ = lean_ctor_get(v_matcherApp_134_, 6);
v___x_141_ = lean_unsigned_to_nat(0u);
v_bs_x27_142_ = lean_array_uset(v_bs_137_, v_i_136_, v___x_141_);
v___x_143_ = l_Lean_instInhabitedExpr;
v___x_144_ = lean_usize_to_nat(v_i_136_);
v___x_145_ = lean_array_get_borrowed(v___x_143_, v_alts_140_, v___x_144_);
lean_dec(v___x_144_);
lean_inc(v___x_145_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v_v_139_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = ((size_t)1ULL);
v___x_148_ = lean_usize_add(v_i_136_, v___x_147_);
v___x_149_ = lean_array_uset(v_bs_x27_142_, v_i_136_, v___x_146_);
v_i_136_ = v___x_148_;
v_bs_137_ = v___x_149_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg___boxed(lean_object* v_matcherApp_151_, lean_object* v_sz_152_, lean_object* v_i_153_, lean_object* v_bs_154_){
_start:
{
size_t v_sz_boxed_155_; size_t v_i_boxed_156_; lean_object* v_res_157_; 
v_sz_boxed_155_ = lean_unbox_usize(v_sz_152_);
lean_dec(v_sz_152_);
v_i_boxed_156_ = lean_unbox_usize(v_i_153_);
lean_dec(v_i_153_);
v_res_157_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_151_, v_sz_boxed_155_, v_i_boxed_156_, v_bs_154_);
lean_dec_ref(v_matcherApp_151_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_altInfos(lean_object* v_info_158_){
_start:
{
lean_object* v_e_160_; lean_object* v_e_178_; 
switch(lean_obj_tag(v_info_158_))
{
case 1:
{
lean_object* v_e_196_; 
v_e_196_ = lean_ctor_get(v_info_158_, 0);
lean_inc_ref(v_e_196_);
lean_dec_ref_known(v_info_158_, 1);
v_e_160_ = v_e_196_;
goto v___jp_159_;
}
case 2:
{
lean_object* v_e_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_e_197_ = lean_ctor_get(v_info_158_, 0);
lean_inc_ref(v_e_197_);
lean_dec_ref_known(v_info_158_, 1);
v___x_198_ = lean_unsigned_to_nat(0u);
v___x_199_ = lean_unsigned_to_nat(2u);
v___x_200_ = l_Lean_Expr_getAppNumArgs(v_e_197_);
v___x_201_ = lean_nat_sub(v___x_200_, v___x_199_);
v___x_202_ = lean_unsigned_to_nat(1u);
v___x_203_ = lean_nat_sub(v___x_201_, v___x_202_);
lean_dec(v___x_201_);
v___x_204_ = l_Lean_Expr_getRevArg_x21(v_e_197_, v___x_203_);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_198_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = lean_unsigned_to_nat(3u);
v___x_207_ = lean_nat_sub(v___x_200_, v___x_206_);
lean_dec(v___x_200_);
v___x_208_ = lean_nat_sub(v___x_207_, v___x_202_);
lean_dec(v___x_207_);
v___x_209_ = l_Lean_Expr_getRevArg_x21(v_e_197_, v___x_208_);
lean_dec_ref(v_e_197_);
v___x_210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_198_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = lean_mk_empty_array_with_capacity(v___x_199_);
v___x_212_ = lean_array_push(v___x_211_, v___x_205_);
v___x_213_ = lean_array_push(v___x_212_, v___x_210_);
return v___x_213_;
}
case 4:
{
lean_object* v_e_214_; 
v_e_214_ = lean_ctor_get(v_info_158_, 0);
lean_inc_ref(v_e_214_);
lean_dec_ref_known(v_info_158_, 1);
v_e_160_ = v_e_214_;
goto v___jp_159_;
}
case 5:
{
lean_object* v_e_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_e_215_ = lean_ctor_get(v_info_158_, 0);
lean_inc_ref(v_e_215_);
lean_dec_ref_known(v_info_158_, 1);
v___x_216_ = lean_unsigned_to_nat(1u);
v___x_217_ = lean_unsigned_to_nat(2u);
v___x_218_ = l_Lean_Expr_getAppNumArgs(v_e_215_);
v___x_219_ = lean_nat_sub(v___x_218_, v___x_217_);
v___x_220_ = lean_nat_sub(v___x_219_, v___x_216_);
lean_dec(v___x_219_);
v___x_221_ = l_Lean_Expr_getRevArg_x21(v_e_215_, v___x_220_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_216_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = lean_unsigned_to_nat(3u);
v___x_224_ = lean_nat_sub(v___x_218_, v___x_223_);
lean_dec(v___x_218_);
v___x_225_ = lean_nat_sub(v___x_224_, v___x_216_);
lean_dec(v___x_224_);
v___x_226_ = l_Lean_Expr_getRevArg_x21(v_e_215_, v___x_225_);
lean_dec_ref(v_e_215_);
v___x_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_216_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = lean_mk_empty_array_with_capacity(v___x_217_);
v___x_229_ = lean_array_push(v___x_228_, v___x_222_);
v___x_230_ = lean_array_push(v___x_229_, v___x_227_);
return v___x_230_;
}
case 6:
{
lean_object* v_matcherApp_231_; lean_object* v___x_232_; size_t v_sz_233_; size_t v___x_234_; lean_object* v___x_235_; 
v_matcherApp_231_ = lean_ctor_get(v_info_158_, 0);
lean_inc_ref_n(v_matcherApp_231_, 2);
lean_dec_ref_known(v_info_158_, 1);
v___x_232_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_231_);
v_sz_233_ = lean_array_size(v___x_232_);
v___x_234_ = ((size_t)0ULL);
v___x_235_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_231_, v_sz_233_, v___x_234_, v___x_232_);
lean_dec_ref(v_matcherApp_231_);
return v___x_235_;
}
default: 
{
lean_object* v_e_236_; 
v_e_236_ = lean_ctor_get(v_info_158_, 0);
lean_inc_ref(v_e_236_);
lean_dec_ref(v_info_158_);
v_e_178_ = v_e_236_;
goto v___jp_177_;
}
}
v___jp_159_:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_161_ = lean_unsigned_to_nat(1u);
v___x_162_ = lean_unsigned_to_nat(3u);
v___x_163_ = l_Lean_Expr_getAppNumArgs(v_e_160_);
v___x_164_ = lean_nat_sub(v___x_163_, v___x_162_);
v___x_165_ = lean_nat_sub(v___x_164_, v___x_161_);
lean_dec(v___x_164_);
v___x_166_ = l_Lean_Expr_getRevArg_x21(v_e_160_, v___x_165_);
v___x_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_161_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = lean_unsigned_to_nat(4u);
v___x_169_ = lean_nat_sub(v___x_163_, v___x_168_);
lean_dec(v___x_163_);
v___x_170_ = lean_nat_sub(v___x_169_, v___x_161_);
lean_dec(v___x_169_);
v___x_171_ = l_Lean_Expr_getRevArg_x21(v_e_160_, v___x_170_);
lean_dec_ref(v_e_160_);
v___x_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_161_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v___x_173_ = lean_unsigned_to_nat(2u);
v___x_174_ = lean_mk_empty_array_with_capacity(v___x_173_);
v___x_175_ = lean_array_push(v___x_174_, v___x_167_);
v___x_176_ = lean_array_push(v___x_175_, v___x_172_);
return v___x_176_;
}
v___jp_177_:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_179_ = lean_unsigned_to_nat(0u);
v___x_180_ = lean_unsigned_to_nat(3u);
v___x_181_ = l_Lean_Expr_getAppNumArgs(v_e_178_);
v___x_182_ = lean_nat_sub(v___x_181_, v___x_180_);
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_nat_sub(v___x_182_, v___x_183_);
lean_dec(v___x_182_);
v___x_185_ = l_Lean_Expr_getRevArg_x21(v_e_178_, v___x_184_);
v___x_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_179_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = lean_unsigned_to_nat(4u);
v___x_188_ = lean_nat_sub(v___x_181_, v___x_187_);
lean_dec(v___x_181_);
v___x_189_ = lean_nat_sub(v___x_188_, v___x_183_);
lean_dec(v___x_188_);
v___x_190_ = l_Lean_Expr_getRevArg_x21(v_e_178_, v___x_189_);
lean_dec_ref(v_e_178_);
v___x_191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_179_);
lean_ctor_set(v___x_191_, 1, v___x_190_);
v___x_192_ = lean_unsigned_to_nat(2u);
v___x_193_ = lean_mk_empty_array_with_capacity(v___x_192_);
v___x_194_ = lean_array_push(v___x_193_, v___x_186_);
v___x_195_ = lean_array_push(v___x_194_, v___x_191_);
return v___x_195_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(lean_object* v_matcherApp_237_, lean_object* v_as_238_, size_t v_sz_239_, size_t v_i_240_, lean_object* v_bs_241_){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_237_, v_sz_239_, v_i_240_, v_bs_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___boxed(lean_object* v_matcherApp_243_, lean_object* v_as_244_, lean_object* v_sz_245_, lean_object* v_i_246_, lean_object* v_bs_247_){
_start:
{
size_t v_sz_boxed_248_; size_t v_i_boxed_249_; lean_object* v_res_250_; 
v_sz_boxed_248_ = lean_unbox_usize(v_sz_245_);
lean_dec(v_sz_245_);
v_i_boxed_249_ = lean_unbox_usize(v_i_246_);
lean_dec(v_i_246_);
v_res_250_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(v_matcherApp_243_, v_as_244_, v_sz_boxed_248_, v_i_boxed_249_, v_bs_247_);
lean_dec_ref(v_as_244_);
lean_dec_ref(v_matcherApp_243_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_expr(lean_object* v_x_251_){
_start:
{
if (lean_obj_tag(v_x_251_) == 6)
{
lean_object* v_matcherApp_252_; lean_object* v___x_253_; 
v_matcherApp_252_ = lean_ctor_get(v_x_251_, 0);
lean_inc_ref(v_matcherApp_252_);
lean_dec_ref_known(v_x_251_, 1);
v___x_253_ = l_Lean_Meta_MatcherApp_toExpr(v_matcherApp_252_);
return v___x_253_;
}
else
{
lean_object* v_e_254_; 
v_e_254_ = lean_ctor_get(v_x_251_, 0);
lean_inc_ref(v_e_254_);
lean_dec_ref(v_x_251_);
return v_e_254_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0(lean_object* v___x_258_, lean_object* v_resTy_259_, lean_object* v_c_260_, lean_object* v_dec_261_, lean_object* v_t_262_, lean_object* v_e_263_, lean_object* v_k_264_, lean_object* v_u_265_){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_266_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_267_, 0, v_u_265_);
lean_ctor_set(v___x_267_, 1, v___x_258_);
v___x_268_ = l_Lean_mkConst(v___x_266_, v___x_267_);
lean_inc_ref(v_e_263_);
lean_inc_ref(v_t_262_);
lean_inc_ref(v_dec_261_);
lean_inc_ref(v_c_260_);
v___x_269_ = l_Lean_mkApp5(v___x_268_, v_resTy_259_, v_c_260_, v_dec_261_, v_t_262_, v_e_263_);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
v___x_271_ = lean_unsigned_to_nat(4u);
v___x_272_ = lean_mk_empty_array_with_capacity(v___x_271_);
v___x_273_ = lean_array_push(v___x_272_, v_c_260_);
v___x_274_ = lean_array_push(v___x_273_, v_dec_261_);
v___x_275_ = lean_array_push(v___x_274_, v_t_262_);
v___x_276_ = lean_array_push(v___x_275_, v_e_263_);
v___x_277_ = lean_apply_2(v_k_264_, v___x_270_, v___x_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1(lean_object* v___x_278_, lean_object* v_resTy_279_, lean_object* v_c_280_, lean_object* v_dec_281_, lean_object* v_t_282_, lean_object* v_k_283_, lean_object* v_inst_284_, lean_object* v_toBind_285_, lean_object* v_e_286_){
_start:
{
lean_object* v___f_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
lean_inc_ref(v_resTy_279_);
v___f_287_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0), 8, 7);
lean_closure_set(v___f_287_, 0, v___x_278_);
lean_closure_set(v___f_287_, 1, v_resTy_279_);
lean_closure_set(v___f_287_, 2, v_c_280_);
lean_closure_set(v___f_287_, 3, v_dec_281_);
lean_closure_set(v___f_287_, 4, v_t_282_);
lean_closure_set(v___f_287_, 5, v_e_286_);
lean_closure_set(v___f_287_, 6, v_k_283_);
v___x_288_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_288_, 0, v_resTy_279_);
v___x_289_ = lean_apply_2(v_inst_284_, lean_box(0), v___x_288_);
v___x_290_ = lean_apply_4(v_toBind_285_, lean_box(0), lean_box(0), v___x_289_, v___f_287_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2(lean_object* v___x_294_, lean_object* v_resTy_295_, lean_object* v_c_296_, lean_object* v_dec_297_, lean_object* v_k_298_, lean_object* v_inst_299_, lean_object* v_toBind_300_, lean_object* v_inst_301_, lean_object* v_inst_302_, lean_object* v_t_303_){
_start:
{
lean_object* v___f_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
lean_inc_ref(v_resTy_295_);
v___f_304_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1), 9, 8);
lean_closure_set(v___f_304_, 0, v___x_294_);
lean_closure_set(v___f_304_, 1, v_resTy_295_);
lean_closure_set(v___f_304_, 2, v_c_296_);
lean_closure_set(v___f_304_, 3, v_dec_297_);
lean_closure_set(v___f_304_, 4, v_t_303_);
lean_closure_set(v___f_304_, 5, v_k_298_);
lean_closure_set(v___f_304_, 6, v_inst_299_);
lean_closure_set(v___f_304_, 7, v_toBind_300_);
v___x_305_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_306_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_301_, v_inst_302_, v___x_305_, v_resTy_295_, v___f_304_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3(lean_object* v___x_310_, lean_object* v_resTy_311_, lean_object* v_c_312_, lean_object* v_k_313_, lean_object* v_inst_314_, lean_object* v_toBind_315_, lean_object* v_inst_316_, lean_object* v_inst_317_, lean_object* v_dec_318_){
_start:
{
lean_object* v___f_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
lean_inc_ref(v_inst_317_);
lean_inc_ref(v_inst_316_);
lean_inc_ref(v_resTy_311_);
v___f_319_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2), 10, 9);
lean_closure_set(v___f_319_, 0, v___x_310_);
lean_closure_set(v___f_319_, 1, v_resTy_311_);
lean_closure_set(v___f_319_, 2, v_c_312_);
lean_closure_set(v___f_319_, 3, v_dec_318_);
lean_closure_set(v___f_319_, 4, v_k_313_);
lean_closure_set(v___f_319_, 5, v_inst_314_);
lean_closure_set(v___f_319_, 6, v_toBind_315_);
lean_closure_set(v___f_319_, 7, v_inst_316_);
lean_closure_set(v___f_319_, 8, v_inst_317_);
v___x_320_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_321_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_316_, v_inst_317_, v___x_320_, v_resTy_311_, v___f_319_);
return v___x_321_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_328_ = lean_box(0);
v___x_329_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3));
v___x_330_ = l_Lean_mkConst(v___x_329_, v___x_328_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4(lean_object* v_resTy_331_, lean_object* v_k_332_, lean_object* v_inst_333_, lean_object* v_toBind_334_, lean_object* v_inst_335_, lean_object* v_inst_336_, lean_object* v_c_337_){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___f_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_338_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_339_ = lean_box(0);
lean_inc_ref(v_inst_336_);
lean_inc_ref(v_inst_335_);
lean_inc_ref(v_c_337_);
v___f_340_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3), 9, 8);
lean_closure_set(v___f_340_, 0, v___x_339_);
lean_closure_set(v___f_340_, 1, v_resTy_331_);
lean_closure_set(v___f_340_, 2, v_c_337_);
lean_closure_set(v___f_340_, 3, v_k_332_);
lean_closure_set(v___f_340_, 4, v_inst_333_);
lean_closure_set(v___f_340_, 5, v_toBind_334_);
lean_closure_set(v___f_340_, 6, v_inst_335_);
lean_closure_set(v___f_340_, 7, v_inst_336_);
v___x_341_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4);
v___x_342_ = l_Lean_Expr_app___override(v___x_341_, v_c_337_);
v___x_343_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_335_, v_inst_336_, v___x_338_, v___x_342_, v___f_340_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(lean_object* v_c_344_, lean_object* v_resTy_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lean_mkArrow(v_c_344_, v_resTy_345_, v___y_348_, v___y_349_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed(lean_object* v_c_352_, lean_object* v_resTy_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(v_c_352_, v_resTy_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6(lean_object* v___x_363_, lean_object* v_resTy_364_, lean_object* v_c_365_, lean_object* v_dec_366_, lean_object* v_t_367_, lean_object* v_e_368_, lean_object* v_k_369_, lean_object* v_u_370_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_371_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_372_, 0, v_u_370_);
lean_ctor_set(v___x_372_, 1, v___x_363_);
v___x_373_ = l_Lean_mkConst(v___x_371_, v___x_372_);
lean_inc_ref(v_e_368_);
lean_inc_ref(v_t_367_);
lean_inc_ref(v_dec_366_);
lean_inc_ref(v_c_365_);
v___x_374_ = l_Lean_mkApp5(v___x_373_, v_resTy_364_, v_c_365_, v_dec_366_, v_t_367_, v_e_368_);
v___x_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
v___x_376_ = lean_unsigned_to_nat(4u);
v___x_377_ = lean_mk_empty_array_with_capacity(v___x_376_);
v___x_378_ = lean_array_push(v___x_377_, v_c_365_);
v___x_379_ = lean_array_push(v___x_378_, v_dec_366_);
v___x_380_ = lean_array_push(v___x_379_, v_t_367_);
v___x_381_ = lean_array_push(v___x_380_, v_e_368_);
v___x_382_ = lean_apply_2(v_k_369_, v___x_375_, v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7(lean_object* v___x_383_, lean_object* v_resTy_384_, lean_object* v_c_385_, lean_object* v_dec_386_, lean_object* v_t_387_, lean_object* v_k_388_, lean_object* v_inst_389_, lean_object* v_toBind_390_, lean_object* v_e_391_){
_start:
{
lean_object* v___f_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
lean_inc_ref(v_resTy_384_);
v___f_392_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6), 8, 7);
lean_closure_set(v___f_392_, 0, v___x_383_);
lean_closure_set(v___f_392_, 1, v_resTy_384_);
lean_closure_set(v___f_392_, 2, v_c_385_);
lean_closure_set(v___f_392_, 3, v_dec_386_);
lean_closure_set(v___f_392_, 4, v_t_387_);
lean_closure_set(v___f_392_, 5, v_e_391_);
lean_closure_set(v___f_392_, 6, v_k_388_);
v___x_393_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_393_, 0, v_resTy_384_);
v___x_394_ = lean_apply_2(v_inst_389_, lean_box(0), v___x_393_);
v___x_395_ = lean_apply_4(v_toBind_390_, lean_box(0), lean_box(0), v___x_394_, v___f_392_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8(lean_object* v___x_396_, lean_object* v_resTy_397_, lean_object* v_c_398_, lean_object* v_dec_399_, lean_object* v_k_400_, lean_object* v_inst_401_, lean_object* v_toBind_402_, lean_object* v_inst_403_, lean_object* v_inst_404_, lean_object* v_eTy_405_, lean_object* v_t_406_){
_start:
{
lean_object* v___f_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___f_407_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7), 9, 8);
lean_closure_set(v___f_407_, 0, v___x_396_);
lean_closure_set(v___f_407_, 1, v_resTy_397_);
lean_closure_set(v___f_407_, 2, v_c_398_);
lean_closure_set(v___f_407_, 3, v_dec_399_);
lean_closure_set(v___f_407_, 4, v_t_406_);
lean_closure_set(v___f_407_, 5, v_k_400_);
lean_closure_set(v___f_407_, 6, v_inst_401_);
lean_closure_set(v___f_407_, 7, v_toBind_402_);
v___x_408_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_409_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_403_, v_inst_404_, v___x_408_, v_eTy_405_, v___f_407_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9(lean_object* v___x_410_, lean_object* v_resTy_411_, lean_object* v_c_412_, lean_object* v_dec_413_, lean_object* v_k_414_, lean_object* v_inst_415_, lean_object* v_toBind_416_, lean_object* v_inst_417_, lean_object* v_inst_418_, lean_object* v_tTy_419_, lean_object* v_eTy_420_){
_start:
{
lean_object* v___f_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
lean_inc_ref(v_inst_418_);
lean_inc_ref(v_inst_417_);
v___f_421_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8), 11, 10);
lean_closure_set(v___f_421_, 0, v___x_410_);
lean_closure_set(v___f_421_, 1, v_resTy_411_);
lean_closure_set(v___f_421_, 2, v_c_412_);
lean_closure_set(v___f_421_, 3, v_dec_413_);
lean_closure_set(v___f_421_, 4, v_k_414_);
lean_closure_set(v___f_421_, 5, v_inst_415_);
lean_closure_set(v___f_421_, 6, v_toBind_416_);
lean_closure_set(v___f_421_, 7, v_inst_417_);
lean_closure_set(v___f_421_, 8, v_inst_418_);
lean_closure_set(v___f_421_, 9, v_eTy_420_);
v___x_422_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_423_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_417_, v_inst_418_, v___x_422_, v_tTy_419_, v___f_421_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(lean_object* v___x_424_, lean_object* v_resTy_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l_Lean_mkArrow(v___x_424_, v_resTy_425_, v___y_428_, v___y_429_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed(lean_object* v___x_432_, lean_object* v_resTy_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(v___x_432_, v_resTy_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11(lean_object* v___x_440_, lean_object* v_resTy_441_, lean_object* v_c_442_, lean_object* v_dec_443_, lean_object* v_k_444_, lean_object* v_inst_445_, lean_object* v_toBind_446_, lean_object* v_inst_447_, lean_object* v_inst_448_, lean_object* v_tTy_449_){
_start:
{
lean_object* v___f_450_; lean_object* v___x_451_; lean_object* v___f_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
lean_inc(v_toBind_446_);
lean_inc(v_inst_445_);
lean_inc_ref(v_c_442_);
lean_inc_ref(v_resTy_441_);
v___f_450_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9), 11, 10);
lean_closure_set(v___f_450_, 0, v___x_440_);
lean_closure_set(v___f_450_, 1, v_resTy_441_);
lean_closure_set(v___f_450_, 2, v_c_442_);
lean_closure_set(v___f_450_, 3, v_dec_443_);
lean_closure_set(v___f_450_, 4, v_k_444_);
lean_closure_set(v___f_450_, 5, v_inst_445_);
lean_closure_set(v___f_450_, 6, v_toBind_446_);
lean_closure_set(v___f_450_, 7, v_inst_447_);
lean_closure_set(v___f_450_, 8, v_inst_448_);
lean_closure_set(v___f_450_, 9, v_tTy_449_);
v___x_451_ = l_Lean_mkNot(v_c_442_);
v___f_452_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed), 7, 2);
lean_closure_set(v___f_452_, 0, v___x_451_);
lean_closure_set(v___f_452_, 1, v_resTy_441_);
v___x_453_ = lean_apply_2(v_inst_445_, lean_box(0), v___f_452_);
v___x_454_ = lean_apply_4(v_toBind_446_, lean_box(0), lean_box(0), v___x_453_, v___f_450_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12(lean_object* v___x_455_, lean_object* v_resTy_456_, lean_object* v_c_457_, lean_object* v_k_458_, lean_object* v_inst_459_, lean_object* v_toBind_460_, lean_object* v_inst_461_, lean_object* v_inst_462_, lean_object* v___f_463_, lean_object* v_dec_464_){
_start:
{
lean_object* v___f_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
lean_inc(v_toBind_460_);
lean_inc(v_inst_459_);
v___f_465_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11), 10, 9);
lean_closure_set(v___f_465_, 0, v___x_455_);
lean_closure_set(v___f_465_, 1, v_resTy_456_);
lean_closure_set(v___f_465_, 2, v_c_457_);
lean_closure_set(v___f_465_, 3, v_dec_464_);
lean_closure_set(v___f_465_, 4, v_k_458_);
lean_closure_set(v___f_465_, 5, v_inst_459_);
lean_closure_set(v___f_465_, 6, v_toBind_460_);
lean_closure_set(v___f_465_, 7, v_inst_461_);
lean_closure_set(v___f_465_, 8, v_inst_462_);
v___x_466_ = lean_apply_2(v_inst_459_, lean_box(0), v___f_463_);
v___x_467_ = lean_apply_4(v_toBind_460_, lean_box(0), lean_box(0), v___x_466_, v___f_465_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13(lean_object* v_resTy_468_, lean_object* v_k_469_, lean_object* v_inst_470_, lean_object* v_toBind_471_, lean_object* v_inst_472_, lean_object* v_inst_473_, lean_object* v_c_474_){
_start:
{
lean_object* v___f_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___f_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
lean_inc_ref(v_resTy_468_);
lean_inc_ref_n(v_c_474_, 2);
v___f_475_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed), 7, 2);
lean_closure_set(v___f_475_, 0, v_c_474_);
lean_closure_set(v___f_475_, 1, v_resTy_468_);
v___x_476_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_477_ = lean_box(0);
lean_inc_ref(v_inst_473_);
lean_inc_ref(v_inst_472_);
v___f_478_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12), 10, 9);
lean_closure_set(v___f_478_, 0, v___x_477_);
lean_closure_set(v___f_478_, 1, v_resTy_468_);
lean_closure_set(v___f_478_, 2, v_c_474_);
lean_closure_set(v___f_478_, 3, v_k_469_);
lean_closure_set(v___f_478_, 4, v_inst_470_);
lean_closure_set(v___f_478_, 5, v_toBind_471_);
lean_closure_set(v___f_478_, 6, v_inst_472_);
lean_closure_set(v___f_478_, 7, v_inst_473_);
lean_closure_set(v___f_478_, 8, v___f_475_);
v___x_479_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4);
v___x_480_ = l_Lean_Expr_app___override(v___x_479_, v_c_474_);
v___x_481_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_472_, v_inst_473_, v___x_476_, v___x_480_, v___f_478_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14(lean_object* v___x_485_, lean_object* v_resTy_486_, lean_object* v_c_487_, lean_object* v_t_488_, lean_object* v_e_489_, lean_object* v_k_490_, lean_object* v_u_491_){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_492_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_493_, 0, v_u_491_);
lean_ctor_set(v___x_493_, 1, v___x_485_);
v___x_494_ = l_Lean_mkConst(v___x_492_, v___x_493_);
lean_inc_ref(v_e_489_);
lean_inc_ref(v_t_488_);
lean_inc_ref(v_c_487_);
v___x_495_ = l_Lean_mkApp4(v___x_494_, v_resTy_486_, v_c_487_, v_t_488_, v_e_489_);
v___x_496_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
v___x_497_ = lean_unsigned_to_nat(3u);
v___x_498_ = lean_mk_empty_array_with_capacity(v___x_497_);
v___x_499_ = lean_array_push(v___x_498_, v_c_487_);
v___x_500_ = lean_array_push(v___x_499_, v_t_488_);
v___x_501_ = lean_array_push(v___x_500_, v_e_489_);
v___x_502_ = lean_apply_2(v_k_490_, v___x_496_, v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15(lean_object* v___x_503_, lean_object* v_resTy_504_, lean_object* v_c_505_, lean_object* v_t_506_, lean_object* v_k_507_, lean_object* v_inst_508_, lean_object* v_toBind_509_, lean_object* v_e_510_){
_start:
{
lean_object* v___f_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
lean_inc_ref(v_resTy_504_);
v___f_511_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14), 7, 6);
lean_closure_set(v___f_511_, 0, v___x_503_);
lean_closure_set(v___f_511_, 1, v_resTy_504_);
lean_closure_set(v___f_511_, 2, v_c_505_);
lean_closure_set(v___f_511_, 3, v_t_506_);
lean_closure_set(v___f_511_, 4, v_e_510_);
lean_closure_set(v___f_511_, 5, v_k_507_);
v___x_512_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_512_, 0, v_resTy_504_);
v___x_513_ = lean_apply_2(v_inst_508_, lean_box(0), v___x_512_);
v___x_514_ = lean_apply_4(v_toBind_509_, lean_box(0), lean_box(0), v___x_513_, v___f_511_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16(lean_object* v___x_515_, lean_object* v_resTy_516_, lean_object* v_c_517_, lean_object* v_k_518_, lean_object* v_inst_519_, lean_object* v_toBind_520_, lean_object* v_inst_521_, lean_object* v_inst_522_, lean_object* v_t_523_){
_start:
{
lean_object* v___f_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
lean_inc_ref(v_resTy_516_);
v___f_524_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15), 8, 7);
lean_closure_set(v___f_524_, 0, v___x_515_);
lean_closure_set(v___f_524_, 1, v_resTy_516_);
lean_closure_set(v___f_524_, 2, v_c_517_);
lean_closure_set(v___f_524_, 3, v_t_523_);
lean_closure_set(v___f_524_, 4, v_k_518_);
lean_closure_set(v___f_524_, 5, v_inst_519_);
lean_closure_set(v___f_524_, 6, v_toBind_520_);
v___x_525_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_526_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_521_, v_inst_522_, v___x_525_, v_resTy_516_, v___f_524_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17(lean_object* v___x_527_, lean_object* v_resTy_528_, lean_object* v_k_529_, lean_object* v_inst_530_, lean_object* v_toBind_531_, lean_object* v_inst_532_, lean_object* v_inst_533_, lean_object* v_c_534_){
_start:
{
lean_object* v___f_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
lean_inc_ref(v_inst_533_);
lean_inc_ref(v_inst_532_);
lean_inc_ref(v_resTy_528_);
v___f_535_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16), 9, 8);
lean_closure_set(v___f_535_, 0, v___x_527_);
lean_closure_set(v___f_535_, 1, v_resTy_528_);
lean_closure_set(v___f_535_, 2, v_c_534_);
lean_closure_set(v___f_535_, 3, v_k_529_);
lean_closure_set(v___f_535_, 4, v_inst_530_);
lean_closure_set(v___f_535_, 5, v_toBind_531_);
lean_closure_set(v___f_535_, 6, v_inst_532_);
lean_closure_set(v___f_535_, 7, v_inst_533_);
v___x_536_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_537_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_532_, v_inst_533_, v___x_536_, v_resTy_528_, v___f_535_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18(lean_object* v___x_538_, lean_object* v___x_539_, lean_object* v_resTy_540_, lean_object* v_c_541_, lean_object* v_dec_542_, lean_object* v_t_543_, lean_object* v_e_544_, lean_object* v_k_545_, lean_object* v_u_546_){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_547_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0));
v___x_548_ = l_Lean_Name_mkStr2(v___x_538_, v___x_547_);
v___x_549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_549_, 0, v_u_546_);
lean_ctor_set(v___x_549_, 1, v___x_539_);
v___x_550_ = l_Lean_mkConst(v___x_548_, v___x_549_);
lean_inc_ref(v_e_544_);
lean_inc_ref(v_t_543_);
lean_inc_ref(v_dec_542_);
lean_inc_ref(v_c_541_);
v___x_551_ = l_Lean_mkApp5(v___x_550_, v_resTy_540_, v_c_541_, v_dec_542_, v_t_543_, v_e_544_);
v___x_552_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
v___x_553_ = lean_unsigned_to_nat(4u);
v___x_554_ = lean_mk_empty_array_with_capacity(v___x_553_);
v___x_555_ = lean_array_push(v___x_554_, v_c_541_);
v___x_556_ = lean_array_push(v___x_555_, v_dec_542_);
v___x_557_ = lean_array_push(v___x_556_, v_t_543_);
v___x_558_ = lean_array_push(v___x_557_, v_e_544_);
v___x_559_ = lean_apply_2(v_k_545_, v___x_552_, v___x_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19(lean_object* v___x_560_, lean_object* v___x_561_, lean_object* v_resTy_562_, lean_object* v_c_563_, lean_object* v_dec_564_, lean_object* v_t_565_, lean_object* v_k_566_, lean_object* v_inst_567_, lean_object* v_toBind_568_, lean_object* v_e_569_){
_start:
{
lean_object* v___f_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
lean_inc_ref(v_resTy_562_);
v___f_570_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18), 9, 8);
lean_closure_set(v___f_570_, 0, v___x_560_);
lean_closure_set(v___f_570_, 1, v___x_561_);
lean_closure_set(v___f_570_, 2, v_resTy_562_);
lean_closure_set(v___f_570_, 3, v_c_563_);
lean_closure_set(v___f_570_, 4, v_dec_564_);
lean_closure_set(v___f_570_, 5, v_t_565_);
lean_closure_set(v___f_570_, 6, v_e_569_);
lean_closure_set(v___f_570_, 7, v_k_566_);
v___x_571_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_571_, 0, v_resTy_562_);
v___x_572_ = lean_apply_2(v_inst_567_, lean_box(0), v___x_571_);
v___x_573_ = lean_apply_4(v_toBind_568_, lean_box(0), lean_box(0), v___x_572_, v___f_570_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20(lean_object* v___x_574_, lean_object* v___x_575_, lean_object* v_resTy_576_, lean_object* v_c_577_, lean_object* v_dec_578_, lean_object* v_k_579_, lean_object* v_inst_580_, lean_object* v_toBind_581_, lean_object* v_inst_582_, lean_object* v_inst_583_, lean_object* v_t_584_){
_start:
{
lean_object* v___f_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
lean_inc_ref(v_resTy_576_);
v___f_585_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19), 10, 9);
lean_closure_set(v___f_585_, 0, v___x_574_);
lean_closure_set(v___f_585_, 1, v___x_575_);
lean_closure_set(v___f_585_, 2, v_resTy_576_);
lean_closure_set(v___f_585_, 3, v_c_577_);
lean_closure_set(v___f_585_, 4, v_dec_578_);
lean_closure_set(v___f_585_, 5, v_t_584_);
lean_closure_set(v___f_585_, 6, v_k_579_);
lean_closure_set(v___f_585_, 7, v_inst_580_);
lean_closure_set(v___f_585_, 8, v_toBind_581_);
v___x_586_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_587_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_582_, v_inst_583_, v___x_586_, v_resTy_576_, v___f_585_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21(lean_object* v___x_588_, lean_object* v___x_589_, lean_object* v_resTy_590_, lean_object* v_c_591_, lean_object* v_k_592_, lean_object* v_inst_593_, lean_object* v_toBind_594_, lean_object* v_inst_595_, lean_object* v_inst_596_, lean_object* v_dec_597_){
_start:
{
lean_object* v___f_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
lean_inc_ref(v_inst_596_);
lean_inc_ref(v_inst_595_);
lean_inc_ref(v_resTy_590_);
v___f_598_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20), 11, 10);
lean_closure_set(v___f_598_, 0, v___x_588_);
lean_closure_set(v___f_598_, 1, v___x_589_);
lean_closure_set(v___f_598_, 2, v_resTy_590_);
lean_closure_set(v___f_598_, 3, v_c_591_);
lean_closure_set(v___f_598_, 4, v_dec_597_);
lean_closure_set(v___f_598_, 5, v_k_592_);
lean_closure_set(v___f_598_, 6, v_inst_593_);
lean_closure_set(v___f_598_, 7, v_toBind_594_);
lean_closure_set(v___f_598_, 8, v_inst_595_);
lean_closure_set(v___f_598_, 9, v_inst_596_);
v___x_599_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_600_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_595_, v_inst_596_, v___x_599_, v_resTy_590_, v___f_598_);
return v___x_600_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__2(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_604_ = lean_box(0);
v___x_605_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__1));
v___x_606_ = l_Lean_mkConst(v___x_605_, v___x_604_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22(lean_object* v_resTy_607_, lean_object* v_k_608_, lean_object* v_inst_609_, lean_object* v_toBind_610_, lean_object* v_inst_611_, lean_object* v_inst_612_, lean_object* v_c_613_){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___f_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_614_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_615_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__0));
v___x_616_ = lean_box(0);
lean_inc_ref(v_inst_612_);
lean_inc_ref(v_inst_611_);
lean_inc_ref(v_c_613_);
v___f_617_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21), 10, 9);
lean_closure_set(v___f_617_, 0, v___x_615_);
lean_closure_set(v___f_617_, 1, v___x_616_);
lean_closure_set(v___f_617_, 2, v_resTy_607_);
lean_closure_set(v___f_617_, 3, v_c_613_);
lean_closure_set(v___f_617_, 4, v_k_608_);
lean_closure_set(v___f_617_, 5, v_inst_609_);
lean_closure_set(v___f_617_, 6, v_toBind_610_);
lean_closure_set(v___f_617_, 7, v_inst_611_);
lean_closure_set(v___f_617_, 8, v_inst_612_);
v___x_618_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__2, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__2_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__2);
v___x_619_ = l_Lean_Expr_app___override(v___x_618_, v_c_613_);
v___x_620_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_611_, v_inst_612_, v___x_614_, v___x_619_, v___f_617_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(lean_object* v___x_621_, lean_object* v___x_622_, lean_object* v_resTy_623_, lean_object* v_c_624_, lean_object* v_dec_625_, lean_object* v_t_626_, lean_object* v_e_627_, lean_object* v_k_628_, lean_object* v_u_629_){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_630_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0));
v___x_631_ = l_Lean_Name_mkStr2(v___x_621_, v___x_630_);
v___x_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_632_, 0, v_u_629_);
lean_ctor_set(v___x_632_, 1, v___x_622_);
v___x_633_ = l_Lean_mkConst(v___x_631_, v___x_632_);
lean_inc_ref(v_e_627_);
lean_inc_ref(v_t_626_);
lean_inc_ref(v_dec_625_);
lean_inc_ref(v_c_624_);
v___x_634_ = l_Lean_mkApp5(v___x_633_, v_resTy_623_, v_c_624_, v_dec_625_, v_t_626_, v_e_627_);
v___x_635_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
v___x_636_ = lean_unsigned_to_nat(4u);
v___x_637_ = lean_mk_empty_array_with_capacity(v___x_636_);
v___x_638_ = lean_array_push(v___x_637_, v_c_624_);
v___x_639_ = lean_array_push(v___x_638_, v_dec_625_);
v___x_640_ = lean_array_push(v___x_639_, v_t_626_);
v___x_641_ = lean_array_push(v___x_640_, v_e_627_);
v___x_642_ = lean_apply_2(v_k_628_, v___x_635_, v___x_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23(lean_object* v___x_643_, lean_object* v___x_644_, lean_object* v_resTy_645_, lean_object* v_c_646_, lean_object* v_dec_647_, lean_object* v_t_648_, lean_object* v_k_649_, lean_object* v_inst_650_, lean_object* v_toBind_651_, lean_object* v_e_652_){
_start:
{
lean_object* v___f_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
lean_inc_ref(v_resTy_645_);
v___f_653_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24), 9, 8);
lean_closure_set(v___f_653_, 0, v___x_643_);
lean_closure_set(v___f_653_, 1, v___x_644_);
lean_closure_set(v___f_653_, 2, v_resTy_645_);
lean_closure_set(v___f_653_, 3, v_c_646_);
lean_closure_set(v___f_653_, 4, v_dec_647_);
lean_closure_set(v___f_653_, 5, v_t_648_);
lean_closure_set(v___f_653_, 6, v_e_652_);
lean_closure_set(v___f_653_, 7, v_k_649_);
v___x_654_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_654_, 0, v_resTy_645_);
v___x_655_ = lean_apply_2(v_inst_650_, lean_box(0), v___x_654_);
v___x_656_ = lean_apply_4(v_toBind_651_, lean_box(0), lean_box(0), v___x_655_, v___f_653_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25(lean_object* v___x_657_, lean_object* v___x_658_, lean_object* v_resTy_659_, lean_object* v_c_660_, lean_object* v_dec_661_, lean_object* v_k_662_, lean_object* v_inst_663_, lean_object* v_toBind_664_, lean_object* v_inst_665_, lean_object* v_inst_666_, lean_object* v_eTy_667_, lean_object* v_t_668_){
_start:
{
lean_object* v___f_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___f_669_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23), 10, 9);
lean_closure_set(v___f_669_, 0, v___x_657_);
lean_closure_set(v___f_669_, 1, v___x_658_);
lean_closure_set(v___f_669_, 2, v_resTy_659_);
lean_closure_set(v___f_669_, 3, v_c_660_);
lean_closure_set(v___f_669_, 4, v_dec_661_);
lean_closure_set(v___f_669_, 5, v_t_668_);
lean_closure_set(v___f_669_, 6, v_k_662_);
lean_closure_set(v___f_669_, 7, v_inst_663_);
lean_closure_set(v___f_669_, 8, v_toBind_664_);
v___x_670_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_671_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_665_, v_inst_666_, v___x_670_, v_eTy_667_, v___f_669_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26(lean_object* v___x_672_, lean_object* v___x_673_, lean_object* v_resTy_674_, lean_object* v_c_675_, lean_object* v_dec_676_, lean_object* v_k_677_, lean_object* v_inst_678_, lean_object* v_toBind_679_, lean_object* v_inst_680_, lean_object* v_inst_681_, lean_object* v_tTy_682_, lean_object* v_eTy_683_){
_start:
{
lean_object* v___f_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
lean_inc_ref(v_inst_681_);
lean_inc_ref(v_inst_680_);
v___f_684_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25), 12, 11);
lean_closure_set(v___f_684_, 0, v___x_672_);
lean_closure_set(v___f_684_, 1, v___x_673_);
lean_closure_set(v___f_684_, 2, v_resTy_674_);
lean_closure_set(v___f_684_, 3, v_c_675_);
lean_closure_set(v___f_684_, 4, v_dec_676_);
lean_closure_set(v___f_684_, 5, v_k_677_);
lean_closure_set(v___f_684_, 6, v_inst_678_);
lean_closure_set(v___f_684_, 7, v_toBind_679_);
lean_closure_set(v___f_684_, 8, v_inst_680_);
lean_closure_set(v___f_684_, 9, v_inst_681_);
lean_closure_set(v___f_684_, 10, v_eTy_683_);
v___x_685_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_686_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_680_, v_inst_681_, v___x_685_, v_tTy_682_, v___f_684_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28(lean_object* v___x_687_, lean_object* v___x_688_, lean_object* v_resTy_689_, lean_object* v_c_690_, lean_object* v_dec_691_, lean_object* v_k_692_, lean_object* v_inst_693_, lean_object* v_toBind_694_, lean_object* v_inst_695_, lean_object* v_inst_696_, lean_object* v_tTy_697_){
_start:
{
lean_object* v___f_698_; lean_object* v___x_699_; lean_object* v___f_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
lean_inc(v_toBind_694_);
lean_inc(v_inst_693_);
lean_inc_ref(v_c_690_);
lean_inc_ref(v_resTy_689_);
v___f_698_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26), 12, 11);
lean_closure_set(v___f_698_, 0, v___x_687_);
lean_closure_set(v___f_698_, 1, v___x_688_);
lean_closure_set(v___f_698_, 2, v_resTy_689_);
lean_closure_set(v___f_698_, 3, v_c_690_);
lean_closure_set(v___f_698_, 4, v_dec_691_);
lean_closure_set(v___f_698_, 5, v_k_692_);
lean_closure_set(v___f_698_, 6, v_inst_693_);
lean_closure_set(v___f_698_, 7, v_toBind_694_);
lean_closure_set(v___f_698_, 8, v_inst_695_);
lean_closure_set(v___f_698_, 9, v_inst_696_);
lean_closure_set(v___f_698_, 10, v_tTy_697_);
v___x_699_ = l_Lean_mkNot(v_c_690_);
v___f_700_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed), 7, 2);
lean_closure_set(v___f_700_, 0, v___x_699_);
lean_closure_set(v___f_700_, 1, v_resTy_689_);
v___x_701_ = lean_apply_2(v_inst_693_, lean_box(0), v___f_700_);
v___x_702_ = lean_apply_4(v_toBind_694_, lean_box(0), lean_box(0), v___x_701_, v___f_698_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(lean_object* v___x_703_, lean_object* v___x_704_, lean_object* v_resTy_705_, lean_object* v_c_706_, lean_object* v_k_707_, lean_object* v_inst_708_, lean_object* v_toBind_709_, lean_object* v_inst_710_, lean_object* v_inst_711_, lean_object* v___f_712_, lean_object* v_dec_713_){
_start:
{
lean_object* v___f_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
lean_inc(v_toBind_709_);
lean_inc(v_inst_708_);
v___f_714_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28), 11, 10);
lean_closure_set(v___f_714_, 0, v___x_703_);
lean_closure_set(v___f_714_, 1, v___x_704_);
lean_closure_set(v___f_714_, 2, v_resTy_705_);
lean_closure_set(v___f_714_, 3, v_c_706_);
lean_closure_set(v___f_714_, 4, v_dec_713_);
lean_closure_set(v___f_714_, 5, v_k_707_);
lean_closure_set(v___f_714_, 6, v_inst_708_);
lean_closure_set(v___f_714_, 7, v_toBind_709_);
lean_closure_set(v___f_714_, 8, v_inst_710_);
lean_closure_set(v___f_714_, 9, v_inst_711_);
v___x_715_ = lean_apply_2(v_inst_708_, lean_box(0), v___f_712_);
v___x_716_ = lean_apply_4(v_toBind_709_, lean_box(0), lean_box(0), v___x_715_, v___f_714_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29(lean_object* v_resTy_717_, lean_object* v_k_718_, lean_object* v_inst_719_, lean_object* v_toBind_720_, lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_c_723_){
_start:
{
lean_object* v___f_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___f_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
lean_inc_ref(v_resTy_717_);
lean_inc_ref_n(v_c_723_, 2);
v___f_724_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed), 7, 2);
lean_closure_set(v___f_724_, 0, v_c_723_);
lean_closure_set(v___f_724_, 1, v_resTy_717_);
v___x_725_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_726_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__0));
v___x_727_ = lean_box(0);
lean_inc_ref(v_inst_722_);
lean_inc_ref(v_inst_721_);
v___f_728_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27), 11, 10);
lean_closure_set(v___f_728_, 0, v___x_726_);
lean_closure_set(v___f_728_, 1, v___x_727_);
lean_closure_set(v___f_728_, 2, v_resTy_717_);
lean_closure_set(v___f_728_, 3, v_c_723_);
lean_closure_set(v___f_728_, 4, v_k_718_);
lean_closure_set(v___f_728_, 5, v_inst_719_);
lean_closure_set(v___f_728_, 6, v_toBind_720_);
lean_closure_set(v___f_728_, 7, v_inst_721_);
lean_closure_set(v___f_728_, 8, v_inst_722_);
lean_closure_set(v___f_728_, 9, v___f_724_);
v___x_729_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__2, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__2_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22___closed__2);
v___x_730_ = l_Lean_Expr_app___override(v___x_729_, v_c_723_);
v___x_731_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_721_, v_inst_722_, v___x_725_, v___x_730_, v___f_728_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(lean_object* v___x_733_, lean_object* v___x_734_, lean_object* v_resTy_735_, lean_object* v_c_736_, lean_object* v_t_737_, lean_object* v_e_738_, lean_object* v_k_739_, lean_object* v_u_740_){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_741_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0));
v___x_742_ = l_Lean_Name_mkStr2(v___x_733_, v___x_741_);
v___x_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_743_, 0, v_u_740_);
lean_ctor_set(v___x_743_, 1, v___x_734_);
v___x_744_ = l_Lean_mkConst(v___x_742_, v___x_743_);
lean_inc_ref(v_e_738_);
lean_inc_ref(v_t_737_);
lean_inc_ref(v_c_736_);
v___x_745_ = l_Lean_mkApp4(v___x_744_, v_resTy_735_, v_c_736_, v_t_737_, v_e_738_);
v___x_746_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
v___x_747_ = lean_unsigned_to_nat(3u);
v___x_748_ = lean_mk_empty_array_with_capacity(v___x_747_);
v___x_749_ = lean_array_push(v___x_748_, v_c_736_);
v___x_750_ = lean_array_push(v___x_749_, v_t_737_);
v___x_751_ = lean_array_push(v___x_750_, v_e_738_);
v___x_752_ = lean_apply_2(v_k_739_, v___x_746_, v___x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31(lean_object* v___x_753_, lean_object* v___x_754_, lean_object* v_resTy_755_, lean_object* v_c_756_, lean_object* v_t_757_, lean_object* v_k_758_, lean_object* v_inst_759_, lean_object* v_toBind_760_, lean_object* v_e_761_){
_start:
{
lean_object* v___f_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
lean_inc_ref(v_resTy_755_);
v___f_762_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30), 8, 7);
lean_closure_set(v___f_762_, 0, v___x_753_);
lean_closure_set(v___f_762_, 1, v___x_754_);
lean_closure_set(v___f_762_, 2, v_resTy_755_);
lean_closure_set(v___f_762_, 3, v_c_756_);
lean_closure_set(v___f_762_, 4, v_t_757_);
lean_closure_set(v___f_762_, 5, v_e_761_);
lean_closure_set(v___f_762_, 6, v_k_758_);
v___x_763_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_763_, 0, v_resTy_755_);
v___x_764_ = lean_apply_2(v_inst_759_, lean_box(0), v___x_763_);
v___x_765_ = lean_apply_4(v_toBind_760_, lean_box(0), lean_box(0), v___x_764_, v___f_762_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32(lean_object* v___x_766_, lean_object* v___x_767_, lean_object* v_resTy_768_, lean_object* v_c_769_, lean_object* v_k_770_, lean_object* v_inst_771_, lean_object* v_toBind_772_, lean_object* v_inst_773_, lean_object* v_inst_774_, lean_object* v_eTy_775_, lean_object* v_t_776_){
_start:
{
lean_object* v___f_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___f_777_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31), 9, 8);
lean_closure_set(v___f_777_, 0, v___x_766_);
lean_closure_set(v___f_777_, 1, v___x_767_);
lean_closure_set(v___f_777_, 2, v_resTy_768_);
lean_closure_set(v___f_777_, 3, v_c_769_);
lean_closure_set(v___f_777_, 4, v_t_776_);
lean_closure_set(v___f_777_, 5, v_k_770_);
lean_closure_set(v___f_777_, 6, v_inst_771_);
lean_closure_set(v___f_777_, 7, v_toBind_772_);
v___x_778_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_779_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_773_, v_inst_774_, v___x_778_, v_eTy_775_, v___f_777_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__33(lean_object* v___x_780_, lean_object* v___x_781_, lean_object* v_resTy_782_, lean_object* v_c_783_, lean_object* v_k_784_, lean_object* v_inst_785_, lean_object* v_toBind_786_, lean_object* v_inst_787_, lean_object* v_inst_788_, lean_object* v_tTy_789_, lean_object* v_eTy_790_){
_start:
{
lean_object* v___f_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
lean_inc_ref(v_inst_788_);
lean_inc_ref(v_inst_787_);
v___f_791_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32), 11, 10);
lean_closure_set(v___f_791_, 0, v___x_780_);
lean_closure_set(v___f_791_, 1, v___x_781_);
lean_closure_set(v___f_791_, 2, v_resTy_782_);
lean_closure_set(v___f_791_, 3, v_c_783_);
lean_closure_set(v___f_791_, 4, v_k_784_);
lean_closure_set(v___f_791_, 5, v_inst_785_);
lean_closure_set(v___f_791_, 6, v_toBind_786_);
lean_closure_set(v___f_791_, 7, v_inst_787_);
lean_closure_set(v___f_791_, 8, v_inst_788_);
lean_closure_set(v___f_791_, 9, v_eTy_790_);
v___x_792_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_793_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_787_, v_inst_788_, v___x_792_, v_tTy_789_, v___f_791_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__34(lean_object* v_____do__lift_794_, lean_object* v_resTy_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l_Lean_mkArrow(v_____do__lift_794_, v_resTy_795_, v___y_798_, v___y_799_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__34___boxed(lean_object* v_____do__lift_802_, lean_object* v_resTy_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__34(v_____do__lift_802_, v_resTy_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__35(lean_object* v_resTy_810_, lean_object* v_inst_811_, lean_object* v_toBind_812_, lean_object* v___f_813_, lean_object* v_____do__lift_814_){
_start:
{
lean_object* v___f_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___f_815_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__34___boxed), 7, 2);
lean_closure_set(v___f_815_, 0, v_____do__lift_814_);
lean_closure_set(v___f_815_, 1, v_resTy_810_);
v___x_816_ = lean_apply_2(v_inst_811_, lean_box(0), v___f_815_);
v___x_817_ = lean_apply_4(v_toBind_812_, lean_box(0), lean_box(0), v___x_816_, v___f_813_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36(lean_object* v___x_819_, lean_object* v___x_820_, lean_object* v_resTy_821_, lean_object* v_c_822_, lean_object* v_k_823_, lean_object* v_inst_824_, lean_object* v_toBind_825_, lean_object* v_inst_826_, lean_object* v_inst_827_, lean_object* v_tTy_828_){
_start:
{
lean_object* v___f_829_; lean_object* v___f_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
lean_inc_n(v_toBind_825_, 2);
lean_inc_n(v_inst_824_, 2);
lean_inc_ref(v_c_822_);
lean_inc_ref(v_resTy_821_);
lean_inc(v___x_820_);
lean_inc_ref(v___x_819_);
v___f_829_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__33), 11, 10);
lean_closure_set(v___f_829_, 0, v___x_819_);
lean_closure_set(v___f_829_, 1, v___x_820_);
lean_closure_set(v___f_829_, 2, v_resTy_821_);
lean_closure_set(v___f_829_, 3, v_c_822_);
lean_closure_set(v___f_829_, 4, v_k_823_);
lean_closure_set(v___f_829_, 5, v_inst_824_);
lean_closure_set(v___f_829_, 6, v_toBind_825_);
lean_closure_set(v___f_829_, 7, v_inst_826_);
lean_closure_set(v___f_829_, 8, v_inst_827_);
lean_closure_set(v___f_829_, 9, v_tTy_828_);
v___f_830_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__35), 5, 4);
lean_closure_set(v___f_830_, 0, v_resTy_821_);
lean_closure_set(v___f_830_, 1, v_inst_824_);
lean_closure_set(v___f_830_, 2, v_toBind_825_);
lean_closure_set(v___f_830_, 3, v___f_829_);
v___x_831_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36___closed__0));
v___x_832_ = l_Lean_Name_mkStr2(v___x_819_, v___x_831_);
v___x_833_ = l_Lean_mkConst(v___x_832_, v___x_820_);
v___x_834_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_834_, 0, v_c_822_);
lean_closure_set(v___x_834_, 1, v___x_833_);
v___x_835_ = lean_apply_2(v_inst_824_, lean_box(0), v___x_834_);
v___x_836_ = lean_apply_4(v_toBind_825_, lean_box(0), lean_box(0), v___x_835_, v___f_830_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__39(lean_object* v___x_838_, lean_object* v___x_839_, lean_object* v_resTy_840_, lean_object* v_k_841_, lean_object* v_inst_842_, lean_object* v_toBind_843_, lean_object* v_inst_844_, lean_object* v_inst_845_, lean_object* v_c_846_){
_start:
{
lean_object* v___f_847_; lean_object* v___f_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
lean_inc_n(v_toBind_843_, 2);
lean_inc_n(v_inst_842_, 2);
lean_inc_ref(v_c_846_);
lean_inc_ref(v_resTy_840_);
lean_inc(v___x_839_);
lean_inc_ref(v___x_838_);
v___f_847_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36), 10, 9);
lean_closure_set(v___f_847_, 0, v___x_838_);
lean_closure_set(v___f_847_, 1, v___x_839_);
lean_closure_set(v___f_847_, 2, v_resTy_840_);
lean_closure_set(v___f_847_, 3, v_c_846_);
lean_closure_set(v___f_847_, 4, v_k_841_);
lean_closure_set(v___f_847_, 5, v_inst_842_);
lean_closure_set(v___f_847_, 6, v_toBind_843_);
lean_closure_set(v___f_847_, 7, v_inst_844_);
lean_closure_set(v___f_847_, 8, v_inst_845_);
v___f_848_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__35), 5, 4);
lean_closure_set(v___f_848_, 0, v_resTy_840_);
lean_closure_set(v___f_848_, 1, v_inst_842_);
lean_closure_set(v___f_848_, 2, v_toBind_843_);
lean_closure_set(v___f_848_, 3, v___f_847_);
v___x_849_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__39___closed__0));
v___x_850_ = l_Lean_Name_mkStr2(v___x_838_, v___x_849_);
v___x_851_ = l_Lean_mkConst(v___x_850_, v___x_839_);
v___x_852_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_852_, 0, v_c_846_);
lean_closure_set(v___x_852_, 1, v___x_851_);
v___x_853_ = lean_apply_2(v_inst_842_, lean_box(0), v___x_852_);
v___x_854_ = lean_apply_4(v_toBind_843_, lean_box(0), lean_box(0), v___x_853_, v___f_848_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37(lean_object* v_i_858_, lean_object* v_a_859_, lean_object* v_x_860_){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_861_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___closed__1));
v___x_862_ = lean_unsigned_to_nat(1u);
v___x_863_ = lean_nat_add(v_i_858_, v___x_862_);
v___x_864_ = lean_name_append_index_after(v___x_861_, v___x_863_);
v___x_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
lean_ctor_set(v___x_865_, 1, v_a_859_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___boxed(lean_object* v_i_866_, lean_object* v_a_867_, lean_object* v_x_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37(v_i_866_, v_a_867_, v_x_868_);
lean_dec(v_i_866_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__38(lean_object* v_resTy_870_, lean_object* v_motiveArgs_871_, lean_object* v_x_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
uint8_t v___x_878_; uint8_t v___x_879_; uint8_t v___x_880_; lean_object* v___x_881_; 
v___x_878_ = 0;
v___x_879_ = 1;
v___x_880_ = 1;
v___x_881_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_871_, v_resTy_870_, v___x_878_, v___x_879_, v___x_878_, v___x_879_, v___x_880_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__38___boxed(lean_object* v_resTy_882_, lean_object* v_motiveArgs_883_, lean_object* v_x_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__38(v_resTy_882_, v_motiveArgs_883_, v_x_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec_ref(v_x_884_);
lean_dec_ref(v_motiveArgs_883_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__40(lean_object* v_i_891_, lean_object* v___x_892_, lean_object* v_discrs_893_, lean_object* v_prior_894_, lean_object* v_next_895_, lean_object* v_acc_896_, lean_object* v_h_897_, lean_object* v_G_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v_a_905_; uint8_t v___x_909_; 
v___x_909_ = lean_nat_dec_lt(v_next_895_, v_i_891_);
if (v___x_909_ == 0)
{
lean_object* v___x_910_; 
lean_dec_ref(v_G_898_);
v___x_910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_910_, 0, v_acc_896_);
return v___x_910_;
}
else
{
lean_object* v___x_911_; uint8_t v___x_912_; 
v___x_911_ = lean_array_get_borrowed(v___x_892_, v_discrs_893_, v_next_895_);
v___x_912_ = l_Lean_Expr_isFVar(v___x_911_);
if (v___x_912_ == 0)
{
v_a_905_ = v_acc_896_;
goto v___jp_904_;
}
else
{
lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_913_ = lean_array_get_borrowed(v___x_892_, v_prior_894_, v_next_895_);
lean_inc(v___x_911_);
v___x_914_ = l_Lean_Expr_replaceFVar(v_acc_896_, v___x_911_, v___x_913_);
lean_dec_ref(v_acc_896_);
v_a_905_ = v___x_914_;
goto v___jp_904_;
}
}
v___jp_904_:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_906_ = lean_unsigned_to_nat(1u);
v___x_907_ = lean_nat_add(v_next_895_, v___x_906_);
lean_inc(v___y_902_);
lean_inc_ref(v___y_901_);
lean_inc(v___y_900_);
lean_inc_ref(v___y_899_);
v___x_908_ = lean_apply_9(v_G_898_, v___x_907_, v_a_905_, lean_box(0), lean_box(0), v___y_899_, v___y_900_, v___y_901_, v___y_902_, lean_box(0));
return v___x_908_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__40___boxed(lean_object* v_i_915_, lean_object* v___x_916_, lean_object* v_discrs_917_, lean_object* v_prior_918_, lean_object* v_next_919_, lean_object* v_acc_920_, lean_object* v_h_921_, lean_object* v_G_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__40(v_i_915_, v___x_916_, v_discrs_917_, v_prior_918_, v_next_919_, v_acc_920_, v_h_921_, v_G_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
lean_dec(v_next_919_);
lean_dec_ref(v_prior_918_);
lean_dec_ref(v_discrs_917_);
lean_dec_ref(v___x_916_);
lean_dec(v_i_915_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__41(lean_object* v_a_929_, lean_object* v___f_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
lean_object* v___x_936_; 
lean_inc(v___y_934_);
lean_inc_ref(v___y_933_);
lean_inc(v___y_932_);
lean_inc_ref(v___y_931_);
v___x_936_ = lean_infer_type(v_a_929_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; lean_object* v___x_938_; lean_object* v___x_3245__overap_939_; lean_object* v___x_940_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
lean_inc(v_a_937_);
lean_dec_ref_known(v___x_936_, 1);
v___x_938_ = lean_unsigned_to_nat(0u);
v___x_3245__overap_939_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_930_, v___x_938_, v_a_937_, lean_box(0));
v___x_940_ = lean_apply_5(v___x_3245__overap_939_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, lean_box(0));
return v___x_940_;
}
else
{
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec_ref(v___f_930_);
return v___x_936_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__41___boxed(lean_object* v_a_941_, lean_object* v___f_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__41(v_a_941_, v___f_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__42(lean_object* v_i_949_, lean_object* v___x_950_, lean_object* v_discrs_951_, lean_object* v_a_952_, lean_object* v_inst_953_, lean_object* v_prior_954_){
_start:
{
lean_object* v___f_955_; lean_object* v___f_956_; lean_object* v___x_957_; 
v___f_955_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__40___boxed), 13, 4);
lean_closure_set(v___f_955_, 0, v_i_949_);
lean_closure_set(v___f_955_, 1, v___x_950_);
lean_closure_set(v___f_955_, 2, v_discrs_951_);
lean_closure_set(v___f_955_, 3, v_prior_954_);
v___f_956_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__41___boxed), 7, 2);
lean_closure_set(v___f_956_, 0, v_a_952_);
lean_closure_set(v___f_956_, 1, v___f_955_);
v___x_957_ = lean_apply_2(v_inst_953_, lean_box(0), v___f_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43(lean_object* v___x_961_, lean_object* v_discrs_962_, lean_object* v_inst_963_, lean_object* v_i_964_, lean_object* v_a_965_, lean_object* v_x_966_){
_start:
{
lean_object* v___f_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
lean_inc(v_i_964_);
v___f_967_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__42), 6, 5);
lean_closure_set(v___f_967_, 0, v_i_964_);
lean_closure_set(v___f_967_, 1, v___x_961_);
lean_closure_set(v___f_967_, 2, v_discrs_962_);
lean_closure_set(v___f_967_, 3, v_a_965_);
lean_closure_set(v___f_967_, 4, v_inst_963_);
v___x_968_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43___closed__1));
v___x_969_ = lean_unsigned_to_nat(1u);
v___x_970_ = lean_nat_add(v_i_964_, v___x_969_);
lean_dec(v_i_964_);
v___x_971_ = lean_name_append_index_after(v___x_968_, v___x_970_);
v___x_972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_971_);
lean_ctor_set(v___x_972_, 1, v___f_967_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44(lean_object* v_toMatcherInfo_975_, lean_object* v_matcherName_976_, lean_object* v_matcherLevels_977_, lean_object* v_params_978_, lean_object* v_motive_979_, lean_object* v_discrs_980_, lean_object* v_alts_981_, lean_object* v_k_982_, lean_object* v_____do__lift_983_){
_start:
{
lean_object* v___x_984_; lean_object* v_abstractMatcherApp_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_984_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
lean_inc_ref(v_discrs_980_);
v_abstractMatcherApp_985_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_abstractMatcherApp_985_, 0, v_toMatcherInfo_975_);
lean_ctor_set(v_abstractMatcherApp_985_, 1, v_matcherName_976_);
lean_ctor_set(v_abstractMatcherApp_985_, 2, v_matcherLevels_977_);
lean_ctor_set(v_abstractMatcherApp_985_, 3, v_params_978_);
lean_ctor_set(v_abstractMatcherApp_985_, 4, v_motive_979_);
lean_ctor_set(v_abstractMatcherApp_985_, 5, v_discrs_980_);
lean_ctor_set(v_abstractMatcherApp_985_, 6, v_____do__lift_983_);
lean_ctor_set(v_abstractMatcherApp_985_, 7, v___x_984_);
v___x_986_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_986_, 0, v_abstractMatcherApp_985_);
v___x_987_ = l_Array_append___redArg(v_discrs_980_, v_alts_981_);
v___x_988_ = lean_apply_2(v_k_982_, v___x_986_, v___x_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___boxed(lean_object* v_toMatcherInfo_989_, lean_object* v_matcherName_990_, lean_object* v_matcherLevels_991_, lean_object* v_params_992_, lean_object* v_motive_993_, lean_object* v_discrs_994_, lean_object* v_alts_995_, lean_object* v_k_996_, lean_object* v_____do__lift_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44(v_toMatcherInfo_989_, v_matcherName_990_, v_matcherLevels_991_, v_params_992_, v_motive_993_, v_discrs_994_, v_alts_995_, v_k_996_, v_____do__lift_997_);
lean_dec_ref(v_alts_995_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__45(lean_object* v_toMatcherInfo_1000_, lean_object* v_matcherName_1001_, lean_object* v_matcherLevels_1002_, lean_object* v_params_1003_, lean_object* v_motive_1004_, lean_object* v_discrs_1005_, lean_object* v_k_1006_, lean_object* v___x_1007_, lean_object* v_inst_1008_, lean_object* v_toBind_1009_, lean_object* v_alts_1010_){
_start:
{
lean_object* v___f_1011_; lean_object* v___x_1012_; size_t v_sz_1013_; size_t v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
lean_inc_ref(v_alts_1010_);
v___f_1011_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___boxed), 9, 8);
lean_closure_set(v___f_1011_, 0, v_toMatcherInfo_1000_);
lean_closure_set(v___f_1011_, 1, v_matcherName_1001_);
lean_closure_set(v___f_1011_, 2, v_matcherLevels_1002_);
lean_closure_set(v___f_1011_, 3, v_params_1003_);
lean_closure_set(v___f_1011_, 4, v_motive_1004_);
lean_closure_set(v___f_1011_, 5, v_discrs_1005_);
lean_closure_set(v___f_1011_, 6, v_alts_1010_);
lean_closure_set(v___f_1011_, 7, v_k_1006_);
v___x_1012_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__45___closed__0));
v_sz_1013_ = lean_array_size(v_alts_1010_);
v___x_1014_ = ((size_t)0ULL);
v___x_1015_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1007_, v___x_1012_, v_sz_1013_, v___x_1014_, v_alts_1010_);
v___x_1016_ = lean_apply_2(v_inst_1008_, lean_box(0), v___x_1015_);
v___x_1017_ = lean_apply_4(v_toBind_1009_, lean_box(0), lean_box(0), v___x_1016_, v___f_1011_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46(lean_object* v___f_1037_, lean_object* v_inst_1038_, lean_object* v_inst_1039_, lean_object* v___f_1040_, lean_object* v_origAltTypes_1041_){
_start:
{
lean_object* v___x_1042_; size_t v_sz_1043_; size_t v___x_1044_; lean_object* v_altNamesTypes_1045_; uint8_t v___x_1046_; lean_object* v___x_1047_; 
v___x_1042_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__9));
v_sz_1043_ = lean_array_size(v_origAltTypes_1041_);
v___x_1044_ = ((size_t)0ULL);
lean_inc_ref(v_origAltTypes_1041_);
v_altNamesTypes_1045_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1042_, v_origAltTypes_1041_, v___f_1037_, v_sz_1043_, v___x_1044_, v_origAltTypes_1041_);
lean_dec_ref(v_origAltTypes_1041_);
v___x_1046_ = 0;
v___x_1047_ = l_Lean_Meta_withLocalDeclsDND___redArg(v_inst_1038_, v_inst_1039_, v_altNamesTypes_1045_, v___f_1040_, v___x_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__47(lean_object* v_toMatcherInfo_1048_, lean_object* v_matcherName_1049_, lean_object* v_params_1050_, lean_object* v_motive_1051_, lean_object* v_discrs_1052_, lean_object* v_k_1053_, lean_object* v___x_1054_, lean_object* v_inst_1055_, lean_object* v_toBind_1056_, lean_object* v___f_1057_, lean_object* v_inst_1058_, lean_object* v_inst_1059_, lean_object* v_alts_1060_, lean_object* v_matcherLevels_1061_){
_start:
{
lean_object* v___f_1062_; lean_object* v___f_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v_matcherPartial_1066_; lean_object* v_matcherPartial_1067_; lean_object* v_matcherPartial_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
lean_inc(v_toBind_1056_);
lean_inc(v_inst_1055_);
lean_inc_ref(v_discrs_1052_);
lean_inc_ref(v_motive_1051_);
lean_inc_ref(v_params_1050_);
lean_inc_ref(v_matcherLevels_1061_);
lean_inc(v_matcherName_1049_);
v___f_1062_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__45), 11, 10);
lean_closure_set(v___f_1062_, 0, v_toMatcherInfo_1048_);
lean_closure_set(v___f_1062_, 1, v_matcherName_1049_);
lean_closure_set(v___f_1062_, 2, v_matcherLevels_1061_);
lean_closure_set(v___f_1062_, 3, v_params_1050_);
lean_closure_set(v___f_1062_, 4, v_motive_1051_);
lean_closure_set(v___f_1062_, 5, v_discrs_1052_);
lean_closure_set(v___f_1062_, 6, v_k_1053_);
lean_closure_set(v___f_1062_, 7, v___x_1054_);
lean_closure_set(v___f_1062_, 8, v_inst_1055_);
lean_closure_set(v___f_1062_, 9, v_toBind_1056_);
v___f_1063_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46), 5, 4);
lean_closure_set(v___f_1063_, 0, v___f_1057_);
lean_closure_set(v___f_1063_, 1, v_inst_1058_);
lean_closure_set(v___f_1063_, 2, v_inst_1059_);
lean_closure_set(v___f_1063_, 3, v___f_1062_);
v___x_1064_ = lean_array_to_list(v_matcherLevels_1061_);
v___x_1065_ = l_Lean_mkConst(v_matcherName_1049_, v___x_1064_);
v_matcherPartial_1066_ = l_Lean_mkAppN(v___x_1065_, v_params_1050_);
lean_dec_ref(v_params_1050_);
v_matcherPartial_1067_ = l_Lean_Expr_app___override(v_matcherPartial_1066_, v_motive_1051_);
v_matcherPartial_1068_ = l_Lean_mkAppN(v_matcherPartial_1067_, v_discrs_1052_);
lean_dec_ref(v_discrs_1052_);
v___x_1069_ = lean_array_get_size(v_alts_1060_);
v___x_1070_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_1070_, 0, v___x_1069_);
lean_closure_set(v___x_1070_, 1, v_matcherPartial_1068_);
v___x_1071_ = lean_apply_2(v_inst_1055_, lean_box(0), v___x_1070_);
v___x_1072_ = lean_apply_4(v_toBind_1056_, lean_box(0), lean_box(0), v___x_1071_, v___f_1063_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__47___boxed(lean_object* v_toMatcherInfo_1073_, lean_object* v_matcherName_1074_, lean_object* v_params_1075_, lean_object* v_motive_1076_, lean_object* v_discrs_1077_, lean_object* v_k_1078_, lean_object* v___x_1079_, lean_object* v_inst_1080_, lean_object* v_toBind_1081_, lean_object* v___f_1082_, lean_object* v_inst_1083_, lean_object* v_inst_1084_, lean_object* v_alts_1085_, lean_object* v_matcherLevels_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__47(v_toMatcherInfo_1073_, v_matcherName_1074_, v_params_1075_, v_motive_1076_, v_discrs_1077_, v_k_1078_, v___x_1079_, v_inst_1080_, v_toBind_1081_, v___f_1082_, v_inst_1083_, v_inst_1084_, v_alts_1085_, v_matcherLevels_1086_);
lean_dec_ref(v_alts_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__48(lean_object* v___f_1088_, lean_object* v_matcherLevels_1089_){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = lean_apply_1(v___f_1088_, v_matcherLevels_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__50(lean_object* v_matcherLevels_1091_, lean_object* v_val_1092_, lean_object* v_toPure_1093_, lean_object* v_toBind_1094_, lean_object* v___f_1095_, lean_object* v_uElim_1096_){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1097_ = lean_array_set(v_matcherLevels_1091_, v_val_1092_, v_uElim_1096_);
v___x_1098_ = lean_apply_2(v_toPure_1093_, lean_box(0), v___x_1097_);
v___x_1099_ = lean_apply_4(v_toBind_1094_, lean_box(0), lean_box(0), v___x_1098_, v___f_1095_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__50___boxed(lean_object* v_matcherLevels_1100_, lean_object* v_val_1101_, lean_object* v_toPure_1102_, lean_object* v_toBind_1103_, lean_object* v___f_1104_, lean_object* v_uElim_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__50(v_matcherLevels_1100_, v_val_1101_, v_toPure_1102_, v_toBind_1103_, v___f_1104_, v_uElim_1105_);
lean_dec(v_val_1101_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__49(lean_object* v_toMatcherInfo_1107_, lean_object* v_matcherName_1108_, lean_object* v_params_1109_, lean_object* v_discrs_1110_, lean_object* v_k_1111_, lean_object* v___x_1112_, lean_object* v_inst_1113_, lean_object* v_toBind_1114_, lean_object* v___f_1115_, lean_object* v_inst_1116_, lean_object* v_inst_1117_, lean_object* v_alts_1118_, lean_object* v_toPure_1119_, lean_object* v_matcherLevels_1120_, lean_object* v_resTy_1121_, lean_object* v_motive_1122_){
_start:
{
lean_object* v_uElimPos_x3f_1123_; lean_object* v___f_1124_; 
v_uElimPos_x3f_1123_ = lean_ctor_get(v_toMatcherInfo_1107_, 3);
lean_inc(v_uElimPos_x3f_1123_);
lean_inc(v_toBind_1114_);
lean_inc(v_inst_1113_);
v___f_1124_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__47___boxed), 14, 13);
lean_closure_set(v___f_1124_, 0, v_toMatcherInfo_1107_);
lean_closure_set(v___f_1124_, 1, v_matcherName_1108_);
lean_closure_set(v___f_1124_, 2, v_params_1109_);
lean_closure_set(v___f_1124_, 3, v_motive_1122_);
lean_closure_set(v___f_1124_, 4, v_discrs_1110_);
lean_closure_set(v___f_1124_, 5, v_k_1111_);
lean_closure_set(v___f_1124_, 6, v___x_1112_);
lean_closure_set(v___f_1124_, 7, v_inst_1113_);
lean_closure_set(v___f_1124_, 8, v_toBind_1114_);
lean_closure_set(v___f_1124_, 9, v___f_1115_);
lean_closure_set(v___f_1124_, 10, v_inst_1116_);
lean_closure_set(v___f_1124_, 11, v_inst_1117_);
lean_closure_set(v___f_1124_, 12, v_alts_1118_);
if (lean_obj_tag(v_uElimPos_x3f_1123_) == 0)
{
lean_object* v___f_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
lean_dec_ref(v_resTy_1121_);
lean_dec(v_inst_1113_);
v___f_1125_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__48), 2, 1);
lean_closure_set(v___f_1125_, 0, v___f_1124_);
v___x_1126_ = lean_apply_2(v_toPure_1119_, lean_box(0), v_matcherLevels_1120_);
v___x_1127_ = lean_apply_4(v_toBind_1114_, lean_box(0), lean_box(0), v___x_1126_, v___f_1125_);
return v___x_1127_;
}
else
{
lean_object* v_val_1128_; lean_object* v___f_1129_; lean_object* v___f_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v_val_1128_ = lean_ctor_get(v_uElimPos_x3f_1123_, 0);
lean_inc(v_val_1128_);
lean_dec_ref_known(v_uElimPos_x3f_1123_, 1);
v___f_1129_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__48), 2, 1);
lean_closure_set(v___f_1129_, 0, v___f_1124_);
lean_inc(v_toBind_1114_);
v___f_1130_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__50___boxed), 6, 5);
lean_closure_set(v___f_1130_, 0, v_matcherLevels_1120_);
lean_closure_set(v___f_1130_, 1, v_val_1128_);
lean_closure_set(v___f_1130_, 2, v_toPure_1119_);
lean_closure_set(v___f_1130_, 3, v_toBind_1114_);
lean_closure_set(v___f_1130_, 4, v___f_1129_);
v___x_1131_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1131_, 0, v_resTy_1121_);
v___x_1132_ = lean_apply_2(v_inst_1113_, lean_box(0), v___x_1131_);
v___x_1133_ = lean_apply_4(v_toBind_1114_, lean_box(0), lean_box(0), v___x_1132_, v___f_1130_);
return v___x_1133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__51(lean_object* v_toMatcherInfo_1134_, lean_object* v_matcherName_1135_, lean_object* v_params_1136_, lean_object* v_k_1137_, lean_object* v___x_1138_, lean_object* v_inst_1139_, lean_object* v_toBind_1140_, lean_object* v___f_1141_, lean_object* v_inst_1142_, lean_object* v_inst_1143_, lean_object* v_alts_1144_, lean_object* v_toPure_1145_, lean_object* v_matcherLevels_1146_, lean_object* v_resTy_1147_, lean_object* v___x_1148_, lean_object* v_motive_1149_, lean_object* v___f_1150_, lean_object* v_discrs_1151_){
_start:
{
lean_object* v___f_1152_; uint8_t v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
lean_inc(v_toBind_1140_);
lean_inc(v_inst_1139_);
lean_inc_ref(v___x_1138_);
v___f_1152_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__49), 16, 15);
lean_closure_set(v___f_1152_, 0, v_toMatcherInfo_1134_);
lean_closure_set(v___f_1152_, 1, v_matcherName_1135_);
lean_closure_set(v___f_1152_, 2, v_params_1136_);
lean_closure_set(v___f_1152_, 3, v_discrs_1151_);
lean_closure_set(v___f_1152_, 4, v_k_1137_);
lean_closure_set(v___f_1152_, 5, v___x_1138_);
lean_closure_set(v___f_1152_, 6, v_inst_1139_);
lean_closure_set(v___f_1152_, 7, v_toBind_1140_);
lean_closure_set(v___f_1152_, 8, v___f_1141_);
lean_closure_set(v___f_1152_, 9, v_inst_1142_);
lean_closure_set(v___f_1152_, 10, v_inst_1143_);
lean_closure_set(v___f_1152_, 11, v_alts_1144_);
lean_closure_set(v___f_1152_, 12, v_toPure_1145_);
lean_closure_set(v___f_1152_, 13, v_matcherLevels_1146_);
lean_closure_set(v___f_1152_, 14, v_resTy_1147_);
v___x_1153_ = 0;
v___x_1154_ = l_Lean_Meta_lambdaTelescope___redArg(v___x_1148_, v___x_1138_, v_motive_1149_, v___f_1150_, v___x_1153_);
v___x_1155_ = lean_apply_2(v_inst_1139_, lean_box(0), v___x_1154_);
v___x_1156_ = lean_apply_4(v_toBind_1140_, lean_box(0), lean_box(0), v___x_1155_, v___f_1152_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__51___boxed(lean_object** _args){
lean_object* v_toMatcherInfo_1157_ = _args[0];
lean_object* v_matcherName_1158_ = _args[1];
lean_object* v_params_1159_ = _args[2];
lean_object* v_k_1160_ = _args[3];
lean_object* v___x_1161_ = _args[4];
lean_object* v_inst_1162_ = _args[5];
lean_object* v_toBind_1163_ = _args[6];
lean_object* v___f_1164_ = _args[7];
lean_object* v_inst_1165_ = _args[8];
lean_object* v_inst_1166_ = _args[9];
lean_object* v_alts_1167_ = _args[10];
lean_object* v_toPure_1168_ = _args[11];
lean_object* v_matcherLevels_1169_ = _args[12];
lean_object* v_resTy_1170_ = _args[13];
lean_object* v___x_1171_ = _args[14];
lean_object* v_motive_1172_ = _args[15];
lean_object* v___f_1173_ = _args[16];
lean_object* v_discrs_1174_ = _args[17];
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__51(v_toMatcherInfo_1157_, v_matcherName_1158_, v_params_1159_, v_k_1160_, v___x_1161_, v_inst_1162_, v_toBind_1163_, v___f_1164_, v_inst_1165_, v_inst_1166_, v_alts_1167_, v_toPure_1168_, v_matcherLevels_1169_, v_resTy_1170_, v___x_1171_, v_motive_1172_, v___f_1173_, v_discrs_1174_);
return v_res_1175_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0(void){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = l_instMonadEIO___redArg();
return v___x_1176_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0);
v___x_1178_ = l_StateRefT_x27_instMonad___redArg(v___x_1177_);
return v___x_1178_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8(void){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = lean_unsigned_to_nat(0u);
v___x_1187_ = l_Lean_Level_ofNat(v___x_1186_);
return v___x_1187_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9(void){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__8);
v___x_1189_ = l_Lean_mkSort(v___x_1188_);
return v___x_1189_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = lean_box(0);
v___x_1194_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__11));
v___x_1195_ = l_Lean_mkConst(v___x_1194_, v___x_1193_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(lean_object* v_inst_1197_, lean_object* v_inst_1198_, lean_object* v_inst_1199_, lean_object* v_info_1200_, lean_object* v_resTy_1201_, lean_object* v_k_1202_){
_start:
{
lean_object* v___x_1203_; lean_object* v_toApplicative_1204_; lean_object* v_toFunctor_1205_; lean_object* v_toSeq_1206_; lean_object* v_toSeqLeft_1207_; lean_object* v_toSeqRight_1208_; lean_object* v___f_1209_; lean_object* v___f_1210_; lean_object* v___f_1211_; lean_object* v___f_1212_; lean_object* v___x_1213_; lean_object* v___f_1214_; lean_object* v___f_1215_; lean_object* v___f_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v_toApplicative_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1318_; 
v___x_1203_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1);
v_toApplicative_1204_ = lean_ctor_get(v___x_1203_, 0);
v_toFunctor_1205_ = lean_ctor_get(v_toApplicative_1204_, 0);
v_toSeq_1206_ = lean_ctor_get(v_toApplicative_1204_, 2);
v_toSeqLeft_1207_ = lean_ctor_get(v_toApplicative_1204_, 3);
v_toSeqRight_1208_ = lean_ctor_get(v_toApplicative_1204_, 4);
v___f_1209_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2));
v___f_1210_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1205_, 2);
v___f_1211_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1211_, 0, v_toFunctor_1205_);
v___f_1212_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1212_, 0, v_toFunctor_1205_);
v___x_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___f_1211_);
lean_ctor_set(v___x_1213_, 1, v___f_1212_);
lean_inc(v_toSeqRight_1208_);
v___f_1214_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1214_, 0, v_toSeqRight_1208_);
lean_inc(v_toSeqLeft_1207_);
v___f_1215_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1215_, 0, v_toSeqLeft_1207_);
lean_inc(v_toSeq_1206_);
v___f_1216_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1216_, 0, v_toSeq_1206_);
v___x_1217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1213_);
lean_ctor_set(v___x_1217_, 1, v___f_1209_);
lean_ctor_set(v___x_1217_, 2, v___f_1216_);
lean_ctor_set(v___x_1217_, 3, v___f_1215_);
lean_ctor_set(v___x_1217_, 4, v___f_1214_);
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
lean_ctor_set(v___x_1218_, 1, v___f_1210_);
v___x_1219_ = l_StateRefT_x27_instMonad___redArg(v___x_1218_);
v_toApplicative_1220_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1318_ == 0)
{
lean_object* v_unused_1319_; 
v_unused_1319_ = lean_ctor_get(v___x_1219_, 1);
lean_dec(v_unused_1319_);
v___x_1222_ = v___x_1219_;
v_isShared_1223_ = v_isSharedCheck_1318_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_toApplicative_1220_);
lean_dec(v___x_1219_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1318_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v_toFunctor_1224_; lean_object* v_toSeq_1225_; lean_object* v_toSeqLeft_1226_; lean_object* v_toSeqRight_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1316_; 
v_toFunctor_1224_ = lean_ctor_get(v_toApplicative_1220_, 0);
v_toSeq_1225_ = lean_ctor_get(v_toApplicative_1220_, 2);
v_toSeqLeft_1226_ = lean_ctor_get(v_toApplicative_1220_, 3);
v_toSeqRight_1227_ = lean_ctor_get(v_toApplicative_1220_, 4);
v_isSharedCheck_1316_ = !lean_is_exclusive(v_toApplicative_1220_);
if (v_isSharedCheck_1316_ == 0)
{
lean_object* v_unused_1317_; 
v_unused_1317_ = lean_ctor_get(v_toApplicative_1220_, 1);
lean_dec(v_unused_1317_);
v___x_1229_ = v_toApplicative_1220_;
v_isShared_1230_ = v_isSharedCheck_1316_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_toSeqRight_1227_);
lean_inc(v_toSeqLeft_1226_);
lean_inc(v_toSeq_1225_);
lean_inc(v_toFunctor_1224_);
lean_dec(v_toApplicative_1220_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1316_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___f_1231_; lean_object* v___f_1232_; lean_object* v___f_1233_; lean_object* v___f_1234_; lean_object* v___x_1235_; lean_object* v___f_1236_; lean_object* v___f_1237_; lean_object* v___f_1238_; lean_object* v___x_1240_; 
v___f_1231_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4));
v___f_1232_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5));
lean_inc_ref(v_toFunctor_1224_);
v___f_1233_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1233_, 0, v_toFunctor_1224_);
v___f_1234_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1234_, 0, v_toFunctor_1224_);
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___f_1233_);
lean_ctor_set(v___x_1235_, 1, v___f_1234_);
v___f_1236_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1236_, 0, v_toSeqRight_1227_);
v___f_1237_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1237_, 0, v_toSeqLeft_1226_);
v___f_1238_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1238_, 0, v_toSeq_1225_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 4, v___f_1236_);
lean_ctor_set(v___x_1229_, 3, v___f_1237_);
lean_ctor_set(v___x_1229_, 2, v___f_1238_);
lean_ctor_set(v___x_1229_, 1, v___f_1231_);
lean_ctor_set(v___x_1229_, 0, v___x_1235_);
v___x_1240_ = v___x_1229_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1235_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v___f_1231_);
lean_ctor_set(v_reuseFailAlloc_1315_, 2, v___f_1238_);
lean_ctor_set(v_reuseFailAlloc_1315_, 3, v___f_1237_);
lean_ctor_set(v_reuseFailAlloc_1315_, 4, v___f_1236_);
v___x_1240_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
lean_object* v___x_1242_; 
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 1, v___f_1232_);
lean_ctor_set(v___x_1222_, 0, v___x_1240_);
v___x_1242_ = v___x_1222_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1314_, 1, v___f_1232_);
v___x_1242_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v_toApplicative_1243_; lean_object* v_toFunctor_1244_; lean_object* v_toSeq_1245_; lean_object* v_toSeqLeft_1246_; lean_object* v_toSeqRight_1247_; lean_object* v___f_1248_; lean_object* v___f_1249_; lean_object* v___x_1250_; lean_object* v___f_1251_; lean_object* v___f_1252_; lean_object* v___f_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v_toApplicative_1243_ = lean_ctor_get(v___x_1203_, 0);
v_toFunctor_1244_ = lean_ctor_get(v_toApplicative_1243_, 0);
v_toSeq_1245_ = lean_ctor_get(v_toApplicative_1243_, 2);
v_toSeqLeft_1246_ = lean_ctor_get(v_toApplicative_1243_, 3);
v_toSeqRight_1247_ = lean_ctor_get(v_toApplicative_1243_, 4);
lean_inc_ref_n(v_toFunctor_1244_, 2);
v___f_1248_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1248_, 0, v_toFunctor_1244_);
v___f_1249_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1249_, 0, v_toFunctor_1244_);
v___x_1250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___f_1248_);
lean_ctor_set(v___x_1250_, 1, v___f_1249_);
lean_inc(v_toSeqRight_1247_);
v___f_1251_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1251_, 0, v_toSeqRight_1247_);
lean_inc(v_toSeqLeft_1246_);
v___f_1252_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1252_, 0, v_toSeqLeft_1246_);
lean_inc(v_toSeq_1245_);
v___f_1253_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1253_, 0, v_toSeq_1245_);
v___x_1254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1250_);
lean_ctor_set(v___x_1254_, 1, v___f_1209_);
lean_ctor_set(v___x_1254_, 2, v___f_1253_);
lean_ctor_set(v___x_1254_, 3, v___f_1252_);
lean_ctor_set(v___x_1254_, 4, v___f_1251_);
v___x_1255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
lean_ctor_set(v___x_1255_, 1, v___f_1210_);
v___x_1256_ = l_StateRefT_x27_instMonad___redArg(v___x_1255_);
v___x_1257_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1257_, 0, lean_box(0));
lean_closure_set(v___x_1257_, 1, lean_box(0));
lean_closure_set(v___x_1257_, 2, v___x_1256_);
v___x_1258_ = l_instMonadControlTOfPure___redArg(v___x_1257_);
switch(lean_obj_tag(v_info_1200_))
{
case 0:
{
lean_object* v_toBind_1259_; lean_object* v___f_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec_ref_known(v_info_1200_, 1);
lean_dec_ref(v___x_1258_);
lean_dec_ref(v___x_1242_);
v_toBind_1259_ = lean_ctor_get(v_inst_1199_, 1);
lean_inc_ref(v_inst_1199_);
lean_inc_ref(v_inst_1198_);
lean_inc(v_toBind_1259_);
v___f_1260_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4), 7, 6);
lean_closure_set(v___f_1260_, 0, v_resTy_1201_);
lean_closure_set(v___f_1260_, 1, v_k_1202_);
lean_closure_set(v___f_1260_, 2, v_inst_1197_);
lean_closure_set(v___f_1260_, 3, v_toBind_1259_);
lean_closure_set(v___f_1260_, 4, v_inst_1198_);
lean_closure_set(v___f_1260_, 5, v_inst_1199_);
v___x_1261_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7));
v___x_1262_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9);
v___x_1263_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_1198_, v_inst_1199_, v___x_1261_, v___x_1262_, v___f_1260_);
return v___x_1263_;
}
case 1:
{
lean_object* v_toBind_1264_; lean_object* v___f_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
lean_dec_ref_known(v_info_1200_, 1);
lean_dec_ref(v___x_1258_);
lean_dec_ref(v___x_1242_);
v_toBind_1264_ = lean_ctor_get(v_inst_1199_, 1);
lean_inc_ref(v_inst_1199_);
lean_inc_ref(v_inst_1198_);
lean_inc(v_toBind_1264_);
v___f_1265_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13), 7, 6);
lean_closure_set(v___f_1265_, 0, v_resTy_1201_);
lean_closure_set(v___f_1265_, 1, v_k_1202_);
lean_closure_set(v___f_1265_, 2, v_inst_1197_);
lean_closure_set(v___f_1265_, 3, v_toBind_1264_);
lean_closure_set(v___f_1265_, 4, v_inst_1198_);
lean_closure_set(v___f_1265_, 5, v_inst_1199_);
v___x_1266_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7));
v___x_1267_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9);
v___x_1268_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_1198_, v_inst_1199_, v___x_1266_, v___x_1267_, v___f_1265_);
return v___x_1268_;
}
case 2:
{
lean_object* v_toBind_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___f_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
lean_dec_ref_known(v_info_1200_, 1);
lean_dec_ref(v___x_1258_);
lean_dec_ref(v___x_1242_);
v_toBind_1269_ = lean_ctor_get(v_inst_1199_, 1);
v___x_1270_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7));
v___x_1271_ = lean_box(0);
lean_inc_ref(v_inst_1199_);
lean_inc_ref(v_inst_1198_);
lean_inc(v_toBind_1269_);
v___f_1272_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17), 8, 7);
lean_closure_set(v___f_1272_, 0, v___x_1271_);
lean_closure_set(v___f_1272_, 1, v_resTy_1201_);
lean_closure_set(v___f_1272_, 2, v_k_1202_);
lean_closure_set(v___f_1272_, 3, v_inst_1197_);
lean_closure_set(v___f_1272_, 4, v_toBind_1269_);
lean_closure_set(v___f_1272_, 5, v_inst_1198_);
lean_closure_set(v___f_1272_, 6, v_inst_1199_);
v___x_1273_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12);
v___x_1274_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_1198_, v_inst_1199_, v___x_1270_, v___x_1273_, v___f_1272_);
return v___x_1274_;
}
case 3:
{
lean_object* v_toBind_1275_; lean_object* v___f_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
lean_dec_ref_known(v_info_1200_, 1);
lean_dec_ref(v___x_1258_);
lean_dec_ref(v___x_1242_);
v_toBind_1275_ = lean_ctor_get(v_inst_1199_, 1);
lean_inc_ref(v_inst_1199_);
lean_inc_ref(v_inst_1198_);
lean_inc(v_toBind_1275_);
v___f_1276_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22), 7, 6);
lean_closure_set(v___f_1276_, 0, v_resTy_1201_);
lean_closure_set(v___f_1276_, 1, v_k_1202_);
lean_closure_set(v___f_1276_, 2, v_inst_1197_);
lean_closure_set(v___f_1276_, 3, v_toBind_1275_);
lean_closure_set(v___f_1276_, 4, v_inst_1198_);
lean_closure_set(v___f_1276_, 5, v_inst_1199_);
v___x_1277_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7));
v___x_1278_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9);
v___x_1279_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_1198_, v_inst_1199_, v___x_1277_, v___x_1278_, v___f_1276_);
return v___x_1279_;
}
case 4:
{
lean_object* v_toBind_1280_; lean_object* v___f_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
lean_dec_ref_known(v_info_1200_, 1);
lean_dec_ref(v___x_1258_);
lean_dec_ref(v___x_1242_);
v_toBind_1280_ = lean_ctor_get(v_inst_1199_, 1);
lean_inc_ref(v_inst_1199_);
lean_inc_ref(v_inst_1198_);
lean_inc(v_toBind_1280_);
v___f_1281_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29), 7, 6);
lean_closure_set(v___f_1281_, 0, v_resTy_1201_);
lean_closure_set(v___f_1281_, 1, v_k_1202_);
lean_closure_set(v___f_1281_, 2, v_inst_1197_);
lean_closure_set(v___f_1281_, 3, v_toBind_1280_);
lean_closure_set(v___f_1281_, 4, v_inst_1198_);
lean_closure_set(v___f_1281_, 5, v_inst_1199_);
v___x_1282_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7));
v___x_1283_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__9);
v___x_1284_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_1198_, v_inst_1199_, v___x_1282_, v___x_1283_, v___f_1281_);
return v___x_1284_;
}
case 5:
{
lean_object* v_toBind_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___f_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
lean_dec_ref_known(v_info_1200_, 1);
lean_dec_ref(v___x_1258_);
lean_dec_ref(v___x_1242_);
v_toBind_1285_ = lean_ctor_get(v_inst_1199_, 1);
v___x_1286_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__7));
v___x_1287_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10));
v___x_1288_ = lean_box(0);
lean_inc_ref(v_inst_1199_);
lean_inc_ref(v_inst_1198_);
lean_inc(v_toBind_1285_);
v___f_1289_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__39), 9, 8);
lean_closure_set(v___f_1289_, 0, v___x_1287_);
lean_closure_set(v___f_1289_, 1, v___x_1288_);
lean_closure_set(v___f_1289_, 2, v_resTy_1201_);
lean_closure_set(v___f_1289_, 3, v_k_1202_);
lean_closure_set(v___f_1289_, 4, v_inst_1197_);
lean_closure_set(v___f_1289_, 5, v_toBind_1285_);
lean_closure_set(v___f_1289_, 6, v_inst_1198_);
lean_closure_set(v___f_1289_, 7, v_inst_1199_);
v___x_1290_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__12);
v___x_1291_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_1198_, v_inst_1199_, v___x_1286_, v___x_1290_, v___f_1289_);
return v___x_1291_;
}
default: 
{
lean_object* v_toApplicative_1292_; lean_object* v_matcherApp_1293_; lean_object* v_toBind_1294_; lean_object* v_toPure_1295_; lean_object* v_toMatcherInfo_1296_; lean_object* v_matcherName_1297_; lean_object* v_matcherLevels_1298_; lean_object* v_params_1299_; lean_object* v_motive_1300_; lean_object* v_discrs_1301_; lean_object* v_alts_1302_; lean_object* v___f_1303_; lean_object* v___f_1304_; lean_object* v___x_1305_; lean_object* v___f_1306_; lean_object* v___f_1307_; lean_object* v___x_1308_; size_t v_sz_1309_; size_t v___x_1310_; lean_object* v_discrDecls_1311_; uint8_t v___x_1312_; lean_object* v___x_1313_; 
v_toApplicative_1292_ = lean_ctor_get(v_inst_1199_, 0);
v_matcherApp_1293_ = lean_ctor_get(v_info_1200_, 0);
lean_inc_ref(v_matcherApp_1293_);
lean_dec_ref_known(v_info_1200_, 1);
v_toBind_1294_ = lean_ctor_get(v_inst_1199_, 1);
v_toPure_1295_ = lean_ctor_get(v_toApplicative_1292_, 1);
v_toMatcherInfo_1296_ = lean_ctor_get(v_matcherApp_1293_, 0);
lean_inc_ref(v_toMatcherInfo_1296_);
v_matcherName_1297_ = lean_ctor_get(v_matcherApp_1293_, 1);
lean_inc(v_matcherName_1297_);
v_matcherLevels_1298_ = lean_ctor_get(v_matcherApp_1293_, 2);
lean_inc_ref(v_matcherLevels_1298_);
v_params_1299_ = lean_ctor_get(v_matcherApp_1293_, 3);
lean_inc_ref(v_params_1299_);
v_motive_1300_ = lean_ctor_get(v_matcherApp_1293_, 4);
lean_inc_ref(v_motive_1300_);
v_discrs_1301_ = lean_ctor_get(v_matcherApp_1293_, 5);
lean_inc_ref_n(v_discrs_1301_, 3);
v_alts_1302_ = lean_ctor_get(v_matcherApp_1293_, 6);
lean_inc_ref(v_alts_1302_);
lean_dec_ref(v_matcherApp_1293_);
v___f_1303_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__13));
lean_inc_ref(v_resTy_1201_);
v___f_1304_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__38___boxed), 8, 1);
lean_closure_set(v___f_1304_, 0, v_resTy_1201_);
v___x_1305_ = l_Lean_instInhabitedExpr;
lean_inc(v_inst_1197_);
v___f_1306_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__43), 6, 3);
lean_closure_set(v___f_1306_, 0, v___x_1305_);
lean_closure_set(v___f_1306_, 1, v_discrs_1301_);
lean_closure_set(v___f_1306_, 2, v_inst_1197_);
lean_inc(v_toPure_1295_);
lean_inc_ref(v_inst_1199_);
lean_inc_ref(v_inst_1198_);
lean_inc(v_toBind_1294_);
v___f_1307_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__51___boxed), 18, 17);
lean_closure_set(v___f_1307_, 0, v_toMatcherInfo_1296_);
lean_closure_set(v___f_1307_, 1, v_matcherName_1297_);
lean_closure_set(v___f_1307_, 2, v_params_1299_);
lean_closure_set(v___f_1307_, 3, v_k_1202_);
lean_closure_set(v___f_1307_, 4, v___x_1242_);
lean_closure_set(v___f_1307_, 5, v_inst_1197_);
lean_closure_set(v___f_1307_, 6, v_toBind_1294_);
lean_closure_set(v___f_1307_, 7, v___f_1303_);
lean_closure_set(v___f_1307_, 8, v_inst_1198_);
lean_closure_set(v___f_1307_, 9, v_inst_1199_);
lean_closure_set(v___f_1307_, 10, v_alts_1302_);
lean_closure_set(v___f_1307_, 11, v_toPure_1295_);
lean_closure_set(v___f_1307_, 12, v_matcherLevels_1298_);
lean_closure_set(v___f_1307_, 13, v_resTy_1201_);
lean_closure_set(v___f_1307_, 14, v___x_1258_);
lean_closure_set(v___f_1307_, 15, v_motive_1300_);
lean_closure_set(v___f_1307_, 16, v___f_1304_);
v___x_1308_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__9));
v_sz_1309_ = lean_array_size(v_discrs_1301_);
v___x_1310_ = ((size_t)0ULL);
v_discrDecls_1311_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1308_, v_discrs_1301_, v___f_1306_, v_sz_1309_, v___x_1310_, v_discrs_1301_);
lean_dec_ref(v_discrs_1301_);
v___x_1312_ = 0;
v___x_1313_ = l_Lean_Meta_withLocalDeclsD___redArg(v_inst_1198_, v_inst_1199_, v_discrDecls_1311_, v___f_1307_, v___x_1312_);
return v___x_1313_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(lean_object* v_n_1320_, lean_object* v_00_u03b1_1321_, lean_object* v_inst_1322_, lean_object* v_inst_1323_, lean_object* v_inst_1324_, lean_object* v_inst_1325_, lean_object* v_info_1326_, lean_object* v_resTy_1327_, lean_object* v_k_1328_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(v_inst_1322_, v_inst_1323_, v_inst_1324_, v_info_1326_, v_resTy_1327_, v_k_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___boxed(lean_object* v_n_1330_, lean_object* v_00_u03b1_1331_, lean_object* v_inst_1332_, lean_object* v_inst_1333_, lean_object* v_inst_1334_, lean_object* v_inst_1335_, lean_object* v_info_1336_, lean_object* v_resTy_1337_, lean_object* v_k_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(v_n_1330_, v_00_u03b1_1331_, v_inst_1332_, v_inst_1333_, v_inst_1334_, v_inst_1335_, v_info_1336_, v_resTy_1337_, v_k_1338_);
lean_dec(v_inst_1335_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0(lean_object* v_u_1340_, lean_object* v_resTy_1341_, lean_object* v_c_1342_, lean_object* v_h_1343_, lean_object* v_t_1344_, lean_object* v_toPure_1345_, lean_object* v_e_1346_){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1347_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_1348_ = lean_box(0);
v___x_1349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1349_, 0, v_u_1340_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = l_Lean_mkConst(v___x_1347_, v___x_1349_);
v___x_1351_ = l_Lean_mkApp5(v___x_1350_, v_resTy_1341_, v_c_1342_, v_h_1343_, v_t_1344_, v_e_1346_);
v___x_1352_ = lean_apply_2(v_toPure_1345_, lean_box(0), v___x_1351_);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1(lean_object* v_u_1356_, lean_object* v_resTy_1357_, lean_object* v_c_1358_, lean_object* v_h_1359_, lean_object* v_toPure_1360_, lean_object* v_onAlt_1361_, lean_object* v___x_1362_, lean_object* v___x_1363_, lean_object* v_toBind_1364_, lean_object* v_t_1365_){
_start:
{
lean_object* v___f_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_inc_ref(v_resTy_1357_);
v___f_1366_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0), 7, 6);
lean_closure_set(v___f_1366_, 0, v_u_1356_);
lean_closure_set(v___f_1366_, 1, v_resTy_1357_);
lean_closure_set(v___f_1366_, 2, v_c_1358_);
lean_closure_set(v___f_1366_, 3, v_h_1359_);
lean_closure_set(v___f_1366_, 4, v_t_1365_);
lean_closure_set(v___f_1366_, 5, v_toPure_1360_);
v___x_1367_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1368_ = lean_apply_4(v_onAlt_1361_, v___x_1367_, v_resTy_1357_, v___x_1362_, v___x_1363_);
v___x_1369_ = lean_apply_4(v_toBind_1364_, lean_box(0), lean_box(0), v___x_1368_, v___f_1366_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(lean_object* v___x_1370_, uint8_t v_useSplitter_1371_, lean_object* v_inst_1372_, lean_object* v_____do__lift_1373_){
_start:
{
uint8_t v___x_1374_; uint8_t v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1374_ = 0;
v___x_1375_ = 1;
v___x_1376_ = lean_box(v___x_1374_);
v___x_1377_ = lean_box(v_useSplitter_1371_);
v___x_1378_ = lean_box(v___x_1374_);
v___x_1379_ = lean_box(v_useSplitter_1371_);
v___x_1380_ = lean_box(v___x_1375_);
v___x_1381_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1381_, 0, v___x_1370_);
lean_closure_set(v___x_1381_, 1, v_____do__lift_1373_);
lean_closure_set(v___x_1381_, 2, v___x_1376_);
lean_closure_set(v___x_1381_, 3, v___x_1377_);
lean_closure_set(v___x_1381_, 4, v___x_1378_);
lean_closure_set(v___x_1381_, 5, v___x_1379_);
lean_closure_set(v___x_1381_, 6, v___x_1380_);
v___x_1382_ = lean_apply_2(v_inst_1372_, lean_box(0), v___x_1381_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed(lean_object* v___x_1383_, lean_object* v_useSplitter_1384_, lean_object* v_inst_1385_, lean_object* v_____do__lift_1386_){
_start:
{
uint8_t v_useSplitter_boxed_1387_; lean_object* v_res_1388_; 
v_useSplitter_boxed_1387_ = lean_unbox(v_useSplitter_1384_);
v_res_1388_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(v___x_1383_, v_useSplitter_boxed_1387_, v_inst_1385_, v_____do__lift_1386_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(lean_object* v___x_1392_, uint8_t v_useSplitter_1393_, lean_object* v_inst_1394_, lean_object* v_onAlt_1395_, lean_object* v_resTy_1396_, lean_object* v_toBind_1397_, lean_object* v_h_1398_){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___f_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1399_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1400_ = lean_unsigned_to_nat(0u);
v___x_1401_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
v___x_1402_ = lean_mk_empty_array_with_capacity(v___x_1392_);
v___x_1403_ = lean_array_push(v___x_1402_, v_h_1398_);
v___x_1404_ = lean_box(v_useSplitter_1393_);
lean_inc_ref(v___x_1403_);
v___f_1405_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1405_, 0, v___x_1403_);
lean_closure_set(v___f_1405_, 1, v___x_1404_);
lean_closure_set(v___f_1405_, 2, v_inst_1394_);
v___x_1406_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1401_);
lean_ctor_set(v___x_1406_, 1, v___x_1403_);
lean_ctor_set(v___x_1406_, 2, v___x_1401_);
lean_ctor_set(v___x_1406_, 3, v___x_1401_);
lean_ctor_set(v___x_1406_, 4, v___x_1401_);
v___x_1407_ = lean_apply_4(v_onAlt_1395_, v___x_1399_, v_resTy_1396_, v___x_1400_, v___x_1406_);
v___x_1408_ = lean_apply_4(v_toBind_1397_, lean_box(0), lean_box(0), v___x_1407_, v___f_1405_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed(lean_object* v___x_1409_, lean_object* v_useSplitter_1410_, lean_object* v_inst_1411_, lean_object* v_onAlt_1412_, lean_object* v_resTy_1413_, lean_object* v_toBind_1414_, lean_object* v_h_1415_){
_start:
{
uint8_t v_useSplitter_boxed_1416_; lean_object* v_res_1417_; 
v_useSplitter_boxed_1416_ = lean_unbox(v_useSplitter_1410_);
v_res_1417_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(v___x_1409_, v_useSplitter_boxed_1416_, v_inst_1411_, v_onAlt_1412_, v_resTy_1413_, v_toBind_1414_, v_h_1415_);
lean_dec(v___x_1409_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(lean_object* v___x_1418_, uint8_t v_useSplitter_1419_, lean_object* v_inst_1420_, lean_object* v_onAlt_1421_, lean_object* v_resTy_1422_, lean_object* v_toBind_1423_, lean_object* v_h_1424_){
_start:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___f_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1425_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1426_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
v___x_1427_ = lean_mk_empty_array_with_capacity(v___x_1418_);
v___x_1428_ = lean_array_push(v___x_1427_, v_h_1424_);
v___x_1429_ = lean_box(v_useSplitter_1419_);
lean_inc_ref(v___x_1428_);
v___f_1430_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1430_, 0, v___x_1428_);
lean_closure_set(v___f_1430_, 1, v___x_1429_);
lean_closure_set(v___f_1430_, 2, v_inst_1420_);
v___x_1431_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1426_);
lean_ctor_set(v___x_1431_, 1, v___x_1428_);
lean_ctor_set(v___x_1431_, 2, v___x_1426_);
lean_ctor_set(v___x_1431_, 3, v___x_1426_);
lean_ctor_set(v___x_1431_, 4, v___x_1426_);
v___x_1432_ = lean_apply_4(v_onAlt_1421_, v___x_1425_, v_resTy_1422_, v___x_1418_, v___x_1431_);
v___x_1433_ = lean_apply_4(v_toBind_1423_, lean_box(0), lean_box(0), v___x_1432_, v___f_1430_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed(lean_object* v___x_1434_, lean_object* v_useSplitter_1435_, lean_object* v_inst_1436_, lean_object* v_onAlt_1437_, lean_object* v_resTy_1438_, lean_object* v_toBind_1439_, lean_object* v_h_1440_){
_start:
{
uint8_t v_useSplitter_boxed_1441_; lean_object* v_res_1442_; 
v_useSplitter_boxed_1441_ = lean_unbox(v_useSplitter_1435_);
v_res_1442_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(v___x_1434_, v_useSplitter_boxed_1441_, v_inst_1436_, v_onAlt_1437_, v_resTy_1438_, v_toBind_1439_, v_h_1440_);
return v_res_1442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4(lean_object* v_u_1443_, lean_object* v_resTy_1444_, lean_object* v_c_1445_, lean_object* v_h_1446_, lean_object* v_t_1447_, lean_object* v_toPure_1448_, lean_object* v_e_1449_){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1450_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_1451_ = lean_box(0);
v___x_1452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1452_, 0, v_u_1443_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
v___x_1453_ = l_Lean_mkConst(v___x_1450_, v___x_1452_);
v___x_1454_ = l_Lean_mkApp5(v___x_1453_, v_resTy_1444_, v_c_1445_, v_h_1446_, v_t_1447_, v_e_1449_);
v___x_1455_ = lean_apply_2(v_toPure_1448_, lean_box(0), v___x_1454_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(lean_object* v_u_1456_, lean_object* v_resTy_1457_, lean_object* v_c_1458_, lean_object* v_h_1459_, lean_object* v_toPure_1460_, lean_object* v_inst_1461_, lean_object* v_inst_1462_, lean_object* v_n_1463_, uint8_t v___x_1464_, lean_object* v___f_1465_, uint8_t v___x_1466_, lean_object* v_toBind_1467_, lean_object* v_t_1468_){
_start:
{
lean_object* v___f_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
lean_inc_ref(v_c_1458_);
v___f_1469_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4), 7, 6);
lean_closure_set(v___f_1469_, 0, v_u_1456_);
lean_closure_set(v___f_1469_, 1, v_resTy_1457_);
lean_closure_set(v___f_1469_, 2, v_c_1458_);
lean_closure_set(v___f_1469_, 3, v_h_1459_);
lean_closure_set(v___f_1469_, 4, v_t_1468_);
lean_closure_set(v___f_1469_, 5, v_toPure_1460_);
v___x_1470_ = l_Lean_mkNot(v_c_1458_);
v___x_1471_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1461_, v_inst_1462_, v_n_1463_, v___x_1464_, v___x_1470_, v___f_1465_, v___x_1466_);
v___x_1472_ = lean_apply_4(v_toBind_1467_, lean_box(0), lean_box(0), v___x_1471_, v___f_1469_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed(lean_object* v_u_1473_, lean_object* v_resTy_1474_, lean_object* v_c_1475_, lean_object* v_h_1476_, lean_object* v_toPure_1477_, lean_object* v_inst_1478_, lean_object* v_inst_1479_, lean_object* v_n_1480_, lean_object* v___x_1481_, lean_object* v___f_1482_, lean_object* v___x_1483_, lean_object* v_toBind_1484_, lean_object* v_t_1485_){
_start:
{
uint8_t v___x_2825__boxed_1486_; uint8_t v___x_2827__boxed_1487_; lean_object* v_res_1488_; 
v___x_2825__boxed_1486_ = lean_unbox(v___x_1481_);
v___x_2827__boxed_1487_ = lean_unbox(v___x_1483_);
v_res_1488_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(v_u_1473_, v_resTy_1474_, v_c_1475_, v_h_1476_, v_toPure_1477_, v_inst_1478_, v_inst_1479_, v_n_1480_, v___x_2825__boxed_1486_, v___f_1482_, v___x_2827__boxed_1487_, v_toBind_1484_, v_t_1485_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7(lean_object* v_u_1489_, lean_object* v_resTy_1490_, lean_object* v_c_1491_, lean_object* v_h_1492_, lean_object* v_toPure_1493_, lean_object* v_inst_1494_, lean_object* v_inst_1495_, lean_object* v___f_1496_, lean_object* v_toBind_1497_, lean_object* v___f_1498_, lean_object* v_n_1499_){
_start:
{
uint8_t v___x_1500_; uint8_t v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___f_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1500_ = 0;
v___x_1501_ = 0;
v___x_1502_ = lean_box(v___x_1500_);
v___x_1503_ = lean_box(v___x_1501_);
lean_inc(v_toBind_1497_);
lean_inc(v_n_1499_);
lean_inc_ref(v_inst_1495_);
lean_inc_ref(v_inst_1494_);
lean_inc_ref(v_c_1491_);
v___f_1504_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_1504_, 0, v_u_1489_);
lean_closure_set(v___f_1504_, 1, v_resTy_1490_);
lean_closure_set(v___f_1504_, 2, v_c_1491_);
lean_closure_set(v___f_1504_, 3, v_h_1492_);
lean_closure_set(v___f_1504_, 4, v_toPure_1493_);
lean_closure_set(v___f_1504_, 5, v_inst_1494_);
lean_closure_set(v___f_1504_, 6, v_inst_1495_);
lean_closure_set(v___f_1504_, 7, v_n_1499_);
lean_closure_set(v___f_1504_, 8, v___x_1502_);
lean_closure_set(v___f_1504_, 9, v___f_1496_);
lean_closure_set(v___f_1504_, 10, v___x_1503_);
lean_closure_set(v___f_1504_, 11, v_toBind_1497_);
v___x_1505_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1494_, v_inst_1495_, v_n_1499_, v___x_1500_, v_c_1491_, v___f_1498_, v___x_1501_);
v___x_1506_ = lean_apply_4(v_toBind_1497_, lean_box(0), lean_box(0), v___x_1505_, v___f_1504_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(lean_object* v___x_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = l_Lean_Core_mkFreshUserName(v___x_1507_, v___y_1510_, v___y_1511_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed(lean_object* v___x_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(v___x_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(lean_object* v_e_1528_, uint8_t v_useSplitter_1529_, lean_object* v_resTy_1530_, lean_object* v_toPure_1531_, lean_object* v_onAlt_1532_, lean_object* v_toBind_1533_, lean_object* v_inst_1534_, lean_object* v_inst_1535_, lean_object* v_inst_1536_, lean_object* v_u_1537_){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v_c_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v_h_1546_; 
v___x_1538_ = lean_unsigned_to_nat(1u);
v___x_1539_ = l_Lean_Expr_getAppNumArgs(v_e_1528_);
v___x_1540_ = lean_nat_sub(v___x_1539_, v___x_1538_);
v___x_1541_ = lean_nat_sub(v___x_1540_, v___x_1538_);
lean_dec(v___x_1540_);
v_c_1542_ = l_Lean_Expr_getRevArg_x21(v_e_1528_, v___x_1541_);
v___x_1543_ = lean_unsigned_to_nat(2u);
v___x_1544_ = lean_nat_sub(v___x_1539_, v___x_1543_);
lean_dec(v___x_1539_);
v___x_1545_ = lean_nat_sub(v___x_1544_, v___x_1538_);
lean_dec(v___x_1544_);
v_h_1546_ = l_Lean_Expr_getRevArg_x21(v_e_1528_, v___x_1545_);
if (v_useSplitter_1529_ == 0)
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___f_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; 
lean_dec_ref(v_inst_1536_);
lean_dec_ref(v_inst_1535_);
lean_dec(v_inst_1534_);
v___x_1547_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1548_ = lean_unsigned_to_nat(0u);
v___x_1549_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1533_);
lean_inc(v_onAlt_1532_);
lean_inc_ref(v_resTy_1530_);
v___f_1550_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1), 10, 9);
lean_closure_set(v___f_1550_, 0, v_u_1537_);
lean_closure_set(v___f_1550_, 1, v_resTy_1530_);
lean_closure_set(v___f_1550_, 2, v_c_1542_);
lean_closure_set(v___f_1550_, 3, v_h_1546_);
lean_closure_set(v___f_1550_, 4, v_toPure_1531_);
lean_closure_set(v___f_1550_, 5, v_onAlt_1532_);
lean_closure_set(v___f_1550_, 6, v___x_1538_);
lean_closure_set(v___f_1550_, 7, v___x_1549_);
lean_closure_set(v___f_1550_, 8, v_toBind_1533_);
v___x_1551_ = lean_apply_4(v_onAlt_1532_, v___x_1547_, v_resTy_1530_, v___x_1548_, v___x_1549_);
v___x_1552_ = lean_apply_4(v_toBind_1533_, lean_box(0), lean_box(0), v___x_1551_, v___f_1550_);
return v___x_1552_;
}
else
{
lean_object* v___x_1553_; lean_object* v___f_1554_; lean_object* v___x_1555_; lean_object* v___f_1556_; lean_object* v___f_1557_; lean_object* v___f_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1553_ = lean_box(v_useSplitter_1529_);
lean_inc_n(v_toBind_1533_, 3);
lean_inc_ref_n(v_resTy_1530_, 2);
lean_inc(v_onAlt_1532_);
lean_inc_n(v_inst_1534_, 2);
v___f_1554_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_1554_, 0, v___x_1538_);
lean_closure_set(v___f_1554_, 1, v___x_1553_);
lean_closure_set(v___f_1554_, 2, v_inst_1534_);
lean_closure_set(v___f_1554_, 3, v_onAlt_1532_);
lean_closure_set(v___f_1554_, 4, v_resTy_1530_);
lean_closure_set(v___f_1554_, 5, v_toBind_1533_);
v___x_1555_ = lean_box(v_useSplitter_1529_);
v___f_1556_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1556_, 0, v___x_1538_);
lean_closure_set(v___f_1556_, 1, v___x_1555_);
lean_closure_set(v___f_1556_, 2, v_inst_1534_);
lean_closure_set(v___f_1556_, 3, v_onAlt_1532_);
lean_closure_set(v___f_1556_, 4, v_resTy_1530_);
lean_closure_set(v___f_1556_, 5, v_toBind_1533_);
v___f_1557_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7), 11, 10);
lean_closure_set(v___f_1557_, 0, v_u_1537_);
lean_closure_set(v___f_1557_, 1, v_resTy_1530_);
lean_closure_set(v___f_1557_, 2, v_c_1542_);
lean_closure_set(v___f_1557_, 3, v_h_1546_);
lean_closure_set(v___f_1557_, 4, v_toPure_1531_);
lean_closure_set(v___f_1557_, 5, v_inst_1535_);
lean_closure_set(v___f_1557_, 6, v_inst_1536_);
lean_closure_set(v___f_1557_, 7, v___f_1556_);
lean_closure_set(v___f_1557_, 8, v_toBind_1533_);
lean_closure_set(v___f_1557_, 9, v___f_1554_);
v___f_1558_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1559_ = lean_apply_2(v_inst_1534_, lean_box(0), v___f_1558_);
v___x_1560_ = lean_apply_4(v_toBind_1533_, lean_box(0), lean_box(0), v___x_1559_, v___f_1557_);
return v___x_1560_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed(lean_object* v_e_1561_, lean_object* v_useSplitter_1562_, lean_object* v_resTy_1563_, lean_object* v_toPure_1564_, lean_object* v_onAlt_1565_, lean_object* v_toBind_1566_, lean_object* v_inst_1567_, lean_object* v_inst_1568_, lean_object* v_inst_1569_, lean_object* v_u_1570_){
_start:
{
uint8_t v_useSplitter_boxed_1571_; lean_object* v_res_1572_; 
v_useSplitter_boxed_1571_ = lean_unbox(v_useSplitter_1562_);
v_res_1572_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(v_e_1561_, v_useSplitter_boxed_1571_, v_resTy_1563_, v_toPure_1564_, v_onAlt_1565_, v_toBind_1566_, v_inst_1567_, v_inst_1568_, v_inst_1569_, v_u_1570_);
lean_dec_ref(v_e_1561_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10(lean_object* v___x_1573_, lean_object* v_inst_1574_, lean_object* v_____do__lift_1575_){
_start:
{
uint8_t v___x_1576_; uint8_t v___x_1577_; uint8_t v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1576_ = 0;
v___x_1577_ = 1;
v___x_1578_ = 1;
v___x_1579_ = lean_box(v___x_1576_);
v___x_1580_ = lean_box(v___x_1577_);
v___x_1581_ = lean_box(v___x_1576_);
v___x_1582_ = lean_box(v___x_1577_);
v___x_1583_ = lean_box(v___x_1578_);
v___x_1584_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1584_, 0, v___x_1573_);
lean_closure_set(v___x_1584_, 1, v_____do__lift_1575_);
lean_closure_set(v___x_1584_, 2, v___x_1579_);
lean_closure_set(v___x_1584_, 3, v___x_1580_);
lean_closure_set(v___x_1584_, 4, v___x_1581_);
lean_closure_set(v___x_1584_, 5, v___x_1582_);
lean_closure_set(v___x_1584_, 6, v___x_1583_);
v___x_1585_ = lean_apply_2(v_inst_1574_, lean_box(0), v___x_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11(lean_object* v_inst_1586_, lean_object* v_onAlt_1587_, lean_object* v_resTy_1588_, lean_object* v_toBind_1589_, lean_object* v_h_1590_){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___f_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1591_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1592_ = lean_unsigned_to_nat(0u);
v___x_1593_ = lean_unsigned_to_nat(1u);
v___x_1594_ = lean_mk_empty_array_with_capacity(v___x_1593_);
v___x_1595_ = lean_array_push(v___x_1594_, v_h_1590_);
lean_inc_ref_n(v___x_1595_, 2);
v___f_1596_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10), 3, 2);
lean_closure_set(v___f_1596_, 0, v___x_1595_);
lean_closure_set(v___f_1596_, 1, v_inst_1586_);
v___x_1597_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
v___x_1598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1595_);
lean_ctor_set(v___x_1598_, 1, v___x_1595_);
lean_ctor_set(v___x_1598_, 2, v___x_1597_);
lean_ctor_set(v___x_1598_, 3, v___x_1597_);
lean_ctor_set(v___x_1598_, 4, v___x_1597_);
v___x_1599_ = lean_apply_4(v_onAlt_1587_, v___x_1591_, v_resTy_1588_, v___x_1592_, v___x_1598_);
v___x_1600_ = lean_apply_4(v_toBind_1589_, lean_box(0), lean_box(0), v___x_1599_, v___f_1596_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13(lean_object* v___x_1601_, lean_object* v_inst_1602_, lean_object* v_onAlt_1603_, lean_object* v_resTy_1604_, lean_object* v_toBind_1605_, lean_object* v_h_1606_){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___f_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1607_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1608_ = lean_mk_empty_array_with_capacity(v___x_1601_);
v___x_1609_ = lean_array_push(v___x_1608_, v_h_1606_);
lean_inc_ref_n(v___x_1609_, 2);
v___f_1610_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10), 3, 2);
lean_closure_set(v___f_1610_, 0, v___x_1609_);
lean_closure_set(v___f_1610_, 1, v_inst_1602_);
v___x_1611_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
v___x_1612_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1609_);
lean_ctor_set(v___x_1612_, 1, v___x_1609_);
lean_ctor_set(v___x_1612_, 2, v___x_1611_);
lean_ctor_set(v___x_1612_, 3, v___x_1611_);
lean_ctor_set(v___x_1612_, 4, v___x_1611_);
v___x_1613_ = lean_apply_4(v_onAlt_1603_, v___x_1607_, v_resTy_1604_, v___x_1601_, v___x_1612_);
v___x_1614_ = lean_apply_4(v_toBind_1605_, lean_box(0), lean_box(0), v___x_1613_, v___f_1610_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(lean_object* v_inst_1615_, lean_object* v_onAlt_1616_, lean_object* v_resTy_1617_, lean_object* v_toBind_1618_, lean_object* v_e_1619_, lean_object* v_toPure_1620_, lean_object* v_inst_1621_, lean_object* v_inst_1622_, lean_object* v___f_1623_, lean_object* v_u_1624_){
_start:
{
lean_object* v___x_1625_; lean_object* v___f_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v_c_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v_h_1634_; lean_object* v___f_1635_; lean_object* v___f_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1625_ = lean_unsigned_to_nat(1u);
lean_inc_n(v_toBind_1618_, 2);
lean_inc_ref(v_resTy_1617_);
lean_inc(v_inst_1615_);
v___f_1626_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13), 6, 5);
lean_closure_set(v___f_1626_, 0, v___x_1625_);
lean_closure_set(v___f_1626_, 1, v_inst_1615_);
lean_closure_set(v___f_1626_, 2, v_onAlt_1616_);
lean_closure_set(v___f_1626_, 3, v_resTy_1617_);
lean_closure_set(v___f_1626_, 4, v_toBind_1618_);
v___x_1627_ = l_Lean_Expr_getAppNumArgs(v_e_1619_);
v___x_1628_ = lean_nat_sub(v___x_1627_, v___x_1625_);
v___x_1629_ = lean_nat_sub(v___x_1628_, v___x_1625_);
lean_dec(v___x_1628_);
v_c_1630_ = l_Lean_Expr_getRevArg_x21(v_e_1619_, v___x_1629_);
v___x_1631_ = lean_unsigned_to_nat(2u);
v___x_1632_ = lean_nat_sub(v___x_1627_, v___x_1631_);
lean_dec(v___x_1627_);
v___x_1633_ = lean_nat_sub(v___x_1632_, v___x_1625_);
lean_dec(v___x_1632_);
v_h_1634_ = l_Lean_Expr_getRevArg_x21(v_e_1619_, v___x_1633_);
v___f_1635_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7), 11, 10);
lean_closure_set(v___f_1635_, 0, v_u_1624_);
lean_closure_set(v___f_1635_, 1, v_resTy_1617_);
lean_closure_set(v___f_1635_, 2, v_c_1630_);
lean_closure_set(v___f_1635_, 3, v_h_1634_);
lean_closure_set(v___f_1635_, 4, v_toPure_1620_);
lean_closure_set(v___f_1635_, 5, v_inst_1621_);
lean_closure_set(v___f_1635_, 6, v_inst_1622_);
lean_closure_set(v___f_1635_, 7, v___f_1626_);
lean_closure_set(v___f_1635_, 8, v_toBind_1618_);
lean_closure_set(v___f_1635_, 9, v___f_1623_);
v___f_1636_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1637_ = lean_apply_2(v_inst_1615_, lean_box(0), v___f_1636_);
v___x_1638_ = lean_apply_4(v_toBind_1618_, lean_box(0), lean_box(0), v___x_1637_, v___f_1635_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed(lean_object* v_inst_1639_, lean_object* v_onAlt_1640_, lean_object* v_resTy_1641_, lean_object* v_toBind_1642_, lean_object* v_e_1643_, lean_object* v_toPure_1644_, lean_object* v_inst_1645_, lean_object* v_inst_1646_, lean_object* v___f_1647_, lean_object* v_u_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(v_inst_1639_, v_onAlt_1640_, v_resTy_1641_, v_toBind_1642_, v_e_1643_, v_toPure_1644_, v_inst_1645_, v_inst_1646_, v___f_1647_, v_u_1648_);
lean_dec_ref(v_e_1643_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12(lean_object* v_u_1650_, lean_object* v_resTy_1651_, lean_object* v_c_1652_, lean_object* v_t_1653_, lean_object* v_toPure_1654_, lean_object* v_e_1655_){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1656_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_1657_ = lean_box(0);
v___x_1658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1658_, 0, v_u_1650_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = l_Lean_mkConst(v___x_1656_, v___x_1658_);
v___x_1660_ = l_Lean_mkApp4(v___x_1659_, v_resTy_1651_, v_c_1652_, v_t_1653_, v_e_1655_);
v___x_1661_ = lean_apply_2(v_toPure_1654_, lean_box(0), v___x_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14(lean_object* v_u_1662_, lean_object* v_resTy_1663_, lean_object* v_c_1664_, lean_object* v_toPure_1665_, lean_object* v_onAlt_1666_, lean_object* v___x_1667_, lean_object* v___x_1668_, lean_object* v_toBind_1669_, lean_object* v_t_1670_){
_start:
{
lean_object* v___f_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
lean_inc_ref(v_resTy_1663_);
v___f_1671_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12), 6, 5);
lean_closure_set(v___f_1671_, 0, v_u_1662_);
lean_closure_set(v___f_1671_, 1, v_resTy_1663_);
lean_closure_set(v___f_1671_, 2, v_c_1664_);
lean_closure_set(v___f_1671_, 3, v_t_1670_);
lean_closure_set(v___f_1671_, 4, v_toPure_1665_);
v___x_1672_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1673_ = lean_apply_4(v_onAlt_1666_, v___x_1672_, v_resTy_1663_, v___x_1667_, v___x_1668_);
v___x_1674_ = lean_apply_4(v_toBind_1669_, lean_box(0), lean_box(0), v___x_1673_, v___f_1671_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(lean_object* v___x_1675_, lean_object* v_u_1676_, lean_object* v___x_1677_, lean_object* v_resTy_1678_, lean_object* v_c_1679_, lean_object* v_t_1680_, lean_object* v_toPure_1681_, lean_object* v_e_1682_){
_start:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1683_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0));
v___x_1684_ = l_Lean_Name_mkStr2(v___x_1675_, v___x_1683_);
v___x_1685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1685_, 0, v_u_1676_);
lean_ctor_set(v___x_1685_, 1, v___x_1677_);
v___x_1686_ = l_Lean_mkConst(v___x_1684_, v___x_1685_);
v___x_1687_ = l_Lean_mkApp4(v___x_1686_, v_resTy_1678_, v_c_1679_, v_t_1680_, v_e_1682_);
v___x_1688_ = lean_apply_2(v_toPure_1681_, lean_box(0), v___x_1687_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(lean_object* v___x_1689_, lean_object* v_u_1690_, lean_object* v___x_1691_, lean_object* v_resTy_1692_, lean_object* v_c_1693_, lean_object* v_toPure_1694_, lean_object* v_inst_1695_, lean_object* v_inst_1696_, lean_object* v_n_1697_, uint8_t v___x_1698_, lean_object* v_hFalse_1699_, lean_object* v___f_1700_, uint8_t v___x_1701_, lean_object* v_toBind_1702_, lean_object* v_t_1703_){
_start:
{
lean_object* v___f_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___f_1704_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20), 8, 7);
lean_closure_set(v___f_1704_, 0, v___x_1689_);
lean_closure_set(v___f_1704_, 1, v_u_1690_);
lean_closure_set(v___f_1704_, 2, v___x_1691_);
lean_closure_set(v___f_1704_, 3, v_resTy_1692_);
lean_closure_set(v___f_1704_, 4, v_c_1693_);
lean_closure_set(v___f_1704_, 5, v_t_1703_);
lean_closure_set(v___f_1704_, 6, v_toPure_1694_);
v___x_1705_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1695_, v_inst_1696_, v_n_1697_, v___x_1698_, v_hFalse_1699_, v___f_1700_, v___x_1701_);
v___x_1706_ = lean_apply_4(v_toBind_1702_, lean_box(0), lean_box(0), v___x_1705_, v___f_1704_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15___boxed(lean_object* v___x_1707_, lean_object* v_u_1708_, lean_object* v___x_1709_, lean_object* v_resTy_1710_, lean_object* v_c_1711_, lean_object* v_toPure_1712_, lean_object* v_inst_1713_, lean_object* v_inst_1714_, lean_object* v_n_1715_, lean_object* v___x_1716_, lean_object* v_hFalse_1717_, lean_object* v___f_1718_, lean_object* v___x_1719_, lean_object* v_toBind_1720_, lean_object* v_t_1721_){
_start:
{
uint8_t v___x_3156__boxed_1722_; uint8_t v___x_3158__boxed_1723_; lean_object* v_res_1724_; 
v___x_3156__boxed_1722_ = lean_unbox(v___x_1716_);
v___x_3158__boxed_1723_ = lean_unbox(v___x_1719_);
v_res_1724_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(v___x_1707_, v_u_1708_, v___x_1709_, v_resTy_1710_, v_c_1711_, v_toPure_1712_, v_inst_1713_, v_inst_1714_, v_n_1715_, v___x_3156__boxed_1722_, v_hFalse_1717_, v___f_1718_, v___x_3158__boxed_1723_, v_toBind_1720_, v_t_1721_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16(lean_object* v___x_1725_, lean_object* v_u_1726_, lean_object* v___x_1727_, lean_object* v_resTy_1728_, lean_object* v_c_1729_, lean_object* v_toPure_1730_, lean_object* v_inst_1731_, lean_object* v_inst_1732_, lean_object* v_n_1733_, lean_object* v___f_1734_, lean_object* v_toBind_1735_, lean_object* v_hTrue_1736_, lean_object* v___f_1737_, lean_object* v_hFalse_1738_){
_start:
{
uint8_t v___x_1739_; uint8_t v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___f_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1739_ = 0;
v___x_1740_ = 0;
v___x_1741_ = lean_box(v___x_1739_);
v___x_1742_ = lean_box(v___x_1740_);
lean_inc(v_toBind_1735_);
lean_inc(v_n_1733_);
lean_inc_ref(v_inst_1732_);
lean_inc_ref(v_inst_1731_);
v___f_1743_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15___boxed), 15, 14);
lean_closure_set(v___f_1743_, 0, v___x_1725_);
lean_closure_set(v___f_1743_, 1, v_u_1726_);
lean_closure_set(v___f_1743_, 2, v___x_1727_);
lean_closure_set(v___f_1743_, 3, v_resTy_1728_);
lean_closure_set(v___f_1743_, 4, v_c_1729_);
lean_closure_set(v___f_1743_, 5, v_toPure_1730_);
lean_closure_set(v___f_1743_, 6, v_inst_1731_);
lean_closure_set(v___f_1743_, 7, v_inst_1732_);
lean_closure_set(v___f_1743_, 8, v_n_1733_);
lean_closure_set(v___f_1743_, 9, v___x_1741_);
lean_closure_set(v___f_1743_, 10, v_hFalse_1738_);
lean_closure_set(v___f_1743_, 11, v___f_1734_);
lean_closure_set(v___f_1743_, 12, v___x_1742_);
lean_closure_set(v___f_1743_, 13, v_toBind_1735_);
v___x_1744_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1731_, v_inst_1732_, v_n_1733_, v___x_1739_, v_hTrue_1736_, v___f_1737_, v___x_1740_);
v___x_1745_ = lean_apply_4(v_toBind_1735_, lean_box(0), lean_box(0), v___x_1744_, v___f_1743_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18(lean_object* v___x_1746_, lean_object* v_u_1747_, lean_object* v___x_1748_, lean_object* v_resTy_1749_, lean_object* v_c_1750_, lean_object* v_toPure_1751_, lean_object* v_inst_1752_, lean_object* v_inst_1753_, lean_object* v_n_1754_, lean_object* v___f_1755_, lean_object* v_toBind_1756_, lean_object* v___f_1757_, lean_object* v_inst_1758_, lean_object* v_hTrue_1759_){
_start:
{
lean_object* v___f_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
lean_inc(v_toBind_1756_);
lean_inc_ref(v_c_1750_);
lean_inc(v___x_1748_);
lean_inc_ref(v___x_1746_);
v___f_1760_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16), 14, 13);
lean_closure_set(v___f_1760_, 0, v___x_1746_);
lean_closure_set(v___f_1760_, 1, v_u_1747_);
lean_closure_set(v___f_1760_, 2, v___x_1748_);
lean_closure_set(v___f_1760_, 3, v_resTy_1749_);
lean_closure_set(v___f_1760_, 4, v_c_1750_);
lean_closure_set(v___f_1760_, 5, v_toPure_1751_);
lean_closure_set(v___f_1760_, 6, v_inst_1752_);
lean_closure_set(v___f_1760_, 7, v_inst_1753_);
lean_closure_set(v___f_1760_, 8, v_n_1754_);
lean_closure_set(v___f_1760_, 9, v___f_1755_);
lean_closure_set(v___f_1760_, 10, v_toBind_1756_);
lean_closure_set(v___f_1760_, 11, v_hTrue_1759_);
lean_closure_set(v___f_1760_, 12, v___f_1757_);
v___x_1761_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36___closed__0));
v___x_1762_ = l_Lean_Name_mkStr2(v___x_1746_, v___x_1761_);
v___x_1763_ = l_Lean_mkConst(v___x_1762_, v___x_1748_);
v___x_1764_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_1764_, 0, v_c_1750_);
lean_closure_set(v___x_1764_, 1, v___x_1763_);
v___x_1765_ = lean_apply_2(v_inst_1758_, lean_box(0), v___x_1764_);
v___x_1766_ = lean_apply_4(v_toBind_1756_, lean_box(0), lean_box(0), v___x_1765_, v___f_1760_);
return v___x_1766_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1(void){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1770_ = lean_box(0);
v___x_1771_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0));
v___x_1772_ = l_Lean_mkConst(v___x_1771_, v___x_1770_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(lean_object* v_u_1773_, lean_object* v_resTy_1774_, lean_object* v_c_1775_, lean_object* v_toPure_1776_, lean_object* v_inst_1777_, lean_object* v_inst_1778_, lean_object* v___f_1779_, lean_object* v_toBind_1780_, lean_object* v___f_1781_, lean_object* v_inst_1782_, lean_object* v_n_1783_){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___f_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1784_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10));
v___x_1785_ = lean_box(0);
lean_inc(v_inst_1782_);
lean_inc(v_toBind_1780_);
lean_inc_ref(v_c_1775_);
v___f_1786_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18), 14, 13);
lean_closure_set(v___f_1786_, 0, v___x_1784_);
lean_closure_set(v___f_1786_, 1, v_u_1773_);
lean_closure_set(v___f_1786_, 2, v___x_1785_);
lean_closure_set(v___f_1786_, 3, v_resTy_1774_);
lean_closure_set(v___f_1786_, 4, v_c_1775_);
lean_closure_set(v___f_1786_, 5, v_toPure_1776_);
lean_closure_set(v___f_1786_, 6, v_inst_1777_);
lean_closure_set(v___f_1786_, 7, v_inst_1778_);
lean_closure_set(v___f_1786_, 8, v_n_1783_);
lean_closure_set(v___f_1786_, 9, v___f_1779_);
lean_closure_set(v___f_1786_, 10, v_toBind_1780_);
lean_closure_set(v___f_1786_, 11, v___f_1781_);
lean_closure_set(v___f_1786_, 12, v_inst_1782_);
v___x_1787_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1, &l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__1);
v___x_1788_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_1788_, 0, v_c_1775_);
lean_closure_set(v___x_1788_, 1, v___x_1787_);
v___x_1789_ = lean_apply_2(v_inst_1782_, lean_box(0), v___x_1788_);
v___x_1790_ = lean_apply_4(v_toBind_1780_, lean_box(0), lean_box(0), v___x_1789_, v___f_1786_);
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(lean_object* v_e_1791_, uint8_t v_useSplitter_1792_, lean_object* v_resTy_1793_, lean_object* v_toPure_1794_, lean_object* v_onAlt_1795_, lean_object* v_toBind_1796_, lean_object* v_inst_1797_, lean_object* v_inst_1798_, lean_object* v_inst_1799_, lean_object* v_u_1800_){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v_c_1805_; 
v___x_1801_ = lean_unsigned_to_nat(1u);
v___x_1802_ = l_Lean_Expr_getAppNumArgs(v_e_1791_);
v___x_1803_ = lean_nat_sub(v___x_1802_, v___x_1801_);
lean_dec(v___x_1802_);
v___x_1804_ = lean_nat_sub(v___x_1803_, v___x_1801_);
lean_dec(v___x_1803_);
v_c_1805_ = l_Lean_Expr_getRevArg_x21(v_e_1791_, v___x_1804_);
if (v_useSplitter_1792_ == 0)
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___f_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
lean_dec_ref(v_inst_1799_);
lean_dec_ref(v_inst_1798_);
lean_dec(v_inst_1797_);
v___x_1806_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1807_ = lean_unsigned_to_nat(0u);
v___x_1808_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1796_);
lean_inc(v_onAlt_1795_);
lean_inc_ref(v_resTy_1793_);
v___f_1809_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14), 9, 8);
lean_closure_set(v___f_1809_, 0, v_u_1800_);
lean_closure_set(v___f_1809_, 1, v_resTy_1793_);
lean_closure_set(v___f_1809_, 2, v_c_1805_);
lean_closure_set(v___f_1809_, 3, v_toPure_1794_);
lean_closure_set(v___f_1809_, 4, v_onAlt_1795_);
lean_closure_set(v___f_1809_, 5, v___x_1801_);
lean_closure_set(v___f_1809_, 6, v___x_1808_);
lean_closure_set(v___f_1809_, 7, v_toBind_1796_);
v___x_1810_ = lean_apply_4(v_onAlt_1795_, v___x_1806_, v_resTy_1793_, v___x_1807_, v___x_1808_);
v___x_1811_ = lean_apply_4(v_toBind_1796_, lean_box(0), lean_box(0), v___x_1810_, v___f_1809_);
return v___x_1811_;
}
else
{
lean_object* v___x_1812_; lean_object* v___f_1813_; lean_object* v___x_1814_; lean_object* v___f_1815_; lean_object* v___f_1816_; lean_object* v___f_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1812_ = lean_box(v_useSplitter_1792_);
lean_inc_n(v_toBind_1796_, 3);
lean_inc_ref_n(v_resTy_1793_, 2);
lean_inc(v_onAlt_1795_);
lean_inc_n(v_inst_1797_, 3);
v___f_1813_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_1813_, 0, v___x_1801_);
lean_closure_set(v___f_1813_, 1, v___x_1812_);
lean_closure_set(v___f_1813_, 2, v_inst_1797_);
lean_closure_set(v___f_1813_, 3, v_onAlt_1795_);
lean_closure_set(v___f_1813_, 4, v_resTy_1793_);
lean_closure_set(v___f_1813_, 5, v_toBind_1796_);
v___x_1814_ = lean_box(v_useSplitter_1792_);
v___f_1815_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1815_, 0, v___x_1801_);
lean_closure_set(v___f_1815_, 1, v___x_1814_);
lean_closure_set(v___f_1815_, 2, v_inst_1797_);
lean_closure_set(v___f_1815_, 3, v_onAlt_1795_);
lean_closure_set(v___f_1815_, 4, v_resTy_1793_);
lean_closure_set(v___f_1815_, 5, v_toBind_1796_);
v___f_1816_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19), 11, 10);
lean_closure_set(v___f_1816_, 0, v_u_1800_);
lean_closure_set(v___f_1816_, 1, v_resTy_1793_);
lean_closure_set(v___f_1816_, 2, v_c_1805_);
lean_closure_set(v___f_1816_, 3, v_toPure_1794_);
lean_closure_set(v___f_1816_, 4, v_inst_1798_);
lean_closure_set(v___f_1816_, 5, v_inst_1799_);
lean_closure_set(v___f_1816_, 6, v___f_1815_);
lean_closure_set(v___f_1816_, 7, v_toBind_1796_);
lean_closure_set(v___f_1816_, 8, v___f_1813_);
lean_closure_set(v___f_1816_, 9, v_inst_1797_);
v___f_1817_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1818_ = lean_apply_2(v_inst_1797_, lean_box(0), v___f_1817_);
v___x_1819_ = lean_apply_4(v_toBind_1796_, lean_box(0), lean_box(0), v___x_1818_, v___f_1816_);
return v___x_1819_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed(lean_object* v_e_1820_, lean_object* v_useSplitter_1821_, lean_object* v_resTy_1822_, lean_object* v_toPure_1823_, lean_object* v_onAlt_1824_, lean_object* v_toBind_1825_, lean_object* v_inst_1826_, lean_object* v_inst_1827_, lean_object* v_inst_1828_, lean_object* v_u_1829_){
_start:
{
uint8_t v_useSplitter_boxed_1830_; lean_object* v_res_1831_; 
v_useSplitter_boxed_1830_ = lean_unbox(v_useSplitter_1821_);
v_res_1831_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(v_e_1820_, v_useSplitter_boxed_1830_, v_resTy_1822_, v_toPure_1823_, v_onAlt_1824_, v_toBind_1825_, v_inst_1826_, v_inst_1827_, v_inst_1828_, v_u_1829_);
lean_dec_ref(v_e_1820_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(lean_object* v_u_1835_, lean_object* v_resTy_1836_, lean_object* v_c_1837_, lean_object* v_h_1838_, lean_object* v_t_1839_, lean_object* v_toPure_1840_, lean_object* v_e_1841_){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1842_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0));
v___x_1843_ = lean_box(0);
v___x_1844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1844_, 0, v_u_1835_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = l_Lean_mkConst(v___x_1842_, v___x_1844_);
v___x_1846_ = l_Lean_mkApp5(v___x_1845_, v_resTy_1836_, v_c_1837_, v_h_1838_, v_t_1839_, v_e_1841_);
v___x_1847_ = lean_apply_2(v_toPure_1840_, lean_box(0), v___x_1846_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(lean_object* v_u_1848_, lean_object* v_resTy_1849_, lean_object* v_c_1850_, lean_object* v_h_1851_, lean_object* v_toPure_1852_, lean_object* v_onAlt_1853_, lean_object* v___x_1854_, lean_object* v___x_1855_, lean_object* v_toBind_1856_, lean_object* v_t_1857_){
_start:
{
lean_object* v___f_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
lean_inc_ref(v_resTy_1849_);
v___f_1858_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21), 7, 6);
lean_closure_set(v___f_1858_, 0, v_u_1848_);
lean_closure_set(v___f_1858_, 1, v_resTy_1849_);
lean_closure_set(v___f_1858_, 2, v_c_1850_);
lean_closure_set(v___f_1858_, 3, v_h_1851_);
lean_closure_set(v___f_1858_, 4, v_t_1857_);
lean_closure_set(v___f_1858_, 5, v_toPure_1852_);
v___x_1859_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1860_ = lean_apply_4(v_onAlt_1853_, v___x_1859_, v_resTy_1849_, v___x_1854_, v___x_1855_);
v___x_1861_ = lean_apply_4(v_toBind_1856_, lean_box(0), lean_box(0), v___x_1860_, v___f_1858_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28(lean_object* v_u_1865_, lean_object* v_resTy_1866_, lean_object* v_c_1867_, lean_object* v_h_1868_, lean_object* v_t_1869_, lean_object* v_toPure_1870_, lean_object* v_e_1871_){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1872_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0));
v___x_1873_ = lean_box(0);
v___x_1874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1874_, 0, v_u_1865_);
lean_ctor_set(v___x_1874_, 1, v___x_1873_);
v___x_1875_ = l_Lean_mkConst(v___x_1872_, v___x_1874_);
v___x_1876_ = l_Lean_mkApp5(v___x_1875_, v_resTy_1866_, v_c_1867_, v_h_1868_, v_t_1869_, v_e_1871_);
v___x_1877_ = lean_apply_2(v_toPure_1870_, lean_box(0), v___x_1876_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(lean_object* v_u_1878_, lean_object* v_resTy_1879_, lean_object* v_c_1880_, lean_object* v_h_1881_, lean_object* v_toPure_1882_, lean_object* v_inst_1883_, lean_object* v_inst_1884_, lean_object* v_n_1885_, uint8_t v___x_1886_, lean_object* v___f_1887_, uint8_t v___x_1888_, lean_object* v_toBind_1889_, lean_object* v_t_1890_){
_start:
{
lean_object* v___f_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
lean_inc_ref(v_c_1880_);
v___f_1891_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28), 7, 6);
lean_closure_set(v___f_1891_, 0, v_u_1878_);
lean_closure_set(v___f_1891_, 1, v_resTy_1879_);
lean_closure_set(v___f_1891_, 2, v_c_1880_);
lean_closure_set(v___f_1891_, 3, v_h_1881_);
lean_closure_set(v___f_1891_, 4, v_t_1890_);
lean_closure_set(v___f_1891_, 5, v_toPure_1882_);
v___x_1892_ = l_Lean_mkNot(v_c_1880_);
v___x_1893_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1883_, v_inst_1884_, v_n_1885_, v___x_1886_, v___x_1892_, v___f_1887_, v___x_1888_);
v___x_1894_ = lean_apply_4(v_toBind_1889_, lean_box(0), lean_box(0), v___x_1893_, v___f_1891_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed(lean_object* v_u_1895_, lean_object* v_resTy_1896_, lean_object* v_c_1897_, lean_object* v_h_1898_, lean_object* v_toPure_1899_, lean_object* v_inst_1900_, lean_object* v_inst_1901_, lean_object* v_n_1902_, lean_object* v___x_1903_, lean_object* v___f_1904_, lean_object* v___x_1905_, lean_object* v_toBind_1906_, lean_object* v_t_1907_){
_start:
{
uint8_t v___x_3410__boxed_1908_; uint8_t v___x_3412__boxed_1909_; lean_object* v_res_1910_; 
v___x_3410__boxed_1908_ = lean_unbox(v___x_1903_);
v___x_3412__boxed_1909_ = lean_unbox(v___x_1905_);
v_res_1910_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(v_u_1895_, v_resTy_1896_, v_c_1897_, v_h_1898_, v_toPure_1899_, v_inst_1900_, v_inst_1901_, v_n_1902_, v___x_3410__boxed_1908_, v___f_1904_, v___x_3412__boxed_1909_, v_toBind_1906_, v_t_1907_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25(lean_object* v_u_1911_, lean_object* v_resTy_1912_, lean_object* v_c_1913_, lean_object* v_h_1914_, lean_object* v_toPure_1915_, lean_object* v_inst_1916_, lean_object* v_inst_1917_, lean_object* v___f_1918_, lean_object* v_toBind_1919_, lean_object* v___f_1920_, lean_object* v_n_1921_){
_start:
{
uint8_t v___x_1922_; uint8_t v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___f_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1922_ = 0;
v___x_1923_ = 0;
v___x_1924_ = lean_box(v___x_1922_);
v___x_1925_ = lean_box(v___x_1923_);
lean_inc(v_toBind_1919_);
lean_inc(v_n_1921_);
lean_inc_ref(v_inst_1917_);
lean_inc_ref(v_inst_1916_);
lean_inc_ref(v_c_1913_);
v___f_1926_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed), 13, 12);
lean_closure_set(v___f_1926_, 0, v_u_1911_);
lean_closure_set(v___f_1926_, 1, v_resTy_1912_);
lean_closure_set(v___f_1926_, 2, v_c_1913_);
lean_closure_set(v___f_1926_, 3, v_h_1914_);
lean_closure_set(v___f_1926_, 4, v_toPure_1915_);
lean_closure_set(v___f_1926_, 5, v_inst_1916_);
lean_closure_set(v___f_1926_, 6, v_inst_1917_);
lean_closure_set(v___f_1926_, 7, v_n_1921_);
lean_closure_set(v___f_1926_, 8, v___x_1924_);
lean_closure_set(v___f_1926_, 9, v___f_1918_);
lean_closure_set(v___f_1926_, 10, v___x_1925_);
lean_closure_set(v___f_1926_, 11, v_toBind_1919_);
v___x_1927_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1916_, v_inst_1917_, v_n_1921_, v___x_1922_, v_c_1913_, v___f_1920_, v___x_1923_);
v___x_1928_ = lean_apply_4(v_toBind_1919_, lean_box(0), lean_box(0), v___x_1927_, v___f_1926_);
return v___x_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__27(lean_object* v_e_1929_, uint8_t v_useSplitter_1930_, lean_object* v_resTy_1931_, lean_object* v_toPure_1932_, lean_object* v_onAlt_1933_, lean_object* v_toBind_1934_, lean_object* v_inst_1935_, lean_object* v_inst_1936_, lean_object* v_inst_1937_, lean_object* v_u_1938_){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v_c_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v_h_1947_; 
v___x_1939_ = lean_unsigned_to_nat(1u);
v___x_1940_ = l_Lean_Expr_getAppNumArgs(v_e_1929_);
v___x_1941_ = lean_nat_sub(v___x_1940_, v___x_1939_);
v___x_1942_ = lean_nat_sub(v___x_1941_, v___x_1939_);
lean_dec(v___x_1941_);
v_c_1943_ = l_Lean_Expr_getRevArg_x21(v_e_1929_, v___x_1942_);
v___x_1944_ = lean_unsigned_to_nat(2u);
v___x_1945_ = lean_nat_sub(v___x_1940_, v___x_1944_);
lean_dec(v___x_1940_);
v___x_1946_ = lean_nat_sub(v___x_1945_, v___x_1939_);
lean_dec(v___x_1945_);
v_h_1947_ = l_Lean_Expr_getRevArg_x21(v_e_1929_, v___x_1946_);
if (v_useSplitter_1930_ == 0)
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___f_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
lean_dec_ref(v_inst_1937_);
lean_dec_ref(v_inst_1936_);
lean_dec(v_inst_1935_);
v___x_1948_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1949_ = lean_unsigned_to_nat(0u);
v___x_1950_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1934_);
lean_inc(v_onAlt_1933_);
lean_inc_ref(v_resTy_1931_);
v___f_1951_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23), 10, 9);
lean_closure_set(v___f_1951_, 0, v_u_1938_);
lean_closure_set(v___f_1951_, 1, v_resTy_1931_);
lean_closure_set(v___f_1951_, 2, v_c_1943_);
lean_closure_set(v___f_1951_, 3, v_h_1947_);
lean_closure_set(v___f_1951_, 4, v_toPure_1932_);
lean_closure_set(v___f_1951_, 5, v_onAlt_1933_);
lean_closure_set(v___f_1951_, 6, v___x_1939_);
lean_closure_set(v___f_1951_, 7, v___x_1950_);
lean_closure_set(v___f_1951_, 8, v_toBind_1934_);
v___x_1952_ = lean_apply_4(v_onAlt_1933_, v___x_1948_, v_resTy_1931_, v___x_1949_, v___x_1950_);
v___x_1953_ = lean_apply_4(v_toBind_1934_, lean_box(0), lean_box(0), v___x_1952_, v___f_1951_);
return v___x_1953_;
}
else
{
lean_object* v___x_1954_; lean_object* v___f_1955_; lean_object* v___x_1956_; lean_object* v___f_1957_; lean_object* v___f_1958_; lean_object* v___f_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1954_ = lean_box(v_useSplitter_1930_);
lean_inc_n(v_toBind_1934_, 3);
lean_inc_ref_n(v_resTy_1931_, 2);
lean_inc(v_onAlt_1933_);
lean_inc_n(v_inst_1935_, 2);
v___f_1955_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_1955_, 0, v___x_1939_);
lean_closure_set(v___f_1955_, 1, v___x_1954_);
lean_closure_set(v___f_1955_, 2, v_inst_1935_);
lean_closure_set(v___f_1955_, 3, v_onAlt_1933_);
lean_closure_set(v___f_1955_, 4, v_resTy_1931_);
lean_closure_set(v___f_1955_, 5, v_toBind_1934_);
v___x_1956_ = lean_box(v_useSplitter_1930_);
v___f_1957_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1957_, 0, v___x_1939_);
lean_closure_set(v___f_1957_, 1, v___x_1956_);
lean_closure_set(v___f_1957_, 2, v_inst_1935_);
lean_closure_set(v___f_1957_, 3, v_onAlt_1933_);
lean_closure_set(v___f_1957_, 4, v_resTy_1931_);
lean_closure_set(v___f_1957_, 5, v_toBind_1934_);
v___f_1958_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25), 11, 10);
lean_closure_set(v___f_1958_, 0, v_u_1938_);
lean_closure_set(v___f_1958_, 1, v_resTy_1931_);
lean_closure_set(v___f_1958_, 2, v_c_1943_);
lean_closure_set(v___f_1958_, 3, v_h_1947_);
lean_closure_set(v___f_1958_, 4, v_toPure_1932_);
lean_closure_set(v___f_1958_, 5, v_inst_1936_);
lean_closure_set(v___f_1958_, 6, v_inst_1937_);
lean_closure_set(v___f_1958_, 7, v___f_1957_);
lean_closure_set(v___f_1958_, 8, v_toBind_1934_);
lean_closure_set(v___f_1958_, 9, v___f_1955_);
v___f_1959_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1960_ = lean_apply_2(v_inst_1935_, lean_box(0), v___f_1959_);
v___x_1961_ = lean_apply_4(v_toBind_1934_, lean_box(0), lean_box(0), v___x_1960_, v___f_1958_);
return v___x_1961_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__27___boxed(lean_object* v_e_1962_, lean_object* v_useSplitter_1963_, lean_object* v_resTy_1964_, lean_object* v_toPure_1965_, lean_object* v_onAlt_1966_, lean_object* v_toBind_1967_, lean_object* v_inst_1968_, lean_object* v_inst_1969_, lean_object* v_inst_1970_, lean_object* v_u_1971_){
_start:
{
uint8_t v_useSplitter_boxed_1972_; lean_object* v_res_1973_; 
v_useSplitter_boxed_1972_ = lean_unbox(v_useSplitter_1963_);
v_res_1973_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__27(v_e_1962_, v_useSplitter_boxed_1972_, v_resTy_1964_, v_toPure_1965_, v_onAlt_1966_, v_toBind_1967_, v_inst_1968_, v_inst_1969_, v_inst_1970_, v_u_1971_);
lean_dec_ref(v_e_1962_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__36(lean_object* v_inst_1974_, lean_object* v_onAlt_1975_, lean_object* v_resTy_1976_, lean_object* v_toBind_1977_, lean_object* v_e_1978_, lean_object* v_toPure_1979_, lean_object* v_inst_1980_, lean_object* v_inst_1981_, lean_object* v___f_1982_, lean_object* v_u_1983_){
_start:
{
lean_object* v___x_1984_; lean_object* v___f_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v_c_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v_h_1993_; lean_object* v___f_1994_; lean_object* v___f_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1984_ = lean_unsigned_to_nat(1u);
lean_inc_n(v_toBind_1977_, 2);
lean_inc_ref(v_resTy_1976_);
lean_inc(v_inst_1974_);
v___f_1985_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13), 6, 5);
lean_closure_set(v___f_1985_, 0, v___x_1984_);
lean_closure_set(v___f_1985_, 1, v_inst_1974_);
lean_closure_set(v___f_1985_, 2, v_onAlt_1975_);
lean_closure_set(v___f_1985_, 3, v_resTy_1976_);
lean_closure_set(v___f_1985_, 4, v_toBind_1977_);
v___x_1986_ = l_Lean_Expr_getAppNumArgs(v_e_1978_);
v___x_1987_ = lean_nat_sub(v___x_1986_, v___x_1984_);
v___x_1988_ = lean_nat_sub(v___x_1987_, v___x_1984_);
lean_dec(v___x_1987_);
v_c_1989_ = l_Lean_Expr_getRevArg_x21(v_e_1978_, v___x_1988_);
v___x_1990_ = lean_unsigned_to_nat(2u);
v___x_1991_ = lean_nat_sub(v___x_1986_, v___x_1990_);
lean_dec(v___x_1986_);
v___x_1992_ = lean_nat_sub(v___x_1991_, v___x_1984_);
lean_dec(v___x_1991_);
v_h_1993_ = l_Lean_Expr_getRevArg_x21(v_e_1978_, v___x_1992_);
v___f_1994_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25), 11, 10);
lean_closure_set(v___f_1994_, 0, v_u_1983_);
lean_closure_set(v___f_1994_, 1, v_resTy_1976_);
lean_closure_set(v___f_1994_, 2, v_c_1989_);
lean_closure_set(v___f_1994_, 3, v_h_1993_);
lean_closure_set(v___f_1994_, 4, v_toPure_1979_);
lean_closure_set(v___f_1994_, 5, v_inst_1980_);
lean_closure_set(v___f_1994_, 6, v_inst_1981_);
lean_closure_set(v___f_1994_, 7, v___f_1985_);
lean_closure_set(v___f_1994_, 8, v_toBind_1977_);
lean_closure_set(v___f_1994_, 9, v___f_1982_);
v___f_1995_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1996_ = lean_apply_2(v_inst_1974_, lean_box(0), v___f_1995_);
v___x_1997_ = lean_apply_4(v_toBind_1977_, lean_box(0), lean_box(0), v___x_1996_, v___f_1994_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__36___boxed(lean_object* v_inst_1998_, lean_object* v_onAlt_1999_, lean_object* v_resTy_2000_, lean_object* v_toBind_2001_, lean_object* v_e_2002_, lean_object* v_toPure_2003_, lean_object* v_inst_2004_, lean_object* v_inst_2005_, lean_object* v___f_2006_, lean_object* v_u_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__36(v_inst_1998_, v_onAlt_1999_, v_resTy_2000_, v_toBind_2001_, v_e_2002_, v_toPure_2003_, v_inst_2004_, v_inst_2005_, v___f_2006_, v_u_2007_);
lean_dec_ref(v_e_2002_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__39(lean_object* v_inst_2009_, lean_object* v_onAlt_2010_, lean_object* v_resTy_2011_, lean_object* v_toBind_2012_, lean_object* v_e_2013_, lean_object* v_toPure_2014_, lean_object* v_inst_2015_, lean_object* v_inst_2016_, lean_object* v___f_2017_, lean_object* v_u_2018_){
_start:
{
lean_object* v___x_2019_; lean_object* v___f_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v_c_2024_; lean_object* v___f_2025_; lean_object* v___f_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2019_ = lean_unsigned_to_nat(1u);
lean_inc_n(v_toBind_2012_, 2);
lean_inc_ref(v_resTy_2011_);
lean_inc_n(v_inst_2009_, 2);
v___f_2020_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13), 6, 5);
lean_closure_set(v___f_2020_, 0, v___x_2019_);
lean_closure_set(v___f_2020_, 1, v_inst_2009_);
lean_closure_set(v___f_2020_, 2, v_onAlt_2010_);
lean_closure_set(v___f_2020_, 3, v_resTy_2011_);
lean_closure_set(v___f_2020_, 4, v_toBind_2012_);
v___x_2021_ = l_Lean_Expr_getAppNumArgs(v_e_2013_);
v___x_2022_ = lean_nat_sub(v___x_2021_, v___x_2019_);
lean_dec(v___x_2021_);
v___x_2023_ = lean_nat_sub(v___x_2022_, v___x_2019_);
lean_dec(v___x_2022_);
v_c_2024_ = l_Lean_Expr_getRevArg_x21(v_e_2013_, v___x_2023_);
v___f_2025_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19), 11, 10);
lean_closure_set(v___f_2025_, 0, v_u_2018_);
lean_closure_set(v___f_2025_, 1, v_resTy_2011_);
lean_closure_set(v___f_2025_, 2, v_c_2024_);
lean_closure_set(v___f_2025_, 3, v_toPure_2014_);
lean_closure_set(v___f_2025_, 4, v_inst_2015_);
lean_closure_set(v___f_2025_, 5, v_inst_2016_);
lean_closure_set(v___f_2025_, 6, v___f_2020_);
lean_closure_set(v___f_2025_, 7, v_toBind_2012_);
lean_closure_set(v___f_2025_, 8, v___f_2017_);
lean_closure_set(v___f_2025_, 9, v_inst_2009_);
v___f_2026_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_2027_ = lean_apply_2(v_inst_2009_, lean_box(0), v___f_2026_);
v___x_2028_ = lean_apply_4(v_toBind_2012_, lean_box(0), lean_box(0), v___x_2027_, v___f_2025_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__39___boxed(lean_object* v_inst_2029_, lean_object* v_onAlt_2030_, lean_object* v_resTy_2031_, lean_object* v_toBind_2032_, lean_object* v_e_2033_, lean_object* v_toPure_2034_, lean_object* v_inst_2035_, lean_object* v_inst_2036_, lean_object* v___f_2037_, lean_object* v_u_2038_){
_start:
{
lean_object* v_res_2039_; 
v_res_2039_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__39(v_inst_2029_, v_onAlt_2030_, v_resTy_2031_, v_toBind_2032_, v_e_2033_, v_toPure_2034_, v_inst_2035_, v_inst_2036_, v___f_2037_, v_u_2038_);
lean_dec_ref(v_e_2033_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__26(lean_object* v_onAlt_2040_, lean_object* v_idx_2041_, lean_object* v_expAltType_2042_, lean_object* v_altFVars_2043_, lean_object* v___alt_2044_){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
v___x_2045_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2));
v___x_2046_ = lean_unsigned_to_nat(1u);
v___x_2047_ = lean_nat_add(v_idx_2041_, v___x_2046_);
v___x_2048_ = lean_name_append_index_after(v___x_2045_, v___x_2047_);
v___x_2049_ = lean_apply_4(v_onAlt_2040_, v___x_2048_, v_expAltType_2042_, v_idx_2041_, v_altFVars_2043_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__26___boxed(lean_object* v_onAlt_2050_, lean_object* v_idx_2051_, lean_object* v_expAltType_2052_, lean_object* v_altFVars_2053_, lean_object* v___alt_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__26(v_onAlt_2050_, v_idx_2051_, v_expAltType_2052_, v_altFVars_2053_, v___alt_2054_);
lean_dec_ref(v___alt_2054_);
return v_res_2055_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__29(lean_object* v_toMatcherInfo_2056_, lean_object* v_i_2057_, lean_object* v_a_2058_, lean_object* v_x_2059_){
_start:
{
uint8_t v___x_2060_; 
v___x_2060_ = l_Lean_Expr_isFVar(v_a_2058_);
if (v___x_2060_ == 0)
{
return v___x_2060_;
}
else
{
lean_object* v_discrInfos_2061_; lean_object* v___x_2062_; uint8_t v___x_2063_; 
v_discrInfos_2061_ = lean_ctor_get(v_toMatcherInfo_2056_, 4);
v___x_2062_ = lean_array_get_size(v_discrInfos_2061_);
v___x_2063_ = lean_nat_dec_lt(v_i_2057_, v___x_2062_);
if (v___x_2063_ == 0)
{
return v___x_2060_;
}
else
{
lean_object* v___x_2064_; 
v___x_2064_ = lean_array_fget_borrowed(v_discrInfos_2061_, v_i_2057_);
if (lean_obj_tag(v___x_2064_) == 0)
{
return v___x_2060_;
}
else
{
uint8_t v___x_2065_; 
v___x_2065_ = 0;
return v___x_2065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__29___boxed(lean_object* v_toMatcherInfo_2066_, lean_object* v_i_2067_, lean_object* v_a_2068_, lean_object* v_x_2069_){
_start:
{
uint8_t v_res_2070_; lean_object* v_r_2071_; 
v_res_2070_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__29(v_toMatcherInfo_2066_, v_i_2067_, v_a_2068_, v_x_2069_);
lean_dec_ref(v_a_2068_);
lean_dec(v_i_2067_);
lean_dec_ref(v_toMatcherInfo_2066_);
v_r_2071_ = lean_box(v_res_2070_);
return v_r_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30(lean_object* v_mask_2072_, lean_object* v_absMotiveBody_2073_, lean_object* v_toPure_2074_, lean_object* v_xs_2075_, lean_object* v___body_2076_){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2077_ = l_Lean_Array_mask___redArg(v_mask_2072_, v_xs_2075_);
v___x_2078_ = lean_expr_instantiate_rev(v_absMotiveBody_2073_, v___x_2077_);
lean_dec(v___x_2077_);
v___x_2079_ = lean_apply_2(v_toPure_2074_, lean_box(0), v___x_2078_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30___boxed(lean_object* v_mask_2080_, lean_object* v_absMotiveBody_2081_, lean_object* v_toPure_2082_, lean_object* v_xs_2083_, lean_object* v___body_2084_){
_start:
{
lean_object* v_res_2085_; 
v_res_2085_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30(v_mask_2080_, v_absMotiveBody_2081_, v_toPure_2082_, v_xs_2083_, v___body_2084_);
lean_dec_ref(v___body_2084_);
lean_dec_ref(v_absMotiveBody_2081_);
lean_dec_ref(v_mask_2080_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31(lean_object* v_toFunctor_2086_, lean_object* v_mask_2087_, lean_object* v_toPure_2088_, lean_object* v_inst_2089_, lean_object* v_inst_2090_, lean_object* v_inst_2091_, lean_object* v_inst_2092_, lean_object* v_inst_2093_, lean_object* v_matcherApp_2094_, uint8_t v_useSplitter_2095_, lean_object* v___f_2096_, lean_object* v___f_2097_, lean_object* v_absMotiveBody_2098_){
_start:
{
lean_object* v_map_2099_; lean_object* v___f_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
v_map_2099_ = lean_ctor_get(v_toFunctor_2086_, 0);
lean_inc(v_map_2099_);
lean_dec_ref(v_toFunctor_2086_);
lean_inc(v_toPure_2088_);
v___f_2100_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30___boxed), 5, 3);
lean_closure_set(v___f_2100_, 0, v_mask_2087_);
lean_closure_set(v___f_2100_, 1, v_absMotiveBody_2098_);
lean_closure_set(v___f_2100_, 2, v_toPure_2088_);
v___x_2101_ = lean_apply_1(v_toPure_2088_, lean_box(0));
lean_inc(v___x_2101_);
v___x_2102_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_2089_, v_inst_2090_, v_inst_2091_, v_inst_2092_, v_inst_2093_, v_matcherApp_2094_, v_useSplitter_2095_, v_useSplitter_2095_, v___x_2101_, v___f_2100_, v___f_2096_, v___x_2101_);
v___x_2103_ = lean_apply_4(v_map_2099_, lean_box(0), lean_box(0), v___f_2097_, v___x_2102_);
return v___x_2103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31___boxed(lean_object* v_toFunctor_2104_, lean_object* v_mask_2105_, lean_object* v_toPure_2106_, lean_object* v_inst_2107_, lean_object* v_inst_2108_, lean_object* v_inst_2109_, lean_object* v_inst_2110_, lean_object* v_inst_2111_, lean_object* v_matcherApp_2112_, lean_object* v_useSplitter_2113_, lean_object* v___f_2114_, lean_object* v___f_2115_, lean_object* v_absMotiveBody_2116_){
_start:
{
uint8_t v_useSplitter_boxed_2117_; lean_object* v_res_2118_; 
v_useSplitter_boxed_2117_ = lean_unbox(v_useSplitter_2113_);
v_res_2118_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31(v_toFunctor_2104_, v_mask_2105_, v_toPure_2106_, v_inst_2107_, v_inst_2108_, v_inst_2109_, v_inst_2110_, v_inst_2111_, v_matcherApp_2112_, v_useSplitter_boxed_2117_, v___f_2114_, v___f_2115_, v_absMotiveBody_2116_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(lean_object* v_inst_2120_, lean_object* v_inst_2121_, lean_object* v_inst_2122_, lean_object* v_inst_2123_, lean_object* v_inst_2124_, lean_object* v_info_2125_, lean_object* v_resTy_2126_, lean_object* v_onAlt_2127_, uint8_t v_useSplitter_2128_){
_start:
{
switch(lean_obj_tag(v_info_2125_))
{
case 0:
{
lean_object* v_toApplicative_2129_; lean_object* v_toBind_2130_; lean_object* v_toPure_2131_; lean_object* v_e_2132_; lean_object* v___x_2133_; lean_object* v___f_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v_toApplicative_2129_ = lean_ctor_get(v_inst_2122_, 0);
lean_dec_ref(v_inst_2124_);
lean_dec_ref(v_inst_2123_);
v_toBind_2130_ = lean_ctor_get(v_inst_2122_, 1);
lean_inc_n(v_toBind_2130_, 2);
v_toPure_2131_ = lean_ctor_get(v_toApplicative_2129_, 1);
lean_inc(v_toPure_2131_);
v_e_2132_ = lean_ctor_get(v_info_2125_, 0);
lean_inc_ref(v_e_2132_);
lean_dec_ref_known(v_info_2125_, 1);
v___x_2133_ = lean_box(v_useSplitter_2128_);
lean_inc(v_inst_2120_);
lean_inc_ref(v_resTy_2126_);
v___f_2134_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed), 10, 9);
lean_closure_set(v___f_2134_, 0, v_e_2132_);
lean_closure_set(v___f_2134_, 1, v___x_2133_);
lean_closure_set(v___f_2134_, 2, v_resTy_2126_);
lean_closure_set(v___f_2134_, 3, v_toPure_2131_);
lean_closure_set(v___f_2134_, 4, v_onAlt_2127_);
lean_closure_set(v___f_2134_, 5, v_toBind_2130_);
lean_closure_set(v___f_2134_, 6, v_inst_2120_);
lean_closure_set(v___f_2134_, 7, v_inst_2121_);
lean_closure_set(v___f_2134_, 8, v_inst_2122_);
v___x_2135_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2135_, 0, v_resTy_2126_);
v___x_2136_ = lean_apply_2(v_inst_2120_, lean_box(0), v___x_2135_);
v___x_2137_ = lean_apply_4(v_toBind_2130_, lean_box(0), lean_box(0), v___x_2136_, v___f_2134_);
return v___x_2137_;
}
case 1:
{
lean_object* v_toApplicative_2138_; lean_object* v_toBind_2139_; lean_object* v_toPure_2140_; lean_object* v_e_2141_; lean_object* v___f_2142_; lean_object* v___f_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v_toApplicative_2138_ = lean_ctor_get(v_inst_2122_, 0);
lean_dec_ref(v_inst_2124_);
lean_dec_ref(v_inst_2123_);
v_toBind_2139_ = lean_ctor_get(v_inst_2122_, 1);
lean_inc_n(v_toBind_2139_, 3);
v_toPure_2140_ = lean_ctor_get(v_toApplicative_2138_, 1);
lean_inc(v_toPure_2140_);
v_e_2141_ = lean_ctor_get(v_info_2125_, 0);
lean_inc_ref(v_e_2141_);
lean_dec_ref_known(v_info_2125_, 1);
lean_inc_ref_n(v_resTy_2126_, 2);
lean_inc(v_onAlt_2127_);
lean_inc_n(v_inst_2120_, 2);
v___f_2142_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11), 5, 4);
lean_closure_set(v___f_2142_, 0, v_inst_2120_);
lean_closure_set(v___f_2142_, 1, v_onAlt_2127_);
lean_closure_set(v___f_2142_, 2, v_resTy_2126_);
lean_closure_set(v___f_2142_, 3, v_toBind_2139_);
v___f_2143_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed), 10, 9);
lean_closure_set(v___f_2143_, 0, v_inst_2120_);
lean_closure_set(v___f_2143_, 1, v_onAlt_2127_);
lean_closure_set(v___f_2143_, 2, v_resTy_2126_);
lean_closure_set(v___f_2143_, 3, v_toBind_2139_);
lean_closure_set(v___f_2143_, 4, v_e_2141_);
lean_closure_set(v___f_2143_, 5, v_toPure_2140_);
lean_closure_set(v___f_2143_, 6, v_inst_2121_);
lean_closure_set(v___f_2143_, 7, v_inst_2122_);
lean_closure_set(v___f_2143_, 8, v___f_2142_);
v___x_2144_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2144_, 0, v_resTy_2126_);
v___x_2145_ = lean_apply_2(v_inst_2120_, lean_box(0), v___x_2144_);
v___x_2146_ = lean_apply_4(v_toBind_2139_, lean_box(0), lean_box(0), v___x_2145_, v___f_2143_);
return v___x_2146_;
}
case 2:
{
lean_object* v_toApplicative_2147_; lean_object* v_toBind_2148_; lean_object* v_toPure_2149_; lean_object* v_e_2150_; lean_object* v___x_2151_; lean_object* v___f_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v_toApplicative_2147_ = lean_ctor_get(v_inst_2122_, 0);
lean_dec_ref(v_inst_2124_);
lean_dec_ref(v_inst_2123_);
v_toBind_2148_ = lean_ctor_get(v_inst_2122_, 1);
lean_inc_n(v_toBind_2148_, 2);
v_toPure_2149_ = lean_ctor_get(v_toApplicative_2147_, 1);
lean_inc(v_toPure_2149_);
v_e_2150_ = lean_ctor_get(v_info_2125_, 0);
lean_inc_ref(v_e_2150_);
lean_dec_ref_known(v_info_2125_, 1);
v___x_2151_ = lean_box(v_useSplitter_2128_);
lean_inc(v_inst_2120_);
lean_inc_ref(v_resTy_2126_);
v___f_2152_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed), 10, 9);
lean_closure_set(v___f_2152_, 0, v_e_2150_);
lean_closure_set(v___f_2152_, 1, v___x_2151_);
lean_closure_set(v___f_2152_, 2, v_resTy_2126_);
lean_closure_set(v___f_2152_, 3, v_toPure_2149_);
lean_closure_set(v___f_2152_, 4, v_onAlt_2127_);
lean_closure_set(v___f_2152_, 5, v_toBind_2148_);
lean_closure_set(v___f_2152_, 6, v_inst_2120_);
lean_closure_set(v___f_2152_, 7, v_inst_2121_);
lean_closure_set(v___f_2152_, 8, v_inst_2122_);
v___x_2153_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2153_, 0, v_resTy_2126_);
v___x_2154_ = lean_apply_2(v_inst_2120_, lean_box(0), v___x_2153_);
v___x_2155_ = lean_apply_4(v_toBind_2148_, lean_box(0), lean_box(0), v___x_2154_, v___f_2152_);
return v___x_2155_;
}
case 3:
{
lean_object* v_toApplicative_2156_; lean_object* v_toBind_2157_; lean_object* v_toPure_2158_; lean_object* v_e_2159_; lean_object* v___x_2160_; lean_object* v___f_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v_toApplicative_2156_ = lean_ctor_get(v_inst_2122_, 0);
lean_dec_ref(v_inst_2124_);
lean_dec_ref(v_inst_2123_);
v_toBind_2157_ = lean_ctor_get(v_inst_2122_, 1);
lean_inc_n(v_toBind_2157_, 2);
v_toPure_2158_ = lean_ctor_get(v_toApplicative_2156_, 1);
lean_inc(v_toPure_2158_);
v_e_2159_ = lean_ctor_get(v_info_2125_, 0);
lean_inc_ref(v_e_2159_);
lean_dec_ref_known(v_info_2125_, 1);
v___x_2160_ = lean_box(v_useSplitter_2128_);
lean_inc(v_inst_2120_);
lean_inc_ref(v_resTy_2126_);
v___f_2161_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__27___boxed), 10, 9);
lean_closure_set(v___f_2161_, 0, v_e_2159_);
lean_closure_set(v___f_2161_, 1, v___x_2160_);
lean_closure_set(v___f_2161_, 2, v_resTy_2126_);
lean_closure_set(v___f_2161_, 3, v_toPure_2158_);
lean_closure_set(v___f_2161_, 4, v_onAlt_2127_);
lean_closure_set(v___f_2161_, 5, v_toBind_2157_);
lean_closure_set(v___f_2161_, 6, v_inst_2120_);
lean_closure_set(v___f_2161_, 7, v_inst_2121_);
lean_closure_set(v___f_2161_, 8, v_inst_2122_);
v___x_2162_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2162_, 0, v_resTy_2126_);
v___x_2163_ = lean_apply_2(v_inst_2120_, lean_box(0), v___x_2162_);
v___x_2164_ = lean_apply_4(v_toBind_2157_, lean_box(0), lean_box(0), v___x_2163_, v___f_2161_);
return v___x_2164_;
}
case 4:
{
lean_object* v_toApplicative_2165_; lean_object* v_toBind_2166_; lean_object* v_toPure_2167_; lean_object* v_e_2168_; lean_object* v___f_2169_; lean_object* v___f_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v_toApplicative_2165_ = lean_ctor_get(v_inst_2122_, 0);
lean_dec_ref(v_inst_2124_);
lean_dec_ref(v_inst_2123_);
v_toBind_2166_ = lean_ctor_get(v_inst_2122_, 1);
lean_inc_n(v_toBind_2166_, 3);
v_toPure_2167_ = lean_ctor_get(v_toApplicative_2165_, 1);
lean_inc(v_toPure_2167_);
v_e_2168_ = lean_ctor_get(v_info_2125_, 0);
lean_inc_ref(v_e_2168_);
lean_dec_ref_known(v_info_2125_, 1);
lean_inc_ref_n(v_resTy_2126_, 2);
lean_inc(v_onAlt_2127_);
lean_inc_n(v_inst_2120_, 2);
v___f_2169_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11), 5, 4);
lean_closure_set(v___f_2169_, 0, v_inst_2120_);
lean_closure_set(v___f_2169_, 1, v_onAlt_2127_);
lean_closure_set(v___f_2169_, 2, v_resTy_2126_);
lean_closure_set(v___f_2169_, 3, v_toBind_2166_);
v___f_2170_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__36___boxed), 10, 9);
lean_closure_set(v___f_2170_, 0, v_inst_2120_);
lean_closure_set(v___f_2170_, 1, v_onAlt_2127_);
lean_closure_set(v___f_2170_, 2, v_resTy_2126_);
lean_closure_set(v___f_2170_, 3, v_toBind_2166_);
lean_closure_set(v___f_2170_, 4, v_e_2168_);
lean_closure_set(v___f_2170_, 5, v_toPure_2167_);
lean_closure_set(v___f_2170_, 6, v_inst_2121_);
lean_closure_set(v___f_2170_, 7, v_inst_2122_);
lean_closure_set(v___f_2170_, 8, v___f_2169_);
v___x_2171_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2171_, 0, v_resTy_2126_);
v___x_2172_ = lean_apply_2(v_inst_2120_, lean_box(0), v___x_2171_);
v___x_2173_ = lean_apply_4(v_toBind_2166_, lean_box(0), lean_box(0), v___x_2172_, v___f_2170_);
return v___x_2173_;
}
case 5:
{
lean_object* v_toApplicative_2174_; lean_object* v_toBind_2175_; lean_object* v_toPure_2176_; lean_object* v_e_2177_; lean_object* v___f_2178_; lean_object* v___f_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v_toApplicative_2174_ = lean_ctor_get(v_inst_2122_, 0);
lean_dec_ref(v_inst_2124_);
lean_dec_ref(v_inst_2123_);
v_toBind_2175_ = lean_ctor_get(v_inst_2122_, 1);
lean_inc_n(v_toBind_2175_, 3);
v_toPure_2176_ = lean_ctor_get(v_toApplicative_2174_, 1);
lean_inc(v_toPure_2176_);
v_e_2177_ = lean_ctor_get(v_info_2125_, 0);
lean_inc_ref(v_e_2177_);
lean_dec_ref_known(v_info_2125_, 1);
lean_inc_ref_n(v_resTy_2126_, 2);
lean_inc(v_onAlt_2127_);
lean_inc_n(v_inst_2120_, 2);
v___f_2178_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11), 5, 4);
lean_closure_set(v___f_2178_, 0, v_inst_2120_);
lean_closure_set(v___f_2178_, 1, v_onAlt_2127_);
lean_closure_set(v___f_2178_, 2, v_resTy_2126_);
lean_closure_set(v___f_2178_, 3, v_toBind_2175_);
v___f_2179_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__39___boxed), 10, 9);
lean_closure_set(v___f_2179_, 0, v_inst_2120_);
lean_closure_set(v___f_2179_, 1, v_onAlt_2127_);
lean_closure_set(v___f_2179_, 2, v_resTy_2126_);
lean_closure_set(v___f_2179_, 3, v_toBind_2175_);
lean_closure_set(v___f_2179_, 4, v_e_2177_);
lean_closure_set(v___f_2179_, 5, v_toPure_2176_);
lean_closure_set(v___f_2179_, 6, v_inst_2121_);
lean_closure_set(v___f_2179_, 7, v_inst_2122_);
lean_closure_set(v___f_2179_, 8, v___f_2178_);
v___x_2180_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2180_, 0, v_resTy_2126_);
v___x_2181_ = lean_apply_2(v_inst_2120_, lean_box(0), v___x_2180_);
v___x_2182_ = lean_apply_4(v_toBind_2175_, lean_box(0), lean_box(0), v___x_2181_, v___f_2179_);
return v___x_2182_;
}
default: 
{
lean_object* v_toApplicative_2183_; lean_object* v_matcherApp_2184_; lean_object* v_toBind_2185_; lean_object* v_toFunctor_2186_; lean_object* v_toPure_2187_; lean_object* v_toMatcherInfo_2188_; lean_object* v_discrs_2189_; lean_object* v___f_2190_; lean_object* v___f_2191_; lean_object* v___f_2192_; lean_object* v___x_2193_; size_t v_sz_2194_; size_t v___x_2195_; lean_object* v_mask_2196_; lean_object* v___x_2197_; lean_object* v___f_2198_; lean_object* v_maskedDiscrs_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v_toApplicative_2183_ = lean_ctor_get(v_inst_2122_, 0);
v_matcherApp_2184_ = lean_ctor_get(v_info_2125_, 0);
lean_inc_ref(v_matcherApp_2184_);
lean_dec_ref_known(v_info_2125_, 1);
v_toBind_2185_ = lean_ctor_get(v_inst_2122_, 1);
lean_inc(v_toBind_2185_);
v_toFunctor_2186_ = lean_ctor_get(v_toApplicative_2183_, 0);
lean_inc_ref(v_toFunctor_2186_);
v_toPure_2187_ = lean_ctor_get(v_toApplicative_2183_, 1);
lean_inc(v_toPure_2187_);
v_toMatcherInfo_2188_ = lean_ctor_get(v_matcherApp_2184_, 0);
v_discrs_2189_ = lean_ctor_get(v_matcherApp_2184_, 5);
lean_inc_ref_n(v_discrs_2189_, 2);
v___f_2190_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0));
v___f_2191_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__26___boxed), 5, 1);
lean_closure_set(v___f_2191_, 0, v_onAlt_2127_);
lean_inc_ref(v_toMatcherInfo_2188_);
v___f_2192_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__29___boxed), 4, 1);
lean_closure_set(v___f_2192_, 0, v_toMatcherInfo_2188_);
v___x_2193_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__9));
v_sz_2194_ = lean_array_size(v_discrs_2189_);
v___x_2195_ = ((size_t)0ULL);
v_mask_2196_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2193_, v_discrs_2189_, v___f_2192_, v_sz_2194_, v___x_2195_, v_discrs_2189_);
v___x_2197_ = lean_box(v_useSplitter_2128_);
lean_inc(v_inst_2120_);
lean_inc(v_mask_2196_);
v___f_2198_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31___boxed), 13, 12);
lean_closure_set(v___f_2198_, 0, v_toFunctor_2186_);
lean_closure_set(v___f_2198_, 1, v_mask_2196_);
lean_closure_set(v___f_2198_, 2, v_toPure_2187_);
lean_closure_set(v___f_2198_, 3, v_inst_2120_);
lean_closure_set(v___f_2198_, 4, v_inst_2121_);
lean_closure_set(v___f_2198_, 5, v_inst_2122_);
lean_closure_set(v___f_2198_, 6, v_inst_2123_);
lean_closure_set(v___f_2198_, 7, v_inst_2124_);
lean_closure_set(v___f_2198_, 8, v_matcherApp_2184_);
lean_closure_set(v___f_2198_, 9, v___x_2197_);
lean_closure_set(v___f_2198_, 10, v___f_2191_);
lean_closure_set(v___f_2198_, 11, v___f_2190_);
v_maskedDiscrs_2199_ = l_Lean_Array_mask___redArg(v_mask_2196_, v_discrs_2189_);
lean_dec(v_mask_2196_);
v___x_2200_ = lean_alloc_closure((void*)(l_Lean_Expr_abstractM___boxed), 7, 2);
lean_closure_set(v___x_2200_, 0, v_resTy_2126_);
lean_closure_set(v___x_2200_, 1, v_maskedDiscrs_2199_);
v___x_2201_ = lean_apply_2(v_inst_2120_, lean_box(0), v___x_2200_);
v___x_2202_ = lean_apply_4(v_toBind_2185_, lean_box(0), lean_box(0), v___x_2201_, v___f_2198_);
return v___x_2202_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___boxed(lean_object* v_inst_2203_, lean_object* v_inst_2204_, lean_object* v_inst_2205_, lean_object* v_inst_2206_, lean_object* v_inst_2207_, lean_object* v_info_2208_, lean_object* v_resTy_2209_, lean_object* v_onAlt_2210_, lean_object* v_useSplitter_2211_){
_start:
{
uint8_t v_useSplitter_boxed_2212_; lean_object* v_res_2213_; 
v_useSplitter_boxed_2212_ = lean_unbox(v_useSplitter_2211_);
v_res_2213_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(v_inst_2203_, v_inst_2204_, v_inst_2205_, v_inst_2206_, v_inst_2207_, v_info_2208_, v_resTy_2209_, v_onAlt_2210_, v_useSplitter_boxed_2212_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(lean_object* v_n_2214_, lean_object* v_inst_2215_, lean_object* v_inst_2216_, lean_object* v_inst_2217_, lean_object* v_inst_2218_, lean_object* v_inst_2219_, lean_object* v_inst_2220_, lean_object* v_inst_2221_, lean_object* v_inst_2222_, lean_object* v_info_2223_, lean_object* v_resTy_2224_, lean_object* v_onAlt_2225_, uint8_t v_useSplitter_2226_){
_start:
{
lean_object* v___x_2227_; 
v___x_2227_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(v_inst_2215_, v_inst_2216_, v_inst_2217_, v_inst_2218_, v_inst_2219_, v_info_2223_, v_resTy_2224_, v_onAlt_2225_, v_useSplitter_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___boxed(lean_object* v_n_2228_, lean_object* v_inst_2229_, lean_object* v_inst_2230_, lean_object* v_inst_2231_, lean_object* v_inst_2232_, lean_object* v_inst_2233_, lean_object* v_inst_2234_, lean_object* v_inst_2235_, lean_object* v_inst_2236_, lean_object* v_info_2237_, lean_object* v_resTy_2238_, lean_object* v_onAlt_2239_, lean_object* v_useSplitter_2240_){
_start:
{
uint8_t v_useSplitter_boxed_2241_; lean_object* v_res_2242_; 
v_useSplitter_boxed_2241_ = lean_unbox(v_useSplitter_2240_);
v_res_2242_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(v_n_2228_, v_inst_2229_, v_inst_2230_, v_inst_2231_, v_inst_2232_, v_inst_2233_, v_inst_2234_, v_inst_2235_, v_inst_2236_, v_info_2237_, v_resTy_2238_, v_onAlt_2239_, v_useSplitter_boxed_2241_);
lean_dec_ref(v_inst_2236_);
lean_dec(v_inst_2235_);
lean_dec_ref(v_inst_2234_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(lean_object* v_info_2243_, lean_object* v_e_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_){
_start:
{
if (lean_obj_tag(v_info_2243_) == 6)
{
lean_object* v_matcherApp_2253_; lean_object* v_toMatcherInfo_2254_; lean_object* v___x_2255_; 
v_matcherApp_2253_ = lean_ctor_get(v_info_2243_, 0);
lean_inc_ref(v_matcherApp_2253_);
lean_dec_ref_known(v_info_2243_, 1);
v_toMatcherInfo_2254_ = lean_ctor_get(v_matcherApp_2253_, 0);
lean_inc_ref(v_toMatcherInfo_2254_);
lean_dec_ref(v_matcherApp_2253_);
v___x_2255_ = l_Lean_Meta_Simp_simpMatchDiscrs_x3f(v_toMatcherInfo_2254_, v_e_2244_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
return v___x_2255_;
}
else
{
lean_object* v___x_2256_; lean_object* v___x_2257_; 
lean_dec_ref(v_e_2244_);
lean_dec_ref(v_info_2243_);
v___x_2256_ = lean_box(0);
v___x_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2256_);
return v___x_2257_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f___boxed(lean_object* v_info_2258_, lean_object* v_e_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(v_info_2258_, v_e_2259_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_);
lean_dec(v_a_2266_);
lean_dec_ref(v_a_2265_);
lean_dec(v_a_2264_);
lean_dec_ref(v_a_2263_);
lean_dec(v_a_2262_);
lean_dec_ref(v_a_2261_);
lean_dec(v_a_2260_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(lean_object* v_declName_2269_, lean_object* v___y_2270_){
_start:
{
lean_object* v___x_2272_; lean_object* v_env_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2272_ = lean_st_ref_get(v___y_2270_);
v_env_2273_ = lean_ctor_get(v___x_2272_, 0);
lean_inc_ref(v_env_2273_);
lean_dec(v___x_2272_);
v___x_2274_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_2273_, v_declName_2269_);
v___x_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg___boxed(lean_object* v_declName_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2276_, v___y_2277_);
lean_dec(v___y_2277_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(lean_object* v_msgData_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v___x_2286_; lean_object* v_env_2287_; uint8_t v___x_2288_; lean_object* v_env_2289_; lean_object* v___x_2290_; lean_object* v_toCold_2291_; lean_object* v_mctx_2292_; lean_object* v_lctx_2293_; lean_object* v_options_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2286_ = lean_st_ref_get(v___y_2284_);
v_env_2287_ = lean_ctor_get(v___x_2286_, 0);
lean_inc_ref(v_env_2287_);
lean_dec(v___x_2286_);
v___x_2288_ = 0;
v_env_2289_ = l_Lean_Environment_setRecordingDeps(v_env_2287_, v___x_2288_);
v___x_2290_ = lean_st_ref_get(v___y_2282_);
v_toCold_2291_ = lean_ctor_get(v___y_2283_, 0);
v_mctx_2292_ = lean_ctor_get(v___x_2290_, 0);
lean_inc_ref(v_mctx_2292_);
lean_dec(v___x_2290_);
v_lctx_2293_ = lean_ctor_get(v___y_2281_, 2);
v_options_2294_ = lean_ctor_get(v_toCold_2291_, 2);
lean_inc_ref(v_options_2294_);
lean_inc_ref(v_lctx_2293_);
v___x_2295_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2295_, 0, v_env_2289_);
lean_ctor_set(v___x_2295_, 1, v_mctx_2292_);
lean_ctor_set(v___x_2295_, 2, v_lctx_2293_);
lean_ctor_set(v___x_2295_, 3, v_options_2294_);
v___x_2296_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2295_);
lean_ctor_set(v___x_2296_, 1, v_msgData_2280_);
v___x_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11___boxed(lean_object* v_msgData_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v_res_2304_; 
v_res_2304_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(v_msgData_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(lean_object* v_msg_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_){
_start:
{
lean_object* v_ref_2311_; lean_object* v___x_2312_; lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2321_; 
v_ref_2311_ = lean_ctor_get(v___y_2308_, 2);
v___x_2312_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(v_msg_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_);
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2315_ = v___x_2312_;
v_isShared_2316_ = v_isSharedCheck_2321_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2312_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2321_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2317_; lean_object* v___x_2319_; 
lean_inc(v_ref_2311_);
v___x_2317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2317_, 0, v_ref_2311_);
lean_ctor_set(v___x_2317_, 1, v_a_2313_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set_tag(v___x_2315_, 1);
lean_ctor_set(v___x_2315_, 0, v___x_2317_);
v___x_2319_ = v___x_2315_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v___x_2317_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg___boxed(lean_object* v_msg_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_){
_start:
{
lean_object* v_res_2328_; 
v_res_2328_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_);
lean_dec(v___y_2326_);
lean_dec_ref(v___y_2325_);
lean_dec(v___y_2324_);
lean_dec_ref(v___y_2323_);
return v_res_2328_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(lean_object* v_ref_2329_, lean_object* v_msg_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v_toCold_2336_; lean_object* v_currRecDepth_2337_; lean_object* v_ref_2338_; uint16_t v_optionFlags_2339_; uint8_t v_suppressElabErrors_2340_; uint8_t v_checkDeprecated_2341_; uint8_t v_isRecordingDeps_2342_; lean_object* v_ref_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; 
v_toCold_2336_ = lean_ctor_get(v___y_2333_, 0);
v_currRecDepth_2337_ = lean_ctor_get(v___y_2333_, 1);
v_ref_2338_ = lean_ctor_get(v___y_2333_, 2);
v_optionFlags_2339_ = lean_ctor_get_uint16(v___y_2333_, sizeof(void*)*3);
v_suppressElabErrors_2340_ = lean_ctor_get_uint8(v___y_2333_, sizeof(void*)*3 + 2);
v_checkDeprecated_2341_ = lean_ctor_get_uint8(v___y_2333_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2342_ = lean_ctor_get_uint8(v___y_2333_, sizeof(void*)*3 + 4);
v_ref_2343_ = l_Lean_replaceRef(v_ref_2329_, v_ref_2338_);
lean_inc(v_currRecDepth_2337_);
lean_inc_ref(v_toCold_2336_);
v___x_2344_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2344_, 0, v_toCold_2336_);
lean_ctor_set(v___x_2344_, 1, v_currRecDepth_2337_);
lean_ctor_set(v___x_2344_, 2, v_ref_2343_);
lean_ctor_set_uint16(v___x_2344_, sizeof(void*)*3, v_optionFlags_2339_);
lean_ctor_set_uint8(v___x_2344_, sizeof(void*)*3 + 2, v_suppressElabErrors_2340_);
lean_ctor_set_uint8(v___x_2344_, sizeof(void*)*3 + 3, v_checkDeprecated_2341_);
lean_ctor_set_uint8(v___x_2344_, sizeof(void*)*3 + 4, v_isRecordingDeps_2342_);
v___x_2345_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_2330_, v___y_2331_, v___y_2332_, v___x_2344_, v___y_2334_);
lean_dec_ref_known(v___x_2344_, 3);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg___boxed(lean_object* v_ref_2346_, lean_object* v_msg_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_){
_start:
{
lean_object* v_res_2353_; 
v_res_2353_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_2346_, v_msg_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_);
lean_dec(v___y_2351_);
lean_dec_ref(v___y_2350_);
lean_dec(v___y_2349_);
lean_dec_ref(v___y_2348_);
lean_dec(v_ref_2346_);
return v_res_2353_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_2354_; 
v___x_2354_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2354_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2355_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0);
v___x_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2355_);
return v___x_2356_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2357_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_2358_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_2359_ = lean_unsigned_to_nat(0u);
v___x_2360_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2359_);
lean_ctor_set(v___x_2360_, 1, v___x_2359_);
lean_ctor_set(v___x_2360_, 2, v___x_2359_);
lean_ctor_set(v___x_2360_, 3, v___x_2359_);
lean_ctor_set(v___x_2360_, 4, v___x_2358_);
lean_ctor_set(v___x_2360_, 5, v___x_2358_);
lean_ctor_set(v___x_2360_, 6, v___x_2358_);
lean_ctor_set(v___x_2360_, 7, v___x_2358_);
lean_ctor_set(v___x_2360_, 8, v___x_2358_);
lean_ctor_set(v___x_2360_, 9, v___x_2358_);
lean_ctor_set(v___x_2360_, 10, v___x_2358_);
lean_ctor_set(v___x_2360_, 11, v___x_2357_);
return v___x_2360_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2361_ = lean_unsigned_to_nat(32u);
v___x_2362_ = lean_mk_empty_array_with_capacity(v___x_2361_);
v___x_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
return v___x_2363_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4(void){
_start:
{
size_t v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2364_ = ((size_t)5ULL);
v___x_2365_ = lean_unsigned_to_nat(0u);
v___x_2366_ = lean_unsigned_to_nat(32u);
v___x_2367_ = lean_mk_empty_array_with_capacity(v___x_2366_);
v___x_2368_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3);
v___x_2369_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2369_, 0, v___x_2368_);
lean_ctor_set(v___x_2369_, 1, v___x_2367_);
lean_ctor_set(v___x_2369_, 2, v___x_2365_);
lean_ctor_set(v___x_2369_, 3, v___x_2365_);
lean_ctor_set_usize(v___x_2369_, 4, v___x_2364_);
return v___x_2369_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2370_ = lean_box(1);
v___x_2371_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4);
v___x_2372_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_2373_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
lean_ctor_set(v___x_2373_, 1, v___x_2371_);
lean_ctor_set(v___x_2373_, 2, v___x_2370_);
return v___x_2373_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7(void){
_start:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2375_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6));
v___x_2376_ = l_Lean_stringToMessageData(v___x_2375_);
return v___x_2376_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9(void){
_start:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2378_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8));
v___x_2379_ = l_Lean_stringToMessageData(v___x_2378_);
return v___x_2379_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11(void){
_start:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2381_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10));
v___x_2382_ = l_Lean_stringToMessageData(v___x_2381_);
return v___x_2382_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13(void){
_start:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2384_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12));
v___x_2385_ = l_Lean_stringToMessageData(v___x_2384_);
return v___x_2385_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15(void){
_start:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2387_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14));
v___x_2388_ = l_Lean_stringToMessageData(v___x_2387_);
return v___x_2388_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17(void){
_start:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2390_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16));
v___x_2391_ = l_Lean_stringToMessageData(v___x_2390_);
return v___x_2391_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19(void){
_start:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18));
v___x_2394_ = l_Lean_stringToMessageData(v___x_2393_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(lean_object* v_msg_2395_, lean_object* v_declHint_2396_, lean_object* v___y_2397_){
_start:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v_env_2401_; uint8_t v___x_2402_; 
v___x_2399_ = lean_box(0);
v___x_2400_ = lean_st_ref_get(v___y_2397_);
v_env_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc_ref(v_env_2401_);
lean_dec(v___x_2400_);
v___x_2402_ = l_Lean_Name_isAnonymous(v_declHint_2396_);
if (v___x_2402_ == 0)
{
uint8_t v_isExporting_2403_; 
v_isExporting_2403_ = lean_ctor_get_uint8(v_env_2401_, sizeof(void*)*13);
if (v_isExporting_2403_ == 0)
{
lean_object* v___x_2404_; 
lean_dec_ref(v_env_2401_);
lean_dec(v_declHint_2396_);
v___x_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2404_, 0, v_msg_2395_);
return v___x_2404_;
}
else
{
lean_object* v___x_2405_; uint8_t v___x_2406_; 
lean_inc_ref(v_env_2401_);
v___x_2405_ = l_Lean_Environment_setExporting(v_env_2401_, v___x_2402_);
lean_inc(v_declHint_2396_);
lean_inc_ref(v___x_2405_);
v___x_2406_ = l_Lean_Environment_contains(v___x_2405_, v_declHint_2396_, v_isExporting_2403_);
if (v___x_2406_ == 0)
{
lean_object* v___x_2407_; 
lean_dec_ref(v___x_2405_);
lean_dec_ref(v_env_2401_);
lean_dec(v_declHint_2396_);
v___x_2407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2407_, 0, v_msg_2395_);
return v___x_2407_;
}
else
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v_c_2413_; lean_object* v___x_2414_; 
v___x_2408_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2);
v___x_2409_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5);
v___x_2410_ = l_Lean_Options_empty;
lean_inc_ref(v___x_2405_);
v___x_2411_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2405_);
lean_ctor_set(v___x_2411_, 1, v___x_2408_);
lean_ctor_set(v___x_2411_, 2, v___x_2409_);
lean_ctor_set(v___x_2411_, 3, v___x_2410_);
lean_inc(v_declHint_2396_);
v___x_2412_ = l_Lean_MessageData_ofConstName(v_declHint_2396_, v___x_2402_);
v_c_2413_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2413_, 0, v___x_2411_);
lean_ctor_set(v_c_2413_, 1, v___x_2412_);
v___x_2414_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_2405_, v_declHint_2396_);
lean_dec_ref(v___x_2405_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
lean_dec_ref(v_env_2401_);
lean_dec(v_declHint_2396_);
v___x_2415_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_2416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2416_, 0, v___x_2415_);
lean_ctor_set(v___x_2416_, 1, v_c_2413_);
v___x_2417_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9);
v___x_2418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2416_);
lean_ctor_set(v___x_2418_, 1, v___x_2417_);
v___x_2419_ = l_Lean_MessageData_note(v___x_2418_);
v___x_2420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2420_, 0, v_msg_2395_);
lean_ctor_set(v___x_2420_, 1, v___x_2419_);
v___x_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
return v___x_2421_;
}
else
{
lean_object* v_val_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2456_; 
v_val_2422_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2424_ = v___x_2414_;
v_isShared_2425_ = v_isSharedCheck_2456_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_val_2422_);
lean_dec(v___x_2414_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2456_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2426_; lean_object* v_moduleNames_2427_; lean_object* v_mod_2428_; uint8_t v___x_2429_; 
v___x_2426_ = l_Lean_Environment_header(v_env_2401_);
lean_dec_ref(v_env_2401_);
v_moduleNames_2427_ = lean_ctor_get(v___x_2426_, 4);
lean_inc_ref(v_moduleNames_2427_);
lean_dec_ref(v___x_2426_);
v_mod_2428_ = lean_array_get(v___x_2399_, v_moduleNames_2427_, v_val_2422_);
lean_dec(v_val_2422_);
lean_dec_ref(v_moduleNames_2427_);
v___x_2429_ = l_Lean_isPrivateName(v_declHint_2396_);
lean_dec(v_declHint_2396_);
if (v___x_2429_ == 0)
{
lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2441_; 
v___x_2430_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11);
v___x_2431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2430_);
lean_ctor_set(v___x_2431_, 1, v_c_2413_);
v___x_2432_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13);
v___x_2433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2431_);
lean_ctor_set(v___x_2433_, 1, v___x_2432_);
v___x_2434_ = l_Lean_MessageData_ofName(v_mod_2428_);
v___x_2435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2433_);
lean_ctor_set(v___x_2435_, 1, v___x_2434_);
v___x_2436_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15);
v___x_2437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2437_, 0, v___x_2435_);
lean_ctor_set(v___x_2437_, 1, v___x_2436_);
v___x_2438_ = l_Lean_MessageData_note(v___x_2437_);
v___x_2439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2439_, 0, v_msg_2395_);
lean_ctor_set(v___x_2439_, 1, v___x_2438_);
if (v_isShared_2425_ == 0)
{
lean_ctor_set_tag(v___x_2424_, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2439_);
v___x_2441_ = v___x_2424_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2439_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
else
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2454_; 
v___x_2443_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_2444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2443_);
lean_ctor_set(v___x_2444_, 1, v_c_2413_);
v___x_2445_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17);
v___x_2446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2444_);
lean_ctor_set(v___x_2446_, 1, v___x_2445_);
v___x_2447_ = l_Lean_MessageData_ofName(v_mod_2428_);
v___x_2448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2446_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
v___x_2449_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19);
v___x_2450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2448_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = l_Lean_MessageData_note(v___x_2450_);
v___x_2452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2452_, 0, v_msg_2395_);
lean_ctor_set(v___x_2452_, 1, v___x_2451_);
if (v_isShared_2425_ == 0)
{
lean_ctor_set_tag(v___x_2424_, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2452_);
v___x_2454_ = v___x_2424_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v___x_2452_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2457_; 
lean_dec_ref(v_env_2401_);
lean_dec(v_declHint_2396_);
v___x_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2457_, 0, v_msg_2395_);
return v___x_2457_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_msg_2458_, lean_object* v_declHint_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v_res_2462_; 
v_res_2462_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_2458_, v_declHint_2459_, v___y_2460_);
lean_dec(v___y_2460_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(lean_object* v_msg_2463_, lean_object* v_declHint_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
lean_object* v___x_2470_; lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2480_; 
v___x_2470_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_2463_, v_declHint_2464_, v___y_2468_);
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
v_isSharedCheck_2480_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2480_ == 0)
{
v___x_2473_ = v___x_2470_;
v_isShared_2474_ = v_isSharedCheck_2480_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v___x_2470_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2480_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2478_; 
v___x_2475_ = l_Lean_unknownIdentifierMessageTag;
v___x_2476_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2476_, 0, v___x_2475_);
lean_ctor_set(v___x_2476_, 1, v_a_2471_);
if (v_isShared_2474_ == 0)
{
lean_ctor_set(v___x_2473_, 0, v___x_2476_);
v___x_2478_ = v___x_2473_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2476_);
v___x_2478_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
return v___x_2478_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7___boxed(lean_object* v_msg_2481_, lean_object* v_declHint_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_){
_start:
{
lean_object* v_res_2488_; 
v_res_2488_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(v_msg_2481_, v_declHint_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_);
lean_dec(v___y_2486_);
lean_dec_ref(v___y_2485_);
lean_dec(v___y_2484_);
lean_dec_ref(v___y_2483_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_2489_, lean_object* v_msg_2490_, lean_object* v_declHint_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
lean_object* v___x_2497_; lean_object* v_a_2498_; lean_object* v___x_2499_; 
v___x_2497_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(v_msg_2490_, v_declHint_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
v_a_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_a_2498_);
lean_dec_ref(v___x_2497_);
v___x_2499_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_2489_, v_a_2498_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_2500_, lean_object* v_msg_2501_, lean_object* v_declHint_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2500_, v_msg_2501_, v_declHint_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec(v_ref_2500_);
return v_res_2508_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2510_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0));
v___x_2511_ = l_Lean_stringToMessageData(v___x_2510_);
return v___x_2511_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2513_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2));
v___x_2514_ = l_Lean_stringToMessageData(v___x_2513_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_2515_, lean_object* v_constName_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_){
_start:
{
lean_object* v___x_2522_; uint8_t v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2522_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_2523_ = 0;
lean_inc(v_constName_2516_);
v___x_2524_ = l_Lean_MessageData_ofConstName(v_constName_2516_, v___x_2523_);
v___x_2525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2522_);
lean_ctor_set(v___x_2525_, 1, v___x_2524_);
v___x_2526_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3);
v___x_2527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2525_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2515_, v___x_2527_, v_constName_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_);
return v___x_2528_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_2529_, lean_object* v_constName_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2529_, v_constName_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v_ref_2529_);
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v_ref_2543_; lean_object* v___x_2544_; 
v_ref_2543_ = lean_ctor_get(v___y_2540_, 2);
v___x_2544_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2543_, v_constName_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(lean_object* v_constName_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_){
_start:
{
lean_object* v___x_2558_; lean_object* v_env_2559_; uint8_t v___x_2560_; lean_object* v___x_2561_; 
v___x_2558_ = lean_st_ref_get(v___y_2556_);
v_env_2559_ = lean_ctor_get(v___x_2558_, 0);
lean_inc_ref(v_env_2559_);
lean_dec(v___x_2558_);
v___x_2560_ = 0;
lean_inc(v_constName_2552_);
v___x_2561_ = l_Lean_Environment_find_x3f(v_env_2559_, v_constName_2552_, v___x_2560_);
if (lean_obj_tag(v___x_2561_) == 0)
{
lean_object* v___x_2562_; 
v___x_2562_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_);
return v___x_2562_;
}
else
{
lean_object* v_val_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2570_; 
lean_dec(v_constName_2552_);
v_val_2563_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2565_ = v___x_2561_;
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_val_2563_);
lean_dec(v___x_2561_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2568_; 
if (v_isShared_2566_ == 0)
{
lean_ctor_set_tag(v___x_2565_, 0);
v___x_2568_ = v___x_2565_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_val_2563_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
return v___x_2568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0___boxed(lean_object* v_constName_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_constName_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(lean_object* v_msg_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
lean_object* v___x_2584_; lean_object* v_toApplicative_2585_; lean_object* v_toFunctor_2586_; lean_object* v_toSeq_2587_; lean_object* v_toSeqLeft_2588_; lean_object* v_toSeqRight_2589_; lean_object* v___f_2590_; lean_object* v___f_2591_; lean_object* v___f_2592_; lean_object* v___f_2593_; lean_object* v___x_2594_; lean_object* v___f_2595_; lean_object* v___f_2596_; lean_object* v___f_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v_toApplicative_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2632_; 
v___x_2584_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1);
v_toApplicative_2585_ = lean_ctor_get(v___x_2584_, 0);
v_toFunctor_2586_ = lean_ctor_get(v_toApplicative_2585_, 0);
v_toSeq_2587_ = lean_ctor_get(v_toApplicative_2585_, 2);
v_toSeqLeft_2588_ = lean_ctor_get(v_toApplicative_2585_, 3);
v_toSeqRight_2589_ = lean_ctor_get(v_toApplicative_2585_, 4);
v___f_2590_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2));
v___f_2591_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2586_, 2);
v___f_2592_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2592_, 0, v_toFunctor_2586_);
v___f_2593_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2593_, 0, v_toFunctor_2586_);
v___x_2594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___f_2592_);
lean_ctor_set(v___x_2594_, 1, v___f_2593_);
lean_inc(v_toSeqRight_2589_);
v___f_2595_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2595_, 0, v_toSeqRight_2589_);
lean_inc(v_toSeqLeft_2588_);
v___f_2596_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2596_, 0, v_toSeqLeft_2588_);
lean_inc(v_toSeq_2587_);
v___f_2597_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2597_, 0, v_toSeq_2587_);
v___x_2598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2594_);
lean_ctor_set(v___x_2598_, 1, v___f_2590_);
lean_ctor_set(v___x_2598_, 2, v___f_2597_);
lean_ctor_set(v___x_2598_, 3, v___f_2596_);
lean_ctor_set(v___x_2598_, 4, v___f_2595_);
v___x_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2598_);
lean_ctor_set(v___x_2599_, 1, v___f_2591_);
v___x_2600_ = l_StateRefT_x27_instMonad___redArg(v___x_2599_);
v_toApplicative_2601_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2632_ == 0)
{
lean_object* v_unused_2633_; 
v_unused_2633_ = lean_ctor_get(v___x_2600_, 1);
lean_dec(v_unused_2633_);
v___x_2603_ = v___x_2600_;
v_isShared_2604_ = v_isSharedCheck_2632_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_toApplicative_2601_);
lean_dec(v___x_2600_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2632_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v_toFunctor_2605_; lean_object* v_toSeq_2606_; lean_object* v_toSeqLeft_2607_; lean_object* v_toSeqRight_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2630_; 
v_toFunctor_2605_ = lean_ctor_get(v_toApplicative_2601_, 0);
v_toSeq_2606_ = lean_ctor_get(v_toApplicative_2601_, 2);
v_toSeqLeft_2607_ = lean_ctor_get(v_toApplicative_2601_, 3);
v_toSeqRight_2608_ = lean_ctor_get(v_toApplicative_2601_, 4);
v_isSharedCheck_2630_ = !lean_is_exclusive(v_toApplicative_2601_);
if (v_isSharedCheck_2630_ == 0)
{
lean_object* v_unused_2631_; 
v_unused_2631_ = lean_ctor_get(v_toApplicative_2601_, 1);
lean_dec(v_unused_2631_);
v___x_2610_ = v_toApplicative_2601_;
v_isShared_2611_ = v_isSharedCheck_2630_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_toSeqRight_2608_);
lean_inc(v_toSeqLeft_2607_);
lean_inc(v_toSeq_2606_);
lean_inc(v_toFunctor_2605_);
lean_dec(v_toApplicative_2601_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2630_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___f_2612_; lean_object* v___f_2613_; lean_object* v___f_2614_; lean_object* v___f_2615_; lean_object* v___x_2616_; lean_object* v___f_2617_; lean_object* v___f_2618_; lean_object* v___f_2619_; lean_object* v___x_2621_; 
v___f_2612_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4));
v___f_2613_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5));
lean_inc_ref(v_toFunctor_2605_);
v___f_2614_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2614_, 0, v_toFunctor_2605_);
v___f_2615_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2615_, 0, v_toFunctor_2605_);
v___x_2616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2616_, 0, v___f_2614_);
lean_ctor_set(v___x_2616_, 1, v___f_2615_);
v___f_2617_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2617_, 0, v_toSeqRight_2608_);
v___f_2618_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2618_, 0, v_toSeqLeft_2607_);
v___f_2619_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2619_, 0, v_toSeq_2606_);
if (v_isShared_2611_ == 0)
{
lean_ctor_set(v___x_2610_, 4, v___f_2617_);
lean_ctor_set(v___x_2610_, 3, v___f_2618_);
lean_ctor_set(v___x_2610_, 2, v___f_2619_);
lean_ctor_set(v___x_2610_, 1, v___f_2612_);
lean_ctor_set(v___x_2610_, 0, v___x_2616_);
v___x_2621_ = v___x_2610_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v___x_2616_);
lean_ctor_set(v_reuseFailAlloc_2629_, 1, v___f_2612_);
lean_ctor_set(v_reuseFailAlloc_2629_, 2, v___f_2619_);
lean_ctor_set(v_reuseFailAlloc_2629_, 3, v___f_2618_);
lean_ctor_set(v_reuseFailAlloc_2629_, 4, v___f_2617_);
v___x_2621_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
lean_object* v___x_2623_; 
if (v_isShared_2604_ == 0)
{
lean_ctor_set(v___x_2603_, 1, v___f_2613_);
lean_ctor_set(v___x_2603_, 0, v___x_2621_);
v___x_2623_ = v___x_2603_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v___x_2621_);
lean_ctor_set(v_reuseFailAlloc_2628_, 1, v___f_2613_);
v___x_2623_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_3140__overap_2626_; lean_object* v___x_2627_; 
v___x_2624_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_2625_ = l_instInhabitedOfMonad___redArg(v___x_2623_, v___x_2624_);
v___x_3140__overap_2626_ = lean_panic_fn_borrowed(v___x_2625_, v_msg_2578_);
lean_dec(v___x_2625_);
lean_inc(v___y_2582_);
lean_inc_ref(v___y_2581_);
lean_inc(v___y_2580_);
lean_inc_ref(v___y_2579_);
v___x_2627_ = lean_apply_5(v___x_3140__overap_2626_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, lean_box(0));
return v___x_2627_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1___boxed(lean_object* v_msg_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_){
_start:
{
lean_object* v_res_2640_; 
v_res_2640_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(v_msg_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
lean_dec(v___y_2638_);
lean_dec_ref(v___y_2637_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
return v_res_2640_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2644_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2));
v___x_2645_ = lean_unsigned_to_nat(53u);
v___x_2646_ = lean_unsigned_to_nat(62u);
v___x_2647_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1));
v___x_2648_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0));
v___x_2649_ = l_mkPanicMessageWithDecl(v___x_2648_, v___x_2647_, v___x_2646_, v___x_2645_, v___x_2644_);
return v___x_2649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(size_t v_sz_2650_, size_t v_i_2651_, lean_object* v_bs_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
uint8_t v___x_2658_; 
v___x_2658_ = lean_usize_dec_lt(v_i_2651_, v_sz_2650_);
if (v___x_2658_ == 0)
{
lean_object* v___x_2659_; 
v___x_2659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2659_, 0, v_bs_2652_);
return v___x_2659_;
}
else
{
lean_object* v_v_2660_; lean_object* v___x_2661_; lean_object* v_bs_x27_2662_; lean_object* v_a_2664_; lean_object* v___x_2669_; 
v_v_2660_ = lean_array_uget(v_bs_2652_, v_i_2651_);
v___x_2661_ = lean_unsigned_to_nat(0u);
v_bs_x27_2662_ = lean_array_uset(v_bs_2652_, v_i_2651_, v___x_2661_);
v___x_2669_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_v_2660_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_object* v_a_2670_; 
v_a_2670_ = lean_ctor_get(v___x_2669_, 0);
lean_inc(v_a_2670_);
lean_dec_ref_known(v___x_2669_, 1);
if (lean_obj_tag(v_a_2670_) == 6)
{
lean_object* v_val_2671_; lean_object* v_numFields_2672_; uint8_t v___x_2673_; lean_object* v___x_2674_; 
v_val_2671_ = lean_ctor_get(v_a_2670_, 0);
lean_inc_ref(v_val_2671_);
lean_dec_ref_known(v_a_2670_, 1);
v_numFields_2672_ = lean_ctor_get(v_val_2671_, 4);
lean_inc(v_numFields_2672_);
lean_dec_ref(v_val_2671_);
v___x_2673_ = 0;
v___x_2674_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2674_, 0, v_numFields_2672_);
lean_ctor_set(v___x_2674_, 1, v___x_2661_);
lean_ctor_set_uint8(v___x_2674_, sizeof(void*)*2, v___x_2673_);
v_a_2664_ = v___x_2674_;
goto v___jp_2663_;
}
else
{
lean_object* v___x_2675_; lean_object* v___x_2676_; 
lean_dec(v_a_2670_);
v___x_2675_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3);
v___x_2676_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(v___x_2675_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v_a_2677_; 
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2677_);
lean_dec_ref_known(v___x_2676_, 1);
v_a_2664_ = v_a_2677_;
goto v___jp_2663_;
}
else
{
lean_object* v_a_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2685_; 
lean_dec_ref(v_bs_x27_2662_);
v_a_2678_ = lean_ctor_get(v___x_2676_, 0);
v_isSharedCheck_2685_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2680_ = v___x_2676_;
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_a_2678_);
lean_dec(v___x_2676_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2683_; 
if (v_isShared_2681_ == 0)
{
v___x_2683_ = v___x_2680_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_a_2678_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
}
}
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2693_; 
lean_dec_ref(v_bs_x27_2662_);
v_a_2686_ = lean_ctor_get(v___x_2669_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2688_ = v___x_2669_;
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2669_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2691_; 
if (v_isShared_2689_ == 0)
{
v___x_2691_ = v___x_2688_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2686_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
v___jp_2663_:
{
size_t v___x_2665_; size_t v___x_2666_; lean_object* v___x_2667_; 
v___x_2665_ = ((size_t)1ULL);
v___x_2666_ = lean_usize_add(v_i_2651_, v___x_2665_);
v___x_2667_ = lean_array_uset(v_bs_x27_2662_, v_i_2651_, v_a_2664_);
v_i_2651_ = v___x_2666_;
v_bs_2652_ = v___x_2667_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___boxed(lean_object* v_sz_2694_, lean_object* v_i_2695_, lean_object* v_bs_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_){
_start:
{
size_t v_sz_boxed_2702_; size_t v_i_boxed_2703_; lean_object* v_res_2704_; 
v_sz_boxed_2702_ = lean_unbox_usize(v_sz_2694_);
lean_dec(v_sz_2694_);
v_i_boxed_2703_ = lean_unbox_usize(v_i_2695_);
lean_dec(v_i_2695_);
v_res_2704_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(v_sz_boxed_2702_, v_i_boxed_2703_, v_bs_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_);
lean_dec(v___y_2700_);
lean_dec_ref(v___y_2699_);
lean_dec(v___y_2698_);
lean_dec_ref(v___y_2697_);
return v_res_2704_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2705_; lean_object* v_dummy_2706_; 
v___x_2705_ = lean_box(0);
v_dummy_2706_ = l_Lean_Expr_sort___override(v___x_2705_);
return v_dummy_2706_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2707_ = lean_box(0);
v___x_2708_ = lean_unsigned_to_nat(16u);
v___x_2709_ = lean_mk_array(v___x_2708_, v___x_2707_);
return v___x_2709_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v___x_2710_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1);
v___x_2711_ = lean_unsigned_to_nat(0u);
v___x_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2711_);
lean_ctor_set(v___x_2712_, 1, v___x_2710_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(lean_object* v_e_2715_, uint8_t v_alsoCasesOn_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_){
_start:
{
uint8_t v___x_2725_; 
v___x_2725_ = l_Lean_Expr_isApp(v_e_2715_);
if (v___x_2725_ == 0)
{
lean_object* v___x_2726_; lean_object* v___x_2727_; 
lean_dec_ref(v_e_2715_);
v___x_2726_ = lean_box(0);
v___x_2727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2726_);
return v___x_2727_;
}
else
{
lean_object* v___x_2728_; 
v___x_2728_ = l_Lean_Expr_getAppFn(v_e_2715_);
if (lean_obj_tag(v___x_2728_) == 4)
{
lean_object* v_declName_2729_; lean_object* v_us_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2885_; 
v_declName_2729_ = lean_ctor_get(v___x_2728_, 0);
lean_inc_n(v_declName_2729_, 2);
v_us_2730_ = lean_ctor_get(v___x_2728_, 1);
lean_inc(v_us_2730_);
lean_dec_ref_known(v___x_2728_, 2);
v___x_2731_ = l_Lean_instInhabitedExpr;
v___x_2732_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2729_, v___y_2720_);
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2735_ = v___x_2732_;
v_isShared_2736_ = v_isSharedCheck_2885_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2732_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2885_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
if (lean_obj_tag(v_a_2733_) == 1)
{
lean_object* v_val_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2778_; 
v_val_2737_ = lean_ctor_get(v_a_2733_, 0);
v_isSharedCheck_2778_ = !lean_is_exclusive(v_a_2733_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2739_ = v_a_2733_;
v_isShared_2740_ = v_isSharedCheck_2778_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_val_2737_);
lean_dec(v_a_2733_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2778_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v_dummy_2741_; lean_object* v_nargs_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v_args_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; uint8_t v___x_2749_; 
v_dummy_2741_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0);
v_nargs_2742_ = l_Lean_Expr_getAppNumArgs(v_e_2715_);
lean_inc(v_nargs_2742_);
v___x_2743_ = lean_mk_array(v_nargs_2742_, v_dummy_2741_);
v___x_2744_ = lean_unsigned_to_nat(1u);
v___x_2745_ = lean_nat_sub(v_nargs_2742_, v___x_2744_);
lean_dec(v_nargs_2742_);
v_args_2746_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2715_, v___x_2743_, v___x_2745_);
v___x_2747_ = lean_array_get_size(v_args_2746_);
v___x_2748_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_2737_);
v___x_2749_ = lean_nat_dec_lt(v___x_2747_, v___x_2748_);
lean_dec(v___x_2748_);
if (v___x_2749_ == 0)
{
lean_object* v_numParams_2750_; lean_object* v_numDiscrs_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2769_; 
v_numParams_2750_ = lean_ctor_get(v_val_2737_, 0);
v_numDiscrs_2751_ = lean_ctor_get(v_val_2737_, 1);
v___x_2752_ = lean_array_mk(v_us_2730_);
v___x_2753_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2750_);
v___x_2754_ = l_Array_extract___redArg(v_args_2746_, v___x_2753_, v_numParams_2750_);
v___x_2755_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_2737_);
v___x_2756_ = lean_array_get(v___x_2731_, v_args_2746_, v___x_2755_);
lean_dec(v___x_2755_);
v___x_2757_ = lean_nat_add(v_numParams_2750_, v___x_2744_);
v___x_2758_ = lean_nat_add(v___x_2757_, v_numDiscrs_2751_);
lean_inc(v___x_2758_);
lean_inc_ref_n(v_args_2746_, 2);
v___x_2759_ = l_Array_toSubarray___redArg(v_args_2746_, v___x_2757_, v___x_2758_);
v___x_2760_ = l_Subarray_copy___redArg(v___x_2759_);
v___x_2761_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_2737_);
v___x_2762_ = lean_nat_add(v___x_2758_, v___x_2761_);
lean_dec(v___x_2761_);
lean_inc(v___x_2762_);
v___x_2763_ = l_Array_toSubarray___redArg(v_args_2746_, v___x_2758_, v___x_2762_);
v___x_2764_ = l_Subarray_copy___redArg(v___x_2763_);
v___x_2765_ = l_Array_toSubarray___redArg(v_args_2746_, v___x_2762_, v___x_2747_);
v___x_2766_ = l_Subarray_copy___redArg(v___x_2765_);
v___x_2767_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2767_, 0, v_val_2737_);
lean_ctor_set(v___x_2767_, 1, v_declName_2729_);
lean_ctor_set(v___x_2767_, 2, v___x_2752_);
lean_ctor_set(v___x_2767_, 3, v___x_2754_);
lean_ctor_set(v___x_2767_, 4, v___x_2756_);
lean_ctor_set(v___x_2767_, 5, v___x_2760_);
lean_ctor_set(v___x_2767_, 6, v___x_2764_);
lean_ctor_set(v___x_2767_, 7, v___x_2766_);
if (v_isShared_2740_ == 0)
{
lean_ctor_set(v___x_2739_, 0, v___x_2767_);
v___x_2769_ = v___x_2739_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v___x_2767_);
v___x_2769_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
lean_object* v___x_2771_; 
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v___x_2769_);
v___x_2771_ = v___x_2735_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2769_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
else
{
lean_object* v___x_2774_; lean_object* v___x_2776_; 
lean_dec_ref(v_args_2746_);
lean_del_object(v___x_2739_);
lean_dec(v_val_2737_);
lean_dec(v_us_2730_);
lean_dec(v_declName_2729_);
v___x_2774_ = lean_box(0);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v___x_2774_);
v___x_2776_ = v___x_2735_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v___x_2774_);
v___x_2776_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
return v___x_2776_;
}
}
}
}
else
{
lean_object* v___x_2779_; 
lean_del_object(v___x_2735_);
lean_dec(v_a_2733_);
v___x_2779_ = lean_st_ref_get(v___y_2720_);
if (v_alsoCasesOn_2716_ == 0)
{
lean_dec(v___x_2779_);
lean_dec(v_us_2730_);
lean_dec(v_declName_2729_);
lean_dec_ref(v_e_2715_);
goto v___jp_2722_;
}
else
{
lean_object* v_env_2780_; uint8_t v___x_2781_; 
v_env_2780_ = lean_ctor_get(v___x_2779_, 0);
lean_inc_ref(v_env_2780_);
lean_dec(v___x_2779_);
lean_inc(v_declName_2729_);
v___x_2781_ = l_Lean_isCasesOnRecursor(v_env_2780_, v_declName_2729_);
if (v___x_2781_ == 0)
{
lean_dec(v_us_2730_);
lean_dec(v_declName_2729_);
lean_dec_ref(v_e_2715_);
goto v___jp_2722_;
}
else
{
lean_object* v_indName_2782_; lean_object* v___x_2783_; 
v_indName_2782_ = l_Lean_Name_getPrefix(v_declName_2729_);
v___x_2783_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_indName_2782_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_a_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2876_; 
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2786_ = v___x_2783_;
v_isShared_2787_ = v_isSharedCheck_2876_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_a_2784_);
lean_dec(v___x_2783_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2876_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
if (lean_obj_tag(v_a_2784_) == 5)
{
lean_object* v_val_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2871_; 
v_val_2788_ = lean_ctor_get(v_a_2784_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v_a_2784_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2790_ = v_a_2784_;
v_isShared_2791_ = v_isSharedCheck_2871_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_val_2788_);
lean_dec(v_a_2784_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2871_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v_toConstantVal_2792_; lean_object* v_numParams_2793_; lean_object* v_numIndices_2794_; lean_object* v_ctors_2795_; lean_object* v_nargs_2796_; lean_object* v_dummy_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v_args_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; 
v_toConstantVal_2792_ = lean_ctor_get(v_val_2788_, 0);
lean_inc_ref(v_toConstantVal_2792_);
v_numParams_2793_ = lean_ctor_get(v_val_2788_, 1);
lean_inc(v_numParams_2793_);
v_numIndices_2794_ = lean_ctor_get(v_val_2788_, 2);
lean_inc(v_numIndices_2794_);
v_ctors_2795_ = lean_ctor_get(v_val_2788_, 4);
lean_inc(v_ctors_2795_);
v_nargs_2796_ = l_Lean_Expr_getAppNumArgs(v_e_2715_);
v_dummy_2797_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0);
lean_inc(v_nargs_2796_);
v___x_2798_ = lean_mk_array(v_nargs_2796_, v_dummy_2797_);
v___x_2799_ = lean_unsigned_to_nat(1u);
v___x_2800_ = lean_nat_sub(v_nargs_2796_, v___x_2799_);
lean_dec(v_nargs_2796_);
v_args_2801_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2715_, v___x_2798_, v___x_2800_);
v___x_2802_ = lean_nat_add(v_numParams_2793_, v___x_2799_);
v___x_2803_ = lean_nat_add(v___x_2802_, v_numIndices_2794_);
v___x_2804_ = lean_nat_add(v___x_2803_, v___x_2799_);
lean_dec(v___x_2803_);
v___x_2805_ = l_Lean_InductiveVal_numCtors(v_val_2788_);
lean_dec_ref(v_val_2788_);
v___x_2806_ = lean_nat_add(v___x_2804_, v___x_2805_);
lean_dec(v___x_2805_);
v___x_2807_ = lean_array_get_size(v_args_2801_);
v___x_2808_ = lean_nat_dec_le(v___x_2806_, v___x_2807_);
if (v___x_2808_ == 0)
{
lean_object* v___x_2809_; lean_object* v___x_2811_; 
lean_dec(v___x_2806_);
lean_dec(v___x_2804_);
lean_dec(v___x_2802_);
lean_dec_ref(v_args_2801_);
lean_dec(v_ctors_2795_);
lean_dec(v_numIndices_2794_);
lean_dec(v_numParams_2793_);
lean_dec_ref(v_toConstantVal_2792_);
lean_del_object(v___x_2790_);
lean_dec(v_us_2730_);
lean_dec(v_declName_2729_);
v___x_2809_ = lean_box(0);
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 0, v___x_2809_);
v___x_2811_ = v___x_2786_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v___x_2809_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
else
{
lean_object* v___x_2813_; lean_object* v_params_2814_; lean_object* v_motive_2815_; lean_object* v_discrs_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v_discrInfos_2819_; lean_object* v_alts_2820_; lean_object* v___y_2822_; lean_object* v___y_2823_; lean_object* v_lower_2862_; lean_object* v_upper_2863_; uint8_t v___x_2870_; 
lean_del_object(v___x_2786_);
v___x_2813_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2793_);
lean_inc_ref_n(v_args_2801_, 3);
v_params_2814_ = l_Array_toSubarray___redArg(v_args_2801_, v___x_2813_, v_numParams_2793_);
v_motive_2815_ = lean_array_get(v___x_2731_, v_args_2801_, v_numParams_2793_);
lean_dec(v_numParams_2793_);
lean_inc(v___x_2804_);
v_discrs_2816_ = l_Array_toSubarray___redArg(v_args_2801_, v___x_2802_, v___x_2804_);
v___x_2817_ = lean_nat_add(v_numIndices_2794_, v___x_2799_);
lean_dec(v_numIndices_2794_);
v___x_2818_ = lean_box(0);
v_discrInfos_2819_ = lean_mk_array(v___x_2817_, v___x_2818_);
lean_inc(v___x_2806_);
v_alts_2820_ = l_Array_toSubarray___redArg(v_args_2801_, v___x_2804_, v___x_2806_);
v___x_2870_ = lean_nat_dec_le(v___x_2806_, v___x_2813_);
if (v___x_2870_ == 0)
{
v_lower_2862_ = v___x_2806_;
v_upper_2863_ = v___x_2807_;
goto v___jp_2861_;
}
else
{
lean_dec(v___x_2806_);
v_lower_2862_ = v___x_2813_;
v_upper_2863_ = v___x_2807_;
goto v___jp_2861_;
}
v___jp_2821_:
{
lean_object* v___x_2824_; size_t v_sz_2825_; size_t v___x_2826_; lean_object* v___x_2827_; 
v___x_2824_ = lean_array_mk(v_ctors_2795_);
v_sz_2825_ = lean_array_size(v___x_2824_);
v___x_2826_ = ((size_t)0ULL);
v___x_2827_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(v_sz_2825_, v___x_2826_, v___x_2824_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2827_) == 0)
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2852_; 
v_a_2828_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2830_ = v___x_2827_;
v_isShared_2831_ = v_isSharedCheck_2852_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2827_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2852_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v_start_2832_; lean_object* v_stop_2833_; lean_object* v_start_2834_; lean_object* v_stop_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2847_; 
v_start_2832_ = lean_ctor_get(v_params_2814_, 1);
v_stop_2833_ = lean_ctor_get(v_params_2814_, 2);
v_start_2834_ = lean_ctor_get(v_discrs_2816_, 1);
v_stop_2835_ = lean_ctor_get(v_discrs_2816_, 2);
v___x_2836_ = lean_nat_sub(v_stop_2833_, v_start_2832_);
v___x_2837_ = lean_nat_sub(v_stop_2835_, v_start_2834_);
v___x_2838_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2);
v___x_2839_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2836_);
lean_ctor_set(v___x_2839_, 1, v___x_2837_);
lean_ctor_set(v___x_2839_, 2, v_a_2828_);
lean_ctor_set(v___x_2839_, 3, v___y_2823_);
lean_ctor_set(v___x_2839_, 4, v_discrInfos_2819_);
lean_ctor_set(v___x_2839_, 5, v___x_2838_);
v___x_2840_ = lean_array_mk(v_us_2730_);
v___x_2841_ = l_Subarray_copy___redArg(v_params_2814_);
v___x_2842_ = l_Subarray_copy___redArg(v_discrs_2816_);
v___x_2843_ = l_Subarray_copy___redArg(v_alts_2820_);
v___x_2844_ = l_Subarray_copy___redArg(v___y_2822_);
v___x_2845_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2839_);
lean_ctor_set(v___x_2845_, 1, v_declName_2729_);
lean_ctor_set(v___x_2845_, 2, v___x_2840_);
lean_ctor_set(v___x_2845_, 3, v___x_2841_);
lean_ctor_set(v___x_2845_, 4, v_motive_2815_);
lean_ctor_set(v___x_2845_, 5, v___x_2842_);
lean_ctor_set(v___x_2845_, 6, v___x_2843_);
lean_ctor_set(v___x_2845_, 7, v___x_2844_);
if (v_isShared_2791_ == 0)
{
lean_ctor_set_tag(v___x_2790_, 1);
lean_ctor_set(v___x_2790_, 0, v___x_2845_);
v___x_2847_ = v___x_2790_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v___x_2845_);
v___x_2847_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
lean_object* v___x_2849_; 
if (v_isShared_2831_ == 0)
{
lean_ctor_set(v___x_2830_, 0, v___x_2847_);
v___x_2849_ = v___x_2830_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v___x_2847_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
else
{
lean_object* v_a_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2860_; 
lean_dec(v___y_2823_);
lean_dec_ref(v___y_2822_);
lean_dec_ref(v_alts_2820_);
lean_dec_ref(v_discrInfos_2819_);
lean_dec_ref(v_discrs_2816_);
lean_dec(v_motive_2815_);
lean_dec_ref(v_params_2814_);
lean_del_object(v___x_2790_);
lean_dec(v_us_2730_);
lean_dec(v_declName_2729_);
v_a_2853_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2860_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2860_ == 0)
{
v___x_2855_ = v___x_2827_;
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_a_2853_);
lean_dec(v___x_2827_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2858_; 
if (v_isShared_2856_ == 0)
{
v___x_2858_ = v___x_2855_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v_a_2853_);
v___x_2858_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
return v___x_2858_;
}
}
}
}
v___jp_2861_:
{
lean_object* v_levelParams_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; uint8_t v___x_2868_; 
v_levelParams_2864_ = lean_ctor_get(v_toConstantVal_2792_, 1);
lean_inc(v_levelParams_2864_);
lean_dec_ref(v_toConstantVal_2792_);
v___x_2865_ = l_Array_toSubarray___redArg(v_args_2801_, v_lower_2862_, v_upper_2863_);
v___x_2866_ = l_List_lengthTR___redArg(v_levelParams_2864_);
lean_dec(v_levelParams_2864_);
v___x_2867_ = l_List_lengthTR___redArg(v_us_2730_);
v___x_2868_ = lean_nat_dec_eq(v___x_2866_, v___x_2867_);
lean_dec(v___x_2867_);
lean_dec(v___x_2866_);
if (v___x_2868_ == 0)
{
lean_object* v___x_2869_; 
v___x_2869_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3));
v___y_2822_ = v___x_2865_;
v___y_2823_ = v___x_2869_;
goto v___jp_2821_;
}
else
{
v___y_2822_ = v___x_2865_;
v___y_2823_ = v___x_2818_;
goto v___jp_2821_;
}
}
}
}
}
else
{
lean_object* v___x_2872_; lean_object* v___x_2874_; 
lean_dec(v_a_2784_);
lean_dec(v_us_2730_);
lean_dec(v_declName_2729_);
lean_dec_ref(v_e_2715_);
v___x_2872_ = lean_box(0);
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 0, v___x_2872_);
v___x_2874_ = v___x_2786_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v___x_2872_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2884_; 
lean_dec(v_us_2730_);
lean_dec(v_declName_2729_);
lean_dec_ref(v_e_2715_);
v_a_2877_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2879_ = v___x_2783_;
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v___x_2783_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
return v___x_2882_;
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
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_e_2715_);
goto v___jp_2722_;
}
}
v___jp_2722_:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = lean_box(0);
v___x_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2723_);
return v___x_2724_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed(lean_object* v_e_2886_, lean_object* v_alsoCasesOn_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
uint8_t v_alsoCasesOn_boxed_2893_; lean_object* v_res_2894_; 
v_alsoCasesOn_boxed_2893_ = lean_unbox(v_alsoCasesOn_2887_);
v_res_2894_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(v_e_2886_, v_alsoCasesOn_boxed_2893_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
lean_dec(v___y_2891_);
lean_dec_ref(v___y_2890_);
lean_dec(v___y_2889_);
lean_dec_ref(v___y_2888_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(lean_object* v_e_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_){
_start:
{
lean_object* v___x_2904_; uint8_t v___x_2905_; 
v___x_2904_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_2905_ = l_Lean_Expr_isAppOf(v_e_2898_, v___x_2904_);
if (v___x_2905_ == 0)
{
lean_object* v___x_2906_; uint8_t v___x_2907_; 
v___x_2906_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_2907_ = l_Lean_Expr_isAppOf(v_e_2898_, v___x_2906_);
if (v___x_2907_ == 0)
{
lean_object* v___x_2908_; uint8_t v___x_2909_; 
v___x_2908_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_2909_ = l_Lean_Expr_isAppOf(v_e_2898_, v___x_2908_);
if (v___x_2909_ == 0)
{
lean_object* v___x_2910_; uint8_t v___x_2911_; 
v___x_2910_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0));
v___x_2911_ = l_Lean_Expr_isAppOf(v_e_2898_, v___x_2910_);
if (v___x_2911_ == 0)
{
lean_object* v___x_2912_; uint8_t v___x_2913_; 
v___x_2912_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0));
v___x_2913_ = l_Lean_Expr_isAppOf(v_e_2898_, v___x_2912_);
if (v___x_2913_ == 0)
{
lean_object* v___x_2914_; uint8_t v___x_2915_; 
v___x_2914_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___closed__0));
v___x_2915_ = l_Lean_Expr_isAppOf(v_e_2898_, v___x_2914_);
if (v___x_2915_ == 0)
{
uint8_t v___x_2916_; lean_object* v___x_2917_; 
v___x_2916_ = 1;
v___x_2917_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(v_e_2898_, v___x_2916_, v_a_2899_, v_a_2900_, v_a_2901_, v_a_2902_);
if (lean_obj_tag(v___x_2917_) == 0)
{
lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2938_; 
v_a_2918_ = lean_ctor_get(v___x_2917_, 0);
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2920_ = v___x_2917_;
v_isShared_2921_ = v_isSharedCheck_2938_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_dec(v___x_2917_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2938_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
if (lean_obj_tag(v_a_2918_) == 1)
{
lean_object* v_val_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2933_; 
v_val_2922_ = lean_ctor_get(v_a_2918_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v_a_2918_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2924_ = v_a_2918_;
v_isShared_2925_ = v_isSharedCheck_2933_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_val_2922_);
lean_dec(v_a_2918_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2933_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2926_; lean_object* v___x_2928_; 
v___x_2926_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2926_, 0, v_val_2922_);
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 0, v___x_2926_);
v___x_2928_ = v___x_2924_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v___x_2926_);
v___x_2928_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
lean_object* v___x_2930_; 
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 0, v___x_2928_);
v___x_2930_ = v___x_2920_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v___x_2928_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
else
{
lean_object* v___x_2934_; lean_object* v___x_2936_; 
lean_dec(v_a_2918_);
v___x_2934_ = lean_box(0);
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 0, v___x_2934_);
v___x_2936_ = v___x_2920_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v___x_2934_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
}
}
else
{
lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2946_; 
v_a_2939_ = lean_ctor_get(v___x_2917_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2941_ = v___x_2917_;
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2917_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2944_; 
if (v_isShared_2942_ == 0)
{
v___x_2944_ = v___x_2941_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_a_2939_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
}
}
else
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2947_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2947_, 0, v_e_2898_);
v___x_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
v___x_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
return v___x_2949_;
}
}
else
{
lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2950_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2950_, 0, v_e_2898_);
v___x_2951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
return v___x_2952_;
}
}
else
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2953_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2953_, 0, v_e_2898_);
v___x_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2954_, 0, v___x_2953_);
v___x_2955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2954_);
return v___x_2955_;
}
}
else
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2956_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2956_, 0, v_e_2898_);
v___x_2957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2956_);
v___x_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2957_);
return v___x_2958_;
}
}
else
{
lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___x_2959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2959_, 0, v_e_2898_);
v___x_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2960_, 0, v___x_2959_);
v___x_2961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2960_);
return v___x_2961_;
}
}
else
{
lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v_e_2898_);
v___x_2963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2962_);
v___x_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2963_);
return v___x_2964_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___boxed(lean_object* v_e_2965_, lean_object* v_a_2966_, lean_object* v_a_2967_, lean_object* v_a_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_){
_start:
{
lean_object* v_res_2971_; 
v_res_2971_ = l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(v_e_2965_, v_a_2966_, v_a_2967_, v_a_2968_, v_a_2969_);
lean_dec(v_a_2969_);
lean_dec_ref(v_a_2968_);
lean_dec(v_a_2967_);
lean_dec_ref(v_a_2966_);
return v_res_2971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(lean_object* v_declName_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_){
_start:
{
lean_object* v___x_2978_; 
v___x_2978_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2972_, v___y_2976_);
return v___x_2978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___boxed(lean_object* v_declName_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v_res_2985_; 
v_res_2985_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(v_declName_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
lean_dec(v___y_2981_);
lean_dec_ref(v___y_2980_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2986_, lean_object* v_constName_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_){
_start:
{
lean_object* v___x_2993_; 
v___x_2993_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_);
return v___x_2993_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2994_, lean_object* v_constName_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(v_00_u03b1_2994_, v_constName_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_);
lean_dec(v___y_2999_);
lean_dec_ref(v___y_2998_);
lean_dec(v___y_2997_);
lean_dec_ref(v___y_2996_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_3002_, lean_object* v_ref_3003_, lean_object* v_constName_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_){
_start:
{
lean_object* v___x_3010_; 
v___x_3010_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_3003_, v_constName_3004_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_);
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_3011_, lean_object* v_ref_3012_, lean_object* v_constName_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_){
_start:
{
lean_object* v_res_3019_; 
v_res_3019_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_3011_, v_ref_3012_, v_constName_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
lean_dec(v___y_3015_);
lean_dec_ref(v___y_3014_);
lean_dec(v_ref_3012_);
return v_res_3019_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_3020_, lean_object* v_ref_3021_, lean_object* v_msg_3022_, lean_object* v_declHint_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_){
_start:
{
lean_object* v___x_3029_; 
v___x_3029_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_3021_, v_msg_3022_, v_declHint_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_);
return v___x_3029_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_3030_, lean_object* v_ref_3031_, lean_object* v_msg_3032_, lean_object* v_declHint_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_){
_start:
{
lean_object* v_res_3039_; 
v_res_3039_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_3030_, v_ref_3031_, v_msg_3032_, v_declHint_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
lean_dec(v_ref_3031_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(lean_object* v_msg_3040_, lean_object* v_declHint_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_){
_start:
{
lean_object* v___x_3047_; 
v___x_3047_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_3040_, v_declHint_3041_, v___y_3045_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___boxed(lean_object* v_msg_3048_, lean_object* v_declHint_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_){
_start:
{
lean_object* v_res_3055_; 
v_res_3055_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(v_msg_3048_, v_declHint_3049_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_);
lean_dec(v___y_3053_);
lean_dec_ref(v___y_3052_);
lean_dec(v___y_3051_);
lean_dec_ref(v___y_3050_);
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(lean_object* v_00_u03b1_3056_, lean_object* v_ref_3057_, lean_object* v_msg_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v___x_3064_; 
v___x_3064_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_3057_, v_msg_3058_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3062_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___boxed(lean_object* v_00_u03b1_3065_, lean_object* v_ref_3066_, lean_object* v_msg_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_){
_start:
{
lean_object* v_res_3073_; 
v_res_3073_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(v_00_u03b1_3065_, v_ref_3066_, v_msg_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
lean_dec(v___y_3071_);
lean_dec_ref(v___y_3070_);
lean_dec(v___y_3069_);
lean_dec_ref(v___y_3068_);
lean_dec(v_ref_3066_);
return v_res_3073_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(lean_object* v_00_u03b1_3074_, lean_object* v_msg_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v___x_3081_; 
v___x_3081_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_);
return v___x_3081_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___boxed(lean_object* v_00_u03b1_3082_, lean_object* v_msg_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_){
_start:
{
lean_object* v_res_3089_; 
v_res_3089_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(v_00_u03b1_3082_, v_msg_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
lean_dec(v___y_3085_);
lean_dec_ref(v___y_3084_);
return v_res_3089_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1(void){
_start:
{
lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3091_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0));
v___x_3092_ = l_Lean_stringToMessageData(v___x_3091_);
return v___x_3092_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3(void){
_start:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3094_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__2));
v___x_3095_ = l_Lean_stringToMessageData(v___x_3094_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher(lean_object* v_idx_3099_, lean_object* v_e_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_){
_start:
{
lean_object* v___y_3107_; lean_object* v___y_3135_; lean_object* v___y_3136_; lean_object* v___x_3176_; uint8_t v___x_3177_; 
v___x_3176_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_3177_ = l_Lean_Expr_isAppOf(v_e_3100_, v___x_3176_);
if (v___x_3177_ == 0)
{
lean_object* v___x_3178_; uint8_t v___x_3179_; 
v___x_3178_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_3179_ = l_Lean_Expr_isAppOf(v_e_3100_, v___x_3178_);
if (v___x_3179_ == 0)
{
lean_object* v___x_3180_; uint8_t v___x_3181_; 
v___x_3180_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0));
v___x_3181_ = l_Lean_Expr_isAppOf(v_e_3100_, v___x_3180_);
if (v___x_3181_ == 0)
{
lean_object* v___x_3182_; uint8_t v___x_3183_; 
v___x_3182_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0));
v___x_3183_ = l_Lean_Expr_isAppOf(v_e_3100_, v___x_3182_);
if (v___x_3183_ == 0)
{
lean_object* v___x_3184_; uint8_t v___x_3185_; 
v___x_3184_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_3185_ = l_Lean_Expr_isAppOf(v_e_3100_, v___x_3184_);
if (v___x_3185_ == 0)
{
lean_object* v___x_3186_; uint8_t v___x_3187_; 
v___x_3186_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___closed__0));
v___x_3187_ = l_Lean_Expr_isAppOf(v_e_3100_, v___x_3186_);
if (v___x_3187_ == 0)
{
lean_object* v___x_3188_; 
v___x_3188_ = l_Lean_Meta_rwMatcher(v_idx_3099_, v_e_3100_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_);
return v___x_3188_;
}
else
{
goto v___jp_3166_;
}
}
else
{
goto v___jp_3166_;
}
}
else
{
goto v___jp_3125_;
}
}
else
{
goto v___jp_3125_;
}
}
else
{
goto v___jp_3125_;
}
}
else
{
goto v___jp_3125_;
}
v___jp_3106_:
{
lean_object* v___x_3108_; 
lean_inc_ref(v___y_3107_);
v___x_3108_ = l_Lean_Meta_findLocalDeclWithType_x3f(v___y_3107_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3109_; 
v_a_3109_ = lean_ctor_get(v___x_3108_, 0);
lean_inc(v_a_3109_);
lean_dec_ref_known(v___x_3108_, 1);
if (lean_obj_tag(v_a_3109_) == 1)
{
lean_object* v_val_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
lean_dec_ref(v___y_3107_);
v_val_3110_ = lean_ctor_get(v_a_3109_, 0);
lean_inc(v_val_3110_);
lean_dec_ref_known(v_a_3109_, 1);
v___x_3111_ = l_Lean_mkFVar(v_val_3110_);
v___x_3112_ = l_Lean_Meta_rwIfWith(v___x_3111_, v_e_3100_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_);
return v___x_3112_;
}
else
{
lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
lean_dec(v_a_3109_);
lean_dec_ref(v_e_3100_);
v___x_3113_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1, &l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1_once, _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1);
v___x_3114_ = l_Lean_MessageData_ofExpr(v___y_3107_);
v___x_3115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3113_);
lean_ctor_set(v___x_3115_, 1, v___x_3114_);
v___x_3116_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v___x_3115_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_);
return v___x_3116_;
}
}
else
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
lean_dec_ref(v___y_3107_);
lean_dec_ref(v_e_3100_);
v_a_3117_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_3108_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3108_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3122_; 
if (v_isShared_3120_ == 0)
{
v___x_3122_ = v___x_3119_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_a_3117_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
}
v___jp_3125_:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v_c_3130_; lean_object* v___x_3131_; uint8_t v___x_3132_; 
v___x_3126_ = lean_unsigned_to_nat(1u);
v___x_3127_ = l_Lean_Expr_getAppNumArgs(v_e_3100_);
v___x_3128_ = lean_nat_sub(v___x_3127_, v___x_3126_);
lean_dec(v___x_3127_);
v___x_3129_ = lean_nat_sub(v___x_3128_, v___x_3126_);
lean_dec(v___x_3128_);
v_c_3130_ = l_Lean_Expr_getRevArg_x21(v_e_3100_, v___x_3129_);
v___x_3131_ = lean_unsigned_to_nat(0u);
v___x_3132_ = lean_nat_dec_eq(v_idx_3099_, v___x_3131_);
lean_dec(v_idx_3099_);
if (v___x_3132_ == 0)
{
lean_object* v___x_3133_; 
v___x_3133_ = l_Lean_mkNot(v_c_3130_);
v___y_3107_ = v___x_3133_;
goto v___jp_3106_;
}
else
{
v___y_3107_ = v_c_3130_;
goto v___jp_3106_;
}
}
v___jp_3134_:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3137_ = lean_box(0);
lean_inc(v___y_3136_);
v___x_3138_ = l_Lean_mkConst(v___y_3136_, v___x_3137_);
v___x_3139_ = l_Lean_Meta_mkEq(v___y_3135_, v___x_3138_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v___x_3141_; 
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
lean_inc_n(v_a_3140_, 2);
lean_dec_ref_known(v___x_3139_, 1);
v___x_3141_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_a_3140_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; 
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3142_);
lean_dec_ref_known(v___x_3141_, 1);
if (lean_obj_tag(v_a_3142_) == 1)
{
lean_object* v_val_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
lean_dec(v_a_3140_);
v_val_3143_ = lean_ctor_get(v_a_3142_, 0);
lean_inc(v_val_3143_);
lean_dec_ref_known(v_a_3142_, 1);
v___x_3144_ = l_Lean_mkFVar(v_val_3143_);
v___x_3145_ = l_Lean_Meta_rwIfWith(v___x_3144_, v_e_3100_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_);
return v___x_3145_;
}
else
{
lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
lean_dec(v_a_3142_);
lean_dec_ref(v_e_3100_);
v___x_3146_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3, &l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3_once, _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3);
v___x_3147_ = l_Lean_MessageData_ofExpr(v_a_3140_);
v___x_3148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3146_);
lean_ctor_set(v___x_3148_, 1, v___x_3147_);
v___x_3149_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v___x_3148_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_);
return v___x_3149_;
}
}
else
{
lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3157_; 
lean_dec(v_a_3140_);
lean_dec_ref(v_e_3100_);
v_a_3150_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3152_ = v___x_3141_;
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_dec(v___x_3141_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3155_; 
if (v_isShared_3153_ == 0)
{
v___x_3155_ = v___x_3152_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3150_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
else
{
lean_object* v_a_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3165_; 
lean_dec_ref(v_e_3100_);
v_a_3158_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3160_ = v___x_3139_;
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_a_3158_);
lean_dec(v___x_3139_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3163_; 
if (v_isShared_3161_ == 0)
{
v___x_3163_ = v___x_3160_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_a_3158_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
}
v___jp_3166_:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v_c_3171_; lean_object* v___x_3172_; uint8_t v___x_3173_; 
v___x_3167_ = lean_unsigned_to_nat(1u);
v___x_3168_ = l_Lean_Expr_getAppNumArgs(v_e_3100_);
v___x_3169_ = lean_nat_sub(v___x_3168_, v___x_3167_);
lean_dec(v___x_3168_);
v___x_3170_ = lean_nat_sub(v___x_3169_, v___x_3167_);
lean_dec(v___x_3169_);
v_c_3171_ = l_Lean_Expr_getRevArg_x21(v_e_3100_, v___x_3170_);
v___x_3172_ = lean_unsigned_to_nat(0u);
v___x_3173_ = lean_nat_dec_eq(v_idx_3099_, v___x_3172_);
lean_dec(v_idx_3099_);
if (v___x_3173_ == 0)
{
lean_object* v___x_3174_; 
v___x_3174_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__4));
v___y_3135_ = v_c_3171_;
v___y_3136_ = v___x_3174_;
goto v___jp_3134_;
}
else
{
lean_object* v___x_3175_; 
v___x_3175_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___closed__0));
v___y_3135_ = v_c_3171_;
v___y_3136_ = v___x_3175_;
goto v___jp_3134_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___boxed(lean_object* v_idx_3189_, lean_object* v_e_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_){
_start:
{
lean_object* v_res_3196_; 
v_res_3196_ = l_Lean_Elab_Tactic_Do_rwIfOrMatcher(v_idx_3189_, v_e_3190_, v_a_3191_, v_a_3192_, v_a_3193_, v_a_3194_);
lean_dec(v_a_3194_);
lean_dec_ref(v_a_3193_);
lean_dec(v_a_3192_);
lean_dec_ref(v_a_3191_);
return v_res_3196_;
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
