// Lean compiler output
// Module: Lean.Elab.Tactic.Do.VCGen.Split
// Imports: public import Lean.Meta.Tactic.Simp.Types public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Data.Array import Lean.Meta.Match.Rewrite import Lean.Meta.Tactic.Simp.Rewrite import Lean.Meta.Tactic.Assumption public import Lean.Meta.Tactic.BoolToProp
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
lean_object* l_Lean_Meta_mkEqMP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_boolCondToProp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Array_mask___redArg(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
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
lean_object* l_Lean_Meta_boolCondToProp_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__1;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__39___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 59, 48, 241, 48, 106, 255)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__33(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__34(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__0(lean_object* v_h_1340_, lean_object* v_inst_1341_, lean_object* v_____do__lift_1342_){
_start:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; uint8_t v___x_1347_; uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1343_ = lean_unsigned_to_nat(1u);
v___x_1344_ = lean_mk_empty_array_with_capacity(v___x_1343_);
v___x_1345_ = lean_array_push(v___x_1344_, v_h_1340_);
v___x_1346_ = 0;
v___x_1347_ = 1;
v___x_1348_ = 1;
v___x_1349_ = lean_box(v___x_1346_);
v___x_1350_ = lean_box(v___x_1347_);
v___x_1351_ = lean_box(v___x_1346_);
v___x_1352_ = lean_box(v___x_1347_);
v___x_1353_ = lean_box(v___x_1348_);
v___x_1354_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1354_, 0, v___x_1345_);
lean_closure_set(v___x_1354_, 1, v_____do__lift_1342_);
lean_closure_set(v___x_1354_, 2, v___x_1349_);
lean_closure_set(v___x_1354_, 3, v___x_1350_);
lean_closure_set(v___x_1354_, 4, v___x_1351_);
lean_closure_set(v___x_1354_, 5, v___x_1352_);
lean_closure_set(v___x_1354_, 6, v___x_1353_);
v___x_1355_ = lean_apply_2(v_inst_1341_, lean_box(0), v___x_1354_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__1(lean_object* v_inst_1356_, lean_object* v_k_1357_, lean_object* v_toBind_1358_, lean_object* v_h_1359_){
_start:
{
lean_object* v___f_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
lean_inc_ref(v_h_1359_);
v___f_1360_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1360_, 0, v_h_1359_);
lean_closure_set(v___f_1360_, 1, v_inst_1356_);
v___x_1361_ = lean_apply_1(v_k_1357_, v_h_1359_);
v___x_1362_ = lean_apply_4(v_toBind_1358_, lean_box(0), lean_box(0), v___x_1361_, v___f_1360_);
return v___x_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__2(lean_object* v_hp_1363_, lean_object* v_inst_1364_, lean_object* v_____do__lift_1365_){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; uint8_t v___x_1369_; uint8_t v___x_1370_; uint8_t v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1366_ = lean_unsigned_to_nat(1u);
v___x_1367_ = lean_mk_empty_array_with_capacity(v___x_1366_);
v___x_1368_ = lean_array_push(v___x_1367_, v_hp_1363_);
v___x_1369_ = 0;
v___x_1370_ = 1;
v___x_1371_ = 1;
v___x_1372_ = lean_box(v___x_1369_);
v___x_1373_ = lean_box(v___x_1370_);
v___x_1374_ = lean_box(v___x_1369_);
v___x_1375_ = lean_box(v___x_1370_);
v___x_1376_ = lean_box(v___x_1371_);
v___x_1377_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1377_, 0, v___x_1368_);
lean_closure_set(v___x_1377_, 1, v_____do__lift_1365_);
lean_closure_set(v___x_1377_, 2, v___x_1372_);
lean_closure_set(v___x_1377_, 3, v___x_1373_);
lean_closure_set(v___x_1377_, 4, v___x_1374_);
lean_closure_set(v___x_1377_, 5, v___x_1375_);
lean_closure_set(v___x_1377_, 6, v___x_1376_);
v___x_1378_ = lean_apply_2(v_inst_1364_, lean_box(0), v___x_1377_);
return v___x_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__3(lean_object* v_inst_1379_, lean_object* v_k_1380_, lean_object* v_h_1381_, lean_object* v_toBind_1382_, lean_object* v_hp_1383_){
_start:
{
lean_object* v___f_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___f_1384_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__2), 3, 2);
lean_closure_set(v___f_1384_, 0, v_hp_1383_);
lean_closure_set(v___f_1384_, 1, v_inst_1379_);
v___x_1385_ = lean_apply_1(v_k_1380_, v_h_1381_);
v___x_1386_ = lean_apply_4(v_toBind_1382_, lean_box(0), lean_box(0), v___x_1385_, v___f_1384_);
return v___x_1386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__4(lean_object* v_h_1387_, lean_object* v_body_1388_, lean_object* v_inst_1389_, lean_object* v_____do__lift_1390_){
_start:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; uint8_t v___x_1396_; uint8_t v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1391_ = lean_unsigned_to_nat(1u);
v___x_1392_ = lean_mk_empty_array_with_capacity(v___x_1391_);
v___x_1393_ = lean_array_push(v___x_1392_, v_h_1387_);
v___x_1394_ = l_Lean_Expr_app___override(v_body_1388_, v_____do__lift_1390_);
v___x_1395_ = 0;
v___x_1396_ = 1;
v___x_1397_ = 1;
v___x_1398_ = lean_box(v___x_1395_);
v___x_1399_ = lean_box(v___x_1396_);
v___x_1400_ = lean_box(v___x_1395_);
v___x_1401_ = lean_box(v___x_1396_);
v___x_1402_ = lean_box(v___x_1397_);
v___x_1403_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1403_, 0, v___x_1393_);
lean_closure_set(v___x_1403_, 1, v___x_1394_);
lean_closure_set(v___x_1403_, 2, v___x_1398_);
lean_closure_set(v___x_1403_, 3, v___x_1399_);
lean_closure_set(v___x_1403_, 4, v___x_1400_);
lean_closure_set(v___x_1403_, 5, v___x_1401_);
lean_closure_set(v___x_1403_, 6, v___x_1402_);
v___x_1404_ = lean_apply_2(v_inst_1389_, lean_box(0), v___x_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__5(lean_object* v_h_1405_, lean_object* v_inst_1406_, lean_object* v_snd_1407_, lean_object* v_toBind_1408_, lean_object* v_body_1409_){
_start:
{
lean_object* v___f_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
lean_inc(v_inst_1406_);
lean_inc_ref(v_h_1405_);
v___f_1410_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__4), 4, 3);
lean_closure_set(v___f_1410_, 0, v_h_1405_);
lean_closure_set(v___f_1410_, 1, v_body_1409_);
lean_closure_set(v___f_1410_, 2, v_inst_1406_);
v___x_1411_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEqMP___boxed), 7, 2);
lean_closure_set(v___x_1411_, 0, v_snd_1407_);
lean_closure_set(v___x_1411_, 1, v_h_1405_);
v___x_1412_ = lean_apply_2(v_inst_1406_, lean_box(0), v___x_1411_);
v___x_1413_ = lean_apply_4(v_toBind_1408_, lean_box(0), lean_box(0), v___x_1412_, v___f_1410_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__6(lean_object* v_inst_1414_, lean_object* v_k_1415_, lean_object* v_toBind_1416_, lean_object* v_snd_1417_, lean_object* v_inst_1418_, lean_object* v_inst_1419_, lean_object* v_name_1420_, uint8_t v___x_1421_, lean_object* v_fst_1422_, lean_object* v_h_1423_){
_start:
{
lean_object* v___f_1424_; lean_object* v___f_1425_; uint8_t v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
lean_inc_n(v_toBind_1416_, 2);
lean_inc_ref(v_h_1423_);
lean_inc(v_inst_1414_);
v___f_1424_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1424_, 0, v_inst_1414_);
lean_closure_set(v___f_1424_, 1, v_k_1415_);
lean_closure_set(v___f_1424_, 2, v_h_1423_);
lean_closure_set(v___f_1424_, 3, v_toBind_1416_);
v___f_1425_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1425_, 0, v_h_1423_);
lean_closure_set(v___f_1425_, 1, v_inst_1414_);
lean_closure_set(v___f_1425_, 2, v_snd_1417_);
lean_closure_set(v___f_1425_, 3, v_toBind_1416_);
v___x_1426_ = 0;
v___x_1427_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1418_, v_inst_1419_, v_name_1420_, v___x_1421_, v_fst_1422_, v___f_1424_, v___x_1426_);
v___x_1428_ = lean_apply_4(v_toBind_1416_, lean_box(0), lean_box(0), v___x_1427_, v___f_1425_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__6___boxed(lean_object* v_inst_1429_, lean_object* v_k_1430_, lean_object* v_toBind_1431_, lean_object* v_snd_1432_, lean_object* v_inst_1433_, lean_object* v_inst_1434_, lean_object* v_name_1435_, lean_object* v___x_1436_, lean_object* v_fst_1437_, lean_object* v_h_1438_){
_start:
{
uint8_t v___x_401__boxed_1439_; lean_object* v_res_1440_; 
v___x_401__boxed_1439_ = lean_unbox(v___x_1436_);
v_res_1440_ = l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__6(v_inst_1429_, v_k_1430_, v_toBind_1431_, v_snd_1432_, v_inst_1433_, v_inst_1434_, v_name_1435_, v___x_401__boxed_1439_, v_fst_1437_, v_h_1438_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__7(lean_object* v_inst_1441_, lean_object* v_inst_1442_, lean_object* v_name_1443_, lean_object* v_eq_1444_, lean_object* v___f_1445_, lean_object* v_inst_1446_, lean_object* v_k_1447_, lean_object* v_toBind_1448_, lean_object* v_____do__lift_1449_){
_start:
{
if (lean_obj_tag(v_____do__lift_1449_) == 0)
{
uint8_t v___x_1450_; uint8_t v___x_1451_; lean_object* v___x_1452_; 
lean_dec(v_toBind_1448_);
lean_dec(v_k_1447_);
lean_dec(v_inst_1446_);
v___x_1450_ = 0;
v___x_1451_ = 0;
v___x_1452_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1441_, v_inst_1442_, v_name_1443_, v___x_1450_, v_eq_1444_, v___f_1445_, v___x_1451_);
return v___x_1452_;
}
else
{
lean_object* v_val_1453_; lean_object* v_fst_1454_; lean_object* v_snd_1455_; uint8_t v___x_1456_; lean_object* v___x_1457_; lean_object* v___f_1458_; uint8_t v___x_1459_; lean_object* v___x_1460_; 
lean_dec(v___f_1445_);
v_val_1453_ = lean_ctor_get(v_____do__lift_1449_, 0);
lean_inc(v_val_1453_);
lean_dec_ref_known(v_____do__lift_1449_, 1);
v_fst_1454_ = lean_ctor_get(v_val_1453_, 0);
lean_inc(v_fst_1454_);
v_snd_1455_ = lean_ctor_get(v_val_1453_, 1);
lean_inc(v_snd_1455_);
lean_dec(v_val_1453_);
v___x_1456_ = 0;
v___x_1457_ = lean_box(v___x_1456_);
lean_inc(v_name_1443_);
lean_inc_ref(v_inst_1442_);
lean_inc_ref(v_inst_1441_);
v___f_1458_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__6___boxed), 10, 9);
lean_closure_set(v___f_1458_, 0, v_inst_1446_);
lean_closure_set(v___f_1458_, 1, v_k_1447_);
lean_closure_set(v___f_1458_, 2, v_toBind_1448_);
lean_closure_set(v___f_1458_, 3, v_snd_1455_);
lean_closure_set(v___f_1458_, 4, v_inst_1441_);
lean_closure_set(v___f_1458_, 5, v_inst_1442_);
lean_closure_set(v___f_1458_, 6, v_name_1443_);
lean_closure_set(v___f_1458_, 7, v___x_1457_);
lean_closure_set(v___f_1458_, 8, v_fst_1454_);
v___x_1459_ = 1;
v___x_1460_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1441_, v_inst_1442_, v_name_1443_, v___x_1456_, v_eq_1444_, v___f_1458_, v___x_1459_);
return v___x_1460_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__8(lean_object* v_inst_1461_, lean_object* v_inst_1462_, lean_object* v_name_1463_, lean_object* v___f_1464_, lean_object* v_inst_1465_, lean_object* v_k_1466_, lean_object* v_toBind_1467_, lean_object* v_c_1468_, uint8_t v_value_1469_, lean_object* v_eq_1470_){
_start:
{
lean_object* v___f_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
lean_inc(v_toBind_1467_);
lean_inc(v_inst_1465_);
v___f_1471_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__7), 9, 8);
lean_closure_set(v___f_1471_, 0, v_inst_1461_);
lean_closure_set(v___f_1471_, 1, v_inst_1462_);
lean_closure_set(v___f_1471_, 2, v_name_1463_);
lean_closure_set(v___f_1471_, 3, v_eq_1470_);
lean_closure_set(v___f_1471_, 4, v___f_1464_);
lean_closure_set(v___f_1471_, 5, v_inst_1465_);
lean_closure_set(v___f_1471_, 6, v_k_1466_);
lean_closure_set(v___f_1471_, 7, v_toBind_1467_);
v___x_1472_ = lean_box(v_value_1469_);
v___x_1473_ = lean_alloc_closure((void*)(l_Lean_Meta_boolCondToProp_x3f___boxed), 7, 2);
lean_closure_set(v___x_1473_, 0, v_c_1468_);
lean_closure_set(v___x_1473_, 1, v___x_1472_);
v___x_1474_ = lean_apply_2(v_inst_1465_, lean_box(0), v___x_1473_);
v___x_1475_ = lean_apply_4(v_toBind_1467_, lean_box(0), lean_box(0), v___x_1474_, v___f_1471_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__8___boxed(lean_object* v_inst_1476_, lean_object* v_inst_1477_, lean_object* v_name_1478_, lean_object* v___f_1479_, lean_object* v_inst_1480_, lean_object* v_k_1481_, lean_object* v_toBind_1482_, lean_object* v_c_1483_, lean_object* v_value_1484_, lean_object* v_eq_1485_){
_start:
{
uint8_t v_value_boxed_1486_; lean_object* v_res_1487_; 
v_value_boxed_1486_ = lean_unbox(v_value_1484_);
v_res_1487_ = l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__8(v_inst_1476_, v_inst_1477_, v_name_1478_, v___f_1479_, v_inst_1480_, v_k_1481_, v_toBind_1482_, v_c_1483_, v_value_boxed_1486_, v_eq_1485_);
return v_res_1487_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__1(void){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1491_ = lean_box(0);
v___x_1492_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__0));
v___x_1493_ = l_Lean_mkConst(v___x_1492_, v___x_1491_);
return v___x_1493_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__3(void){
_start:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1497_ = lean_box(0);
v___x_1498_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__2));
v___x_1499_ = l_Lean_mkConst(v___x_1498_, v___x_1497_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg(lean_object* v_inst_1500_, lean_object* v_inst_1501_, lean_object* v_inst_1502_, lean_object* v_name_1503_, lean_object* v_c_1504_, uint8_t v_value_1505_, lean_object* v_k_1506_){
_start:
{
lean_object* v_toBind_1507_; lean_object* v___f_1508_; lean_object* v___x_1509_; lean_object* v___f_1510_; lean_object* v___y_1512_; 
v_toBind_1507_ = lean_ctor_get(v_inst_1502_, 1);
lean_inc_n(v_toBind_1507_, 3);
lean_inc(v_k_1506_);
lean_inc_n(v_inst_1500_, 2);
v___f_1508_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1508_, 0, v_inst_1500_);
lean_closure_set(v___f_1508_, 1, v_k_1506_);
lean_closure_set(v___f_1508_, 2, v_toBind_1507_);
v___x_1509_ = lean_box(v_value_1505_);
lean_inc_ref(v_c_1504_);
v___f_1510_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___lam__8___boxed), 10, 9);
lean_closure_set(v___f_1510_, 0, v_inst_1501_);
lean_closure_set(v___f_1510_, 1, v_inst_1502_);
lean_closure_set(v___f_1510_, 2, v_name_1503_);
lean_closure_set(v___f_1510_, 3, v___f_1508_);
lean_closure_set(v___f_1510_, 4, v_inst_1500_);
lean_closure_set(v___f_1510_, 5, v_k_1506_);
lean_closure_set(v___f_1510_, 6, v_toBind_1507_);
lean_closure_set(v___f_1510_, 7, v_c_1504_);
lean_closure_set(v___f_1510_, 8, v___x_1509_);
if (v_value_1505_ == 0)
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__1, &l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__1);
v___y_1512_ = v___x_1516_;
goto v___jp_1511_;
}
else
{
lean_object* v___x_1517_; 
v___x_1517_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__3, &l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__3);
v___y_1512_ = v___x_1517_;
goto v___jp_1511_;
}
v___jp_1511_:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
lean_inc_ref(v___y_1512_);
v___x_1513_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_1513_, 0, v_c_1504_);
lean_closure_set(v___x_1513_, 1, v___y_1512_);
v___x_1514_ = lean_apply_2(v_inst_1500_, lean_box(0), v___x_1513_);
v___x_1515_ = lean_apply_4(v_toBind_1507_, lean_box(0), lean_box(0), v___x_1514_, v___f_1510_);
return v___x_1515_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___boxed(lean_object* v_inst_1518_, lean_object* v_inst_1519_, lean_object* v_inst_1520_, lean_object* v_name_1521_, lean_object* v_c_1522_, lean_object* v_value_1523_, lean_object* v_k_1524_){
_start:
{
uint8_t v_value_boxed_1525_; lean_object* v_res_1526_; 
v_value_boxed_1525_ = lean_unbox(v_value_1523_);
v_res_1526_ = l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg(v_inst_1518_, v_inst_1519_, v_inst_1520_, v_name_1521_, v_c_1522_, v_value_boxed_1525_, v_k_1524_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp(lean_object* v_n_1527_, lean_object* v_inst_1528_, lean_object* v_inst_1529_, lean_object* v_inst_1530_, lean_object* v_name_1531_, lean_object* v_c_1532_, uint8_t v_value_1533_, lean_object* v_k_1534_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg(v_inst_1528_, v_inst_1529_, v_inst_1530_, v_name_1531_, v_c_1532_, v_value_1533_, v_k_1534_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___boxed(lean_object* v_n_1536_, lean_object* v_inst_1537_, lean_object* v_inst_1538_, lean_object* v_inst_1539_, lean_object* v_name_1540_, lean_object* v_c_1541_, lean_object* v_value_1542_, lean_object* v_k_1543_){
_start:
{
uint8_t v_value_boxed_1544_; lean_object* v_res_1545_; 
v_value_boxed_1544_ = lean_unbox(v_value_1542_);
v_res_1545_ = l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp(v_n_1536_, v_inst_1537_, v_inst_1538_, v_inst_1539_, v_name_1540_, v_c_1541_, v_value_boxed_1544_, v_k_1543_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0(lean_object* v_u_1546_, lean_object* v_resTy_1547_, lean_object* v_c_1548_, lean_object* v_h_1549_, lean_object* v_t_1550_, lean_object* v_toPure_1551_, lean_object* v_e_1552_){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1553_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_1554_ = lean_box(0);
v___x_1555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1555_, 0, v_u_1546_);
lean_ctor_set(v___x_1555_, 1, v___x_1554_);
v___x_1556_ = l_Lean_mkConst(v___x_1553_, v___x_1555_);
v___x_1557_ = l_Lean_mkApp5(v___x_1556_, v_resTy_1547_, v_c_1548_, v_h_1549_, v_t_1550_, v_e_1552_);
v___x_1558_ = lean_apply_2(v_toPure_1551_, lean_box(0), v___x_1557_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1(lean_object* v_u_1562_, lean_object* v_resTy_1563_, lean_object* v_c_1564_, lean_object* v_h_1565_, lean_object* v_toPure_1566_, lean_object* v_onAlt_1567_, lean_object* v___x_1568_, lean_object* v___x_1569_, lean_object* v_toBind_1570_, lean_object* v_t_1571_){
_start:
{
lean_object* v___f_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
lean_inc_ref(v_resTy_1563_);
v___f_1572_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0), 7, 6);
lean_closure_set(v___f_1572_, 0, v_u_1562_);
lean_closure_set(v___f_1572_, 1, v_resTy_1563_);
lean_closure_set(v___f_1572_, 2, v_c_1564_);
lean_closure_set(v___f_1572_, 3, v_h_1565_);
lean_closure_set(v___f_1572_, 4, v_t_1571_);
lean_closure_set(v___f_1572_, 5, v_toPure_1566_);
v___x_1573_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1574_ = lean_apply_4(v_onAlt_1567_, v___x_1573_, v_resTy_1563_, v___x_1568_, v___x_1569_);
v___x_1575_ = lean_apply_4(v_toBind_1570_, lean_box(0), lean_box(0), v___x_1574_, v___f_1572_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(lean_object* v___x_1576_, uint8_t v_useSplitter_1577_, lean_object* v_inst_1578_, lean_object* v_____do__lift_1579_){
_start:
{
uint8_t v___x_1580_; uint8_t v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1580_ = 0;
v___x_1581_ = 1;
v___x_1582_ = lean_box(v___x_1580_);
v___x_1583_ = lean_box(v_useSplitter_1577_);
v___x_1584_ = lean_box(v___x_1580_);
v___x_1585_ = lean_box(v_useSplitter_1577_);
v___x_1586_ = lean_box(v___x_1581_);
v___x_1587_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1587_, 0, v___x_1576_);
lean_closure_set(v___x_1587_, 1, v_____do__lift_1579_);
lean_closure_set(v___x_1587_, 2, v___x_1582_);
lean_closure_set(v___x_1587_, 3, v___x_1583_);
lean_closure_set(v___x_1587_, 4, v___x_1584_);
lean_closure_set(v___x_1587_, 5, v___x_1585_);
lean_closure_set(v___x_1587_, 6, v___x_1586_);
v___x_1588_ = lean_apply_2(v_inst_1578_, lean_box(0), v___x_1587_);
return v___x_1588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed(lean_object* v___x_1589_, lean_object* v_useSplitter_1590_, lean_object* v_inst_1591_, lean_object* v_____do__lift_1592_){
_start:
{
uint8_t v_useSplitter_boxed_1593_; lean_object* v_res_1594_; 
v_useSplitter_boxed_1593_ = lean_unbox(v_useSplitter_1590_);
v_res_1594_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(v___x_1589_, v_useSplitter_boxed_1593_, v_inst_1591_, v_____do__lift_1592_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(lean_object* v___x_1598_, uint8_t v_useSplitter_1599_, lean_object* v_inst_1600_, lean_object* v_onAlt_1601_, lean_object* v_resTy_1602_, lean_object* v_toBind_1603_, lean_object* v_h_1604_){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___f_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1605_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1606_ = lean_unsigned_to_nat(0u);
v___x_1607_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
v___x_1608_ = lean_mk_empty_array_with_capacity(v___x_1598_);
v___x_1609_ = lean_array_push(v___x_1608_, v_h_1604_);
v___x_1610_ = lean_box(v_useSplitter_1599_);
lean_inc_ref(v___x_1609_);
v___f_1611_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1611_, 0, v___x_1609_);
lean_closure_set(v___f_1611_, 1, v___x_1610_);
lean_closure_set(v___f_1611_, 2, v_inst_1600_);
v___x_1612_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1607_);
lean_ctor_set(v___x_1612_, 1, v___x_1609_);
lean_ctor_set(v___x_1612_, 2, v___x_1607_);
lean_ctor_set(v___x_1612_, 3, v___x_1607_);
lean_ctor_set(v___x_1612_, 4, v___x_1607_);
v___x_1613_ = lean_apply_4(v_onAlt_1601_, v___x_1605_, v_resTy_1602_, v___x_1606_, v___x_1612_);
v___x_1614_ = lean_apply_4(v_toBind_1603_, lean_box(0), lean_box(0), v___x_1613_, v___f_1611_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed(lean_object* v___x_1615_, lean_object* v_useSplitter_1616_, lean_object* v_inst_1617_, lean_object* v_onAlt_1618_, lean_object* v_resTy_1619_, lean_object* v_toBind_1620_, lean_object* v_h_1621_){
_start:
{
uint8_t v_useSplitter_boxed_1622_; lean_object* v_res_1623_; 
v_useSplitter_boxed_1622_ = lean_unbox(v_useSplitter_1616_);
v_res_1623_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(v___x_1615_, v_useSplitter_boxed_1622_, v_inst_1617_, v_onAlt_1618_, v_resTy_1619_, v_toBind_1620_, v_h_1621_);
lean_dec(v___x_1615_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(lean_object* v___x_1624_, uint8_t v_useSplitter_1625_, lean_object* v_inst_1626_, lean_object* v_onAlt_1627_, lean_object* v_resTy_1628_, lean_object* v_toBind_1629_, lean_object* v_h_1630_){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___f_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1631_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1632_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
v___x_1633_ = lean_mk_empty_array_with_capacity(v___x_1624_);
v___x_1634_ = lean_array_push(v___x_1633_, v_h_1630_);
v___x_1635_ = lean_box(v_useSplitter_1625_);
lean_inc_ref(v___x_1634_);
v___f_1636_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1636_, 0, v___x_1634_);
lean_closure_set(v___f_1636_, 1, v___x_1635_);
lean_closure_set(v___f_1636_, 2, v_inst_1626_);
v___x_1637_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1632_);
lean_ctor_set(v___x_1637_, 1, v___x_1634_);
lean_ctor_set(v___x_1637_, 2, v___x_1632_);
lean_ctor_set(v___x_1637_, 3, v___x_1632_);
lean_ctor_set(v___x_1637_, 4, v___x_1632_);
v___x_1638_ = lean_apply_4(v_onAlt_1627_, v___x_1631_, v_resTy_1628_, v___x_1624_, v___x_1637_);
v___x_1639_ = lean_apply_4(v_toBind_1629_, lean_box(0), lean_box(0), v___x_1638_, v___f_1636_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed(lean_object* v___x_1640_, lean_object* v_useSplitter_1641_, lean_object* v_inst_1642_, lean_object* v_onAlt_1643_, lean_object* v_resTy_1644_, lean_object* v_toBind_1645_, lean_object* v_h_1646_){
_start:
{
uint8_t v_useSplitter_boxed_1647_; lean_object* v_res_1648_; 
v_useSplitter_boxed_1647_ = lean_unbox(v_useSplitter_1641_);
v_res_1648_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(v___x_1640_, v_useSplitter_boxed_1647_, v_inst_1642_, v_onAlt_1643_, v_resTy_1644_, v_toBind_1645_, v_h_1646_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4(lean_object* v_u_1649_, lean_object* v_resTy_1650_, lean_object* v_c_1651_, lean_object* v_h_1652_, lean_object* v_t_1653_, lean_object* v_toPure_1654_, lean_object* v_e_1655_){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1656_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_1657_ = lean_box(0);
v___x_1658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1658_, 0, v_u_1649_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = l_Lean_mkConst(v___x_1656_, v___x_1658_);
v___x_1660_ = l_Lean_mkApp5(v___x_1659_, v_resTy_1650_, v_c_1651_, v_h_1652_, v_t_1653_, v_e_1655_);
v___x_1661_ = lean_apply_2(v_toPure_1654_, lean_box(0), v___x_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(lean_object* v_u_1662_, lean_object* v_resTy_1663_, lean_object* v_c_1664_, lean_object* v_h_1665_, lean_object* v_toPure_1666_, lean_object* v_inst_1667_, lean_object* v_inst_1668_, lean_object* v_n_1669_, uint8_t v___x_1670_, lean_object* v___f_1671_, uint8_t v___x_1672_, lean_object* v_toBind_1673_, lean_object* v_t_1674_){
_start:
{
lean_object* v___f_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
lean_inc_ref(v_c_1664_);
v___f_1675_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4), 7, 6);
lean_closure_set(v___f_1675_, 0, v_u_1662_);
lean_closure_set(v___f_1675_, 1, v_resTy_1663_);
lean_closure_set(v___f_1675_, 2, v_c_1664_);
lean_closure_set(v___f_1675_, 3, v_h_1665_);
lean_closure_set(v___f_1675_, 4, v_t_1674_);
lean_closure_set(v___f_1675_, 5, v_toPure_1666_);
v___x_1676_ = l_Lean_mkNot(v_c_1664_);
v___x_1677_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1667_, v_inst_1668_, v_n_1669_, v___x_1670_, v___x_1676_, v___f_1671_, v___x_1672_);
v___x_1678_ = lean_apply_4(v_toBind_1673_, lean_box(0), lean_box(0), v___x_1677_, v___f_1675_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed(lean_object* v_u_1679_, lean_object* v_resTy_1680_, lean_object* v_c_1681_, lean_object* v_h_1682_, lean_object* v_toPure_1683_, lean_object* v_inst_1684_, lean_object* v_inst_1685_, lean_object* v_n_1686_, lean_object* v___x_1687_, lean_object* v___f_1688_, lean_object* v___x_1689_, lean_object* v_toBind_1690_, lean_object* v_t_1691_){
_start:
{
uint8_t v___x_2576__boxed_1692_; uint8_t v___x_2578__boxed_1693_; lean_object* v_res_1694_; 
v___x_2576__boxed_1692_ = lean_unbox(v___x_1687_);
v___x_2578__boxed_1693_ = lean_unbox(v___x_1689_);
v_res_1694_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(v_u_1679_, v_resTy_1680_, v_c_1681_, v_h_1682_, v_toPure_1683_, v_inst_1684_, v_inst_1685_, v_n_1686_, v___x_2576__boxed_1692_, v___f_1688_, v___x_2578__boxed_1693_, v_toBind_1690_, v_t_1691_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7(lean_object* v_u_1695_, lean_object* v_resTy_1696_, lean_object* v_c_1697_, lean_object* v_h_1698_, lean_object* v_toPure_1699_, lean_object* v_inst_1700_, lean_object* v_inst_1701_, lean_object* v___f_1702_, lean_object* v_toBind_1703_, lean_object* v___f_1704_, lean_object* v_n_1705_){
_start:
{
uint8_t v___x_1706_; uint8_t v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___f_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1706_ = 0;
v___x_1707_ = 0;
v___x_1708_ = lean_box(v___x_1706_);
v___x_1709_ = lean_box(v___x_1707_);
lean_inc(v_toBind_1703_);
lean_inc(v_n_1705_);
lean_inc_ref(v_inst_1701_);
lean_inc_ref(v_inst_1700_);
lean_inc_ref(v_c_1697_);
v___f_1710_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_1710_, 0, v_u_1695_);
lean_closure_set(v___f_1710_, 1, v_resTy_1696_);
lean_closure_set(v___f_1710_, 2, v_c_1697_);
lean_closure_set(v___f_1710_, 3, v_h_1698_);
lean_closure_set(v___f_1710_, 4, v_toPure_1699_);
lean_closure_set(v___f_1710_, 5, v_inst_1700_);
lean_closure_set(v___f_1710_, 6, v_inst_1701_);
lean_closure_set(v___f_1710_, 7, v_n_1705_);
lean_closure_set(v___f_1710_, 8, v___x_1708_);
lean_closure_set(v___f_1710_, 9, v___f_1702_);
lean_closure_set(v___f_1710_, 10, v___x_1709_);
lean_closure_set(v___f_1710_, 11, v_toBind_1703_);
v___x_1711_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1700_, v_inst_1701_, v_n_1705_, v___x_1706_, v_c_1697_, v___f_1704_, v___x_1707_);
v___x_1712_ = lean_apply_4(v_toBind_1703_, lean_box(0), lean_box(0), v___x_1711_, v___f_1710_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(lean_object* v___x_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = l_Lean_Core_mkFreshUserName(v___x_1713_, v___y_1716_, v___y_1717_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed(lean_object* v___x_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(v___x_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(lean_object* v_e_1734_, uint8_t v_useSplitter_1735_, lean_object* v_resTy_1736_, lean_object* v_toPure_1737_, lean_object* v_onAlt_1738_, lean_object* v_toBind_1739_, lean_object* v_inst_1740_, lean_object* v_inst_1741_, lean_object* v_inst_1742_, lean_object* v_u_1743_){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v_c_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v_h_1752_; 
v___x_1744_ = lean_unsigned_to_nat(1u);
v___x_1745_ = l_Lean_Expr_getAppNumArgs(v_e_1734_);
v___x_1746_ = lean_nat_sub(v___x_1745_, v___x_1744_);
v___x_1747_ = lean_nat_sub(v___x_1746_, v___x_1744_);
lean_dec(v___x_1746_);
v_c_1748_ = l_Lean_Expr_getRevArg_x21(v_e_1734_, v___x_1747_);
v___x_1749_ = lean_unsigned_to_nat(2u);
v___x_1750_ = lean_nat_sub(v___x_1745_, v___x_1749_);
lean_dec(v___x_1745_);
v___x_1751_ = lean_nat_sub(v___x_1750_, v___x_1744_);
lean_dec(v___x_1750_);
v_h_1752_ = l_Lean_Expr_getRevArg_x21(v_e_1734_, v___x_1751_);
if (v_useSplitter_1735_ == 0)
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___f_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
lean_dec_ref(v_inst_1742_);
lean_dec_ref(v_inst_1741_);
lean_dec(v_inst_1740_);
v___x_1753_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1754_ = lean_unsigned_to_nat(0u);
v___x_1755_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1739_);
lean_inc(v_onAlt_1738_);
lean_inc_ref(v_resTy_1736_);
v___f_1756_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1), 10, 9);
lean_closure_set(v___f_1756_, 0, v_u_1743_);
lean_closure_set(v___f_1756_, 1, v_resTy_1736_);
lean_closure_set(v___f_1756_, 2, v_c_1748_);
lean_closure_set(v___f_1756_, 3, v_h_1752_);
lean_closure_set(v___f_1756_, 4, v_toPure_1737_);
lean_closure_set(v___f_1756_, 5, v_onAlt_1738_);
lean_closure_set(v___f_1756_, 6, v___x_1744_);
lean_closure_set(v___f_1756_, 7, v___x_1755_);
lean_closure_set(v___f_1756_, 8, v_toBind_1739_);
v___x_1757_ = lean_apply_4(v_onAlt_1738_, v___x_1753_, v_resTy_1736_, v___x_1754_, v___x_1755_);
v___x_1758_ = lean_apply_4(v_toBind_1739_, lean_box(0), lean_box(0), v___x_1757_, v___f_1756_);
return v___x_1758_;
}
else
{
lean_object* v___x_1759_; lean_object* v___f_1760_; lean_object* v___x_1761_; lean_object* v___f_1762_; lean_object* v___f_1763_; lean_object* v___f_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1759_ = lean_box(v_useSplitter_1735_);
lean_inc_n(v_toBind_1739_, 3);
lean_inc_ref_n(v_resTy_1736_, 2);
lean_inc(v_onAlt_1738_);
lean_inc_n(v_inst_1740_, 2);
v___f_1760_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_1760_, 0, v___x_1744_);
lean_closure_set(v___f_1760_, 1, v___x_1759_);
lean_closure_set(v___f_1760_, 2, v_inst_1740_);
lean_closure_set(v___f_1760_, 3, v_onAlt_1738_);
lean_closure_set(v___f_1760_, 4, v_resTy_1736_);
lean_closure_set(v___f_1760_, 5, v_toBind_1739_);
v___x_1761_ = lean_box(v_useSplitter_1735_);
v___f_1762_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1762_, 0, v___x_1744_);
lean_closure_set(v___f_1762_, 1, v___x_1761_);
lean_closure_set(v___f_1762_, 2, v_inst_1740_);
lean_closure_set(v___f_1762_, 3, v_onAlt_1738_);
lean_closure_set(v___f_1762_, 4, v_resTy_1736_);
lean_closure_set(v___f_1762_, 5, v_toBind_1739_);
v___f_1763_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7), 11, 10);
lean_closure_set(v___f_1763_, 0, v_u_1743_);
lean_closure_set(v___f_1763_, 1, v_resTy_1736_);
lean_closure_set(v___f_1763_, 2, v_c_1748_);
lean_closure_set(v___f_1763_, 3, v_h_1752_);
lean_closure_set(v___f_1763_, 4, v_toPure_1737_);
lean_closure_set(v___f_1763_, 5, v_inst_1741_);
lean_closure_set(v___f_1763_, 6, v_inst_1742_);
lean_closure_set(v___f_1763_, 7, v___f_1762_);
lean_closure_set(v___f_1763_, 8, v_toBind_1739_);
lean_closure_set(v___f_1763_, 9, v___f_1760_);
v___f_1764_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1765_ = lean_apply_2(v_inst_1740_, lean_box(0), v___f_1764_);
v___x_1766_ = lean_apply_4(v_toBind_1739_, lean_box(0), lean_box(0), v___x_1765_, v___f_1763_);
return v___x_1766_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed(lean_object* v_e_1767_, lean_object* v_useSplitter_1768_, lean_object* v_resTy_1769_, lean_object* v_toPure_1770_, lean_object* v_onAlt_1771_, lean_object* v_toBind_1772_, lean_object* v_inst_1773_, lean_object* v_inst_1774_, lean_object* v_inst_1775_, lean_object* v_u_1776_){
_start:
{
uint8_t v_useSplitter_boxed_1777_; lean_object* v_res_1778_; 
v_useSplitter_boxed_1777_ = lean_unbox(v_useSplitter_1768_);
v_res_1778_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(v_e_1767_, v_useSplitter_boxed_1777_, v_resTy_1769_, v_toPure_1770_, v_onAlt_1771_, v_toBind_1772_, v_inst_1773_, v_inst_1774_, v_inst_1775_, v_u_1776_);
lean_dec_ref(v_e_1767_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10(lean_object* v___x_1779_, lean_object* v_inst_1780_, lean_object* v_____do__lift_1781_){
_start:
{
uint8_t v___x_1782_; uint8_t v___x_1783_; uint8_t v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1782_ = 0;
v___x_1783_ = 1;
v___x_1784_ = 1;
v___x_1785_ = lean_box(v___x_1782_);
v___x_1786_ = lean_box(v___x_1783_);
v___x_1787_ = lean_box(v___x_1782_);
v___x_1788_ = lean_box(v___x_1783_);
v___x_1789_ = lean_box(v___x_1784_);
v___x_1790_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1790_, 0, v___x_1779_);
lean_closure_set(v___x_1790_, 1, v_____do__lift_1781_);
lean_closure_set(v___x_1790_, 2, v___x_1785_);
lean_closure_set(v___x_1790_, 3, v___x_1786_);
lean_closure_set(v___x_1790_, 4, v___x_1787_);
lean_closure_set(v___x_1790_, 5, v___x_1788_);
lean_closure_set(v___x_1790_, 6, v___x_1789_);
v___x_1791_ = lean_apply_2(v_inst_1780_, lean_box(0), v___x_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11(lean_object* v_inst_1792_, lean_object* v_onAlt_1793_, lean_object* v_resTy_1794_, lean_object* v_toBind_1795_, lean_object* v_h_1796_){
_start:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___f_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1797_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1798_ = lean_unsigned_to_nat(0u);
v___x_1799_ = lean_unsigned_to_nat(1u);
v___x_1800_ = lean_mk_empty_array_with_capacity(v___x_1799_);
v___x_1801_ = lean_array_push(v___x_1800_, v_h_1796_);
lean_inc_ref_n(v___x_1801_, 2);
v___f_1802_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10), 3, 2);
lean_closure_set(v___f_1802_, 0, v___x_1801_);
lean_closure_set(v___f_1802_, 1, v_inst_1792_);
v___x_1803_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
v___x_1804_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1801_);
lean_ctor_set(v___x_1804_, 1, v___x_1801_);
lean_ctor_set(v___x_1804_, 2, v___x_1803_);
lean_ctor_set(v___x_1804_, 3, v___x_1803_);
lean_ctor_set(v___x_1804_, 4, v___x_1803_);
v___x_1805_ = lean_apply_4(v_onAlt_1793_, v___x_1797_, v_resTy_1794_, v___x_1798_, v___x_1804_);
v___x_1806_ = lean_apply_4(v_toBind_1795_, lean_box(0), lean_box(0), v___x_1805_, v___f_1802_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13(lean_object* v___x_1807_, lean_object* v_inst_1808_, lean_object* v_onAlt_1809_, lean_object* v_resTy_1810_, lean_object* v_toBind_1811_, lean_object* v_h_1812_){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___f_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1813_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1814_ = lean_mk_empty_array_with_capacity(v___x_1807_);
v___x_1815_ = lean_array_push(v___x_1814_, v_h_1812_);
lean_inc_ref_n(v___x_1815_, 2);
v___f_1816_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10), 3, 2);
lean_closure_set(v___f_1816_, 0, v___x_1815_);
lean_closure_set(v___f_1816_, 1, v_inst_1808_);
v___x_1817_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
v___x_1818_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1815_);
lean_ctor_set(v___x_1818_, 1, v___x_1815_);
lean_ctor_set(v___x_1818_, 2, v___x_1817_);
lean_ctor_set(v___x_1818_, 3, v___x_1817_);
lean_ctor_set(v___x_1818_, 4, v___x_1817_);
v___x_1819_ = lean_apply_4(v_onAlt_1809_, v___x_1813_, v_resTy_1810_, v___x_1807_, v___x_1818_);
v___x_1820_ = lean_apply_4(v_toBind_1811_, lean_box(0), lean_box(0), v___x_1819_, v___f_1816_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(lean_object* v_inst_1821_, lean_object* v_onAlt_1822_, lean_object* v_resTy_1823_, lean_object* v_toBind_1824_, lean_object* v_e_1825_, lean_object* v_toPure_1826_, lean_object* v_inst_1827_, lean_object* v_inst_1828_, lean_object* v___f_1829_, lean_object* v_u_1830_){
_start:
{
lean_object* v___x_1831_; lean_object* v___f_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v_c_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v_h_1840_; lean_object* v___f_1841_; lean_object* v___f_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1831_ = lean_unsigned_to_nat(1u);
lean_inc_n(v_toBind_1824_, 2);
lean_inc_ref(v_resTy_1823_);
lean_inc(v_inst_1821_);
v___f_1832_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13), 6, 5);
lean_closure_set(v___f_1832_, 0, v___x_1831_);
lean_closure_set(v___f_1832_, 1, v_inst_1821_);
lean_closure_set(v___f_1832_, 2, v_onAlt_1822_);
lean_closure_set(v___f_1832_, 3, v_resTy_1823_);
lean_closure_set(v___f_1832_, 4, v_toBind_1824_);
v___x_1833_ = l_Lean_Expr_getAppNumArgs(v_e_1825_);
v___x_1834_ = lean_nat_sub(v___x_1833_, v___x_1831_);
v___x_1835_ = lean_nat_sub(v___x_1834_, v___x_1831_);
lean_dec(v___x_1834_);
v_c_1836_ = l_Lean_Expr_getRevArg_x21(v_e_1825_, v___x_1835_);
v___x_1837_ = lean_unsigned_to_nat(2u);
v___x_1838_ = lean_nat_sub(v___x_1833_, v___x_1837_);
lean_dec(v___x_1833_);
v___x_1839_ = lean_nat_sub(v___x_1838_, v___x_1831_);
lean_dec(v___x_1838_);
v_h_1840_ = l_Lean_Expr_getRevArg_x21(v_e_1825_, v___x_1839_);
v___f_1841_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7), 11, 10);
lean_closure_set(v___f_1841_, 0, v_u_1830_);
lean_closure_set(v___f_1841_, 1, v_resTy_1823_);
lean_closure_set(v___f_1841_, 2, v_c_1836_);
lean_closure_set(v___f_1841_, 3, v_h_1840_);
lean_closure_set(v___f_1841_, 4, v_toPure_1826_);
lean_closure_set(v___f_1841_, 5, v_inst_1827_);
lean_closure_set(v___f_1841_, 6, v_inst_1828_);
lean_closure_set(v___f_1841_, 7, v___f_1832_);
lean_closure_set(v___f_1841_, 8, v_toBind_1824_);
lean_closure_set(v___f_1841_, 9, v___f_1829_);
v___f_1842_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1843_ = lean_apply_2(v_inst_1821_, lean_box(0), v___f_1842_);
v___x_1844_ = lean_apply_4(v_toBind_1824_, lean_box(0), lean_box(0), v___x_1843_, v___f_1841_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed(lean_object* v_inst_1845_, lean_object* v_onAlt_1846_, lean_object* v_resTy_1847_, lean_object* v_toBind_1848_, lean_object* v_e_1849_, lean_object* v_toPure_1850_, lean_object* v_inst_1851_, lean_object* v_inst_1852_, lean_object* v___f_1853_, lean_object* v_u_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(v_inst_1845_, v_onAlt_1846_, v_resTy_1847_, v_toBind_1848_, v_e_1849_, v_toPure_1850_, v_inst_1851_, v_inst_1852_, v___f_1853_, v_u_1854_);
lean_dec_ref(v_e_1849_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12(lean_object* v_onAlt_1856_, lean_object* v_resTy_1857_, lean_object* v_h_1858_){
_start:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1859_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1860_ = lean_unsigned_to_nat(0u);
v___x_1861_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
v___x_1862_ = lean_unsigned_to_nat(1u);
v___x_1863_ = lean_mk_empty_array_with_capacity(v___x_1862_);
v___x_1864_ = lean_array_push(v___x_1863_, v_h_1858_);
v___x_1865_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1861_);
lean_ctor_set(v___x_1865_, 1, v___x_1864_);
lean_ctor_set(v___x_1865_, 2, v___x_1861_);
lean_ctor_set(v___x_1865_, 3, v___x_1861_);
lean_ctor_set(v___x_1865_, 4, v___x_1861_);
v___x_1866_ = lean_apply_4(v_onAlt_1856_, v___x_1859_, v_resTy_1857_, v___x_1860_, v___x_1865_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14(lean_object* v_u_1867_, lean_object* v_resTy_1868_, lean_object* v_c_1869_, lean_object* v_t_1870_, lean_object* v_toPure_1871_, lean_object* v_e_1872_){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1873_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_1874_ = lean_box(0);
v___x_1875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1875_, 0, v_u_1867_);
lean_ctor_set(v___x_1875_, 1, v___x_1874_);
v___x_1876_ = l_Lean_mkConst(v___x_1873_, v___x_1875_);
v___x_1877_ = l_Lean_mkApp4(v___x_1876_, v_resTy_1868_, v_c_1869_, v_t_1870_, v_e_1872_);
v___x_1878_ = lean_apply_2(v_toPure_1871_, lean_box(0), v___x_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(lean_object* v_u_1879_, lean_object* v_resTy_1880_, lean_object* v_c_1881_, lean_object* v_toPure_1882_, lean_object* v_onAlt_1883_, lean_object* v___x_1884_, lean_object* v___x_1885_, lean_object* v_toBind_1886_, lean_object* v_t_1887_){
_start:
{
lean_object* v___f_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
lean_inc_ref(v_resTy_1880_);
v___f_1888_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14), 6, 5);
lean_closure_set(v___f_1888_, 0, v_u_1879_);
lean_closure_set(v___f_1888_, 1, v_resTy_1880_);
lean_closure_set(v___f_1888_, 2, v_c_1881_);
lean_closure_set(v___f_1888_, 3, v_t_1887_);
lean_closure_set(v___f_1888_, 4, v_toPure_1882_);
v___x_1889_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1890_ = lean_apply_4(v_onAlt_1883_, v___x_1889_, v_resTy_1880_, v___x_1884_, v___x_1885_);
v___x_1891_ = lean_apply_4(v_toBind_1886_, lean_box(0), lean_box(0), v___x_1890_, v___f_1888_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16(lean_object* v___x_1892_, lean_object* v_onAlt_1893_, lean_object* v_resTy_1894_, lean_object* v_h_1895_){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1896_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1897_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
v___x_1898_ = lean_mk_empty_array_with_capacity(v___x_1892_);
v___x_1899_ = lean_array_push(v___x_1898_, v_h_1895_);
v___x_1900_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1897_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
lean_ctor_set(v___x_1900_, 2, v___x_1897_);
lean_ctor_set(v___x_1900_, 3, v___x_1897_);
lean_ctor_set(v___x_1900_, 4, v___x_1897_);
v___x_1901_ = lean_apply_4(v_onAlt_1893_, v___x_1896_, v_resTy_1894_, v___x_1892_, v___x_1900_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18(lean_object* v_u_1905_, lean_object* v_resTy_1906_, lean_object* v_c_1907_, lean_object* v_t_1908_, lean_object* v_toPure_1909_, lean_object* v_e_1910_){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1911_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0));
v___x_1912_ = lean_box(0);
v___x_1913_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1913_, 0, v_u_1905_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = l_Lean_mkConst(v___x_1911_, v___x_1913_);
v___x_1915_ = l_Lean_mkApp4(v___x_1914_, v_resTy_1906_, v_c_1907_, v_t_1908_, v_e_1910_);
v___x_1916_ = lean_apply_2(v_toPure_1909_, lean_box(0), v___x_1915_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(lean_object* v_u_1917_, lean_object* v_resTy_1918_, lean_object* v_c_1919_, lean_object* v_toPure_1920_, lean_object* v_inst_1921_, lean_object* v_inst_1922_, lean_object* v_inst_1923_, lean_object* v_n_1924_, lean_object* v___f_1925_, lean_object* v_toBind_1926_, lean_object* v_t_1927_){
_start:
{
lean_object* v___f_1928_; uint8_t v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
lean_inc_ref(v_c_1919_);
v___f_1928_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18), 6, 5);
lean_closure_set(v___f_1928_, 0, v_u_1917_);
lean_closure_set(v___f_1928_, 1, v_resTy_1918_);
lean_closure_set(v___f_1928_, 2, v_c_1919_);
lean_closure_set(v___f_1928_, 3, v_t_1927_);
lean_closure_set(v___f_1928_, 4, v_toPure_1920_);
v___x_1929_ = 0;
v___x_1930_ = l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg(v_inst_1921_, v_inst_1922_, v_inst_1923_, v_n_1924_, v_c_1919_, v___x_1929_, v___f_1925_);
v___x_1931_ = lean_apply_4(v_toBind_1926_, lean_box(0), lean_box(0), v___x_1930_, v___f_1928_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(lean_object* v_u_1932_, lean_object* v_resTy_1933_, lean_object* v_c_1934_, lean_object* v_toPure_1935_, lean_object* v_inst_1936_, lean_object* v_inst_1937_, lean_object* v_inst_1938_, lean_object* v___f_1939_, lean_object* v_toBind_1940_, uint8_t v_useSplitter_1941_, lean_object* v___f_1942_, lean_object* v_n_1943_){
_start:
{
lean_object* v___f_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
lean_inc(v_toBind_1940_);
lean_inc(v_n_1943_);
lean_inc_ref(v_inst_1938_);
lean_inc_ref(v_inst_1937_);
lean_inc(v_inst_1936_);
lean_inc_ref(v_c_1934_);
v___f_1944_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19), 11, 10);
lean_closure_set(v___f_1944_, 0, v_u_1932_);
lean_closure_set(v___f_1944_, 1, v_resTy_1933_);
lean_closure_set(v___f_1944_, 2, v_c_1934_);
lean_closure_set(v___f_1944_, 3, v_toPure_1935_);
lean_closure_set(v___f_1944_, 4, v_inst_1936_);
lean_closure_set(v___f_1944_, 5, v_inst_1937_);
lean_closure_set(v___f_1944_, 6, v_inst_1938_);
lean_closure_set(v___f_1944_, 7, v_n_1943_);
lean_closure_set(v___f_1944_, 8, v___f_1939_);
lean_closure_set(v___f_1944_, 9, v_toBind_1940_);
v___x_1945_ = l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg(v_inst_1936_, v_inst_1937_, v_inst_1938_, v_n_1943_, v_c_1934_, v_useSplitter_1941_, v___f_1942_);
v___x_1946_ = lean_apply_4(v_toBind_1940_, lean_box(0), lean_box(0), v___x_1945_, v___f_1944_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___boxed(lean_object* v_u_1947_, lean_object* v_resTy_1948_, lean_object* v_c_1949_, lean_object* v_toPure_1950_, lean_object* v_inst_1951_, lean_object* v_inst_1952_, lean_object* v_inst_1953_, lean_object* v___f_1954_, lean_object* v_toBind_1955_, lean_object* v_useSplitter_1956_, lean_object* v___f_1957_, lean_object* v_n_1958_){
_start:
{
uint8_t v_useSplitter_boxed_1959_; lean_object* v_res_1960_; 
v_useSplitter_boxed_1959_ = lean_unbox(v_useSplitter_1956_);
v_res_1960_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(v_u_1947_, v_resTy_1948_, v_c_1949_, v_toPure_1950_, v_inst_1951_, v_inst_1952_, v_inst_1953_, v___f_1954_, v_toBind_1955_, v_useSplitter_boxed_1959_, v___f_1957_, v_n_1958_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(lean_object* v_e_1961_, uint8_t v_useSplitter_1962_, lean_object* v_resTy_1963_, lean_object* v_toPure_1964_, lean_object* v_onAlt_1965_, lean_object* v_toBind_1966_, lean_object* v_inst_1967_, lean_object* v_inst_1968_, lean_object* v_inst_1969_, lean_object* v___f_1970_, lean_object* v_u_1971_){
_start:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v_c_1976_; 
v___x_1972_ = lean_unsigned_to_nat(1u);
v___x_1973_ = l_Lean_Expr_getAppNumArgs(v_e_1961_);
v___x_1974_ = lean_nat_sub(v___x_1973_, v___x_1972_);
lean_dec(v___x_1973_);
v___x_1975_ = lean_nat_sub(v___x_1974_, v___x_1972_);
lean_dec(v___x_1974_);
v_c_1976_ = l_Lean_Expr_getRevArg_x21(v_e_1961_, v___x_1975_);
if (v_useSplitter_1962_ == 0)
{
lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___f_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
lean_dec(v___f_1970_);
lean_dec_ref(v_inst_1969_);
lean_dec_ref(v_inst_1968_);
lean_dec(v_inst_1967_);
v___x_1977_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1978_ = lean_unsigned_to_nat(0u);
v___x_1979_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1966_);
lean_inc(v_onAlt_1965_);
lean_inc_ref(v_resTy_1963_);
v___f_1980_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15), 9, 8);
lean_closure_set(v___f_1980_, 0, v_u_1971_);
lean_closure_set(v___f_1980_, 1, v_resTy_1963_);
lean_closure_set(v___f_1980_, 2, v_c_1976_);
lean_closure_set(v___f_1980_, 3, v_toPure_1964_);
lean_closure_set(v___f_1980_, 4, v_onAlt_1965_);
lean_closure_set(v___f_1980_, 5, v___x_1972_);
lean_closure_set(v___f_1980_, 6, v___x_1979_);
lean_closure_set(v___f_1980_, 7, v_toBind_1966_);
v___x_1981_ = lean_apply_4(v_onAlt_1965_, v___x_1977_, v_resTy_1963_, v___x_1978_, v___x_1979_);
v___x_1982_ = lean_apply_4(v_toBind_1966_, lean_box(0), lean_box(0), v___x_1981_, v___f_1980_);
return v___x_1982_;
}
else
{
lean_object* v___f_1983_; lean_object* v___x_1984_; lean_object* v___f_1985_; lean_object* v___f_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
lean_inc_ref(v_resTy_1963_);
v___f_1983_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16), 4, 3);
lean_closure_set(v___f_1983_, 0, v___x_1972_);
lean_closure_set(v___f_1983_, 1, v_onAlt_1965_);
lean_closure_set(v___f_1983_, 2, v_resTy_1963_);
v___x_1984_ = lean_box(v_useSplitter_1962_);
lean_inc(v_toBind_1966_);
lean_inc(v_inst_1967_);
v___f_1985_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20___boxed), 12, 11);
lean_closure_set(v___f_1985_, 0, v_u_1971_);
lean_closure_set(v___f_1985_, 1, v_resTy_1963_);
lean_closure_set(v___f_1985_, 2, v_c_1976_);
lean_closure_set(v___f_1985_, 3, v_toPure_1964_);
lean_closure_set(v___f_1985_, 4, v_inst_1967_);
lean_closure_set(v___f_1985_, 5, v_inst_1968_);
lean_closure_set(v___f_1985_, 6, v_inst_1969_);
lean_closure_set(v___f_1985_, 7, v___f_1983_);
lean_closure_set(v___f_1985_, 8, v_toBind_1966_);
lean_closure_set(v___f_1985_, 9, v___x_1984_);
lean_closure_set(v___f_1985_, 10, v___f_1970_);
v___f_1986_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1987_ = lean_apply_2(v_inst_1967_, lean_box(0), v___f_1986_);
v___x_1988_ = lean_apply_4(v_toBind_1966_, lean_box(0), lean_box(0), v___x_1987_, v___f_1985_);
return v___x_1988_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed(lean_object* v_e_1989_, lean_object* v_useSplitter_1990_, lean_object* v_resTy_1991_, lean_object* v_toPure_1992_, lean_object* v_onAlt_1993_, lean_object* v_toBind_1994_, lean_object* v_inst_1995_, lean_object* v_inst_1996_, lean_object* v_inst_1997_, lean_object* v___f_1998_, lean_object* v_u_1999_){
_start:
{
uint8_t v_useSplitter_boxed_2000_; lean_object* v_res_2001_; 
v_useSplitter_boxed_2000_ = lean_unbox(v_useSplitter_1990_);
v_res_2001_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(v_e_1989_, v_useSplitter_boxed_2000_, v_resTy_1991_, v_toPure_1992_, v_onAlt_1993_, v_toBind_1994_, v_inst_1995_, v_inst_1996_, v_inst_1997_, v___f_1998_, v_u_1999_);
lean_dec_ref(v_e_1989_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(lean_object* v_u_2005_, lean_object* v_resTy_2006_, lean_object* v_c_2007_, lean_object* v_h_2008_, lean_object* v_t_2009_, lean_object* v_toPure_2010_, lean_object* v_e_2011_){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2012_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0));
v___x_2013_ = lean_box(0);
v___x_2014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2014_, 0, v_u_2005_);
lean_ctor_set(v___x_2014_, 1, v___x_2013_);
v___x_2015_ = l_Lean_mkConst(v___x_2012_, v___x_2014_);
v___x_2016_ = l_Lean_mkApp5(v___x_2015_, v_resTy_2006_, v_c_2007_, v_h_2008_, v_t_2009_, v_e_2011_);
v___x_2017_ = lean_apply_2(v_toPure_2010_, lean_box(0), v___x_2016_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(lean_object* v_u_2018_, lean_object* v_resTy_2019_, lean_object* v_c_2020_, lean_object* v_h_2021_, lean_object* v_toPure_2022_, lean_object* v_onAlt_2023_, lean_object* v___x_2024_, lean_object* v___x_2025_, lean_object* v_toBind_2026_, lean_object* v_t_2027_){
_start:
{
lean_object* v___f_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
lean_inc_ref(v_resTy_2019_);
v___f_2028_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21), 7, 6);
lean_closure_set(v___f_2028_, 0, v_u_2018_);
lean_closure_set(v___f_2028_, 1, v_resTy_2019_);
lean_closure_set(v___f_2028_, 2, v_c_2020_);
lean_closure_set(v___f_2028_, 3, v_h_2021_);
lean_closure_set(v___f_2028_, 4, v_t_2027_);
lean_closure_set(v___f_2028_, 5, v_toPure_2022_);
v___x_2029_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_2030_ = lean_apply_4(v_onAlt_2023_, v___x_2029_, v_resTy_2019_, v___x_2024_, v___x_2025_);
v___x_2031_ = lean_apply_4(v_toBind_2026_, lean_box(0), lean_box(0), v___x_2030_, v___f_2028_);
return v___x_2031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28(lean_object* v_u_2035_, lean_object* v_resTy_2036_, lean_object* v_c_2037_, lean_object* v_h_2038_, lean_object* v_t_2039_, lean_object* v_toPure_2040_, lean_object* v_e_2041_){
_start:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2042_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0));
v___x_2043_ = lean_box(0);
v___x_2044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2044_, 0, v_u_2035_);
lean_ctor_set(v___x_2044_, 1, v___x_2043_);
v___x_2045_ = l_Lean_mkConst(v___x_2042_, v___x_2044_);
v___x_2046_ = l_Lean_mkApp5(v___x_2045_, v_resTy_2036_, v_c_2037_, v_h_2038_, v_t_2039_, v_e_2041_);
v___x_2047_ = lean_apply_2(v_toPure_2040_, lean_box(0), v___x_2046_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(lean_object* v_u_2048_, lean_object* v_resTy_2049_, lean_object* v_c_2050_, lean_object* v_h_2051_, lean_object* v_toPure_2052_, lean_object* v_inst_2053_, lean_object* v_inst_2054_, lean_object* v_n_2055_, uint8_t v___x_2056_, lean_object* v___f_2057_, uint8_t v___x_2058_, lean_object* v_toBind_2059_, lean_object* v_t_2060_){
_start:
{
lean_object* v___f_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
lean_inc_ref(v_c_2050_);
v___f_2061_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28), 7, 6);
lean_closure_set(v___f_2061_, 0, v_u_2048_);
lean_closure_set(v___f_2061_, 1, v_resTy_2049_);
lean_closure_set(v___f_2061_, 2, v_c_2050_);
lean_closure_set(v___f_2061_, 3, v_h_2051_);
lean_closure_set(v___f_2061_, 4, v_t_2060_);
lean_closure_set(v___f_2061_, 5, v_toPure_2052_);
v___x_2062_ = l_Lean_mkNot(v_c_2050_);
v___x_2063_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_2053_, v_inst_2054_, v_n_2055_, v___x_2056_, v___x_2062_, v___f_2057_, v___x_2058_);
v___x_2064_ = lean_apply_4(v_toBind_2059_, lean_box(0), lean_box(0), v___x_2063_, v___f_2061_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed(lean_object* v_u_2065_, lean_object* v_resTy_2066_, lean_object* v_c_2067_, lean_object* v_h_2068_, lean_object* v_toPure_2069_, lean_object* v_inst_2070_, lean_object* v_inst_2071_, lean_object* v_n_2072_, lean_object* v___x_2073_, lean_object* v___f_2074_, lean_object* v___x_2075_, lean_object* v_toBind_2076_, lean_object* v_t_2077_){
_start:
{
uint8_t v___x_3120__boxed_2078_; uint8_t v___x_3122__boxed_2079_; lean_object* v_res_2080_; 
v___x_3120__boxed_2078_ = lean_unbox(v___x_2073_);
v___x_3122__boxed_2079_ = lean_unbox(v___x_2075_);
v_res_2080_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(v_u_2065_, v_resTy_2066_, v_c_2067_, v_h_2068_, v_toPure_2069_, v_inst_2070_, v_inst_2071_, v_n_2072_, v___x_3120__boxed_2078_, v___f_2074_, v___x_3122__boxed_2079_, v_toBind_2076_, v_t_2077_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25(lean_object* v_u_2081_, lean_object* v_resTy_2082_, lean_object* v_c_2083_, lean_object* v_h_2084_, lean_object* v_toPure_2085_, lean_object* v_inst_2086_, lean_object* v_inst_2087_, lean_object* v___f_2088_, lean_object* v_toBind_2089_, lean_object* v___f_2090_, lean_object* v_n_2091_){
_start:
{
uint8_t v___x_2092_; uint8_t v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___f_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2092_ = 0;
v___x_2093_ = 0;
v___x_2094_ = lean_box(v___x_2092_);
v___x_2095_ = lean_box(v___x_2093_);
lean_inc(v_toBind_2089_);
lean_inc(v_n_2091_);
lean_inc_ref(v_inst_2087_);
lean_inc_ref(v_inst_2086_);
lean_inc_ref(v_c_2083_);
v___f_2096_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed), 13, 12);
lean_closure_set(v___f_2096_, 0, v_u_2081_);
lean_closure_set(v___f_2096_, 1, v_resTy_2082_);
lean_closure_set(v___f_2096_, 2, v_c_2083_);
lean_closure_set(v___f_2096_, 3, v_h_2084_);
lean_closure_set(v___f_2096_, 4, v_toPure_2085_);
lean_closure_set(v___f_2096_, 5, v_inst_2086_);
lean_closure_set(v___f_2096_, 6, v_inst_2087_);
lean_closure_set(v___f_2096_, 7, v_n_2091_);
lean_closure_set(v___f_2096_, 8, v___x_2094_);
lean_closure_set(v___f_2096_, 9, v___f_2088_);
lean_closure_set(v___f_2096_, 10, v___x_2095_);
lean_closure_set(v___f_2096_, 11, v_toBind_2089_);
v___x_2097_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_2086_, v_inst_2087_, v_n_2091_, v___x_2092_, v_c_2083_, v___f_2090_, v___x_2093_);
v___x_2098_ = lean_apply_4(v_toBind_2089_, lean_box(0), lean_box(0), v___x_2097_, v___f_2096_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__27(lean_object* v_e_2099_, uint8_t v_useSplitter_2100_, lean_object* v_resTy_2101_, lean_object* v_toPure_2102_, lean_object* v_onAlt_2103_, lean_object* v_toBind_2104_, lean_object* v_inst_2105_, lean_object* v_inst_2106_, lean_object* v_inst_2107_, lean_object* v_u_2108_){
_start:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v_c_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v_h_2117_; 
v___x_2109_ = lean_unsigned_to_nat(1u);
v___x_2110_ = l_Lean_Expr_getAppNumArgs(v_e_2099_);
v___x_2111_ = lean_nat_sub(v___x_2110_, v___x_2109_);
v___x_2112_ = lean_nat_sub(v___x_2111_, v___x_2109_);
lean_dec(v___x_2111_);
v_c_2113_ = l_Lean_Expr_getRevArg_x21(v_e_2099_, v___x_2112_);
v___x_2114_ = lean_unsigned_to_nat(2u);
v___x_2115_ = lean_nat_sub(v___x_2110_, v___x_2114_);
lean_dec(v___x_2110_);
v___x_2116_ = lean_nat_sub(v___x_2115_, v___x_2109_);
lean_dec(v___x_2115_);
v_h_2117_ = l_Lean_Expr_getRevArg_x21(v_e_2099_, v___x_2116_);
if (v_useSplitter_2100_ == 0)
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___f_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; 
lean_dec_ref(v_inst_2107_);
lean_dec_ref(v_inst_2106_);
lean_dec(v_inst_2105_);
v___x_2118_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_2119_ = lean_unsigned_to_nat(0u);
v___x_2120_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_2104_);
lean_inc(v_onAlt_2103_);
lean_inc_ref(v_resTy_2101_);
v___f_2121_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23), 10, 9);
lean_closure_set(v___f_2121_, 0, v_u_2108_);
lean_closure_set(v___f_2121_, 1, v_resTy_2101_);
lean_closure_set(v___f_2121_, 2, v_c_2113_);
lean_closure_set(v___f_2121_, 3, v_h_2117_);
lean_closure_set(v___f_2121_, 4, v_toPure_2102_);
lean_closure_set(v___f_2121_, 5, v_onAlt_2103_);
lean_closure_set(v___f_2121_, 6, v___x_2109_);
lean_closure_set(v___f_2121_, 7, v___x_2120_);
lean_closure_set(v___f_2121_, 8, v_toBind_2104_);
v___x_2122_ = lean_apply_4(v_onAlt_2103_, v___x_2118_, v_resTy_2101_, v___x_2119_, v___x_2120_);
v___x_2123_ = lean_apply_4(v_toBind_2104_, lean_box(0), lean_box(0), v___x_2122_, v___f_2121_);
return v___x_2123_;
}
else
{
lean_object* v___x_2124_; lean_object* v___f_2125_; lean_object* v___x_2126_; lean_object* v___f_2127_; lean_object* v___f_2128_; lean_object* v___f_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2124_ = lean_box(v_useSplitter_2100_);
lean_inc_n(v_toBind_2104_, 3);
lean_inc_ref_n(v_resTy_2101_, 2);
lean_inc(v_onAlt_2103_);
lean_inc_n(v_inst_2105_, 2);
v___f_2125_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_2125_, 0, v___x_2109_);
lean_closure_set(v___f_2125_, 1, v___x_2124_);
lean_closure_set(v___f_2125_, 2, v_inst_2105_);
lean_closure_set(v___f_2125_, 3, v_onAlt_2103_);
lean_closure_set(v___f_2125_, 4, v_resTy_2101_);
lean_closure_set(v___f_2125_, 5, v_toBind_2104_);
v___x_2126_ = lean_box(v_useSplitter_2100_);
v___f_2127_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_2127_, 0, v___x_2109_);
lean_closure_set(v___f_2127_, 1, v___x_2126_);
lean_closure_set(v___f_2127_, 2, v_inst_2105_);
lean_closure_set(v___f_2127_, 3, v_onAlt_2103_);
lean_closure_set(v___f_2127_, 4, v_resTy_2101_);
lean_closure_set(v___f_2127_, 5, v_toBind_2104_);
v___f_2128_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25), 11, 10);
lean_closure_set(v___f_2128_, 0, v_u_2108_);
lean_closure_set(v___f_2128_, 1, v_resTy_2101_);
lean_closure_set(v___f_2128_, 2, v_c_2113_);
lean_closure_set(v___f_2128_, 3, v_h_2117_);
lean_closure_set(v___f_2128_, 4, v_toPure_2102_);
lean_closure_set(v___f_2128_, 5, v_inst_2106_);
lean_closure_set(v___f_2128_, 6, v_inst_2107_);
lean_closure_set(v___f_2128_, 7, v___f_2127_);
lean_closure_set(v___f_2128_, 8, v_toBind_2104_);
lean_closure_set(v___f_2128_, 9, v___f_2125_);
v___f_2129_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_2130_ = lean_apply_2(v_inst_2105_, lean_box(0), v___f_2129_);
v___x_2131_ = lean_apply_4(v_toBind_2104_, lean_box(0), lean_box(0), v___x_2130_, v___f_2128_);
return v___x_2131_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__27___boxed(lean_object* v_e_2132_, lean_object* v_useSplitter_2133_, lean_object* v_resTy_2134_, lean_object* v_toPure_2135_, lean_object* v_onAlt_2136_, lean_object* v_toBind_2137_, lean_object* v_inst_2138_, lean_object* v_inst_2139_, lean_object* v_inst_2140_, lean_object* v_u_2141_){
_start:
{
uint8_t v_useSplitter_boxed_2142_; lean_object* v_res_2143_; 
v_useSplitter_boxed_2142_ = lean_unbox(v_useSplitter_2133_);
v_res_2143_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__27(v_e_2132_, v_useSplitter_boxed_2142_, v_resTy_2134_, v_toPure_2135_, v_onAlt_2136_, v_toBind_2137_, v_inst_2138_, v_inst_2139_, v_inst_2140_, v_u_2141_);
lean_dec_ref(v_e_2132_);
return v_res_2143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__36(lean_object* v_inst_2144_, lean_object* v_onAlt_2145_, lean_object* v_resTy_2146_, lean_object* v_toBind_2147_, lean_object* v_e_2148_, lean_object* v_toPure_2149_, lean_object* v_inst_2150_, lean_object* v_inst_2151_, lean_object* v___f_2152_, lean_object* v_u_2153_){
_start:
{
lean_object* v___x_2154_; lean_object* v___f_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v_c_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v_h_2163_; lean_object* v___f_2164_; lean_object* v___f_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2154_ = lean_unsigned_to_nat(1u);
lean_inc_n(v_toBind_2147_, 2);
lean_inc_ref(v_resTy_2146_);
lean_inc(v_inst_2144_);
v___f_2155_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13), 6, 5);
lean_closure_set(v___f_2155_, 0, v___x_2154_);
lean_closure_set(v___f_2155_, 1, v_inst_2144_);
lean_closure_set(v___f_2155_, 2, v_onAlt_2145_);
lean_closure_set(v___f_2155_, 3, v_resTy_2146_);
lean_closure_set(v___f_2155_, 4, v_toBind_2147_);
v___x_2156_ = l_Lean_Expr_getAppNumArgs(v_e_2148_);
v___x_2157_ = lean_nat_sub(v___x_2156_, v___x_2154_);
v___x_2158_ = lean_nat_sub(v___x_2157_, v___x_2154_);
lean_dec(v___x_2157_);
v_c_2159_ = l_Lean_Expr_getRevArg_x21(v_e_2148_, v___x_2158_);
v___x_2160_ = lean_unsigned_to_nat(2u);
v___x_2161_ = lean_nat_sub(v___x_2156_, v___x_2160_);
lean_dec(v___x_2156_);
v___x_2162_ = lean_nat_sub(v___x_2161_, v___x_2154_);
lean_dec(v___x_2161_);
v_h_2163_ = l_Lean_Expr_getRevArg_x21(v_e_2148_, v___x_2162_);
v___f_2164_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__25), 11, 10);
lean_closure_set(v___f_2164_, 0, v_u_2153_);
lean_closure_set(v___f_2164_, 1, v_resTy_2146_);
lean_closure_set(v___f_2164_, 2, v_c_2159_);
lean_closure_set(v___f_2164_, 3, v_h_2163_);
lean_closure_set(v___f_2164_, 4, v_toPure_2149_);
lean_closure_set(v___f_2164_, 5, v_inst_2150_);
lean_closure_set(v___f_2164_, 6, v_inst_2151_);
lean_closure_set(v___f_2164_, 7, v___f_2155_);
lean_closure_set(v___f_2164_, 8, v_toBind_2147_);
lean_closure_set(v___f_2164_, 9, v___f_2152_);
v___f_2165_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_2166_ = lean_apply_2(v_inst_2144_, lean_box(0), v___f_2165_);
v___x_2167_ = lean_apply_4(v_toBind_2147_, lean_box(0), lean_box(0), v___x_2166_, v___f_2164_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__36___boxed(lean_object* v_inst_2168_, lean_object* v_onAlt_2169_, lean_object* v_resTy_2170_, lean_object* v_toBind_2171_, lean_object* v_e_2172_, lean_object* v_toPure_2173_, lean_object* v_inst_2174_, lean_object* v_inst_2175_, lean_object* v___f_2176_, lean_object* v_u_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__36(v_inst_2168_, v_onAlt_2169_, v_resTy_2170_, v_toBind_2171_, v_e_2172_, v_toPure_2173_, v_inst_2174_, v_inst_2175_, v___f_2176_, v_u_2177_);
lean_dec_ref(v_e_2172_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__26(lean_object* v_onAlt_2179_, lean_object* v_resTy_2180_, lean_object* v_h_2181_){
_start:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2182_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_2183_ = lean_unsigned_to_nat(0u);
v___x_2184_ = lean_unsigned_to_nat(1u);
v___x_2185_ = lean_mk_empty_array_with_capacity(v___x_2184_);
v___x_2186_ = lean_array_push(v___x_2185_, v_h_2181_);
v___x_2187_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
lean_inc_ref(v___x_2186_);
v___x_2188_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2186_);
lean_ctor_set(v___x_2188_, 1, v___x_2186_);
lean_ctor_set(v___x_2188_, 2, v___x_2187_);
lean_ctor_set(v___x_2188_, 3, v___x_2187_);
lean_ctor_set(v___x_2188_, 4, v___x_2187_);
v___x_2189_ = lean_apply_4(v_onAlt_2179_, v___x_2182_, v_resTy_2180_, v___x_2183_, v___x_2188_);
return v___x_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__29(lean_object* v___x_2190_, lean_object* v_onAlt_2191_, lean_object* v_resTy_2192_, lean_object* v_h_2193_){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2194_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_2195_ = lean_mk_empty_array_with_capacity(v___x_2190_);
v___x_2196_ = lean_array_push(v___x_2195_, v_h_2193_);
v___x_2197_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__44___closed__0));
lean_inc_ref(v___x_2196_);
v___x_2198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2196_);
lean_ctor_set(v___x_2198_, 1, v___x_2196_);
lean_ctor_set(v___x_2198_, 2, v___x_2197_);
lean_ctor_set(v___x_2198_, 3, v___x_2197_);
lean_ctor_set(v___x_2198_, 4, v___x_2197_);
v___x_2199_ = lean_apply_4(v_onAlt_2191_, v___x_2194_, v_resTy_2192_, v___x_2190_, v___x_2198_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__32(lean_object* v_u_2200_, lean_object* v_resTy_2201_, lean_object* v_c_2202_, lean_object* v_toPure_2203_, lean_object* v_inst_2204_, lean_object* v_inst_2205_, lean_object* v_inst_2206_, lean_object* v___f_2207_, lean_object* v_toBind_2208_, lean_object* v___f_2209_, lean_object* v_n_2210_){
_start:
{
lean_object* v___f_2211_; uint8_t v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
lean_inc(v_toBind_2208_);
lean_inc(v_n_2210_);
lean_inc_ref(v_inst_2206_);
lean_inc_ref(v_inst_2205_);
lean_inc(v_inst_2204_);
lean_inc_ref(v_c_2202_);
v___f_2211_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19), 11, 10);
lean_closure_set(v___f_2211_, 0, v_u_2200_);
lean_closure_set(v___f_2211_, 1, v_resTy_2201_);
lean_closure_set(v___f_2211_, 2, v_c_2202_);
lean_closure_set(v___f_2211_, 3, v_toPure_2203_);
lean_closure_set(v___f_2211_, 4, v_inst_2204_);
lean_closure_set(v___f_2211_, 5, v_inst_2205_);
lean_closure_set(v___f_2211_, 6, v_inst_2206_);
lean_closure_set(v___f_2211_, 7, v_n_2210_);
lean_closure_set(v___f_2211_, 8, v___f_2207_);
lean_closure_set(v___f_2211_, 9, v_toBind_2208_);
v___x_2212_ = 1;
v___x_2213_ = l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg(v_inst_2204_, v_inst_2205_, v_inst_2206_, v_n_2210_, v_c_2202_, v___x_2212_, v___f_2209_);
v___x_2214_ = lean_apply_4(v_toBind_2208_, lean_box(0), lean_box(0), v___x_2213_, v___f_2211_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31(lean_object* v_onAlt_2215_, lean_object* v_resTy_2216_, lean_object* v_e_2217_, lean_object* v_toPure_2218_, lean_object* v_inst_2219_, lean_object* v_inst_2220_, lean_object* v_inst_2221_, lean_object* v_toBind_2222_, lean_object* v___f_2223_, lean_object* v_u_2224_){
_start:
{
lean_object* v___x_2225_; lean_object* v___f_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v_c_2230_; lean_object* v___f_2231_; lean_object* v___f_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2225_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_resTy_2216_);
v___f_2226_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__29), 4, 3);
lean_closure_set(v___f_2226_, 0, v___x_2225_);
lean_closure_set(v___f_2226_, 1, v_onAlt_2215_);
lean_closure_set(v___f_2226_, 2, v_resTy_2216_);
v___x_2227_ = l_Lean_Expr_getAppNumArgs(v_e_2217_);
v___x_2228_ = lean_nat_sub(v___x_2227_, v___x_2225_);
lean_dec(v___x_2227_);
v___x_2229_ = lean_nat_sub(v___x_2228_, v___x_2225_);
lean_dec(v___x_2228_);
v_c_2230_ = l_Lean_Expr_getRevArg_x21(v_e_2217_, v___x_2229_);
lean_inc(v_toBind_2222_);
lean_inc(v_inst_2219_);
v___f_2231_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__32), 11, 10);
lean_closure_set(v___f_2231_, 0, v_u_2224_);
lean_closure_set(v___f_2231_, 1, v_resTy_2216_);
lean_closure_set(v___f_2231_, 2, v_c_2230_);
lean_closure_set(v___f_2231_, 3, v_toPure_2218_);
lean_closure_set(v___f_2231_, 4, v_inst_2219_);
lean_closure_set(v___f_2231_, 5, v_inst_2220_);
lean_closure_set(v___f_2231_, 6, v_inst_2221_);
lean_closure_set(v___f_2231_, 7, v___f_2226_);
lean_closure_set(v___f_2231_, 8, v_toBind_2222_);
lean_closure_set(v___f_2231_, 9, v___f_2223_);
v___f_2232_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_2233_ = lean_apply_2(v_inst_2219_, lean_box(0), v___f_2232_);
v___x_2234_ = lean_apply_4(v_toBind_2222_, lean_box(0), lean_box(0), v___x_2233_, v___f_2231_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31___boxed(lean_object* v_onAlt_2235_, lean_object* v_resTy_2236_, lean_object* v_e_2237_, lean_object* v_toPure_2238_, lean_object* v_inst_2239_, lean_object* v_inst_2240_, lean_object* v_inst_2241_, lean_object* v_toBind_2242_, lean_object* v___f_2243_, lean_object* v_u_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31(v_onAlt_2235_, v_resTy_2236_, v_e_2237_, v_toPure_2238_, v_inst_2239_, v_inst_2240_, v_inst_2241_, v_toBind_2242_, v___f_2243_, v_u_2244_);
lean_dec_ref(v_e_2237_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30(lean_object* v_onAlt_2246_, lean_object* v_idx_2247_, lean_object* v_expAltType_2248_, lean_object* v_altFVars_2249_, lean_object* v___alt_2250_){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2251_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2));
v___x_2252_ = lean_unsigned_to_nat(1u);
v___x_2253_ = lean_nat_add(v_idx_2247_, v___x_2252_);
v___x_2254_ = lean_name_append_index_after(v___x_2251_, v___x_2253_);
v___x_2255_ = lean_apply_4(v_onAlt_2246_, v___x_2254_, v_expAltType_2248_, v_idx_2247_, v_altFVars_2249_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30___boxed(lean_object* v_onAlt_2256_, lean_object* v_idx_2257_, lean_object* v_expAltType_2258_, lean_object* v_altFVars_2259_, lean_object* v___alt_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30(v_onAlt_2256_, v_idx_2257_, v_expAltType_2258_, v_altFVars_2259_, v___alt_2260_);
lean_dec_ref(v___alt_2260_);
return v_res_2261_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__33(lean_object* v_toMatcherInfo_2262_, lean_object* v_i_2263_, lean_object* v_a_2264_, lean_object* v_x_2265_){
_start:
{
uint8_t v___x_2266_; 
v___x_2266_ = l_Lean_Expr_isFVar(v_a_2264_);
if (v___x_2266_ == 0)
{
return v___x_2266_;
}
else
{
lean_object* v_discrInfos_2267_; lean_object* v___x_2268_; uint8_t v___x_2269_; 
v_discrInfos_2267_ = lean_ctor_get(v_toMatcherInfo_2262_, 4);
v___x_2268_ = lean_array_get_size(v_discrInfos_2267_);
v___x_2269_ = lean_nat_dec_lt(v_i_2263_, v___x_2268_);
if (v___x_2269_ == 0)
{
return v___x_2266_;
}
else
{
lean_object* v___x_2270_; 
v___x_2270_ = lean_array_fget_borrowed(v_discrInfos_2267_, v_i_2263_);
if (lean_obj_tag(v___x_2270_) == 0)
{
return v___x_2266_;
}
else
{
uint8_t v___x_2271_; 
v___x_2271_ = 0;
return v___x_2271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__33___boxed(lean_object* v_toMatcherInfo_2272_, lean_object* v_i_2273_, lean_object* v_a_2274_, lean_object* v_x_2275_){
_start:
{
uint8_t v_res_2276_; lean_object* v_r_2277_; 
v_res_2276_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__33(v_toMatcherInfo_2272_, v_i_2273_, v_a_2274_, v_x_2275_);
lean_dec_ref(v_a_2274_);
lean_dec(v_i_2273_);
lean_dec_ref(v_toMatcherInfo_2272_);
v_r_2277_ = lean_box(v_res_2276_);
return v_r_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__34(lean_object* v_mask_2278_, lean_object* v_absMotiveBody_2279_, lean_object* v_toPure_2280_, lean_object* v_xs_2281_, lean_object* v___body_2282_){
_start:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2283_ = l_Lean_Array_mask___redArg(v_mask_2278_, v_xs_2281_);
v___x_2284_ = lean_expr_instantiate_rev(v_absMotiveBody_2279_, v___x_2283_);
lean_dec(v___x_2283_);
v___x_2285_ = lean_apply_2(v_toPure_2280_, lean_box(0), v___x_2284_);
return v___x_2285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__34___boxed(lean_object* v_mask_2286_, lean_object* v_absMotiveBody_2287_, lean_object* v_toPure_2288_, lean_object* v_xs_2289_, lean_object* v___body_2290_){
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__34(v_mask_2286_, v_absMotiveBody_2287_, v_toPure_2288_, v_xs_2289_, v___body_2290_);
lean_dec_ref(v___body_2290_);
lean_dec_ref(v_absMotiveBody_2287_);
lean_dec_ref(v_mask_2286_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__35(lean_object* v_toFunctor_2292_, lean_object* v_mask_2293_, lean_object* v_toPure_2294_, lean_object* v_inst_2295_, lean_object* v_inst_2296_, lean_object* v_inst_2297_, lean_object* v_inst_2298_, lean_object* v_inst_2299_, lean_object* v_matcherApp_2300_, uint8_t v_useSplitter_2301_, lean_object* v___f_2302_, lean_object* v___f_2303_, lean_object* v_absMotiveBody_2304_){
_start:
{
lean_object* v_map_2305_; lean_object* v___f_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v_map_2305_ = lean_ctor_get(v_toFunctor_2292_, 0);
lean_inc(v_map_2305_);
lean_dec_ref(v_toFunctor_2292_);
lean_inc(v_toPure_2294_);
v___f_2306_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__34___boxed), 5, 3);
lean_closure_set(v___f_2306_, 0, v_mask_2293_);
lean_closure_set(v___f_2306_, 1, v_absMotiveBody_2304_);
lean_closure_set(v___f_2306_, 2, v_toPure_2294_);
v___x_2307_ = lean_apply_1(v_toPure_2294_, lean_box(0));
lean_inc(v___x_2307_);
v___x_2308_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_2295_, v_inst_2296_, v_inst_2297_, v_inst_2298_, v_inst_2299_, v_matcherApp_2300_, v_useSplitter_2301_, v_useSplitter_2301_, v___x_2307_, v___f_2306_, v___f_2302_, v___x_2307_);
v___x_2309_ = lean_apply_4(v_map_2305_, lean_box(0), lean_box(0), v___f_2303_, v___x_2308_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__35___boxed(lean_object* v_toFunctor_2310_, lean_object* v_mask_2311_, lean_object* v_toPure_2312_, lean_object* v_inst_2313_, lean_object* v_inst_2314_, lean_object* v_inst_2315_, lean_object* v_inst_2316_, lean_object* v_inst_2317_, lean_object* v_matcherApp_2318_, lean_object* v_useSplitter_2319_, lean_object* v___f_2320_, lean_object* v___f_2321_, lean_object* v_absMotiveBody_2322_){
_start:
{
uint8_t v_useSplitter_boxed_2323_; lean_object* v_res_2324_; 
v_useSplitter_boxed_2323_ = lean_unbox(v_useSplitter_2319_);
v_res_2324_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__35(v_toFunctor_2310_, v_mask_2311_, v_toPure_2312_, v_inst_2313_, v_inst_2314_, v_inst_2315_, v_inst_2316_, v_inst_2317_, v_matcherApp_2318_, v_useSplitter_boxed_2323_, v___f_2320_, v___f_2321_, v_absMotiveBody_2322_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(lean_object* v_inst_2326_, lean_object* v_inst_2327_, lean_object* v_inst_2328_, lean_object* v_inst_2329_, lean_object* v_inst_2330_, lean_object* v_info_2331_, lean_object* v_resTy_2332_, lean_object* v_onAlt_2333_, uint8_t v_useSplitter_2334_){
_start:
{
switch(lean_obj_tag(v_info_2331_))
{
case 0:
{
lean_object* v_toApplicative_2335_; lean_object* v_toBind_2336_; lean_object* v_toPure_2337_; lean_object* v_e_2338_; lean_object* v___x_2339_; lean_object* v___f_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v_toApplicative_2335_ = lean_ctor_get(v_inst_2328_, 0);
lean_dec_ref(v_inst_2330_);
lean_dec_ref(v_inst_2329_);
v_toBind_2336_ = lean_ctor_get(v_inst_2328_, 1);
lean_inc_n(v_toBind_2336_, 2);
v_toPure_2337_ = lean_ctor_get(v_toApplicative_2335_, 1);
lean_inc(v_toPure_2337_);
v_e_2338_ = lean_ctor_get(v_info_2331_, 0);
lean_inc_ref(v_e_2338_);
lean_dec_ref_known(v_info_2331_, 1);
v___x_2339_ = lean_box(v_useSplitter_2334_);
lean_inc(v_inst_2326_);
lean_inc_ref(v_resTy_2332_);
v___f_2340_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed), 10, 9);
lean_closure_set(v___f_2340_, 0, v_e_2338_);
lean_closure_set(v___f_2340_, 1, v___x_2339_);
lean_closure_set(v___f_2340_, 2, v_resTy_2332_);
lean_closure_set(v___f_2340_, 3, v_toPure_2337_);
lean_closure_set(v___f_2340_, 4, v_onAlt_2333_);
lean_closure_set(v___f_2340_, 5, v_toBind_2336_);
lean_closure_set(v___f_2340_, 6, v_inst_2326_);
lean_closure_set(v___f_2340_, 7, v_inst_2327_);
lean_closure_set(v___f_2340_, 8, v_inst_2328_);
v___x_2341_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2341_, 0, v_resTy_2332_);
v___x_2342_ = lean_apply_2(v_inst_2326_, lean_box(0), v___x_2341_);
v___x_2343_ = lean_apply_4(v_toBind_2336_, lean_box(0), lean_box(0), v___x_2342_, v___f_2340_);
return v___x_2343_;
}
case 1:
{
lean_object* v_toApplicative_2344_; lean_object* v_toBind_2345_; lean_object* v_toPure_2346_; lean_object* v_e_2347_; lean_object* v___f_2348_; lean_object* v___f_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v_toApplicative_2344_ = lean_ctor_get(v_inst_2328_, 0);
lean_dec_ref(v_inst_2330_);
lean_dec_ref(v_inst_2329_);
v_toBind_2345_ = lean_ctor_get(v_inst_2328_, 1);
lean_inc_n(v_toBind_2345_, 3);
v_toPure_2346_ = lean_ctor_get(v_toApplicative_2344_, 1);
lean_inc(v_toPure_2346_);
v_e_2347_ = lean_ctor_get(v_info_2331_, 0);
lean_inc_ref(v_e_2347_);
lean_dec_ref_known(v_info_2331_, 1);
lean_inc_ref_n(v_resTy_2332_, 2);
lean_inc(v_onAlt_2333_);
lean_inc_n(v_inst_2326_, 2);
v___f_2348_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11), 5, 4);
lean_closure_set(v___f_2348_, 0, v_inst_2326_);
lean_closure_set(v___f_2348_, 1, v_onAlt_2333_);
lean_closure_set(v___f_2348_, 2, v_resTy_2332_);
lean_closure_set(v___f_2348_, 3, v_toBind_2345_);
v___f_2349_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed), 10, 9);
lean_closure_set(v___f_2349_, 0, v_inst_2326_);
lean_closure_set(v___f_2349_, 1, v_onAlt_2333_);
lean_closure_set(v___f_2349_, 2, v_resTy_2332_);
lean_closure_set(v___f_2349_, 3, v_toBind_2345_);
lean_closure_set(v___f_2349_, 4, v_e_2347_);
lean_closure_set(v___f_2349_, 5, v_toPure_2346_);
lean_closure_set(v___f_2349_, 6, v_inst_2327_);
lean_closure_set(v___f_2349_, 7, v_inst_2328_);
lean_closure_set(v___f_2349_, 8, v___f_2348_);
v___x_2350_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2350_, 0, v_resTy_2332_);
v___x_2351_ = lean_apply_2(v_inst_2326_, lean_box(0), v___x_2350_);
v___x_2352_ = lean_apply_4(v_toBind_2345_, lean_box(0), lean_box(0), v___x_2351_, v___f_2349_);
return v___x_2352_;
}
case 2:
{
lean_object* v_toApplicative_2353_; lean_object* v_toBind_2354_; lean_object* v_toPure_2355_; lean_object* v_e_2356_; lean_object* v___f_2357_; lean_object* v___x_2358_; lean_object* v___f_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v_toApplicative_2353_ = lean_ctor_get(v_inst_2328_, 0);
lean_dec_ref(v_inst_2330_);
lean_dec_ref(v_inst_2329_);
v_toBind_2354_ = lean_ctor_get(v_inst_2328_, 1);
lean_inc_n(v_toBind_2354_, 2);
v_toPure_2355_ = lean_ctor_get(v_toApplicative_2353_, 1);
lean_inc(v_toPure_2355_);
v_e_2356_ = lean_ctor_get(v_info_2331_, 0);
lean_inc_ref(v_e_2356_);
lean_dec_ref_known(v_info_2331_, 1);
lean_inc_ref_n(v_resTy_2332_, 2);
lean_inc(v_onAlt_2333_);
v___f_2357_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12), 3, 2);
lean_closure_set(v___f_2357_, 0, v_onAlt_2333_);
lean_closure_set(v___f_2357_, 1, v_resTy_2332_);
v___x_2358_ = lean_box(v_useSplitter_2334_);
lean_inc(v_inst_2326_);
v___f_2359_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed), 11, 10);
lean_closure_set(v___f_2359_, 0, v_e_2356_);
lean_closure_set(v___f_2359_, 1, v___x_2358_);
lean_closure_set(v___f_2359_, 2, v_resTy_2332_);
lean_closure_set(v___f_2359_, 3, v_toPure_2355_);
lean_closure_set(v___f_2359_, 4, v_onAlt_2333_);
lean_closure_set(v___f_2359_, 5, v_toBind_2354_);
lean_closure_set(v___f_2359_, 6, v_inst_2326_);
lean_closure_set(v___f_2359_, 7, v_inst_2327_);
lean_closure_set(v___f_2359_, 8, v_inst_2328_);
lean_closure_set(v___f_2359_, 9, v___f_2357_);
v___x_2360_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2360_, 0, v_resTy_2332_);
v___x_2361_ = lean_apply_2(v_inst_2326_, lean_box(0), v___x_2360_);
v___x_2362_ = lean_apply_4(v_toBind_2354_, lean_box(0), lean_box(0), v___x_2361_, v___f_2359_);
return v___x_2362_;
}
case 3:
{
lean_object* v_toApplicative_2363_; lean_object* v_toBind_2364_; lean_object* v_toPure_2365_; lean_object* v_e_2366_; lean_object* v___x_2367_; lean_object* v___f_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v_toApplicative_2363_ = lean_ctor_get(v_inst_2328_, 0);
lean_dec_ref(v_inst_2330_);
lean_dec_ref(v_inst_2329_);
v_toBind_2364_ = lean_ctor_get(v_inst_2328_, 1);
lean_inc_n(v_toBind_2364_, 2);
v_toPure_2365_ = lean_ctor_get(v_toApplicative_2363_, 1);
lean_inc(v_toPure_2365_);
v_e_2366_ = lean_ctor_get(v_info_2331_, 0);
lean_inc_ref(v_e_2366_);
lean_dec_ref_known(v_info_2331_, 1);
v___x_2367_ = lean_box(v_useSplitter_2334_);
lean_inc(v_inst_2326_);
lean_inc_ref(v_resTy_2332_);
v___f_2368_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__27___boxed), 10, 9);
lean_closure_set(v___f_2368_, 0, v_e_2366_);
lean_closure_set(v___f_2368_, 1, v___x_2367_);
lean_closure_set(v___f_2368_, 2, v_resTy_2332_);
lean_closure_set(v___f_2368_, 3, v_toPure_2365_);
lean_closure_set(v___f_2368_, 4, v_onAlt_2333_);
lean_closure_set(v___f_2368_, 5, v_toBind_2364_);
lean_closure_set(v___f_2368_, 6, v_inst_2326_);
lean_closure_set(v___f_2368_, 7, v_inst_2327_);
lean_closure_set(v___f_2368_, 8, v_inst_2328_);
v___x_2369_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2369_, 0, v_resTy_2332_);
v___x_2370_ = lean_apply_2(v_inst_2326_, lean_box(0), v___x_2369_);
v___x_2371_ = lean_apply_4(v_toBind_2364_, lean_box(0), lean_box(0), v___x_2370_, v___f_2368_);
return v___x_2371_;
}
case 4:
{
lean_object* v_toApplicative_2372_; lean_object* v_toBind_2373_; lean_object* v_toPure_2374_; lean_object* v_e_2375_; lean_object* v___f_2376_; lean_object* v___f_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v_toApplicative_2372_ = lean_ctor_get(v_inst_2328_, 0);
lean_dec_ref(v_inst_2330_);
lean_dec_ref(v_inst_2329_);
v_toBind_2373_ = lean_ctor_get(v_inst_2328_, 1);
lean_inc_n(v_toBind_2373_, 3);
v_toPure_2374_ = lean_ctor_get(v_toApplicative_2372_, 1);
lean_inc(v_toPure_2374_);
v_e_2375_ = lean_ctor_get(v_info_2331_, 0);
lean_inc_ref(v_e_2375_);
lean_dec_ref_known(v_info_2331_, 1);
lean_inc_ref_n(v_resTy_2332_, 2);
lean_inc(v_onAlt_2333_);
lean_inc_n(v_inst_2326_, 2);
v___f_2376_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11), 5, 4);
lean_closure_set(v___f_2376_, 0, v_inst_2326_);
lean_closure_set(v___f_2376_, 1, v_onAlt_2333_);
lean_closure_set(v___f_2376_, 2, v_resTy_2332_);
lean_closure_set(v___f_2376_, 3, v_toBind_2373_);
v___f_2377_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__36___boxed), 10, 9);
lean_closure_set(v___f_2377_, 0, v_inst_2326_);
lean_closure_set(v___f_2377_, 1, v_onAlt_2333_);
lean_closure_set(v___f_2377_, 2, v_resTy_2332_);
lean_closure_set(v___f_2377_, 3, v_toBind_2373_);
lean_closure_set(v___f_2377_, 4, v_e_2375_);
lean_closure_set(v___f_2377_, 5, v_toPure_2374_);
lean_closure_set(v___f_2377_, 6, v_inst_2327_);
lean_closure_set(v___f_2377_, 7, v_inst_2328_);
lean_closure_set(v___f_2377_, 8, v___f_2376_);
v___x_2378_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2378_, 0, v_resTy_2332_);
v___x_2379_ = lean_apply_2(v_inst_2326_, lean_box(0), v___x_2378_);
v___x_2380_ = lean_apply_4(v_toBind_2373_, lean_box(0), lean_box(0), v___x_2379_, v___f_2377_);
return v___x_2380_;
}
case 5:
{
lean_object* v_toApplicative_2381_; lean_object* v_toBind_2382_; lean_object* v_toPure_2383_; lean_object* v_e_2384_; lean_object* v___f_2385_; lean_object* v___f_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v_toApplicative_2381_ = lean_ctor_get(v_inst_2328_, 0);
lean_dec_ref(v_inst_2330_);
lean_dec_ref(v_inst_2329_);
v_toBind_2382_ = lean_ctor_get(v_inst_2328_, 1);
lean_inc_n(v_toBind_2382_, 2);
v_toPure_2383_ = lean_ctor_get(v_toApplicative_2381_, 1);
lean_inc(v_toPure_2383_);
v_e_2384_ = lean_ctor_get(v_info_2331_, 0);
lean_inc_ref(v_e_2384_);
lean_dec_ref_known(v_info_2331_, 1);
lean_inc_ref_n(v_resTy_2332_, 2);
lean_inc(v_onAlt_2333_);
v___f_2385_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__26), 3, 2);
lean_closure_set(v___f_2385_, 0, v_onAlt_2333_);
lean_closure_set(v___f_2385_, 1, v_resTy_2332_);
lean_inc(v_inst_2326_);
v___f_2386_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__31___boxed), 10, 9);
lean_closure_set(v___f_2386_, 0, v_onAlt_2333_);
lean_closure_set(v___f_2386_, 1, v_resTy_2332_);
lean_closure_set(v___f_2386_, 2, v_e_2384_);
lean_closure_set(v___f_2386_, 3, v_toPure_2383_);
lean_closure_set(v___f_2386_, 4, v_inst_2326_);
lean_closure_set(v___f_2386_, 5, v_inst_2327_);
lean_closure_set(v___f_2386_, 6, v_inst_2328_);
lean_closure_set(v___f_2386_, 7, v_toBind_2382_);
lean_closure_set(v___f_2386_, 8, v___f_2385_);
v___x_2387_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_2387_, 0, v_resTy_2332_);
v___x_2388_ = lean_apply_2(v_inst_2326_, lean_box(0), v___x_2387_);
v___x_2389_ = lean_apply_4(v_toBind_2382_, lean_box(0), lean_box(0), v___x_2388_, v___f_2386_);
return v___x_2389_;
}
default: 
{
lean_object* v_toApplicative_2390_; lean_object* v_matcherApp_2391_; lean_object* v_toBind_2392_; lean_object* v_toFunctor_2393_; lean_object* v_toPure_2394_; lean_object* v_toMatcherInfo_2395_; lean_object* v_discrs_2396_; lean_object* v___f_2397_; lean_object* v___f_2398_; lean_object* v___f_2399_; lean_object* v___x_2400_; size_t v_sz_2401_; size_t v___x_2402_; lean_object* v_mask_2403_; lean_object* v___x_2404_; lean_object* v___f_2405_; lean_object* v_maskedDiscrs_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
v_toApplicative_2390_ = lean_ctor_get(v_inst_2328_, 0);
v_matcherApp_2391_ = lean_ctor_get(v_info_2331_, 0);
lean_inc_ref(v_matcherApp_2391_);
lean_dec_ref_known(v_info_2331_, 1);
v_toBind_2392_ = lean_ctor_get(v_inst_2328_, 1);
lean_inc(v_toBind_2392_);
v_toFunctor_2393_ = lean_ctor_get(v_toApplicative_2390_, 0);
lean_inc_ref(v_toFunctor_2393_);
v_toPure_2394_ = lean_ctor_get(v_toApplicative_2390_, 1);
lean_inc(v_toPure_2394_);
v_toMatcherInfo_2395_ = lean_ctor_get(v_matcherApp_2391_, 0);
v_discrs_2396_ = lean_ctor_get(v_matcherApp_2391_, 5);
lean_inc_ref_n(v_discrs_2396_, 2);
v___f_2397_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0));
v___f_2398_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__30___boxed), 5, 1);
lean_closure_set(v___f_2398_, 0, v_onAlt_2333_);
lean_inc_ref(v_toMatcherInfo_2395_);
v___f_2399_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__33___boxed), 4, 1);
lean_closure_set(v___f_2399_, 0, v_toMatcherInfo_2395_);
v___x_2400_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__46___closed__9));
v_sz_2401_ = lean_array_size(v_discrs_2396_);
v___x_2402_ = ((size_t)0ULL);
v_mask_2403_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2400_, v_discrs_2396_, v___f_2399_, v_sz_2401_, v___x_2402_, v_discrs_2396_);
v___x_2404_ = lean_box(v_useSplitter_2334_);
lean_inc(v_inst_2326_);
lean_inc(v_mask_2403_);
v___f_2405_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__35___boxed), 13, 12);
lean_closure_set(v___f_2405_, 0, v_toFunctor_2393_);
lean_closure_set(v___f_2405_, 1, v_mask_2403_);
lean_closure_set(v___f_2405_, 2, v_toPure_2394_);
lean_closure_set(v___f_2405_, 3, v_inst_2326_);
lean_closure_set(v___f_2405_, 4, v_inst_2327_);
lean_closure_set(v___f_2405_, 5, v_inst_2328_);
lean_closure_set(v___f_2405_, 6, v_inst_2329_);
lean_closure_set(v___f_2405_, 7, v_inst_2330_);
lean_closure_set(v___f_2405_, 8, v_matcherApp_2391_);
lean_closure_set(v___f_2405_, 9, v___x_2404_);
lean_closure_set(v___f_2405_, 10, v___f_2398_);
lean_closure_set(v___f_2405_, 11, v___f_2397_);
v_maskedDiscrs_2406_ = l_Lean_Array_mask___redArg(v_mask_2403_, v_discrs_2396_);
lean_dec(v_mask_2403_);
v___x_2407_ = lean_alloc_closure((void*)(l_Lean_Expr_abstractM___boxed), 7, 2);
lean_closure_set(v___x_2407_, 0, v_resTy_2332_);
lean_closure_set(v___x_2407_, 1, v_maskedDiscrs_2406_);
v___x_2408_ = lean_apply_2(v_inst_2326_, lean_box(0), v___x_2407_);
v___x_2409_ = lean_apply_4(v_toBind_2392_, lean_box(0), lean_box(0), v___x_2408_, v___f_2405_);
return v___x_2409_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___boxed(lean_object* v_inst_2410_, lean_object* v_inst_2411_, lean_object* v_inst_2412_, lean_object* v_inst_2413_, lean_object* v_inst_2414_, lean_object* v_info_2415_, lean_object* v_resTy_2416_, lean_object* v_onAlt_2417_, lean_object* v_useSplitter_2418_){
_start:
{
uint8_t v_useSplitter_boxed_2419_; lean_object* v_res_2420_; 
v_useSplitter_boxed_2419_ = lean_unbox(v_useSplitter_2418_);
v_res_2420_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(v_inst_2410_, v_inst_2411_, v_inst_2412_, v_inst_2413_, v_inst_2414_, v_info_2415_, v_resTy_2416_, v_onAlt_2417_, v_useSplitter_boxed_2419_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(lean_object* v_n_2421_, lean_object* v_inst_2422_, lean_object* v_inst_2423_, lean_object* v_inst_2424_, lean_object* v_inst_2425_, lean_object* v_inst_2426_, lean_object* v_inst_2427_, lean_object* v_inst_2428_, lean_object* v_inst_2429_, lean_object* v_info_2430_, lean_object* v_resTy_2431_, lean_object* v_onAlt_2432_, uint8_t v_useSplitter_2433_){
_start:
{
lean_object* v___x_2434_; 
v___x_2434_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(v_inst_2422_, v_inst_2423_, v_inst_2424_, v_inst_2425_, v_inst_2426_, v_info_2430_, v_resTy_2431_, v_onAlt_2432_, v_useSplitter_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___boxed(lean_object* v_n_2435_, lean_object* v_inst_2436_, lean_object* v_inst_2437_, lean_object* v_inst_2438_, lean_object* v_inst_2439_, lean_object* v_inst_2440_, lean_object* v_inst_2441_, lean_object* v_inst_2442_, lean_object* v_inst_2443_, lean_object* v_info_2444_, lean_object* v_resTy_2445_, lean_object* v_onAlt_2446_, lean_object* v_useSplitter_2447_){
_start:
{
uint8_t v_useSplitter_boxed_2448_; lean_object* v_res_2449_; 
v_useSplitter_boxed_2448_ = lean_unbox(v_useSplitter_2447_);
v_res_2449_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(v_n_2435_, v_inst_2436_, v_inst_2437_, v_inst_2438_, v_inst_2439_, v_inst_2440_, v_inst_2441_, v_inst_2442_, v_inst_2443_, v_info_2444_, v_resTy_2445_, v_onAlt_2446_, v_useSplitter_boxed_2448_);
lean_dec_ref(v_inst_2443_);
lean_dec(v_inst_2442_);
lean_dec_ref(v_inst_2441_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(lean_object* v_info_2450_, lean_object* v_e_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_){
_start:
{
if (lean_obj_tag(v_info_2450_) == 6)
{
lean_object* v_matcherApp_2460_; lean_object* v_toMatcherInfo_2461_; lean_object* v___x_2462_; 
v_matcherApp_2460_ = lean_ctor_get(v_info_2450_, 0);
lean_inc_ref(v_matcherApp_2460_);
lean_dec_ref_known(v_info_2450_, 1);
v_toMatcherInfo_2461_ = lean_ctor_get(v_matcherApp_2460_, 0);
lean_inc_ref(v_toMatcherInfo_2461_);
lean_dec_ref(v_matcherApp_2460_);
v___x_2462_ = l_Lean_Meta_Simp_simpMatchDiscrs_x3f(v_toMatcherInfo_2461_, v_e_2451_, v_a_2452_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_, v_a_2458_);
return v___x_2462_;
}
else
{
lean_object* v___x_2463_; lean_object* v___x_2464_; 
lean_dec_ref(v_e_2451_);
lean_dec_ref(v_info_2450_);
v___x_2463_ = lean_box(0);
v___x_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2463_);
return v___x_2464_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f___boxed(lean_object* v_info_2465_, lean_object* v_e_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(v_info_2465_, v_e_2466_, v_a_2467_, v_a_2468_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_);
lean_dec(v_a_2473_);
lean_dec_ref(v_a_2472_);
lean_dec(v_a_2471_);
lean_dec_ref(v_a_2470_);
lean_dec(v_a_2469_);
lean_dec_ref(v_a_2468_);
lean_dec(v_a_2467_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(lean_object* v_declName_2476_, lean_object* v___y_2477_){
_start:
{
lean_object* v___x_2479_; lean_object* v_env_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2479_ = lean_st_ref_get(v___y_2477_);
v_env_2480_ = lean_ctor_get(v___x_2479_, 0);
lean_inc_ref(v_env_2480_);
lean_dec(v___x_2479_);
v___x_2481_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_2480_, v_declName_2476_);
v___x_2482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg___boxed(lean_object* v_declName_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
lean_object* v_res_2486_; 
v_res_2486_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2483_, v___y_2484_);
lean_dec(v___y_2484_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(lean_object* v_msgData_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_){
_start:
{
lean_object* v___x_2493_; lean_object* v_env_2494_; uint8_t v___x_2495_; lean_object* v_env_2496_; lean_object* v___x_2497_; lean_object* v_toCold_2498_; lean_object* v_mctx_2499_; lean_object* v_lctx_2500_; lean_object* v_options_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2493_ = lean_st_ref_get(v___y_2491_);
v_env_2494_ = lean_ctor_get(v___x_2493_, 0);
lean_inc_ref(v_env_2494_);
lean_dec(v___x_2493_);
v___x_2495_ = 0;
v_env_2496_ = l_Lean_Environment_setRecordingDeps(v_env_2494_, v___x_2495_);
v___x_2497_ = lean_st_ref_get(v___y_2489_);
v_toCold_2498_ = lean_ctor_get(v___y_2490_, 0);
v_mctx_2499_ = lean_ctor_get(v___x_2497_, 0);
lean_inc_ref(v_mctx_2499_);
lean_dec(v___x_2497_);
v_lctx_2500_ = lean_ctor_get(v___y_2488_, 2);
v_options_2501_ = lean_ctor_get(v_toCold_2498_, 2);
lean_inc_ref(v_options_2501_);
lean_inc_ref(v_lctx_2500_);
v___x_2502_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2502_, 0, v_env_2496_);
lean_ctor_set(v___x_2502_, 1, v_mctx_2499_);
lean_ctor_set(v___x_2502_, 2, v_lctx_2500_);
lean_ctor_set(v___x_2502_, 3, v_options_2501_);
v___x_2503_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
lean_ctor_set(v___x_2503_, 1, v_msgData_2487_);
v___x_2504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2503_);
return v___x_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11___boxed(lean_object* v_msgData_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(v_msgData_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(lean_object* v_msg_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_){
_start:
{
lean_object* v_ref_2518_; lean_object* v___x_2519_; lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2528_; 
v_ref_2518_ = lean_ctor_get(v___y_2515_, 2);
v___x_2519_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(v_msg_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2522_ = v___x_2519_;
v_isShared_2523_ = v_isSharedCheck_2528_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2519_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2528_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2524_; lean_object* v___x_2526_; 
lean_inc(v_ref_2518_);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v_ref_2518_);
lean_ctor_set(v___x_2524_, 1, v_a_2520_);
if (v_isShared_2523_ == 0)
{
lean_ctor_set_tag(v___x_2522_, 1);
lean_ctor_set(v___x_2522_, 0, v___x_2524_);
v___x_2526_ = v___x_2522_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v___x_2524_);
v___x_2526_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
return v___x_2526_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg___boxed(lean_object* v_msg_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_);
lean_dec(v___y_2533_);
lean_dec_ref(v___y_2532_);
lean_dec(v___y_2531_);
lean_dec_ref(v___y_2530_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(lean_object* v_ref_2536_, lean_object* v_msg_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v_toCold_2543_; lean_object* v_currRecDepth_2544_; lean_object* v_ref_2545_; uint16_t v_optionFlags_2546_; uint8_t v_suppressElabErrors_2547_; uint8_t v_checkDeprecated_2548_; uint8_t v_isRecordingDeps_2549_; lean_object* v_ref_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v_toCold_2543_ = lean_ctor_get(v___y_2540_, 0);
v_currRecDepth_2544_ = lean_ctor_get(v___y_2540_, 1);
v_ref_2545_ = lean_ctor_get(v___y_2540_, 2);
v_optionFlags_2546_ = lean_ctor_get_uint16(v___y_2540_, sizeof(void*)*3);
v_suppressElabErrors_2547_ = lean_ctor_get_uint8(v___y_2540_, sizeof(void*)*3 + 2);
v_checkDeprecated_2548_ = lean_ctor_get_uint8(v___y_2540_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2549_ = lean_ctor_get_uint8(v___y_2540_, sizeof(void*)*3 + 4);
v_ref_2550_ = l_Lean_replaceRef(v_ref_2536_, v_ref_2545_);
lean_inc(v_currRecDepth_2544_);
lean_inc_ref(v_toCold_2543_);
v___x_2551_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2551_, 0, v_toCold_2543_);
lean_ctor_set(v___x_2551_, 1, v_currRecDepth_2544_);
lean_ctor_set(v___x_2551_, 2, v_ref_2550_);
lean_ctor_set_uint16(v___x_2551_, sizeof(void*)*3, v_optionFlags_2546_);
lean_ctor_set_uint8(v___x_2551_, sizeof(void*)*3 + 2, v_suppressElabErrors_2547_);
lean_ctor_set_uint8(v___x_2551_, sizeof(void*)*3 + 3, v_checkDeprecated_2548_);
lean_ctor_set_uint8(v___x_2551_, sizeof(void*)*3 + 4, v_isRecordingDeps_2549_);
v___x_2552_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_2537_, v___y_2538_, v___y_2539_, v___x_2551_, v___y_2541_);
lean_dec_ref_known(v___x_2551_, 3);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg___boxed(lean_object* v_ref_2553_, lean_object* v_msg_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_){
_start:
{
lean_object* v_res_2560_; 
v_res_2560_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_2553_, v_msg_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
lean_dec(v___y_2558_);
lean_dec_ref(v___y_2557_);
lean_dec(v___y_2556_);
lean_dec_ref(v___y_2555_);
lean_dec(v_ref_2553_);
return v_res_2560_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_2561_; 
v___x_2561_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2561_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0);
v___x_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2562_);
return v___x_2563_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v___x_2564_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_2565_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_2566_ = lean_unsigned_to_nat(0u);
v___x_2567_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
lean_ctor_set(v___x_2567_, 1, v___x_2566_);
lean_ctor_set(v___x_2567_, 2, v___x_2566_);
lean_ctor_set(v___x_2567_, 3, v___x_2566_);
lean_ctor_set(v___x_2567_, 4, v___x_2565_);
lean_ctor_set(v___x_2567_, 5, v___x_2565_);
lean_ctor_set(v___x_2567_, 6, v___x_2565_);
lean_ctor_set(v___x_2567_, 7, v___x_2565_);
lean_ctor_set(v___x_2567_, 8, v___x_2565_);
lean_ctor_set(v___x_2567_, 9, v___x_2565_);
lean_ctor_set(v___x_2567_, 10, v___x_2565_);
lean_ctor_set(v___x_2567_, 11, v___x_2564_);
return v___x_2567_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2568_ = lean_unsigned_to_nat(32u);
v___x_2569_ = lean_mk_empty_array_with_capacity(v___x_2568_);
v___x_2570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
return v___x_2570_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4(void){
_start:
{
size_t v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2571_ = ((size_t)5ULL);
v___x_2572_ = lean_unsigned_to_nat(0u);
v___x_2573_ = lean_unsigned_to_nat(32u);
v___x_2574_ = lean_mk_empty_array_with_capacity(v___x_2573_);
v___x_2575_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3);
v___x_2576_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
lean_ctor_set(v___x_2576_, 1, v___x_2574_);
lean_ctor_set(v___x_2576_, 2, v___x_2572_);
lean_ctor_set(v___x_2576_, 3, v___x_2572_);
lean_ctor_set_usize(v___x_2576_, 4, v___x_2571_);
return v___x_2576_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; 
v___x_2577_ = lean_box(1);
v___x_2578_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4);
v___x_2579_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_2580_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2579_);
lean_ctor_set(v___x_2580_, 1, v___x_2578_);
lean_ctor_set(v___x_2580_, 2, v___x_2577_);
return v___x_2580_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7(void){
_start:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2582_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6));
v___x_2583_ = l_Lean_stringToMessageData(v___x_2582_);
return v___x_2583_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9(void){
_start:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2585_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8));
v___x_2586_ = l_Lean_stringToMessageData(v___x_2585_);
return v___x_2586_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11(void){
_start:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10));
v___x_2589_ = l_Lean_stringToMessageData(v___x_2588_);
return v___x_2589_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13(void){
_start:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2591_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12));
v___x_2592_ = l_Lean_stringToMessageData(v___x_2591_);
return v___x_2592_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15(void){
_start:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2594_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14));
v___x_2595_ = l_Lean_stringToMessageData(v___x_2594_);
return v___x_2595_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17(void){
_start:
{
lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2597_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16));
v___x_2598_ = l_Lean_stringToMessageData(v___x_2597_);
return v___x_2598_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19(void){
_start:
{
lean_object* v___x_2600_; lean_object* v___x_2601_; 
v___x_2600_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18));
v___x_2601_ = l_Lean_stringToMessageData(v___x_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(lean_object* v_msg_2602_, lean_object* v_declHint_2603_, lean_object* v___y_2604_){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v_env_2608_; uint8_t v___x_2609_; 
v___x_2606_ = lean_box(0);
v___x_2607_ = lean_st_ref_get(v___y_2604_);
v_env_2608_ = lean_ctor_get(v___x_2607_, 0);
lean_inc_ref(v_env_2608_);
lean_dec(v___x_2607_);
v___x_2609_ = l_Lean_Name_isAnonymous(v_declHint_2603_);
if (v___x_2609_ == 0)
{
uint8_t v_isExporting_2610_; 
v_isExporting_2610_ = lean_ctor_get_uint8(v_env_2608_, sizeof(void*)*13);
if (v_isExporting_2610_ == 0)
{
lean_object* v___x_2611_; 
lean_dec_ref(v_env_2608_);
lean_dec(v_declHint_2603_);
v___x_2611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2611_, 0, v_msg_2602_);
return v___x_2611_;
}
else
{
lean_object* v___x_2612_; uint8_t v___x_2613_; 
lean_inc_ref(v_env_2608_);
v___x_2612_ = l_Lean_Environment_setExporting(v_env_2608_, v___x_2609_);
lean_inc(v_declHint_2603_);
lean_inc_ref(v___x_2612_);
v___x_2613_ = l_Lean_Environment_contains(v___x_2612_, v_declHint_2603_, v_isExporting_2610_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; 
lean_dec_ref(v___x_2612_);
lean_dec_ref(v_env_2608_);
lean_dec(v_declHint_2603_);
v___x_2614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2614_, 0, v_msg_2602_);
return v___x_2614_;
}
else
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v_c_2620_; lean_object* v___x_2621_; 
v___x_2615_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2);
v___x_2616_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5);
v___x_2617_ = l_Lean_Options_empty;
lean_inc_ref(v___x_2612_);
v___x_2618_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2612_);
lean_ctor_set(v___x_2618_, 1, v___x_2615_);
lean_ctor_set(v___x_2618_, 2, v___x_2616_);
lean_ctor_set(v___x_2618_, 3, v___x_2617_);
lean_inc(v_declHint_2603_);
v___x_2619_ = l_Lean_MessageData_ofConstName(v_declHint_2603_, v___x_2609_);
v_c_2620_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2620_, 0, v___x_2618_);
lean_ctor_set(v_c_2620_, 1, v___x_2619_);
v___x_2621_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_2612_, v_declHint_2603_);
lean_dec_ref(v___x_2612_);
if (lean_obj_tag(v___x_2621_) == 0)
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
lean_dec_ref(v_env_2608_);
lean_dec(v_declHint_2603_);
v___x_2622_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_2623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
lean_ctor_set(v___x_2623_, 1, v_c_2620_);
v___x_2624_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9);
v___x_2625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2623_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
v___x_2626_ = l_Lean_MessageData_note(v___x_2625_);
v___x_2627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2627_, 0, v_msg_2602_);
lean_ctor_set(v___x_2627_, 1, v___x_2626_);
v___x_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2627_);
return v___x_2628_;
}
else
{
lean_object* v_val_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2663_; 
v_val_2629_ = lean_ctor_get(v___x_2621_, 0);
v_isSharedCheck_2663_ = !lean_is_exclusive(v___x_2621_);
if (v_isSharedCheck_2663_ == 0)
{
v___x_2631_ = v___x_2621_;
v_isShared_2632_ = v_isSharedCheck_2663_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_val_2629_);
lean_dec(v___x_2621_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2663_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2633_; lean_object* v_moduleNames_2634_; lean_object* v_mod_2635_; uint8_t v___x_2636_; 
v___x_2633_ = l_Lean_Environment_header(v_env_2608_);
lean_dec_ref(v_env_2608_);
v_moduleNames_2634_ = lean_ctor_get(v___x_2633_, 4);
lean_inc_ref(v_moduleNames_2634_);
lean_dec_ref(v___x_2633_);
v_mod_2635_ = lean_array_get(v___x_2606_, v_moduleNames_2634_, v_val_2629_);
lean_dec(v_val_2629_);
lean_dec_ref(v_moduleNames_2634_);
v___x_2636_ = l_Lean_isPrivateName(v_declHint_2603_);
lean_dec(v_declHint_2603_);
if (v___x_2636_ == 0)
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2648_; 
v___x_2637_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11);
v___x_2638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2637_);
lean_ctor_set(v___x_2638_, 1, v_c_2620_);
v___x_2639_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13);
v___x_2640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2638_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
v___x_2641_ = l_Lean_MessageData_ofName(v_mod_2635_);
v___x_2642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2640_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
v___x_2643_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15);
v___x_2644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2642_);
lean_ctor_set(v___x_2644_, 1, v___x_2643_);
v___x_2645_ = l_Lean_MessageData_note(v___x_2644_);
v___x_2646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2646_, 0, v_msg_2602_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
if (v_isShared_2632_ == 0)
{
lean_ctor_set_tag(v___x_2631_, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2646_);
v___x_2648_ = v___x_2631_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v___x_2646_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
else
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2661_; 
v___x_2650_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_2651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2650_);
lean_ctor_set(v___x_2651_, 1, v_c_2620_);
v___x_2652_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17);
v___x_2653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2651_);
lean_ctor_set(v___x_2653_, 1, v___x_2652_);
v___x_2654_ = l_Lean_MessageData_ofName(v_mod_2635_);
v___x_2655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2653_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
v___x_2656_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19);
v___x_2657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2655_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___x_2658_ = l_Lean_MessageData_note(v___x_2657_);
v___x_2659_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2659_, 0, v_msg_2602_);
lean_ctor_set(v___x_2659_, 1, v___x_2658_);
if (v_isShared_2632_ == 0)
{
lean_ctor_set_tag(v___x_2631_, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2659_);
v___x_2661_ = v___x_2631_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v___x_2659_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2664_; 
lean_dec_ref(v_env_2608_);
lean_dec(v_declHint_2603_);
v___x_2664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2664_, 0, v_msg_2602_);
return v___x_2664_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_msg_2665_, lean_object* v_declHint_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
lean_object* v_res_2669_; 
v_res_2669_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_2665_, v_declHint_2666_, v___y_2667_);
lean_dec(v___y_2667_);
return v_res_2669_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(lean_object* v_msg_2670_, lean_object* v_declHint_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_){
_start:
{
lean_object* v___x_2677_; lean_object* v_a_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2687_; 
v___x_2677_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_2670_, v_declHint_2671_, v___y_2675_);
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2680_ = v___x_2677_;
v_isShared_2681_ = v_isSharedCheck_2687_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_a_2678_);
lean_dec(v___x_2677_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2687_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2685_; 
v___x_2682_ = l_Lean_unknownIdentifierMessageTag;
v___x_2683_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2682_);
lean_ctor_set(v___x_2683_, 1, v_a_2678_);
if (v_isShared_2681_ == 0)
{
lean_ctor_set(v___x_2680_, 0, v___x_2683_);
v___x_2685_ = v___x_2680_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v___x_2683_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7___boxed(lean_object* v_msg_2688_, lean_object* v_declHint_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(v_msg_2688_, v_declHint_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_2696_, lean_object* v_msg_2697_, lean_object* v_declHint_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
lean_object* v___x_2704_; lean_object* v_a_2705_; lean_object* v___x_2706_; 
v___x_2704_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(v_msg_2697_, v_declHint_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
v_a_2705_ = lean_ctor_get(v___x_2704_, 0);
lean_inc(v_a_2705_);
lean_dec_ref(v___x_2704_);
v___x_2706_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_2696_, v_a_2705_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_2707_, lean_object* v_msg_2708_, lean_object* v_declHint_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v_res_2715_; 
v_res_2715_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2707_, v_msg_2708_, v_declHint_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_);
lean_dec(v___y_2713_);
lean_dec_ref(v___y_2712_);
lean_dec(v___y_2711_);
lean_dec_ref(v___y_2710_);
lean_dec(v_ref_2707_);
return v_res_2715_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2717_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0));
v___x_2718_ = l_Lean_stringToMessageData(v___x_2717_);
return v___x_2718_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2720_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2));
v___x_2721_ = l_Lean_stringToMessageData(v___x_2720_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_2722_, lean_object* v_constName_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_){
_start:
{
lean_object* v___x_2729_; uint8_t v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2729_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_2730_ = 0;
lean_inc(v_constName_2723_);
v___x_2731_ = l_Lean_MessageData_ofConstName(v_constName_2723_, v___x_2730_);
v___x_2732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2729_);
lean_ctor_set(v___x_2732_, 1, v___x_2731_);
v___x_2733_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3);
v___x_2734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2732_);
lean_ctor_set(v___x_2734_, 1, v___x_2733_);
v___x_2735_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2722_, v___x_2734_, v_constName_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_2736_, lean_object* v_constName_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v_res_2743_; 
v_res_2743_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2736_, v_constName_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
lean_dec(v_ref_2736_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_){
_start:
{
lean_object* v_ref_2750_; lean_object* v___x_2751_; 
v_ref_2750_ = lean_ctor_get(v___y_2747_, 2);
v___x_2751_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2750_, v_constName_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(lean_object* v_constName_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
lean_object* v___x_2765_; lean_object* v_env_2766_; uint8_t v___x_2767_; lean_object* v___x_2768_; 
v___x_2765_ = lean_st_ref_get(v___y_2763_);
v_env_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc_ref(v_env_2766_);
lean_dec(v___x_2765_);
v___x_2767_ = 0;
lean_inc(v_constName_2759_);
v___x_2768_ = l_Lean_Environment_find_x3f(v_env_2766_, v_constName_2759_, v___x_2767_);
if (lean_obj_tag(v___x_2768_) == 0)
{
lean_object* v___x_2769_; 
v___x_2769_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
return v___x_2769_;
}
else
{
lean_object* v_val_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
lean_dec(v_constName_2759_);
v_val_2770_ = lean_ctor_get(v___x_2768_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2768_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2772_ = v___x_2768_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_val_2770_);
lean_dec(v___x_2768_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
lean_ctor_set_tag(v___x_2772_, 0);
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_val_2770_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0___boxed(lean_object* v_constName_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_){
_start:
{
lean_object* v_res_2784_; 
v_res_2784_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_constName_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_);
lean_dec(v___y_2782_);
lean_dec_ref(v___y_2781_);
lean_dec(v___y_2780_);
lean_dec_ref(v___y_2779_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(lean_object* v_msg_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_){
_start:
{
lean_object* v___x_2791_; lean_object* v_toApplicative_2792_; lean_object* v_toFunctor_2793_; lean_object* v_toSeq_2794_; lean_object* v_toSeqLeft_2795_; lean_object* v_toSeqRight_2796_; lean_object* v___f_2797_; lean_object* v___f_2798_; lean_object* v___f_2799_; lean_object* v___f_2800_; lean_object* v___x_2801_; lean_object* v___f_2802_; lean_object* v___f_2803_; lean_object* v___f_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v_toApplicative_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2839_; 
v___x_2791_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1);
v_toApplicative_2792_ = lean_ctor_get(v___x_2791_, 0);
v_toFunctor_2793_ = lean_ctor_get(v_toApplicative_2792_, 0);
v_toSeq_2794_ = lean_ctor_get(v_toApplicative_2792_, 2);
v_toSeqLeft_2795_ = lean_ctor_get(v_toApplicative_2792_, 3);
v_toSeqRight_2796_ = lean_ctor_get(v_toApplicative_2792_, 4);
v___f_2797_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2));
v___f_2798_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2793_, 2);
v___f_2799_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2799_, 0, v_toFunctor_2793_);
v___f_2800_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2800_, 0, v_toFunctor_2793_);
v___x_2801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2801_, 0, v___f_2799_);
lean_ctor_set(v___x_2801_, 1, v___f_2800_);
lean_inc(v_toSeqRight_2796_);
v___f_2802_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2802_, 0, v_toSeqRight_2796_);
lean_inc(v_toSeqLeft_2795_);
v___f_2803_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2803_, 0, v_toSeqLeft_2795_);
lean_inc(v_toSeq_2794_);
v___f_2804_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2804_, 0, v_toSeq_2794_);
v___x_2805_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2801_);
lean_ctor_set(v___x_2805_, 1, v___f_2797_);
lean_ctor_set(v___x_2805_, 2, v___f_2804_);
lean_ctor_set(v___x_2805_, 3, v___f_2803_);
lean_ctor_set(v___x_2805_, 4, v___f_2802_);
v___x_2806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2805_);
lean_ctor_set(v___x_2806_, 1, v___f_2798_);
v___x_2807_ = l_StateRefT_x27_instMonad___redArg(v___x_2806_);
v_toApplicative_2808_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2839_ == 0)
{
lean_object* v_unused_2840_; 
v_unused_2840_ = lean_ctor_get(v___x_2807_, 1);
lean_dec(v_unused_2840_);
v___x_2810_ = v___x_2807_;
v_isShared_2811_ = v_isSharedCheck_2839_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_toApplicative_2808_);
lean_dec(v___x_2807_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2839_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v_toFunctor_2812_; lean_object* v_toSeq_2813_; lean_object* v_toSeqLeft_2814_; lean_object* v_toSeqRight_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2837_; 
v_toFunctor_2812_ = lean_ctor_get(v_toApplicative_2808_, 0);
v_toSeq_2813_ = lean_ctor_get(v_toApplicative_2808_, 2);
v_toSeqLeft_2814_ = lean_ctor_get(v_toApplicative_2808_, 3);
v_toSeqRight_2815_ = lean_ctor_get(v_toApplicative_2808_, 4);
v_isSharedCheck_2837_ = !lean_is_exclusive(v_toApplicative_2808_);
if (v_isSharedCheck_2837_ == 0)
{
lean_object* v_unused_2838_; 
v_unused_2838_ = lean_ctor_get(v_toApplicative_2808_, 1);
lean_dec(v_unused_2838_);
v___x_2817_ = v_toApplicative_2808_;
v_isShared_2818_ = v_isSharedCheck_2837_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_toSeqRight_2815_);
lean_inc(v_toSeqLeft_2814_);
lean_inc(v_toSeq_2813_);
lean_inc(v_toFunctor_2812_);
lean_dec(v_toApplicative_2808_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2837_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___f_2819_; lean_object* v___f_2820_; lean_object* v___f_2821_; lean_object* v___f_2822_; lean_object* v___x_2823_; lean_object* v___f_2824_; lean_object* v___f_2825_; lean_object* v___f_2826_; lean_object* v___x_2828_; 
v___f_2819_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4));
v___f_2820_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5));
lean_inc_ref(v_toFunctor_2812_);
v___f_2821_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2821_, 0, v_toFunctor_2812_);
v___f_2822_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2822_, 0, v_toFunctor_2812_);
v___x_2823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2823_, 0, v___f_2821_);
lean_ctor_set(v___x_2823_, 1, v___f_2822_);
v___f_2824_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2824_, 0, v_toSeqRight_2815_);
v___f_2825_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2825_, 0, v_toSeqLeft_2814_);
v___f_2826_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2826_, 0, v_toSeq_2813_);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 4, v___f_2824_);
lean_ctor_set(v___x_2817_, 3, v___f_2825_);
lean_ctor_set(v___x_2817_, 2, v___f_2826_);
lean_ctor_set(v___x_2817_, 1, v___f_2819_);
lean_ctor_set(v___x_2817_, 0, v___x_2823_);
v___x_2828_ = v___x_2817_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v___x_2823_);
lean_ctor_set(v_reuseFailAlloc_2836_, 1, v___f_2819_);
lean_ctor_set(v_reuseFailAlloc_2836_, 2, v___f_2826_);
lean_ctor_set(v_reuseFailAlloc_2836_, 3, v___f_2825_);
lean_ctor_set(v_reuseFailAlloc_2836_, 4, v___f_2824_);
v___x_2828_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
lean_object* v___x_2830_; 
if (v_isShared_2811_ == 0)
{
lean_ctor_set(v___x_2810_, 1, v___f_2820_);
lean_ctor_set(v___x_2810_, 0, v___x_2828_);
v___x_2830_ = v___x_2810_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v___x_2828_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v___f_2820_);
v___x_2830_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_3140__overap_2833_; lean_object* v___x_2834_; 
v___x_2831_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_2832_ = l_instInhabitedOfMonad___redArg(v___x_2830_, v___x_2831_);
v___x_3140__overap_2833_ = lean_panic_fn_borrowed(v___x_2832_, v_msg_2785_);
lean_dec(v___x_2832_);
lean_inc(v___y_2789_);
lean_inc_ref(v___y_2788_);
lean_inc(v___y_2787_);
lean_inc_ref(v___y_2786_);
v___x_2834_ = lean_apply_5(v___x_3140__overap_2833_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, lean_box(0));
return v___x_2834_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1___boxed(lean_object* v_msg_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(v_msg_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
return v_res_2847_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2851_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2));
v___x_2852_ = lean_unsigned_to_nat(53u);
v___x_2853_ = lean_unsigned_to_nat(62u);
v___x_2854_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1));
v___x_2855_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0));
v___x_2856_ = l_mkPanicMessageWithDecl(v___x_2855_, v___x_2854_, v___x_2853_, v___x_2852_, v___x_2851_);
return v___x_2856_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(size_t v_sz_2857_, size_t v_i_2858_, lean_object* v_bs_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_){
_start:
{
uint8_t v___x_2865_; 
v___x_2865_ = lean_usize_dec_lt(v_i_2858_, v_sz_2857_);
if (v___x_2865_ == 0)
{
lean_object* v___x_2866_; 
v___x_2866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2866_, 0, v_bs_2859_);
return v___x_2866_;
}
else
{
lean_object* v_v_2867_; lean_object* v___x_2868_; lean_object* v_bs_x27_2869_; lean_object* v_a_2871_; lean_object* v___x_2876_; 
v_v_2867_ = lean_array_uget(v_bs_2859_, v_i_2858_);
v___x_2868_ = lean_unsigned_to_nat(0u);
v_bs_x27_2869_ = lean_array_uset(v_bs_2859_, v_i_2858_, v___x_2868_);
v___x_2876_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_v_2867_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v___x_2876_, 1);
if (lean_obj_tag(v_a_2877_) == 6)
{
lean_object* v_val_2878_; lean_object* v_numFields_2879_; uint8_t v___x_2880_; lean_object* v___x_2881_; 
v_val_2878_ = lean_ctor_get(v_a_2877_, 0);
lean_inc_ref(v_val_2878_);
lean_dec_ref_known(v_a_2877_, 1);
v_numFields_2879_ = lean_ctor_get(v_val_2878_, 4);
lean_inc(v_numFields_2879_);
lean_dec_ref(v_val_2878_);
v___x_2880_ = 0;
v___x_2881_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2881_, 0, v_numFields_2879_);
lean_ctor_set(v___x_2881_, 1, v___x_2868_);
lean_ctor_set_uint8(v___x_2881_, sizeof(void*)*2, v___x_2880_);
v_a_2871_ = v___x_2881_;
goto v___jp_2870_;
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
lean_dec(v_a_2877_);
v___x_2882_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3);
v___x_2883_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(v___x_2882_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v_a_2884_; 
v_a_2884_ = lean_ctor_get(v___x_2883_, 0);
lean_inc(v_a_2884_);
lean_dec_ref_known(v___x_2883_, 1);
v_a_2871_ = v_a_2884_;
goto v___jp_2870_;
}
else
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2892_; 
lean_dec_ref(v_bs_x27_2869_);
v_a_2885_ = lean_ctor_get(v___x_2883_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2883_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2887_ = v___x_2883_;
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2883_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2888_ == 0)
{
v___x_2890_ = v___x_2887_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2885_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
}
}
else
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
lean_dec_ref(v_bs_x27_2869_);
v_a_2893_ = lean_ctor_get(v___x_2876_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2876_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2876_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2876_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2898_; 
if (v_isShared_2896_ == 0)
{
v___x_2898_ = v___x_2895_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_a_2893_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
v___jp_2870_:
{
size_t v___x_2872_; size_t v___x_2873_; lean_object* v___x_2874_; 
v___x_2872_ = ((size_t)1ULL);
v___x_2873_ = lean_usize_add(v_i_2858_, v___x_2872_);
v___x_2874_ = lean_array_uset(v_bs_x27_2869_, v_i_2858_, v_a_2871_);
v_i_2858_ = v___x_2873_;
v_bs_2859_ = v___x_2874_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___boxed(lean_object* v_sz_2901_, lean_object* v_i_2902_, lean_object* v_bs_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_){
_start:
{
size_t v_sz_boxed_2909_; size_t v_i_boxed_2910_; lean_object* v_res_2911_; 
v_sz_boxed_2909_ = lean_unbox_usize(v_sz_2901_);
lean_dec(v_sz_2901_);
v_i_boxed_2910_ = lean_unbox_usize(v_i_2902_);
lean_dec(v_i_2902_);
v_res_2911_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(v_sz_boxed_2909_, v_i_boxed_2910_, v_bs_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
return v_res_2911_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2912_; lean_object* v_dummy_2913_; 
v___x_2912_ = lean_box(0);
v_dummy_2913_ = l_Lean_Expr_sort___override(v___x_2912_);
return v_dummy_2913_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; 
v___x_2914_ = lean_box(0);
v___x_2915_ = lean_unsigned_to_nat(16u);
v___x_2916_ = lean_mk_array(v___x_2915_, v___x_2914_);
return v___x_2916_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2917_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1);
v___x_2918_ = lean_unsigned_to_nat(0u);
v___x_2919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2918_);
lean_ctor_set(v___x_2919_, 1, v___x_2917_);
return v___x_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(lean_object* v_e_2922_, uint8_t v_alsoCasesOn_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
uint8_t v___x_2932_; 
v___x_2932_ = l_Lean_Expr_isApp(v_e_2922_);
if (v___x_2932_ == 0)
{
lean_object* v___x_2933_; lean_object* v___x_2934_; 
lean_dec_ref(v_e_2922_);
v___x_2933_ = lean_box(0);
v___x_2934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2933_);
return v___x_2934_;
}
else
{
lean_object* v___x_2935_; 
v___x_2935_ = l_Lean_Expr_getAppFn(v_e_2922_);
if (lean_obj_tag(v___x_2935_) == 4)
{
lean_object* v_declName_2936_; lean_object* v_us_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_3092_; 
v_declName_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc_n(v_declName_2936_, 2);
v_us_2937_ = lean_ctor_get(v___x_2935_, 1);
lean_inc(v_us_2937_);
lean_dec_ref_known(v___x_2935_, 2);
v___x_2938_ = l_Lean_instInhabitedExpr;
v___x_2939_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2936_, v___y_2927_);
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_2942_ = v___x_2939_;
v_isShared_2943_ = v_isSharedCheck_3092_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2939_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_3092_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
if (lean_obj_tag(v_a_2940_) == 1)
{
lean_object* v_val_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2985_; 
v_val_2944_ = lean_ctor_get(v_a_2940_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v_a_2940_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2946_ = v_a_2940_;
v_isShared_2947_ = v_isSharedCheck_2985_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_val_2944_);
lean_dec(v_a_2940_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2985_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v_dummy_2948_; lean_object* v_nargs_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v_args_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; uint8_t v___x_2956_; 
v_dummy_2948_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0);
v_nargs_2949_ = l_Lean_Expr_getAppNumArgs(v_e_2922_);
lean_inc(v_nargs_2949_);
v___x_2950_ = lean_mk_array(v_nargs_2949_, v_dummy_2948_);
v___x_2951_ = lean_unsigned_to_nat(1u);
v___x_2952_ = lean_nat_sub(v_nargs_2949_, v___x_2951_);
lean_dec(v_nargs_2949_);
v_args_2953_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2922_, v___x_2950_, v___x_2952_);
v___x_2954_ = lean_array_get_size(v_args_2953_);
v___x_2955_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_2944_);
v___x_2956_ = lean_nat_dec_lt(v___x_2954_, v___x_2955_);
lean_dec(v___x_2955_);
if (v___x_2956_ == 0)
{
lean_object* v_numParams_2957_; lean_object* v_numDiscrs_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2976_; 
v_numParams_2957_ = lean_ctor_get(v_val_2944_, 0);
v_numDiscrs_2958_ = lean_ctor_get(v_val_2944_, 1);
v___x_2959_ = lean_array_mk(v_us_2937_);
v___x_2960_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2957_);
v___x_2961_ = l_Array_extract___redArg(v_args_2953_, v___x_2960_, v_numParams_2957_);
v___x_2962_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_2944_);
v___x_2963_ = lean_array_get(v___x_2938_, v_args_2953_, v___x_2962_);
lean_dec(v___x_2962_);
v___x_2964_ = lean_nat_add(v_numParams_2957_, v___x_2951_);
v___x_2965_ = lean_nat_add(v___x_2964_, v_numDiscrs_2958_);
lean_inc(v___x_2965_);
lean_inc_ref_n(v_args_2953_, 2);
v___x_2966_ = l_Array_toSubarray___redArg(v_args_2953_, v___x_2964_, v___x_2965_);
v___x_2967_ = l_Subarray_copy___redArg(v___x_2966_);
v___x_2968_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_2944_);
v___x_2969_ = lean_nat_add(v___x_2965_, v___x_2968_);
lean_dec(v___x_2968_);
lean_inc(v___x_2969_);
v___x_2970_ = l_Array_toSubarray___redArg(v_args_2953_, v___x_2965_, v___x_2969_);
v___x_2971_ = l_Subarray_copy___redArg(v___x_2970_);
v___x_2972_ = l_Array_toSubarray___redArg(v_args_2953_, v___x_2969_, v___x_2954_);
v___x_2973_ = l_Subarray_copy___redArg(v___x_2972_);
v___x_2974_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2974_, 0, v_val_2944_);
lean_ctor_set(v___x_2974_, 1, v_declName_2936_);
lean_ctor_set(v___x_2974_, 2, v___x_2959_);
lean_ctor_set(v___x_2974_, 3, v___x_2961_);
lean_ctor_set(v___x_2974_, 4, v___x_2963_);
lean_ctor_set(v___x_2974_, 5, v___x_2967_);
lean_ctor_set(v___x_2974_, 6, v___x_2971_);
lean_ctor_set(v___x_2974_, 7, v___x_2973_);
if (v_isShared_2947_ == 0)
{
lean_ctor_set(v___x_2946_, 0, v___x_2974_);
v___x_2976_ = v___x_2946_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v___x_2974_);
v___x_2976_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
lean_object* v___x_2978_; 
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 0, v___x_2976_);
v___x_2978_ = v___x_2942_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v___x_2976_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
else
{
lean_object* v___x_2981_; lean_object* v___x_2983_; 
lean_dec_ref(v_args_2953_);
lean_del_object(v___x_2946_);
lean_dec(v_val_2944_);
lean_dec(v_us_2937_);
lean_dec(v_declName_2936_);
v___x_2981_ = lean_box(0);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 0, v___x_2981_);
v___x_2983_ = v___x_2942_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v___x_2981_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
return v___x_2983_;
}
}
}
}
else
{
lean_object* v___x_2986_; 
lean_del_object(v___x_2942_);
lean_dec(v_a_2940_);
v___x_2986_ = lean_st_ref_get(v___y_2927_);
if (v_alsoCasesOn_2923_ == 0)
{
lean_dec(v___x_2986_);
lean_dec(v_us_2937_);
lean_dec(v_declName_2936_);
lean_dec_ref(v_e_2922_);
goto v___jp_2929_;
}
else
{
lean_object* v_env_2987_; uint8_t v___x_2988_; 
v_env_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc_ref(v_env_2987_);
lean_dec(v___x_2986_);
lean_inc(v_declName_2936_);
v___x_2988_ = l_Lean_isCasesOnRecursor(v_env_2987_, v_declName_2936_);
if (v___x_2988_ == 0)
{
lean_dec(v_us_2937_);
lean_dec(v_declName_2936_);
lean_dec_ref(v_e_2922_);
goto v___jp_2929_;
}
else
{
lean_object* v_indName_2989_; lean_object* v___x_2990_; 
v_indName_2989_ = l_Lean_Name_getPrefix(v_declName_2936_);
v___x_2990_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_indName_2989_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2990_) == 0)
{
lean_object* v_a_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_3083_; 
v_a_2991_ = lean_ctor_get(v___x_2990_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_2990_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_2993_ = v___x_2990_;
v_isShared_2994_ = v_isSharedCheck_3083_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_a_2991_);
lean_dec(v___x_2990_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_3083_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
if (lean_obj_tag(v_a_2991_) == 5)
{
lean_object* v_val_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3078_; 
v_val_2995_ = lean_ctor_get(v_a_2991_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v_a_2991_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_2997_ = v_a_2991_;
v_isShared_2998_ = v_isSharedCheck_3078_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_val_2995_);
lean_dec(v_a_2991_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3078_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v_toConstantVal_2999_; lean_object* v_numParams_3000_; lean_object* v_numIndices_3001_; lean_object* v_ctors_3002_; lean_object* v_nargs_3003_; lean_object* v_dummy_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v_args_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; uint8_t v___x_3015_; 
v_toConstantVal_2999_ = lean_ctor_get(v_val_2995_, 0);
lean_inc_ref(v_toConstantVal_2999_);
v_numParams_3000_ = lean_ctor_get(v_val_2995_, 1);
lean_inc(v_numParams_3000_);
v_numIndices_3001_ = lean_ctor_get(v_val_2995_, 2);
lean_inc(v_numIndices_3001_);
v_ctors_3002_ = lean_ctor_get(v_val_2995_, 4);
lean_inc(v_ctors_3002_);
v_nargs_3003_ = l_Lean_Expr_getAppNumArgs(v_e_2922_);
v_dummy_3004_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0);
lean_inc(v_nargs_3003_);
v___x_3005_ = lean_mk_array(v_nargs_3003_, v_dummy_3004_);
v___x_3006_ = lean_unsigned_to_nat(1u);
v___x_3007_ = lean_nat_sub(v_nargs_3003_, v___x_3006_);
lean_dec(v_nargs_3003_);
v_args_3008_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2922_, v___x_3005_, v___x_3007_);
v___x_3009_ = lean_nat_add(v_numParams_3000_, v___x_3006_);
v___x_3010_ = lean_nat_add(v___x_3009_, v_numIndices_3001_);
v___x_3011_ = lean_nat_add(v___x_3010_, v___x_3006_);
lean_dec(v___x_3010_);
v___x_3012_ = l_Lean_InductiveVal_numCtors(v_val_2995_);
lean_dec_ref(v_val_2995_);
v___x_3013_ = lean_nat_add(v___x_3011_, v___x_3012_);
lean_dec(v___x_3012_);
v___x_3014_ = lean_array_get_size(v_args_3008_);
v___x_3015_ = lean_nat_dec_le(v___x_3013_, v___x_3014_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; lean_object* v___x_3018_; 
lean_dec(v___x_3013_);
lean_dec(v___x_3011_);
lean_dec(v___x_3009_);
lean_dec_ref(v_args_3008_);
lean_dec(v_ctors_3002_);
lean_dec(v_numIndices_3001_);
lean_dec(v_numParams_3000_);
lean_dec_ref(v_toConstantVal_2999_);
lean_del_object(v___x_2997_);
lean_dec(v_us_2937_);
lean_dec(v_declName_2936_);
v___x_3016_ = lean_box(0);
if (v_isShared_2994_ == 0)
{
lean_ctor_set(v___x_2993_, 0, v___x_3016_);
v___x_3018_ = v___x_2993_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v___x_3016_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
else
{
lean_object* v___x_3020_; lean_object* v_params_3021_; lean_object* v_motive_3022_; lean_object* v_discrs_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v_discrInfos_3026_; lean_object* v_alts_3027_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v_lower_3069_; lean_object* v_upper_3070_; uint8_t v___x_3077_; 
lean_del_object(v___x_2993_);
v___x_3020_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_3000_);
lean_inc_ref_n(v_args_3008_, 3);
v_params_3021_ = l_Array_toSubarray___redArg(v_args_3008_, v___x_3020_, v_numParams_3000_);
v_motive_3022_ = lean_array_get(v___x_2938_, v_args_3008_, v_numParams_3000_);
lean_dec(v_numParams_3000_);
lean_inc(v___x_3011_);
v_discrs_3023_ = l_Array_toSubarray___redArg(v_args_3008_, v___x_3009_, v___x_3011_);
v___x_3024_ = lean_nat_add(v_numIndices_3001_, v___x_3006_);
lean_dec(v_numIndices_3001_);
v___x_3025_ = lean_box(0);
v_discrInfos_3026_ = lean_mk_array(v___x_3024_, v___x_3025_);
lean_inc(v___x_3013_);
v_alts_3027_ = l_Array_toSubarray___redArg(v_args_3008_, v___x_3011_, v___x_3013_);
v___x_3077_ = lean_nat_dec_le(v___x_3013_, v___x_3020_);
if (v___x_3077_ == 0)
{
v_lower_3069_ = v___x_3013_;
v_upper_3070_ = v___x_3014_;
goto v___jp_3068_;
}
else
{
lean_dec(v___x_3013_);
v_lower_3069_ = v___x_3020_;
v_upper_3070_ = v___x_3014_;
goto v___jp_3068_;
}
v___jp_3028_:
{
lean_object* v___x_3031_; size_t v_sz_3032_; size_t v___x_3033_; lean_object* v___x_3034_; 
v___x_3031_ = lean_array_mk(v_ctors_3002_);
v_sz_3032_ = lean_array_size(v___x_3031_);
v___x_3033_ = ((size_t)0ULL);
v___x_3034_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(v_sz_3032_, v___x_3033_, v___x_3031_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_3034_) == 0)
{
lean_object* v_a_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3059_; 
v_a_3035_ = lean_ctor_get(v___x_3034_, 0);
v_isSharedCheck_3059_ = !lean_is_exclusive(v___x_3034_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3037_ = v___x_3034_;
v_isShared_3038_ = v_isSharedCheck_3059_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_a_3035_);
lean_dec(v___x_3034_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3059_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v_start_3039_; lean_object* v_stop_3040_; lean_object* v_start_3041_; lean_object* v_stop_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3054_; 
v_start_3039_ = lean_ctor_get(v_params_3021_, 1);
v_stop_3040_ = lean_ctor_get(v_params_3021_, 2);
v_start_3041_ = lean_ctor_get(v_discrs_3023_, 1);
v_stop_3042_ = lean_ctor_get(v_discrs_3023_, 2);
v___x_3043_ = lean_nat_sub(v_stop_3040_, v_start_3039_);
v___x_3044_ = lean_nat_sub(v_stop_3042_, v_start_3041_);
v___x_3045_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2);
v___x_3046_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3043_);
lean_ctor_set(v___x_3046_, 1, v___x_3044_);
lean_ctor_set(v___x_3046_, 2, v_a_3035_);
lean_ctor_set(v___x_3046_, 3, v___y_3030_);
lean_ctor_set(v___x_3046_, 4, v_discrInfos_3026_);
lean_ctor_set(v___x_3046_, 5, v___x_3045_);
v___x_3047_ = lean_array_mk(v_us_2937_);
v___x_3048_ = l_Subarray_copy___redArg(v_params_3021_);
v___x_3049_ = l_Subarray_copy___redArg(v_discrs_3023_);
v___x_3050_ = l_Subarray_copy___redArg(v_alts_3027_);
v___x_3051_ = l_Subarray_copy___redArg(v___y_3029_);
v___x_3052_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3046_);
lean_ctor_set(v___x_3052_, 1, v_declName_2936_);
lean_ctor_set(v___x_3052_, 2, v___x_3047_);
lean_ctor_set(v___x_3052_, 3, v___x_3048_);
lean_ctor_set(v___x_3052_, 4, v_motive_3022_);
lean_ctor_set(v___x_3052_, 5, v___x_3049_);
lean_ctor_set(v___x_3052_, 6, v___x_3050_);
lean_ctor_set(v___x_3052_, 7, v___x_3051_);
if (v_isShared_2998_ == 0)
{
lean_ctor_set_tag(v___x_2997_, 1);
lean_ctor_set(v___x_2997_, 0, v___x_3052_);
v___x_3054_ = v___x_2997_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v___x_3052_);
v___x_3054_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
lean_object* v___x_3056_; 
if (v_isShared_3038_ == 0)
{
lean_ctor_set(v___x_3037_, 0, v___x_3054_);
v___x_3056_ = v___x_3037_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v___x_3054_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
}
else
{
lean_object* v_a_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3067_; 
lean_dec(v___y_3030_);
lean_dec_ref(v___y_3029_);
lean_dec_ref(v_alts_3027_);
lean_dec_ref(v_discrInfos_3026_);
lean_dec_ref(v_discrs_3023_);
lean_dec(v_motive_3022_);
lean_dec_ref(v_params_3021_);
lean_del_object(v___x_2997_);
lean_dec(v_us_2937_);
lean_dec(v_declName_2936_);
v_a_3060_ = lean_ctor_get(v___x_3034_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_3034_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3062_ = v___x_3034_;
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_a_3060_);
lean_dec(v___x_3034_);
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
v___jp_3068_:
{
lean_object* v_levelParams_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; uint8_t v___x_3075_; 
v_levelParams_3071_ = lean_ctor_get(v_toConstantVal_2999_, 1);
lean_inc(v_levelParams_3071_);
lean_dec_ref(v_toConstantVal_2999_);
v___x_3072_ = l_Array_toSubarray___redArg(v_args_3008_, v_lower_3069_, v_upper_3070_);
v___x_3073_ = l_List_lengthTR___redArg(v_levelParams_3071_);
lean_dec(v_levelParams_3071_);
v___x_3074_ = l_List_lengthTR___redArg(v_us_2937_);
v___x_3075_ = lean_nat_dec_eq(v___x_3073_, v___x_3074_);
lean_dec(v___x_3074_);
lean_dec(v___x_3073_);
if (v___x_3075_ == 0)
{
lean_object* v___x_3076_; 
v___x_3076_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3));
v___y_3029_ = v___x_3072_;
v___y_3030_ = v___x_3076_;
goto v___jp_3028_;
}
else
{
v___y_3029_ = v___x_3072_;
v___y_3030_ = v___x_3025_;
goto v___jp_3028_;
}
}
}
}
}
else
{
lean_object* v___x_3079_; lean_object* v___x_3081_; 
lean_dec(v_a_2991_);
lean_dec(v_us_2937_);
lean_dec(v_declName_2936_);
lean_dec_ref(v_e_2922_);
v___x_3079_ = lean_box(0);
if (v_isShared_2994_ == 0)
{
lean_ctor_set(v___x_2993_, 0, v___x_3079_);
v___x_3081_ = v___x_2993_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v___x_3079_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec(v_us_2937_);
lean_dec(v_declName_2936_);
lean_dec_ref(v_e_2922_);
v_a_3084_ = lean_ctor_get(v___x_2990_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_2990_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_2990_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_2990_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
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
lean_dec_ref(v___x_2935_);
lean_dec_ref(v_e_2922_);
goto v___jp_2929_;
}
}
v___jp_2929_:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; 
v___x_2930_ = lean_box(0);
v___x_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2930_);
return v___x_2931_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed(lean_object* v_e_3093_, lean_object* v_alsoCasesOn_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_){
_start:
{
uint8_t v_alsoCasesOn_boxed_3100_; lean_object* v_res_3101_; 
v_alsoCasesOn_boxed_3100_ = lean_unbox(v_alsoCasesOn_3094_);
v_res_3101_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(v_e_3093_, v_alsoCasesOn_boxed_3100_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_);
lean_dec(v___y_3098_);
lean_dec_ref(v___y_3097_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
return v_res_3101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(lean_object* v_e_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_){
_start:
{
lean_object* v___x_3108_; uint8_t v___x_3109_; 
v___x_3108_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_3109_ = l_Lean_Expr_isAppOf(v_e_3102_, v___x_3108_);
if (v___x_3109_ == 0)
{
lean_object* v___x_3110_; uint8_t v___x_3111_; 
v___x_3110_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_3111_ = l_Lean_Expr_isAppOf(v_e_3102_, v___x_3110_);
if (v___x_3111_ == 0)
{
lean_object* v___x_3112_; uint8_t v___x_3113_; 
v___x_3112_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_3113_ = l_Lean_Expr_isAppOf(v_e_3102_, v___x_3112_);
if (v___x_3113_ == 0)
{
lean_object* v___x_3114_; uint8_t v___x_3115_; 
v___x_3114_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0));
v___x_3115_ = l_Lean_Expr_isAppOf(v_e_3102_, v___x_3114_);
if (v___x_3115_ == 0)
{
lean_object* v___x_3116_; uint8_t v___x_3117_; 
v___x_3116_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0));
v___x_3117_ = l_Lean_Expr_isAppOf(v_e_3102_, v___x_3116_);
if (v___x_3117_ == 0)
{
lean_object* v___x_3118_; uint8_t v___x_3119_; 
v___x_3118_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0));
v___x_3119_ = l_Lean_Expr_isAppOf(v_e_3102_, v___x_3118_);
if (v___x_3119_ == 0)
{
uint8_t v___x_3120_; lean_object* v___x_3121_; 
v___x_3120_ = 1;
v___x_3121_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(v_e_3102_, v___x_3120_, v_a_3103_, v_a_3104_, v_a_3105_, v_a_3106_);
if (lean_obj_tag(v___x_3121_) == 0)
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3142_; 
v_a_3122_ = lean_ctor_get(v___x_3121_, 0);
v_isSharedCheck_3142_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3142_ == 0)
{
v___x_3124_ = v___x_3121_;
v_isShared_3125_ = v_isSharedCheck_3142_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v___x_3121_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3142_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
if (lean_obj_tag(v_a_3122_) == 1)
{
lean_object* v_val_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3137_; 
v_val_3126_ = lean_ctor_get(v_a_3122_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v_a_3122_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3128_ = v_a_3122_;
v_isShared_3129_ = v_isSharedCheck_3137_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_val_3126_);
lean_dec(v_a_3122_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3137_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3130_; lean_object* v___x_3132_; 
v___x_3130_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3130_, 0, v_val_3126_);
if (v_isShared_3129_ == 0)
{
lean_ctor_set(v___x_3128_, 0, v___x_3130_);
v___x_3132_ = v___x_3128_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v___x_3130_);
v___x_3132_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
lean_object* v___x_3134_; 
if (v_isShared_3125_ == 0)
{
lean_ctor_set(v___x_3124_, 0, v___x_3132_);
v___x_3134_ = v___x_3124_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v___x_3132_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
else
{
lean_object* v___x_3138_; lean_object* v___x_3140_; 
lean_dec(v_a_3122_);
v___x_3138_ = lean_box(0);
if (v_isShared_3125_ == 0)
{
lean_ctor_set(v___x_3124_, 0, v___x_3138_);
v___x_3140_ = v___x_3124_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v___x_3138_);
v___x_3140_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
return v___x_3140_;
}
}
}
}
else
{
lean_object* v_a_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3150_; 
v_a_3143_ = lean_ctor_get(v___x_3121_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3145_ = v___x_3121_;
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_a_3143_);
lean_dec(v___x_3121_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3148_; 
if (v_isShared_3146_ == 0)
{
v___x_3148_ = v___x_3145_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_a_3143_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
}
else
{
lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___x_3151_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3151_, 0, v_e_3102_);
v___x_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3152_, 0, v___x_3151_);
v___x_3153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3152_);
return v___x_3153_;
}
}
else
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3154_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3154_, 0, v_e_3102_);
v___x_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3154_);
v___x_3156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3156_, 0, v___x_3155_);
return v___x_3156_;
}
}
else
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3157_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3157_, 0, v_e_3102_);
v___x_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3157_);
v___x_3159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3158_);
return v___x_3159_;
}
}
else
{
lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3160_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3160_, 0, v_e_3102_);
v___x_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3160_);
v___x_3162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3161_);
return v___x_3162_;
}
}
else
{
lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3163_, 0, v_e_3102_);
v___x_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
v___x_3165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3164_);
return v___x_3165_;
}
}
else
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3166_, 0, v_e_3102_);
v___x_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3166_);
v___x_3168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3167_);
return v___x_3168_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___boxed(lean_object* v_e_3169_, lean_object* v_a_3170_, lean_object* v_a_3171_, lean_object* v_a_3172_, lean_object* v_a_3173_, lean_object* v_a_3174_){
_start:
{
lean_object* v_res_3175_; 
v_res_3175_ = l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(v_e_3169_, v_a_3170_, v_a_3171_, v_a_3172_, v_a_3173_);
lean_dec(v_a_3173_);
lean_dec_ref(v_a_3172_);
lean_dec(v_a_3171_);
lean_dec_ref(v_a_3170_);
return v_res_3175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(lean_object* v_declName_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_){
_start:
{
lean_object* v___x_3182_; 
v___x_3182_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_3176_, v___y_3180_);
return v___x_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___boxed(lean_object* v_declName_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_){
_start:
{
lean_object* v_res_3189_; 
v_res_3189_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(v_declName_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec(v___y_3185_);
lean_dec_ref(v___y_3184_);
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3190_, lean_object* v_constName_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_){
_start:
{
lean_object* v___x_3197_; 
v___x_3197_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3198_, lean_object* v_constName_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_){
_start:
{
lean_object* v_res_3205_; 
v_res_3205_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(v_00_u03b1_3198_, v_constName_3199_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_);
lean_dec(v___y_3203_);
lean_dec_ref(v___y_3202_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
return v_res_3205_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_3206_, lean_object* v_ref_3207_, lean_object* v_constName_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v___x_3214_; 
v___x_3214_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_3207_, v_constName_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
return v___x_3214_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_3215_, lean_object* v_ref_3216_, lean_object* v_constName_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_){
_start:
{
lean_object* v_res_3223_; 
v_res_3223_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_3215_, v_ref_3216_, v_constName_3217_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_);
lean_dec(v___y_3221_);
lean_dec_ref(v___y_3220_);
lean_dec(v___y_3219_);
lean_dec_ref(v___y_3218_);
lean_dec(v_ref_3216_);
return v_res_3223_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_3224_, lean_object* v_ref_3225_, lean_object* v_msg_3226_, lean_object* v_declHint_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_){
_start:
{
lean_object* v___x_3233_; 
v___x_3233_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_3225_, v_msg_3226_, v_declHint_3227_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_);
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_3234_, lean_object* v_ref_3235_, lean_object* v_msg_3236_, lean_object* v_declHint_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_){
_start:
{
lean_object* v_res_3243_; 
v_res_3243_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_3234_, v_ref_3235_, v_msg_3236_, v_declHint_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3238_);
lean_dec(v_ref_3235_);
return v_res_3243_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(lean_object* v_msg_3244_, lean_object* v_declHint_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_3244_, v_declHint_3245_, v___y_3249_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___boxed(lean_object* v_msg_3252_, lean_object* v_declHint_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_){
_start:
{
lean_object* v_res_3259_; 
v_res_3259_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(v_msg_3252_, v_declHint_3253_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_);
lean_dec(v___y_3257_);
lean_dec_ref(v___y_3256_);
lean_dec(v___y_3255_);
lean_dec_ref(v___y_3254_);
return v_res_3259_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(lean_object* v_00_u03b1_3260_, lean_object* v_ref_3261_, lean_object* v_msg_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_3261_, v_msg_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___boxed(lean_object* v_00_u03b1_3269_, lean_object* v_ref_3270_, lean_object* v_msg_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(v_00_u03b1_3269_, v_ref_3270_, v_msg_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v_ref_3270_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(lean_object* v_00_u03b1_3278_, lean_object* v_msg_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_){
_start:
{
lean_object* v___x_3285_; 
v___x_3285_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_);
return v___x_3285_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___boxed(lean_object* v_00_u03b1_3286_, lean_object* v_msg_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_){
_start:
{
lean_object* v_res_3293_; 
v_res_3293_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(v_00_u03b1_3286_, v_msg_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
return v_res_3293_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1(void){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3295_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0));
v___x_3296_ = l_Lean_stringToMessageData(v___x_3295_);
return v___x_3296_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3(void){
_start:
{
lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___x_3298_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__2));
v___x_3299_ = l_Lean_stringToMessageData(v___x_3298_);
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher(lean_object* v_idx_3300_, lean_object* v_e_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_){
_start:
{
lean_object* v___y_3308_; lean_object* v___y_3336_; lean_object* v___y_3337_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; lean_object* v___x_3421_; uint8_t v___x_3422_; 
v___x_3421_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_3422_ = l_Lean_Expr_isAppOf(v_e_3301_, v___x_3421_);
if (v___x_3422_ == 0)
{
lean_object* v___x_3423_; uint8_t v___x_3424_; 
v___x_3423_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_3424_ = l_Lean_Expr_isAppOf(v_e_3301_, v___x_3423_);
if (v___x_3424_ == 0)
{
lean_object* v___x_3425_; uint8_t v___x_3426_; 
v___x_3425_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___closed__0));
v___x_3426_ = l_Lean_Expr_isAppOf(v_e_3301_, v___x_3425_);
if (v___x_3426_ == 0)
{
lean_object* v___x_3427_; uint8_t v___x_3428_; 
v___x_3427_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__28___closed__0));
v___x_3428_ = l_Lean_Expr_isAppOf(v_e_3301_, v___x_3427_);
if (v___x_3428_ == 0)
{
lean_object* v___x_3429_; uint8_t v___x_3430_; 
v___x_3429_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_3430_ = l_Lean_Expr_isAppOf(v_e_3301_, v___x_3429_);
if (v___x_3430_ == 0)
{
lean_object* v___x_3431_; uint8_t v___x_3432_; 
v___x_3431_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18___closed__0));
v___x_3432_ = l_Lean_Expr_isAppOf(v_e_3301_, v___x_3431_);
if (v___x_3432_ == 0)
{
lean_object* v___x_3433_; 
v___x_3433_ = l_Lean_Meta_rwMatcher(v_idx_3300_, v_e_3301_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
return v___x_3433_;
}
else
{
goto v___jp_3411_;
}
}
else
{
goto v___jp_3411_;
}
}
else
{
goto v___jp_3326_;
}
}
else
{
goto v___jp_3326_;
}
}
else
{
goto v___jp_3326_;
}
}
else
{
goto v___jp_3326_;
}
v___jp_3307_:
{
lean_object* v___x_3309_; 
lean_inc_ref(v___y_3308_);
v___x_3309_ = l_Lean_Meta_findLocalDeclWithType_x3f(v___y_3308_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_object* v_a_3310_; 
v_a_3310_ = lean_ctor_get(v___x_3309_, 0);
lean_inc(v_a_3310_);
lean_dec_ref_known(v___x_3309_, 1);
if (lean_obj_tag(v_a_3310_) == 1)
{
lean_object* v_val_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
lean_dec_ref(v___y_3308_);
v_val_3311_ = lean_ctor_get(v_a_3310_, 0);
lean_inc(v_val_3311_);
lean_dec_ref_known(v_a_3310_, 1);
v___x_3312_ = l_Lean_mkFVar(v_val_3311_);
v___x_3313_ = l_Lean_Meta_rwIfWith(v___x_3312_, v_e_3301_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
return v___x_3313_;
}
else
{
lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; 
lean_dec(v_a_3310_);
lean_dec_ref(v_e_3301_);
v___x_3314_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1, &l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1_once, _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1);
v___x_3315_ = l_Lean_MessageData_ofExpr(v___y_3308_);
v___x_3316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3314_);
lean_ctor_set(v___x_3316_, 1, v___x_3315_);
v___x_3317_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v___x_3316_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
return v___x_3317_;
}
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
lean_dec_ref(v___y_3308_);
lean_dec_ref(v_e_3301_);
v_a_3318_ = lean_ctor_get(v___x_3309_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3309_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3309_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
v___jp_3326_:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v_c_3331_; lean_object* v___x_3332_; uint8_t v___x_3333_; 
v___x_3327_ = lean_unsigned_to_nat(1u);
v___x_3328_ = l_Lean_Expr_getAppNumArgs(v_e_3301_);
v___x_3329_ = lean_nat_sub(v___x_3328_, v___x_3327_);
lean_dec(v___x_3328_);
v___x_3330_ = lean_nat_sub(v___x_3329_, v___x_3327_);
lean_dec(v___x_3329_);
v_c_3331_ = l_Lean_Expr_getRevArg_x21(v_e_3301_, v___x_3330_);
v___x_3332_ = lean_unsigned_to_nat(0u);
v___x_3333_ = lean_nat_dec_eq(v_idx_3300_, v___x_3332_);
lean_dec(v_idx_3300_);
if (v___x_3333_ == 0)
{
lean_object* v___x_3334_; 
v___x_3334_ = l_Lean_mkNot(v_c_3331_);
v___y_3308_ = v___x_3334_;
goto v___jp_3307_;
}
else
{
v___y_3308_ = v_c_3331_;
goto v___jp_3307_;
}
}
v___jp_3335_:
{
lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3341_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3, &l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3_once, _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__3);
v___x_3342_ = l_Lean_MessageData_ofExpr(v___y_3336_);
v___x_3343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3341_);
lean_ctor_set(v___x_3343_, 1, v___x_3342_);
v___x_3344_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v___x_3343_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_);
return v___x_3344_;
}
v___jp_3345_:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3349_ = lean_box(0);
lean_inc(v___y_3348_);
v___x_3350_ = l_Lean_mkConst(v___y_3348_, v___x_3349_);
lean_inc_ref(v___y_3346_);
v___x_3351_ = l_Lean_Meta_mkEq(v___y_3346_, v___x_3350_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v_a_3352_; lean_object* v___x_3353_; 
v_a_3352_ = lean_ctor_get(v___x_3351_, 0);
lean_inc_n(v_a_3352_, 2);
lean_dec_ref_known(v___x_3351_, 1);
v___x_3353_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_a_3352_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_a_3354_);
lean_dec_ref_known(v___x_3353_, 1);
if (lean_obj_tag(v_a_3354_) == 1)
{
lean_object* v_val_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
lean_dec(v_a_3352_);
lean_dec_ref(v___y_3346_);
lean_dec(v_idx_3300_);
v_val_3355_ = lean_ctor_get(v_a_3354_, 0);
lean_inc(v_val_3355_);
lean_dec_ref_known(v_a_3354_, 1);
v___x_3356_ = l_Lean_mkFVar(v_val_3355_);
v___x_3357_ = l_Lean_Meta_rwIfWith(v___x_3356_, v_e_3301_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
return v___x_3357_;
}
else
{
uint8_t v___x_3358_; lean_object* v___x_3359_; 
lean_dec(v_a_3354_);
v___x_3358_ = lean_nat_dec_eq(v_idx_3300_, v___y_3347_);
lean_dec(v_idx_3300_);
v___x_3359_ = l_Lean_Meta_boolCondToProp_x3f(v___y_3346_, v___x_3358_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
if (lean_obj_tag(v___x_3359_) == 0)
{
lean_object* v_a_3360_; 
v_a_3360_ = lean_ctor_get(v___x_3359_, 0);
lean_inc(v_a_3360_);
lean_dec_ref_known(v___x_3359_, 1);
if (lean_obj_tag(v_a_3360_) == 1)
{
lean_object* v_val_3361_; lean_object* v_fst_3362_; lean_object* v_snd_3363_; lean_object* v___x_3364_; 
v_val_3361_ = lean_ctor_get(v_a_3360_, 0);
lean_inc(v_val_3361_);
lean_dec_ref_known(v_a_3360_, 1);
v_fst_3362_ = lean_ctor_get(v_val_3361_, 0);
lean_inc(v_fst_3362_);
v_snd_3363_ = lean_ctor_get(v_val_3361_, 1);
lean_inc(v_snd_3363_);
lean_dec(v_val_3361_);
v___x_3364_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_fst_3362_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_object* v_a_3365_; 
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
lean_inc(v_a_3365_);
lean_dec_ref_known(v___x_3364_, 1);
if (lean_obj_tag(v_a_3365_) == 1)
{
lean_object* v_val_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
lean_dec(v_a_3352_);
v_val_3366_ = lean_ctor_get(v_a_3365_, 0);
lean_inc(v_val_3366_);
lean_dec_ref_known(v_a_3365_, 1);
v___x_3367_ = l_Lean_mkFVar(v_val_3366_);
v___x_3368_ = l_Lean_Meta_mkEqMPR(v_snd_3363_, v___x_3367_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_a_3369_; lean_object* v___x_3370_; 
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_a_3369_);
lean_dec_ref_known(v___x_3368_, 1);
v___x_3370_ = l_Lean_Meta_rwIfWith(v_a_3369_, v_e_3301_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_);
return v___x_3370_;
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
lean_dec_ref(v_e_3301_);
v_a_3371_ = lean_ctor_get(v___x_3368_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3368_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3368_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3368_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3371_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
}
else
{
lean_dec(v_a_3365_);
lean_dec(v_snd_3363_);
lean_dec_ref(v_e_3301_);
v___y_3336_ = v_a_3352_;
v___y_3337_ = v_a_3302_;
v___y_3338_ = v_a_3303_;
v___y_3339_ = v_a_3304_;
v___y_3340_ = v_a_3305_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3386_; 
lean_dec(v_snd_3363_);
lean_dec(v_a_3352_);
lean_dec_ref(v_e_3301_);
v_a_3379_ = lean_ctor_get(v___x_3364_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v___x_3364_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3381_ = v___x_3364_;
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_a_3379_);
lean_dec(v___x_3364_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_a_3379_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
return v___x_3384_;
}
}
}
}
else
{
lean_dec(v_a_3360_);
lean_dec_ref(v_e_3301_);
v___y_3336_ = v_a_3352_;
v___y_3337_ = v_a_3302_;
v___y_3338_ = v_a_3303_;
v___y_3339_ = v_a_3304_;
v___y_3340_ = v_a_3305_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3394_; 
lean_dec(v_a_3352_);
lean_dec_ref(v_e_3301_);
v_a_3387_ = lean_ctor_get(v___x_3359_, 0);
v_isSharedCheck_3394_ = !lean_is_exclusive(v___x_3359_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3389_ = v___x_3359_;
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v___x_3359_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3392_; 
if (v_isShared_3390_ == 0)
{
v___x_3392_ = v___x_3389_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v_a_3387_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
}
}
}
else
{
lean_object* v_a_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3402_; 
lean_dec(v_a_3352_);
lean_dec_ref(v___y_3346_);
lean_dec_ref(v_e_3301_);
lean_dec(v_idx_3300_);
v_a_3395_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3402_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3397_ = v___x_3353_;
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_a_3395_);
lean_dec(v___x_3353_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v___x_3400_; 
if (v_isShared_3398_ == 0)
{
v___x_3400_ = v___x_3397_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v_a_3395_);
v___x_3400_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
return v___x_3400_;
}
}
}
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_dec_ref(v___y_3346_);
lean_dec_ref(v_e_3301_);
lean_dec(v_idx_3300_);
v_a_3403_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3351_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3351_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
v___jp_3411_:
{
lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v_c_3416_; lean_object* v___x_3417_; uint8_t v___x_3418_; 
v___x_3412_ = lean_unsigned_to_nat(1u);
v___x_3413_ = l_Lean_Expr_getAppNumArgs(v_e_3301_);
v___x_3414_ = lean_nat_sub(v___x_3413_, v___x_3412_);
lean_dec(v___x_3413_);
v___x_3415_ = lean_nat_sub(v___x_3414_, v___x_3412_);
lean_dec(v___x_3414_);
v_c_3416_ = l_Lean_Expr_getRevArg_x21(v_e_3301_, v___x_3415_);
v___x_3417_ = lean_unsigned_to_nat(0u);
v___x_3418_ = lean_nat_dec_eq(v_idx_3300_, v___x_3417_);
if (v___x_3418_ == 0)
{
lean_object* v___x_3419_; 
v___x_3419_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__0));
v___y_3346_ = v_c_3416_;
v___y_3347_ = v___x_3417_;
v___y_3348_ = v___x_3419_;
goto v___jp_3345_;
}
else
{
lean_object* v___x_3420_; 
v___x_3420_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withBoolCaseHyp___redArg___closed__2));
v___y_3346_ = v_c_3416_;
v___y_3347_ = v___x_3417_;
v___y_3348_ = v___x_3420_;
goto v___jp_3345_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___boxed(lean_object* v_idx_3434_, lean_object* v_e_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_){
_start:
{
lean_object* v_res_3441_; 
v_res_3441_ = l_Lean_Elab_Tactic_Do_rwIfOrMatcher(v_idx_3434_, v_e_3435_, v_a_3436_, v_a_3437_, v_a_3438_, v_a_3439_);
lean_dec(v_a_3439_);
lean_dec_ref(v_a_3438_);
lean_dec(v_a_3437_);
lean_dec_ref(v_a_3436_);
return v_res_3441_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BoolToProp(uint8_t builtin);
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
res = runtime_initialize_Lean_Meta_Tactic_BoolToProp(builtin);
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
lean_object* initialize_Lean_Meta_Tactic_BoolToProp(uint8_t builtin);
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
res = initialize_Lean_Meta_Tactic_BoolToProp(builtin);
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
